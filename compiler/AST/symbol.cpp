#include <typeinfo>
#include "analysis.h"
#include "files.h"
#include "misc.h"
#include "stmt.h"
#include "stringutil.h"
#include "symbol.h"
#include "symtab.h"
#include "sym.h"
#include "fun.h"
#include "../traversals/buildClassConstructorsEtc.h"
#include "../traversals/clearTypes.h"
#include "../traversals/updateSymbols.h"
#include "../symtab/collectFunctions.h"
#include "../traversals/findTypeVariables.h"

Symbol *gNil = 0;


Symbol::Symbol(astType_t astType, char* init_name, Type* init_type, 
               bool init_exportMe) :
  BaseAST(astType),
  name(init_name),
  cname(name),
  type(init_type),
  exportMe(init_exportMe),
  isDead(false),
  keepLive(false),
  defPoint(NULL),
  asymbol(0),
  overload(NULL)
{}


void Symbol::setParentScope(SymScope* init_parentScope) {
  parentScope = init_parentScope;
}


Symbol*
Symbol::copyInner(bool clone, Map<BaseAST*,BaseAST*>* map) {
  INT_FATAL(this, "Illegal call to Symbol::copy");
  return NULL;
}


void Symbol::replaceChild(BaseAST* old_ast, BaseAST* new_ast) {
  INT_FATAL(this, "Unexpected call to Symbol::replaceChild");
}


void Symbol::traverse(Traversal* traversal, bool atTop) {
  SymScope* saveScope = NULL;
  if (atTop) {
    saveScope = Symboltable::setCurrentScope(parentScope);
  }
  if (traversal->processTop || !atTop) {
    currentLineno = lineno;
    currentFilename = filename;
    traversal->preProcessSymbol(this);
  }
  if (atTop || traversal->exploreChildSymbols) {
    if (atTop) {
      traverseDefSymbol(traversal);
    }
    else {
      traverseSymbol(traversal);
    }
  }
  if (traversal->processTop || !atTop) {
    currentLineno = lineno;
    currentFilename = filename;
    traversal->postProcessSymbol(this);
  }
  if (atTop) {
    Symboltable::setCurrentScope(saveScope);
  }
}


void Symbol::traverseDef(Traversal* traversal, bool atTop) {
  SymScope* saveScope = NULL;
  if (atTop) {
    saveScope = Symboltable::setCurrentScope(parentScope);
  }
  if (traversal->processTop || !atTop) {
    currentLineno = lineno;
    currentFilename = filename;
    traversal->preProcessSymbol(this);
  }
  traverseDefSymbol(traversal);
  if (traversal->processTop || !atTop) {
    currentLineno = lineno;
    currentFilename = filename;
    traversal->postProcessSymbol(this);
  }
  if (atTop) {
    Symboltable::setCurrentScope(saveScope);
  }
}


void Symbol::traverseSymbol(Traversal* traversal) {
  
}


void Symbol::traverseDefSymbol(Traversal* traversal) {
}


bool Symbol::isConst(void) {
  return true;
}

//Roxana: not all symbols are parameter symbols
bool Symbol::isParam(){
        return false;
}

void Symbol::print(FILE* outfile) {
  fprintf(outfile, "%s", name);
}


void Symbol::codegen(FILE* outfile) {
  if (hasPragma("codegen data")) {
    StructuralType* dataType = dynamic_cast<StructuralType*>(type);
    dataType->methods.v[0]->retType->codegen(outfile);
    fprintf(outfile, "*", cname);
  } else {
    fprintf(outfile, "%s", cname);
  }
}


void Symbol::codegenDef(FILE* outfile) {
  INT_FATAL(this, "Unanticipated call to Symbol::codegenDef");
}


void Symbol::codegenPrototype(FILE* outfile) { }


void Symbol::printDef(FILE* outfile) {
  print(outfile);
}


void Symbol::setDefPoint(DefExpr* init_defPoint) {
  defPoint = init_defPoint;
}


FnSymbol* Symbol::getFnSymbol(void) {
  return NULL;
}


Symbol* Symbol::getSymbol(void) {
  return this;
}


Type* Symbol::typeInfo(void) {
  return type;
}


UnresolvedSymbol::UnresolvedSymbol(char* init_name, char* init_cname) :
  Symbol(SYMBOL_UNRESOLVED, init_name)
{
  if (init_cname) {
    cname = init_cname;
  }
}


void UnresolvedSymbol::codegen(FILE* outfile) {
  INT_FATAL(this, "ERROR:  Cannot codegen an unresolved symbol.");
}


UnresolvedSymbol*
UnresolvedSymbol::copyInner(bool clone, Map<BaseAST*,BaseAST*>* map) {
  return new UnresolvedSymbol(copystring(name));
}


void UnresolvedSymbol::traverseDefSymbol(Traversal* traversal) {
  TRAVERSE(this, traversal, false);
}


VarSymbol::VarSymbol(char* init_name,
                     Type* init_type,
                     varType init_varClass, 
                     consType init_consClass) :
  Symbol(SYMBOL_VAR, init_name, init_type),
  varClass(init_varClass),
  consClass(init_consClass),
  aspect(NULL),
  noDefaultInit(false)
{
  if (name) { // ensure this is not a sentinel
#ifdef NUMBER_VAR_SYMBOLS_UNIQUELY
    static int uid = 0;
    cname = glomstrings(4, name, "__", intstring(uid++), "__");
#endif
    /** SJD hack because __init_fn is not set up with a scope **/
    if (Symbol* init_fn = Symboltable::getCurrentScope()->symContext) {
      if (!strncmp("__init_", init_fn->name, 7)) {
        Symboltable::defineInScope(this, Symboltable::getCurrentScope()->parent);
      } else {
        Symboltable::define(this);
      }
    } else {
      Symboltable::define(this);
    }
  }
}


VarSymbol*
VarSymbol::copyInner(bool clone, Map<BaseAST*,BaseAST*>* map) {
  VarSymbol* newVarSymbol = 
    new VarSymbol(copystring(name), type, varClass, consClass);
  newVarSymbol->aspect = aspect;
  newVarSymbol->noDefaultInit = noDefaultInit;
  return newVarSymbol;
}


void VarSymbol::replaceChild(BaseAST* old_ast, BaseAST* new_ast) {
  type->replaceChild(old_ast, new_ast);
}


void VarSymbol::traverseDefSymbol(Traversal* traversal) {
  SymScope* saveScope = NULL;
  /** SJD: assumes no nested arrays, should use a traversal to push scopes **/
  if (ArrayType* array_type = dynamic_cast<ArrayType*>(type)) {
    if (ForallExpr* forall = dynamic_cast<ForallExpr*>(array_type->domain)) {
      if (forall->indexScope) {
        saveScope = Symboltable::setCurrentScope(forall->indexScope);
      }
    }
  }
  TRAVERSE(type, traversal, false);
  if (saveScope) {
    Symboltable::setCurrentScope(saveScope);
  }
}


void VarSymbol::printDef(FILE* outfile) {
  if (varClass == VAR_CONFIG) {
    fprintf(outfile, "config ");
  }
  if (varClass == VAR_STATE) {
    fprintf(outfile, "state ");
  }
  //Roxana -- introduced various types of constness: const, param, nothing (var)
  if (consClass == VAR_CONST) {
    fprintf(outfile, "const ");
  } else if (consClass == VAR_PARAM){
        fprintf(outfile, "param");
  }
  else {
    fprintf(outfile, "var ");
  }
  print(outfile);
  fprintf(outfile, ": ");
  type->print(outfile);
}


bool VarSymbol::initializable(void) {
  switch (parentScope->type) {
  case SCOPE_FUNCTION:
  case SCOPE_LOCAL:
  case SCOPE_MODULE:
    return true;
  case SCOPE_INTRINSIC:
  case SCOPE_PRELUDE:
  case SCOPE_POSTPARSE:
  case SCOPE_PARAM:
  case SCOPE_FORLOOP:
  case SCOPE_FORALLEXPR:
  case SCOPE_CLASS:
    return false;
  default:
    INT_FATAL(this, "unhandled case in needsTypeInitialization()");
  }
  return false;
}

//Roxana
bool VarSymbol::isConst(void) {
  return (consClass == VAR_CONST);
}

//Roxana
bool VarSymbol::isParam(void){
  return (consClass == VAR_PARAM);
}

bool Symbol::isThis(void) {
  FnSymbol *f = dynamic_cast<FnSymbol*>(defPoint->parentSymbol);
  if (!f || !f->_this)
    return 0;
  else
    return f->_this == this;
}

void VarSymbol::codegenDef(FILE* outfile) {
  // need to ensure that this can be realized in C as a const, and
  // move its initializer here if it can be
  if (0 && (consClass == VAR_CONST)) {
    fprintf(outfile, "const ");
  }
  type->codegen(outfile);
  if (varClass == VAR_REF)
    fprintf(outfile, "*");
  fprintf(outfile, " ");
  this->codegen(outfile);
  if (this->initializable() && varClass != VAR_REF) {
    type->codegenSafeInit(outfile);
  }
  fprintf(outfile, ";\n");
}


static char* paramTypeNames[NUM_PARAM_TYPES] = {
  "",
  "in",
  "inout",
  "out",
  "const",
  "ref"
};


ParamSymbol::ParamSymbol(paramType init_intent, char* init_name, 
                         Type* init_type) :
  Symbol(SYMBOL_PARAM, init_name, init_type),
  intent(init_intent),
  typeVariable(NULL),
  isGeneric(false)
{
  if (name) {  // ensure this is not a sentinel
    Symboltable::define(this);
  }
  if (intent == PARAM_PARAMETER || intent == PARAM_TYPE)
    isGeneric = true;
}


ParamSymbol*
ParamSymbol::copyInner(bool clone, Map<BaseAST*,BaseAST*>* map) {
  ParamSymbol *ps = new ParamSymbol(intent, copystring(name), type);
  if (typeVariable)
    ps->typeVariable = typeVariable;
  ps->isGeneric = isGeneric;
  return ps;
}


void ParamSymbol::replaceChild(BaseAST* old_ast, BaseAST* new_ast) {
  type->replaceChild(old_ast, new_ast);
}


void ParamSymbol::traverseDefSymbol(Traversal* traversal) {
  TRAVERSE(type, traversal, false);
  TRAVERSE(typeVariable, traversal, false);
}


void ParamSymbol::printDef(FILE* outfile) {
  fprintf(outfile, "%s ", paramTypeNames[intent]);
  Symbol::print(outfile);
  fprintf(outfile, ": ");
  type->print(outfile);
}


bool ParamSymbol::requiresCPtr(void) {
  return (((intent == PARAM_OUT || intent == PARAM_INOUT || 
            (intent == PARAM_REF && !is_Reference_Type(type))) && 
           type->outParamNeedsPtr()) ||
          (intent == PARAM_BLANK && type->blankIntentImpliesRef()));
}


bool ParamSymbol::requiresCopyBack(void) {
  return ((intent == PARAM_OUT || intent == PARAM_INOUT) &&
          type->outParamNeedsPtr());
}


bool ParamSymbol::requiresCTmp(void) {
  return type->requiresCParamTmp(intent);
}


bool ParamSymbol::isConst(void) {
  // TODO: need to also handle case of PARAM_BLANK for scalar types
  return (intent == PARAM_CONST); 
}


void ParamSymbol::codegen(FILE* outfile) {
  bool requiresDeref = requiresCPtr();
 
  if (requiresDeref) {
    fprintf(outfile, "(*");
  }
  Symbol::codegen(outfile);
  if (requiresDeref) {
    fprintf(outfile, ")");
  }
}


void ParamSymbol::codegenDef(FILE* outfile) {
  type->codegen(outfile);
  if (requiresCPtr()) {
    fprintf(outfile, "* const");
  }
  fprintf(outfile, " ");
  Symbol::codegen(outfile);
}


TypeSymbol::TypeSymbol(char* init_name, Type* init_definition) :
  Symbol(SYMBOL_TYPE, init_name, init_definition)
{
  Symboltable::define(this);
}


TypeSymbol*
TypeSymbol::copyInner(bool clone, Map<BaseAST*,BaseAST*>* map) {
  Type* new_type = COPY_INTERNAL(type);
  TypeSymbol* new_type_symbol = new TypeSymbol(copystring(name), new_type);
  new_type->addSymbol(new_type_symbol);
  if (StructuralType* stype =
      dynamic_cast<StructuralType*>(new_type)) {
    stype->structScope->setContext(NULL, new_type_symbol);
  }
  return new_type_symbol;
}


TypeSymbol* TypeSymbol::clone(Map<BaseAST*,BaseAST*>* map) {
  static int uid = 1; // Unique ID for cloned classes
  StructuralType* old_class_type = dynamic_cast<StructuralType*>(type);
  if (!old_class_type) {
    INT_FATAL(this, "Attempt to clone non-class type");
  }
  SymScope* save_scope = Symboltable::setCurrentScope(parentScope);
  TypeSymbol* clone = copy(true, map);
  if (ClassType* newClassType = dynamic_cast<ClassType*>(clone->type)) {
    ClassType* oldClassType = dynamic_cast<ClassType*>(type);
    if (!oldClassType) {
      INT_FATAL(this, "Cloning of ClassType went horribly wrong");
    }
    newClassType->parentClasses.add(oldClassType);
  }
  clone->cname = glomstrings(3, clone->cname, "_clone_", intstring(uid++));
  DefExpr* new_def_expr = new DefExpr(clone);
  StructuralType* new_class_type = dynamic_cast<StructuralType*>(clone->type);
  new_class_type->structScope->setContext(NULL, clone, new_def_expr);
  defPoint->parentStmt->insertBefore(new DefStmt(new_def_expr));
  Symboltable::setCurrentScope(save_scope);
  return clone;
}


void TypeSymbol::replaceChild(BaseAST* old_ast, BaseAST* new_ast) {
  type->replaceChild(old_ast, new_ast);
}


void TypeSymbol::traverseDefSymbol(Traversal* traversal) {
  TRAVERSE_DEF(type, traversal, false);
}


void TypeSymbol::codegenPrototype(FILE* outfile) {
  if (isDead) {
    return;
  }
  type->codegenPrototype(outfile);
}


void TypeSymbol::codegenDef(FILE* outfile) {
  if (isDead) {
    return;
  }

  type->codegenDef(outfile);
}


/***
 *** SJD: I'm assuming a tuple with component types that are all
 *** primitive types and I'm declaring this thing with a mangled name
 *** in the commonModule.  This won't be possible when we support
 *** tuples of different types.  In this case, they may have to be
 *** defined in the scope they are used.
 ***/
TypeSymbol* TypeSymbol::lookupOrDefineTupleTypeSymbol(Vec<Type*>* components) {
  char* name = glomstrings(1, "_tuple");
  forv_Vec(Type, component, *components) {
    name = glomstrings(3, name, "_", component->symbol->name);
  }
  SymScope* saveScope = Symboltable::setCurrentScope(commonModule->modScope);
  TypeSymbol* tupleSym =
    dynamic_cast<TypeSymbol*>(Symboltable::lookupInCurrentScope(name));
  if (!tupleSym) {
    TupleType* tupleType = new TupleType();
    forv_Vec(Type, component, *components) {
      tupleType->addType(component);
    }
    tupleSym = new TypeSymbol(name, tupleType);
    tupleType->addSymbol(tupleSym);
    DefExpr* defExpr = new DefExpr(tupleSym);
    DefStmt* defStmt = new DefStmt(defExpr);
    tupleType->structScope->setContext(NULL, tupleSym, defExpr);
    commonModule->stmts->insertAtHead(defStmt);
    buildDefaultStructuralTypeMethods(tupleType);
  }
  Symboltable::setCurrentScope(saveScope);
  return tupleSym;
}


FnSymbol::FnSymbol(char* init_name, Symbol* init_typeBinding) :
  Symbol(SYMBOL_FN, init_name, new FnType()),
  formals(NULL),
  retType(NULL),
  _this(NULL),
  _setter(NULL),
  _getter(NULL),
  body(NULL),
  typeBinding(init_typeBinding),
  fnClass(FN_FUNCTION),
  whereExpr(NULL),
  noparens(false)
{
  Symboltable::define(this);
  method_type = NON_METHOD;
}


void FnSymbol::continueDef(AList<DefExpr>* init_formals, Type* init_retType, bool isRef, Expr *init_whereExpr) {
  formals = init_formals;
  retType = init_retType;
  retRef = isRef;
  whereExpr = init_whereExpr;
}


void FnSymbol::finishDef(BlockStmt* init_body, SymScope* init_paramScope,
                         bool init_exportMe) {
  body = init_body;
  exportMe = init_exportMe;
  paramScope = init_paramScope;

  if (strcmp(name, "main") == 0 && 
      (parentScope->type == SCOPE_MODULE || 
       parentScope->type == SCOPE_POSTPARSE) &&
      formals->isEmpty()) {
    if (!mainFn) {
      mainFn = this;
      exportMe = true;
      cname = copystring("_chpl_main");
    } else {
      USR_FATAL(this, "main multiply defined -- first occurrence at %s",
                mainFn->stringLoc());
    }
  }
}


FnSymbol* FnSymbol::getFnSymbol(void) {
  return this;
}


FnSymbol*
FnSymbol::copyInner(bool clone, Map<BaseAST*,BaseAST*>* map) {
  char* copy_name = copystring(name);
  FnSymbol* copy = new FnSymbol(copy_name, typeBinding);
  copy->method_type = method_type;
  copy->fnClass = fnClass;
  Symboltable::startFnDef(copy);
  copy->_getter = _getter; // If it is a cloned class we probably want this
  copy->_setter = _setter; //  to point to the new member, but how do we do that
  copy->_this = _this;
  AList<DefExpr>* new_formals =
    dynamic_cast<AList<DefExpr>*>(CLONE_INTERNAL(formals));
  Symboltable::continueFnDef(copy, new_formals, retType, retRef,
                             CLONE_INTERNAL(whereExpr));
  BlockStmt* new_body = 
    dynamic_cast<BlockStmt*>(CLONE_INTERNAL(body));
  if (body != NULL && new_body == NULL) {
    INT_FATAL(body, "function body was not a BlockStmt!?");
  }
  return Symboltable::finishFnDef(copy, new_body, exportMe);
}


void FnSymbol::replaceChild(BaseAST* old_ast, BaseAST* new_ast) {
  if (old_ast == body) {
    body = dynamic_cast<BlockStmt*>(new_ast);
  } else if (old_ast == formals) {
    formals = dynamic_cast<AList<DefExpr>*>(new_ast);
  } else if (old_ast == whereExpr) {
    whereExpr = dynamic_cast<Expr*>(new_ast);
  } else {
    INT_FATAL(this, "Unexpected case in FnSymbol::replaceChild");
  }
}


void FnSymbol::traverseDefSymbol(Traversal* traversal) {
  SymScope* saveScope = NULL;

  if (paramScope) {
    saveScope = Symboltable::setCurrentScope(paramScope);
  }
  TRAVERSE(formals, traversal, false);
  TRAVERSE(type, traversal, false);
  TRAVERSE(body, traversal, false);
  TRAVERSE(retType, traversal, false);
  TRAVERSE(whereExpr, traversal, false);
  if (paramScope) {
    Symboltable::setCurrentScope(saveScope);
  }
}


FnSymbol* FnSymbol::clone(Map<BaseAST*,BaseAST*>* map) {
  static int uid = 1; // Unique ID for cloned functions
  SymScope* save_scope = Symboltable::setCurrentScope(parentScope);
  DefStmt* defStmt = 
    dynamic_cast<DefStmt*>(defPoint->parentStmt->copy(true, map, NULL));
  defStmt->defExpr->sym->cname =
    glomstrings(3, cname, "_clone_", intstring(uid++));
  defPoint->parentStmt->insertAfter(defStmt);
  Symboltable::setCurrentScope(save_scope);
  TRAVERSE(defStmt, new ClearTypes(), true);
  TRAVERSE(defPoint, new ClearTypes(), true); // only do this until
                                              // uncloned is not used
  return dynamic_cast<FnSymbol*>(defStmt->defExpr->sym);
}


FnSymbol* FnSymbol::coercion_wrapper(Map<Symbol*,Symbol*>* coercion_substitutions) {
  static int uid = 1; // Unique ID for wrapped functions
  currentLineno = lineno;
  currentFilename = filename;
  SymScope* saveScope = Symboltable::setCurrentScope(parentScope);
  FnSymbol* wrapperFn = new FnSymbol(name);
  wrapperFn->cname = glomstrings(3, cname, "_coercion_wrapper_", intstring(uid++));
  wrapperFn = Symboltable::startFnDef(wrapperFn);
  wrapperFn->method_type = method_type;
  wrapperFn->fnClass = fnClass;
  wrapperFn->addPragma("inline");

  AList<DefExpr>* wrapperFormals = new AList<DefExpr>();
  for (DefExpr* formal = formals->first(); formal; formal = formals->next()) {
    ParamSymbol* newFormal = dynamic_cast<ParamSymbol*>(formal->sym->copy());
    wrapperFormals->insertAtTail(new DefExpr(newFormal));
    Symbol* coercionSubstitution = coercion_substitutions->get(formal->sym);
    if (coercionSubstitution) {
      newFormal->type = coercionSubstitution->type;
    }
  }
  Symboltable::continueFnDef(wrapperFn, wrapperFormals, retType, retRef);

  BlockStmt* wrapperBlock = Symboltable::startCompoundStmt();

  AList<Stmt>* wrapperBody = new AList<Stmt>();
  AList<Expr>* wrapperActuals = new AList<Expr>();
  for (DefExpr* formal = formals->first(), *wrapperFormal = wrapperFormals->first(); 
       formal; 
       formal = formals->next(), wrapperFormal = wrapperFormals->next()) {
    Symbol* coercionSubstitution = coercion_substitutions->get(formal->sym);
    if (coercionSubstitution) {
      char* tempName = glomstrings(2, "_coercion_temp_", formal->sym->name);
      VarSymbol* temp = new VarSymbol(tempName, formal->sym->type);
      DefExpr* tempDefExpr = new DefExpr(temp, new UserInitExpr(new Variable(wrapperFormal->sym)));
      wrapperBody->insertAtTail(new DefStmt(tempDefExpr));
      wrapperActuals->insertAtTail(new Variable(temp));
    } else {
      wrapperActuals->insertAtTail(new Variable(wrapperFormal->sym));
    }
  }
  wrapperBody->insertAtTail(new ExprStmt(new FnCall(new Variable(this), 
                                                    wrapperActuals)));

  wrapperBlock = Symboltable::finishCompoundStmt(wrapperBlock, wrapperBody);

  DefExpr* defExpr = new DefExpr(Symboltable::finishFnDef(wrapperFn,
                                                          wrapperBlock));
  defPoint->parentStmt->insertBefore(new DefStmt(defExpr));
  Symboltable::setCurrentScope(saveScope);
  return wrapperFn;
}


FnSymbol* FnSymbol::default_wrapper(Vec<Symbol*>* defaults) {
  static int uid = 1; // Unique ID for wrapped functions
  currentLineno = lineno;
  currentFilename = filename;
  SymScope* save_scope = Symboltable::setCurrentScope(parentScope);
  FnSymbol* wrapper_fn = Symboltable::startFnDef(new FnSymbol(name));
  wrapper_fn->addPragma("inline");
  wrapper_fn->method_type = method_type;
  wrapper_fn->fnClass = fnClass;
  wrapper_fn->cname =
    glomstrings(3, cname, "_default_params_wrapper_", intstring(uid++));
  AList<DefExpr>* wrapper_formals = new AList<DefExpr>();
  for_alist(DefExpr, formal, formals) {
    if (!defaults->set_in(formal->sym)) {
      wrapper_formals->insertAtTail(formal->copy(true));
    }
  }
  Symboltable::continueFnDef(wrapper_fn, wrapper_formals, retType, retRef, COPY(whereExpr));
  AList<Stmt>* wrapper_body = new AList<Stmt>();
  Vec<VarSymbol*> temps;
  for_alist_backward(DefExpr, formal, formals) {
    if (defaults->set_in(formal->sym)) {
      char* temp_name = glomstrings(2, "_default_param_temp_", formal->sym->name);
      VarSymbol* temp_symbol = new VarSymbol(temp_name, formal->sym->type);
      if (formal->sym->type != dtUnknown)
        temp_symbol->aspect = formal->sym->type;
      DefExpr* temp_def_expr =
        new DefExpr(temp_symbol,
                    (dynamic_cast<ParamSymbol*>(formal->sym)->intent == PARAM_OUT)
                    ? NULL
                    : formal->sym->defPoint->init->copy(),
                    (formal->sym->defPoint->exprType)
                    ? formal->sym->defPoint->exprType->copy()
                    : NULL);
      DefStmt* temp_def_stmt = new DefStmt(temp_def_expr);
      wrapper_body->insertAtHead(temp_def_stmt);
      temps.add(temp_symbol);
    }
  }
  AList<Expr>* actuals = new AList<Expr>();
  DefExpr* wrapper_formal = wrapper_formals->first();
  for_alist(DefExpr, formal, formals) {
    if (defaults->set_in(formal->sym)) {
      actuals->insertAtTail(new Variable(temps.pop()));
    } else {
      actuals->insertAtTail(new Variable(wrapper_formal->sym));
      wrapper_formal = wrapper_formals->next();
    }
  }
  ParenOpExpr* fn_call = new ParenOpExpr(new Variable(this), actuals);
  if (function_returns_void(this)) {
    wrapper_body->insertAtTail(new ExprStmt(fn_call));
  } else {
    wrapper_body->insertAtTail(new ReturnStmt(fn_call));
  }
  Symboltable::finishFnDef(wrapper_fn, new BlockStmt(wrapper_body));
  DefExpr* wrapper_expr = new DefExpr(wrapper_fn);
  DefStmt* wrapper_stmt = new DefStmt(wrapper_expr);
  wrapper_stmt->copyPragmas(defPoint->parentStmt->pragmas);
  defPoint->parentStmt->insertAfter(wrapper_stmt);
  Symboltable::setCurrentScope(save_scope);
  return dynamic_cast<FnSymbol*>(wrapper_expr->sym);
}


FnSymbol* FnSymbol::order_wrapper(Map<Symbol*,Symbol*>* formals_to_actuals) {
  static int uid = 1; // Unique ID for wrapped functions
  currentLineno = lineno;
  currentFilename = filename;
  SymScope* save_scope = Symboltable::setCurrentScope(parentScope);
  FnSymbol* wrapper_fn = new FnSymbol(name);
  wrapper_fn->addPragma("inline");
  wrapper_fn->cname = glomstrings(3, cname, "_ord_wrapper_", intstring(uid++));
  wrapper_fn = Symboltable::startFnDef(wrapper_fn);
  wrapper_fn->method_type = method_type;
  wrapper_fn->fnClass = fnClass;

  AList<DefExpr>* wrapper_formals = new AList<DefExpr>();
  for (int i = 0; i < formals_to_actuals->n - 1; i++) {
    DefExpr* tmp = formals->first();
    for (int j = 0; j < formals_to_actuals->n - 1; j++) {
      if (formals_to_actuals->v[i].key == formals_to_actuals->v[j].value) {
        wrapper_formals->insertAtTail(new DefExpr(tmp->sym->copy()));
      }
      tmp = formals->next();
    }
  }

  Symboltable::continueFnDef(wrapper_fn, wrapper_formals, retType, retRef);

  AList<Expr>* actuals = new AList<Expr>();
  for (int i = 0; i < formals_to_actuals->n - 1; i++) {
    DefExpr* tmp = wrapper_formals->first();
    for (int j = 0; j < formals_to_actuals->n - 1; j++) {
      if (formals_to_actuals->v[i].value == formals_to_actuals->v[j].key) {
        actuals->insertAtTail(new Variable(tmp->sym));
      }
      tmp = wrapper_formals->next();
    }
  }

  Stmt* fn_call = new ExprStmt(new ParenOpExpr(new Variable(this), actuals));
  BlockStmt* body = new BlockStmt(new AList<Stmt>(fn_call));
  DefExpr* def_expr = new DefExpr(Symboltable::finishFnDef(wrapper_fn, body));
  defPoint->parentStmt->insertBefore(new DefStmt(def_expr));
  Symboltable::setCurrentScope(save_scope);
  return wrapper_fn;
}


static bool
instantiate_update_expr(Map<BaseAST*,BaseAST*>* substitutions, Expr* expr,
                        Map<BaseAST*,BaseAST*>* copyMap) {
  Map<BaseAST *, BaseAST *> map;
  map.copy(*substitutions);
  // for type variables, add TypeSymbols into the map as well
  for (int i = 0; i < substitutions->n; i++)
    if (Type *t = dynamic_cast<Type*>(substitutions->v[i].key))
      if (Type *tt = dynamic_cast<Type*>(substitutions->v[i].value))
        map.put(t->symbol, tt->symbol);
  UpdateSymbols *updater = new UpdateSymbols(&map, copyMap);
  TRAVERSE(expr, updater, true);
  return updater->changed;
}


static void
instantiate_add_subs(Map<BaseAST*,BaseAST*>* substitutions, Map<BaseAST*,BaseAST*>* map) {
  Map<BaseAST *, BaseAST*> tmp;
  tmp.copy(*substitutions);
  for (int i = 0; i < tmp.n; i++) {
    if (tmp.v[i].key) {
      if (BaseAST *b = map->get(tmp.v[i].key))
        substitutions->put(b, tmp.v[i].value);
    }
  }
}


/** This is a quick cache implementation that isn't perfect **/
class Inst : public gc {
 public:
  FnSymbol* fn;
  FnSymbol* newfn;
  Map<BaseAST*,BaseAST*>* subs;
};

static Vec<Inst*>* icache = NULL;

FnSymbol* 
FnSymbol::instantiate_generic(Map<BaseAST*,BaseAST*>* map,
                              Map<BaseAST*,BaseAST*>* substitutions) {
  if (!icache) {
    icache = new Vec<Inst*>();
  } else {
    forv_Vec(Inst, tmp, *icache) {
      if (tmp->fn == this) {
        if (substitutions->n == 1 &&
            tmp->subs->n == 1 &&
            substitutions->v[0].key == tmp->subs->v[0].key &&
            substitutions->v[0].value == tmp->subs->v[0].value) {
          return tmp->newfn;
          /** already instantiated **/
        }
      }
    }
  }
  Inst* inst = new Inst();
  inst->fn = this;
  inst->subs = new Map<BaseAST*,BaseAST*>();
  inst->subs->copy(*substitutions);

  FnSymbol* copy = NULL;
  static int uid = 1; // Unique ID for cloned functions
  currentLineno = lineno;
  currentFilename = filename;
  TypeSymbol* clone = NULL;
  if (fnClass == FN_CONSTRUCTOR) {
    TypeSymbol* typeSym = dynamic_cast<TypeSymbol*>(retType->symbol);
    SymScope* save_scope = Symboltable::setCurrentScope(typeSym->parentScope);
    clone = typeSym->clone(map);
    instantiate_add_subs(substitutions, map);
    StructuralType* cloneType = dynamic_cast<StructuralType*>(clone->type);
    Vec<TypeSymbol *> types;
    types.move(cloneType->types);
    for (int i = 0; i < types.n; i++) {
      if (types.v[i] && substitutions->get(types.v[i]->type)) {
        types.v[i]->defPoint->parentStmt->remove();
        types.v[i]->parentScope->remove(types.v[i]);
      } else
        cloneType->types.add(types.v[i]);
    }
    instantiate_update_expr(substitutions, clone->defPoint, map);
    substitutions->put(typeSym->type, clone->type);
    Symboltable::setCurrentScope(save_scope);

    Vec<FnSymbol*> functions;
    collectFunctionsFromScope(typeSym->parentScope, &functions);
    
    Vec<BaseAST*> genericParameters;
    for (int i = 0; i < substitutions->n; i++)
      if (VariableType *t = dynamic_cast<VariableType*>(substitutions->v[i].key)) {
        genericParameters.set_add(t);
        genericParameters.set_add(t->symbol);
      } else if (ParamSymbol *s = dynamic_cast<ParamSymbol*>(substitutions->v[i].key))
        if (s->isGeneric)
          genericParameters.set_add(s);

    forv_Vec(FnSymbol, fn, functions) {
      if (functionContainsAnyAST(fn, &genericParameters)) {
        //printf("  instantiating %s\n", fn->cname);
        SymScope* save_scope = Symboltable::setCurrentScope(fn->parentScope);
        DefStmt* fnDef =
          dynamic_cast<DefStmt*>(fn->defPoint->parentStmt->copy(true, map));
        fnDef->defExpr->sym->cname = glomstrings(3, fnDef->defExpr->sym->cname, "_instantiate_", intstring(uid++));
        fn->defPoint->parentStmt->insertBefore(fnDef);
        instantiate_add_subs(substitutions, map);
        instantiate_update_expr(substitutions, fnDef->defExpr, map);
        Symboltable::setCurrentScope(save_scope);
        FnSymbol* fnClone = dynamic_cast<FnSymbol*>(fnDef->defExpr->sym);
        if (fn == this) {
          copy = fnClone;
        }
        if (fn->typeBinding == typeSym) {
          clone->type->methods.add(fnClone);
          fnClone->typeBinding = clone;
          fnClone->method_type = fn->method_type;
        }
        if (typeSym->type->defaultConstructor == fn) {
          clone->type->defaultConstructor = fnClone;
        }
      } else {
        //printf("  not instantiating %s\n", fn->cname);
      }
    }
  } else {
    SymScope* save_scope = Symboltable::setCurrentScope(parentScope);
    DefStmt* fnDef =
      dynamic_cast<DefStmt*>(defPoint->parentStmt->copy(true, map));
    defPoint->parentStmt->insertBefore(fnDef);
    instantiate_add_subs(substitutions, map);
    instantiate_update_expr(substitutions, fnDef->defExpr, map);
    fnDef->defExpr->sym->cname =
      glomstrings(3, fnDef->defExpr->sym->cname, "_instantiate_", intstring(uid++));
    copy = dynamic_cast<FnSymbol*>(fnDef->defExpr->sym);
    Symboltable::setCurrentScope(save_scope);
  }

  if (!copy) {
    INT_FATAL(this, "Instantiation error");
  }

  inst->newfn = copy;
  icache->add(inst);

  //printf("finished instantiating %s\n", cname);
  
  return copy;
}


void FnSymbol::printDef(FILE* outfile) {
  fprintf(outfile, "function ");
  print(outfile);
  fprintf(outfile, "(");
  if (formals) {
    formals->print(outfile, ";\n");
  }
  fprintf(outfile, ")");
  if (retType == dtVoid) {
    fprintf(outfile, " ");
  } else {
    fprintf(outfile, ": ");
    retType->print(outfile);
    fprintf(outfile, " ");
  }
  body->print(outfile);
  fprintf(outfile, "\n\n");
}


void FnSymbol::codegenHeader(FILE* outfile) {
  if (!exportMe && !parentScope->commonModuleIsFirst()) {
    fprintf(outfile, "static ");
  }
  if (retType == dtUnknown) {
    retType = return_type_info(this);
    INT_WARNING(this, "return type unknown, calling analysis late");
  }
  retType->codegen(outfile);
//   if (is_Value_Type(retType) && _getter)
//     fprintf(outfile, "*");
  fprintf(outfile, " ");
  this->codegen(outfile);
  fprintf(outfile, "(");
  if (!formals) {
    fprintf(outfile, "void");
  } else {
    bool first = true;
    for_alist(DefExpr, formal, formals) {
      if (!first) {
        fprintf(outfile, ", ");
      }
      formal->sym->codegenDef(outfile);
      first = false;
    }
  }
  fprintf(outfile, ")");
}


void FnSymbol::codegenPrototype(FILE* outfile) {
  if (defPoint && defPoint->parentStmt) {
    if (defPoint->parentStmt->hasPragma("no codegen")) {
      return;
    }
  }

  codegenHeader(outfile);
  fprintf(outfile, ";\n");
}


void FnSymbol::codegenDef(FILE* outfile) {
  if (defPoint && defPoint->parentStmt) {
    if (defPoint->parentStmt->hasPragma("no codegen")) {
      return;
    }
  }

  if (!isDead) {
    if (fnClass == FN_CONSTRUCTOR) {
      fprintf(outfile, "/* constructor */\n");
    }

    codegenHeader(outfile);

    // while these braces seem like they should be extraneous since
    // all function bodies are BlockStmts, it turns out that they are
    // not because in C the function's parameter scope is the same as
    // its local variable scope; so if we have a parameter and a local
    // variable of name x (as in trivial/bradc/vardecls1b.chpl), these
    // extra braces are required to make the generated code work out.
    fprintf(outfile, " {\n");
    inFunction = true;
    justStartedGeneratingFunction = true;
    body->codegen(outfile);
    inFunction = false;
    fprintf(outfile, "\n");
    fprintf(outfile, "}\n");
    fprintf(outfile, "\n\n");
  }
}

FnSymbol* FnSymbol::mainFn;

void FnSymbol::init(void) {
  mainFn = NULL;
}



EnumSymbol::EnumSymbol(char* init_name, Expr* init_init, int init_val) :
  Symbol(SYMBOL_ENUM, init_name),
  init(init_init),
  val(init_val)
{
  if (init_name != NULL) {
    Symboltable::define(this);
  }
}


EnumSymbol*
EnumSymbol::copyInner(bool clone, Map<BaseAST*,BaseAST*>* map) {
  return new EnumSymbol(copystring(name), COPY_INTERNAL(init), val);
}


void EnumSymbol::replaceChild(BaseAST* old_ast, BaseAST* new_ast) {
  if (old_ast == init) {
    init = dynamic_cast<Expr*>(new_ast);
  } else {
    INT_FATAL(this, "Unexpected case in EnumSymbol::replaceChild");
  }
}


void EnumSymbol::traverseDefSymbol(Traversal* traversal) { }


void EnumSymbol::setValues(AList<EnumSymbol>* symList) {
  EnumSymbol* tmp = symList->first();
  int tally = 0;

  while (tmp) {
    if (tmp->init) {
      if (tmp->init->isComputable() == false) {
        USR_FATAL(tmp->init, "Enumerator value for %s must be integer parameter", tmp->name);
      }
      tally = tmp->init->intVal();
    }
    tmp->val = tally++;
    tmp = symList->next();
  }
}


void EnumSymbol::codegenDef(FILE* outfile) {
  /* Do nothing */
}


ModuleSymbol::ModuleSymbol(char* init_name, modType init_modtype) :
  Symbol(SYMBOL_MODULE, init_name),
  modtype(init_modtype),
  stmts(new AList<Stmt>),
  initFn(NULL),
  modScope(NULL)
{
  uses.clear();
}


ModuleSymbol*
ModuleSymbol::copyInner(bool clone, Map<BaseAST*,BaseAST*>* map) {
  INT_FATAL(this, "Illegal call to ModuleSymbol::copy");
  return NULL;
}


void ModuleSymbol::setModScope(SymScope* init_modScope) {
  modScope = init_modScope;
}


void ModuleSymbol::codegenDef(void) {
  fileinfo outfileinfo;
  fileinfo extheadfileinfo;
  fileinfo intheadfileinfo;

  openCFiles(name, &outfileinfo, &extheadfileinfo, &intheadfileinfo);

  fprintf(codefile, "#include \"stdchpl.h\"\n");
  fprintf(codefile, "#include \"_chpl_header.h\"\n");
  fprintf(codefile, "#include \"_CommonModule.h\"\n");
  fprintf(codefile, "#include \"_CommonModule-internal.h\"\n");

  forv_Vec(ModuleSymbol, use, uses) {
    fprintf(codefile, "#include \"%s.h\"\n", use->name);
  }

  fprintf(codefile, "#include \"%s\"\n", extheadfileinfo.filename);
  fprintf(codefile, "#include \"%s\"\n", intheadfileinfo.filename);

  fprintf(codefile, "\n");

  modScope->codegenFunctions(codefile);
  //  stmts->codegen(codefile, "\n");

  closeCFiles(&outfileinfo, &extheadfileinfo, &intheadfileinfo);
}


void ModuleSymbol::startTraversal(Traversal* traversal) {
  SymScope* prevScope = NULL;

  if (modScope) {
    prevScope = Symboltable::setCurrentScope(modScope);
  }
  stmts->traverse(traversal, false);
  if (modScope) {
    Symboltable::setCurrentScope(prevScope);
  }
}


void ModuleSymbol::replaceChild(BaseAST* old_ast, BaseAST* new_ast) {
  if (old_ast == stmts) {
    stmts = dynamic_cast<AList<Stmt>*>(new_ast);
  } else {
    INT_FATAL(this, "Unexpected case in ModuleSymbol::replaceChild");
  }
}


/** SJD: Makes sense for this to take place of above startTraversal **/
void ModuleSymbol::traverseDefSymbol(Traversal* traversal) {
  startTraversal(traversal);
}


static bool stmtIsGlob(Stmt* stmt) {

  if (stmt == NULL) {
    INT_FATAL("Non-Stmt found in StmtIsGlob");
  }
  if (DefStmt* def_stmt = dynamic_cast<DefStmt*>(stmt)) {
    if (def_stmt->definesFunctions() || def_stmt->definesTypes()) {
      return true;
    }
  }
  return false;
}


void ModuleSymbol::createInitFn(void) {
  char* fnName = glomstrings(2, "__init_", name);
  AList<Stmt>* globstmts = NULL;
  AList<Stmt>* initstmts = NULL;
  AList<Stmt>* definition = stmts;

  // BLC: code to run user modules once only
  char* runOnce = NULL;
  if (modtype == MOD_USER) {
    runOnce = glomstrings(3, "__run_", name, "_firsttime");
    SymScope* saveScope = Symboltable::setCurrentScope(commonModule->modScope);
    // create a boolean variable to guard module initialization
    DefStmt* varDefStmt = Symboltable::defineSingleVarDefStmt(runOnce,
                                                              dtBoolean,
                                                              new BoolLiteral("true", true),
                                                              VAR_NORMAL,
                                                              VAR_VAR);
    // insert its definition in the common module's init function
    commonModule->initFn->body->body->insertAtHead(varDefStmt);
    Symboltable::setCurrentScope(saveScope);
 
    // insert a set to false at the beginning of the current module's
    // definition (we'll wrap it in a conditional just below, after
    // filtering)
    Expr* assignVar = new AssignOp(GETS_NORM, 
                                   new Variable(new UnresolvedSymbol(runOnce)), 
                                   new BoolLiteral("false", false));
    definition->insertAtHead(new ExprStmt(assignVar));
  }

  definition->filter(stmtIsGlob, globstmts, initstmts);

  definition = globstmts;
  BlockStmt* initFunBody;
  if (initstmts->isEmpty()) {
    initFunBody = new BlockStmt(new AList<Stmt>(new NoOpStmt()));
  } else {
    initFunBody = new BlockStmt(initstmts);
  }
  
  if (runOnce) {
    // wrap initializer function body in conditional
    Stmt* testRun = new CondStmt(new Variable(new UnresolvedSymbol(runOnce)), 
                                 initFunBody);
    // and replace it
    initFunBody = new BlockStmt(new AList<Stmt>(testRun));
  }
                    
  DefStmt* initFunDef = Symboltable::defineFunction(fnName, NULL, 
                                                    dtVoid, initFunBody, 
                                                    true);
  initFn = dynamic_cast<FnSymbol*>(initFunDef->defExpr->sym);
  {
    Stmt* initstmt = initstmts->first();
    while (initstmt) {
      initstmt->parentSymbol = initFn;
      initstmt = initstmts->next();
    }
    initFunBody->parentSymbol = initFn;
  }

  definition->insertAtTail(initFunDef);

  stmts = definition;
}


bool ModuleSymbol::isFileModule(void) {
  return (lineno == 0);
}


LabelSymbol::LabelSymbol(char* init_name) :
  Symbol(SYMBOL_LABEL, init_name, NULL) {
  Symboltable::define(this);
}


void LabelSymbol::codegenDef(FILE* outfile) { }


ForwardingSymbol::ForwardingSymbol(Symbol* init_forward, char* rename) :
  Symbol(SYMBOL_FORWARDING, rename, NULL),
  forward(init_forward),
  renamed(rename != NULL)
{
  if (!rename) {
    name = copystring(forward->name);
    cname = copystring(forward->cname);
  }
  Symboltable::define(this);
}


void ForwardingSymbol::codegenDef(FILE* outfile) { }


FnSymbol* ForwardingSymbol::getFnSymbol(void) {
  return forward->getFnSymbol();
}


Symbol* ForwardingSymbol::getSymbol(void) {
  return forward->getSymbol();
}


Type* ForwardingSymbol::typeInfo(void) {
  return forward->typeInfo();
}
