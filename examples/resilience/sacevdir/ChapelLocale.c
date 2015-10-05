/* ChapelLocale.chpl:4 */
static void chpl__init_ChapelLocale(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  chpl____wide_locale type_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  locale call_tmp = NULL;
  locale T = NULL;
  _ref_locale _ref_tmp_ = NULL;
  chpl____wide_locale type_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  locale call_tmp2 = NULL;
  locale T2 = NULL;
  _ref_locale _ref_tmp_2 = NULL;
  locale const_tmp = NULL;
  chpl____wide_locale T3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale chpl_macro_tmp_79;
  chpl____wide_locale chpl_macro_tmp_80;
  chpl____wide_locale chpl_macro_tmp_81;
  chpl____wide_locale chpl_macro_tmp_82;
  chpl____wide__ref_locale chpl_macro_tmp_83;
  chpl____wide_locale chpl_macro_tmp_84;
  chpl____wide__ref_locale chpl_macro_tmp_85;
  if (chpl__init_ChapelLocale_p) {
    goto _exit_chpl__init_ChapelLocale;
  }
  modFormatStr = "%*s\n";
  modStr = "ChapelLocale";
  printModuleInit(modFormatStr, modStr, INT64(12));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_ChapelLocale_p = true;
  T = ((locale)(nil));
  call_tmp = T;
  chpl_macro_tmp_79.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_79.addr = call_tmp;
  type_tmp = chpl_macro_tmp_79;
  _ref_tmp_ = &type_tmp;
  chpl_macro_tmp_80.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_80.addr = NULL;
  *(_ref_tmp_) = chpl_macro_tmp_80;
  rootLocale = type_tmp;
  T2 = ((locale)(nil));
  call_tmp2 = T2;
  chpl_macro_tmp_81.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_81.addr = call_tmp2;
  type_tmp2 = chpl_macro_tmp_81;
  _ref_tmp_2 = &type_tmp2;
  chpl_macro_tmp_82.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_82.addr = NULL;
  *(_ref_tmp_2) = chpl_macro_tmp_82;
  chpl_check_nil((&origRootLocale)->addr, INT64(164), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
  chpl_macro_tmp_83.locale = (&origRootLocale)->locale;
  chpl_macro_tmp_83.addr = &(((&origRootLocale)->addr)->value);
  chpl_gen_comm_put(((void*)(&type_tmp2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_83).locale), INT64(0), NULL), (chpl_macro_tmp_83).addr, sizeof(chpl____wide_locale), -1, INT64(1), INT64(164), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
  const_tmp = locale2();
  chpl_macro_tmp_84.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_84.addr = const_tmp;
  T3 = chpl_macro_tmp_84;
  chpl_check_nil((&dummyLocale)->addr, INT64(330), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
  chpl_macro_tmp_85.locale = (&dummyLocale)->locale;
  chpl_macro_tmp_85.addr = &(((&dummyLocale)->addr)->value);
  chpl_gen_comm_put(((void*)(&T3)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_85).locale), INT64(0), NULL), (chpl_macro_tmp_85).addr, sizeof(chpl____wide_locale), -1, INT64(1), INT64(330), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_ChapelLocale:;
  return;
}

/* ChapelLocale.chpl:15 */
static locale _construct_locale(locale parent, int64_t numCores, atomic_int64* const runningTaskCounter, locale meme) {
  locale this8 = NULL;
  object T = NULL;
  chpl____wide_locale T2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale chpl_macro_tmp_86;
  this8 = meme;
  chpl_check_nil(this8, INT64(15), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
  T = &((this8)->super);
  _construct_object(T);
  chpl_macro_tmp_86.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_86.addr = parent;
  T2 = chpl_macro_tmp_86;
  chpl_check_nil(this8, INT64(25), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
  (this8)->parent = T2;
  chpl_check_nil(this8, INT64(28), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
  (this8)->numCores = numCores;
  chpl_check_nil(this8, INT64(51), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
  (this8)->runningTaskCounter = *(runningTaskCounter);
  return this8;
}

/* ChapelLocale.chpl:15 */
static void chpl__auto_destroy_locale(locale this8) {
  _ref_atomic_int64 _field_destructor_tmp_ = NULL;
  _ref_atomic_int_least64_t call_tmp = NULL;
  _ref_atomic_int_least64_t T = NULL;
  chpl_check_nil(this8, INT64(51), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
  _field_destructor_tmp_ = &((this8)->runningTaskCounter);
  chpl_check_nil(_field_destructor_tmp_, INT64(51), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
  call_tmp = &((_field_destructor_tmp_)->_v);
  T = call_tmp;
  atomic_destroy_int_least64_t(T);
  call_tmp = T;
  return;
}

/* ChapelLocale.chpl:17 */
static locale locale2(void) {
  locale this8 = NULL;
  locale this9 = NULL;
  int64_t call_tmp;
  chpl_opaque cast_tmp;
  locale T = NULL;
  locale T2 = NULL;
  chpl____wide_locale T3 = {CHPL_LOCALEID_T_INIT, NULL};
  atomic_int64 _init_class_tmp_;
  locale call_tmp2 = NULL;
  locale T4 = NULL;
  chpl____wide_locale T5 = {CHPL_LOCALEID_T_INIT, NULL};
  atomic_int64 this10;
  atomic_int_least64_t ret;
  atomic_int_least64_t type_tmp;
  atomic_int_least64_t ret2;
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  _ref_atomic_int_least64_t T6 = NULL;
  _ref_atomic_int_least64_t _ref_tmp_2 = NULL;
  atomic_int_least64_t type_tmp2;
  atomic_int_least64_t x;
  _ref_atomic_int_least64_t _ref_tmp_3 = NULL;
  atomic_int64 wrap_call_tmp;
  locale wrap_call_tmp2 = NULL;
  chpl____wide_locale chpl_macro_tmp_87;
  chpl____wide_locale chpl_macro_tmp_88;
  call_tmp = sizeof(chpl_locale_object);
  cast_tmp = chpl_here_alloc(call_tmp, INT16(1));
  T = ((locale)(cast_tmp));
  this9 = T;
  ((object)(this9))->chpl__cid = chpl__cid_locale;
  T2 = nil;
  chpl_macro_tmp_87.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_87.addr = T2;
  T3 = chpl_macro_tmp_87;
  chpl_check_nil(this9, INT64(17), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
  (this9)->parent = T3;
  chpl_check_nil(this9, INT64(17), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
  (this9)->numCores = INT64(0);
  chpl_check_nil(this9, INT64(17), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
  (this9)->runningTaskCounter = _init_class_tmp_;
  T4 = ((locale)(nil));
  call_tmp2 = T4;
  chpl_macro_tmp_88.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_88.addr = call_tmp2;
  T5 = chpl_macro_tmp_88;
  chpl_check_nil(this9, INT64(17), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
  (this9)->parent = T5;
  chpl_check_nil(this9, INT64(17), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
  (this9)->numCores = INT64(0);
  ret2 = type_tmp;
  _ref_tmp_ = &ret2;
  T6 = _ref_tmp_;
  atomic_init_int_least64_t(T6, INT64(0));
  _ref_tmp_ = T6;
  _ref_tmp_2 = &ret;
  *(_ref_tmp_2) = ret2;
  x = type_tmp2;
  _ref_tmp_3 = &x;
  *(_ref_tmp_3) = ret;
  (&this10)->_v = x;
  wrap_call_tmp = _construct_atomic_int64(x, &this10);
  chpl_check_nil(this9, INT64(17), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
  (this9)->runningTaskCounter = wrap_call_tmp;
  wrap_call_tmp2 = _construct_locale(call_tmp2, INT64(0), &wrap_call_tmp, this9);
  return wrap_call_tmp2;
}

/* ChapelLocale.chpl:31 */
static int64_t id(chpl____wide_locale* const this8) {
  int64_t ret;
  int64_t call_tmp;
  int32_t _virtual_method_tmp_;
  _ref_int64_t _ref_tmp_ = NULL;
  chpl____wide__ref_int32_t chpl_macro_tmp_89;
  ret = INT64(0);
  chpl_check_nil((this8)->addr, INT64(31), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
  chpl_macro_tmp_89.locale = (this8)->locale;
  chpl_macro_tmp_89.addr = &(((object)((this8)->addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&_virtual_method_tmp_)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_89).locale), INT64(0), NULL), (chpl_macro_tmp_89).addr, sizeof(int32_t), -1, INT64(1), INT64(31), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
  call_tmp = ((int64_t(*)(chpl____wide_locale* const))chpl_vmtable[((INT64(8) * _virtual_method_tmp_) + INT64(1))])(this8);
  _ref_tmp_ = &ret;
  *(_ref_tmp_) = call_tmp;
  return ret;
}

/* ChapelLocale.chpl:77 */
static int64_t chpl_id(chpl____wide_locale* const this8) {
  int64_t ret;
  c_string T;
  _ref_int64_t _ref_tmp_ = NULL;
  ret = INT64(0);
  T = "Pure virtual function called.";
  halt(T, INT64(78), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
  _ref_tmp_ = &ret;
  *(_ref_tmp_) = INT64(-1);
  return ret;
}

/* ChapelLocale.chpl:103 */
static int64_t getChildCount(chpl____wide_locale* const this8) {
  int64_t ret;
  c_string T;
  _ref_int64_t _ref_tmp_ = NULL;
  ret = INT64(0);
  T = "Pure virtual function called.";
  halt(T, INT64(104), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
  _ref_tmp_ = &ret;
  *(_ref_tmp_) = INT64(0);
  return ret;
}

/* ChapelLocale.chpl:120 */
static chpl____wide_locale getChild(chpl____wide_locale* const this8, int64_t idx) {
  chpl____wide_locale ret = {CHPL_LOCALEID_T_INIT, NULL};
  locale call_tmp = NULL;
  locale T = NULL;
  c_string T2;
  _ref_locale _ref_tmp_ = NULL;
  chpl____wide_locale chpl_macro_tmp_90;
  T = ((locale)(nil));
  call_tmp = T;
  chpl_macro_tmp_90.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_90.addr = call_tmp;
  ret = chpl_macro_tmp_90;
  T2 = "Pure virtual function called.";
  halt(T2, INT64(121), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
  _ref_tmp_ = &ret;
  *(_ref_tmp_) = *(this8);
  return ret;
}

/* ChapelLocale.chpl:135 */
static AbstractLocaleModel _construct_AbstractLocaleModel(locale parent, int64_t numCores, atomic_int64* const runningTaskCounter, AbstractLocaleModel meme) {
  AbstractLocaleModel this8 = NULL;
  locale T = NULL;
  this8 = meme;
  chpl_check_nil(this8, INT64(135), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
  T = &((this8)->super);
  _construct_locale(parent, numCores, runningTaskCounter, T);
  return meme;
}

/* ChapelLocale.chpl:135 */
static void chpl__auto_destroy_AbstractLocaleModel(AbstractLocaleModel this8) {
  locale _parent_destructor_tmp_ = NULL;
  _ref_atomic_int64 _field_destructor_tmp_ = NULL;
  _ref_atomic_int_least64_t call_tmp = NULL;
  _ref_atomic_int_least64_t T = NULL;
  _parent_destructor_tmp_ = ((locale)(this8));
  chpl_check_nil(_parent_destructor_tmp_, INT64(135), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
  _field_destructor_tmp_ = &((_parent_destructor_tmp_)->runningTaskCounter);
  chpl_check_nil(_field_destructor_tmp_, INT64(135), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
  call_tmp = &((_field_destructor_tmp_)->_v);
  T = call_tmp;
  atomic_destroy_int_least64_t(T);
  call_tmp = T;
  return;
}

/* ChapelLocale.chpl:166 */
static AbstractRootLocale _construct_AbstractRootLocale(locale parent, int64_t numCores, atomic_int64* const runningTaskCounter, AbstractRootLocale meme) {
  AbstractRootLocale this8 = NULL;
  locale T = NULL;
  this8 = meme;
  chpl_check_nil(this8, INT64(166), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
  T = &((this8)->super);
  _construct_locale(parent, numCores, runningTaskCounter, T);
  return meme;
}

/* ChapelLocale.chpl:166 */
static void chpl__auto_destroy_AbstractRootLocale(AbstractRootLocale this8) {
  locale _parent_destructor_tmp_ = NULL;
  _ref_atomic_int64 _field_destructor_tmp_ = NULL;
  _ref_atomic_int_least64_t call_tmp = NULL;
  _ref_atomic_int_least64_t T = NULL;
  _parent_destructor_tmp_ = ((locale)(this8));
  chpl_check_nil(_parent_destructor_tmp_, INT64(166), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
  _field_destructor_tmp_ = &((_parent_destructor_tmp_)->runningTaskCounter);
  chpl_check_nil(_field_destructor_tmp_, INT64(166), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
  call_tmp = &((_field_destructor_tmp_)->_v);
  T = call_tmp;
  atomic_destroy_int_least64_t(T);
  call_tmp = T;
  return;
}

/* ChapelLocale.chpl:184 */
static chpl____wide_locale localeIDtoLocale(chpl____wide_AbstractRootLocale* const this8, chpl_localeID_t* const id2) {
  chpl____wide_locale ret = {CHPL_LOCALEID_T_INIT, NULL};
  locale call_tmp = NULL;
  locale T = NULL;
  c_string T2;
  _ref_locale _ref_tmp_ = NULL;
  chpl____wide_locale call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale chpl_macro_tmp_91;
  chpl____wide_locale chpl_macro_tmp_92;
  T = ((locale)(nil));
  call_tmp = T;
  chpl_macro_tmp_91.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_91.addr = call_tmp;
  ret = chpl_macro_tmp_91;
  T2 = "Pure virtual function called.";
  halt(T2, INT64(185), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
  _ref_tmp_ = &ret;
  chpl_macro_tmp_92.locale = (this8)->locale;
  chpl_macro_tmp_92.addr = ((locale)((this8)->addr));
  call_tmp2 = chpl_macro_tmp_92;
  *(_ref_tmp_) = call_tmp2;
  return ret;
}

/* ChapelLocale.chpl:246 */
static localesSignal _construct_localesSignal(atomicflag* const s, localesSignal meme) {
  localesSignal this8 = NULL;
  object T = NULL;
  this8 = meme;
  chpl_check_nil(this8, INT64(246), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
  T = &((this8)->super);
  _construct_object(T);
  chpl_check_nil(this8, INT64(247), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
  (this8)->s = *(s);
  return this8;
}

/* ChapelLocale.chpl:246 */
static void chpl__auto_destroy_localesSignal(localesSignal this8) {
  _ref_atomicflag _field_destructor_tmp_ = NULL;
  _ref_atomic_flag call_tmp = NULL;
  _ref_atomic_flag T = NULL;
  chpl_check_nil(this8, INT64(247), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
  _field_destructor_tmp_ = &((this8)->s);
  chpl_check_nil(_field_destructor_tmp_, INT64(247), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
  call_tmp = &((_field_destructor_tmp_)->_v);
  T = call_tmp;
  atomic_destroy_flag(T);
  call_tmp = T;
  return;
}

/* ChapelLocale.chpl:249 */
static localesBarrier _construct_localesBarrier(localesBarrier* const meme) {
  localesBarrier this8;
  return *(meme);
}

/* ChapelLocale.chpl:250 */
static void wait2(_ref_localesBarrier this8, int64_t locIdx, chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F* const flags) {
  memory_order local_memory_order_seq_cst;
  int64_t local_numLocales;
  chpl_bool call_tmp;
  chpl_bool T;
  int64_t count;
  chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F ret = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F _ic__F0_this = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F this9 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t wrap_call_tmp;
  chpl____wide_DefaultRectangularDom_1_int64_t_F call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F this10 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t sum;
  int64_t ret_x1;
  chpl____wide__ref__tuple_1_star_int64_t ret_ = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp3;
  _ref_int64_t _ref_tmp_ = NULL;
  chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F this11 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t wrap_call_tmp2;
  chpl____wide_DefaultRectangularDom_1_int64_t_F call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp5;
  chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F this12 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t sum2;
  int64_t ret_x12;
  chpl____wide__ref__tuple_1_star_int64_t ret_2 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp6;
  _ref_int64_t _ref_tmp_2 = NULL;
  int64_t step;
  int64_t call_tmp7;
  int64_t last;
  chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F this13 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t wrap_call_tmp3;
  chpl____wide_DefaultRectangularDom_1_int64_t_F call_tmp8 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp9;
  int64_t call_tmp10;
  int64_t i;
  chpl_bool T2;
  chpl_bool call_tmp11;
  chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F this14 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ddata_localesSignal call_tmp12 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_localesSignal call_tmp13 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_localesSignal call_tmp14 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp16;
  _ref_int64_t _ref_tmp_3 = NULL;
  _ref_int64_t _ref_tmp_4 = NULL;
  chpl_bool call_tmp17;
  int64_t call_tmp18;
  chpl_bool call_tmp19;
  chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F ret2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F _ic__F0_this2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F this15 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t wrap_call_tmp4;
  chpl____wide_DefaultRectangularDom_1_int64_t_F call_tmp20 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F this16 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t sum3;
  int64_t ret_x13;
  chpl____wide__ref__tuple_1_star_int64_t ret_3 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp21;
  _ref_int64_t _ref_tmp_5 = NULL;
  chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F this17 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t wrap_call_tmp5;
  chpl____wide_DefaultRectangularDom_1_int64_t_F call_tmp22 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp23;
  chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F this18 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t sum4;
  int64_t ret_x14;
  chpl____wide__ref__tuple_1_star_int64_t ret_4 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp24;
  _ref_int64_t _ref_tmp_6 = NULL;
  int64_t step2;
  int64_t call_tmp25;
  int64_t last2;
  chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F this19 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t wrap_call_tmp6;
  chpl____wide_DefaultRectangularDom_1_int64_t_F call_tmp26 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp27;
  int64_t call_tmp28;
  int64_t i2;
  chpl_bool T3;
  chpl_bool call_tmp29;
  chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F this20 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ddata_localesSignal call_tmp30 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_localesSignal call_tmp31 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_localesSignal call_tmp32 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomicflag call_tmp33 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order default_argorder;
  chpl_bool ret3;
  chpl_localeID_t call_tmp34;
  _ref_chpl_bool T4 = NULL;
  _class_localson_fn2 _args_foron_fn = NULL;
  int64_t chpl_here_alloc_size;
  chpl_opaque chpl_here_alloc_tmp;
  chpl____wide__ref_chpl_bool T5 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_int64_t _ref_tmp_7 = NULL;
  chpl_bool call_tmp35;
  localesSignal f = NULL;
  localesSignal this21 = NULL;
  int64_t call_tmp36;
  chpl_opaque cast_tmp;
  localesSignal T6 = NULL;
  atomicflag _init_class_tmp_;
  atomicflag this22;
  atomic_flag ret4;
  atomic_flag type_tmp;
  atomic_flag ret5;
  _ref_atomic_flag _ref_tmp_8 = NULL;
  _ref_atomic_flag T7 = NULL;
  _ref_atomic_flag _ref_tmp_9 = NULL;
  atomic_flag type_tmp2;
  atomic_flag x;
  _ref_atomic_flag _ref_tmp_10 = NULL;
  atomicflag wrap_call_tmp7;
  localesSignal wrap_call_tmp8 = NULL;
  _tuple_1_star_int64_t i3;
  _tuple_1_star_int64_t this23;
  chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F call_tmp37 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F ret6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool wrap_call_tmp9;
  chpl____wide_DefaultRectangularDom_1_int64_t_F call_tmp38 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp39;
  chpl____wide_chpl_string call_tmp40 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t sum5;
  int64_t ret_x15;
  chpl____wide__ref__tuple_1_star_int64_t ret_5 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp41;
  int64_t call_tmp42;
  _ref_int64_t _ref_tmp_11 = NULL;
  chpl____wide__ddata_localesSignal call_tmp43 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_localesSignal call_tmp44 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_localesSignal T8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomicflag call_tmp45 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order default_argorder2;
  chpl_localeID_t call_tmp46;
  _class_localson_fn4 _args_foron_fn2 = NULL;
  int64_t chpl_here_alloc_size2;
  chpl_opaque chpl_here_alloc_tmp2;
  chpl____wide_localesSignal delete_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomicflag _field_destructor_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_flag call_tmp47 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomic_flag T9 = NULL;
  chpl_localeID_t call_tmp48;
  chpl____wide_localesSignal rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn49 _args_foron_fn3 = NULL;
  int64_t chpl_here_alloc_size3;
  chpl_opaque chpl_here_alloc_tmp3;
  chpl____wide__ref_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_93;
  chpl____wide__ref__tuple_1_star_int64_t chpl_macro_tmp_94;
  chpl____wide__ref_int64_t chpl_macro_tmp_95;
  chpl____wide__ref_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_96;
  chpl____wide__ref__tuple_1_star_int64_t chpl_macro_tmp_97;
  chpl____wide__ref_int64_t chpl_macro_tmp_98;
  chpl____wide__ref_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_99;
  chpl____wide__ref__ddata_localesSignal chpl_macro_tmp_100;
  chpl____wide__ref_localesSignal chpl_macro_tmp_101;
  chpl____wide_object chpl_macro_tmp_102;
  chpl____wide__ref_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_103;
  chpl____wide__ref__tuple_1_star_int64_t chpl_macro_tmp_104;
  chpl____wide__ref_int64_t chpl_macro_tmp_105;
  chpl____wide__ref_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_106;
  chpl____wide__ref__tuple_1_star_int64_t chpl_macro_tmp_107;
  chpl____wide__ref_int64_t chpl_macro_tmp_108;
  chpl____wide__ref_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_109;
  chpl____wide__ref__ddata_localesSignal chpl_macro_tmp_110;
  chpl____wide__ref_localesSignal chpl_macro_tmp_111;
  chpl____wide__ref_atomicflag chpl_macro_tmp_112;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_113;
  chpl____wide__ref_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_114;
  chpl____wide__ref__tuple_1_star_int64_t chpl_macro_tmp_115;
  chpl____wide__ref_int64_t chpl_macro_tmp_116;
  chpl____wide__ref__ddata_localesSignal chpl_macro_tmp_117;
  chpl____wide__ref_localesSignal chpl_macro_tmp_118;
  chpl____wide_localesSignal chpl_macro_tmp_119;
  chpl____wide__ref_atomicflag chpl_macro_tmp_120;
  chpl____wide_localesSignal chpl_macro_tmp_121;
  chpl____wide__ref_atomicflag chpl_macro_tmp_122;
  chpl____wide__ref_atomic_flag chpl_macro_tmp_123;
  chpl____wide__ref_atomic_flag chpl_macro_tmp_124;
  local_memory_order_seq_cst = memory_order_seq_cst;
  local_numLocales = numLocales;
  call_tmp = (locIdx == INT64(0));
  if (call_tmp) {
    T = true;
    call_tmp18 = (local_numLocales - INT64(1));
    while (T) {
      count = INT64(0);
      ret = *(flags);
      _ic__F0_this = ret;
      this9 = ret;
      chpl_check_nil((&this9)->addr, INT64(255), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
      chpl_macro_tmp_93.locale = (&this9)->locale;
      chpl_macro_tmp_93.addr = &(((&this9)->addr)->dom);
      chpl_gen_comm_get(((void*)(&call_tmp2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_93).locale), INT64(0), NULL), (chpl_macro_tmp_93).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), -1, INT64(1), INT64(255), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
      chpl_check_nil((&call_tmp2)->addr, INT64(255), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
      wrap_call_tmp = dsiLow(&call_tmp2);
      this10 = ret;
      sum = INT64(0);
      chpl_check_nil((&this10)->addr, INT64(255), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
      chpl_macro_tmp_94.locale = (&this10)->locale;
      chpl_macro_tmp_94.addr = &(((&this10)->addr)->blk);
      ret_ = chpl_macro_tmp_94;
      chpl_macro_tmp_95.locale = (ret_).locale;
      chpl_macro_tmp_95.addr = (*((ret_).addr) + INT64(0));
      chpl_gen_comm_get(((void*)(&ret_x1)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_95).locale), INT64(0), NULL), (chpl_macro_tmp_95).addr, sizeof(int64_t), -1, INT64(1), INT64(255), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
      call_tmp3 = (wrap_call_tmp * ret_x1);
      _ref_tmp_ = &sum;
      *(_ref_tmp_) += call_tmp3;
      this11 = ret;
      chpl_check_nil((&this11)->addr, INT64(255), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
      chpl_macro_tmp_96.locale = (&this11)->locale;
      chpl_macro_tmp_96.addr = &(((&this11)->addr)->dom);
      chpl_gen_comm_get(((void*)(&call_tmp4)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_96).locale), INT64(0), NULL), (chpl_macro_tmp_96).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), -1, INT64(1), INT64(255), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
      chpl_check_nil((&call_tmp4)->addr, INT64(255), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
      wrap_call_tmp2 = dsiLow(&call_tmp4);
      call_tmp5 = (wrap_call_tmp2 + INT64(1));
      this12 = ret;
      sum2 = INT64(0);
      chpl_check_nil((&this12)->addr, INT64(255), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
      chpl_macro_tmp_97.locale = (&this12)->locale;
      chpl_macro_tmp_97.addr = &(((&this12)->addr)->blk);
      ret_2 = chpl_macro_tmp_97;
      chpl_macro_tmp_98.locale = (ret_2).locale;
      chpl_macro_tmp_98.addr = (*((ret_2).addr) + INT64(0));
      chpl_gen_comm_get(((void*)(&ret_x12)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_98).locale), INT64(0), NULL), (chpl_macro_tmp_98).addr, sizeof(int64_t), -1, INT64(1), INT64(255), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
      call_tmp6 = (call_tmp5 * ret_x12);
      _ref_tmp_2 = &sum2;
      *(_ref_tmp_2) += call_tmp6;
      call_tmp7 = (sum2 - sum);
      step = call_tmp7;
      this13 = ret;
      chpl_check_nil((&this13)->addr, INT64(255), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
      chpl_macro_tmp_99.locale = (&this13)->locale;
      chpl_macro_tmp_99.addr = &(((&this13)->addr)->dom);
      chpl_gen_comm_get(((void*)(&call_tmp8)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_99).locale), INT64(0), NULL), (chpl_macro_tmp_99).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), -1, INT64(1), INT64(255), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
      chpl_check_nil((&call_tmp8)->addr, INT64(255), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
      wrap_call_tmp3 = dsiNumIndices(&call_tmp8);
      call_tmp9 = (wrap_call_tmp3 * call_tmp7);
      call_tmp10 = (sum + call_tmp9);
      last = call_tmp10;
      i = sum;
      call_tmp11 = (sum != call_tmp10);
      T2 = call_tmp11;
      while (T2) {
        this14 = _ic__F0_this;
        chpl_check_nil((&this14)->addr, INT64(255), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
        chpl_macro_tmp_100.locale = (&this14)->locale;
        chpl_macro_tmp_100.addr = &(((&this14)->addr)->shiftedData);
        chpl_gen_comm_get(((void*)(&call_tmp12)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_100).locale), INT64(0), NULL), (chpl_macro_tmp_100).addr, sizeof(chpl____wide__ddata_localesSignal), -1, INT64(1), INT64(255), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
        chpl_macro_tmp_101.locale = (&call_tmp12)->locale;
        chpl_macro_tmp_101.addr = ((&call_tmp12)->addr + i);
        call_tmp13 = chpl_macro_tmp_101;
        chpl_gen_comm_get(((void*)(&call_tmp14)), chpl_nodeFromLocaleID(&((call_tmp13).locale), INT64(0), NULL), (call_tmp13).addr, sizeof(chpl____wide_localesSignal), -1, INT64(1), INT64(256), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
        chpl_macro_tmp_102.locale = (&call_tmp14)->locale;
        chpl_macro_tmp_102.addr = ((object)((&call_tmp14)->addr));
        call_tmp15 = chpl_macro_tmp_102;
        call_tmp16 = (&call_tmp15)->addr != nil;
        if (call_tmp16) {
          _ref_tmp_3 = &count;
          *(_ref_tmp_3) += INT64(1);
        }
        _ref_tmp_4 = &i;
        *(_ref_tmp_4) += step;
        call_tmp17 = (i != last);
        T2 = call_tmp17;
      }
      call_tmp19 = (count == call_tmp18);
      if (call_tmp19) {
        goto _breakLabel;
      }
      T = true;
    }
    _breakLabel:;
    ret2 = *(flags);
    _ic__F0_this2 = ret2;
    this15 = ret2;
    chpl_check_nil((&this15)->addr, INT64(260), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
    chpl_macro_tmp_103.locale = (&this15)->locale;
    chpl_macro_tmp_103.addr = &(((&this15)->addr)->dom);
    chpl_gen_comm_get(((void*)(&call_tmp20)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_103).locale), INT64(0), NULL), (chpl_macro_tmp_103).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), -1, INT64(1), INT64(260), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
    chpl_check_nil((&call_tmp20)->addr, INT64(260), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
    wrap_call_tmp4 = dsiLow(&call_tmp20);
    this16 = ret2;
    sum3 = INT64(0);
    chpl_check_nil((&this16)->addr, INT64(260), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
    chpl_macro_tmp_104.locale = (&this16)->locale;
    chpl_macro_tmp_104.addr = &(((&this16)->addr)->blk);
    ret_3 = chpl_macro_tmp_104;
    chpl_macro_tmp_105.locale = (ret_3).locale;
    chpl_macro_tmp_105.addr = (*((ret_3).addr) + INT64(0));
    chpl_gen_comm_get(((void*)(&ret_x13)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_105).locale), INT64(0), NULL), (chpl_macro_tmp_105).addr, sizeof(int64_t), -1, INT64(1), INT64(260), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
    call_tmp21 = (wrap_call_tmp4 * ret_x13);
    _ref_tmp_5 = &sum3;
    *(_ref_tmp_5) += call_tmp21;
    this17 = ret2;
    chpl_check_nil((&this17)->addr, INT64(260), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
    chpl_macro_tmp_106.locale = (&this17)->locale;
    chpl_macro_tmp_106.addr = &(((&this17)->addr)->dom);
    chpl_gen_comm_get(((void*)(&call_tmp22)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_106).locale), INT64(0), NULL), (chpl_macro_tmp_106).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), -1, INT64(1), INT64(260), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
    chpl_check_nil((&call_tmp22)->addr, INT64(260), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
    wrap_call_tmp5 = dsiLow(&call_tmp22);
    call_tmp23 = (wrap_call_tmp5 + INT64(1));
    this18 = ret2;
    sum4 = INT64(0);
    chpl_check_nil((&this18)->addr, INT64(260), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
    chpl_macro_tmp_107.locale = (&this18)->locale;
    chpl_macro_tmp_107.addr = &(((&this18)->addr)->blk);
    ret_4 = chpl_macro_tmp_107;
    chpl_macro_tmp_108.locale = (ret_4).locale;
    chpl_macro_tmp_108.addr = (*((ret_4).addr) + INT64(0));
    chpl_gen_comm_get(((void*)(&ret_x14)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_108).locale), INT64(0), NULL), (chpl_macro_tmp_108).addr, sizeof(int64_t), -1, INT64(1), INT64(260), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
    call_tmp24 = (call_tmp23 * ret_x14);
    _ref_tmp_6 = &sum4;
    *(_ref_tmp_6) += call_tmp24;
    call_tmp25 = (sum4 - sum3);
    step2 = call_tmp25;
    this19 = ret2;
    chpl_check_nil((&this19)->addr, INT64(260), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
    chpl_macro_tmp_109.locale = (&this19)->locale;
    chpl_macro_tmp_109.addr = &(((&this19)->addr)->dom);
    chpl_gen_comm_get(((void*)(&call_tmp26)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_109).locale), INT64(0), NULL), (chpl_macro_tmp_109).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), -1, INT64(1), INT64(260), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
    chpl_check_nil((&call_tmp26)->addr, INT64(260), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
    wrap_call_tmp6 = dsiNumIndices(&call_tmp26);
    call_tmp27 = (wrap_call_tmp6 * call_tmp25);
    call_tmp28 = (sum3 + call_tmp27);
    last2 = call_tmp28;
    i2 = sum3;
    call_tmp29 = (sum3 != call_tmp28);
    T3 = call_tmp29;
    while (T3) {
      this20 = _ic__F0_this2;
      chpl_check_nil((&this20)->addr, INT64(260), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
      chpl_macro_tmp_110.locale = (&this20)->locale;
      chpl_macro_tmp_110.addr = &(((&this20)->addr)->shiftedData);
      chpl_gen_comm_get(((void*)(&call_tmp30)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_110).locale), INT64(0), NULL), (chpl_macro_tmp_110).addr, sizeof(chpl____wide__ddata_localesSignal), -1, INT64(1), INT64(260), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
      chpl_macro_tmp_111.locale = (&call_tmp30)->locale;
      chpl_macro_tmp_111.addr = ((&call_tmp30)->addr + i2);
      call_tmp31 = chpl_macro_tmp_111;
      chpl_gen_comm_get(((void*)(&call_tmp32)), chpl_nodeFromLocaleID(&((call_tmp31).locale), INT64(0), NULL), (call_tmp31).addr, sizeof(chpl____wide_localesSignal), -1, INT64(1), INT64(261), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
      chpl_check_nil((&call_tmp32)->addr, INT64(261), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
      chpl_macro_tmp_112.locale = (&call_tmp32)->locale;
      chpl_macro_tmp_112.addr = &(((&call_tmp32)->addr)->s);
      call_tmp33 = chpl_macro_tmp_112;
      default_argorder = local_memory_order_seq_cst;
      ret3 = false;
      call_tmp34 = (&call_tmp33)->locale;
      T4 = &ret3;
      chpl_here_alloc_size = sizeof(chpl__class_localson_fn2_object);
      chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(36));
      _args_foron_fn = ((_class_localson_fn2)(chpl_here_alloc_tmp));
      chpl_check_nil(_args_foron_fn, INT64(261), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
      (_args_foron_fn)->_0__tmp = call_tmp34;
      chpl_check_nil(_args_foron_fn, INT64(261), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
      (_args_foron_fn)->_1_this = call_tmp33;
      chpl_check_nil(_args_foron_fn, INT64(261), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
      (_args_foron_fn)->_2_order = default_argorder;
      chpl_macro_tmp_113.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_113.addr = T4;
      T5 = chpl_macro_tmp_113;
      chpl_check_nil(_args_foron_fn, INT64(261), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
      (_args_foron_fn)->_3__tmp = T5;
      /*** wrapon_fn2 ***/ chpl_executeOn(&call_tmp34, INT32(2), _args_foron_fn, sizeof(chpl__class_localson_fn2_object), INT64(294), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
      chpl_here_free(((void*)(_args_foron_fn)));
      _ref_tmp_7 = &i2;
      *(_ref_tmp_7) += step2;
      call_tmp35 = (i2 != last2);
      T3 = call_tmp35;
    }
  } else {
    call_tmp36 = sizeof(chpl_localesSignal_object);
    cast_tmp = chpl_here_alloc(call_tmp36, INT16(18));
    T6 = ((localesSignal)(cast_tmp));
    this21 = T6;
    ((object)(this21))->chpl__cid = chpl__cid_localesSignal;
    chpl_check_nil(this21, INT64(263), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
    (this21)->s = _init_class_tmp_;
    ret5 = type_tmp;
    _ref_tmp_8 = &ret5;
    T7 = _ref_tmp_8;
    atomic_init_flag(T7, false);
    _ref_tmp_8 = T7;
    _ref_tmp_9 = &ret4;
    *(_ref_tmp_9) = ret5;
    x = type_tmp2;
    _ref_tmp_10 = &x;
    *(_ref_tmp_10) = ret4;
    (&this22)->_v = x;
    wrap_call_tmp7 = _construct_atomicflag(x, &this22);
    chpl_check_nil(this21, INT64(263), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
    (this21)->s = wrap_call_tmp7;
    wrap_call_tmp8 = _construct_localesSignal(&wrap_call_tmp7, this21);
    f = wrap_call_tmp8;
    *(this23 + INT64(0)) = locIdx;
    *(i3 + INT64(0)) = *(this23 + INT64(0));
    ret6 = *(flags);
    call_tmp37 = ret6;
    chpl_check_nil((&call_tmp37)->addr, INT64(265), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
    chpl_macro_tmp_114.locale = (&call_tmp37)->locale;
    chpl_macro_tmp_114.addr = &(((&call_tmp37)->addr)->dom);
    chpl_gen_comm_get(((void*)(&call_tmp38)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_114).locale), INT64(0), NULL), (chpl_macro_tmp_114).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), -1, INT64(1), INT64(265), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
    chpl_check_nil((&call_tmp38)->addr, INT64(265), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
    wrap_call_tmp9 = dsiMember2(&call_tmp38, &this23);
    call_tmp39 = (! wrap_call_tmp9);
    if (call_tmp39) {
      wide_string_from_c_string(&call_tmp40, "array index out of bounds: ", INT64(0), INT64(0), INT64(265), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
      halt2(call_tmp40, &this23, INT64(265), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
    }
    sum5 = INT64(0);
    chpl_check_nil((&call_tmp37)->addr, INT64(265), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
    chpl_macro_tmp_115.locale = (&call_tmp37)->locale;
    chpl_macro_tmp_115.addr = &(((&call_tmp37)->addr)->blk);
    ret_5 = chpl_macro_tmp_115;
    chpl_macro_tmp_116.locale = (ret_5).locale;
    chpl_macro_tmp_116.addr = (*((ret_5).addr) + INT64(0));
    chpl_gen_comm_get(((void*)(&ret_x15)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_116).locale), INT64(0), NULL), (chpl_macro_tmp_116).addr, sizeof(int64_t), -1, INT64(1), INT64(265), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
    call_tmp41 = *(i3 + INT64(0));
    call_tmp42 = (call_tmp41 * ret_x15);
    _ref_tmp_11 = &sum5;
    *(_ref_tmp_11) += call_tmp42;
    chpl_check_nil((&call_tmp37)->addr, INT64(265), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
    chpl_macro_tmp_117.locale = (&call_tmp37)->locale;
    chpl_macro_tmp_117.addr = &(((&call_tmp37)->addr)->shiftedData);
    chpl_gen_comm_get(((void*)(&call_tmp43)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_117).locale), INT64(0), NULL), (chpl_macro_tmp_117).addr, sizeof(chpl____wide__ddata_localesSignal), -1, INT64(1), INT64(265), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
    chpl_macro_tmp_118.locale = (&call_tmp43)->locale;
    chpl_macro_tmp_118.addr = ((&call_tmp43)->addr + sum5);
    call_tmp44 = chpl_macro_tmp_118;
    chpl_macro_tmp_119.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_119.addr = wrap_call_tmp8;
    T8 = chpl_macro_tmp_119;
    chpl_gen_comm_put(((void*)(&T8)), chpl_nodeFromLocaleID(&((call_tmp44).locale), INT64(0), NULL), (call_tmp44).addr, sizeof(chpl____wide_localesSignal), -1, INT64(1), INT64(265), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
    chpl_check_nil(f, INT64(267), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
    chpl_macro_tmp_120.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_120.addr = &((f)->s);
    call_tmp45 = chpl_macro_tmp_120;
    default_argorder2 = local_memory_order_seq_cst;
    chpl_rmem_consist_maybe_release(default_argorder2, INT64(267), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
    call_tmp46 = (&call_tmp45)->locale;
    chpl_here_alloc_size2 = sizeof(chpl__class_localson_fn4_object);
    chpl_here_alloc_tmp2 = chpl_here_alloc(chpl_here_alloc_size2, INT16(36));
    _args_foron_fn2 = ((_class_localson_fn4)(chpl_here_alloc_tmp2));
    chpl_check_nil(_args_foron_fn2, INT64(267), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
    (_args_foron_fn2)->_0__tmp = call_tmp46;
    chpl_check_nil(_args_foron_fn2, INT64(267), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
    (_args_foron_fn2)->_1_this = call_tmp45;
    chpl_check_nil(_args_foron_fn2, INT64(267), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
    (_args_foron_fn2)->_2_val = true;
    chpl_check_nil(_args_foron_fn2, INT64(267), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
    (_args_foron_fn2)->_3_order = default_argorder2;
    /*** wrapon_fn4 ***/ chpl_executeOn(&call_tmp46, INT32(5), _args_foron_fn2, sizeof(chpl__class_localson_fn4_object), INT64(303), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
    chpl_here_free(((void*)(_args_foron_fn2)));
    chpl_rmem_consist_maybe_acquire(default_argorder2, INT64(267), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
    chpl_macro_tmp_121.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_121.addr = f;
    delete_tmp = chpl_macro_tmp_121;
    chpl_check_nil((&delete_tmp)->addr, INT64(269), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
    chpl_macro_tmp_122.locale = (&delete_tmp)->locale;
    chpl_macro_tmp_122.addr = &(((&delete_tmp)->addr)->s);
    _field_destructor_tmp_ = chpl_macro_tmp_122;
    chpl_macro_tmp_123.locale = (_field_destructor_tmp_).locale;
    chpl_macro_tmp_123.addr = &(((_field_destructor_tmp_).addr)->_v);
    call_tmp47 = chpl_macro_tmp_123;
    T9 = (&call_tmp47)->addr;
    atomic_destroy_flag(T9);
    chpl_macro_tmp_124.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_124.addr = T9;
    call_tmp47 = chpl_macro_tmp_124;
    call_tmp48 = (&delete_tmp)->locale;
    rvfDerefTmp = delete_tmp;
    chpl_here_alloc_size3 = sizeof(chpl__class_localson_fn49_object);
    chpl_here_alloc_tmp3 = chpl_here_alloc(chpl_here_alloc_size3, INT16(36));
    _args_foron_fn3 = ((_class_localson_fn49)(chpl_here_alloc_tmp3));
    chpl_check_nil(_args_foron_fn3, INT64(269), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
    (_args_foron_fn3)->_0__tmp = call_tmp48;
    chpl_check_nil(_args_foron_fn3, INT64(269), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
    (_args_foron_fn3)->_1_rvfDerefTmp = rvfDerefTmp;
    /*** wrapon_fn49 ***/ chpl_executeOn(&call_tmp48, INT32(54), _args_foron_fn3, sizeof(chpl__class_localson_fn49_object), INT64(269), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
    chpl_here_free(((void*)(_args_foron_fn3)));
  }
  return;
}

/* ChapelLocale.chpl:269 */
static void on_fn49(chpl____wide_localesSignal* const delete_tmp) {
  chpl_opaque call_tmp;
  call_tmp = ((void*)((delete_tmp)->addr));
  chpl_here_free(call_tmp);
  return;
}

/* ChapelLocale.chpl:269 */
static void wrapon_fn49(_class_localson_fn49 c) {
  chpl____wide_localesSignal _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_check_nil(c, INT64(269), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn49(&_1_rvfDerefTmp);
  return;
}

/* ChapelLocale.chpl:282 */
static void chpl_init_rootLocale(void) {
  RootLocale call_tmp = NULL;
  chpl____wide__ref_locale _ref_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  locale call_tmp2 = NULL;
  chpl____wide_locale T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale T2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_RootLocale _formal_type_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_RootLocale T3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp4;
  chpl____wide_RootLocale call_tmp5 = {CHPL_LOCALEID_T_INIT, NULL};
  RootLocale call_tmp6 = NULL;
  RootLocale T4 = NULL;
  chpl____wide__ref_locale chpl_macro_tmp_125;
  chpl____wide_locale chpl_macro_tmp_126;
  chpl____wide__ref_locale chpl_macro_tmp_127;
  chpl____wide_object chpl_macro_tmp_128;
  chpl____wide__ref_int32_t chpl_macro_tmp_129;
  int32_t chpl_macro_tmp_130;
  chpl____wide_RootLocale chpl_macro_tmp_131;
  chpl____wide_RootLocale chpl_macro_tmp_132;
  call_tmp = RootLocale2();
  chpl_check_nil((&origRootLocale)->addr, INT64(283), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
  chpl_macro_tmp_125.locale = (&origRootLocale)->locale;
  chpl_macro_tmp_125.addr = &(((&origRootLocale)->addr)->value);
  _ref_tmp_ = chpl_macro_tmp_125;
  call_tmp2 = ((locale)(call_tmp));
  chpl_macro_tmp_126.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_126.addr = call_tmp2;
  T = chpl_macro_tmp_126;
  chpl_gen_comm_put(((void*)(&T)), chpl_nodeFromLocaleID(&((_ref_tmp_).locale), INT64(0), NULL), (_ref_tmp_).addr, sizeof(chpl____wide_locale), -1, INT64(1), INT64(283), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
  chpl_check_nil((&origRootLocale)->addr, INT64(164), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
  chpl_macro_tmp_127.locale = (&origRootLocale)->locale;
  chpl_macro_tmp_127.addr = &(((&origRootLocale)->addr)->value);
  chpl_gen_comm_get(((void*)(&T2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_127).locale), INT64(0), NULL), (chpl_macro_tmp_127).addr, sizeof(chpl____wide_locale), -1, INT64(1), INT64(164), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
  chpl_macro_tmp_128.locale = (&T2)->locale;
  chpl_macro_tmp_128.addr = ((object)((&T2)->addr));
  call_tmp3 = chpl_macro_tmp_128;
  call_tmp4 = (&call_tmp3)->addr != nil;
  if (call_tmp4) {
    chpl_macro_tmp_129.locale = (T2).locale;
    chpl_macro_tmp_129.addr = &(((object)((T2).addr))->chpl__cid);
    chpl_gen_comm_get(((void*)(&chpl_macro_tmp_130)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_129).locale), INT64(0), NULL), (chpl_macro_tmp_129).addr, sizeof(int32_t), -1, INT64(1), INT64(284), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
    chpl_macro_tmp_131.locale = (T2).locale;
    chpl_macro_tmp_131.addr = ((chpl_macro_tmp_130 == chpl__cid_RootLocale))?(((RootLocale)((T2).addr))):(((RootLocale)(NULL)));
    call_tmp5 = chpl_macro_tmp_131;
    T3 = call_tmp5;
  } else {
    T4 = ((RootLocale)(nil));
    call_tmp6 = T4;
    chpl_macro_tmp_132.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_132.addr = call_tmp6;
    T3 = chpl_macro_tmp_132;
  }
  chpl_check_nil((&T3)->addr, INT64(284), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
  init2(&T3);
  return;
}

/* ChapelLocale.chpl:291 */
static void chpl_rootLocaleInitPrivate(int64_t locIdx) {
  int64_t local_numLocales;
  _ref_locale _ref_tmp_ = NULL;
  chpl____wide_locale T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp;
  RootLocale newRootLocale = NULL;
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F origLocales = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale T2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_RootLocale _formal_type_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_RootLocale T3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp3;
  chpl____wide_RootLocale call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  RootLocale call_tmp5 = NULL;
  RootLocale T4 = NULL;
  chpl____wide__ddata_locale origRL = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F ret = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ddata_locale ret2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ddata_locale newRL = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F call_tmp7 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_DefaultRectangularArr_locale_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  chpl____wide_RootLocale T5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F call_tmp8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F ret3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ddata_locale ret4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_locale call_tmp9 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_locale call_tmp10 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_locale _ref_tmp_2 = NULL;
  locale call_tmp11 = NULL;
  chpl____wide_locale T6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp12;
  chpl____wide_RootLocale _formal_type_tmp_2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_RootLocale T7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp13 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp14;
  chpl____wide_RootLocale call_tmp15 = {CHPL_LOCALEID_T_INIT, NULL};
  RootLocale call_tmp16 = NULL;
  RootLocale T8 = NULL;
  chpl____wide__ref_locale chpl_macro_tmp_133;
  chpl____wide__ref_locale chpl_macro_tmp_134;
  chpl____wide_object chpl_macro_tmp_135;
  chpl____wide__ref_int32_t chpl_macro_tmp_136;
  int32_t chpl_macro_tmp_137;
  chpl____wide_RootLocale chpl_macro_tmp_138;
  chpl____wide_RootLocale chpl_macro_tmp_139;
  chpl____wide__ref__ddata_locale chpl_macro_tmp_140;
  chpl____wide_RootLocale chpl_macro_tmp_141;
  chpl____wide__ref__ddata_locale chpl_macro_tmp_142;
  chpl____wide__ref_locale chpl_macro_tmp_143;
  chpl____wide__ref_locale chpl_macro_tmp_144;
  chpl____wide_locale chpl_macro_tmp_145;
  chpl____wide_object chpl_macro_tmp_146;
  chpl____wide__ref_int32_t chpl_macro_tmp_147;
  int32_t chpl_macro_tmp_148;
  chpl____wide_RootLocale chpl_macro_tmp_149;
  chpl____wide_RootLocale chpl_macro_tmp_150;
  local_numLocales = numLocales;
  _ref_tmp_ = &rootLocale;
  chpl_check_nil((&origRootLocale)->addr, INT64(164), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
  chpl_macro_tmp_133.locale = (&origRootLocale)->locale;
  chpl_macro_tmp_133.addr = &(((&origRootLocale)->addr)->value);
  chpl_gen_comm_get(((void*)(&T)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_133).locale), INT64(0), NULL), (chpl_macro_tmp_133).addr, sizeof(chpl____wide_locale), -1, INT64(1), INT64(164), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
  *(_ref_tmp_) = T;
  call_tmp = (locIdx != INT64(0));
  if (call_tmp) {
    newRootLocale = RootLocale2();
    chpl_check_nil((&origRootLocale)->addr, INT64(164), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
    chpl_macro_tmp_134.locale = (&origRootLocale)->locale;
    chpl_macro_tmp_134.addr = &(((&origRootLocale)->addr)->value);
    chpl_gen_comm_get(((void*)(&T2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_134).locale), INT64(0), NULL), (chpl_macro_tmp_134).addr, sizeof(chpl____wide_locale), -1, INT64(1), INT64(164), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
    chpl_macro_tmp_135.locale = (&T2)->locale;
    chpl_macro_tmp_135.addr = ((object)((&T2)->addr));
    call_tmp2 = chpl_macro_tmp_135;
    call_tmp3 = (&call_tmp2)->addr != nil;
    if (call_tmp3) {
      chpl_macro_tmp_136.locale = (T2).locale;
      chpl_macro_tmp_136.addr = &(((object)((T2).addr))->chpl__cid);
      chpl_gen_comm_get(((void*)(&chpl_macro_tmp_137)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_136).locale), INT64(0), NULL), (chpl_macro_tmp_136).addr, sizeof(int32_t), -1, INT64(1), INT64(303), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
      chpl_macro_tmp_138.locale = (T2).locale;
      chpl_macro_tmp_138.addr = ((chpl_macro_tmp_137 == chpl__cid_RootLocale))?(((RootLocale)((T2).addr))):(((RootLocale)(NULL)));
      call_tmp4 = chpl_macro_tmp_138;
      T3 = call_tmp4;
    } else {
      T4 = ((RootLocale)(nil));
      call_tmp5 = T4;
      chpl_macro_tmp_139.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_139.addr = call_tmp5;
      T3 = chpl_macro_tmp_139;
    }
    chpl_check_nil((&T3)->addr, INT64(303), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
    origLocales = getDefaultLocaleArray(&T3);
    ret = origLocales;
    call_tmp6 = ret;
    chpl_check_nil((&call_tmp6)->addr, INT64(304), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
    chpl_macro_tmp_140.locale = (&call_tmp6)->locale;
    chpl_macro_tmp_140.addr = &(((&call_tmp6)->addr)->shiftedData);
    chpl_gen_comm_get(((void*)(&ret2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_140).locale), INT64(0), NULL), (chpl_macro_tmp_140).addr, sizeof(chpl____wide__ddata_locale), -1, INT64(1), INT64(304), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
    origRL = ret2;
    ret_to_arg_ref_tmp_ = &call_tmp7;
    chpl_macro_tmp_141.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_141.addr = newRootLocale;
    T5 = chpl_macro_tmp_141;
    chpl_check_nil((&T5)->addr, INT64(305), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
    getDefaultLocaleArray2(&T5, ret_to_arg_ref_tmp_);
    ret3 = call_tmp7;
    call_tmp8 = ret3;
    chpl_check_nil((&call_tmp8)->addr, INT64(305), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
    chpl_macro_tmp_142.locale = (&call_tmp8)->locale;
    chpl_macro_tmp_142.addr = &(((&call_tmp8)->addr)->shiftedData);
    chpl_gen_comm_get(((void*)(&ret4)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_142).locale), INT64(0), NULL), (chpl_macro_tmp_142).addr, sizeof(chpl____wide__ddata_locale), -1, INT64(1), INT64(305), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
    newRL = ret4;
    chpl_macro_tmp_143.locale = (&newRL)->locale;
    chpl_macro_tmp_143.addr = ((&newRL)->addr + INT64(0));
    call_tmp9 = chpl_macro_tmp_143;
    chpl_macro_tmp_144.locale = (&origRL)->locale;
    chpl_macro_tmp_144.addr = ((&origRL)->addr + INT64(0));
    call_tmp10 = chpl_macro_tmp_144;
    chpl_gen_comm_get(((void*)((&call_tmp9)->addr)), INT64(0), (&call_tmp10)->addr, sizeof(chpl____wide_locale), -1, local_numLocales, INT64(309), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
    _ref_tmp_2 = &rootLocale;
    call_tmp11 = ((locale)(newRootLocale));
    chpl_macro_tmp_145.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_145.addr = call_tmp11;
    T6 = chpl_macro_tmp_145;
    *(_ref_tmp_2) = T6;
    chpl__autoDestroy4(&call_tmp7);
  }
  call_tmp12 = (locIdx != INT64(0));
  if (call_tmp12) {
    chpl_macro_tmp_146.locale = (&rootLocale)->locale;
    chpl_macro_tmp_146.addr = ((object)((&rootLocale)->addr));
    call_tmp13 = chpl_macro_tmp_146;
    call_tmp14 = (&call_tmp13)->addr != nil;
    if (call_tmp14) {
      chpl_macro_tmp_147.locale = (rootLocale).locale;
      chpl_macro_tmp_147.addr = &(((object)((rootLocale).addr))->chpl__cid);
      chpl_gen_comm_get(((void*)(&chpl_macro_tmp_148)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_147).locale), INT64(0), NULL), (chpl_macro_tmp_147).addr, sizeof(int32_t), -1, INT64(1), INT64(320), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
      chpl_macro_tmp_149.locale = (rootLocale).locale;
      chpl_macro_tmp_149.addr = ((chpl_macro_tmp_148 == chpl__cid_RootLocale))?(((RootLocale)((rootLocale).addr))):(((RootLocale)(NULL)));
      call_tmp15 = chpl_macro_tmp_149;
      T7 = call_tmp15;
    } else {
      T8 = ((RootLocale)(nil));
      call_tmp16 = T8;
      chpl_macro_tmp_150.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_150.addr = call_tmp16;
      T7 = chpl_macro_tmp_150;
    }
    chpl_check_nil((&T7)->addr, INT64(319), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
    Locales = getDefaultLocaleArray(&T7);
  }
  return;
}

/* ChapelLocale.chpl:344 */
static chpl____wide_locale chpl_localeID_to_locale(chpl_localeID_t* const id2) {
  chpl____wide_heap_locale local_dummyLocale = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale ret = {CHPL_LOCALEID_T_INIT, NULL};
  locale call_tmp = NULL;
  locale T = NULL;
  chpl____wide_object call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp3;
  chpl____wide_AbstractRootLocale _formal_type_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_AbstractRootLocale T2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp5;
  chpl____wide_AbstractRootLocale call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  AbstractRootLocale call_tmp7 = NULL;
  AbstractRootLocale T3 = NULL;
  chpl____wide_locale call_tmp8 = {CHPL_LOCALEID_T_INIT, NULL};
  int32_t _virtual_method_tmp_;
  _ref_locale _ref_tmp_ = NULL;
  _ref_locale _ref_tmp_2 = NULL;
  chpl____wide_locale T4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale chpl_macro_tmp_151;
  chpl____wide_object chpl_macro_tmp_152;
  chpl____wide_object chpl_macro_tmp_153;
  chpl____wide__ref_int32_t chpl_macro_tmp_154;
  int32_t chpl_macro_tmp_155;
  chpl____wide_AbstractRootLocale chpl_macro_tmp_156;
  chpl____wide_AbstractRootLocale chpl_macro_tmp_157;
  chpl____wide__ref_int32_t chpl_macro_tmp_158;
  chpl____wide__ref_locale chpl_macro_tmp_159;
  local_dummyLocale = dummyLocale;
  T = ((locale)(nil));
  call_tmp = T;
  chpl_macro_tmp_151.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_151.addr = call_tmp;
  ret = chpl_macro_tmp_151;
  chpl_macro_tmp_152.locale = (&rootLocale)->locale;
  chpl_macro_tmp_152.addr = ((object)((&rootLocale)->addr));
  call_tmp2 = chpl_macro_tmp_152;
  call_tmp3 = (&call_tmp2)->addr != nil;
  if (call_tmp3) {
    chpl_macro_tmp_153.locale = (&rootLocale)->locale;
    chpl_macro_tmp_153.addr = ((object)((&rootLocale)->addr));
    call_tmp4 = chpl_macro_tmp_153;
    call_tmp5 = (&call_tmp4)->addr != nil;
    if (call_tmp5) {
      chpl_macro_tmp_154.locale = (rootLocale).locale;
      chpl_macro_tmp_154.addr = &(((object)((rootLocale).addr))->chpl__cid);
      chpl_gen_comm_get(((void*)(&chpl_macro_tmp_155)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_154).locale), INT64(0), NULL), (chpl_macro_tmp_154).addr, sizeof(int32_t), -1, INT64(1), INT64(346), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
      chpl_macro_tmp_156.locale = (rootLocale).locale;
      chpl_macro_tmp_156.addr = (((chpl_macro_tmp_155 == chpl__cid_AbstractRootLocale) || (chpl_macro_tmp_155 == chpl__cid_RootLocale)))?(((AbstractRootLocale)((rootLocale).addr))):(((AbstractRootLocale)(NULL)));
      call_tmp6 = chpl_macro_tmp_156;
      T2 = call_tmp6;
    } else {
      T3 = ((AbstractRootLocale)(nil));
      call_tmp7 = T3;
      chpl_macro_tmp_157.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_157.addr = call_tmp7;
      T2 = chpl_macro_tmp_157;
    }
    chpl_check_nil((&T2)->addr, INT64(346), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
    chpl_macro_tmp_158.locale = (&T2)->locale;
    chpl_macro_tmp_158.addr = &(((object)((&T2)->addr))->chpl__cid);
    chpl_gen_comm_get(((void*)(&_virtual_method_tmp_)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_158).locale), INT64(0), NULL), (chpl_macro_tmp_158).addr, sizeof(int32_t), -1, INT64(1), INT64(346), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
    call_tmp8 = ((chpl____wide_locale(*)(chpl____wide_AbstractRootLocale* const, chpl_localeID_t* const))chpl_vmtable[((INT64(8) * _virtual_method_tmp_) + INT64(4))])(&T2, id2);
    _ref_tmp_ = &ret;
    *(_ref_tmp_) = call_tmp8;
    goto _end_chpl_localeID_to_locale;
  } else {
    _ref_tmp_2 = &ret;
    chpl_check_nil((&local_dummyLocale)->addr, INT64(330), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
    chpl_macro_tmp_159.locale = (&local_dummyLocale)->locale;
    chpl_macro_tmp_159.addr = &(((&local_dummyLocale)->addr)->value);
    chpl_gen_comm_get(((void*)(&T4)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_159).locale), INT64(0), NULL), (chpl_macro_tmp_159).addr, sizeof(chpl____wide_locale), -1, INT64(1), INT64(330), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
    *(_ref_tmp_2) = T4;
    goto _end_chpl_localeID_to_locale;
  }
  _end_chpl_localeID_to_locale:;
  return ret;
}

/* ChapelLocale.chpl:399 */
static int64_t runningTasks(chpl____wide_locale* const this8) {
  memory_order local_memory_order_seq_cst;
  chpl____wide__ref_atomic_int64 call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order default_argorder;
  int64_t ret;
  int64_t ret2;
  chpl_localeID_t call_tmp2;
  _ref_int64_t T = NULL;
  _class_localson_fn5 _args_foron_fn = NULL;
  int64_t chpl_here_alloc_size;
  chpl_opaque chpl_here_alloc_tmp;
  chpl____wide__ref_int64_t T2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_int64_t _ref_tmp_ = NULL;
  int64_t T3;
  chpl_bool call_tmp3;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_160;
  chpl____wide__ref_int64_t chpl_macro_tmp_161;
  local_memory_order_seq_cst = memory_order_seq_cst;
  chpl_check_nil((this8)->addr, INT64(400), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
  chpl_macro_tmp_160.locale = (this8)->locale;
  chpl_macro_tmp_160.addr = &(((this8)->addr)->runningTaskCounter);
  call_tmp = chpl_macro_tmp_160;
  default_argorder = local_memory_order_seq_cst;
  ret = INT64(0);
  ret2 = INT64(0);
  call_tmp2 = (&call_tmp)->locale;
  T = &ret2;
  chpl_here_alloc_size = sizeof(chpl__class_localson_fn5_object);
  chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(36));
  _args_foron_fn = ((_class_localson_fn5)(chpl_here_alloc_tmp));
  chpl_check_nil(_args_foron_fn, INT64(400), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
  (_args_foron_fn)->_0__tmp = call_tmp2;
  chpl_check_nil(_args_foron_fn, INT64(400), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
  (_args_foron_fn)->_1_this = call_tmp;
  chpl_check_nil(_args_foron_fn, INT64(400), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
  (_args_foron_fn)->_2_order = default_argorder;
  chpl_macro_tmp_161.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_161.addr = T;
  T2 = chpl_macro_tmp_161;
  chpl_check_nil(_args_foron_fn, INT64(400), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
  (_args_foron_fn)->_3__tmp = T2;
  /*** wrapon_fn5 ***/ chpl_executeOn(&call_tmp2, INT32(6), _args_foron_fn, sizeof(chpl__class_localson_fn5_object), INT64(1039), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  chpl_here_free(((void*)(_args_foron_fn)));
  _ref_tmp_ = &ret;
  *(_ref_tmp_) = ret2;
  call_tmp3 = (ret <= INT64(0));
  if (call_tmp3) {
    T3 = INT64(1);
  } else {
    T3 = ret;
  }
  return T3;
}

/* ChapelLocale.chpl:421 */
void chpl_taskRunningCntInc(int64_t _ln, c_string _fn) {
  memory_order local_memory_order_seq_cst;
  chpl____wide_locale call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  int32_t call_tmp2;
  chpl_localeID_t call_tmp3;
  _ref_chpl_localeID_t ret_to_arg_ref_tmp_ = NULL;
  chpl_localeID_t call_tmp4;
  chpl____wide_locale call_tmp5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int64 call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order default_argorder;
  chpl_localeID_t call_tmp7;
  _class_localson_fn7 _args_foron_fn = NULL;
  int64_t chpl_here_alloc_size;
  chpl_opaque chpl_here_alloc_tmp;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_162;
  local_memory_order_seq_cst = memory_order_seq_cst;
  call_tmp2 = chpl_task_getRequestedSubloc();
  ret_to_arg_ref_tmp_ = &call_tmp3;
  chpl_buildLocaleID(chpl_nodeID, call_tmp2, ret_to_arg_ref_tmp_, INT64(422), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
  call_tmp4 = chpl__initCopy_chpl_rt_localeID_t(call_tmp3);
  call_tmp5 = chpl_localeID_to_locale(&call_tmp4);
  call_tmp = call_tmp5;
  chpl_check_nil((&call_tmp)->addr, INT64(422), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
  chpl_macro_tmp_162.locale = (&call_tmp)->locale;
  chpl_macro_tmp_162.addr = &(((&call_tmp)->addr)->runningTaskCounter);
  call_tmp6 = chpl_macro_tmp_162;
  default_argorder = local_memory_order_seq_cst;
  call_tmp7 = (&call_tmp6)->locale;
  chpl_here_alloc_size = sizeof(chpl__class_localson_fn7_object);
  chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(36));
  _args_foron_fn = ((_class_localson_fn7)(chpl_here_alloc_tmp));
  chpl_check_nil(_args_foron_fn, INT64(422), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
  (_args_foron_fn)->_0__tmp = call_tmp7;
  chpl_check_nil(_args_foron_fn, INT64(422), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
  (_args_foron_fn)->_1_this = call_tmp6;
  chpl_check_nil(_args_foron_fn, INT64(422), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
  (_args_foron_fn)->_2_value = INT64(1);
  chpl_check_nil(_args_foron_fn, INT64(422), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
  (_args_foron_fn)->_3_order = default_argorder;
  /*** wrapon_fn7 ***/ chpl_executeOn(&call_tmp7, INT32(8), _args_foron_fn, sizeof(chpl__class_localson_fn7_object), INT64(1069), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  chpl_here_free(((void*)(_args_foron_fn)));
  return;
}

/* ChapelLocale.chpl:427 */
void chpl_taskRunningCntDec(int64_t _ln, c_string _fn) {
  memory_order local_memory_order_seq_cst;
  chpl____wide_locale call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  int32_t call_tmp2;
  chpl_localeID_t call_tmp3;
  _ref_chpl_localeID_t ret_to_arg_ref_tmp_ = NULL;
  chpl_localeID_t call_tmp4;
  chpl____wide_locale call_tmp5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int64 call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order default_argorder;
  chpl_localeID_t call_tmp7;
  _class_localson_fn9 _args_foron_fn = NULL;
  int64_t chpl_here_alloc_size;
  chpl_opaque chpl_here_alloc_tmp;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_163;
  local_memory_order_seq_cst = memory_order_seq_cst;
  call_tmp2 = chpl_task_getRequestedSubloc();
  ret_to_arg_ref_tmp_ = &call_tmp3;
  chpl_buildLocaleID(chpl_nodeID, call_tmp2, ret_to_arg_ref_tmp_, INT64(428), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
  call_tmp4 = chpl__initCopy_chpl_rt_localeID_t(call_tmp3);
  call_tmp5 = chpl_localeID_to_locale(&call_tmp4);
  call_tmp = call_tmp5;
  chpl_check_nil((&call_tmp)->addr, INT64(428), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
  chpl_macro_tmp_163.locale = (&call_tmp)->locale;
  chpl_macro_tmp_163.addr = &(((&call_tmp)->addr)->runningTaskCounter);
  call_tmp6 = chpl_macro_tmp_163;
  default_argorder = local_memory_order_seq_cst;
  call_tmp7 = (&call_tmp6)->locale;
  chpl_here_alloc_size = sizeof(chpl__class_localson_fn9_object);
  chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(36));
  _args_foron_fn = ((_class_localson_fn9)(chpl_here_alloc_tmp));
  chpl_check_nil(_args_foron_fn, INT64(428), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
  (_args_foron_fn)->_0__tmp = call_tmp7;
  chpl_check_nil(_args_foron_fn, INT64(428), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
  (_args_foron_fn)->_1_this = call_tmp6;
  chpl_check_nil(_args_foron_fn, INT64(428), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
  (_args_foron_fn)->_2_value = INT64(1);
  chpl_check_nil(_args_foron_fn, INT64(428), "/home/kp167/chap-svn/modules/internal/ChapelLocale.chpl");
  (_args_foron_fn)->_3_order = default_argorder;
  /*** wrapon_fn9 ***/ chpl_executeOn(&call_tmp7, INT32(10), _args_foron_fn, sizeof(chpl__class_localson_fn9_object), INT64(1077), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  chpl_here_free(((void*)(_args_foron_fn)));
  return;
}

