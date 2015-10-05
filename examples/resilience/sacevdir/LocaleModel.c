/* LocaleModel.chpl:11 */
static void chpl__init_LocaleModel(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  chpl_bool type_tmp;
  _ref_chpl_bool _ref_tmp_ = NULL;
  chpl____wide_DefaultRectangularDom_1_int64_t_F type_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl___RuntimeTypeInfo call_tmp;
  chpl___RuntimeTypeInfo wrap_call_tmp;
  chpl____wide_DefaultDist _runtime_type_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  range_int64_t_bounded_F call_tmp2;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_2 = NULL;
  chpl____wide_DefaultRectangularDom_1_int64_t_F call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_3 = NULL;
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F type_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_4 = NULL;
  chpl___RuntimeTypeInfo3 call_tmp5;
  chpl____wide_DefaultRectangularDom_1_int64_t_F _runtime_type_tmp_2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_DefaultRectangularArr_locale_1_int64_t_F ret_to_arg_ref_tmp_5 = NULL;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_457;
  if (chpl__init_LocaleModel_p) {
    goto _exit_chpl__init_LocaleModel;
  }
  modFormatStr = "%*s\n";
  modStr = "LocaleModel";
  printModuleInit(modFormatStr, modStr, INT64(11));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_LocaleModel_p = true;
  {
    chpl__init_ChapelLocale(INT64(11), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
    chpl__init_DefaultRectangular(INT64(11), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
    chpl__init_ChapelNumLocales(INT64(11), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
    chpl__init_Sys(INT64(11), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  }
  type_tmp = false;
  _ref_tmp_ = &type_tmp;
  *(_ref_tmp_) = false;
  chpl_check_nil((&doneCreatingLocales)->addr, INT64(26), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  chpl_macro_tmp_457.locale = (&doneCreatingLocales)->locale;
  chpl_macro_tmp_457.addr = &(((&doneCreatingLocales)->addr)->value);
  chpl_gen_comm_put(((void*)(&type_tmp)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_457).locale), INT64(0), NULL), (chpl_macro_tmp_457).addr, sizeof(chpl_bool), -1, INT64(1), INT64(26), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  wrap_call_tmp = chpl__buildDomainRuntimeType(&defaultDist);
  call_tmp = wrap_call_tmp;
  _runtime_type_tmp_ = (&call_tmp)->d;
  ret_to_arg_ref_tmp_ = &type_tmp2;
  chpl__convertRuntimeTypeToValue(&_runtime_type_tmp_, ret_to_arg_ref_tmp_);
  ret_to_arg_ref_tmp_2 = &call_tmp2;
  _build_range(INT64(1), INT64(0), ret_to_arg_ref_tmp_2);
  ret_to_arg_ref_tmp_3 = &call_tmp3;
  chpl__buildDomainExpr(&call_tmp2, ret_to_arg_ref_tmp_3);
  chpl___ASSIGN_2(&type_tmp2, &call_tmp3);
  chpl_emptyLocaleSpace = type_tmp2;
  chpl_comm_broadcast_private(INT64(10), sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), -1);
  ret_to_arg_ref_tmp_4 = &call_tmp4;
  chpl__ensureDomainExpr(&chpl_emptyLocaleSpace, ret_to_arg_ref_tmp_4);
  call_tmp5 = chpl__buildArrayRuntimeType(&call_tmp4);
  _runtime_type_tmp_2 = (&call_tmp5)->dom;
  ret_to_arg_ref_tmp_5 = &type_tmp3;
  chpl__convertRuntimeTypeToValue4(&_runtime_type_tmp_2, ret_to_arg_ref_tmp_5);
  chpl_emptyLocales = type_tmp3;
  chpl_comm_broadcast_private(INT64(11), sizeof(chpl____wide_DefaultRectangularArr_locale_1_int64_t_F), -1);
  chpl__autoDestroy2(&call_tmp4);
  chpl__autoDestroy2(&call_tmp3);
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_LocaleModel:;
  return;
}

/* LocaleModel.chpl:63 */
static void chpl_buildLocaleID(int32_t node, int32_t subloc, _ref_chpl_localeID_t _retArg, int64_t _ln, c_string _fn) {
  chpl_localeID_t _autoCopy_tmp_;
  chpl_localeID_t call_tmp;
  chpl_localeID_t call_tmp2;
  _autoCopy_tmp_ = chpl_rt_buildLocaleID(node, subloc);
  call_tmp = chpl__initCopy_chpl_rt_localeID_t(_autoCopy_tmp_);
  call_tmp2 = chpl__initCopy_chpl_rt_localeID_t(call_tmp);
  *(_retArg) = call_tmp2;
  return;
}

/* LocaleModel.chpl:67 */
static int32_t chpl_nodeFromLocaleID(chpl_localeID_t* const loc, int64_t _ln, c_string _fn) {
  int32_t call_tmp;
  call_tmp = chpl_rt_nodeFromLocaleID(*(loc));
  return call_tmp;
}

/* LocaleModel.chpl:71 */
static int32_t chpl_sublocFromLocaleID(chpl_localeID_t* const loc, int64_t _ln, c_string _fn) {
  int32_t call_tmp;
  call_tmp = chpl_rt_sublocFromLocaleID(*(loc));
  return call_tmp;
}

/* LocaleModel.chpl:80 */
static LocaleModel _construct_LocaleModel(locale parent, int64_t numCores, atomic_int64* const runningTaskCounter, uint64_t callStackSize, int64_t _node_id, chpl_string local_name, LocaleModel meme) {
  LocaleModel this8 = NULL;
  AbstractLocaleModel T = NULL;
  chpl____wide_chpl_string T2 = {CHPL_LOCALEID_T_INIT, NULL};
  this8 = meme;
  chpl_check_nil(this8, INT64(80), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  T = &((this8)->super);
  _construct_AbstractLocaleModel(parent, numCores, runningTaskCounter, T);
  chpl_check_nil(this8, INT64(81), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  (this8)->callStackSize = callStackSize;
  chpl_check_nil(this8, INT64(82), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  (this8)->_node_id = _node_id;
  chpl_string_widen(&T2, local_name, INT64(83), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  chpl_check_nil(this8, INT64(83), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  (this8)->local_name = T2;
  return this8;
}

/* LocaleModel.chpl:80 */
static void chpl__auto_destroy_LocaleModel(LocaleModel this8) {
  AbstractLocaleModel _parent_destructor_tmp_ = NULL;
  locale _parent_destructor_tmp_2 = NULL;
  _ref_atomic_int64 _field_destructor_tmp_ = NULL;
  _ref_atomic_int_least64_t call_tmp = NULL;
  _ref_atomic_int_least64_t T = NULL;
  _parent_destructor_tmp_ = ((AbstractLocaleModel)(this8));
  _parent_destructor_tmp_2 = ((locale)(_parent_destructor_tmp_));
  chpl_check_nil(_parent_destructor_tmp_2, INT64(80), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  _field_destructor_tmp_ = &((_parent_destructor_tmp_2)->runningTaskCounter);
  chpl_check_nil(_field_destructor_tmp_, INT64(80), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  call_tmp = &((_field_destructor_tmp_)->_v);
  T = call_tmp;
  atomic_destroy_int_least64_t(T);
  call_tmp = T;
  return;
}

/* LocaleModel.chpl:96 */
static LocaleModel LocaleModel2(chpl____wide_locale* const parent_loc) {
  LocaleModel this8 = NULL;
  LocaleModel this9 = NULL;
  int64_t call_tmp;
  chpl_opaque cast_tmp;
  LocaleModel T = NULL;
  chpl_string T2;
  chpl____wide_chpl_string T3 = {CHPL_LOCALEID_T_INIT, NULL};
  locale call_tmp2 = NULL;
  locale T4 = NULL;
  atomic_int64 this10;
  atomic_int_least64_t ret;
  atomic_int_least64_t type_tmp;
  atomic_int_least64_t ret2;
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  _ref_atomic_int_least64_t T5 = NULL;
  _ref_atomic_int_least64_t _ref_tmp_2 = NULL;
  atomic_int_least64_t type_tmp2;
  atomic_int_least64_t x;
  _ref_atomic_int_least64_t _ref_tmp_3 = NULL;
  atomic_int64 wrap_call_tmp;
  chpl_string default_arglocal_name;
  chpl____wide_chpl_string T6 = {CHPL_LOCALEID_T_INIT, NULL};
  LocaleModel wrap_call_tmp2 = NULL;
  chpl_bool T7;
  c_string T8;
  locale call_tmp3 = NULL;
  locale call_tmp4 = NULL;
  _ref_locale call_tmp5 = NULL;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_458;
  call_tmp = sizeof(chpl_LocaleModel_object);
  cast_tmp = chpl_here_alloc(call_tmp, INT16(20));
  T = ((LocaleModel)(cast_tmp));
  this9 = T;
  ((object)(this9))->chpl__cid = chpl__cid_LocaleModel;
  chpl_check_nil(this9, INT64(96), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  (this9)->callStackSize = UINT64(0);
  chpl_check_nil(this9, INT64(96), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  (this9)->_node_id = INT64(0);
  T2 = defaultStringValue;
  chpl_string_widen(&T3, T2, INT64(96), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  chpl_check_nil(this9, INT64(96), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  (this9)->local_name = T3;
  T4 = ((locale)(nil));
  call_tmp2 = T4;
  ret2 = type_tmp;
  _ref_tmp_ = &ret2;
  T5 = _ref_tmp_;
  atomic_init_int_least64_t(T5, INT64(0));
  _ref_tmp_ = T5;
  _ref_tmp_2 = &ret;
  *(_ref_tmp_2) = ret2;
  x = type_tmp2;
  _ref_tmp_3 = &x;
  *(_ref_tmp_3) = ret;
  (&this10)->_v = x;
  wrap_call_tmp = _construct_atomic_int64(x, &this10);
  chpl_check_nil(this9, INT64(96), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  (this9)->callStackSize = UINT64(0);
  chpl_check_nil(this9, INT64(96), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  (this9)->_node_id = INT64(0);
  default_arglocal_name = defaultStringValue;
  chpl_string_widen(&T6, default_arglocal_name, INT64(96), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  chpl_check_nil(this9, INT64(96), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  (this9)->local_name = T6;
  wrap_call_tmp2 = _construct_LocaleModel(call_tmp2, INT64(0), &wrap_call_tmp, UINT64(0), INT64(0), default_arglocal_name, this9);
  this8 = wrap_call_tmp2;
  chpl_check_nil((&doneCreatingLocales)->addr, INT64(26), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  chpl_macro_tmp_458.locale = (&doneCreatingLocales)->locale;
  chpl_macro_tmp_458.addr = &(((&doneCreatingLocales)->addr)->value);
  chpl_gen_comm_get(((void*)(&T7)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_458).locale), INT64(0), NULL), (chpl_macro_tmp_458).addr, sizeof(chpl_bool), -1, INT64(1), INT64(26), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  if (T7) {
    T8 = "Cannot create additional LocaleModel instances";
    halt(T8, INT64(98), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  }
  call_tmp4 = ((locale)(wrap_call_tmp2));
  call_tmp3 = call_tmp4;
  chpl_check_nil(call_tmp3, INT64(100), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  call_tmp5 = &((call_tmp3)->parent);
  *(call_tmp5) = *(parent_loc);
  chpl_check_nil(wrap_call_tmp2, INT64(101), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  init(wrap_call_tmp2);
  return this8;
}

/* LocaleModel.chpl:104 */
static int64_t chpl_id2(chpl____wide_LocaleModel* const this8) {
  int64_t ret;
  chpl____wide__ref_int64_t chpl_macro_tmp_459;
  chpl_check_nil((this8)->addr, INT64(104), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  chpl_macro_tmp_459.locale = (this8)->locale;
  chpl_macro_tmp_459.addr = &(((this8)->addr)->_node_id);
  chpl_gen_comm_get(((void*)(&ret)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_459).locale), INT64(0), NULL), (chpl_macro_tmp_459).addr, sizeof(int64_t), -1, INT64(1), INT64(104), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  return ret;
}

/* LocaleModel.chpl:121 */
static int64_t getChildCount2(chpl____wide_LocaleModel* const this8) {
  return INT64(0);
}

/* LocaleModel.chpl:128 */
static chpl____wide_locale getChild2(chpl____wide_LocaleModel* const this8, int64_t idx) {
  chpl____wide_locale ret = {CHPL_LOCALEID_T_INIT, NULL};
  locale call_tmp = NULL;
  locale T = NULL;
  c_string T2;
  _ref_locale _ref_tmp_ = NULL;
  chpl____wide_locale chpl_macro_tmp_460;
  chpl____wide_locale chpl_macro_tmp_461;
  T = ((locale)(nil));
  call_tmp = T;
  chpl_macro_tmp_460.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_460.addr = call_tmp;
  ret = chpl_macro_tmp_460;
  T2 = "requesting a child from a LocaleModel locale";
  halt(T2, INT64(130), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  _ref_tmp_ = &ret;
  chpl_macro_tmp_461.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_461.addr = NULL;
  *(_ref_tmp_) = chpl_macro_tmp_461;
  return ret;
}

/* LocaleModel.chpl:146 */
static void init(LocaleModel this8) {
  _ref_int64_t call_tmp = NULL;
  int64_t call_tmp2;
  c_string comm;
  c_string spawnfn;
  _ref_c_string T = NULL;
  _ref_c_string T2 = NULL;
  chpl____wide_chpl_string call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  c_string ret;
  c_string call_tmp4;
  _ref_c_string _ref_tmp_ = NULL;
  int32_t call_tmp5;
  _ref_c_string T3 = NULL;
  int32_t call_tmp6;
  chpl_bool call_tmp7;
  chpl_bool T4;
  int64_t call_tmp8;
  chpl_bool call_tmp9;
  chpl_bool T5;
  chpl____wide_chpl_string call_tmp10 = {CHPL_LOCALEID_T_INIT, NULL};
  c_string ret2;
  c_string call_tmp11;
  _ref_c_string _ref_tmp_2 = NULL;
  int32_t call_tmp12;
  _ref_c_string T6 = NULL;
  int32_t call_tmp13;
  chpl_bool call_tmp14;
  chpl_bool T7;
  int64_t call_tmp15;
  chpl_bool call_tmp16;
  c_string call_tmp17;
  chpl____wide_chpl_string call_tmp18 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_chpl_string call_tmp19 = {CHPL_LOCALEID_T_INIT, NULL};
  c_string ret3;
  c_string call_tmp20;
  _ref_c_string _ref_tmp_3 = NULL;
  c_string ret4;
  c_string call_tmp21;
  _ref_c_string _ref_tmp_4 = NULL;
  c_string call_tmp22;
  chpl____wide_chpl_string call_tmp23 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t ret5;
  c_string call_tmp24;
  chpl____wide_chpl_string call_tmp25 = {CHPL_LOCALEID_T_INIT, NULL};
  c_string ret6;
  c_string call_tmp26;
  _ref_c_string _ref_tmp_5 = NULL;
  c_string ret7;
  c_string call_tmp27;
  _ref_c_string _ref_tmp_6 = NULL;
  c_string call_tmp28;
  chpl____wide_chpl_string call_tmp29 = {CHPL_LOCALEID_T_INIT, NULL};
  c_string call_tmp30;
  chpl____wide_chpl_string call_tmp31 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_uint64_t call_tmp32 = NULL;
  uint64_t call_tmp33;
  locale call_tmp34 = NULL;
  locale call_tmp35 = NULL;
  _ref_int64_t call_tmp36 = NULL;
  int64_t call_tmp37;
  chpl_check_nil(this8, INT64(147), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  call_tmp = &((this8)->_node_id);
  call_tmp2 = ((int64_t)(chpl_nodeID));
  *(call_tmp) = call_tmp2;
  comm = "";
  spawnfn = "";
  T = &comm;
  T2 = &spawnfn;
  wide_string_from_c_string(&call_tmp3, "CHPL_COMM", INT64(0), INT64(0), INT64(157), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  ret = "";
  c_string_from_wide_string(&call_tmp4, &call_tmp3, INT64(157), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  _ref_tmp_ = &ret;
  *(_ref_tmp_) = call_tmp4;
  T3 = T;
  call_tmp5 = sys_getenv(ret, T3);
  T = T3;
  call_tmp6 = ((int32_t)(INT64(0)));
  call_tmp7 = (call_tmp5 == call_tmp6);
  if (call_tmp7) {
    call_tmp8 = string_compare(comm, "gasnet");
    call_tmp9 = (call_tmp8 == INT64(0));
    T4 = call_tmp9;
  } else {
    T4 = false;
  }
  if (T4) {
    wide_string_from_c_string(&call_tmp10, "GASNET_SPAWNFN", INT64(0), INT64(0), INT64(157), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
    ret2 = "";
    c_string_from_wide_string(&call_tmp11, &call_tmp10, INT64(157), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
    _ref_tmp_2 = &ret2;
    *(_ref_tmp_2) = call_tmp11;
    T6 = T2;
    call_tmp12 = sys_getenv(ret2, T6);
    T2 = T6;
    call_tmp13 = ((int32_t)(INT64(0)));
    call_tmp14 = (call_tmp12 == call_tmp13);
    T5 = call_tmp14;
  } else {
    T5 = false;
  }
  if (T5) {
    call_tmp15 = string_compare(spawnfn, "L");
    call_tmp16 = (call_tmp15 == INT64(0));
    T7 = call_tmp16;
  } else {
    T7 = false;
  }
  if (T7) {
    call_tmp17 = chpl_nodeName();
    wide_string_from_c_string(&call_tmp18, call_tmp17, INT64(0), INT64(0), INT64(159), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
    wide_string_from_c_string(&call_tmp19, "-", INT64(0), INT64(0), INT64(159), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
    ret3 = "";
    c_string_from_wide_string(&call_tmp20, &call_tmp18, INT64(159), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
    _ref_tmp_3 = &ret3;
    *(_ref_tmp_3) = call_tmp20;
    ret4 = "";
    c_string_from_wide_string(&call_tmp21, &call_tmp19, INT64(159), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
    _ref_tmp_4 = &ret4;
    *(_ref_tmp_4) = call_tmp21;
    call_tmp22 = string_concat(ret3, ret4, INT64(159), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
    wide_string_from_c_string(&call_tmp23, call_tmp22, INT64(0), INT64(0), INT64(159), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
    chpl_check_nil(this8, INT64(159), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
    ret5 = (this8)->_node_id;
    call_tmp24 = int64_t_to_c_string(ret5);
    wide_string_from_c_string(&call_tmp25, call_tmp24, INT64(0), INT64(0), INT64(159), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
    ret6 = "";
    c_string_from_wide_string(&call_tmp26, &call_tmp23, INT64(159), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
    _ref_tmp_5 = &ret6;
    *(_ref_tmp_5) = call_tmp26;
    ret7 = "";
    c_string_from_wide_string(&call_tmp27, &call_tmp25, INT64(159), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
    _ref_tmp_6 = &ret7;
    *(_ref_tmp_6) = call_tmp27;
    call_tmp28 = string_concat(ret6, ret7, INT64(159), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
    wide_string_from_c_string(&call_tmp29, call_tmp28, INT64(0), INT64(0), INT64(159), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
    chpl_check_nil(this8, INT64(159), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
    (this8)->local_name = call_tmp29;
  } else {
    call_tmp30 = chpl_nodeName();
    wide_string_from_c_string(&call_tmp31, call_tmp30, INT64(0), INT64(0), INT64(160), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
    chpl_check_nil(this8, INT64(160), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
    (this8)->local_name = call_tmp31;
  }
  chpl_check_nil(this8, INT64(163), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  call_tmp32 = &((this8)->callStackSize);
  call_tmp33 = chpl_task_getCallStackSize();
  *(call_tmp32) = call_tmp33;
  call_tmp35 = ((locale)(this8));
  call_tmp34 = call_tmp35;
  chpl_check_nil(call_tmp34, INT64(166), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  call_tmp36 = &((call_tmp34)->numCores);
  call_tmp37 = chpl_numCoresOnThisLocale();
  *(call_tmp36) = call_tmp37;
  return;
}

/* LocaleModel.chpl:178 */
static RootLocale _construct_RootLocale(locale parent, int64_t numCores, atomic_int64* const runningTaskCounter, chpl____wide_DefaultRectangularDom_1_int64_t_F* const myLocaleSpace, chpl____wide_DefaultRectangularArr_locale_1_int64_t_F* const myLocales, RootLocale meme) {
  RootLocale this8 = NULL;
  AbstractRootLocale T = NULL;
  this8 = meme;
  chpl_check_nil(this8, INT64(178), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  T = &((this8)->super);
  _construct_AbstractRootLocale(parent, numCores, runningTaskCounter, T);
  chpl_check_nil(this8, INT64(180), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  (this8)->myLocaleSpace = *(myLocaleSpace);
  chpl_check_nil(this8, INT64(181), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  (this8)->myLocales = *(myLocales);
  return this8;
}

/* LocaleModel.chpl:178 */
static void chpl__auto_destroy_RootLocale(RootLocale this8) {
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F _field_destructor_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F _field_destructor_tmp_2 = {CHPL_LOCALEID_T_INIT, NULL};
  AbstractRootLocale _parent_destructor_tmp_ = NULL;
  locale _parent_destructor_tmp_2 = NULL;
  _ref_atomic_int64 _field_destructor_tmp_3 = NULL;
  _ref_atomic_int_least64_t call_tmp = NULL;
  _ref_atomic_int_least64_t T = NULL;
  chpl_check_nil(this8, INT64(181), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  _field_destructor_tmp_ = (this8)->myLocales;
  chpl__autoDestroy4(&_field_destructor_tmp_);
  chpl_check_nil(this8, INT64(180), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  _field_destructor_tmp_2 = (this8)->myLocaleSpace;
  chpl__autoDestroy2(&_field_destructor_tmp_2);
  _parent_destructor_tmp_ = ((AbstractRootLocale)(this8));
  _parent_destructor_tmp_2 = ((locale)(_parent_destructor_tmp_));
  chpl_check_nil(_parent_destructor_tmp_2, INT64(178), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  _field_destructor_tmp_3 = &((_parent_destructor_tmp_2)->runningTaskCounter);
  chpl_check_nil(_field_destructor_tmp_3, INT64(178), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  call_tmp = &((_field_destructor_tmp_3)->_v);
  T = call_tmp;
  atomic_destroy_int_least64_t(T);
  call_tmp = T;
  return;
}

/* LocaleModel.chpl:183 */
static RootLocale RootLocale2(void) {
  int64_t local_numLocales;
  RootLocale this8 = NULL;
  RootLocale this9 = NULL;
  int64_t call_tmp;
  chpl_opaque cast_tmp;
  RootLocale T = NULL;
  DefaultRectangularDom_1_int64_t_F _init_class_tmp_ = NULL;
  chpl____wide_DefaultRectangularDom_1_int64_t_F T2 = {CHPL_LOCALEID_T_INIT, NULL};
  DefaultRectangularArr_locale_1_int64_t_F _init_class_tmp_2 = NULL;
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F T3 = {CHPL_LOCALEID_T_INIT, NULL};
  locale call_tmp2 = NULL;
  locale T4 = NULL;
  atomic_int64 this10;
  atomic_int_least64_t ret;
  atomic_int_least64_t type_tmp;
  atomic_int_least64_t ret2;
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  _ref_atomic_int_least64_t T5 = NULL;
  _ref_atomic_int_least64_t _ref_tmp_2 = NULL;
  atomic_int_least64_t type_tmp2;
  atomic_int_least64_t x;
  _ref_atomic_int_least64_t _ref_tmp_3 = NULL;
  atomic_int64 wrap_call_tmp;
  chpl____wide_DefaultRectangularDom_1_int64_t_F default_argmyLocaleSpace = {CHPL_LOCALEID_T_INIT, NULL};
  chpl___RuntimeTypeInfo call_tmp3;
  chpl___RuntimeTypeInfo wrap_call_tmp2;
  int64_t call_tmp4;
  range_int64_t_bounded_F call_tmp5;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
  chpl____wide_DefaultRectangularDom_1_int64_t_F call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_2 = NULL;
  chpl____wide_DefaultRectangularDom_1_int64_t_F type_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultDist _runtime_type_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_3 = NULL;
  chpl____wide_DefaultRectangularDom_1_int64_t_F x2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F default_argmyLocales = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F call_tmp7 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_4 = NULL;
  chpl___RuntimeTypeInfo3 call_tmp8;
  chpl____wide_DefaultRectangularDom_1_int64_t_F _runtime_type_tmp_2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_DefaultRectangularArr_locale_1_int64_t_F ret_to_arg_ref_tmp_5 = NULL;
  RootLocale wrap_call_tmp3 = NULL;
  locale call_tmp9 = NULL;
  locale call_tmp10 = NULL;
  _ref_locale call_tmp11 = NULL;
  locale call_tmp12 = NULL;
  locale call_tmp13 = NULL;
  _ref_int64_t call_tmp14 = NULL;
  chpl____wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_462;
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F chpl_macro_tmp_463;
  chpl____wide_locale chpl_macro_tmp_464;
  local_numLocales = numLocales;
  call_tmp = sizeof(chpl_RootLocale_object);
  cast_tmp = chpl_here_alloc(call_tmp, INT16(11));
  T = ((RootLocale)(cast_tmp));
  this9 = T;
  ((object)(this9))->chpl__cid = chpl__cid_RootLocale;
  _init_class_tmp_ = nil;
  chpl_macro_tmp_462.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_462.addr = _init_class_tmp_;
  T2 = chpl_macro_tmp_462;
  chpl_check_nil(this9, INT64(183), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  (this9)->myLocaleSpace = T2;
  _init_class_tmp_2 = nil;
  chpl_macro_tmp_463.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_463.addr = _init_class_tmp_2;
  T3 = chpl_macro_tmp_463;
  chpl_check_nil(this9, INT64(183), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  (this9)->myLocales = T3;
  T4 = ((locale)(nil));
  call_tmp2 = T4;
  ret2 = type_tmp;
  _ref_tmp_ = &ret2;
  T5 = _ref_tmp_;
  atomic_init_int_least64_t(T5, INT64(0));
  _ref_tmp_ = T5;
  _ref_tmp_2 = &ret;
  *(_ref_tmp_2) = ret2;
  x = type_tmp2;
  _ref_tmp_3 = &x;
  *(_ref_tmp_3) = ret;
  (&this10)->_v = x;
  wrap_call_tmp = _construct_atomic_int64(x, &this10);
  wrap_call_tmp2 = chpl__buildDomainRuntimeType(&defaultDist);
  call_tmp3 = wrap_call_tmp2;
  call_tmp4 = (local_numLocales - INT64(1));
  ret_to_arg_ref_tmp_ = &call_tmp5;
  _build_range(INT64(0), call_tmp4, ret_to_arg_ref_tmp_);
  ret_to_arg_ref_tmp_2 = &call_tmp6;
  chpl__buildDomainExpr(&call_tmp5, ret_to_arg_ref_tmp_2);
  _runtime_type_tmp_ = (&call_tmp3)->d;
  ret_to_arg_ref_tmp_3 = &type_tmp3;
  chpl__convertRuntimeTypeToValue(&_runtime_type_tmp_, ret_to_arg_ref_tmp_3);
  x2 = type_tmp3;
  chpl___ASSIGN_2(&type_tmp3, &call_tmp6);
  default_argmyLocaleSpace = chpl__autoCopy2(&x2);
  chpl_check_nil(this9, INT64(183), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  (this9)->myLocaleSpace = default_argmyLocaleSpace;
  ret_to_arg_ref_tmp_4 = &call_tmp7;
  chpl__ensureDomainExpr(&default_argmyLocaleSpace, ret_to_arg_ref_tmp_4);
  call_tmp8 = chpl__buildArrayRuntimeType(&call_tmp7);
  _runtime_type_tmp_2 = (&call_tmp8)->dom;
  ret_to_arg_ref_tmp_5 = &default_argmyLocales;
  chpl__convertRuntimeTypeToValue4(&_runtime_type_tmp_2, ret_to_arg_ref_tmp_5);
  chpl_check_nil(this9, INT64(183), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  (this9)->myLocales = default_argmyLocales;
  wrap_call_tmp3 = _construct_RootLocale(call_tmp2, INT64(0), &wrap_call_tmp, &default_argmyLocaleSpace, &default_argmyLocales, this9);
  chpl__autoDestroy2(&call_tmp7);
  chpl__autoDestroy2(&call_tmp6);
  chpl__autoDestroy2(&default_argmyLocaleSpace);
  call_tmp10 = ((locale)(wrap_call_tmp3));
  call_tmp9 = call_tmp10;
  chpl_check_nil(call_tmp9, INT64(184), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  call_tmp11 = &((call_tmp9)->parent);
  chpl_macro_tmp_464.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_464.addr = NULL;
  *(call_tmp11) = chpl_macro_tmp_464;
  call_tmp13 = ((locale)(wrap_call_tmp3));
  call_tmp12 = call_tmp13;
  chpl_check_nil(call_tmp12, INT64(185), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  call_tmp14 = &((call_tmp12)->numCores);
  *(call_tmp14) = INT64(0);
  return wrap_call_tmp3;
}

/* LocaleModel.chpl:191 */
static void init2(chpl____wide_RootLocale* const this8) {
  memory_order local_memory_order_seq_cst;
  int64_t local_numLocales;
  chpl____wide_AbstractRootLocale chpl__iter_F0_this = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_AbstractRootLocale call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  localesBarrier this9;
  localesBarrier wrap_call_tmp;
  localesBarrier b;
  chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F type_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_boundedLow_F call_tmp2;
  _ref_range_int64_t_boundedLow_F ret_to_arg_ref_tmp_ = NULL;
  int64_t call_tmp3;
  range_int64_t_bounded_F call_tmp4;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_2 = NULL;
  chpl____wide_DefaultRectangularDom_1_int64_t_F call_tmp5 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_3 = NULL;
  chpl___RuntimeTypeInfo4 call_tmp6;
  chpl____wide_DefaultRectangularDom_1_int64_t_F _runtime_type_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_DefaultRectangularArr_localesSignal_1_int64_t_F ret_to_arg_ref_tmp_4 = NULL;
  chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F flags = {CHPL_LOCALEID_T_INIT, NULL};
  chpl___EndCount _coforallCount = NULL;
  chpl___EndCount this10 = NULL;
  int64_t call_tmp7;
  chpl_opaque cast_tmp;
  chpl___EndCount T = NULL;
  atomic_int64 _init_class_tmp_;
  atomic_int64 this11;
  atomic_int_least64_t ret;
  atomic_int_least64_t type_tmp2;
  atomic_int_least64_t ret2;
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  _ref_atomic_int_least64_t T2 = NULL;
  _ref_atomic_int_least64_t _ref_tmp_2 = NULL;
  atomic_int_least64_t type_tmp3;
  atomic_int_least64_t x;
  _ref_atomic_int_least64_t _ref_tmp_3 = NULL;
  atomic_int64 wrap_call_tmp2;
  chpl_task_list_p type_tmp4;
  chpl_task_list_p x2;
  _ref_chpl_task_list_p _ref_tmp_4 = NULL;
  chpl___EndCount wrap_call_tmp3 = NULL;
  range_int64_t_boundedLow_F call_tmp8;
  _ref_range_int64_t_boundedLow_F ret_to_arg_ref_tmp_5 = NULL;
  range_int64_t_bounded_F call_tmp9;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_6 = NULL;
  range_int64_t_bounded_F _ic__F0_this;
  rangeBase_int64_t_bounded_F T3;
  rangeBase_int64_t_bounded_F _ic__F0_this2;
  int64_t i;
  int64_t ret3;
  int64_t type_tmp5;
  int64_t end;
  int64_t T4;
  int64_t ret4;
  int64_t ret5;
  chpl_bool call_tmp10;
  int64_t ret6;
  int64_t call_tmp11;
  _ref_int64_t _ref_tmp_5 = NULL;
  chpl_bool T5;
  chpl_bool call_tmp12;
  chpl____wide__EndCount T6 = {CHPL_LOCALEID_T_INIT, NULL};
  int32_t call_tmp13;
  chpl_localeID_t call_tmp14;
  _ref_chpl_localeID_t ret_to_arg_ref_tmp_7 = NULL;
  chpl_localeID_t call_tmp15;
  chpl___EndCount rvfDerefTmp = NULL;
  _ir_initOnLocales_AbstractRootLocale rvfDerefTmp2;
  _class_localson_fn57 _args_foron_fn = NULL;
  int64_t chpl_here_alloc_size;
  chpl_opaque chpl_here_alloc_tmp;
  chpl____wide__EndCount T7 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp16;
  _ref_int64_t _ref_tmp_6 = NULL;
  chpl_bool call_tmp17;
  chpl____wide__EndCount delete_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int64 _field_destructor_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int_least64_t call_tmp18 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomic_int_least64_t T8 = NULL;
  chpl_localeID_t call_tmp19;
  chpl____wide__EndCount rvfDerefTmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn29 _args_foron_fn2 = NULL;
  int64_t chpl_here_alloc_size2;
  chpl_opaque chpl_here_alloc_tmp2;
  chpl____wide_locale call_tmp20 = {CHPL_LOCALEID_T_INIT, NULL};
  int32_t call_tmp21;
  chpl_localeID_t call_tmp22;
  _ref_chpl_localeID_t ret_to_arg_ref_tmp_8 = NULL;
  chpl_localeID_t call_tmp23;
  chpl____wide_locale call_tmp24 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int64 call_tmp25 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order default_argorder;
  chpl_localeID_t call_tmp26;
  _class_localson_fn6 _args_foron_fn3 = NULL;
  int64_t chpl_here_alloc_size3;
  chpl_opaque chpl_here_alloc_tmp3;
  chpl____wide_AbstractRootLocale chpl_macro_tmp_465;
  chpl____wide__EndCount chpl_macro_tmp_466;
  chpl____wide__EndCount chpl_macro_tmp_467;
  chpl____wide__EndCount chpl_macro_tmp_468;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_469;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_470;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_471;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_472;
  local_memory_order_seq_cst = memory_order_seq_cst;
  local_numLocales = numLocales;
  chpl_macro_tmp_465.locale = (this8)->locale;
  chpl_macro_tmp_465.addr = ((AbstractRootLocale)((this8)->addr));
  call_tmp = chpl_macro_tmp_465;
  chpl__iter_F0_this = call_tmp;
  wrap_call_tmp = _construct_localesBarrier(&this9);
  b = wrap_call_tmp;
  ret_to_arg_ref_tmp_ = &call_tmp2;
  _build_range2(INT64(1), ret_to_arg_ref_tmp_);
  call_tmp3 = (local_numLocales - INT64(1));
  ret_to_arg_ref_tmp_2 = &call_tmp4;
  chpl___POUND_(&call_tmp2, call_tmp3, ret_to_arg_ref_tmp_2);
  ret_to_arg_ref_tmp_3 = &call_tmp5;
  chpl__ensureDomainExpr3(&call_tmp4, ret_to_arg_ref_tmp_3);
  call_tmp6 = chpl__buildArrayRuntimeType2(&call_tmp5);
  _runtime_type_tmp_ = (&call_tmp6)->dom;
  ret_to_arg_ref_tmp_4 = &type_tmp;
  chpl__convertRuntimeTypeToValue3(&_runtime_type_tmp_, ret_to_arg_ref_tmp_4);
  flags = type_tmp;
  call_tmp7 = sizeof(chpl_chpl___EndCount_object);
  cast_tmp = chpl_here_alloc(call_tmp7, INT16(16));
  T = ((chpl___EndCount)(cast_tmp));
  this10 = T;
  ((object)(this10))->chpl__cid = chpl__cid_chpl___EndCount;
  chpl_check_nil(this10, INT64(192), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  (this10)->i = _init_class_tmp_;
  chpl_check_nil(this10, INT64(192), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  (this10)->taskCnt = INT64(0);
  chpl_check_nil(this10, INT64(192), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  (this10)->taskList = NULL;
  ret2 = type_tmp2;
  _ref_tmp_ = &ret2;
  T2 = _ref_tmp_;
  atomic_init_int_least64_t(T2, INT64(0));
  _ref_tmp_ = T2;
  _ref_tmp_2 = &ret;
  *(_ref_tmp_2) = ret2;
  x = type_tmp3;
  _ref_tmp_3 = &x;
  *(_ref_tmp_3) = ret;
  (&this11)->_v = x;
  wrap_call_tmp2 = _construct_atomic_int64(x, &this11);
  chpl_check_nil(this10, INT64(192), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  (this10)->i = wrap_call_tmp2;
  chpl_check_nil(this10, INT64(192), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  (this10)->taskCnt = INT64(0);
  type_tmp4 = NULL;
  x2 = type_tmp4;
  _ref_tmp_4 = &x2;
  *(_ref_tmp_4) = NULL;
  chpl_check_nil(this10, INT64(192), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  (this10)->taskList = x2;
  wrap_call_tmp3 = _construct__EndCount(&wrap_call_tmp2, INT64(0), x2, this10);
  _coforallCount = wrap_call_tmp3;
  ret_to_arg_ref_tmp_5 = &call_tmp8;
  _build_range2(INT64(0), ret_to_arg_ref_tmp_5);
  ret_to_arg_ref_tmp_6 = &call_tmp9;
  chpl___POUND_(&call_tmp8, local_numLocales, ret_to_arg_ref_tmp_6);
  _ic__F0_this = call_tmp9;
  T3 = (&_ic__F0_this)->_base;
  _ic__F0_this2 = T3;
  ret3 = (&_ic__F0_this2)->_low;
  i = ret3;
  type_tmp5 = INT64(0);
  ret4 = (&_ic__F0_this2)->_low;
  ret5 = (&_ic__F0_this2)->_high;
  call_tmp10 = (ret4 > ret5);
  if (call_tmp10) {
    T4 = ret3;
  } else {
    ret6 = (&_ic__F0_this2)->_high;
    call_tmp11 = (ret6 + INT64(1));
    T4 = call_tmp11;
  }
  _ref_tmp_5 = &type_tmp5;
  *(_ref_tmp_5) = T4;
  end = type_tmp5;
  call_tmp12 = (ret3 != type_tmp5);
  T5 = call_tmp12;
  while (T5) {
    chpl_macro_tmp_466.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_466.addr = _coforallCount;
    T6 = chpl_macro_tmp_466;
    _upEndCount(&T6);
    call_tmp13 = ((int32_t)(i));
    ret_to_arg_ref_tmp_7 = &call_tmp14;
    chpl_buildLocaleID(call_tmp13, c_sublocid_any, ret_to_arg_ref_tmp_7, INT64(192), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
    call_tmp15 = call_tmp14;
    rvfDerefTmp = _coforallCount;
    (&rvfDerefTmp2)->F0_this = chpl__iter_F0_this;
    chpl_here_alloc_size = sizeof(chpl__class_localson_fn57_object);
    chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(36));
    _args_foron_fn = ((_class_localson_fn57)(chpl_here_alloc_tmp));
    chpl_check_nil(_args_foron_fn, INT64(192), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
    (_args_foron_fn)->_0__tmp = call_tmp15;
    chpl_check_nil(_args_foron_fn, INT64(192), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
    (_args_foron_fn)->_1_locIdx = i;
    chpl_check_nil(_args_foron_fn, INT64(192), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
    (_args_foron_fn)->_2_b = b;
    chpl_check_nil(_args_foron_fn, INT64(192), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
    (_args_foron_fn)->_3_flags = flags;
    chpl_macro_tmp_467.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_467.addr = rvfDerefTmp;
    T7 = chpl_macro_tmp_467;
    chpl_check_nil(_args_foron_fn, INT64(192), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
    (_args_foron_fn)->_4_rvfDerefTmp = T7;
    chpl_check_nil(_args_foron_fn, INT64(192), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
    (_args_foron_fn)->_5_rvfDerefTmp = rvfDerefTmp2;
    chpl_check_nil(_args_foron_fn, INT64(192), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
    (_args_foron_fn)->_6_this = *(this8);
    /*** wrapon_fn57 ***/ chpl_executeOnNB(&call_tmp15, INT32(62), _args_foron_fn, sizeof(chpl__class_localson_fn57_object), INT64(192), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
    chpl_here_free(((void*)(_args_foron_fn)));
    call_tmp16 = (i + INT64(1));
    _ref_tmp_6 = &i;
    *(_ref_tmp_6) = call_tmp16;
    call_tmp17 = (i != end);
    T5 = call_tmp17;
  }
  _waitEndCount(_coforallCount);
  chpl_macro_tmp_468.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_468.addr = _coforallCount;
  delete_tmp = chpl_macro_tmp_468;
  chpl_check_nil((&delete_tmp)->addr, INT64(192), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  chpl_macro_tmp_469.locale = (&delete_tmp)->locale;
  chpl_macro_tmp_469.addr = &(((&delete_tmp)->addr)->i);
  _field_destructor_tmp_ = chpl_macro_tmp_469;
  chpl_macro_tmp_470.locale = (_field_destructor_tmp_).locale;
  chpl_macro_tmp_470.addr = &(((_field_destructor_tmp_).addr)->_v);
  call_tmp18 = chpl_macro_tmp_470;
  T8 = (&call_tmp18)->addr;
  atomic_destroy_int_least64_t(T8);
  chpl_macro_tmp_471.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_471.addr = T8;
  call_tmp18 = chpl_macro_tmp_471;
  call_tmp19 = (&delete_tmp)->locale;
  rvfDerefTmp3 = delete_tmp;
  chpl_here_alloc_size2 = sizeof(chpl__class_localson_fn29_object);
  chpl_here_alloc_tmp2 = chpl_here_alloc(chpl_here_alloc_size2, INT16(36));
  _args_foron_fn2 = ((_class_localson_fn29)(chpl_here_alloc_tmp2));
  chpl_check_nil(_args_foron_fn2, INT64(192), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  (_args_foron_fn2)->_0__tmp = call_tmp19;
  chpl_check_nil(_args_foron_fn2, INT64(192), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  (_args_foron_fn2)->_1_rvfDerefTmp = rvfDerefTmp3;
  /*** wrapon_fn29 ***/ chpl_executeOn(&call_tmp19, INT32(32), _args_foron_fn2, sizeof(chpl__class_localson_fn29_object), INT64(766), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  chpl_here_free(((void*)(_args_foron_fn2)));
  chpl__autoDestroy5(&flags);
  chpl__autoDestroy2(&call_tmp5);
  call_tmp21 = chpl_task_getRequestedSubloc();
  ret_to_arg_ref_tmp_8 = &call_tmp22;
  chpl_buildLocaleID(chpl_nodeID, call_tmp21, ret_to_arg_ref_tmp_8, INT64(198), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  call_tmp23 = chpl__initCopy_chpl_rt_localeID_t(call_tmp22);
  call_tmp24 = chpl_localeID_to_locale(&call_tmp23);
  call_tmp20 = call_tmp24;
  chpl_check_nil((&call_tmp20)->addr, INT64(198), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  chpl_macro_tmp_472.locale = (&call_tmp20)->locale;
  chpl_macro_tmp_472.addr = &(((&call_tmp20)->addr)->runningTaskCounter);
  call_tmp25 = chpl_macro_tmp_472;
  default_argorder = local_memory_order_seq_cst;
  call_tmp26 = (&call_tmp25)->locale;
  chpl_here_alloc_size3 = sizeof(chpl__class_localson_fn6_object);
  chpl_here_alloc_tmp3 = chpl_here_alloc(chpl_here_alloc_size3, INT16(36));
  _args_foron_fn3 = ((_class_localson_fn6)(chpl_here_alloc_tmp3));
  chpl_check_nil(_args_foron_fn3, INT64(198), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  (_args_foron_fn3)->_0__tmp = call_tmp26;
  chpl_check_nil(_args_foron_fn3, INT64(198), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  (_args_foron_fn3)->_1_this = call_tmp25;
  chpl_check_nil(_args_foron_fn3, INT64(198), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  (_args_foron_fn3)->_2_value = INT64(0);
  chpl_check_nil(_args_foron_fn3, INT64(198), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  (_args_foron_fn3)->_3_order = default_argorder;
  /*** wrapon_fn6 ***/ chpl_executeOn(&call_tmp26, INT32(7), _args_foron_fn3, sizeof(chpl__class_localson_fn6_object), INT64(1043), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  chpl_here_free(((void*)(_args_foron_fn3)));
  return;
}

/* LocaleModel.chpl:192 */
static void wrapon_fn57(_class_localson_fn57 c) {
  int64_t _1_locIdx;
  localesBarrier _2_b;
  chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F _3_flags = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__EndCount _4_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _ir_initOnLocales_AbstractRootLocale _5_rvfDerefTmp;
  chpl____wide_RootLocale _6_this = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_check_nil(c, INT64(192), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  _1_locIdx = (c)->_1_locIdx;
  chpl_check_nil(c, INT64(192), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  _2_b = (c)->_2_b;
  chpl_check_nil(c, INT64(192), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  _3_flags = (c)->_3_flags;
  chpl_check_nil(c, INT64(192), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  _4_rvfDerefTmp = (c)->_4_rvfDerefTmp;
  chpl_check_nil(c, INT64(192), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  _5_rvfDerefTmp = (c)->_5_rvfDerefTmp;
  chpl_check_nil(c, INT64(192), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  _6_this = (c)->_6_this;
  on_fn57(_1_locIdx, &_2_b, &_3_flags, &_4_rvfDerefTmp, &_5_rvfDerefTmp, &_6_this);
  return;
}

/* LocaleModel.chpl:205 */
static int64_t chpl_id3(chpl____wide_RootLocale* const this8) {
  int64_t local_numLocales;
  int64_t ret;
  local_numLocales = numLocales;
  ret = local_numLocales;
  return ret;
}

/* ChapelLocale.chpl:213 */
static void on_fn57(int64_t locIdx, localesBarrier* const b, chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F* const flags, chpl____wide__EndCount* const _coforallCount, _ir_initOnLocales_AbstractRootLocale* const chpl__iter, chpl____wide_RootLocale* const this8) {
  chpl____wide_DefaultDist ret = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp2;
  DefaultDist this9 = NULL;
  int64_t call_tmp3;
  chpl_opaque cast_tmp;
  DefaultDist T = NULL;
  atomic_refcnt this10;
  atomic_int64 _init_class_tmp_;
  atomic_int64 this11;
  atomic_int_least64_t ret2;
  atomic_int_least64_t type_tmp;
  atomic_int_least64_t ret3;
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  _ref_atomic_int_least64_t T2 = NULL;
  _ref_atomic_int_least64_t _ref_tmp_2 = NULL;
  atomic_int_least64_t type_tmp2;
  atomic_int_least64_t x;
  _ref_atomic_int_least64_t _ref_tmp_3 = NULL;
  atomic_int64 wrap_call_tmp;
  atomic_refcnt wrap_call_tmp2;
  list_BaseDom this12;
  listNode_BaseDom T3 = NULL;
  chpl____wide_listNode_BaseDom T4 = {CHPL_LOCALEID_T_INIT, NULL};
  listNode_BaseDom T5 = NULL;
  chpl____wide_listNode_BaseDom T6 = {CHPL_LOCALEID_T_INIT, NULL};
  listNode_BaseDom call_tmp4 = NULL;
  listNode_BaseDom T7 = NULL;
  chpl____wide_listNode_BaseDom T8 = {CHPL_LOCALEID_T_INIT, NULL};
  listNode_BaseDom call_tmp5 = NULL;
  listNode_BaseDom T9 = NULL;
  chpl____wide_listNode_BaseDom T10 = {CHPL_LOCALEID_T_INIT, NULL};
  list_BaseDom wrap_call_tmp3;
  atomicflag this13;
  atomic_flag ret4;
  atomic_flag type_tmp3;
  atomic_flag ret5;
  _ref_atomic_flag _ref_tmp_4 = NULL;
  _ref_atomic_flag T11 = NULL;
  _ref_atomic_flag _ref_tmp_5 = NULL;
  atomic_flag type_tmp4;
  atomic_flag x2;
  _ref_atomic_flag _ref_tmp_6 = NULL;
  atomicflag wrap_call_tmp4;
  DefaultDist wrap_call_tmp5 = NULL;
  chpl____wide_DefaultDist call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_DefaultDist ret_to_arg_ref_tmp_ = NULL;
  LocaleModel wrap_call_tmp6 = NULL;
  chpl____wide_locale call_tmp7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F call_tmp8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F call_tmp9 = {CHPL_LOCALEID_T_INIT, NULL};
  _tuple_1_star_int64_t i;
  _tuple_1_star_int64_t this14;
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F call_tmp10 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F ret6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool wrap_call_tmp7;
  chpl____wide_DefaultRectangularDom_1_int64_t_F call_tmp11 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp12;
  chpl____wide_chpl_string call_tmp13 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t sum;
  int64_t ret_x1;
  chpl____wide__ref__tuple_1_star_int64_t ret_ = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp14;
  int64_t call_tmp15;
  _ref_int64_t _ref_tmp_7 = NULL;
  chpl____wide__ddata_locale call_tmp16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_locale call_tmp17 = {CHPL_LOCALEID_T_INIT, NULL};
  locale call_tmp18 = NULL;
  chpl____wide_locale T12 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale call_tmp19 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale call_tmp20 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_int64_t call_tmp21 = {CHPL_LOCALEID_T_INIT, NULL};
  locale call_tmp22 = NULL;
  locale call_tmp23 = NULL;
  int64_t ret7;
  _ref_localesBarrier _ref_tmp_8 = NULL;
  chpl____wide_object chpl_macro_tmp_473;
  chpl____wide_listNode_BaseDom chpl_macro_tmp_474;
  chpl____wide_listNode_BaseDom chpl_macro_tmp_475;
  chpl____wide_listNode_BaseDom chpl_macro_tmp_476;
  chpl____wide_listNode_BaseDom chpl_macro_tmp_477;
  chpl____wide_locale chpl_macro_tmp_478;
  chpl____wide__ref_DefaultRectangularArr_locale_1_int64_t_F chpl_macro_tmp_479;
  chpl____wide__ref_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_480;
  chpl____wide__ref__tuple_1_star_int64_t chpl_macro_tmp_481;
  chpl____wide__ref_int64_t chpl_macro_tmp_482;
  chpl____wide__ref__ddata_locale chpl_macro_tmp_483;
  chpl____wide__ref_locale chpl_macro_tmp_484;
  chpl____wide_locale chpl_macro_tmp_485;
  chpl____wide_locale chpl_macro_tmp_486;
  chpl____wide__ref_int64_t chpl_macro_tmp_487;
  int64_t chpl_macro_tmp_488;
  ret = defaultDist;
  chpl_macro_tmp_473.locale = (&ret)->locale;
  chpl_macro_tmp_473.addr = ((object)((&ret)->addr));
  call_tmp = chpl_macro_tmp_473;
  call_tmp2 = (&call_tmp)->addr == nil;
  if (call_tmp2) {
    call_tmp3 = sizeof(chpl_DefaultDist_object);
    cast_tmp = chpl_here_alloc(call_tmp3, INT16(4));
    T = ((DefaultDist)(cast_tmp));
    this9 = T;
    ((object)(this9))->chpl__cid = chpl__cid_DefaultDist;
    (&this10)->_cnt = _init_class_tmp_;
    ret3 = type_tmp;
    _ref_tmp_ = &ret3;
    T2 = _ref_tmp_;
    atomic_init_int_least64_t(T2, INT64(0));
    _ref_tmp_ = T2;
    _ref_tmp_2 = &ret2;
    *(_ref_tmp_2) = ret3;
    x = type_tmp2;
    _ref_tmp_3 = &x;
    *(_ref_tmp_3) = ret2;
    (&this11)->_v = x;
    wrap_call_tmp = _construct_atomic_int64(x, &this11);
    (&this10)->_cnt = wrap_call_tmp;
    wrap_call_tmp2 = _construct_atomic_refcnt(&wrap_call_tmp, &this10);
    T3 = nil;
    chpl_macro_tmp_474.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_474.addr = T3;
    T4 = chpl_macro_tmp_474;
    (&this12)->first = T4;
    T5 = nil;
    chpl_macro_tmp_475.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_475.addr = T5;
    T6 = chpl_macro_tmp_475;
    (&this12)->last = T6;
    (&this12)->length = INT64(0);
    T7 = ((listNode_BaseDom)(nil));
    call_tmp4 = T7;
    chpl_macro_tmp_476.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_476.addr = call_tmp4;
    T8 = chpl_macro_tmp_476;
    (&this12)->first = T8;
    T9 = ((listNode_BaseDom)(nil));
    call_tmp5 = T9;
    chpl_macro_tmp_477.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_477.addr = call_tmp5;
    T10 = chpl_macro_tmp_477;
    (&this12)->last = T10;
    (&this12)->length = INT64(0);
    wrap_call_tmp3 = _construct_list2(call_tmp4, call_tmp5, INT64(0), &this12);
    ret5 = type_tmp3;
    _ref_tmp_4 = &ret5;
    T11 = _ref_tmp_4;
    atomic_init_flag(T11, false);
    _ref_tmp_4 = T11;
    _ref_tmp_5 = &ret4;
    *(_ref_tmp_5) = ret5;
    x2 = type_tmp4;
    _ref_tmp_6 = &x2;
    *(_ref_tmp_6) = ret4;
    (&this13)->_v = x2;
    wrap_call_tmp4 = _construct_atomicflag(x2, &this13);
    wrap_call_tmp5 = _construct_DefaultDist(&wrap_call_tmp2, &wrap_call_tmp3, &wrap_call_tmp4, this9);
    ret_to_arg_ref_tmp_ = &call_tmp6;
    chpl__buildDistValue2(wrap_call_tmp5, ret_to_arg_ref_tmp_);
    chpl___ASSIGN_(&defaultDist, &call_tmp6);
    chpl__autoDestroy(&call_tmp6);
  }
  chpl_macro_tmp_478.locale = (this8)->locale;
  chpl_macro_tmp_478.addr = ((locale)((this8)->addr));
  call_tmp7 = chpl_macro_tmp_478;
  wrap_call_tmp6 = LocaleModel2(&call_tmp7);
  chpl_check_nil((this8)->addr, INT64(194), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  chpl_macro_tmp_479.locale = (this8)->locale;
  chpl_macro_tmp_479.addr = &(((this8)->addr)->myLocales);
  chpl_gen_comm_get(((void*)(&call_tmp8)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_479).locale), INT64(0), NULL), (chpl_macro_tmp_479).addr, sizeof(chpl____wide_DefaultRectangularArr_locale_1_int64_t_F), -1, INT64(1), INT64(194), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  call_tmp9 = call_tmp8;
  *(this14 + INT64(0)) = locIdx;
  *(i + INT64(0)) = *(this14 + INT64(0));
  ret6 = call_tmp9;
  call_tmp10 = ret6;
  chpl_check_nil((&call_tmp10)->addr, INT64(194), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  chpl_macro_tmp_480.locale = (&call_tmp10)->locale;
  chpl_macro_tmp_480.addr = &(((&call_tmp10)->addr)->dom);
  chpl_gen_comm_get(((void*)(&call_tmp11)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_480).locale), INT64(0), NULL), (chpl_macro_tmp_480).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), -1, INT64(1), INT64(194), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  chpl_check_nil((&call_tmp11)->addr, INT64(194), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  wrap_call_tmp7 = dsiMember2(&call_tmp11, &this14);
  call_tmp12 = (! wrap_call_tmp7);
  if (call_tmp12) {
    wide_string_from_c_string(&call_tmp13, "array index out of bounds: ", INT64(0), INT64(0), INT64(194), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
    halt2(call_tmp13, &this14, INT64(194), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  }
  sum = INT64(0);
  chpl_check_nil((&call_tmp10)->addr, INT64(194), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  chpl_macro_tmp_481.locale = (&call_tmp10)->locale;
  chpl_macro_tmp_481.addr = &(((&call_tmp10)->addr)->blk);
  ret_ = chpl_macro_tmp_481;
  chpl_macro_tmp_482.locale = (ret_).locale;
  chpl_macro_tmp_482.addr = (*((ret_).addr) + INT64(0));
  chpl_gen_comm_get(((void*)(&ret_x1)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_482).locale), INT64(0), NULL), (chpl_macro_tmp_482).addr, sizeof(int64_t), -1, INT64(1), INT64(194), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  call_tmp14 = *(i + INT64(0));
  call_tmp15 = (call_tmp14 * ret_x1);
  _ref_tmp_7 = &sum;
  *(_ref_tmp_7) += call_tmp15;
  chpl_check_nil((&call_tmp10)->addr, INT64(194), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  chpl_macro_tmp_483.locale = (&call_tmp10)->locale;
  chpl_macro_tmp_483.addr = &(((&call_tmp10)->addr)->shiftedData);
  chpl_gen_comm_get(((void*)(&call_tmp16)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_483).locale), INT64(0), NULL), (chpl_macro_tmp_483).addr, sizeof(chpl____wide__ddata_locale), -1, INT64(1), INT64(194), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  chpl_macro_tmp_484.locale = (&call_tmp16)->locale;
  chpl_macro_tmp_484.addr = ((&call_tmp16)->addr + sum);
  call_tmp17 = chpl_macro_tmp_484;
  call_tmp18 = ((locale)(wrap_call_tmp6));
  chpl_macro_tmp_485.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_485.addr = call_tmp18;
  T12 = chpl_macro_tmp_485;
  chpl_gen_comm_put(((void*)(&T12)), chpl_nodeFromLocaleID(&((call_tmp17).locale), INT64(0), NULL), (call_tmp17).addr, sizeof(chpl____wide_locale), -1, INT64(1), INT64(194), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  chpl_macro_tmp_486.locale = (this8)->locale;
  chpl_macro_tmp_486.addr = ((locale)((this8)->addr));
  call_tmp20 = chpl_macro_tmp_486;
  call_tmp19 = call_tmp20;
  chpl_check_nil((&call_tmp19)->addr, INT64(195), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  chpl_macro_tmp_487.locale = (&call_tmp19)->locale;
  chpl_macro_tmp_487.addr = &(((&call_tmp19)->addr)->numCores);
  call_tmp21 = chpl_macro_tmp_487;
  call_tmp23 = ((locale)(wrap_call_tmp6));
  call_tmp22 = call_tmp23;
  chpl_check_nil(call_tmp22, INT64(195), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  ret7 = (call_tmp22)->numCores;
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_488)), chpl_nodeFromLocaleID(&((call_tmp21).locale), INT64(0), NULL), (call_tmp21).addr, sizeof(int64_t), -1, INT64(1), INT64(195), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  chpl_macro_tmp_488 += ret7;
  chpl_gen_comm_put(((void*)(&chpl_macro_tmp_488)), chpl_nodeFromLocaleID(&((call_tmp21).locale), INT64(0), NULL), (call_tmp21).addr, sizeof(int64_t), -1, INT64(1), INT64(195), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  _ref_tmp_8 = b;
  chpl_check_nil(_ref_tmp_8, INT64(218), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
  wait2(_ref_tmp_8, locIdx, flags);
  chpl_rootLocaleInitPrivate(locIdx);
  _downEndCount(_coforallCount);
  return;
}

/* LocaleModel.chpl:217 */
static int64_t getChildCount3(chpl____wide_RootLocale* const this8) {
  chpl____wide_DefaultRectangularDom_1_int64_t_F call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t wrap_call_tmp;
  chpl____wide__ref_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_489;
  chpl_check_nil((this8)->addr, INT64(217), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  chpl_macro_tmp_489.locale = (this8)->locale;
  chpl_macro_tmp_489.addr = &(((this8)->addr)->myLocaleSpace);
  chpl_gen_comm_get(((void*)(&call_tmp)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_489).locale), INT64(0), NULL), (chpl_macro_tmp_489).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), -1, INT64(1), INT64(217), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  chpl_check_nil((&call_tmp)->addr, INT64(217), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  wrap_call_tmp = numIndices(&call_tmp);
  return wrap_call_tmp;
}

/* LocaleModel.chpl:226 */
static chpl____wide_locale getChild3(chpl____wide_RootLocale* const this8, int64_t idx) {
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  _tuple_1_star_int64_t i;
  _tuple_1_star_int64_t this9;
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F ret = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool wrap_call_tmp;
  chpl____wide_DefaultRectangularDom_1_int64_t_F call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp5;
  chpl____wide_chpl_string call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t sum;
  int64_t ret_x1;
  chpl____wide__ref__tuple_1_star_int64_t ret_ = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp7;
  int64_t call_tmp8;
  _ref_int64_t _ref_tmp_ = NULL;
  chpl____wide__ddata_locale call_tmp9 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale ret2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_locale call_tmp10 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_DefaultRectangularArr_locale_1_int64_t_F chpl_macro_tmp_490;
  chpl____wide__ref_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_491;
  chpl____wide__ref__tuple_1_star_int64_t chpl_macro_tmp_492;
  chpl____wide__ref_int64_t chpl_macro_tmp_493;
  chpl____wide__ref__ddata_locale chpl_macro_tmp_494;
  chpl____wide__ref_locale chpl_macro_tmp_495;
  chpl_check_nil((this8)->addr, INT64(226), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  chpl_macro_tmp_490.locale = (this8)->locale;
  chpl_macro_tmp_490.addr = &(((this8)->addr)->myLocales);
  chpl_gen_comm_get(((void*)(&call_tmp)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_490).locale), INT64(0), NULL), (chpl_macro_tmp_490).addr, sizeof(chpl____wide_DefaultRectangularArr_locale_1_int64_t_F), -1, INT64(1), INT64(226), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  call_tmp2 = call_tmp;
  *(this9 + INT64(0)) = idx;
  *(i + INT64(0)) = *(this9 + INT64(0));
  ret = call_tmp2;
  call_tmp3 = ret;
  chpl_check_nil((&call_tmp3)->addr, INT64(226), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  chpl_macro_tmp_491.locale = (&call_tmp3)->locale;
  chpl_macro_tmp_491.addr = &(((&call_tmp3)->addr)->dom);
  chpl_gen_comm_get(((void*)(&call_tmp4)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_491).locale), INT64(0), NULL), (chpl_macro_tmp_491).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), -1, INT64(1), INT64(226), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  chpl_check_nil((&call_tmp4)->addr, INT64(226), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  wrap_call_tmp = dsiMember2(&call_tmp4, &this9);
  call_tmp5 = (! wrap_call_tmp);
  if (call_tmp5) {
    wide_string_from_c_string(&call_tmp6, "array index out of bounds: ", INT64(0), INT64(0), INT64(226), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
    halt2(call_tmp6, &this9, INT64(226), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  }
  sum = INT64(0);
  chpl_check_nil((&call_tmp3)->addr, INT64(226), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  chpl_macro_tmp_492.locale = (&call_tmp3)->locale;
  chpl_macro_tmp_492.addr = &(((&call_tmp3)->addr)->blk);
  ret_ = chpl_macro_tmp_492;
  chpl_macro_tmp_493.locale = (ret_).locale;
  chpl_macro_tmp_493.addr = (*((ret_).addr) + INT64(0));
  chpl_gen_comm_get(((void*)(&ret_x1)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_493).locale), INT64(0), NULL), (chpl_macro_tmp_493).addr, sizeof(int64_t), -1, INT64(1), INT64(226), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  call_tmp7 = *(i + INT64(0));
  call_tmp8 = (call_tmp7 * ret_x1);
  _ref_tmp_ = &sum;
  *(_ref_tmp_) += call_tmp8;
  chpl_check_nil((&call_tmp3)->addr, INT64(226), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  chpl_macro_tmp_494.locale = (&call_tmp3)->locale;
  chpl_macro_tmp_494.addr = &(((&call_tmp3)->addr)->shiftedData);
  chpl_gen_comm_get(((void*)(&call_tmp9)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_494).locale), INT64(0), NULL), (chpl_macro_tmp_494).addr, sizeof(chpl____wide__ddata_locale), -1, INT64(1), INT64(226), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  chpl_macro_tmp_495.locale = (&call_tmp9)->locale;
  chpl_macro_tmp_495.addr = ((&call_tmp9)->addr + sum);
  call_tmp10 = chpl_macro_tmp_495;
  chpl_gen_comm_get(((void*)(&ret2)), chpl_nodeFromLocaleID(&((call_tmp10).locale), INT64(0), NULL), (call_tmp10).addr, sizeof(chpl____wide_locale), -1, INT64(1), INT64(226), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  return ret2;
}

/* LocaleModel.chpl:234 */
static void getDefaultLocaleArray2(chpl____wide_RootLocale* const this8, _ref_DefaultRectangularArr_locale_1_int64_t_F _retArg) {
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_DefaultRectangularArr_locale_1_int64_t_F chpl_macro_tmp_496;
  chpl_check_nil((this8)->addr, INT64(234), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  chpl_macro_tmp_496.locale = (this8)->locale;
  chpl_macro_tmp_496.addr = &(((this8)->addr)->myLocales);
  chpl_gen_comm_get(((void*)(&call_tmp)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_496).locale), INT64(0), NULL), (chpl_macro_tmp_496).addr, sizeof(chpl____wide_DefaultRectangularArr_locale_1_int64_t_F), -1, INT64(1), INT64(234), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  *(_retArg) = chpl__autoCopy4(&call_tmp);
  return;
}

/* LocaleModel.chpl:234 */
static chpl____wide_DefaultRectangularArr_locale_1_int64_t_F getDefaultLocaleArray(chpl____wide_RootLocale* const this8) {
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_DefaultRectangularArr_locale_1_int64_t_F chpl_macro_tmp_497;
  chpl_check_nil((this8)->addr, INT64(234), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  chpl_macro_tmp_497.locale = (this8)->locale;
  chpl_macro_tmp_497.addr = &(((this8)->addr)->myLocales);
  chpl_gen_comm_get(((void*)(&call_tmp)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_497).locale), INT64(0), NULL), (chpl_macro_tmp_497).addr, sizeof(chpl____wide_DefaultRectangularArr_locale_1_int64_t_F), -1, INT64(1), INT64(234), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  return call_tmp;
}

/* LocaleModel.chpl:236 */
static chpl____wide_locale localeIDtoLocale2(chpl____wide_RootLocale* const this8, chpl_localeID_t* const id2) {
  int32_t call_tmp;
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp4;
  _tuple_1_star_int64_t i;
  _tuple_1_star_int64_t this9;
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F call_tmp5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F ret = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool wrap_call_tmp;
  chpl____wide_DefaultRectangularDom_1_int64_t_F call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp7;
  chpl____wide_chpl_string call_tmp8 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t sum;
  int64_t ret_x1;
  chpl____wide__ref__tuple_1_star_int64_t ret_ = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp9;
  int64_t call_tmp10;
  _ref_int64_t _ref_tmp_ = NULL;
  chpl____wide__ddata_locale call_tmp11 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale ret2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_locale call_tmp12 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_DefaultRectangularArr_locale_1_int64_t_F chpl_macro_tmp_498;
  chpl____wide__ref_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_499;
  chpl____wide__ref__tuple_1_star_int64_t chpl_macro_tmp_500;
  chpl____wide__ref_int64_t chpl_macro_tmp_501;
  chpl____wide__ref__ddata_locale chpl_macro_tmp_502;
  chpl____wide__ref_locale chpl_macro_tmp_503;
  call_tmp = chpl_rt_nodeFromLocaleID(*(id2));
  chpl_check_nil((this8)->addr, INT64(241), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  chpl_macro_tmp_498.locale = (this8)->locale;
  chpl_macro_tmp_498.addr = &(((this8)->addr)->myLocales);
  chpl_gen_comm_get(((void*)(&call_tmp2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_498).locale), INT64(0), NULL), (chpl_macro_tmp_498).addr, sizeof(chpl____wide_DefaultRectangularArr_locale_1_int64_t_F), -1, INT64(1), INT64(241), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  call_tmp3 = call_tmp2;
  call_tmp4 = ((int64_t)(call_tmp));
  *(this9 + INT64(0)) = call_tmp4;
  *(i + INT64(0)) = *(this9 + INT64(0));
  ret = call_tmp3;
  call_tmp5 = ret;
  chpl_check_nil((&call_tmp5)->addr, INT64(241), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  chpl_macro_tmp_499.locale = (&call_tmp5)->locale;
  chpl_macro_tmp_499.addr = &(((&call_tmp5)->addr)->dom);
  chpl_gen_comm_get(((void*)(&call_tmp6)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_499).locale), INT64(0), NULL), (chpl_macro_tmp_499).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), -1, INT64(1), INT64(241), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  chpl_check_nil((&call_tmp6)->addr, INT64(241), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  wrap_call_tmp = dsiMember2(&call_tmp6, &this9);
  call_tmp7 = (! wrap_call_tmp);
  if (call_tmp7) {
    wide_string_from_c_string(&call_tmp8, "array index out of bounds: ", INT64(0), INT64(0), INT64(241), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
    halt2(call_tmp8, &this9, INT64(241), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  }
  sum = INT64(0);
  chpl_check_nil((&call_tmp5)->addr, INT64(241), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  chpl_macro_tmp_500.locale = (&call_tmp5)->locale;
  chpl_macro_tmp_500.addr = &(((&call_tmp5)->addr)->blk);
  ret_ = chpl_macro_tmp_500;
  chpl_macro_tmp_501.locale = (ret_).locale;
  chpl_macro_tmp_501.addr = (*((ret_).addr) + INT64(0));
  chpl_gen_comm_get(((void*)(&ret_x1)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_501).locale), INT64(0), NULL), (chpl_macro_tmp_501).addr, sizeof(int64_t), -1, INT64(1), INT64(241), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  call_tmp9 = *(i + INT64(0));
  call_tmp10 = (call_tmp9 * ret_x1);
  _ref_tmp_ = &sum;
  *(_ref_tmp_) += call_tmp10;
  chpl_check_nil((&call_tmp5)->addr, INT64(241), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  chpl_macro_tmp_502.locale = (&call_tmp5)->locale;
  chpl_macro_tmp_502.addr = &(((&call_tmp5)->addr)->shiftedData);
  chpl_gen_comm_get(((void*)(&call_tmp11)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_502).locale), INT64(0), NULL), (chpl_macro_tmp_502).addr, sizeof(chpl____wide__ddata_locale), -1, INT64(1), INT64(241), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  chpl_macro_tmp_503.locale = (&call_tmp11)->locale;
  chpl_macro_tmp_503.addr = ((&call_tmp11)->addr + sum);
  call_tmp12 = chpl_macro_tmp_503;
  chpl_gen_comm_get(((void*)(&ret2)), chpl_nodeFromLocaleID(&((call_tmp12).locale), INT64(0), NULL), (call_tmp12).addr, sizeof(chpl____wide_locale), -1, INT64(1), INT64(241), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  return ret2;
}

/* LocaleModel.chpl:254 */
static chpl_opaque _local_chpl_here_alloc(int64_t size, int16_t md) {
  int16_t call_tmp;
  int16_t call_tmp2;
  chpl_opaque call_tmp3;
  call_tmp = chpl_memhook_md_num();
  call_tmp2 = (md + call_tmp);
  call_tmp3 = chpl_mem_alloc(size, call_tmp2, INT64(257), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  return call_tmp3;
}

/* LocaleModel.chpl:254 */
static chpl_opaque chpl_here_alloc(int64_t size, int16_t md) {
  int16_t call_tmp;
  int16_t call_tmp2;
  chpl_opaque call_tmp3;
  call_tmp = chpl_memhook_md_num();
  call_tmp2 = (md + call_tmp);
  call_tmp3 = chpl_mem_alloc(size, call_tmp2, INT64(257), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  return call_tmp3;
}

/* LocaleModel.chpl:278 */
static void _local_chpl_here_free(chpl_opaque ptr) {
  chpl_mem_free(ptr, INT64(281), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  return;
}

/* LocaleModel.chpl:278 */
static void chpl_here_free(chpl_opaque ptr) {
  chpl_mem_free(ptr, INT64(281), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  return;
}

/* LocaleModel.chpl:305 */
void chpl_executeOn(chpl_localeID_t* const loc, int64_t fn, c_void_ptr args, int32_t args_size, int64_t _ln, c_string _fn) {
  int32_t call_tmp;
  chpl_bool call_tmp2;
  int32_t call_tmp3;
  int64_t call_tmp4;
  int64_t call_tmp5;
  call_tmp = chpl_nodeFromLocaleID(loc, INT64(310), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  call_tmp2 = (call_tmp == chpl_nodeID);
  if (call_tmp2) {
    chpl_ftable_call(fn, args);
  } else {
    call_tmp3 = chpl_sublocFromLocaleID(loc, INT64(315), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
    call_tmp4 = ((int64_t)(call_tmp));
    call_tmp5 = ((int64_t)(call_tmp3));
    chpl_comm_fork(call_tmp4, call_tmp5, fn, args, args_size);
  }
  return;
}

/* LocaleModel.chpl:326 */
void chpl_executeOnFast(chpl_localeID_t* const loc, int64_t fn, c_void_ptr args, int32_t args_size, int64_t _ln, c_string _fn) {
  int32_t call_tmp;
  chpl_bool call_tmp2;
  int32_t call_tmp3;
  int64_t call_tmp4;
  int64_t call_tmp5;
  call_tmp = chpl_nodeFromLocaleID(loc, INT64(331), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  call_tmp2 = (call_tmp == chpl_nodeID);
  if (call_tmp2) {
    chpl_ftable_call(fn, args);
  } else {
    call_tmp3 = chpl_sublocFromLocaleID(loc, INT64(336), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
    call_tmp4 = ((int64_t)(call_tmp));
    call_tmp5 = ((int64_t)(call_tmp3));
    chpl_comm_fork_fast(call_tmp4, call_tmp5, fn, args, args_size);
  }
  return;
}

/* LocaleModel.chpl:346 */
void chpl_executeOnNB(chpl_localeID_t* const loc, int64_t fn, c_void_ptr args, int32_t args_size, int64_t _ln, c_string _fn) {
  int32_t call_tmp;
  chpl_bool call_tmp2;
  chpl_bool call_tmp3;
  int32_t call_tmp4;
  int64_t call_tmp5;
  int64_t call_tmp6;
  int32_t call_tmp7;
  chpl_bool call_tmp8;
  int64_t call_tmp9;
  int64_t call_tmp10;
  int64_t call_tmp11;
  int64_t call_tmp12;
  call_tmp = chpl_nodeFromLocaleID(loc, INT64(355), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  call_tmp2 = (call_tmp == chpl_nodeID);
  if (call_tmp2) {
    call_tmp3 = chpl_task_getSerial();
    if (call_tmp3) {
      chpl_ftable_call(fn, args);
    } else {
      call_tmp4 = chpl_sublocFromLocaleID(loc, INT64(364), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
      call_tmp5 = ((int64_t)(call_tmp));
      call_tmp6 = ((int64_t)(call_tmp4));
      chpl_comm_fork_nb(call_tmp5, call_tmp6, fn, args, args_size);
    }
  } else {
    call_tmp7 = chpl_sublocFromLocaleID(loc, INT64(367), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
    call_tmp8 = chpl_task_getSerial();
    if (call_tmp8) {
      call_tmp9 = ((int64_t)(call_tmp));
      call_tmp10 = ((int64_t)(call_tmp7));
      chpl_comm_fork(call_tmp9, call_tmp10, fn, args, args_size);
    } else {
      call_tmp11 = ((int64_t)(call_tmp));
      call_tmp12 = ((int64_t)(call_tmp7));
      chpl_comm_fork_nb(call_tmp11, call_tmp12, fn, args, args_size);
    }
  }
  return;
}

/* LocaleModel.chpl:396 */
void chpl_taskListAddBegin(int64_t subloc_id, int64_t fn, c_void_ptr args, _ref_chpl_task_list_p tlist, int64_t tlist_node_id, int64_t _ln, c_string _fn) {
  _ref_chpl_task_list_p T = NULL;
  T = tlist;
  chpl_task_addToTaskList(fn, args, subloc_id, T, tlist_node_id, true, INT64(402), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  tlist = T;
  return;
}

/* LocaleModel.chpl:411 */
void chpl_taskListAddCoStmt(int64_t subloc_id, int64_t fn, c_void_ptr args, _ref_chpl_task_list_p tlist, int64_t tlist_node_id, int64_t _ln, c_string _fn) {
  _ref_chpl_task_list_p T = NULL;
  T = tlist;
  chpl_task_addToTaskList(fn, args, subloc_id, T, tlist_node_id, false, INT64(417), "/home/kp167/chap-svn/modules/internal/localeModels/flat/LocaleModel.chpl");
  tlist = T;
  return;
}

/* LocaleModel.chpl:425 */
void chpl_taskListProcess(chpl_task_list_p task_list, int64_t _ln, c_string _fn) {
  chpl_task_processTaskList(task_list);
  return;
}

/* LocaleModel.chpl:434 */
void chpl_taskListExecute(chpl_task_list_p task_list, int64_t _ln, c_string _fn) {
  chpl_task_executeTasksInList(task_list);
  return;
}

/* LocaleModel.chpl:443 */
void chpl_taskListFree(chpl_task_list_p task_list, int64_t _ln, c_string _fn) {
  chpl_task_freeTaskList(task_list);
  return;
}

