/* LocalesArray.chpl:21 */
static void chpl__init_LocalesArray(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  chpl____wide_RootLocale _formal_type_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_RootLocale T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp2;
  chpl____wide_RootLocale call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  RootLocale call_tmp4 = NULL;
  RootLocale T2 = NULL;
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F call_tmp5 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_DefaultRectangularArr_locale_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_DefaultRectangularArr_locale_1_int64_t_F ret_to_arg_ref_tmp_2 = NULL;
  chpl____wide_DefaultRectangularDom_1_int64_t_F const_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_3 = NULL;
  chpl____wide_object chpl_macro_tmp_504;
  chpl____wide__ref_int32_t chpl_macro_tmp_505;
  int32_t chpl_macro_tmp_506;
  chpl____wide_RootLocale chpl_macro_tmp_507;
  chpl____wide_RootLocale chpl_macro_tmp_508;
  if (chpl__init_LocalesArray_p) {
    goto _exit_chpl__init_LocalesArray;
  }
  modFormatStr = "%*s\n";
  modStr = "LocalesArray";
  printModuleInit(modFormatStr, modStr, INT64(12));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_LocalesArray_p = true;
  chpl_init_rootLocale();
  chpl_macro_tmp_504.locale = (&rootLocale)->locale;
  chpl_macro_tmp_504.addr = ((object)((&rootLocale)->addr));
  call_tmp = chpl_macro_tmp_504;
  call_tmp2 = (&call_tmp)->addr != nil;
  if (call_tmp2) {
    chpl_macro_tmp_505.locale = (rootLocale).locale;
    chpl_macro_tmp_505.addr = &(((object)((rootLocale).addr))->chpl__cid);
    chpl_gen_comm_get(((void*)(&chpl_macro_tmp_506)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_505).locale), INT64(0), NULL), (chpl_macro_tmp_505).addr, sizeof(int32_t), -1, INT64(1), INT64(32), "/home/kp167/chap-svn/modules/internal/LocalesArray.chpl");
    chpl_macro_tmp_507.locale = (rootLocale).locale;
    chpl_macro_tmp_507.addr = ((chpl_macro_tmp_506 == chpl__cid_RootLocale))?(((RootLocale)((rootLocale).addr))):(((RootLocale)(NULL)));
    call_tmp3 = chpl_macro_tmp_507;
    T = call_tmp3;
  } else {
    T2 = ((RootLocale)(nil));
    call_tmp4 = T2;
    chpl_macro_tmp_508.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_508.addr = call_tmp4;
    T = chpl_macro_tmp_508;
  }
  ret_to_arg_ref_tmp_ = &call_tmp5;
  chpl_check_nil((&T)->addr, INT64(32), "/home/kp167/chap-svn/modules/internal/LocalesArray.chpl");
  getDefaultLocaleArray2(&T, ret_to_arg_ref_tmp_);
  ret_to_arg_ref_tmp_2 = &call_tmp6;
  chpl_check_nil((&call_tmp5)->addr, INT64(32), "/home/kp167/chap-svn/modules/internal/LocalesArray.chpl");
  newAlias(&call_tmp5, ret_to_arg_ref_tmp_2);
  Locales = call_tmp6;
  ret_to_arg_ref_tmp_3 = &const_tmp;
  chpl_check_nil((&Locales)->addr, INT64(36), "/home/kp167/chap-svn/modules/internal/LocalesArray.chpl");
  _dom(&Locales, ret_to_arg_ref_tmp_3);
  LocaleSpace = const_tmp;
  chpl_comm_broadcast_private(INT64(12), sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), -1);
  chpl__autoDestroy4(&call_tmp5);
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_LocalesArray:;
  return;
}

