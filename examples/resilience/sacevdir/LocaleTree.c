/* LocaleTree.chpl:6 */
static void chpl__init_LocaleTree(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  chpl_localeTreeRecord this8;
  locale T = NULL;
  chpl____wide_locale T2 = {CHPL_LOCALEID_T_INIT, NULL};
  locale T3 = NULL;
  chpl____wide_locale T4 = {CHPL_LOCALEID_T_INIT, NULL};
  locale call_tmp = NULL;
  locale T5 = NULL;
  chpl____wide_locale T6 = {CHPL_LOCALEID_T_INIT, NULL};
  locale call_tmp2 = NULL;
  locale T7 = NULL;
  chpl____wide_locale T8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeTreeRecord wrap_call_tmp;
  chpl____wide_locale chpl_macro_tmp_1044;
  chpl____wide_locale chpl_macro_tmp_1045;
  chpl____wide_locale chpl_macro_tmp_1046;
  chpl____wide_locale chpl_macro_tmp_1047;
  if (chpl__init_LocaleTree_p) {
    goto _exit_chpl__init_LocaleTree;
  }
  modFormatStr = "%*s\n";
  modStr = "LocaleTree";
  printModuleInit(modFormatStr, modStr, INT64(10));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_LocaleTree_p = true;
  {
    chpl__init_ChapelLocale(INT64(6), "/home/kp167/chap-svn/modules/internal/LocaleTree.chpl");
  }
  T = nil;
  chpl_macro_tmp_1044.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1044.addr = T;
  T2 = chpl_macro_tmp_1044;
  (&this8)->left = T2;
  T3 = nil;
  chpl_macro_tmp_1045.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1045.addr = T3;
  T4 = chpl_macro_tmp_1045;
  (&this8)->right = T4;
  T5 = ((locale)(nil));
  call_tmp = T5;
  chpl_macro_tmp_1046.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1046.addr = call_tmp;
  T6 = chpl_macro_tmp_1046;
  (&this8)->left = T6;
  T7 = ((locale)(nil));
  call_tmp2 = T7;
  chpl_macro_tmp_1047.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1047.addr = call_tmp2;
  T8 = chpl_macro_tmp_1047;
  (&this8)->right = T8;
  wrap_call_tmp = _construct_chpl_localeTreeRecord(call_tmp, call_tmp2, &this8);
  chpl_localeTree = wrap_call_tmp;
  chpl_initLocaleTree();
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_LocaleTree:;
  return;
}

/* LocaleTree.chpl:10 */
static chpl_localeTreeRecord _construct_chpl_localeTreeRecord(locale left, locale right, chpl_localeTreeRecord* const meme) {
  chpl_localeTreeRecord this8;
  chpl____wide_locale T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale T2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale chpl_macro_tmp_1048;
  chpl____wide_locale chpl_macro_tmp_1049;
  this8 = *(meme);
  chpl_macro_tmp_1048.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1048.addr = left;
  T = chpl_macro_tmp_1048;
  (&this8)->left = T;
  chpl_macro_tmp_1049.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1049.addr = right;
  T2 = chpl_macro_tmp_1049;
  (&this8)->right = T2;
  return this8;
}

/* LocaleTree.chpl:16 */
static void chpl_initLocaleTree(void) {
  int64_t local_numLocales;
  chpl____wide_DefaultRectangularDom_1_int64_t_F local_LocaleSpace = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F ret = {CHPL_LOCALEID_T_INIT, NULL};
  _tuple_1_star_int64_t default_argoffset;
  _ref__tuple_1_star_int64_t ret_to_arg_ref_tmp_ = NULL;
  chpl____wide_DefaultRectangularDom_1_int64_t_F this8 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F ret_x1;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F ret_ = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F _ic__F0_this;
  rangeBase_int64_t_bounded_F T;
  rangeBase_int64_t_bounded_F _ic__F0_this2;
  int64_t i;
  int64_t ret2;
  int64_t type_tmp;
  int64_t end;
  int64_t T2;
  int64_t ret3;
  int64_t ret4;
  chpl_bool call_tmp;
  int64_t ret5;
  int64_t call_tmp2;
  _ref_int64_t _ref_tmp_ = NULL;
  chpl_bool T3;
  chpl_bool call_tmp3;
  chpl____wide_locale type_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  locale call_tmp4 = NULL;
  locale T4 = NULL;
  chpl____wide_locale left = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_locale _ref_tmp_2 = NULL;
  chpl____wide_locale type_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  locale call_tmp5 = NULL;
  locale T5 = NULL;
  chpl____wide_locale right = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_locale _ref_tmp_3 = NULL;
  int64_t child;
  int64_t call_tmp6;
  int64_t call_tmp7;
  int64_t call_tmp8;
  chpl_bool call_tmp9;
  chpl____wide_locale call_tmp10 = {CHPL_LOCALEID_T_INIT, NULL};
  int32_t _virtual_method_tmp_;
  _ref_locale _ref_tmp_4 = NULL;
  _ref_int64_t _ref_tmp_5 = NULL;
  chpl_bool call_tmp11;
  chpl____wide_locale call_tmp12 = {CHPL_LOCALEID_T_INIT, NULL};
  int32_t _virtual_method_tmp_2;
  _ref_locale _ref_tmp_6 = NULL;
  chpl____wide_locale call_tmp13 = {CHPL_LOCALEID_T_INIT, NULL};
  int32_t _virtual_method_tmp_3;
  chpl_localeID_t call_tmp14;
  chpl____wide_locale rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale rvfDerefTmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn58 _args_foron_fn = NULL;
  int64_t chpl_here_alloc_size;
  chpl_opaque chpl_here_alloc_tmp;
  int64_t call_tmp15;
  _ref_int64_t _ref_tmp_7 = NULL;
  chpl_bool call_tmp16;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F chpl_macro_tmp_1050;
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_1051;
  chpl____wide_locale chpl_macro_tmp_1052;
  chpl____wide_locale chpl_macro_tmp_1053;
  chpl____wide_locale chpl_macro_tmp_1054;
  chpl____wide_locale chpl_macro_tmp_1055;
  chpl____wide__ref_int32_t chpl_macro_tmp_1056;
  chpl____wide__ref_int32_t chpl_macro_tmp_1057;
  chpl____wide__ref_int32_t chpl_macro_tmp_1058;
  local_numLocales = numLocales;
  local_LocaleSpace = LocaleSpace;
  ret = local_LocaleSpace;
  ret_to_arg_ref_tmp_ = &default_argoffset;
  createTuple(INT64(0), ret_to_arg_ref_tmp_);
  this8 = ret;
  chpl_check_nil((&this8)->addr, INT64(17), "/home/kp167/chap-svn/modules/internal/LocaleTree.chpl");
  chpl_macro_tmp_1050.locale = (&this8)->locale;
  chpl_macro_tmp_1050.addr = &(((&this8)->addr)->ranges);
  ret_ = chpl_macro_tmp_1050;
  chpl_macro_tmp_1051.locale = (ret_).locale;
  chpl_macro_tmp_1051.addr = (*((ret_).addr) + INT64(0));
  chpl_gen_comm_get(((void*)(&ret_x1)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_1051).locale), INT64(0), NULL), (chpl_macro_tmp_1051).addr, sizeof(range_int64_t_bounded_F), -1, INT64(1), INT64(17), "/home/kp167/chap-svn/modules/internal/LocaleTree.chpl");
  _ic__F0_this = ret_x1;
  T = (&_ic__F0_this)->_base;
  _ic__F0_this2 = T;
  ret2 = (&_ic__F0_this2)->_low;
  i = ret2;
  type_tmp = INT64(0);
  ret3 = (&_ic__F0_this2)->_low;
  ret4 = (&_ic__F0_this2)->_high;
  call_tmp = (ret3 > ret4);
  if (call_tmp) {
    T2 = ret2;
  } else {
    ret5 = (&_ic__F0_this2)->_high;
    call_tmp2 = (ret5 + INT64(1));
    T2 = call_tmp2;
  }
  _ref_tmp_ = &type_tmp;
  *(_ref_tmp_) = T2;
  end = type_tmp;
  call_tmp3 = (ret2 != type_tmp);
  T3 = call_tmp3;
  while (T3) {
    T4 = ((locale)(nil));
    call_tmp4 = T4;
    chpl_macro_tmp_1052.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1052.addr = call_tmp4;
    type_tmp2 = chpl_macro_tmp_1052;
    _ref_tmp_2 = &type_tmp2;
    chpl_macro_tmp_1053.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1053.addr = NULL;
    *(_ref_tmp_2) = chpl_macro_tmp_1053;
    left = type_tmp2;
    T5 = ((locale)(nil));
    call_tmp5 = T5;
    chpl_macro_tmp_1054.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1054.addr = call_tmp5;
    type_tmp3 = chpl_macro_tmp_1054;
    _ref_tmp_3 = &type_tmp3;
    chpl_macro_tmp_1055.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1055.addr = NULL;
    *(_ref_tmp_3) = chpl_macro_tmp_1055;
    right = type_tmp3;
    call_tmp6 = (i + INT64(1));
    call_tmp7 = (call_tmp6 * INT64(2));
    call_tmp8 = (call_tmp7 - INT64(1));
    child = call_tmp8;
    call_tmp9 = (call_tmp8 < local_numLocales);
    if (call_tmp9) {
      chpl_check_nil((&rootLocale)->addr, INT64(22), "/home/kp167/chap-svn/modules/internal/LocaleTree.chpl");
      chpl_macro_tmp_1056.locale = (&rootLocale)->locale;
      chpl_macro_tmp_1056.addr = &(((object)((&rootLocale)->addr))->chpl__cid);
      chpl_gen_comm_get(((void*)(&_virtual_method_tmp_)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_1056).locale), INT64(0), NULL), (chpl_macro_tmp_1056).addr, sizeof(int32_t), -1, INT64(1), INT64(22), "/home/kp167/chap-svn/modules/internal/LocaleTree.chpl");
      call_tmp10 = ((chpl____wide_locale(*)(chpl____wide_locale* const, int64_t))chpl_vmtable[((INT64(8) * _virtual_method_tmp_) + INT64(2))])(&rootLocale, call_tmp8);
      _ref_tmp_4 = &left;
      *(_ref_tmp_4) = call_tmp10;
      _ref_tmp_5 = &child;
      *(_ref_tmp_5) += INT64(1);
      call_tmp11 = (child < local_numLocales);
      if (call_tmp11) {
        chpl_check_nil((&rootLocale)->addr, INT64(25), "/home/kp167/chap-svn/modules/internal/LocaleTree.chpl");
        chpl_macro_tmp_1057.locale = (&rootLocale)->locale;
        chpl_macro_tmp_1057.addr = &(((object)((&rootLocale)->addr))->chpl__cid);
        chpl_gen_comm_get(((void*)(&_virtual_method_tmp_2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_1057).locale), INT64(0), NULL), (chpl_macro_tmp_1057).addr, sizeof(int32_t), -1, INT64(1), INT64(25), "/home/kp167/chap-svn/modules/internal/LocaleTree.chpl");
        call_tmp12 = ((chpl____wide_locale(*)(chpl____wide_locale* const, int64_t))chpl_vmtable[((INT64(8) * _virtual_method_tmp_2) + INT64(2))])(&rootLocale, child);
        _ref_tmp_6 = &right;
        *(_ref_tmp_6) = call_tmp12;
      }
    }
    chpl_check_nil((&rootLocale)->addr, INT64(27), "/home/kp167/chap-svn/modules/internal/LocaleTree.chpl");
    chpl_macro_tmp_1058.locale = (&rootLocale)->locale;
    chpl_macro_tmp_1058.addr = &(((object)((&rootLocale)->addr))->chpl__cid);
    chpl_gen_comm_get(((void*)(&_virtual_method_tmp_3)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_1058).locale), INT64(0), NULL), (chpl_macro_tmp_1058).addr, sizeof(int32_t), -1, INT64(1), INT64(27), "/home/kp167/chap-svn/modules/internal/LocaleTree.chpl");
    call_tmp13 = ((chpl____wide_locale(*)(chpl____wide_locale* const, int64_t))chpl_vmtable[((INT64(8) * _virtual_method_tmp_3) + INT64(2))])(&rootLocale, i);
    call_tmp14 = (&call_tmp13)->locale;
    rvfDerefTmp = left;
    rvfDerefTmp2 = right;
    chpl_here_alloc_size = sizeof(chpl__class_localson_fn58_object);
    chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(36));
    _args_foron_fn = ((_class_localson_fn58)(chpl_here_alloc_tmp));
    chpl_check_nil(_args_foron_fn, INT64(27), "/home/kp167/chap-svn/modules/internal/LocaleTree.chpl");
    (_args_foron_fn)->_0__tmp = call_tmp14;
    chpl_check_nil(_args_foron_fn, INT64(27), "/home/kp167/chap-svn/modules/internal/LocaleTree.chpl");
    (_args_foron_fn)->_1_rvfDerefTmp = rvfDerefTmp;
    chpl_check_nil(_args_foron_fn, INT64(27), "/home/kp167/chap-svn/modules/internal/LocaleTree.chpl");
    (_args_foron_fn)->_2_rvfDerefTmp = rvfDerefTmp2;
    /*** wrapon_fn58 ***/ chpl_executeOnFast(&call_tmp14, INT32(63), _args_foron_fn, sizeof(chpl__class_localson_fn58_object), INT64(27), "/home/kp167/chap-svn/modules/internal/LocaleTree.chpl");
    chpl_here_free(((void*)(_args_foron_fn)));
    call_tmp15 = (i + INT64(1));
    _ref_tmp_7 = &i;
    *(_ref_tmp_7) = call_tmp15;
    call_tmp16 = (i != end);
    T3 = call_tmp16;
  }
  return;
}

/* LocaleTree.chpl:27 */
static void on_fn58(chpl____wide_locale* const left, chpl____wide_locale* const right) {
  _ref_locale call_tmp = NULL;
  _ref_locale call_tmp2 = NULL;
  call_tmp = &((&chpl_localeTree)->left);
  *(call_tmp) = *(left);
  call_tmp2 = &((&chpl_localeTree)->right);
  *(call_tmp2) = *(right);
  return;
}

/* LocaleTree.chpl:27 */
static void wrapon_fn58(_class_localson_fn58 c) {
  chpl____wide_locale _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale _2_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_check_nil(c, INT64(27), "/home/kp167/chap-svn/modules/internal/LocaleTree.chpl");
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  chpl_check_nil(c, INT64(27), "/home/kp167/chap-svn/modules/internal/LocaleTree.chpl");
  _2_rvfDerefTmp = (c)->_2_rvfDerefTmp;
  on_fn58(&_1_rvfDerefTmp, &_2_rvfDerefTmp);
  return;
}

