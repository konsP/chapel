/* ChapelArray.chpl:4 */
static void chpl__init_ChapelArray(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  _syncvar_int64_t wrap_call_tmp = NULL;
  chpl____wide__syncvar_int64_t T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__syncvar_int64_t chpl_macro_tmp_509;
  chpl____wide__ref__syncvar_int64_t chpl_macro_tmp_510;
  if (chpl__init_ChapelArray_p) {
    goto _exit_chpl__init_ChapelArray;
  }
  modFormatStr = "%*s\n";
  modStr = "ChapelArray";
  printModuleInit(modFormatStr, modStr, INT64(11));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_ChapelArray_p = true;
  {
    chpl__init_ChapelBase(INT64(4), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    chpl__init_ChapelTuple(INT64(4), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    chpl__init_ChapelLocale(INT64(4), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  }
  wrap_call_tmp = _construct__syncvar(INT64(0));
  chpl_macro_tmp_509.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_509.addr = wrap_call_tmp;
  T = chpl_macro_tmp_509;
  chpl_check_nil((&privatizeLock_DOLLAR_)->addr, INT64(10), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  chpl_macro_tmp_510.locale = (&privatizeLock_DOLLAR_)->locale;
  chpl_macro_tmp_510.addr = &(((&privatizeLock_DOLLAR_)->addr)->value);
  chpl_gen_comm_put(((void*)(&T)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_510).locale), INT64(0), NULL), (chpl_macro_tmp_510).addr, sizeof(chpl____wide__syncvar_int64_t), -1, INT64(1), INT64(10), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_ChapelArray:;
  return;
}

/* ChapelArray.chpl:102 */
static void _newArray(chpl____wide_DefaultRectangularArr_locale_1_int64_t_F* const value, _ref_DefaultRectangularArr_locale_1_int64_t_F _retArg) {
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F this8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F wrap_call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__nilType chpl_macro_tmp_511;
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F chpl_macro_tmp_512;
  chpl_macro_tmp_511.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_511.addr = nil;
  chpl_macro_tmp_512.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_512.addr = NULL;
  this8 = chpl_macro_tmp_512;
  this8 = *(value);
  wrap_call_tmp = _construct__array(value, &this8);
  *(_retArg) = chpl__autoCopy4(&wrap_call_tmp);
  return;
}

/* ChapelArray.chpl:102 */
static void _newArray2(chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F* const value, _ref_DefaultRectangularArr_localesSignal_1_int64_t_F _retArg) {
  chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F this8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F wrap_call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__nilType chpl_macro_tmp_513;
  chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F chpl_macro_tmp_514;
  chpl_macro_tmp_513.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_513.addr = nil;
  chpl_macro_tmp_514.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_514.addr = NULL;
  this8 = chpl_macro_tmp_514;
  this8 = *(value);
  wrap_call_tmp = _construct__array2(value, &this8);
  *(_retArg) = chpl__autoCopy5(&wrap_call_tmp);
  return;
}

/* ChapelArray.chpl:102 */
static void _newArray3(chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F* const value, _ref_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F _retArg) {
  chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F this8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F wrap_call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__nilType chpl_macro_tmp_515;
  chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F chpl_macro_tmp_516;
  chpl_macro_tmp_515.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_515.addr = nil;
  chpl_macro_tmp_516.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_516.addr = NULL;
  this8 = chpl_macro_tmp_516;
  this8 = *(value);
  wrap_call_tmp = _construct__array3(value, &this8);
  *(_retArg) = chpl__autoCopy6(&wrap_call_tmp);
  return;
}

/* ChapelArray.chpl:102 */
static void _newArray5(chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F* const value, _ref_DefaultRectangularArr_chpldev_Task_1_int64_t_F _retArg) {
  chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F this8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F wrap_call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__nilType chpl_macro_tmp_517;
  chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F chpl_macro_tmp_518;
  chpl_macro_tmp_517.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_517.addr = nil;
  chpl_macro_tmp_518.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_518.addr = NULL;
  this8 = chpl_macro_tmp_518;
  this8 = *(value);
  wrap_call_tmp = _construct__array4(value, &this8);
  *(_retArg) = chpl__autoCopy7(&wrap_call_tmp);
  return;
}

/* ChapelArray.chpl:102 */
static void _newArray4(chpl____wide_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F* const value, _ref_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F _retArg) {
  chpl____wide_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F this8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F wrap_call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__nilType chpl_macro_tmp_519;
  chpl____wide_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F chpl_macro_tmp_520;
  chpl_macro_tmp_519.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_519.addr = nil;
  chpl_macro_tmp_520.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_520.addr = NULL;
  this8 = chpl_macro_tmp_520;
  this8 = *(value);
  wrap_call_tmp = _construct__array5(value, &this8);
  *(_retArg) = chpl__autoCopy8(&wrap_call_tmp);
  return;
}

/* ChapelArray.chpl:109 */
static void _newDomain(DefaultRectangularDom_1_int64_t_F value, _ref_DefaultRectangularDom_1_int64_t_F _retArg) {
  DefaultRectangularDom_1_int64_t_F this8 = NULL;
  chpl____wide_DefaultRectangularDom_1_int64_t_F wrap_call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F T2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_521;
  chpl____wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_522;
  this8 = nil;
  this8 = value;
  chpl_macro_tmp_521.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_521.addr = this8;
  T = chpl_macro_tmp_521;
  chpl_macro_tmp_522.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_522.addr = value;
  T2 = chpl_macro_tmp_522;
  wrap_call_tmp = _construct__domain(&T2, &T);
  *(_retArg) = chpl__autoCopy2(&wrap_call_tmp);
  return;
}

/* ChapelArray.chpl:109 */
static void _newDomain2(DefaultAssociativeDom_chpl_taskID_t_F value, _ref_DefaultAssociativeDom_chpl_taskID_t_F _retArg) {
  DefaultAssociativeDom_chpl_taskID_t_F this8 = NULL;
  DefaultAssociativeDom_chpl_taskID_t_F wrap_call_tmp = NULL;
  chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F chpl_macro_tmp_523;
  this8 = nil;
  this8 = value;
  wrap_call_tmp = _construct__domain2(value, this8);
  chpl_macro_tmp_523.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_523.addr = wrap_call_tmp;
  T = chpl_macro_tmp_523;
  *(_retArg) = chpl__autoCopy3(&T);
  return;
}

/* ChapelArray.chpl:116 */
static void _getDomain(chpl____wide_DefaultRectangularDom_1_int64_t_F* const value, _ref_DefaultRectangularDom_1_int64_t_F _retArg) {
  chpl____wide_DefaultRectangularDom_1_int64_t_F this8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F wrap_call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__nilType chpl_macro_tmp_524;
  chpl____wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_525;
  chpl_macro_tmp_524.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_524.addr = nil;
  chpl_macro_tmp_525.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_525.addr = NULL;
  this8 = chpl_macro_tmp_525;
  this8 = *(value);
  wrap_call_tmp = _construct__domain(value, &this8);
  *(_retArg) = chpl__autoCopy2(&wrap_call_tmp);
  return;
}

/* ChapelArray.chpl:123 */
static void _newDistribution(chpl____wide_DefaultDist* const value, _ref_DefaultDist _retArg) {
  chpl____wide_DefaultDist call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  call_tmp = _distribution(value);
  *(_retArg) = chpl__autoCopy(&call_tmp);
  return;
}

/* ChapelArray.chpl:130 */
static void _getDistribution(chpl____wide_DefaultDist* const value, _ref_DefaultDist _retArg) {
  chpl____wide_DefaultDist call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  call_tmp = _distribution(value);
  *(_retArg) = chpl__autoCopy(&call_tmp);
  return;
}

/* ChapelArray.chpl:142 */
static void chpl__convertRuntimeTypeToValue(chpl____wide_DefaultDist* const d, _ref_DefaultRectangularDom_1_int64_t_F _retArg) {
  DefaultRectangularDom_1_int64_t_F call_tmp = NULL;
  chpl____wide_DefaultRectangularDom_1_int64_t_F call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  chpl_check_nil((d)->addr, INT64(145), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  call_tmp = newRectangularDom(d);
  ret_to_arg_ref_tmp_ = &call_tmp2;
  _newDomain(call_tmp, ret_to_arg_ref_tmp_);
  *(_retArg) = call_tmp2;
  return;
}

/* ChapelArray.chpl:142 */
static chpl___RuntimeTypeInfo chpl__buildDomainRuntimeType(chpl____wide_DefaultDist* const d) {
  chpl___RuntimeTypeInfo _return_tmp_;
  (&_return_tmp_)->d = *(d);
  return _return_tmp_;
}

/* ChapelArray.chpl:148 */
static void chpl__convertRuntimeTypeToValue2(chpl____wide_DefaultDist* const d, _ref_DefaultAssociativeDom_chpl_taskID_t_F _retArg) {
  DefaultAssociativeDom_chpl_taskID_t_F call_tmp = NULL;
  chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_DefaultAssociativeDom_chpl_taskID_t_F ret_to_arg_ref_tmp_ = NULL;
  chpl_check_nil((d)->addr, INT64(150), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  call_tmp = newAssociativeDom(d);
  ret_to_arg_ref_tmp_ = &call_tmp2;
  _newDomain2(call_tmp, ret_to_arg_ref_tmp_);
  *(_retArg) = call_tmp2;
  return;
}

/* ChapelArray.chpl:148 */
static chpl___RuntimeTypeInfo2 chpl__buildDomainRuntimeType2(chpl____wide_DefaultDist* const d) {
  chpl___RuntimeTypeInfo2 _return_tmp_;
  (&_return_tmp_)->d = *(d);
  return _return_tmp_;
}

/* ChapelArray.chpl:170 */
static chpl___RuntimeTypeInfo chpl__convertValueToRuntimeType(chpl____wide_DefaultRectangularDom_1_int64_t_F* const dom) {
  chpl____wide_DefaultDist call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_DefaultDist ret_to_arg_ref_tmp_ = NULL;
  chpl___RuntimeTypeInfo call_tmp2;
  ret_to_arg_ref_tmp_ = &call_tmp;
  chpl_check_nil((dom)->addr, INT64(172), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  dist(dom, ret_to_arg_ref_tmp_);
  call_tmp2 = chpl__buildDomainRuntimeType(&call_tmp);
  chpl__autoDestroy(&call_tmp);
  return call_tmp2;
}

/* ChapelArray.chpl:196 */
static void chpl__convertRuntimeTypeToValue4(chpl____wide_DefaultRectangularDom_1_int64_t_F* const dom, _ref_DefaultRectangularArr_locale_1_int64_t_F _retArg) {
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_DefaultRectangularArr_locale_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  ret_to_arg_ref_tmp_ = &call_tmp;
  chpl_check_nil((dom)->addr, INT64(197), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  buildArray(dom, ret_to_arg_ref_tmp_);
  *(_retArg) = call_tmp;
  return;
}

/* ChapelArray.chpl:196 */
static chpl___RuntimeTypeInfo3 chpl__buildArrayRuntimeType(chpl____wide_DefaultRectangularDom_1_int64_t_F* const dom) {
  chpl___RuntimeTypeInfo3 _return_tmp_;
  (&_return_tmp_)->dom = *(dom);
  return _return_tmp_;
}

/* ChapelArray.chpl:196 */
static void chpl__convertRuntimeTypeToValue3(chpl____wide_DefaultRectangularDom_1_int64_t_F* const dom, _ref_DefaultRectangularArr_localesSignal_1_int64_t_F _retArg) {
  chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_DefaultRectangularArr_localesSignal_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  ret_to_arg_ref_tmp_ = &call_tmp;
  chpl_check_nil((dom)->addr, INT64(197), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  buildArray2(dom, ret_to_arg_ref_tmp_);
  *(_retArg) = call_tmp;
  return;
}

/* ChapelArray.chpl:196 */
static chpl___RuntimeTypeInfo4 chpl__buildArrayRuntimeType2(chpl____wide_DefaultRectangularDom_1_int64_t_F* const dom) {
  chpl___RuntimeTypeInfo4 _return_tmp_;
  (&_return_tmp_)->dom = *(dom);
  return _return_tmp_;
}

/* ChapelArray.chpl:196 */
static void chpl__convertRuntimeTypeToValue5(chpl____wide_DefaultRectangularDom_1_int64_t_F* const dom, _ref_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F _retArg) {
  chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  ret_to_arg_ref_tmp_ = &call_tmp;
  chpl_check_nil((dom)->addr, INT64(197), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  buildArray3(dom, ret_to_arg_ref_tmp_);
  *(_retArg) = call_tmp;
  return;
}

/* ChapelArray.chpl:196 */
static chpl___RuntimeTypeInfo5 chpl__buildArrayRuntimeType3(chpl____wide_DefaultRectangularDom_1_int64_t_F* const dom) {
  chpl___RuntimeTypeInfo5 _return_tmp_;
  (&_return_tmp_)->dom = *(dom);
  return _return_tmp_;
}

/* ChapelArray.chpl:196 */
static void chpl__convertRuntimeTypeToValue7(chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F* const dom, _ref_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F _retArg) {
  chpl____wide_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F ret_to_arg_ref_tmp_ = NULL;
  ret_to_arg_ref_tmp_ = &call_tmp;
  chpl_check_nil((dom)->addr, INT64(197), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  buildArray4(dom, ret_to_arg_ref_tmp_);
  *(_retArg) = call_tmp;
  return;
}

/* ChapelArray.chpl:196 */
static chpl___RuntimeTypeInfo6 chpl__buildArrayRuntimeType4(chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F* const dom) {
  chpl___RuntimeTypeInfo6 _return_tmp_;
  (&_return_tmp_)->dom = *(dom);
  return _return_tmp_;
}

/* ChapelArray.chpl:196 */
static void chpl__convertRuntimeTypeToValue6(chpl____wide_DefaultRectangularDom_1_int64_t_F* const dom, _ref_DefaultRectangularArr_chpldev_Task_1_int64_t_F _retArg) {
  chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_DefaultRectangularArr_chpldev_Task_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  ret_to_arg_ref_tmp_ = &call_tmp;
  chpl_check_nil((dom)->addr, INT64(197), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  buildArray5(dom, ret_to_arg_ref_tmp_);
  *(_retArg) = call_tmp;
  return;
}

/* ChapelArray.chpl:196 */
static chpl___RuntimeTypeInfo7 chpl__buildArrayRuntimeType5(chpl____wide_DefaultRectangularDom_1_int64_t_F* const dom) {
  chpl___RuntimeTypeInfo7 _return_tmp_;
  (&_return_tmp_)->dom = *(dom);
  return _return_tmp_;
}

/* DefaultRectangular.chpl:262 */
static void coforall_fn(_tuple_1_star_range_int64_t_bounded_F* const locBlock, int64_t parDim, int64_t numChunks, int64_t chunk, chpl____wide__EndCount* const _coforallCount, _tuple_2_star__array_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F* const chpl__iter) {
  range_int64_t_bounded_F newRet_x1;
  _tuple_1_star_range_int64_t_bounded_F type_tmp;
  range_int64_t_bounded_F _init_class_tmp_;
  rangeBase_int64_t_bounded_F _init_class_tmp_2;
  range_int64_t_bounded_F this8;
  rangeBase_int64_t_bounded_F _init_class_tmp_3;
  rangeBase_int64_t_bounded_F this9;
  int64_t x;
  _ref_int64_t _ref_tmp_ = NULL;
  int64_t x2;
  _ref_int64_t _ref_tmp_2 = NULL;
  int64_t x3;
  _ref_int64_t _ref_tmp_3 = NULL;
  int64_t x4;
  _ref_int64_t _ref_tmp_4 = NULL;
  rangeBase_int64_t_bounded_F wrap_call_tmp;
  chpl_bool x5;
  _ref_chpl_bool _ref_tmp_5 = NULL;
  range_int64_t_bounded_F wrap_call_tmp2;
  _tuple_1_star_range_int64_t_bounded_F followMe;
  _ref__tuple_1_star_range_int64_t_bounded_F _ref_tmp_6 = NULL;
  _tuple_2_star_int64_t const_tmp;
  int64_t _tmp_x1;
  int64_t _tmp_x2;
  chpl____wide__ref_range_int64_t_bounded_F call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__tuple_1_star_range_int64_t_bounded_F _ref_tmp_7 = NULL;
  chpl____wide__ref_rangeBase_int64_t_bounded_F call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp3;
  chpl____wide__ref_range_int64_t_bounded_F call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__tuple_1_star_range_int64_t_bounded_F _ref_tmp_8 = NULL;
  chpl____wide__ref_rangeBase_int64_t_bounded_F call_tmp5 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t ret;
  chpl____wide__ref_range_int64_t_bounded_F call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__tuple_1_star_range_int64_t_bounded_F _ref_tmp_9 = NULL;
  chpl____wide__ref_rangeBase_int64_t_bounded_F call_tmp7 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t ret2;
  chpl____wide__ref_range_int64_t_bounded_F call_tmp8 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__tuple_1_star_range_int64_t_bounded_F _ref_tmp_10 = NULL;
  chpl____wide__ref_rangeBase_int64_t_bounded_F call_tmp9 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t ret3;
  _ref__tuple_2_star_int64_t ret_to_arg_ref_tmp_ = NULL;
  chpl____wide__ref_range_int64_t_bounded_F call_tmp10 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__tuple_1_star_range_int64_t_bounded_F _ref_tmp_11 = NULL;
  range_int64_t_bounded_F call_tmp11;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_2 = NULL;
  chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F _tmp_x12 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F _tmp_x22 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F call_tmp12 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F ret4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F call_tmp13 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F ret5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F _ic__F0_this = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F _ic__F8__formal_tmp_followThis_x1;
  range_int64_t_bounded_F _ic__F9_block_x1;
  int64_t _ic__F13_i;
  int64_t _ic__F14_end;
  int64_t _ic__more;
  chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F _ic__F0_this2 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F _ic__F8__formal_tmp_followThis_x12;
  range_int64_t_bounded_F _ic__F9_block_x12;
  int64_t _ic__F13_i2;
  int64_t _ic__F14_end2;
  int64_t _ic__more2;
  _ref_range_int64_t_bounded_F call_tmp14 = NULL;
  chpl____wide__ref_range_int64_t_bounded_F call_tmp15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F this10 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_range_int64_t_bounded_F call_tmp16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F this11 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F call_tmp17;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_3 = NULL;
  int64_t type_tmp2;
  _ref_int64_t _ref_tmp_12 = NULL;
  chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F call_tmp18 = {CHPL_LOCALEID_T_INIT, NULL};
  _tuple_1_star_int64_t default_argoffset;
  _ref__tuple_1_star_int64_t ret_to_arg_ref_tmp_4 = NULL;
  range_int64_t_bounded_F _init_class_tmp_4;
  rangeBase_int64_t_bounded_F _init_class_tmp_5;
  range_int64_t_bounded_F this12;
  rangeBase_int64_t_bounded_F _init_class_tmp_6;
  rangeBase_int64_t_bounded_F this13;
  int64_t x6;
  _ref_int64_t _ref_tmp_13 = NULL;
  int64_t x7;
  _ref_int64_t _ref_tmp_14 = NULL;
  int64_t x8;
  _ref_int64_t _ref_tmp_15 = NULL;
  int64_t x9;
  _ref_int64_t _ref_tmp_16 = NULL;
  rangeBase_int64_t_bounded_F wrap_call_tmp3;
  chpl_bool x10;
  _ref_chpl_bool _ref_tmp_17 = NULL;
  range_int64_t_bounded_F wrap_call_tmp4;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F call_tmp19 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_rangeBase_int64_t_bounded_F call_tmp20 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t ret6;
  _ref_rangeBase_int64_t_bounded_F call_tmp21 = NULL;
  int64_t ret7;
  int64_t call_tmp22;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F call_tmp23 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_rangeBase_int64_t_bounded_F call_tmp24 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t ret8;
  _ref_rangeBase_int64_t_bounded_F call_tmp25 = NULL;
  int64_t ret9;
  int64_t call_tmp26;
  range_int64_t_bounded_F _ic__F0_this3;
  rangeBase_int64_t_bounded_F T2;
  rangeBase_int64_t_bounded_F _ic__F0_this4;
  int64_t ret10;
  int64_t T3;
  int64_t ret11;
  int64_t ret12;
  chpl_bool call_tmp27;
  int64_t ret13;
  int64_t call_tmp28;
  chpl_bool call_tmp29;
  chpl_bool _cond;
  _ref_range_int64_t_bounded_F call_tmp30 = NULL;
  chpl____wide__ref_range_int64_t_bounded_F call_tmp31 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F this14 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_range_int64_t_bounded_F call_tmp32 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F this15 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F call_tmp33;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_5 = NULL;
  int64_t type_tmp3;
  _ref_int64_t _ref_tmp_18 = NULL;
  chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F T4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F call_tmp34 = {CHPL_LOCALEID_T_INIT, NULL};
  _tuple_1_star_int64_t default_argoffset2;
  _ref__tuple_1_star_int64_t ret_to_arg_ref_tmp_6 = NULL;
  range_int64_t_bounded_F _init_class_tmp_7;
  rangeBase_int64_t_bounded_F _init_class_tmp_8;
  range_int64_t_bounded_F this16;
  rangeBase_int64_t_bounded_F _init_class_tmp_9;
  rangeBase_int64_t_bounded_F this17;
  int64_t x11;
  _ref_int64_t _ref_tmp_19 = NULL;
  int64_t x12;
  _ref_int64_t _ref_tmp_20 = NULL;
  int64_t x13;
  _ref_int64_t _ref_tmp_21 = NULL;
  int64_t x14;
  _ref_int64_t _ref_tmp_22 = NULL;
  rangeBase_int64_t_bounded_F wrap_call_tmp5;
  chpl_bool x15;
  _ref_chpl_bool _ref_tmp_23 = NULL;
  range_int64_t_bounded_F wrap_call_tmp6;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F call_tmp35 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_rangeBase_int64_t_bounded_F call_tmp36 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t ret14;
  _ref_rangeBase_int64_t_bounded_F call_tmp37 = NULL;
  int64_t ret15;
  int64_t call_tmp38;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F call_tmp39 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_rangeBase_int64_t_bounded_F call_tmp40 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t ret16;
  _ref_rangeBase_int64_t_bounded_F call_tmp41 = NULL;
  int64_t ret17;
  int64_t call_tmp42;
  range_int64_t_bounded_F _ic__F0_this5;
  rangeBase_int64_t_bounded_F T5;
  rangeBase_int64_t_bounded_F _ic__F0_this6;
  int64_t ret18;
  int64_t T6;
  int64_t ret19;
  int64_t ret20;
  chpl_bool call_tmp43;
  int64_t ret21;
  int64_t call_tmp44;
  chpl_bool call_tmp45;
  chpl_bool _cond2;
  chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F T7 = {CHPL_LOCALEID_T_INIT, NULL};
  _tuple_1_star_int64_t ind;
  _tuple_1_star_int64_t this18;
  chpl_bool wrap_call_tmp7;
  chpl____wide_DefaultRectangularDom_1_int64_t_F call_tmp46 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp47;
  chpl____wide_chpl_string call_tmp48 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t sum;
  int64_t ret_x1;
  chpl____wide__ref__tuple_1_star_int64_t ret_ = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp49;
  int64_t call_tmp50;
  _ref_int64_t _ref_tmp_24 = NULL;
  chpl____wide__ddata_chpl_TableEntry_chpl_taskID_t call_tmp51 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_chpl_TableEntry_chpl_taskID_t call_tmp52 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool hasMore;
  chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F T8 = {CHPL_LOCALEID_T_INIT, NULL};
  _tuple_1_star_int64_t ind2;
  _tuple_1_star_int64_t this19;
  chpl_bool wrap_call_tmp8;
  chpl____wide_DefaultRectangularDom_1_int64_t_F call_tmp53 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp54;
  chpl____wide_chpl_string call_tmp55 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t sum2;
  int64_t ret_x12;
  chpl____wide__ref__tuple_1_star_int64_t ret_2 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp56;
  int64_t call_tmp57;
  _ref_int64_t _ref_tmp_25 = NULL;
  chpl____wide__ddata_chpl_TableEntry_chpl_taskID_t call_tmp58 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_chpl_TableEntry_chpl_taskID_t call_tmp59 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_TableEntry_chpl_taskID_t call_tmp60;
  _ref_int64_t _ref_tmp_26 = NULL;
  int64_t call_tmp61;
  chpl_bool call_tmp62;
  _ref_int64_t _ref_tmp_27 = NULL;
  int64_t call_tmp63;
  chpl_bool call_tmp64;
  chpl____wide__ref_rangeBase_int64_t_bounded_F chpl_macro_tmp_526;
  chpl____wide__ref_rangeBase_int64_t_bounded_F chpl_macro_tmp_527;
  chpl____wide__ref_int64_t chpl_macro_tmp_528;
  chpl____wide__ref_rangeBase_int64_t_bounded_F chpl_macro_tmp_529;
  chpl____wide__ref_int64_t chpl_macro_tmp_530;
  chpl____wide__ref_rangeBase_int64_t_bounded_F chpl_macro_tmp_531;
  chpl____wide__ref_int64_t chpl_macro_tmp_532;
  chpl____wide__ref_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_533;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F chpl_macro_tmp_534;
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_535;
  chpl____wide__ref_rangeBase_int64_t_bounded_F chpl_macro_tmp_536;
  chpl____wide__ref_int64_t chpl_macro_tmp_537;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F chpl_macro_tmp_538;
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_539;
  chpl____wide__ref_rangeBase_int64_t_bounded_F chpl_macro_tmp_540;
  chpl____wide__ref_int64_t chpl_macro_tmp_541;
  chpl____wide__ref_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_542;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F chpl_macro_tmp_543;
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_544;
  chpl____wide__ref_rangeBase_int64_t_bounded_F chpl_macro_tmp_545;
  chpl____wide__ref_int64_t chpl_macro_tmp_546;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F chpl_macro_tmp_547;
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_548;
  chpl____wide__ref_rangeBase_int64_t_bounded_F chpl_macro_tmp_549;
  chpl____wide__ref_int64_t chpl_macro_tmp_550;
  chpl____wide__ref_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_551;
  chpl____wide__ref__tuple_1_star_int64_t chpl_macro_tmp_552;
  chpl____wide__ref_int64_t chpl_macro_tmp_553;
  chpl____wide__ref__ddata_chpl_TableEntry_chpl_taskID_t chpl_macro_tmp_554;
  chpl____wide__ref_chpl_TableEntry_chpl_taskID_t chpl_macro_tmp_555;
  chpl____wide__ref_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_556;
  chpl____wide__ref__tuple_1_star_int64_t chpl_macro_tmp_557;
  chpl____wide__ref_int64_t chpl_macro_tmp_558;
  chpl____wide__ref__ddata_chpl_TableEntry_chpl_taskID_t chpl_macro_tmp_559;
  chpl____wide__ref_chpl_TableEntry_chpl_taskID_t chpl_macro_tmp_560;
  (&_init_class_tmp_2)->_low = INT64(0);
  (&_init_class_tmp_2)->_high = INT64(0);
  (&_init_class_tmp_2)->_stride = INT64(0);
  (&_init_class_tmp_2)->_alignment = INT64(0);
  (&_init_class_tmp_)->_base = _init_class_tmp_2;
  (&_init_class_tmp_)->_aligned = false;
  (&_init_class_tmp_3)->_low = INT64(0);
  (&_init_class_tmp_3)->_high = INT64(0);
  (&_init_class_tmp_3)->_stride = INT64(0);
  (&_init_class_tmp_3)->_alignment = INT64(0);
  (&this8)->_base = _init_class_tmp_3;
  (&this8)->_aligned = false;
  (&this9)->_low = INT64(0);
  (&this9)->_high = INT64(0);
  (&this9)->_stride = INT64(0);
  (&this9)->_alignment = INT64(0);
  x = INT64(0);
  _ref_tmp_ = &x;
  *(_ref_tmp_) = INT64(1);
  (&this9)->_low = x;
  x2 = INT64(0);
  _ref_tmp_2 = &x2;
  *(_ref_tmp_2) = INT64(0);
  (&this9)->_high = x2;
  x3 = INT64(0);
  _ref_tmp_3 = &x3;
  *(_ref_tmp_3) = INT64(1);
  (&this9)->_stride = x3;
  x4 = INT64(0);
  _ref_tmp_4 = &x4;
  *(_ref_tmp_4) = INT64(0);
  (&this9)->_alignment = x4;
  wrap_call_tmp = _construct_rangeBase(x, x2, x3, x4, &this9);
  (&this8)->_base = wrap_call_tmp;
  x5 = false;
  _ref_tmp_5 = &x5;
  *(_ref_tmp_5) = false;
  (&this8)->_aligned = x5;
  wrap_call_tmp2 = _construct_range(&wrap_call_tmp, x5, &this8);
  *(type_tmp + INT64(0)) = wrap_call_tmp2;
  _ref_tmp_6 = &type_tmp;
  *(*(_ref_tmp_6) + INT64(0)) = *(*(locBlock) + INT64(0));
  *(followMe + INT64(0)) = *(type_tmp + INT64(0));
  _ref_tmp_7 = locBlock;
  call_tmp = this6(_ref_tmp_7, parDim);
  chpl_macro_tmp_526.locale = (call_tmp).locale;
  chpl_macro_tmp_526.addr = &(((call_tmp).addr)->_base);
  call_tmp2 = chpl_macro_tmp_526;
  call_tmp3 = length(&call_tmp2);
  _ref_tmp_8 = locBlock;
  call_tmp4 = this6(_ref_tmp_8, parDim);
  chpl_macro_tmp_527.locale = (call_tmp4).locale;
  chpl_macro_tmp_527.addr = &(((call_tmp4).addr)->_base);
  call_tmp5 = chpl_macro_tmp_527;
  chpl_macro_tmp_528.locale = (call_tmp5).locale;
  chpl_macro_tmp_528.addr = &(((call_tmp5).addr)->_high);
  chpl_gen_comm_get(((void*)(&ret)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_528).locale), INT64(0), NULL), (chpl_macro_tmp_528).addr, sizeof(int64_t), -1, INT64(1), INT64(266), "/home/kp167/chap-svn/modules/internal/DefaultRectangular.chpl");
  _ref_tmp_9 = locBlock;
  call_tmp6 = this6(_ref_tmp_9, parDim);
  chpl_macro_tmp_529.locale = (call_tmp6).locale;
  chpl_macro_tmp_529.addr = &(((call_tmp6).addr)->_base);
  call_tmp7 = chpl_macro_tmp_529;
  chpl_macro_tmp_530.locale = (call_tmp7).locale;
  chpl_macro_tmp_530.addr = &(((call_tmp7).addr)->_low);
  chpl_gen_comm_get(((void*)(&ret2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_530).locale), INT64(0), NULL), (chpl_macro_tmp_530).addr, sizeof(int64_t), -1, INT64(1), INT64(267), "/home/kp167/chap-svn/modules/internal/DefaultRectangular.chpl");
  _ref_tmp_10 = locBlock;
  call_tmp8 = this6(_ref_tmp_10, parDim);
  chpl_macro_tmp_531.locale = (call_tmp8).locale;
  chpl_macro_tmp_531.addr = &(((call_tmp8).addr)->_base);
  call_tmp9 = chpl_macro_tmp_531;
  chpl_macro_tmp_532.locale = (call_tmp9).locale;
  chpl_macro_tmp_532.addr = &(((call_tmp9).addr)->_low);
  chpl_gen_comm_get(((void*)(&ret3)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_532).locale), INT64(0), NULL), (chpl_macro_tmp_532).addr, sizeof(int64_t), -1, INT64(1), INT64(268), "/home/kp167/chap-svn/modules/internal/DefaultRectangular.chpl");
  ret_to_arg_ref_tmp_ = &const_tmp;
  _computeBlock(call_tmp3, numChunks, chunk, ret, ret2, ret3, ret_to_arg_ref_tmp_);
  _tmp_x1 = *(const_tmp + INT64(0));
  _tmp_x2 = *(const_tmp + INT64(1));
  _ref_tmp_11 = &followMe;
  call_tmp10 = this6(_ref_tmp_11, parDim);
  ret_to_arg_ref_tmp_2 = &call_tmp11;
  _build_range(_tmp_x1, _tmp_x2, ret_to_arg_ref_tmp_2);
  chpl_gen_comm_put(((void*)(&call_tmp11)), chpl_nodeFromLocaleID(&((call_tmp10).locale), INT64(0), NULL), (call_tmp10).addr, sizeof(range_int64_t_bounded_F), -1, INT64(1), INT64(269), "/home/kp167/chap-svn/modules/internal/DefaultRectangular.chpl");
  newRet_x1 = *(followMe + INT64(0));
  _tmp_x12 = *(*(chpl__iter) + INT64(0));
  _tmp_x22 = *(*(chpl__iter) + INT64(1));
  call_tmp12 = _tmp_x12;
  ret4 = call_tmp12;
  call_tmp13 = _tmp_x22;
  ret5 = call_tmp13;
  _ic__F0_this = ret4;
  _ic__F0_this2 = ret5;
  T = ret4;
  chpl_check_nil((&T)->addr, INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  chpl_macro_tmp_533.locale = (&T)->locale;
  chpl_macro_tmp_533.addr = &(((&T)->addr)->dom);
  chpl_gen_comm_get(((void*)(&call_tmp18)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_533).locale), INT64(0), NULL), (chpl_macro_tmp_533).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), -1, INT64(1), INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  ret_to_arg_ref_tmp_4 = &default_argoffset;
  createTuple(INT64(0), ret_to_arg_ref_tmp_4);
  _ic__F8__formal_tmp_followThis_x1 = newRet_x1;
  (&_init_class_tmp_5)->_low = INT64(0);
  (&_init_class_tmp_5)->_high = INT64(0);
  (&_init_class_tmp_5)->_stride = INT64(0);
  (&_init_class_tmp_5)->_alignment = INT64(0);
  (&_init_class_tmp_4)->_base = _init_class_tmp_5;
  (&_init_class_tmp_4)->_aligned = false;
  (&_init_class_tmp_6)->_low = INT64(0);
  (&_init_class_tmp_6)->_high = INT64(0);
  (&_init_class_tmp_6)->_stride = INT64(0);
  (&_init_class_tmp_6)->_alignment = INT64(0);
  (&this12)->_base = _init_class_tmp_6;
  (&this12)->_aligned = false;
  (&this13)->_low = INT64(0);
  (&this13)->_high = INT64(0);
  (&this13)->_stride = INT64(0);
  (&this13)->_alignment = INT64(0);
  x6 = INT64(0);
  _ref_tmp_13 = &x6;
  *(_ref_tmp_13) = INT64(1);
  (&this13)->_low = x6;
  x7 = INT64(0);
  _ref_tmp_14 = &x7;
  *(_ref_tmp_14) = INT64(0);
  (&this13)->_high = x7;
  x8 = INT64(0);
  _ref_tmp_15 = &x8;
  *(_ref_tmp_15) = INT64(1);
  (&this13)->_stride = x8;
  x9 = INT64(0);
  _ref_tmp_16 = &x9;
  *(_ref_tmp_16) = INT64(0);
  (&this13)->_alignment = x9;
  wrap_call_tmp3 = _construct_rangeBase(x6, x7, x8, x9, &this13);
  (&this12)->_base = wrap_call_tmp3;
  x10 = false;
  _ref_tmp_17 = &x10;
  *(_ref_tmp_17) = false;
  (&this12)->_aligned = x10;
  wrap_call_tmp4 = _construct_range(&wrap_call_tmp3, x10, &this12);
  _ic__F9_block_x1 = wrap_call_tmp4;
  call_tmp14 = &_ic__F9_block_x1;
  this10 = call_tmp18;
  chpl_check_nil((&this10)->addr, INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  chpl_macro_tmp_534.locale = (&this10)->locale;
  chpl_macro_tmp_534.addr = &(((&this10)->addr)->ranges);
  call_tmp19 = chpl_macro_tmp_534;
  chpl_macro_tmp_535.locale = (call_tmp19).locale;
  chpl_macro_tmp_535.addr = (*((call_tmp19).addr) + INT64(0));
  call_tmp15 = chpl_macro_tmp_535;
  chpl_macro_tmp_536.locale = (call_tmp15).locale;
  chpl_macro_tmp_536.addr = &(((call_tmp15).addr)->_base);
  call_tmp20 = chpl_macro_tmp_536;
  chpl_macro_tmp_537.locale = (call_tmp20).locale;
  chpl_macro_tmp_537.addr = &(((call_tmp20).addr)->_low);
  chpl_gen_comm_get(((void*)(&ret6)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_537).locale), INT64(0), NULL), (chpl_macro_tmp_537).addr, sizeof(int64_t), -1, INT64(1), INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  call_tmp21 = &((&_ic__F8__formal_tmp_followThis_x1)->_base);
  chpl_check_nil(call_tmp21, INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  ret7 = (call_tmp21)->_low;
  call_tmp22 = (ret6 + ret7);
  this11 = call_tmp18;
  chpl_check_nil((&this11)->addr, INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  chpl_macro_tmp_538.locale = (&this11)->locale;
  chpl_macro_tmp_538.addr = &(((&this11)->addr)->ranges);
  call_tmp23 = chpl_macro_tmp_538;
  chpl_macro_tmp_539.locale = (call_tmp23).locale;
  chpl_macro_tmp_539.addr = (*((call_tmp23).addr) + INT64(0));
  call_tmp16 = chpl_macro_tmp_539;
  chpl_macro_tmp_540.locale = (call_tmp16).locale;
  chpl_macro_tmp_540.addr = &(((call_tmp16).addr)->_base);
  call_tmp24 = chpl_macro_tmp_540;
  chpl_macro_tmp_541.locale = (call_tmp24).locale;
  chpl_macro_tmp_541.addr = &(((call_tmp24).addr)->_low);
  chpl_gen_comm_get(((void*)(&ret8)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_541).locale), INT64(0), NULL), (chpl_macro_tmp_541).addr, sizeof(int64_t), -1, INT64(1), INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  call_tmp25 = &((&_ic__F8__formal_tmp_followThis_x1)->_base);
  chpl_check_nil(call_tmp25, INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  ret9 = (call_tmp25)->_high;
  call_tmp26 = (ret8 + ret9);
  ret_to_arg_ref_tmp_3 = &call_tmp17;
  _build_range(call_tmp22, call_tmp26, ret_to_arg_ref_tmp_3);
  *(call_tmp14) = call_tmp17;
  _ic__F0_this3 = _ic__F9_block_x1;
  T2 = (&_ic__F0_this3)->_base;
  _ic__F0_this4 = T2;
  ret10 = (&_ic__F0_this4)->_low;
  _ic__F13_i = ret10;
  type_tmp2 = INT64(0);
  ret11 = (&_ic__F0_this4)->_low;
  ret12 = (&_ic__F0_this4)->_high;
  call_tmp27 = (ret11 > ret12);
  if (call_tmp27) {
    T3 = ret10;
  } else {
    ret13 = (&_ic__F0_this4)->_high;
    call_tmp28 = (ret13 + INT64(1));
    T3 = call_tmp28;
  }
  _ref_tmp_12 = &type_tmp2;
  *(_ref_tmp_12) = T3;
  _ic__F14_end = type_tmp2;
  call_tmp29 = (ret10 != type_tmp2);
  if (call_tmp29) {
    _ic__more = INT64(1);
  } else {
    _ic__more = INT64(0);
  }
  _cond = (_ic__more != INT64(0));
  T4 = ret5;
  chpl_check_nil((&T4)->addr, INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  chpl_macro_tmp_542.locale = (&T4)->locale;
  chpl_macro_tmp_542.addr = &(((&T4)->addr)->dom);
  chpl_gen_comm_get(((void*)(&call_tmp34)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_542).locale), INT64(0), NULL), (chpl_macro_tmp_542).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), -1, INT64(1), INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  ret_to_arg_ref_tmp_6 = &default_argoffset2;
  createTuple(INT64(0), ret_to_arg_ref_tmp_6);
  _ic__F8__formal_tmp_followThis_x12 = newRet_x1;
  (&_init_class_tmp_8)->_low = INT64(0);
  (&_init_class_tmp_8)->_high = INT64(0);
  (&_init_class_tmp_8)->_stride = INT64(0);
  (&_init_class_tmp_8)->_alignment = INT64(0);
  (&_init_class_tmp_7)->_base = _init_class_tmp_8;
  (&_init_class_tmp_7)->_aligned = false;
  (&_init_class_tmp_9)->_low = INT64(0);
  (&_init_class_tmp_9)->_high = INT64(0);
  (&_init_class_tmp_9)->_stride = INT64(0);
  (&_init_class_tmp_9)->_alignment = INT64(0);
  (&this16)->_base = _init_class_tmp_9;
  (&this16)->_aligned = false;
  (&this17)->_low = INT64(0);
  (&this17)->_high = INT64(0);
  (&this17)->_stride = INT64(0);
  (&this17)->_alignment = INT64(0);
  x11 = INT64(0);
  _ref_tmp_19 = &x11;
  *(_ref_tmp_19) = INT64(1);
  (&this17)->_low = x11;
  x12 = INT64(0);
  _ref_tmp_20 = &x12;
  *(_ref_tmp_20) = INT64(0);
  (&this17)->_high = x12;
  x13 = INT64(0);
  _ref_tmp_21 = &x13;
  *(_ref_tmp_21) = INT64(1);
  (&this17)->_stride = x13;
  x14 = INT64(0);
  _ref_tmp_22 = &x14;
  *(_ref_tmp_22) = INT64(0);
  (&this17)->_alignment = x14;
  wrap_call_tmp5 = _construct_rangeBase(x11, x12, x13, x14, &this17);
  (&this16)->_base = wrap_call_tmp5;
  x15 = false;
  _ref_tmp_23 = &x15;
  *(_ref_tmp_23) = false;
  (&this16)->_aligned = x15;
  wrap_call_tmp6 = _construct_range(&wrap_call_tmp5, x15, &this16);
  _ic__F9_block_x12 = wrap_call_tmp6;
  call_tmp30 = &_ic__F9_block_x12;
  this14 = call_tmp34;
  chpl_check_nil((&this14)->addr, INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  chpl_macro_tmp_543.locale = (&this14)->locale;
  chpl_macro_tmp_543.addr = &(((&this14)->addr)->ranges);
  call_tmp35 = chpl_macro_tmp_543;
  chpl_macro_tmp_544.locale = (call_tmp35).locale;
  chpl_macro_tmp_544.addr = (*((call_tmp35).addr) + INT64(0));
  call_tmp31 = chpl_macro_tmp_544;
  chpl_macro_tmp_545.locale = (call_tmp31).locale;
  chpl_macro_tmp_545.addr = &(((call_tmp31).addr)->_base);
  call_tmp36 = chpl_macro_tmp_545;
  chpl_macro_tmp_546.locale = (call_tmp36).locale;
  chpl_macro_tmp_546.addr = &(((call_tmp36).addr)->_low);
  chpl_gen_comm_get(((void*)(&ret14)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_546).locale), INT64(0), NULL), (chpl_macro_tmp_546).addr, sizeof(int64_t), -1, INT64(1), INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  call_tmp37 = &((&_ic__F8__formal_tmp_followThis_x12)->_base);
  chpl_check_nil(call_tmp37, INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  ret15 = (call_tmp37)->_low;
  call_tmp38 = (ret14 + ret15);
  this15 = call_tmp34;
  chpl_check_nil((&this15)->addr, INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  chpl_macro_tmp_547.locale = (&this15)->locale;
  chpl_macro_tmp_547.addr = &(((&this15)->addr)->ranges);
  call_tmp39 = chpl_macro_tmp_547;
  chpl_macro_tmp_548.locale = (call_tmp39).locale;
  chpl_macro_tmp_548.addr = (*((call_tmp39).addr) + INT64(0));
  call_tmp32 = chpl_macro_tmp_548;
  chpl_macro_tmp_549.locale = (call_tmp32).locale;
  chpl_macro_tmp_549.addr = &(((call_tmp32).addr)->_base);
  call_tmp40 = chpl_macro_tmp_549;
  chpl_macro_tmp_550.locale = (call_tmp40).locale;
  chpl_macro_tmp_550.addr = &(((call_tmp40).addr)->_low);
  chpl_gen_comm_get(((void*)(&ret16)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_550).locale), INT64(0), NULL), (chpl_macro_tmp_550).addr, sizeof(int64_t), -1, INT64(1), INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  call_tmp41 = &((&_ic__F8__formal_tmp_followThis_x12)->_base);
  chpl_check_nil(call_tmp41, INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  ret17 = (call_tmp41)->_high;
  call_tmp42 = (ret16 + ret17);
  ret_to_arg_ref_tmp_5 = &call_tmp33;
  _build_range(call_tmp38, call_tmp42, ret_to_arg_ref_tmp_5);
  *(call_tmp30) = call_tmp33;
  _ic__F0_this5 = _ic__F9_block_x12;
  T5 = (&_ic__F0_this5)->_base;
  _ic__F0_this6 = T5;
  ret18 = (&_ic__F0_this6)->_low;
  _ic__F13_i2 = ret18;
  type_tmp3 = INT64(0);
  ret19 = (&_ic__F0_this6)->_low;
  ret20 = (&_ic__F0_this6)->_high;
  call_tmp43 = (ret19 > ret20);
  if (call_tmp43) {
    T6 = ret18;
  } else {
    ret21 = (&_ic__F0_this6)->_high;
    call_tmp44 = (ret21 + INT64(1));
    T6 = call_tmp44;
  }
  _ref_tmp_18 = &type_tmp3;
  *(_ref_tmp_18) = T6;
  _ic__F14_end2 = type_tmp3;
  call_tmp45 = (ret18 != type_tmp3);
  if (call_tmp45) {
    _ic__more2 = INT64(1);
  } else {
    _ic__more2 = INT64(0);
  }
  _cond2 = (_ic__more2 != INT64(0));
  for (;_cond;) {
    T7 = _ic__F0_this2;
    *(this18 + INT64(0)) = _ic__F13_i2;
    *(ind + INT64(0)) = *(this18 + INT64(0));
    chpl_check_nil((&T7)->addr, INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    chpl_macro_tmp_551.locale = (&T7)->locale;
    chpl_macro_tmp_551.addr = &(((&T7)->addr)->dom);
    chpl_gen_comm_get(((void*)(&call_tmp46)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_551).locale), INT64(0), NULL), (chpl_macro_tmp_551).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), -1, INT64(1), INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    chpl_check_nil((&call_tmp46)->addr, INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    wrap_call_tmp7 = dsiMember2(&call_tmp46, &this18);
    call_tmp47 = (! wrap_call_tmp7);
    if (call_tmp47) {
      wide_string_from_c_string(&call_tmp48, "array index out of bounds: ", INT64(0), INT64(0), INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
      halt2(call_tmp48, &this18, INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    }
    sum = INT64(0);
    chpl_check_nil((&T7)->addr, INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    chpl_macro_tmp_552.locale = (&T7)->locale;
    chpl_macro_tmp_552.addr = &(((&T7)->addr)->blk);
    ret_ = chpl_macro_tmp_552;
    chpl_macro_tmp_553.locale = (ret_).locale;
    chpl_macro_tmp_553.addr = (*((ret_).addr) + INT64(0));
    chpl_gen_comm_get(((void*)(&ret_x1)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_553).locale), INT64(0), NULL), (chpl_macro_tmp_553).addr, sizeof(int64_t), -1, INT64(1), INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    call_tmp49 = *(ind + INT64(0));
    call_tmp50 = (call_tmp49 * ret_x1);
    _ref_tmp_24 = &sum;
    *(_ref_tmp_24) += call_tmp50;
    chpl_check_nil((&T7)->addr, INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    chpl_macro_tmp_554.locale = (&T7)->locale;
    chpl_macro_tmp_554.addr = &(((&T7)->addr)->shiftedData);
    chpl_gen_comm_get(((void*)(&call_tmp51)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_554).locale), INT64(0), NULL), (chpl_macro_tmp_554).addr, sizeof(chpl____wide__ddata_chpl_TableEntry_chpl_taskID_t), -1, INT64(1), INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    chpl_macro_tmp_555.locale = (&call_tmp51)->locale;
    chpl_macro_tmp_555.addr = ((&call_tmp51)->addr + sum);
    call_tmp52 = chpl_macro_tmp_555;
    hasMore = (_cond2 == INT64(0));
    if (hasMore) {
      chpl_error("zippered iterations have non-equal lengths", INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    }
    T8 = _ic__F0_this;
    *(this19 + INT64(0)) = _ic__F13_i;
    *(ind2 + INT64(0)) = *(this19 + INT64(0));
    chpl_check_nil((&T8)->addr, INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    chpl_macro_tmp_556.locale = (&T8)->locale;
    chpl_macro_tmp_556.addr = &(((&T8)->addr)->dom);
    chpl_gen_comm_get(((void*)(&call_tmp53)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_556).locale), INT64(0), NULL), (chpl_macro_tmp_556).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), -1, INT64(1), INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    chpl_check_nil((&call_tmp53)->addr, INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    wrap_call_tmp8 = dsiMember2(&call_tmp53, &this19);
    call_tmp54 = (! wrap_call_tmp8);
    if (call_tmp54) {
      wide_string_from_c_string(&call_tmp55, "array index out of bounds: ", INT64(0), INT64(0), INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
      halt2(call_tmp55, &this19, INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    }
    sum2 = INT64(0);
    chpl_check_nil((&T8)->addr, INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    chpl_macro_tmp_557.locale = (&T8)->locale;
    chpl_macro_tmp_557.addr = &(((&T8)->addr)->blk);
    ret_2 = chpl_macro_tmp_557;
    chpl_macro_tmp_558.locale = (ret_2).locale;
    chpl_macro_tmp_558.addr = (*((ret_2).addr) + INT64(0));
    chpl_gen_comm_get(((void*)(&ret_x12)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_558).locale), INT64(0), NULL), (chpl_macro_tmp_558).addr, sizeof(int64_t), -1, INT64(1), INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    call_tmp56 = *(ind2 + INT64(0));
    call_tmp57 = (call_tmp56 * ret_x12);
    _ref_tmp_25 = &sum2;
    *(_ref_tmp_25) += call_tmp57;
    chpl_check_nil((&T8)->addr, INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    chpl_macro_tmp_559.locale = (&T8)->locale;
    chpl_macro_tmp_559.addr = &(((&T8)->addr)->shiftedData);
    chpl_gen_comm_get(((void*)(&call_tmp58)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_559).locale), INT64(0), NULL), (chpl_macro_tmp_559).addr, sizeof(chpl____wide__ddata_chpl_TableEntry_chpl_taskID_t), -1, INT64(1), INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    chpl_macro_tmp_560.locale = (&call_tmp58)->locale;
    chpl_macro_tmp_560.addr = ((&call_tmp58)->addr + sum2);
    call_tmp59 = chpl_macro_tmp_560;
    chpl_gen_comm_get(((void*)(&call_tmp60)), chpl_nodeFromLocaleID(&((call_tmp52).locale), INT64(0), NULL), (call_tmp52).addr, sizeof(chpl_TableEntry_chpl_taskID_t), -1, INT64(1), INT64(1840), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    chpl___ASSIGN_6(&call_tmp59, &call_tmp60);
    call_tmp61 = (_ic__F13_i + INT64(1));
    _ref_tmp_26 = &_ic__F13_i;
    *(_ref_tmp_26) = call_tmp61;
    call_tmp62 = (_ic__F13_i != _ic__F14_end);
    if (call_tmp62) {
      _ic__more = INT64(1);
    } else {
      _ic__more = INT64(0);
    }
    _cond = (_ic__more != INT64(0));
    call_tmp63 = (_ic__F13_i2 + INT64(1));
    _ref_tmp_27 = &_ic__F13_i2;
    *(_ref_tmp_27) = call_tmp63;
    call_tmp64 = (_ic__F13_i2 != _ic__F14_end2);
    if (call_tmp64) {
      _ic__more2 = INT64(1);
    } else {
      _ic__more2 = INT64(0);
    }
    _cond2 = (_ic__more2 != INT64(0));
  }
  if (_cond2) {
    chpl_error("zippered iterations have non-equal lengths", INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  }
  _downEndCount(_coforallCount);
  return;
}

/* DefaultRectangular.chpl:262 */
static void coforall_fn2(_tuple_1_star_range_int64_t_bounded_F* const locBlock, int64_t parDim, int64_t numChunks, int64_t chunk, chpl____wide__EndCount* const _coforallCount, _tuple_2_star__array_DefaultRectangularArr_chpldev_Task_1_int64_t_F_DefaultRectangularArr_chpldev_Task_1_int64_t_F* const chpl__iter) {
  range_int64_t_bounded_F newRet_x1;
  _tuple_1_star_range_int64_t_bounded_F type_tmp;
  range_int64_t_bounded_F _init_class_tmp_;
  rangeBase_int64_t_bounded_F _init_class_tmp_2;
  range_int64_t_bounded_F this8;
  rangeBase_int64_t_bounded_F _init_class_tmp_3;
  rangeBase_int64_t_bounded_F this9;
  int64_t x;
  _ref_int64_t _ref_tmp_ = NULL;
  int64_t x2;
  _ref_int64_t _ref_tmp_2 = NULL;
  int64_t x3;
  _ref_int64_t _ref_tmp_3 = NULL;
  int64_t x4;
  _ref_int64_t _ref_tmp_4 = NULL;
  rangeBase_int64_t_bounded_F wrap_call_tmp;
  chpl_bool x5;
  _ref_chpl_bool _ref_tmp_5 = NULL;
  range_int64_t_bounded_F wrap_call_tmp2;
  _tuple_1_star_range_int64_t_bounded_F followMe;
  _ref__tuple_1_star_range_int64_t_bounded_F _ref_tmp_6 = NULL;
  _tuple_2_star_int64_t const_tmp;
  int64_t _tmp_x1;
  int64_t _tmp_x2;
  chpl____wide__ref_range_int64_t_bounded_F call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__tuple_1_star_range_int64_t_bounded_F _ref_tmp_7 = NULL;
  chpl____wide__ref_rangeBase_int64_t_bounded_F call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp3;
  chpl____wide__ref_range_int64_t_bounded_F call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__tuple_1_star_range_int64_t_bounded_F _ref_tmp_8 = NULL;
  chpl____wide__ref_rangeBase_int64_t_bounded_F call_tmp5 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t ret;
  chpl____wide__ref_range_int64_t_bounded_F call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__tuple_1_star_range_int64_t_bounded_F _ref_tmp_9 = NULL;
  chpl____wide__ref_rangeBase_int64_t_bounded_F call_tmp7 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t ret2;
  chpl____wide__ref_range_int64_t_bounded_F call_tmp8 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__tuple_1_star_range_int64_t_bounded_F _ref_tmp_10 = NULL;
  chpl____wide__ref_rangeBase_int64_t_bounded_F call_tmp9 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t ret3;
  _ref__tuple_2_star_int64_t ret_to_arg_ref_tmp_ = NULL;
  chpl____wide__ref_range_int64_t_bounded_F call_tmp10 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__tuple_1_star_range_int64_t_bounded_F _ref_tmp_11 = NULL;
  range_int64_t_bounded_F call_tmp11;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_2 = NULL;
  chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F _tmp_x12 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F _tmp_x22 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F call_tmp12 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F ret4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F call_tmp13 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F ret5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F _ic__F0_this = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F _ic__F8__formal_tmp_followThis_x1;
  range_int64_t_bounded_F _ic__F9_block_x1;
  int64_t _ic__F13_i;
  int64_t _ic__F14_end;
  int64_t _ic__more;
  chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F _ic__F0_this2 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F _ic__F8__formal_tmp_followThis_x12;
  range_int64_t_bounded_F _ic__F9_block_x12;
  int64_t _ic__F13_i2;
  int64_t _ic__F14_end2;
  int64_t _ic__more2;
  _ref_range_int64_t_bounded_F call_tmp14 = NULL;
  chpl____wide__ref_range_int64_t_bounded_F call_tmp15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F this10 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_range_int64_t_bounded_F call_tmp16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F this11 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F call_tmp17;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_3 = NULL;
  int64_t type_tmp2;
  _ref_int64_t _ref_tmp_12 = NULL;
  chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F call_tmp18 = {CHPL_LOCALEID_T_INIT, NULL};
  _tuple_1_star_int64_t default_argoffset;
  _ref__tuple_1_star_int64_t ret_to_arg_ref_tmp_4 = NULL;
  range_int64_t_bounded_F _init_class_tmp_4;
  rangeBase_int64_t_bounded_F _init_class_tmp_5;
  range_int64_t_bounded_F this12;
  rangeBase_int64_t_bounded_F _init_class_tmp_6;
  rangeBase_int64_t_bounded_F this13;
  int64_t x6;
  _ref_int64_t _ref_tmp_13 = NULL;
  int64_t x7;
  _ref_int64_t _ref_tmp_14 = NULL;
  int64_t x8;
  _ref_int64_t _ref_tmp_15 = NULL;
  int64_t x9;
  _ref_int64_t _ref_tmp_16 = NULL;
  rangeBase_int64_t_bounded_F wrap_call_tmp3;
  chpl_bool x10;
  _ref_chpl_bool _ref_tmp_17 = NULL;
  range_int64_t_bounded_F wrap_call_tmp4;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F call_tmp19 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_rangeBase_int64_t_bounded_F call_tmp20 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t ret6;
  _ref_rangeBase_int64_t_bounded_F call_tmp21 = NULL;
  int64_t ret7;
  int64_t call_tmp22;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F call_tmp23 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_rangeBase_int64_t_bounded_F call_tmp24 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t ret8;
  _ref_rangeBase_int64_t_bounded_F call_tmp25 = NULL;
  int64_t ret9;
  int64_t call_tmp26;
  range_int64_t_bounded_F _ic__F0_this3;
  rangeBase_int64_t_bounded_F T2;
  rangeBase_int64_t_bounded_F _ic__F0_this4;
  int64_t ret10;
  int64_t T3;
  int64_t ret11;
  int64_t ret12;
  chpl_bool call_tmp27;
  int64_t ret13;
  int64_t call_tmp28;
  chpl_bool call_tmp29;
  chpl_bool _cond;
  _ref_range_int64_t_bounded_F call_tmp30 = NULL;
  chpl____wide__ref_range_int64_t_bounded_F call_tmp31 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F this14 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_range_int64_t_bounded_F call_tmp32 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F this15 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F call_tmp33;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_5 = NULL;
  int64_t type_tmp3;
  _ref_int64_t _ref_tmp_18 = NULL;
  chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F T4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F call_tmp34 = {CHPL_LOCALEID_T_INIT, NULL};
  _tuple_1_star_int64_t default_argoffset2;
  _ref__tuple_1_star_int64_t ret_to_arg_ref_tmp_6 = NULL;
  range_int64_t_bounded_F _init_class_tmp_7;
  rangeBase_int64_t_bounded_F _init_class_tmp_8;
  range_int64_t_bounded_F this16;
  rangeBase_int64_t_bounded_F _init_class_tmp_9;
  rangeBase_int64_t_bounded_F this17;
  int64_t x11;
  _ref_int64_t _ref_tmp_19 = NULL;
  int64_t x12;
  _ref_int64_t _ref_tmp_20 = NULL;
  int64_t x13;
  _ref_int64_t _ref_tmp_21 = NULL;
  int64_t x14;
  _ref_int64_t _ref_tmp_22 = NULL;
  rangeBase_int64_t_bounded_F wrap_call_tmp5;
  chpl_bool x15;
  _ref_chpl_bool _ref_tmp_23 = NULL;
  range_int64_t_bounded_F wrap_call_tmp6;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F call_tmp35 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_rangeBase_int64_t_bounded_F call_tmp36 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t ret14;
  _ref_rangeBase_int64_t_bounded_F call_tmp37 = NULL;
  int64_t ret15;
  int64_t call_tmp38;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F call_tmp39 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_rangeBase_int64_t_bounded_F call_tmp40 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t ret16;
  _ref_rangeBase_int64_t_bounded_F call_tmp41 = NULL;
  int64_t ret17;
  int64_t call_tmp42;
  range_int64_t_bounded_F _ic__F0_this5;
  rangeBase_int64_t_bounded_F T5;
  rangeBase_int64_t_bounded_F _ic__F0_this6;
  int64_t ret18;
  int64_t T6;
  int64_t ret19;
  int64_t ret20;
  chpl_bool call_tmp43;
  int64_t ret21;
  int64_t call_tmp44;
  chpl_bool call_tmp45;
  chpl_bool _cond2;
  chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F T7 = {CHPL_LOCALEID_T_INIT, NULL};
  _tuple_1_star_int64_t ind;
  _tuple_1_star_int64_t this18;
  chpl_bool wrap_call_tmp7;
  chpl____wide_DefaultRectangularDom_1_int64_t_F call_tmp46 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp47;
  chpl____wide_chpl_string call_tmp48 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t sum;
  int64_t ret_x1;
  chpl____wide__ref__tuple_1_star_int64_t ret_ = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp49;
  int64_t call_tmp50;
  _ref_int64_t _ref_tmp_24 = NULL;
  chpl____wide__ddata_chpldev_Task call_tmp51 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_chpldev_Task call_tmp52 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool hasMore;
  chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F T8 = {CHPL_LOCALEID_T_INIT, NULL};
  _tuple_1_star_int64_t ind2;
  _tuple_1_star_int64_t this19;
  chpl_bool wrap_call_tmp8;
  chpl____wide_DefaultRectangularDom_1_int64_t_F call_tmp53 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp54;
  chpl____wide_chpl_string call_tmp55 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t sum2;
  int64_t ret_x12;
  chpl____wide__ref__tuple_1_star_int64_t ret_2 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp56;
  int64_t call_tmp57;
  _ref_int64_t _ref_tmp_25 = NULL;
  chpl____wide__ddata_chpldev_Task call_tmp58 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_chpldev_Task call_tmp59 = {CHPL_LOCALEID_T_INIT, NULL};
  chpldev_Task call_tmp60;
  _ref_int64_t _ref_tmp_26 = NULL;
  int64_t call_tmp61;
  chpl_bool call_tmp62;
  _ref_int64_t _ref_tmp_27 = NULL;
  int64_t call_tmp63;
  chpl_bool call_tmp64;
  chpl____wide__ref_rangeBase_int64_t_bounded_F chpl_macro_tmp_561;
  chpl____wide__ref_rangeBase_int64_t_bounded_F chpl_macro_tmp_562;
  chpl____wide__ref_int64_t chpl_macro_tmp_563;
  chpl____wide__ref_rangeBase_int64_t_bounded_F chpl_macro_tmp_564;
  chpl____wide__ref_int64_t chpl_macro_tmp_565;
  chpl____wide__ref_rangeBase_int64_t_bounded_F chpl_macro_tmp_566;
  chpl____wide__ref_int64_t chpl_macro_tmp_567;
  chpl____wide__ref_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_568;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F chpl_macro_tmp_569;
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_570;
  chpl____wide__ref_rangeBase_int64_t_bounded_F chpl_macro_tmp_571;
  chpl____wide__ref_int64_t chpl_macro_tmp_572;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F chpl_macro_tmp_573;
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_574;
  chpl____wide__ref_rangeBase_int64_t_bounded_F chpl_macro_tmp_575;
  chpl____wide__ref_int64_t chpl_macro_tmp_576;
  chpl____wide__ref_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_577;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F chpl_macro_tmp_578;
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_579;
  chpl____wide__ref_rangeBase_int64_t_bounded_F chpl_macro_tmp_580;
  chpl____wide__ref_int64_t chpl_macro_tmp_581;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F chpl_macro_tmp_582;
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_583;
  chpl____wide__ref_rangeBase_int64_t_bounded_F chpl_macro_tmp_584;
  chpl____wide__ref_int64_t chpl_macro_tmp_585;
  chpl____wide__ref_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_586;
  chpl____wide__ref__tuple_1_star_int64_t chpl_macro_tmp_587;
  chpl____wide__ref_int64_t chpl_macro_tmp_588;
  chpl____wide__ref__ddata_chpldev_Task chpl_macro_tmp_589;
  chpl____wide__ref_chpldev_Task chpl_macro_tmp_590;
  chpl____wide__ref_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_591;
  chpl____wide__ref__tuple_1_star_int64_t chpl_macro_tmp_592;
  chpl____wide__ref_int64_t chpl_macro_tmp_593;
  chpl____wide__ref__ddata_chpldev_Task chpl_macro_tmp_594;
  chpl____wide__ref_chpldev_Task chpl_macro_tmp_595;
  (&_init_class_tmp_2)->_low = INT64(0);
  (&_init_class_tmp_2)->_high = INT64(0);
  (&_init_class_tmp_2)->_stride = INT64(0);
  (&_init_class_tmp_2)->_alignment = INT64(0);
  (&_init_class_tmp_)->_base = _init_class_tmp_2;
  (&_init_class_tmp_)->_aligned = false;
  (&_init_class_tmp_3)->_low = INT64(0);
  (&_init_class_tmp_3)->_high = INT64(0);
  (&_init_class_tmp_3)->_stride = INT64(0);
  (&_init_class_tmp_3)->_alignment = INT64(0);
  (&this8)->_base = _init_class_tmp_3;
  (&this8)->_aligned = false;
  (&this9)->_low = INT64(0);
  (&this9)->_high = INT64(0);
  (&this9)->_stride = INT64(0);
  (&this9)->_alignment = INT64(0);
  x = INT64(0);
  _ref_tmp_ = &x;
  *(_ref_tmp_) = INT64(1);
  (&this9)->_low = x;
  x2 = INT64(0);
  _ref_tmp_2 = &x2;
  *(_ref_tmp_2) = INT64(0);
  (&this9)->_high = x2;
  x3 = INT64(0);
  _ref_tmp_3 = &x3;
  *(_ref_tmp_3) = INT64(1);
  (&this9)->_stride = x3;
  x4 = INT64(0);
  _ref_tmp_4 = &x4;
  *(_ref_tmp_4) = INT64(0);
  (&this9)->_alignment = x4;
  wrap_call_tmp = _construct_rangeBase(x, x2, x3, x4, &this9);
  (&this8)->_base = wrap_call_tmp;
  x5 = false;
  _ref_tmp_5 = &x5;
  *(_ref_tmp_5) = false;
  (&this8)->_aligned = x5;
  wrap_call_tmp2 = _construct_range(&wrap_call_tmp, x5, &this8);
  *(type_tmp + INT64(0)) = wrap_call_tmp2;
  _ref_tmp_6 = &type_tmp;
  *(*(_ref_tmp_6) + INT64(0)) = *(*(locBlock) + INT64(0));
  *(followMe + INT64(0)) = *(type_tmp + INT64(0));
  _ref_tmp_7 = locBlock;
  call_tmp = this6(_ref_tmp_7, parDim);
  chpl_macro_tmp_561.locale = (call_tmp).locale;
  chpl_macro_tmp_561.addr = &(((call_tmp).addr)->_base);
  call_tmp2 = chpl_macro_tmp_561;
  call_tmp3 = length(&call_tmp2);
  _ref_tmp_8 = locBlock;
  call_tmp4 = this6(_ref_tmp_8, parDim);
  chpl_macro_tmp_562.locale = (call_tmp4).locale;
  chpl_macro_tmp_562.addr = &(((call_tmp4).addr)->_base);
  call_tmp5 = chpl_macro_tmp_562;
  chpl_macro_tmp_563.locale = (call_tmp5).locale;
  chpl_macro_tmp_563.addr = &(((call_tmp5).addr)->_high);
  chpl_gen_comm_get(((void*)(&ret)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_563).locale), INT64(0), NULL), (chpl_macro_tmp_563).addr, sizeof(int64_t), -1, INT64(1), INT64(266), "/home/kp167/chap-svn/modules/internal/DefaultRectangular.chpl");
  _ref_tmp_9 = locBlock;
  call_tmp6 = this6(_ref_tmp_9, parDim);
  chpl_macro_tmp_564.locale = (call_tmp6).locale;
  chpl_macro_tmp_564.addr = &(((call_tmp6).addr)->_base);
  call_tmp7 = chpl_macro_tmp_564;
  chpl_macro_tmp_565.locale = (call_tmp7).locale;
  chpl_macro_tmp_565.addr = &(((call_tmp7).addr)->_low);
  chpl_gen_comm_get(((void*)(&ret2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_565).locale), INT64(0), NULL), (chpl_macro_tmp_565).addr, sizeof(int64_t), -1, INT64(1), INT64(267), "/home/kp167/chap-svn/modules/internal/DefaultRectangular.chpl");
  _ref_tmp_10 = locBlock;
  call_tmp8 = this6(_ref_tmp_10, parDim);
  chpl_macro_tmp_566.locale = (call_tmp8).locale;
  chpl_macro_tmp_566.addr = &(((call_tmp8).addr)->_base);
  call_tmp9 = chpl_macro_tmp_566;
  chpl_macro_tmp_567.locale = (call_tmp9).locale;
  chpl_macro_tmp_567.addr = &(((call_tmp9).addr)->_low);
  chpl_gen_comm_get(((void*)(&ret3)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_567).locale), INT64(0), NULL), (chpl_macro_tmp_567).addr, sizeof(int64_t), -1, INT64(1), INT64(268), "/home/kp167/chap-svn/modules/internal/DefaultRectangular.chpl");
  ret_to_arg_ref_tmp_ = &const_tmp;
  _computeBlock(call_tmp3, numChunks, chunk, ret, ret2, ret3, ret_to_arg_ref_tmp_);
  _tmp_x1 = *(const_tmp + INT64(0));
  _tmp_x2 = *(const_tmp + INT64(1));
  _ref_tmp_11 = &followMe;
  call_tmp10 = this6(_ref_tmp_11, parDim);
  ret_to_arg_ref_tmp_2 = &call_tmp11;
  _build_range(_tmp_x1, _tmp_x2, ret_to_arg_ref_tmp_2);
  chpl_gen_comm_put(((void*)(&call_tmp11)), chpl_nodeFromLocaleID(&((call_tmp10).locale), INT64(0), NULL), (call_tmp10).addr, sizeof(range_int64_t_bounded_F), -1, INT64(1), INT64(269), "/home/kp167/chap-svn/modules/internal/DefaultRectangular.chpl");
  newRet_x1 = *(followMe + INT64(0));
  _tmp_x12 = *(*(chpl__iter) + INT64(0));
  _tmp_x22 = *(*(chpl__iter) + INT64(1));
  call_tmp12 = _tmp_x12;
  ret4 = call_tmp12;
  call_tmp13 = _tmp_x22;
  ret5 = call_tmp13;
  _ic__F0_this = ret4;
  _ic__F0_this2 = ret5;
  T = ret4;
  chpl_check_nil((&T)->addr, INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  chpl_macro_tmp_568.locale = (&T)->locale;
  chpl_macro_tmp_568.addr = &(((&T)->addr)->dom);
  chpl_gen_comm_get(((void*)(&call_tmp18)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_568).locale), INT64(0), NULL), (chpl_macro_tmp_568).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), -1, INT64(1), INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  ret_to_arg_ref_tmp_4 = &default_argoffset;
  createTuple(INT64(0), ret_to_arg_ref_tmp_4);
  _ic__F8__formal_tmp_followThis_x1 = newRet_x1;
  (&_init_class_tmp_5)->_low = INT64(0);
  (&_init_class_tmp_5)->_high = INT64(0);
  (&_init_class_tmp_5)->_stride = INT64(0);
  (&_init_class_tmp_5)->_alignment = INT64(0);
  (&_init_class_tmp_4)->_base = _init_class_tmp_5;
  (&_init_class_tmp_4)->_aligned = false;
  (&_init_class_tmp_6)->_low = INT64(0);
  (&_init_class_tmp_6)->_high = INT64(0);
  (&_init_class_tmp_6)->_stride = INT64(0);
  (&_init_class_tmp_6)->_alignment = INT64(0);
  (&this12)->_base = _init_class_tmp_6;
  (&this12)->_aligned = false;
  (&this13)->_low = INT64(0);
  (&this13)->_high = INT64(0);
  (&this13)->_stride = INT64(0);
  (&this13)->_alignment = INT64(0);
  x6 = INT64(0);
  _ref_tmp_13 = &x6;
  *(_ref_tmp_13) = INT64(1);
  (&this13)->_low = x6;
  x7 = INT64(0);
  _ref_tmp_14 = &x7;
  *(_ref_tmp_14) = INT64(0);
  (&this13)->_high = x7;
  x8 = INT64(0);
  _ref_tmp_15 = &x8;
  *(_ref_tmp_15) = INT64(1);
  (&this13)->_stride = x8;
  x9 = INT64(0);
  _ref_tmp_16 = &x9;
  *(_ref_tmp_16) = INT64(0);
  (&this13)->_alignment = x9;
  wrap_call_tmp3 = _construct_rangeBase(x6, x7, x8, x9, &this13);
  (&this12)->_base = wrap_call_tmp3;
  x10 = false;
  _ref_tmp_17 = &x10;
  *(_ref_tmp_17) = false;
  (&this12)->_aligned = x10;
  wrap_call_tmp4 = _construct_range(&wrap_call_tmp3, x10, &this12);
  _ic__F9_block_x1 = wrap_call_tmp4;
  call_tmp14 = &_ic__F9_block_x1;
  this10 = call_tmp18;
  chpl_check_nil((&this10)->addr, INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  chpl_macro_tmp_569.locale = (&this10)->locale;
  chpl_macro_tmp_569.addr = &(((&this10)->addr)->ranges);
  call_tmp19 = chpl_macro_tmp_569;
  chpl_macro_tmp_570.locale = (call_tmp19).locale;
  chpl_macro_tmp_570.addr = (*((call_tmp19).addr) + INT64(0));
  call_tmp15 = chpl_macro_tmp_570;
  chpl_macro_tmp_571.locale = (call_tmp15).locale;
  chpl_macro_tmp_571.addr = &(((call_tmp15).addr)->_base);
  call_tmp20 = chpl_macro_tmp_571;
  chpl_macro_tmp_572.locale = (call_tmp20).locale;
  chpl_macro_tmp_572.addr = &(((call_tmp20).addr)->_low);
  chpl_gen_comm_get(((void*)(&ret6)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_572).locale), INT64(0), NULL), (chpl_macro_tmp_572).addr, sizeof(int64_t), -1, INT64(1), INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  call_tmp21 = &((&_ic__F8__formal_tmp_followThis_x1)->_base);
  chpl_check_nil(call_tmp21, INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  ret7 = (call_tmp21)->_low;
  call_tmp22 = (ret6 + ret7);
  this11 = call_tmp18;
  chpl_check_nil((&this11)->addr, INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  chpl_macro_tmp_573.locale = (&this11)->locale;
  chpl_macro_tmp_573.addr = &(((&this11)->addr)->ranges);
  call_tmp23 = chpl_macro_tmp_573;
  chpl_macro_tmp_574.locale = (call_tmp23).locale;
  chpl_macro_tmp_574.addr = (*((call_tmp23).addr) + INT64(0));
  call_tmp16 = chpl_macro_tmp_574;
  chpl_macro_tmp_575.locale = (call_tmp16).locale;
  chpl_macro_tmp_575.addr = &(((call_tmp16).addr)->_base);
  call_tmp24 = chpl_macro_tmp_575;
  chpl_macro_tmp_576.locale = (call_tmp24).locale;
  chpl_macro_tmp_576.addr = &(((call_tmp24).addr)->_low);
  chpl_gen_comm_get(((void*)(&ret8)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_576).locale), INT64(0), NULL), (chpl_macro_tmp_576).addr, sizeof(int64_t), -1, INT64(1), INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  call_tmp25 = &((&_ic__F8__formal_tmp_followThis_x1)->_base);
  chpl_check_nil(call_tmp25, INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  ret9 = (call_tmp25)->_high;
  call_tmp26 = (ret8 + ret9);
  ret_to_arg_ref_tmp_3 = &call_tmp17;
  _build_range(call_tmp22, call_tmp26, ret_to_arg_ref_tmp_3);
  *(call_tmp14) = call_tmp17;
  _ic__F0_this3 = _ic__F9_block_x1;
  T2 = (&_ic__F0_this3)->_base;
  _ic__F0_this4 = T2;
  ret10 = (&_ic__F0_this4)->_low;
  _ic__F13_i = ret10;
  type_tmp2 = INT64(0);
  ret11 = (&_ic__F0_this4)->_low;
  ret12 = (&_ic__F0_this4)->_high;
  call_tmp27 = (ret11 > ret12);
  if (call_tmp27) {
    T3 = ret10;
  } else {
    ret13 = (&_ic__F0_this4)->_high;
    call_tmp28 = (ret13 + INT64(1));
    T3 = call_tmp28;
  }
  _ref_tmp_12 = &type_tmp2;
  *(_ref_tmp_12) = T3;
  _ic__F14_end = type_tmp2;
  call_tmp29 = (ret10 != type_tmp2);
  if (call_tmp29) {
    _ic__more = INT64(1);
  } else {
    _ic__more = INT64(0);
  }
  _cond = (_ic__more != INT64(0));
  T4 = ret5;
  chpl_check_nil((&T4)->addr, INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  chpl_macro_tmp_577.locale = (&T4)->locale;
  chpl_macro_tmp_577.addr = &(((&T4)->addr)->dom);
  chpl_gen_comm_get(((void*)(&call_tmp34)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_577).locale), INT64(0), NULL), (chpl_macro_tmp_577).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), -1, INT64(1), INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  ret_to_arg_ref_tmp_6 = &default_argoffset2;
  createTuple(INT64(0), ret_to_arg_ref_tmp_6);
  _ic__F8__formal_tmp_followThis_x12 = newRet_x1;
  (&_init_class_tmp_8)->_low = INT64(0);
  (&_init_class_tmp_8)->_high = INT64(0);
  (&_init_class_tmp_8)->_stride = INT64(0);
  (&_init_class_tmp_8)->_alignment = INT64(0);
  (&_init_class_tmp_7)->_base = _init_class_tmp_8;
  (&_init_class_tmp_7)->_aligned = false;
  (&_init_class_tmp_9)->_low = INT64(0);
  (&_init_class_tmp_9)->_high = INT64(0);
  (&_init_class_tmp_9)->_stride = INT64(0);
  (&_init_class_tmp_9)->_alignment = INT64(0);
  (&this16)->_base = _init_class_tmp_9;
  (&this16)->_aligned = false;
  (&this17)->_low = INT64(0);
  (&this17)->_high = INT64(0);
  (&this17)->_stride = INT64(0);
  (&this17)->_alignment = INT64(0);
  x11 = INT64(0);
  _ref_tmp_19 = &x11;
  *(_ref_tmp_19) = INT64(1);
  (&this17)->_low = x11;
  x12 = INT64(0);
  _ref_tmp_20 = &x12;
  *(_ref_tmp_20) = INT64(0);
  (&this17)->_high = x12;
  x13 = INT64(0);
  _ref_tmp_21 = &x13;
  *(_ref_tmp_21) = INT64(1);
  (&this17)->_stride = x13;
  x14 = INT64(0);
  _ref_tmp_22 = &x14;
  *(_ref_tmp_22) = INT64(0);
  (&this17)->_alignment = x14;
  wrap_call_tmp5 = _construct_rangeBase(x11, x12, x13, x14, &this17);
  (&this16)->_base = wrap_call_tmp5;
  x15 = false;
  _ref_tmp_23 = &x15;
  *(_ref_tmp_23) = false;
  (&this16)->_aligned = x15;
  wrap_call_tmp6 = _construct_range(&wrap_call_tmp5, x15, &this16);
  _ic__F9_block_x12 = wrap_call_tmp6;
  call_tmp30 = &_ic__F9_block_x12;
  this14 = call_tmp34;
  chpl_check_nil((&this14)->addr, INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  chpl_macro_tmp_578.locale = (&this14)->locale;
  chpl_macro_tmp_578.addr = &(((&this14)->addr)->ranges);
  call_tmp35 = chpl_macro_tmp_578;
  chpl_macro_tmp_579.locale = (call_tmp35).locale;
  chpl_macro_tmp_579.addr = (*((call_tmp35).addr) + INT64(0));
  call_tmp31 = chpl_macro_tmp_579;
  chpl_macro_tmp_580.locale = (call_tmp31).locale;
  chpl_macro_tmp_580.addr = &(((call_tmp31).addr)->_base);
  call_tmp36 = chpl_macro_tmp_580;
  chpl_macro_tmp_581.locale = (call_tmp36).locale;
  chpl_macro_tmp_581.addr = &(((call_tmp36).addr)->_low);
  chpl_gen_comm_get(((void*)(&ret14)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_581).locale), INT64(0), NULL), (chpl_macro_tmp_581).addr, sizeof(int64_t), -1, INT64(1), INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  call_tmp37 = &((&_ic__F8__formal_tmp_followThis_x12)->_base);
  chpl_check_nil(call_tmp37, INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  ret15 = (call_tmp37)->_low;
  call_tmp38 = (ret14 + ret15);
  this15 = call_tmp34;
  chpl_check_nil((&this15)->addr, INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  chpl_macro_tmp_582.locale = (&this15)->locale;
  chpl_macro_tmp_582.addr = &(((&this15)->addr)->ranges);
  call_tmp39 = chpl_macro_tmp_582;
  chpl_macro_tmp_583.locale = (call_tmp39).locale;
  chpl_macro_tmp_583.addr = (*((call_tmp39).addr) + INT64(0));
  call_tmp32 = chpl_macro_tmp_583;
  chpl_macro_tmp_584.locale = (call_tmp32).locale;
  chpl_macro_tmp_584.addr = &(((call_tmp32).addr)->_base);
  call_tmp40 = chpl_macro_tmp_584;
  chpl_macro_tmp_585.locale = (call_tmp40).locale;
  chpl_macro_tmp_585.addr = &(((call_tmp40).addr)->_low);
  chpl_gen_comm_get(((void*)(&ret16)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_585).locale), INT64(0), NULL), (chpl_macro_tmp_585).addr, sizeof(int64_t), -1, INT64(1), INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  call_tmp41 = &((&_ic__F8__formal_tmp_followThis_x12)->_base);
  chpl_check_nil(call_tmp41, INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  ret17 = (call_tmp41)->_high;
  call_tmp42 = (ret16 + ret17);
  ret_to_arg_ref_tmp_5 = &call_tmp33;
  _build_range(call_tmp38, call_tmp42, ret_to_arg_ref_tmp_5);
  *(call_tmp30) = call_tmp33;
  _ic__F0_this5 = _ic__F9_block_x12;
  T5 = (&_ic__F0_this5)->_base;
  _ic__F0_this6 = T5;
  ret18 = (&_ic__F0_this6)->_low;
  _ic__F13_i2 = ret18;
  type_tmp3 = INT64(0);
  ret19 = (&_ic__F0_this6)->_low;
  ret20 = (&_ic__F0_this6)->_high;
  call_tmp43 = (ret19 > ret20);
  if (call_tmp43) {
    T6 = ret18;
  } else {
    ret21 = (&_ic__F0_this6)->_high;
    call_tmp44 = (ret21 + INT64(1));
    T6 = call_tmp44;
  }
  _ref_tmp_18 = &type_tmp3;
  *(_ref_tmp_18) = T6;
  _ic__F14_end2 = type_tmp3;
  call_tmp45 = (ret18 != type_tmp3);
  if (call_tmp45) {
    _ic__more2 = INT64(1);
  } else {
    _ic__more2 = INT64(0);
  }
  _cond2 = (_ic__more2 != INT64(0));
  for (;_cond;) {
    T7 = _ic__F0_this2;
    *(this18 + INT64(0)) = _ic__F13_i2;
    *(ind + INT64(0)) = *(this18 + INT64(0));
    chpl_check_nil((&T7)->addr, INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    chpl_macro_tmp_586.locale = (&T7)->locale;
    chpl_macro_tmp_586.addr = &(((&T7)->addr)->dom);
    chpl_gen_comm_get(((void*)(&call_tmp46)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_586).locale), INT64(0), NULL), (chpl_macro_tmp_586).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), -1, INT64(1), INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    chpl_check_nil((&call_tmp46)->addr, INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    wrap_call_tmp7 = dsiMember2(&call_tmp46, &this18);
    call_tmp47 = (! wrap_call_tmp7);
    if (call_tmp47) {
      wide_string_from_c_string(&call_tmp48, "array index out of bounds: ", INT64(0), INT64(0), INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
      halt2(call_tmp48, &this18, INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    }
    sum = INT64(0);
    chpl_check_nil((&T7)->addr, INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    chpl_macro_tmp_587.locale = (&T7)->locale;
    chpl_macro_tmp_587.addr = &(((&T7)->addr)->blk);
    ret_ = chpl_macro_tmp_587;
    chpl_macro_tmp_588.locale = (ret_).locale;
    chpl_macro_tmp_588.addr = (*((ret_).addr) + INT64(0));
    chpl_gen_comm_get(((void*)(&ret_x1)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_588).locale), INT64(0), NULL), (chpl_macro_tmp_588).addr, sizeof(int64_t), -1, INT64(1), INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    call_tmp49 = *(ind + INT64(0));
    call_tmp50 = (call_tmp49 * ret_x1);
    _ref_tmp_24 = &sum;
    *(_ref_tmp_24) += call_tmp50;
    chpl_check_nil((&T7)->addr, INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    chpl_macro_tmp_589.locale = (&T7)->locale;
    chpl_macro_tmp_589.addr = &(((&T7)->addr)->shiftedData);
    chpl_gen_comm_get(((void*)(&call_tmp51)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_589).locale), INT64(0), NULL), (chpl_macro_tmp_589).addr, sizeof(chpl____wide__ddata_chpldev_Task), -1, INT64(1), INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    chpl_macro_tmp_590.locale = (&call_tmp51)->locale;
    chpl_macro_tmp_590.addr = ((&call_tmp51)->addr + sum);
    call_tmp52 = chpl_macro_tmp_590;
    hasMore = (_cond2 == INT64(0));
    if (hasMore) {
      chpl_error("zippered iterations have non-equal lengths", INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    }
    T8 = _ic__F0_this;
    *(this19 + INT64(0)) = _ic__F13_i;
    *(ind2 + INT64(0)) = *(this19 + INT64(0));
    chpl_check_nil((&T8)->addr, INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    chpl_macro_tmp_591.locale = (&T8)->locale;
    chpl_macro_tmp_591.addr = &(((&T8)->addr)->dom);
    chpl_gen_comm_get(((void*)(&call_tmp53)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_591).locale), INT64(0), NULL), (chpl_macro_tmp_591).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), -1, INT64(1), INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    chpl_check_nil((&call_tmp53)->addr, INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    wrap_call_tmp8 = dsiMember2(&call_tmp53, &this19);
    call_tmp54 = (! wrap_call_tmp8);
    if (call_tmp54) {
      wide_string_from_c_string(&call_tmp55, "array index out of bounds: ", INT64(0), INT64(0), INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
      halt2(call_tmp55, &this19, INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    }
    sum2 = INT64(0);
    chpl_check_nil((&T8)->addr, INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    chpl_macro_tmp_592.locale = (&T8)->locale;
    chpl_macro_tmp_592.addr = &(((&T8)->addr)->blk);
    ret_2 = chpl_macro_tmp_592;
    chpl_macro_tmp_593.locale = (ret_2).locale;
    chpl_macro_tmp_593.addr = (*((ret_2).addr) + INT64(0));
    chpl_gen_comm_get(((void*)(&ret_x12)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_593).locale), INT64(0), NULL), (chpl_macro_tmp_593).addr, sizeof(int64_t), -1, INT64(1), INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    call_tmp56 = *(ind2 + INT64(0));
    call_tmp57 = (call_tmp56 * ret_x12);
    _ref_tmp_25 = &sum2;
    *(_ref_tmp_25) += call_tmp57;
    chpl_check_nil((&T8)->addr, INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    chpl_macro_tmp_594.locale = (&T8)->locale;
    chpl_macro_tmp_594.addr = &(((&T8)->addr)->shiftedData);
    chpl_gen_comm_get(((void*)(&call_tmp58)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_594).locale), INT64(0), NULL), (chpl_macro_tmp_594).addr, sizeof(chpl____wide__ddata_chpldev_Task), -1, INT64(1), INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    chpl_macro_tmp_595.locale = (&call_tmp58)->locale;
    chpl_macro_tmp_595.addr = ((&call_tmp58)->addr + sum2);
    call_tmp59 = chpl_macro_tmp_595;
    chpl_gen_comm_get(((void*)(&call_tmp60)), chpl_nodeFromLocaleID(&((call_tmp52).locale), INT64(0), NULL), (call_tmp52).addr, sizeof(chpldev_Task), -1, INT64(1), INT64(1840), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    chpl___ASSIGN_5(&call_tmp59, &call_tmp60);
    call_tmp61 = (_ic__F13_i + INT64(1));
    _ref_tmp_26 = &_ic__F13_i;
    *(_ref_tmp_26) = call_tmp61;
    call_tmp62 = (_ic__F13_i != _ic__F14_end);
    if (call_tmp62) {
      _ic__more = INT64(1);
    } else {
      _ic__more = INT64(0);
    }
    _cond = (_ic__more != INT64(0));
    call_tmp63 = (_ic__F13_i2 + INT64(1));
    _ref_tmp_27 = &_ic__F13_i2;
    *(_ref_tmp_27) = call_tmp63;
    call_tmp64 = (_ic__F13_i2 != _ic__F14_end2);
    if (call_tmp64) {
      _ic__more2 = INT64(1);
    } else {
      _ic__more2 = INT64(0);
    }
    _cond2 = (_ic__more2 != INT64(0));
  }
  if (_cond2) {
    chpl_error("zippered iterations have non-equal lengths", INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  }
  _downEndCount(_coforallCount);
  return;
}

/* ChapelArray.chpl:313 */
static void chpl_incRefCountsForDomainsInArrayEltTypes(void) {
  compilerAssert();
  return;
}

/* ChapelArray.chpl:313 */
static void chpl_incRefCountsForDomainsInArrayEltTypes2(void) {
  compilerAssert();
  return;
}

/* ChapelArray.chpl:313 */
static void chpl_incRefCountsForDomainsInArrayEltTypes3(void) {
  compilerAssert();
  return;
}

/* ChapelArray.chpl:313 */
static void chpl_incRefCountsForDomainsInArrayEltTypes4(void) {
  compilerAssert();
  return;
}

/* ChapelArray.chpl:334 */
static void chpl_decRefCountsForDomainsInArrayEltTypes(void) {
  compilerAssert();
  return;
}

/* ChapelArray.chpl:334 */
static void chpl_decRefCountsForDomainsInArrayEltTypes2(void) {
  compilerAssert();
  return;
}

/* ChapelArray.chpl:334 */
static void chpl_decRefCountsForDomainsInArrayEltTypes3(void) {
  compilerAssert();
  return;
}

/* ChapelArray.chpl:334 */
static void chpl_decRefCountsForDomainsInArrayEltTypes4(void) {
  compilerAssert();
  return;
}

/* ChapelArray.chpl:358 */
static void chpl__buildDomainExpr(range_int64_t_bounded_F* const _e0_ranges, _ref_DefaultRectangularDom_1_int64_t_F _retArg) {
  _tuple_1_star_range_int64_t_bounded_F ranges;
  chpl____wide_DefaultRectangularDom_1_int64_t_F type_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl___RuntimeTypeInfo call_tmp;
  chpl____wide_DefaultDist _runtime_type_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  chpl____wide_DefaultRectangularDom_1_int64_t_F d = {CHPL_LOCALEID_T_INIT, NULL};
  *(ranges + INT64(0)) = *(_e0_ranges);
  call_tmp = chpl__buildDomainRuntimeType(&defaultDist);
  _runtime_type_tmp_ = (&call_tmp)->d;
  ret_to_arg_ref_tmp_ = &type_tmp;
  chpl__convertRuntimeTypeToValue(&_runtime_type_tmp_, ret_to_arg_ref_tmp_);
  d = type_tmp;
  chpl_check_nil((&type_tmp)->addr, INT64(366), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  setIndices(&type_tmp, &ranges);
  *(_retArg) = d;
  return;
}

/* ChapelArray.chpl:358 */
static void chpl__buildDomainExpr2(range_int64_t_bounded_F* const _e0_ranges, _ref_DefaultRectangularDom_1_int64_t_F _retArg) {
  _tuple_1_star_range_int64_t_bounded_F ranges;
  chpl____wide_DefaultRectangularDom_1_int64_t_F type_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl___RuntimeTypeInfo call_tmp;
  chpl____wide_DefaultDist _runtime_type_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  chpl____wide_DefaultRectangularDom_1_int64_t_F d = {CHPL_LOCALEID_T_INIT, NULL};
  *(ranges + INT64(0)) = *(_e0_ranges);
  call_tmp = chpl__buildDomainRuntimeType(&defaultDist);
  _runtime_type_tmp_ = (&call_tmp)->d;
  ret_to_arg_ref_tmp_ = &type_tmp;
  chpl__convertRuntimeTypeToValue(&_runtime_type_tmp_, ret_to_arg_ref_tmp_);
  d = type_tmp;
  chpl_check_nil((&type_tmp)->addr, INT64(366), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  setIndices(&type_tmp, &ranges);
  *(_retArg) = chpl__initCopy2(&d);
  chpl__autoDestroy2(&d);
  return;
}

/* ChapelArray.chpl:395 */
static void chpl__ensureDomainExpr(chpl____wide_DefaultRectangularDom_1_int64_t_F* const x, _ref_DefaultRectangularDom_1_int64_t_F _retArg) {
  *(_retArg) = chpl__autoCopy2(x);
  return;
}

/* ChapelArray.chpl:395 */
static void chpl__ensureDomainExpr2(chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F* const x, _ref_DefaultAssociativeDom_chpl_taskID_t_F _retArg) {
  *(_retArg) = chpl__autoCopy3(x);
  return;
}

/* ChapelArray.chpl:399 */
static void chpl__ensureDomainExpr3(range_int64_t_bounded_F* const _e0_x, _ref_DefaultRectangularDom_1_int64_t_F _retArg) {
  chpl____wide_DefaultRectangularDom_1_int64_t_F wrap_call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  ret_to_arg_ref_tmp_ = &wrap_call_tmp;
  chpl__buildDomainExpr(_e0_x, ret_to_arg_ref_tmp_);
  *(_retArg) = wrap_call_tmp;
  return;
}

/* ChapelArray.chpl:532 */
static void chpl__buildDistValue(DefaultDist x, _ref_DefaultDist _retArg) {
  chpl____wide_DefaultDist call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_DefaultDist ret_to_arg_ref_tmp_ = NULL;
  chpl____wide_DefaultDist T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultDist chpl_macro_tmp_596;
  ret_to_arg_ref_tmp_ = &call_tmp;
  chpl_macro_tmp_596.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_596.addr = x;
  T = chpl_macro_tmp_596;
  _newDistribution(&T, ret_to_arg_ref_tmp_);
  *(_retArg) = chpl__initCopy(&call_tmp);
  chpl__autoDestroy(&call_tmp);
  return;
}

/* ChapelArray.chpl:532 */
static void chpl__buildDistValue2(DefaultDist x, _ref_DefaultDist _retArg) {
  chpl____wide_DefaultDist call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_DefaultDist ret_to_arg_ref_tmp_ = NULL;
  chpl____wide_DefaultDist T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultDist chpl_macro_tmp_597;
  ret_to_arg_ref_tmp_ = &call_tmp;
  chpl_macro_tmp_597.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_597.addr = x;
  T = chpl_macro_tmp_597;
  _newDistribution(&T, ret_to_arg_ref_tmp_);
  *(_retArg) = call_tmp;
  return;
}

/* ChapelArray.chpl:544 */
static chpl____wide_DefaultDist _construct__distribution(chpl____wide_DefaultDist* const _value, chpl____wide_DefaultDist* const meme) {
  chpl____wide_DefaultDist this8 = {CHPL_LOCALEID_T_INIT, NULL};
  this8 = *(meme);
  this8 = *(_value);
  return this8;
}

/* ChapelArray.chpl:548 */
static chpl____wide_DefaultDist _distribution(chpl____wide_DefaultDist* const _value) {
  DefaultDist this8 = NULL;
  chpl____wide_DefaultDist this9 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultDist wrap_call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__nilType chpl_macro_tmp_598;
  chpl____wide_DefaultDist chpl_macro_tmp_599;
  chpl_macro_tmp_598.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_598.addr = nil;
  chpl_macro_tmp_599.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_599.addr = NULL;
  this9 = chpl_macro_tmp_599;
  this9 = *(_value);
  wrap_call_tmp = _construct__distribution(_value, &this9);
  return wrap_call_tmp;
}

/* ChapelArray.chpl:558 */
static void chpl___TILDE__distribution(chpl____wide_DefaultDist* const this8) {
  chpl____wide_DefaultDist ret = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp;
  _class_localson_fn11 _args_foron_fn = NULL;
  int64_t chpl_here_alloc_size;
  chpl_opaque chpl_here_alloc_tmp;
  ret = *(this8);
  call_tmp = (&ret)->locale;
  chpl_here_alloc_size = sizeof(chpl__class_localson_fn11_object);
  chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(36));
  _args_foron_fn = ((_class_localson_fn11)(chpl_here_alloc_tmp));
  chpl_check_nil(_args_foron_fn, INT64(561), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  (_args_foron_fn)->_0__tmp = call_tmp;
  chpl_check_nil(_args_foron_fn, INT64(561), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  (_args_foron_fn)->_1_this = *(this8);
  /*** wrapon_fn11 ***/ chpl_executeOn(&call_tmp, INT32(12), _args_foron_fn, sizeof(chpl__class_localson_fn11_object), INT64(561), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  chpl_here_free(((void*)(_args_foron_fn)));
  return;
}

/* ChapelArray.chpl:561 */
static void on_fn11(chpl____wide_DefaultDist* const this8) {
  chpl____wide_DefaultDist ret = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t wrap_call_tmp;
  chpl____wide_BaseDist call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp2;
  chpl____wide_DefaultDist ret2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDist call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultDist ret3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDist _parent_destructor_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomicflag _field_destructor_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_flag call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomic_flag T = NULL;
  chpl____wide__ref_atomic_refcnt _field_destructor_tmp_2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int64 _field_destructor_tmp_3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int_least64_t call_tmp5 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomic_int_least64_t T2 = NULL;
  chpl_localeID_t call_tmp6;
  chpl____wide_DefaultDist rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn12 _args_foron_fn = NULL;
  int64_t chpl_here_alloc_size;
  chpl_opaque chpl_here_alloc_tmp;
  chpl____wide_BaseDist chpl_macro_tmp_600;
  chpl____wide_BaseDist chpl_macro_tmp_601;
  chpl____wide_BaseDist chpl_macro_tmp_602;
  chpl____wide__ref_atomicflag chpl_macro_tmp_603;
  chpl____wide__ref_atomic_flag chpl_macro_tmp_604;
  chpl____wide__ref_atomic_flag chpl_macro_tmp_605;
  chpl____wide__ref_atomic_refcnt chpl_macro_tmp_606;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_607;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_608;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_609;
  ret = *(this8);
  chpl_macro_tmp_600.locale = (&ret)->locale;
  chpl_macro_tmp_600.addr = ((BaseDist)((&ret)->addr));
  call_tmp = chpl_macro_tmp_600;
  chpl_check_nil((&call_tmp)->addr, INT64(562), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  wrap_call_tmp = destroyDist(&call_tmp);
  call_tmp2 = (wrap_call_tmp == INT64(0));
  if (call_tmp2) {
    ret2 = *(this8);
    chpl_macro_tmp_601.locale = (&ret2)->locale;
    chpl_macro_tmp_601.addr = ((BaseDist)((&ret2)->addr));
    call_tmp3 = chpl_macro_tmp_601;
    chpl_check_nil((&call_tmp3)->addr, INT64(564), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    dsiDestroyDistClass(&call_tmp3);
    ret3 = *(this8);
    chpl_macro_tmp_602.locale = (&ret3)->locale;
    chpl_macro_tmp_602.addr = ((BaseDist)((&ret3)->addr));
    _parent_destructor_tmp_ = chpl_macro_tmp_602;
    chpl_check_nil((&_parent_destructor_tmp_)->addr, INT64(565), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    chpl_macro_tmp_603.locale = (&_parent_destructor_tmp_)->locale;
    chpl_macro_tmp_603.addr = &(((&_parent_destructor_tmp_)->addr)->_domsLock);
    _field_destructor_tmp_ = chpl_macro_tmp_603;
    chpl_macro_tmp_604.locale = (_field_destructor_tmp_).locale;
    chpl_macro_tmp_604.addr = &(((_field_destructor_tmp_).addr)->_v);
    call_tmp4 = chpl_macro_tmp_604;
    T = (&call_tmp4)->addr;
    atomic_destroy_flag(T);
    chpl_macro_tmp_605.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_605.addr = T;
    call_tmp4 = chpl_macro_tmp_605;
    chpl_check_nil((&_parent_destructor_tmp_)->addr, INT64(565), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    chpl_macro_tmp_606.locale = (&_parent_destructor_tmp_)->locale;
    chpl_macro_tmp_606.addr = &(((&_parent_destructor_tmp_)->addr)->_distCnt);
    _field_destructor_tmp_2 = chpl_macro_tmp_606;
    chpl_macro_tmp_607.locale = (_field_destructor_tmp_2).locale;
    chpl_macro_tmp_607.addr = &(((_field_destructor_tmp_2).addr)->_cnt);
    _field_destructor_tmp_3 = chpl_macro_tmp_607;
    chpl_macro_tmp_608.locale = (_field_destructor_tmp_3).locale;
    chpl_macro_tmp_608.addr = &(((_field_destructor_tmp_3).addr)->_v);
    call_tmp5 = chpl_macro_tmp_608;
    T2 = (&call_tmp5)->addr;
    atomic_destroy_int_least64_t(T2);
    chpl_macro_tmp_609.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_609.addr = T2;
    call_tmp5 = chpl_macro_tmp_609;
    call_tmp6 = (&ret3)->locale;
    rvfDerefTmp = ret3;
    chpl_here_alloc_size = sizeof(chpl__class_localson_fn12_object);
    chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(36));
    _args_foron_fn = ((_class_localson_fn12)(chpl_here_alloc_tmp));
    chpl_check_nil(_args_foron_fn, INT64(565), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    (_args_foron_fn)->_0__tmp = call_tmp6;
    chpl_check_nil(_args_foron_fn, INT64(565), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    (_args_foron_fn)->_1_rvfDerefTmp = rvfDerefTmp;
    /*** wrapon_fn12 ***/ chpl_executeOn(&call_tmp6, INT32(13), _args_foron_fn, sizeof(chpl__class_localson_fn12_object), INT64(565), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    chpl_here_free(((void*)(_args_foron_fn)));
  }
  return;
}

/* ChapelArray.chpl:561 */
static void wrapon_fn11(_class_localson_fn11 c) {
  chpl____wide_DefaultDist _1_this = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_check_nil(c, INT64(561), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  _1_this = (c)->_1_this;
  on_fn11(&_1_this);
  return;
}

/* ChapelArray.chpl:565 */
static void on_fn12(chpl____wide_DefaultDist* const delete_tmp) {
  chpl_opaque call_tmp;
  call_tmp = ((void*)((delete_tmp)->addr));
  chpl_here_free(call_tmp);
  return;
}

/* ChapelArray.chpl:565 */
static void wrapon_fn12(_class_localson_fn12 c) {
  chpl____wide_DefaultDist _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_check_nil(c, INT64(565), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn12(&_1_rvfDerefTmp);
  return;
}

/* ChapelArray.chpl:572 */
static void clone2(chpl____wide_DefaultDist* const this8, _ref_DefaultDist _retArg) {
  chpl____wide_DefaultDist ret = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultDist call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultDist call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_DefaultDist ret_to_arg_ref_tmp_ = NULL;
  ret = *(this8);
  chpl_check_nil((&ret)->addr, INT64(573), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  call_tmp = dsiClone(&ret);
  ret_to_arg_ref_tmp_ = &call_tmp2;
  _newDistribution(&call_tmp, ret_to_arg_ref_tmp_);
  *(_retArg) = call_tmp2;
  return;
}

/* ChapelArray.chpl:576 */
static DefaultRectangularDom_1_int64_t_F newRectangularDom(chpl____wide_DefaultDist* const this8) {
  chpl____wide_DefaultDist ret = {CHPL_LOCALEID_T_INIT, NULL};
  DefaultRectangularDom_1_int64_t_F call_tmp = NULL;
  ret = *(this8);
  chpl_check_nil((&ret)->addr, INT64(577), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  call_tmp = dsiNewRectangularDom(&ret);
  return call_tmp;
}

/* ChapelArray.chpl:586 */
static DefaultAssociativeDom_chpl_taskID_t_F newAssociativeDom(chpl____wide_DefaultDist* const this8) {
  chpl____wide_DefaultDist ret = {CHPL_LOCALEID_T_INIT, NULL};
  DefaultAssociativeDom_chpl_taskID_t_F call_tmp = NULL;
  ret = *(this8);
  chpl_check_nil((&ret)->addr, INT64(587), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  call_tmp = dsiNewAssociativeDom(&ret);
  return call_tmp;
}

/* ChapelArray.chpl:645 */
static chpl____wide_DefaultRectangularDom_1_int64_t_F _construct__domain(chpl____wide_DefaultRectangularDom_1_int64_t_F* const _value, chpl____wide_DefaultRectangularDom_1_int64_t_F* const meme) {
  chpl____wide_DefaultRectangularDom_1_int64_t_F this8 = {CHPL_LOCALEID_T_INIT, NULL};
  this8 = *(meme);
  this8 = *(_value);
  return this8;
}

/* ChapelArray.chpl:645 */
static DefaultAssociativeDom_chpl_taskID_t_F _construct__domain2(DefaultAssociativeDom_chpl_taskID_t_F _value, DefaultAssociativeDom_chpl_taskID_t_F meme) {
  DefaultAssociativeDom_chpl_taskID_t_F this8 = NULL;
  this8 = meme;
  this8 = _value;
  return this8;
}

/* ChapelArray.chpl:658 */
static void chpl___TILDE__domain(chpl____wide_DefaultRectangularDom_1_int64_t_F* const this8) {
  chpl____wide_DefaultRectangularDom_1_int64_t_F ret = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp;
  _class_localson_fn13 _args_foron_fn = NULL;
  int64_t chpl_here_alloc_size;
  chpl_opaque chpl_here_alloc_tmp;
  ret = *(this8);
  call_tmp = (&ret)->locale;
  chpl_here_alloc_size = sizeof(chpl__class_localson_fn13_object);
  chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(36));
  _args_foron_fn = ((_class_localson_fn13)(chpl_here_alloc_tmp));
  chpl_check_nil(_args_foron_fn, INT64(661), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  (_args_foron_fn)->_0__tmp = call_tmp;
  chpl_check_nil(_args_foron_fn, INT64(661), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  (_args_foron_fn)->_1_this = *(this8);
  /*** wrapon_fn13 ***/ chpl_executeOn(&call_tmp, INT32(14), _args_foron_fn, sizeof(chpl__class_localson_fn13_object), INT64(661), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  chpl_here_free(((void*)(_args_foron_fn)));
  return;
}

/* ChapelArray.chpl:658 */
static void chpl___TILDE__domain2(chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F* const this8) {
  chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F ret = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp;
  _class_localson_fn14 _args_foron_fn = NULL;
  int64_t chpl_here_alloc_size;
  chpl_opaque chpl_here_alloc_tmp;
  ret = *(this8);
  call_tmp = (&ret)->locale;
  chpl_here_alloc_size = sizeof(chpl__class_localson_fn14_object);
  chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(36));
  _args_foron_fn = ((_class_localson_fn14)(chpl_here_alloc_tmp));
  chpl_check_nil(_args_foron_fn, INT64(661), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  (_args_foron_fn)->_0__tmp = call_tmp;
  chpl_check_nil(_args_foron_fn, INT64(661), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  (_args_foron_fn)->_1_this = *(this8);
  /*** wrapon_fn14 ***/ chpl_executeOn(&call_tmp, INT32(15), _args_foron_fn, sizeof(chpl__class_localson_fn14_object), INT64(661), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  chpl_here_free(((void*)(_args_foron_fn)));
  return;
}

/* ChapelArray.chpl:661 */
static void on_fn13(chpl____wide_DefaultRectangularDom_1_int64_t_F* const this8) {
  chpl____wide_DefaultRectangularDom_1_int64_t_F ret = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t wrap_call_tmp;
  chpl____wide_BaseDom call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp2;
  chpl____wide_DefaultRectangularDom_1_int64_t_F ret2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseRectangularDom _parent_destructor_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDom _parent_destructor_tmp_2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomicflag _field_destructor_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_flag call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomic_flag T = NULL;
  chpl____wide__ref_atomic_refcnt _field_destructor_tmp_2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int64 _field_destructor_tmp_3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int_least64_t call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomic_int_least64_t T2 = NULL;
  chpl_localeID_t call_tmp5;
  chpl____wide_DefaultRectangularDom_1_int64_t_F rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn15 _args_foron_fn = NULL;
  int64_t chpl_here_alloc_size;
  chpl_opaque chpl_here_alloc_tmp;
  chpl____wide_BaseDom chpl_macro_tmp_610;
  chpl____wide_BaseRectangularDom chpl_macro_tmp_611;
  chpl____wide_BaseDom chpl_macro_tmp_612;
  chpl____wide__ref_atomicflag chpl_macro_tmp_613;
  chpl____wide__ref_atomic_flag chpl_macro_tmp_614;
  chpl____wide__ref_atomic_flag chpl_macro_tmp_615;
  chpl____wide__ref_atomic_refcnt chpl_macro_tmp_616;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_617;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_618;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_619;
  ret = *(this8);
  chpl_macro_tmp_610.locale = (&ret)->locale;
  chpl_macro_tmp_610.addr = ((BaseDom)((&ret)->addr));
  call_tmp = chpl_macro_tmp_610;
  chpl_check_nil((&call_tmp)->addr, INT64(662), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  wrap_call_tmp = destroyDom(&call_tmp);
  call_tmp2 = (wrap_call_tmp == INT64(0));
  if (call_tmp2) {
    ret2 = *(this8);
    chpl_macro_tmp_611.locale = (&ret2)->locale;
    chpl_macro_tmp_611.addr = ((BaseRectangularDom)((&ret2)->addr));
    _parent_destructor_tmp_ = chpl_macro_tmp_611;
    chpl_macro_tmp_612.locale = (&_parent_destructor_tmp_)->locale;
    chpl_macro_tmp_612.addr = ((BaseDom)((&_parent_destructor_tmp_)->addr));
    _parent_destructor_tmp_2 = chpl_macro_tmp_612;
    chpl_check_nil((&_parent_destructor_tmp_2)->addr, INT64(664), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    chpl_macro_tmp_613.locale = (&_parent_destructor_tmp_2)->locale;
    chpl_macro_tmp_613.addr = &(((&_parent_destructor_tmp_2)->addr)->_arrsLock);
    _field_destructor_tmp_ = chpl_macro_tmp_613;
    chpl_macro_tmp_614.locale = (_field_destructor_tmp_).locale;
    chpl_macro_tmp_614.addr = &(((_field_destructor_tmp_).addr)->_v);
    call_tmp3 = chpl_macro_tmp_614;
    T = (&call_tmp3)->addr;
    atomic_destroy_flag(T);
    chpl_macro_tmp_615.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_615.addr = T;
    call_tmp3 = chpl_macro_tmp_615;
    chpl_check_nil((&_parent_destructor_tmp_2)->addr, INT64(664), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    chpl_macro_tmp_616.locale = (&_parent_destructor_tmp_2)->locale;
    chpl_macro_tmp_616.addr = &(((&_parent_destructor_tmp_2)->addr)->_domCnt);
    _field_destructor_tmp_2 = chpl_macro_tmp_616;
    chpl_macro_tmp_617.locale = (_field_destructor_tmp_2).locale;
    chpl_macro_tmp_617.addr = &(((_field_destructor_tmp_2).addr)->_cnt);
    _field_destructor_tmp_3 = chpl_macro_tmp_617;
    chpl_macro_tmp_618.locale = (_field_destructor_tmp_3).locale;
    chpl_macro_tmp_618.addr = &(((_field_destructor_tmp_3).addr)->_v);
    call_tmp4 = chpl_macro_tmp_618;
    T2 = (&call_tmp4)->addr;
    atomic_destroy_int_least64_t(T2);
    chpl_macro_tmp_619.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_619.addr = T2;
    call_tmp4 = chpl_macro_tmp_619;
    call_tmp5 = (&ret2)->locale;
    rvfDerefTmp = ret2;
    chpl_here_alloc_size = sizeof(chpl__class_localson_fn15_object);
    chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(36));
    _args_foron_fn = ((_class_localson_fn15)(chpl_here_alloc_tmp));
    chpl_check_nil(_args_foron_fn, INT64(664), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    (_args_foron_fn)->_0__tmp = call_tmp5;
    chpl_check_nil(_args_foron_fn, INT64(664), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    (_args_foron_fn)->_1_rvfDerefTmp = rvfDerefTmp;
    /*** wrapon_fn15 ***/ chpl_executeOn(&call_tmp5, INT32(16), _args_foron_fn, sizeof(chpl__class_localson_fn15_object), INT64(664), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    chpl_here_free(((void*)(_args_foron_fn)));
  }
  return;
}

/* ChapelArray.chpl:661 */
static void on_fn14(chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F* const this8) {
  chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F ret = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t wrap_call_tmp;
  chpl____wide_BaseDom call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp2;
  chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F delete_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F ret2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F _field_destructor_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F _field_destructor_tmp_2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomicflag _field_destructor_tmp_3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_flag call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomic_flag T = NULL;
  chpl____wide__ref_atomic_int64 _field_destructor_tmp_4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int_least64_t call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomic_int_least64_t T2 = NULL;
  chpl____wide_BaseAssociativeDom _parent_destructor_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDom _parent_destructor_tmp_2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomicflag _field_destructor_tmp_5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_flag call_tmp5 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomic_flag T3 = NULL;
  chpl____wide__ref_atomic_refcnt _field_destructor_tmp_6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int64 _field_destructor_tmp_7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int_least64_t call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomic_int_least64_t T4 = NULL;
  chpl_localeID_t call_tmp7;
  chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn16 _args_foron_fn = NULL;
  int64_t chpl_here_alloc_size;
  chpl_opaque chpl_here_alloc_tmp;
  chpl____wide_BaseDom chpl_macro_tmp_620;
  chpl____wide__ref_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F chpl_macro_tmp_621;
  chpl____wide__ref_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_622;
  chpl____wide__ref_atomicflag chpl_macro_tmp_623;
  chpl____wide__ref_atomic_flag chpl_macro_tmp_624;
  chpl____wide__ref_atomic_flag chpl_macro_tmp_625;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_626;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_627;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_628;
  chpl____wide_BaseAssociativeDom chpl_macro_tmp_629;
  chpl____wide_BaseDom chpl_macro_tmp_630;
  chpl____wide__ref_atomicflag chpl_macro_tmp_631;
  chpl____wide__ref_atomic_flag chpl_macro_tmp_632;
  chpl____wide__ref_atomic_flag chpl_macro_tmp_633;
  chpl____wide__ref_atomic_refcnt chpl_macro_tmp_634;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_635;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_636;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_637;
  ret = *(this8);
  chpl_macro_tmp_620.locale = (&ret)->locale;
  chpl_macro_tmp_620.addr = ((BaseDom)((&ret)->addr));
  call_tmp = chpl_macro_tmp_620;
  chpl_check_nil((&call_tmp)->addr, INT64(662), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  wrap_call_tmp = destroyDom(&call_tmp);
  call_tmp2 = (wrap_call_tmp == INT64(0));
  if (call_tmp2) {
    ret2 = *(this8);
    delete_tmp = ret2;
    chpl_check_nil((&delete_tmp)->addr, INT64(664), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    chpl_macro_tmp_621.locale = (&delete_tmp)->locale;
    chpl_macro_tmp_621.addr = &(((&delete_tmp)->addr)->table);
    chpl_gen_comm_get(((void*)(&_field_destructor_tmp_)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_621).locale), INT64(0), NULL), (chpl_macro_tmp_621).addr, sizeof(chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F), -1, INT64(1), INT64(664), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    chpl__autoDestroy6(&_field_destructor_tmp_);
    chpl_check_nil((&delete_tmp)->addr, INT64(664), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    chpl_macro_tmp_622.locale = (&delete_tmp)->locale;
    chpl_macro_tmp_622.addr = &(((&delete_tmp)->addr)->tableDom);
    chpl_gen_comm_get(((void*)(&_field_destructor_tmp_2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_622).locale), INT64(0), NULL), (chpl_macro_tmp_622).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), -1, INT64(1), INT64(664), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    chpl__autoDestroy2(&_field_destructor_tmp_2);
    chpl_check_nil((&delete_tmp)->addr, INT64(664), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    chpl_macro_tmp_623.locale = (&delete_tmp)->locale;
    chpl_macro_tmp_623.addr = &(((&delete_tmp)->addr)->tableLock);
    _field_destructor_tmp_3 = chpl_macro_tmp_623;
    chpl_macro_tmp_624.locale = (_field_destructor_tmp_3).locale;
    chpl_macro_tmp_624.addr = &(((_field_destructor_tmp_3).addr)->_v);
    call_tmp3 = chpl_macro_tmp_624;
    T = (&call_tmp3)->addr;
    atomic_destroy_flag(T);
    chpl_macro_tmp_625.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_625.addr = T;
    call_tmp3 = chpl_macro_tmp_625;
    chpl_check_nil((&delete_tmp)->addr, INT64(664), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    chpl_macro_tmp_626.locale = (&delete_tmp)->locale;
    chpl_macro_tmp_626.addr = &(((&delete_tmp)->addr)->numEntries);
    _field_destructor_tmp_4 = chpl_macro_tmp_626;
    chpl_macro_tmp_627.locale = (_field_destructor_tmp_4).locale;
    chpl_macro_tmp_627.addr = &(((_field_destructor_tmp_4).addr)->_v);
    call_tmp4 = chpl_macro_tmp_627;
    T2 = (&call_tmp4)->addr;
    atomic_destroy_int_least64_t(T2);
    chpl_macro_tmp_628.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_628.addr = T2;
    call_tmp4 = chpl_macro_tmp_628;
    chpl_macro_tmp_629.locale = (&delete_tmp)->locale;
    chpl_macro_tmp_629.addr = ((BaseAssociativeDom)((&delete_tmp)->addr));
    _parent_destructor_tmp_ = chpl_macro_tmp_629;
    chpl_macro_tmp_630.locale = (&_parent_destructor_tmp_)->locale;
    chpl_macro_tmp_630.addr = ((BaseDom)((&_parent_destructor_tmp_)->addr));
    _parent_destructor_tmp_2 = chpl_macro_tmp_630;
    chpl_check_nil((&_parent_destructor_tmp_2)->addr, INT64(664), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    chpl_macro_tmp_631.locale = (&_parent_destructor_tmp_2)->locale;
    chpl_macro_tmp_631.addr = &(((&_parent_destructor_tmp_2)->addr)->_arrsLock);
    _field_destructor_tmp_5 = chpl_macro_tmp_631;
    chpl_macro_tmp_632.locale = (_field_destructor_tmp_5).locale;
    chpl_macro_tmp_632.addr = &(((_field_destructor_tmp_5).addr)->_v);
    call_tmp5 = chpl_macro_tmp_632;
    T3 = (&call_tmp5)->addr;
    atomic_destroy_flag(T3);
    chpl_macro_tmp_633.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_633.addr = T3;
    call_tmp5 = chpl_macro_tmp_633;
    chpl_check_nil((&_parent_destructor_tmp_2)->addr, INT64(664), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    chpl_macro_tmp_634.locale = (&_parent_destructor_tmp_2)->locale;
    chpl_macro_tmp_634.addr = &(((&_parent_destructor_tmp_2)->addr)->_domCnt);
    _field_destructor_tmp_6 = chpl_macro_tmp_634;
    chpl_macro_tmp_635.locale = (_field_destructor_tmp_6).locale;
    chpl_macro_tmp_635.addr = &(((_field_destructor_tmp_6).addr)->_cnt);
    _field_destructor_tmp_7 = chpl_macro_tmp_635;
    chpl_macro_tmp_636.locale = (_field_destructor_tmp_7).locale;
    chpl_macro_tmp_636.addr = &(((_field_destructor_tmp_7).addr)->_v);
    call_tmp6 = chpl_macro_tmp_636;
    T4 = (&call_tmp6)->addr;
    atomic_destroy_int_least64_t(T4);
    chpl_macro_tmp_637.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_637.addr = T4;
    call_tmp6 = chpl_macro_tmp_637;
    call_tmp7 = (&delete_tmp)->locale;
    rvfDerefTmp = delete_tmp;
    chpl_here_alloc_size = sizeof(chpl__class_localson_fn16_object);
    chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(36));
    _args_foron_fn = ((_class_localson_fn16)(chpl_here_alloc_tmp));
    chpl_check_nil(_args_foron_fn, INT64(664), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    (_args_foron_fn)->_0__tmp = call_tmp7;
    chpl_check_nil(_args_foron_fn, INT64(664), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    (_args_foron_fn)->_1_rvfDerefTmp = rvfDerefTmp;
    /*** wrapon_fn16 ***/ chpl_executeOn(&call_tmp7, INT32(17), _args_foron_fn, sizeof(chpl__class_localson_fn16_object), INT64(664), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    chpl_here_free(((void*)(_args_foron_fn)));
  }
  return;
}

/* ChapelArray.chpl:661 */
static void wrapon_fn13(_class_localson_fn13 c) {
  chpl____wide_DefaultRectangularDom_1_int64_t_F _1_this = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_check_nil(c, INT64(661), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  _1_this = (c)->_1_this;
  on_fn13(&_1_this);
  return;
}

/* ChapelArray.chpl:661 */
static void wrapon_fn14(_class_localson_fn14 c) {
  chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F _1_this = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_check_nil(c, INT64(661), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  _1_this = (c)->_1_this;
  on_fn14(&_1_this);
  return;
}

/* ChapelArray.chpl:664 */
static void on_fn15(chpl____wide_DefaultRectangularDom_1_int64_t_F* const delete_tmp) {
  chpl_opaque call_tmp;
  call_tmp = ((void*)((delete_tmp)->addr));
  chpl_here_free(call_tmp);
  return;
}

/* ChapelArray.chpl:664 */
static void on_fn16(chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F* const delete_tmp) {
  chpl_opaque call_tmp;
  call_tmp = ((void*)((delete_tmp)->addr));
  chpl_here_free(call_tmp);
  return;
}

/* ChapelArray.chpl:664 */
static void wrapon_fn15(_class_localson_fn15 c) {
  chpl____wide_DefaultRectangularDom_1_int64_t_F _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_check_nil(c, INT64(664), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn15(&_1_rvfDerefTmp);
  return;
}

/* ChapelArray.chpl:664 */
static void wrapon_fn16(_class_localson_fn16 c) {
  chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_check_nil(c, INT64(664), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn16(&_1_rvfDerefTmp);
  return;
}

/* ChapelArray.chpl:670 */
static void dist(chpl____wide_DefaultRectangularDom_1_int64_t_F* const this8, _ref_DefaultDist _retArg) {
  chpl____wide_DefaultRectangularDom_1_int64_t_F call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F ret = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultDist ret2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultDist wrap_call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_DefaultDist ret_to_arg_ref_tmp_ = NULL;
  chpl____wide__ref_DefaultDist chpl_macro_tmp_638;
  ret = *(this8);
  call_tmp = ret;
  chpl_check_nil((&call_tmp)->addr, INT64(670), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  chpl_macro_tmp_638.locale = (&call_tmp)->locale;
  chpl_macro_tmp_638.addr = &(((&call_tmp)->addr)->dist);
  chpl_gen_comm_get(((void*)(&ret2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_638).locale), INT64(0), NULL), (chpl_macro_tmp_638).addr, sizeof(chpl____wide_DefaultDist), -1, INT64(1), INT64(670), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  ret_to_arg_ref_tmp_ = &wrap_call_tmp;
  _getDistribution(&ret2, ret_to_arg_ref_tmp_);
  *(_retArg) = wrap_call_tmp;
  return;
}

/* ChapelArray.chpl:718 */
static void this2(chpl____wide_DefaultRectangularDom_1_int64_t_F* const this8, range_int64_t_bounded_F* const _e0_ranges, _ref_DefaultRectangularDom_1_int64_t_F _retArg) {
  range_int64_t_bounded_F _init_class_tmp_;
  rangeBase_int64_t_bounded_F _init_class_tmp_2;
  range_int64_t_bounded_F this9;
  rangeBase_int64_t_bounded_F _init_class_tmp_3;
  rangeBase_int64_t_bounded_F this10;
  int64_t x;
  _ref_int64_t _ref_tmp_ = NULL;
  int64_t x2;
  _ref_int64_t _ref_tmp_2 = NULL;
  int64_t x3;
  _ref_int64_t _ref_tmp_3 = NULL;
  int64_t x4;
  _ref_int64_t _ref_tmp_4 = NULL;
  rangeBase_int64_t_bounded_F wrap_call_tmp;
  chpl_bool x5;
  _ref_chpl_bool _ref_tmp_5 = NULL;
  range_int64_t_bounded_F wrap_call_tmp2;
  _tuple_1_star_range_int64_t_bounded_F r;
  chpl____wide__ref_range_int64_t_bounded_F call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F ret = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F call_tmp2;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
  _ref_range_int64_t_bounded_F _ref_tmp_6 = NULL;
  range_int64_t_bounded_F wrap_call_tmp3;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_2 = NULL;
  chpl____wide_DefaultRectangularDom_1_int64_t_F ret2 = {CHPL_LOCALEID_T_INIT, NULL};
  DefaultRectangularDom_1_int64_t_F call_tmp3 = NULL;
  chpl____wide_DefaultRectangularDom_1_int64_t_F call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_3 = NULL;
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_639;
  (&_init_class_tmp_2)->_low = INT64(0);
  (&_init_class_tmp_2)->_high = INT64(0);
  (&_init_class_tmp_2)->_stride = INT64(0);
  (&_init_class_tmp_2)->_alignment = INT64(0);
  (&_init_class_tmp_)->_base = _init_class_tmp_2;
  (&_init_class_tmp_)->_aligned = false;
  (&_init_class_tmp_3)->_low = INT64(0);
  (&_init_class_tmp_3)->_high = INT64(0);
  (&_init_class_tmp_3)->_stride = INT64(0);
  (&_init_class_tmp_3)->_alignment = INT64(0);
  (&this9)->_base = _init_class_tmp_3;
  (&this9)->_aligned = false;
  (&this10)->_low = INT64(0);
  (&this10)->_high = INT64(0);
  (&this10)->_stride = INT64(0);
  (&this10)->_alignment = INT64(0);
  x = INT64(0);
  _ref_tmp_ = &x;
  *(_ref_tmp_) = INT64(1);
  (&this10)->_low = x;
  x2 = INT64(0);
  _ref_tmp_2 = &x2;
  *(_ref_tmp_2) = INT64(0);
  (&this10)->_high = x2;
  x3 = INT64(0);
  _ref_tmp_3 = &x3;
  *(_ref_tmp_3) = INT64(1);
  (&this10)->_stride = x3;
  x4 = INT64(0);
  _ref_tmp_4 = &x4;
  *(_ref_tmp_4) = INT64(0);
  (&this10)->_alignment = x4;
  wrap_call_tmp = _construct_rangeBase(x, x2, x3, x4, &this10);
  (&this9)->_base = wrap_call_tmp;
  x5 = false;
  _ref_tmp_5 = &x5;
  *(_ref_tmp_5) = false;
  (&this9)->_aligned = x5;
  wrap_call_tmp2 = _construct_range(&wrap_call_tmp, x5, &this9);
  *(r + INT64(0)) = wrap_call_tmp2;
  chpl_macro_tmp_639.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_639.addr = (r + INT64(0));
  call_tmp = chpl_macro_tmp_639;
  ret = *(this8);
  ret_to_arg_ref_tmp_ = &call_tmp2;
  chpl_check_nil((&ret)->addr, INT64(725), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  dsiDim(&ret, ret_to_arg_ref_tmp_);
  _ref_tmp_6 = &call_tmp2;
  ret_to_arg_ref_tmp_2 = &wrap_call_tmp3;
  this3(_ref_tmp_6, _e0_ranges, ret_to_arg_ref_tmp_2);
  chpl_gen_comm_put(((void*)(&wrap_call_tmp3)), chpl_nodeFromLocaleID(&((call_tmp).locale), INT64(0), NULL), (call_tmp).addr, sizeof(range_int64_t_bounded_F), -1, INT64(1), INT64(725), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  ret2 = *(this8);
  chpl_check_nil((&ret2)->addr, INT64(727), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  call_tmp3 = dsiBuildRectangularDom(&ret2, &r);
  ret_to_arg_ref_tmp_3 = &call_tmp4;
  _newDomain(call_tmp3, ret_to_arg_ref_tmp_3);
  *(_retArg) = call_tmp4;
  return;
}

/* ChapelArray.chpl:779 */
static void buildArray(chpl____wide_DefaultRectangularDom_1_int64_t_F* const this8, _ref_DefaultRectangularArr_locale_1_int64_t_F _retArg) {
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F x = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F ret = {CHPL_LOCALEID_T_INIT, NULL};
  DefaultRectangularArr_locale_1_int64_t_F call_tmp = NULL;
  _ref_DefaultRectangularArr_locale_1_int64_t_F T = NULL;
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_DefaultRectangularArr_locale_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F chpl_macro_tmp_640;
  ret = *(this8);
  chpl_check_nil((&ret)->addr, INT64(780), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  call_tmp = dsiBuildArray2(&ret);
  chpl_macro_tmp_640.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_640.addr = call_tmp;
  x = chpl_macro_tmp_640;
  T = &x;
  help(this8, T);
  ret_to_arg_ref_tmp_ = &call_tmp2;
  _newArray(&x, ret_to_arg_ref_tmp_);
  *(_retArg) = call_tmp2;
  return;
}

/* ChapelArray.chpl:779 */
static void buildArray2(chpl____wide_DefaultRectangularDom_1_int64_t_F* const this8, _ref_DefaultRectangularArr_localesSignal_1_int64_t_F _retArg) {
  chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F x = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F ret = {CHPL_LOCALEID_T_INIT, NULL};
  DefaultRectangularArr_localesSignal_1_int64_t_F call_tmp = NULL;
  _ref_DefaultRectangularArr_localesSignal_1_int64_t_F T = NULL;
  chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_DefaultRectangularArr_localesSignal_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F chpl_macro_tmp_641;
  ret = *(this8);
  chpl_check_nil((&ret)->addr, INT64(780), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  call_tmp = dsiBuildArray3(&ret);
  chpl_macro_tmp_641.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_641.addr = call_tmp;
  x = chpl_macro_tmp_641;
  T = &x;
  help2(this8, T);
  ret_to_arg_ref_tmp_ = &call_tmp2;
  _newArray2(&x, ret_to_arg_ref_tmp_);
  *(_retArg) = call_tmp2;
  return;
}

/* ChapelArray.chpl:779 */
static void buildArray3(chpl____wide_DefaultRectangularDom_1_int64_t_F* const this8, _ref_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F _retArg) {
  chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F x = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F ret = {CHPL_LOCALEID_T_INIT, NULL};
  DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F call_tmp = NULL;
  _ref_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F T = NULL;
  chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F chpl_macro_tmp_642;
  ret = *(this8);
  chpl_check_nil((&ret)->addr, INT64(780), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  call_tmp = dsiBuildArray4(&ret);
  chpl_macro_tmp_642.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_642.addr = call_tmp;
  x = chpl_macro_tmp_642;
  T = &x;
  help3(this8, T);
  ret_to_arg_ref_tmp_ = &call_tmp2;
  _newArray3(&x, ret_to_arg_ref_tmp_);
  *(_retArg) = call_tmp2;
  return;
}

/* ChapelArray.chpl:779 */
static void buildArray4(chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F* const this8, _ref_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F _retArg) {
  chpl____wide_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F x = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F ret = {CHPL_LOCALEID_T_INIT, NULL};
  DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F call_tmp = NULL;
  _ref_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F T = NULL;
  chpl____wide_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F ret_to_arg_ref_tmp_ = NULL;
  chpl____wide_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F chpl_macro_tmp_643;
  ret = *(this8);
  chpl_check_nil((&ret)->addr, INT64(780), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  call_tmp = dsiBuildArray(&ret);
  chpl_macro_tmp_643.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_643.addr = call_tmp;
  x = chpl_macro_tmp_643;
  T = &x;
  help4(this8, T);
  ret_to_arg_ref_tmp_ = &call_tmp2;
  _newArray4(&x, ret_to_arg_ref_tmp_);
  *(_retArg) = call_tmp2;
  return;
}

/* ChapelArray.chpl:779 */
static void buildArray5(chpl____wide_DefaultRectangularDom_1_int64_t_F* const this8, _ref_DefaultRectangularArr_chpldev_Task_1_int64_t_F _retArg) {
  chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F x = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F ret = {CHPL_LOCALEID_T_INIT, NULL};
  DefaultRectangularArr_chpldev_Task_1_int64_t_F call_tmp = NULL;
  _ref_DefaultRectangularArr_chpldev_Task_1_int64_t_F T = NULL;
  chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_DefaultRectangularArr_chpldev_Task_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F chpl_macro_tmp_644;
  ret = *(this8);
  chpl_check_nil((&ret)->addr, INT64(780), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  call_tmp = dsiBuildArray5(&ret);
  chpl_macro_tmp_644.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_644.addr = call_tmp;
  x = chpl_macro_tmp_644;
  T = &x;
  help5(this8, T);
  ret_to_arg_ref_tmp_ = &call_tmp2;
  _newArray5(&x, ret_to_arg_ref_tmp_);
  *(_retArg) = call_tmp2;
  return;
}

/* ChapelArray.chpl:782 */
static void help(chpl____wide_DefaultRectangularDom_1_int64_t_F* const this8, _ref_DefaultRectangularArr_locale_1_int64_t_F x) {
  memory_order local_memory_order_seq_cst;
  chpl____wide_DefaultRectangularDom_1_int64_t_F ret = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDom call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp2;
  _class_localson_fn35 _args_foron_fn = NULL;
  int64_t chpl_here_alloc_size;
  chpl_opaque chpl_here_alloc_tmp;
  chpl____wide_DefaultRectangularDom_1_int64_t_F ret2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDom call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDom call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_refcnt call_tmp5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int64 call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order default_argorder;
  chpl_localeID_t call_tmp7;
  _class_localson_fn7 _args_foron_fn2 = NULL;
  int64_t chpl_here_alloc_size2;
  chpl_opaque chpl_here_alloc_tmp2;
  chpl____wide_BaseDom chpl_macro_tmp_645;
  chpl____wide_BaseDom chpl_macro_tmp_646;
  chpl____wide__ref_atomic_refcnt chpl_macro_tmp_647;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_648;
  local_memory_order_seq_cst = memory_order_seq_cst;
  ret = *(this8);
  T = *(x);
  chpl_macro_tmp_645.locale = (&ret)->locale;
  chpl_macro_tmp_645.addr = ((BaseDom)((&ret)->addr));
  call_tmp = chpl_macro_tmp_645;
  call_tmp2 = (&call_tmp)->locale;
  chpl_here_alloc_size = sizeof(chpl__class_localson_fn35_object);
  chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(36));
  _args_foron_fn = ((_class_localson_fn35)(chpl_here_alloc_tmp));
  chpl_check_nil(_args_foron_fn, INT64(783), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  (_args_foron_fn)->_0__tmp = call_tmp2;
  chpl_check_nil(_args_foron_fn, INT64(783), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  (_args_foron_fn)->_1_this = call_tmp;
  chpl_check_nil(_args_foron_fn, INT64(783), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  (_args_foron_fn)->_2_x = T;
  /*** wrapon_fn35 ***/ chpl_executeOn(&call_tmp2, INT32(40), _args_foron_fn, sizeof(chpl__class_localson_fn35_object), INT64(138), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  chpl_here_free(((void*)(_args_foron_fn)));
  ret2 = *(this8);
  chpl_macro_tmp_646.locale = (&ret2)->locale;
  chpl_macro_tmp_646.addr = ((BaseDom)((&ret2)->addr));
  call_tmp4 = chpl_macro_tmp_646;
  call_tmp3 = call_tmp4;
  compilerAssert();
  chpl_check_nil((&call_tmp3)->addr, INT64(785), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  chpl_macro_tmp_647.locale = (&call_tmp3)->locale;
  chpl_macro_tmp_647.addr = &(((&call_tmp3)->addr)->_domCnt);
  call_tmp5 = chpl_macro_tmp_647;
  chpl_macro_tmp_648.locale = (call_tmp5).locale;
  chpl_macro_tmp_648.addr = &(((call_tmp5).addr)->_cnt);
  call_tmp6 = chpl_macro_tmp_648;
  default_argorder = local_memory_order_seq_cst;
  call_tmp7 = (&call_tmp6)->locale;
  chpl_here_alloc_size2 = sizeof(chpl__class_localson_fn7_object);
  chpl_here_alloc_tmp2 = chpl_here_alloc(chpl_here_alloc_size2, INT16(36));
  _args_foron_fn2 = ((_class_localson_fn7)(chpl_here_alloc_tmp2));
  chpl_check_nil(_args_foron_fn2, INT64(785), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  (_args_foron_fn2)->_0__tmp = call_tmp7;
  chpl_check_nil(_args_foron_fn2, INT64(785), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  (_args_foron_fn2)->_1_this = call_tmp6;
  chpl_check_nil(_args_foron_fn2, INT64(785), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  (_args_foron_fn2)->_2_value = INT64(1);
  chpl_check_nil(_args_foron_fn2, INT64(785), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  (_args_foron_fn2)->_3_order = default_argorder;
  /*** wrapon_fn7 ***/ chpl_executeOn(&call_tmp7, INT32(8), _args_foron_fn2, sizeof(chpl__class_localson_fn7_object), INT64(1069), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  chpl_here_free(((void*)(_args_foron_fn2)));
  return;
}

/* ChapelArray.chpl:782 */
static void help2(chpl____wide_DefaultRectangularDom_1_int64_t_F* const this8, _ref_DefaultRectangularArr_localesSignal_1_int64_t_F x) {
  memory_order local_memory_order_seq_cst;
  chpl____wide_DefaultRectangularDom_1_int64_t_F ret = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDom call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp2;
  _class_localson_fn36 _args_foron_fn = NULL;
  int64_t chpl_here_alloc_size;
  chpl_opaque chpl_here_alloc_tmp;
  chpl____wide_DefaultRectangularDom_1_int64_t_F ret2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDom call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDom call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_refcnt call_tmp5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int64 call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order default_argorder;
  chpl_localeID_t call_tmp7;
  _class_localson_fn7 _args_foron_fn2 = NULL;
  int64_t chpl_here_alloc_size2;
  chpl_opaque chpl_here_alloc_tmp2;
  chpl____wide_BaseDom chpl_macro_tmp_649;
  chpl____wide_BaseDom chpl_macro_tmp_650;
  chpl____wide__ref_atomic_refcnt chpl_macro_tmp_651;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_652;
  local_memory_order_seq_cst = memory_order_seq_cst;
  ret = *(this8);
  T = *(x);
  chpl_macro_tmp_649.locale = (&ret)->locale;
  chpl_macro_tmp_649.addr = ((BaseDom)((&ret)->addr));
  call_tmp = chpl_macro_tmp_649;
  call_tmp2 = (&call_tmp)->locale;
  chpl_here_alloc_size = sizeof(chpl__class_localson_fn36_object);
  chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(36));
  _args_foron_fn = ((_class_localson_fn36)(chpl_here_alloc_tmp));
  chpl_check_nil(_args_foron_fn, INT64(783), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  (_args_foron_fn)->_0__tmp = call_tmp2;
  chpl_check_nil(_args_foron_fn, INT64(783), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  (_args_foron_fn)->_1_this = call_tmp;
  chpl_check_nil(_args_foron_fn, INT64(783), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  (_args_foron_fn)->_2_x = T;
  /*** wrapon_fn36 ***/ chpl_executeOn(&call_tmp2, INT32(41), _args_foron_fn, sizeof(chpl__class_localson_fn36_object), INT64(138), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  chpl_here_free(((void*)(_args_foron_fn)));
  ret2 = *(this8);
  chpl_macro_tmp_650.locale = (&ret2)->locale;
  chpl_macro_tmp_650.addr = ((BaseDom)((&ret2)->addr));
  call_tmp4 = chpl_macro_tmp_650;
  call_tmp3 = call_tmp4;
  compilerAssert();
  chpl_check_nil((&call_tmp3)->addr, INT64(785), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  chpl_macro_tmp_651.locale = (&call_tmp3)->locale;
  chpl_macro_tmp_651.addr = &(((&call_tmp3)->addr)->_domCnt);
  call_tmp5 = chpl_macro_tmp_651;
  chpl_macro_tmp_652.locale = (call_tmp5).locale;
  chpl_macro_tmp_652.addr = &(((call_tmp5).addr)->_cnt);
  call_tmp6 = chpl_macro_tmp_652;
  default_argorder = local_memory_order_seq_cst;
  call_tmp7 = (&call_tmp6)->locale;
  chpl_here_alloc_size2 = sizeof(chpl__class_localson_fn7_object);
  chpl_here_alloc_tmp2 = chpl_here_alloc(chpl_here_alloc_size2, INT16(36));
  _args_foron_fn2 = ((_class_localson_fn7)(chpl_here_alloc_tmp2));
  chpl_check_nil(_args_foron_fn2, INT64(785), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  (_args_foron_fn2)->_0__tmp = call_tmp7;
  chpl_check_nil(_args_foron_fn2, INT64(785), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  (_args_foron_fn2)->_1_this = call_tmp6;
  chpl_check_nil(_args_foron_fn2, INT64(785), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  (_args_foron_fn2)->_2_value = INT64(1);
  chpl_check_nil(_args_foron_fn2, INT64(785), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  (_args_foron_fn2)->_3_order = default_argorder;
  /*** wrapon_fn7 ***/ chpl_executeOn(&call_tmp7, INT32(8), _args_foron_fn2, sizeof(chpl__class_localson_fn7_object), INT64(1069), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  chpl_here_free(((void*)(_args_foron_fn2)));
  return;
}

/* ChapelArray.chpl:782 */
static void help3(chpl____wide_DefaultRectangularDom_1_int64_t_F* const this8, _ref_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F x) {
  memory_order local_memory_order_seq_cst;
  chpl____wide_DefaultRectangularDom_1_int64_t_F ret = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDom call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp2;
  _class_localson_fn37 _args_foron_fn = NULL;
  int64_t chpl_here_alloc_size;
  chpl_opaque chpl_here_alloc_tmp;
  chpl____wide_DefaultRectangularDom_1_int64_t_F ret2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDom call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDom call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_refcnt call_tmp5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int64 call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order default_argorder;
  chpl_localeID_t call_tmp7;
  _class_localson_fn7 _args_foron_fn2 = NULL;
  int64_t chpl_here_alloc_size2;
  chpl_opaque chpl_here_alloc_tmp2;
  chpl____wide_BaseDom chpl_macro_tmp_653;
  chpl____wide_BaseDom chpl_macro_tmp_654;
  chpl____wide__ref_atomic_refcnt chpl_macro_tmp_655;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_656;
  local_memory_order_seq_cst = memory_order_seq_cst;
  ret = *(this8);
  T = *(x);
  chpl_macro_tmp_653.locale = (&ret)->locale;
  chpl_macro_tmp_653.addr = ((BaseDom)((&ret)->addr));
  call_tmp = chpl_macro_tmp_653;
  call_tmp2 = (&call_tmp)->locale;
  chpl_here_alloc_size = sizeof(chpl__class_localson_fn37_object);
  chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(36));
  _args_foron_fn = ((_class_localson_fn37)(chpl_here_alloc_tmp));
  chpl_check_nil(_args_foron_fn, INT64(783), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  (_args_foron_fn)->_0__tmp = call_tmp2;
  chpl_check_nil(_args_foron_fn, INT64(783), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  (_args_foron_fn)->_1_this = call_tmp;
  chpl_check_nil(_args_foron_fn, INT64(783), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  (_args_foron_fn)->_2_x = T;
  /*** wrapon_fn37 ***/ chpl_executeOn(&call_tmp2, INT32(42), _args_foron_fn, sizeof(chpl__class_localson_fn37_object), INT64(138), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  chpl_here_free(((void*)(_args_foron_fn)));
  ret2 = *(this8);
  chpl_macro_tmp_654.locale = (&ret2)->locale;
  chpl_macro_tmp_654.addr = ((BaseDom)((&ret2)->addr));
  call_tmp4 = chpl_macro_tmp_654;
  call_tmp3 = call_tmp4;
  compilerAssert();
  chpl_check_nil((&call_tmp3)->addr, INT64(785), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  chpl_macro_tmp_655.locale = (&call_tmp3)->locale;
  chpl_macro_tmp_655.addr = &(((&call_tmp3)->addr)->_domCnt);
  call_tmp5 = chpl_macro_tmp_655;
  chpl_macro_tmp_656.locale = (call_tmp5).locale;
  chpl_macro_tmp_656.addr = &(((call_tmp5).addr)->_cnt);
  call_tmp6 = chpl_macro_tmp_656;
  default_argorder = local_memory_order_seq_cst;
  call_tmp7 = (&call_tmp6)->locale;
  chpl_here_alloc_size2 = sizeof(chpl__class_localson_fn7_object);
  chpl_here_alloc_tmp2 = chpl_here_alloc(chpl_here_alloc_size2, INT16(36));
  _args_foron_fn2 = ((_class_localson_fn7)(chpl_here_alloc_tmp2));
  chpl_check_nil(_args_foron_fn2, INT64(785), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  (_args_foron_fn2)->_0__tmp = call_tmp7;
  chpl_check_nil(_args_foron_fn2, INT64(785), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  (_args_foron_fn2)->_1_this = call_tmp6;
  chpl_check_nil(_args_foron_fn2, INT64(785), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  (_args_foron_fn2)->_2_value = INT64(1);
  chpl_check_nil(_args_foron_fn2, INT64(785), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  (_args_foron_fn2)->_3_order = default_argorder;
  /*** wrapon_fn7 ***/ chpl_executeOn(&call_tmp7, INT32(8), _args_foron_fn2, sizeof(chpl__class_localson_fn7_object), INT64(1069), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  chpl_here_free(((void*)(_args_foron_fn2)));
  return;
}

/* ChapelArray.chpl:782 */
static void help4(chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F* const this8, _ref_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F x) {
  memory_order local_memory_order_seq_cst;
  chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F ret = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDom call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp2;
  _class_localson_fn39 _args_foron_fn = NULL;
  int64_t chpl_here_alloc_size;
  chpl_opaque chpl_here_alloc_tmp;
  chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F ret2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDom call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDom call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_refcnt call_tmp5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int64 call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order default_argorder;
  chpl_localeID_t call_tmp7;
  _class_localson_fn7 _args_foron_fn2 = NULL;
  int64_t chpl_here_alloc_size2;
  chpl_opaque chpl_here_alloc_tmp2;
  chpl____wide_BaseDom chpl_macro_tmp_657;
  chpl____wide_BaseDom chpl_macro_tmp_658;
  chpl____wide__ref_atomic_refcnt chpl_macro_tmp_659;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_660;
  local_memory_order_seq_cst = memory_order_seq_cst;
  ret = *(this8);
  T = *(x);
  chpl_macro_tmp_657.locale = (&ret)->locale;
  chpl_macro_tmp_657.addr = ((BaseDom)((&ret)->addr));
  call_tmp = chpl_macro_tmp_657;
  call_tmp2 = (&call_tmp)->locale;
  chpl_here_alloc_size = sizeof(chpl__class_localson_fn39_object);
  chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(36));
  _args_foron_fn = ((_class_localson_fn39)(chpl_here_alloc_tmp));
  chpl_check_nil(_args_foron_fn, INT64(783), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  (_args_foron_fn)->_0__tmp = call_tmp2;
  chpl_check_nil(_args_foron_fn, INT64(783), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  (_args_foron_fn)->_1_this = call_tmp;
  chpl_check_nil(_args_foron_fn, INT64(783), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  (_args_foron_fn)->_2_x = T;
  /*** wrapon_fn39 ***/ chpl_executeOn(&call_tmp2, INT32(44), _args_foron_fn, sizeof(chpl__class_localson_fn39_object), INT64(138), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  chpl_here_free(((void*)(_args_foron_fn)));
  ret2 = *(this8);
  chpl_macro_tmp_658.locale = (&ret2)->locale;
  chpl_macro_tmp_658.addr = ((BaseDom)((&ret2)->addr));
  call_tmp4 = chpl_macro_tmp_658;
  call_tmp3 = call_tmp4;
  compilerAssert();
  chpl_check_nil((&call_tmp3)->addr, INT64(785), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  chpl_macro_tmp_659.locale = (&call_tmp3)->locale;
  chpl_macro_tmp_659.addr = &(((&call_tmp3)->addr)->_domCnt);
  call_tmp5 = chpl_macro_tmp_659;
  chpl_macro_tmp_660.locale = (call_tmp5).locale;
  chpl_macro_tmp_660.addr = &(((call_tmp5).addr)->_cnt);
  call_tmp6 = chpl_macro_tmp_660;
  default_argorder = local_memory_order_seq_cst;
  call_tmp7 = (&call_tmp6)->locale;
  chpl_here_alloc_size2 = sizeof(chpl__class_localson_fn7_object);
  chpl_here_alloc_tmp2 = chpl_here_alloc(chpl_here_alloc_size2, INT16(36));
  _args_foron_fn2 = ((_class_localson_fn7)(chpl_here_alloc_tmp2));
  chpl_check_nil(_args_foron_fn2, INT64(785), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  (_args_foron_fn2)->_0__tmp = call_tmp7;
  chpl_check_nil(_args_foron_fn2, INT64(785), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  (_args_foron_fn2)->_1_this = call_tmp6;
  chpl_check_nil(_args_foron_fn2, INT64(785), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  (_args_foron_fn2)->_2_value = INT64(1);
  chpl_check_nil(_args_foron_fn2, INT64(785), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  (_args_foron_fn2)->_3_order = default_argorder;
  /*** wrapon_fn7 ***/ chpl_executeOn(&call_tmp7, INT32(8), _args_foron_fn2, sizeof(chpl__class_localson_fn7_object), INT64(1069), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  chpl_here_free(((void*)(_args_foron_fn2)));
  return;
}

/* ChapelArray.chpl:782 */
static void help5(chpl____wide_DefaultRectangularDom_1_int64_t_F* const this8, _ref_DefaultRectangularArr_chpldev_Task_1_int64_t_F x) {
  memory_order local_memory_order_seq_cst;
  chpl____wide_DefaultRectangularDom_1_int64_t_F ret = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDom call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp2;
  _class_localson_fn38 _args_foron_fn = NULL;
  int64_t chpl_here_alloc_size;
  chpl_opaque chpl_here_alloc_tmp;
  chpl____wide_DefaultRectangularDom_1_int64_t_F ret2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDom call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDom call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_refcnt call_tmp5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int64 call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order default_argorder;
  chpl_localeID_t call_tmp7;
  _class_localson_fn7 _args_foron_fn2 = NULL;
  int64_t chpl_here_alloc_size2;
  chpl_opaque chpl_here_alloc_tmp2;
  chpl____wide_BaseDom chpl_macro_tmp_661;
  chpl____wide_BaseDom chpl_macro_tmp_662;
  chpl____wide__ref_atomic_refcnt chpl_macro_tmp_663;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_664;
  local_memory_order_seq_cst = memory_order_seq_cst;
  ret = *(this8);
  T = *(x);
  chpl_macro_tmp_661.locale = (&ret)->locale;
  chpl_macro_tmp_661.addr = ((BaseDom)((&ret)->addr));
  call_tmp = chpl_macro_tmp_661;
  call_tmp2 = (&call_tmp)->locale;
  chpl_here_alloc_size = sizeof(chpl__class_localson_fn38_object);
  chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(36));
  _args_foron_fn = ((_class_localson_fn38)(chpl_here_alloc_tmp));
  chpl_check_nil(_args_foron_fn, INT64(783), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  (_args_foron_fn)->_0__tmp = call_tmp2;
  chpl_check_nil(_args_foron_fn, INT64(783), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  (_args_foron_fn)->_1_this = call_tmp;
  chpl_check_nil(_args_foron_fn, INT64(783), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  (_args_foron_fn)->_2_x = T;
  /*** wrapon_fn38 ***/ chpl_executeOn(&call_tmp2, INT32(43), _args_foron_fn, sizeof(chpl__class_localson_fn38_object), INT64(138), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  chpl_here_free(((void*)(_args_foron_fn)));
  ret2 = *(this8);
  chpl_macro_tmp_662.locale = (&ret2)->locale;
  chpl_macro_tmp_662.addr = ((BaseDom)((&ret2)->addr));
  call_tmp4 = chpl_macro_tmp_662;
  call_tmp3 = call_tmp4;
  compilerAssert();
  chpl_check_nil((&call_tmp3)->addr, INT64(785), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  chpl_macro_tmp_663.locale = (&call_tmp3)->locale;
  chpl_macro_tmp_663.addr = &(((&call_tmp3)->addr)->_domCnt);
  call_tmp5 = chpl_macro_tmp_663;
  chpl_macro_tmp_664.locale = (call_tmp5).locale;
  chpl_macro_tmp_664.addr = &(((call_tmp5).addr)->_cnt);
  call_tmp6 = chpl_macro_tmp_664;
  default_argorder = local_memory_order_seq_cst;
  call_tmp7 = (&call_tmp6)->locale;
  chpl_here_alloc_size2 = sizeof(chpl__class_localson_fn7_object);
  chpl_here_alloc_tmp2 = chpl_here_alloc(chpl_here_alloc_size2, INT16(36));
  _args_foron_fn2 = ((_class_localson_fn7)(chpl_here_alloc_tmp2));
  chpl_check_nil(_args_foron_fn2, INT64(785), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  (_args_foron_fn2)->_0__tmp = call_tmp7;
  chpl_check_nil(_args_foron_fn2, INT64(785), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  (_args_foron_fn2)->_1_this = call_tmp6;
  chpl_check_nil(_args_foron_fn2, INT64(785), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  (_args_foron_fn2)->_2_value = INT64(1);
  chpl_check_nil(_args_foron_fn2, INT64(785), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  (_args_foron_fn2)->_3_order = default_argorder;
  /*** wrapon_fn7 ***/ chpl_executeOn(&call_tmp7, INT32(8), _args_foron_fn2, sizeof(chpl__class_localson_fn7_object), INT64(1069), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  chpl_here_free(((void*)(_args_foron_fn2)));
  return;
}

/* ChapelArray.chpl:801 */
static void add(chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F* const this8, chpl_taskID_t i) {
  chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F ret = {CHPL_LOCALEID_T_INIT, NULL};
  ret = *(this8);
  chpl_check_nil((&ret)->addr, INT64(802), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  dsiAdd(&ret, i);
  return;
}

/* ChapelArray.chpl:805 */
static void remove2(chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F* const this8, chpl_taskID_t i) {
  chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F ret = {CHPL_LOCALEID_T_INIT, NULL};
  ret = *(this8);
  chpl_check_nil((&ret)->addr, INT64(806), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  dsiRemove(&ret, i);
  return;
}

/* ChapelArray.chpl:822 */
static int64_t numIndices(chpl____wide_DefaultRectangularDom_1_int64_t_F* const this8) {
  chpl____wide_DefaultRectangularDom_1_int64_t_F ret = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp;
  ret = *(this8);
  chpl_check_nil((&ret)->addr, INT64(822), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  call_tmp = dsiNumIndices(&ret);
  return call_tmp;
}

/* ChapelArray.chpl:824 */
static int64_t high(chpl____wide_DefaultRectangularDom_1_int64_t_F* const this8) {
  chpl____wide_DefaultRectangularDom_1_int64_t_F ret = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp;
  ret = *(this8);
  chpl_check_nil((&ret)->addr, INT64(824), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  call_tmp = dsiHigh(&ret);
  return call_tmp;
}

/* ChapelArray.chpl:832 */
static chpl_bool member(chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F* const this8, _tuple_1_star_chpl_taskID_t* const i) {
  chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F ret = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool wrap_call_tmp;
  chpl_taskID_t call_tmp;
  ret = *(this8);
  call_tmp = *(*(i) + INT64(0));
  chpl_check_nil((&ret)->addr, INT64(836), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  wrap_call_tmp = dsiMember(&ret, call_tmp);
  return wrap_call_tmp;
}

/* ChapelArray.chpl:839 */
static chpl_bool member2(chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F* const this8, chpl_taskID_t _e0_i) {
  _tuple_1_star_chpl_taskID_t i;
  chpl_bool call_tmp;
  *(i + INT64(0)) = _e0_i;
  chpl_check_nil((this8)->addr, INT64(840), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  call_tmp = member(this8, &i);
  return call_tmp;
}

/* ChapelArray.chpl:991 */
static void setIndices(chpl____wide_DefaultRectangularDom_1_int64_t_F* const this8, _tuple_1_star_range_int64_t_bounded_F* const x) {
  chpl____wide_DefaultRectangularDom_1_int64_t_F ret = {CHPL_LOCALEID_T_INIT, NULL};
  ret = *(this8);
  chpl_check_nil((&ret)->addr, INT64(992), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  dsiSetIndices(&ret, x);
  return;
}

/* ChapelArray.chpl:998 */
static void getIndices(chpl____wide_DefaultRectangularDom_1_int64_t_F* const this8, _ref__tuple_1_star_range_int64_t_bounded_F _retArg) {
  range_int64_t_bounded_F ret_x1;
  chpl____wide_DefaultRectangularDom_1_int64_t_F ret = {CHPL_LOCALEID_T_INIT, NULL};
  _tuple_1_star_range_int64_t_bounded_F call_tmp;
  _ref__tuple_1_star_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
  ret = *(this8);
  ret_to_arg_ref_tmp_ = &call_tmp;
  chpl_check_nil((&ret)->addr, INT64(999), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  dsiGetIndices(&ret, ret_to_arg_ref_tmp_);
  ret_x1 = *(call_tmp + INT64(0));
  *(*(_retArg) + INT64(0)) = ret_x1;
  return;
}

/* ChapelArray.chpl:1208 */
static chpl____wide_DefaultRectangularArr_locale_1_int64_t_F _construct__array(chpl____wide_DefaultRectangularArr_locale_1_int64_t_F* const _value, chpl____wide_DefaultRectangularArr_locale_1_int64_t_F* const meme) {
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F this8 = {CHPL_LOCALEID_T_INIT, NULL};
  this8 = *(meme);
  this8 = *(_value);
  chpl_check_nil((&this8)->addr, INT64(1208), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  initialize(&this8);
  return this8;
}

/* ChapelArray.chpl:1208 */
static chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F _construct__array2(chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F* const _value, chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F* const meme) {
  chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F this8 = {CHPL_LOCALEID_T_INIT, NULL};
  this8 = *(meme);
  this8 = *(_value);
  chpl_check_nil((&this8)->addr, INT64(1208), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  initialize2(&this8);
  return this8;
}

/* ChapelArray.chpl:1208 */
static chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F _construct__array3(chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F* const _value, chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F* const meme) {
  chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F this8 = {CHPL_LOCALEID_T_INIT, NULL};
  this8 = *(meme);
  this8 = *(_value);
  chpl_check_nil((&this8)->addr, INT64(1208), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  initialize3(&this8);
  return this8;
}

/* ChapelArray.chpl:1208 */
static chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F _construct__array4(chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F* const _value, chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F* const meme) {
  chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F this8 = {CHPL_LOCALEID_T_INIT, NULL};
  this8 = *(meme);
  this8 = *(_value);
  chpl_check_nil((&this8)->addr, INT64(1208), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  initialize4(&this8);
  return this8;
}

/* ChapelArray.chpl:1208 */
static chpl____wide_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F _construct__array5(chpl____wide_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F* const _value, chpl____wide_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F* const meme) {
  chpl____wide_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F this8 = {CHPL_LOCALEID_T_INIT, NULL};
  this8 = *(meme);
  this8 = *(_value);
  chpl_check_nil((&this8)->addr, INT64(1208), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  initialize5(&this8);
  return this8;
}

/* ChapelArray.chpl:1213 */
static void initialize(chpl____wide_DefaultRectangularArr_locale_1_int64_t_F* const this8) {
  chpl_incRefCountsForDomainsInArrayEltTypes();
  return;
}

/* ChapelArray.chpl:1213 */
static void initialize2(chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F* const this8) {
  chpl_incRefCountsForDomainsInArrayEltTypes2();
  return;
}

/* ChapelArray.chpl:1213 */
static void initialize3(chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F* const this8) {
  chpl_incRefCountsForDomainsInArrayEltTypes3();
  return;
}

/* ChapelArray.chpl:1213 */
static void initialize4(chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F* const this8) {
  chpl_incRefCountsForDomainsInArrayEltTypes4();
  return;
}

/* ChapelArray.chpl:1213 */
static void initialize5(chpl____wide_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F* const this8) {
  chpl_incRefCountsForDomainsInArrayEltTypes4();
  return;
}

/* ChapelArray.chpl:1233 */
static void chpl___TILDE__array(chpl____wide_DefaultRectangularArr_locale_1_int64_t_F* const this8) {
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F ret = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp;
  _class_localson_fn17 _args_foron_fn = NULL;
  int64_t chpl_here_alloc_size;
  chpl_opaque chpl_here_alloc_tmp;
  ret = *(this8);
  call_tmp = (&ret)->locale;
  chpl_here_alloc_size = sizeof(chpl__class_localson_fn17_object);
  chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(36));
  _args_foron_fn = ((_class_localson_fn17)(chpl_here_alloc_tmp));
  chpl_check_nil(_args_foron_fn, INT64(1236), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  (_args_foron_fn)->_0__tmp = call_tmp;
  chpl_check_nil(_args_foron_fn, INT64(1236), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  (_args_foron_fn)->_1_this = *(this8);
  /*** wrapon_fn17 ***/ chpl_executeOn(&call_tmp, INT32(18), _args_foron_fn, sizeof(chpl__class_localson_fn17_object), INT64(1236), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  chpl_here_free(((void*)(_args_foron_fn)));
  return;
}

/* ChapelArray.chpl:1233 */
static void chpl___TILDE__array2(chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F* const this8) {
  chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F ret = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp;
  _class_localson_fn18 _args_foron_fn = NULL;
  int64_t chpl_here_alloc_size;
  chpl_opaque chpl_here_alloc_tmp;
  ret = *(this8);
  call_tmp = (&ret)->locale;
  chpl_here_alloc_size = sizeof(chpl__class_localson_fn18_object);
  chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(36));
  _args_foron_fn = ((_class_localson_fn18)(chpl_here_alloc_tmp));
  chpl_check_nil(_args_foron_fn, INT64(1236), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  (_args_foron_fn)->_0__tmp = call_tmp;
  chpl_check_nil(_args_foron_fn, INT64(1236), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  (_args_foron_fn)->_1_this = *(this8);
  /*** wrapon_fn18 ***/ chpl_executeOn(&call_tmp, INT32(19), _args_foron_fn, sizeof(chpl__class_localson_fn18_object), INT64(1236), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  chpl_here_free(((void*)(_args_foron_fn)));
  return;
}

/* ChapelArray.chpl:1233 */
static void chpl___TILDE__array3(chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F* const this8) {
  chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F ret = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp;
  _class_localson_fn19 _args_foron_fn = NULL;
  int64_t chpl_here_alloc_size;
  chpl_opaque chpl_here_alloc_tmp;
  ret = *(this8);
  call_tmp = (&ret)->locale;
  chpl_here_alloc_size = sizeof(chpl__class_localson_fn19_object);
  chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(36));
  _args_foron_fn = ((_class_localson_fn19)(chpl_here_alloc_tmp));
  chpl_check_nil(_args_foron_fn, INT64(1236), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  (_args_foron_fn)->_0__tmp = call_tmp;
  chpl_check_nil(_args_foron_fn, INT64(1236), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  (_args_foron_fn)->_1_this = *(this8);
  /*** wrapon_fn19 ***/ chpl_executeOn(&call_tmp, INT32(20), _args_foron_fn, sizeof(chpl__class_localson_fn19_object), INT64(1236), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  chpl_here_free(((void*)(_args_foron_fn)));
  return;
}

/* ChapelArray.chpl:1233 */
static void chpl___TILDE__array4(chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F* const this8) {
  chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F ret = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp;
  _class_localson_fn20 _args_foron_fn = NULL;
  int64_t chpl_here_alloc_size;
  chpl_opaque chpl_here_alloc_tmp;
  ret = *(this8);
  call_tmp = (&ret)->locale;
  chpl_here_alloc_size = sizeof(chpl__class_localson_fn20_object);
  chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(36));
  _args_foron_fn = ((_class_localson_fn20)(chpl_here_alloc_tmp));
  chpl_check_nil(_args_foron_fn, INT64(1236), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  (_args_foron_fn)->_0__tmp = call_tmp;
  chpl_check_nil(_args_foron_fn, INT64(1236), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  (_args_foron_fn)->_1_this = *(this8);
  /*** wrapon_fn20 ***/ chpl_executeOn(&call_tmp, INT32(21), _args_foron_fn, sizeof(chpl__class_localson_fn20_object), INT64(1236), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  chpl_here_free(((void*)(_args_foron_fn)));
  return;
}

/* ChapelArray.chpl:1233 */
static void chpl___TILDE__array5(chpl____wide_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F* const this8) {
  chpl____wide_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F ret = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp;
  _class_localson_fn21 _args_foron_fn = NULL;
  int64_t chpl_here_alloc_size;
  chpl_opaque chpl_here_alloc_tmp;
  ret = *(this8);
  call_tmp = (&ret)->locale;
  chpl_here_alloc_size = sizeof(chpl__class_localson_fn21_object);
  chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(36));
  _args_foron_fn = ((_class_localson_fn21)(chpl_here_alloc_tmp));
  chpl_check_nil(_args_foron_fn, INT64(1236), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  (_args_foron_fn)->_0__tmp = call_tmp;
  chpl_check_nil(_args_foron_fn, INT64(1236), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  (_args_foron_fn)->_1_this = *(this8);
  /*** wrapon_fn21 ***/ chpl_executeOn(&call_tmp, INT32(22), _args_foron_fn, sizeof(chpl__class_localson_fn21_object), INT64(1236), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  chpl_here_free(((void*)(_args_foron_fn)));
  return;
}

/* ChapelArray.chpl:1236 */
static void on_fn17(chpl____wide_DefaultRectangularArr_locale_1_int64_t_F* const this8) {
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F ret = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t wrap_call_tmp;
  chpl____wide_BaseArr call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp2;
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F ret2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr _parent_destructor_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_refcnt _field_destructor_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int64 _field_destructor_tmp_2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int_least64_t call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomic_int_least64_t T = NULL;
  chpl_localeID_t call_tmp4;
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn22 _args_foron_fn = NULL;
  int64_t chpl_here_alloc_size;
  chpl_opaque chpl_here_alloc_tmp;
  chpl____wide_BaseArr chpl_macro_tmp_665;
  chpl____wide_BaseArr chpl_macro_tmp_666;
  chpl____wide__ref_atomic_refcnt chpl_macro_tmp_667;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_668;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_669;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_670;
  ret = *(this8);
  chpl_macro_tmp_665.locale = (&ret)->locale;
  chpl_macro_tmp_665.addr = ((BaseArr)((&ret)->addr));
  call_tmp = chpl_macro_tmp_665;
  chpl_check_nil((&call_tmp)->addr, INT64(1237), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  wrap_call_tmp = destroyArr(&call_tmp);
  call_tmp2 = (wrap_call_tmp == INT64(0));
  if (call_tmp2) {
    chpl_decRefCountsForDomainsInArrayEltTypes();
    ret2 = *(this8);
    chpl_macro_tmp_666.locale = (&ret2)->locale;
    chpl_macro_tmp_666.addr = ((BaseArr)((&ret2)->addr));
    _parent_destructor_tmp_ = chpl_macro_tmp_666;
    chpl_check_nil((&_parent_destructor_tmp_)->addr, INT64(1240), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    chpl_macro_tmp_667.locale = (&_parent_destructor_tmp_)->locale;
    chpl_macro_tmp_667.addr = &(((&_parent_destructor_tmp_)->addr)->_arrCnt);
    _field_destructor_tmp_ = chpl_macro_tmp_667;
    chpl_macro_tmp_668.locale = (_field_destructor_tmp_).locale;
    chpl_macro_tmp_668.addr = &(((_field_destructor_tmp_).addr)->_cnt);
    _field_destructor_tmp_2 = chpl_macro_tmp_668;
    chpl_macro_tmp_669.locale = (_field_destructor_tmp_2).locale;
    chpl_macro_tmp_669.addr = &(((_field_destructor_tmp_2).addr)->_v);
    call_tmp3 = chpl_macro_tmp_669;
    T = (&call_tmp3)->addr;
    atomic_destroy_int_least64_t(T);
    chpl_macro_tmp_670.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_670.addr = T;
    call_tmp3 = chpl_macro_tmp_670;
    call_tmp4 = (&ret2)->locale;
    rvfDerefTmp = ret2;
    chpl_here_alloc_size = sizeof(chpl__class_localson_fn22_object);
    chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(36));
    _args_foron_fn = ((_class_localson_fn22)(chpl_here_alloc_tmp));
    chpl_check_nil(_args_foron_fn, INT64(1240), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    (_args_foron_fn)->_0__tmp = call_tmp4;
    chpl_check_nil(_args_foron_fn, INT64(1240), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    (_args_foron_fn)->_1_rvfDerefTmp = rvfDerefTmp;
    /*** wrapon_fn22 ***/ chpl_executeOn(&call_tmp4, INT32(23), _args_foron_fn, sizeof(chpl__class_localson_fn22_object), INT64(1240), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    chpl_here_free(((void*)(_args_foron_fn)));
  }
  return;
}

/* ChapelArray.chpl:1236 */
static void on_fn18(chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F* const this8) {
  chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F ret = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t wrap_call_tmp;
  chpl____wide_BaseArr call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp2;
  chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F ret2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr _parent_destructor_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_refcnt _field_destructor_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int64 _field_destructor_tmp_2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int_least64_t call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomic_int_least64_t T = NULL;
  chpl_localeID_t call_tmp4;
  chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn23 _args_foron_fn = NULL;
  int64_t chpl_here_alloc_size;
  chpl_opaque chpl_here_alloc_tmp;
  chpl____wide_BaseArr chpl_macro_tmp_671;
  chpl____wide_BaseArr chpl_macro_tmp_672;
  chpl____wide__ref_atomic_refcnt chpl_macro_tmp_673;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_674;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_675;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_676;
  ret = *(this8);
  chpl_macro_tmp_671.locale = (&ret)->locale;
  chpl_macro_tmp_671.addr = ((BaseArr)((&ret)->addr));
  call_tmp = chpl_macro_tmp_671;
  chpl_check_nil((&call_tmp)->addr, INT64(1237), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  wrap_call_tmp = destroyArr(&call_tmp);
  call_tmp2 = (wrap_call_tmp == INT64(0));
  if (call_tmp2) {
    chpl_decRefCountsForDomainsInArrayEltTypes2();
    ret2 = *(this8);
    chpl_macro_tmp_672.locale = (&ret2)->locale;
    chpl_macro_tmp_672.addr = ((BaseArr)((&ret2)->addr));
    _parent_destructor_tmp_ = chpl_macro_tmp_672;
    chpl_check_nil((&_parent_destructor_tmp_)->addr, INT64(1240), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    chpl_macro_tmp_673.locale = (&_parent_destructor_tmp_)->locale;
    chpl_macro_tmp_673.addr = &(((&_parent_destructor_tmp_)->addr)->_arrCnt);
    _field_destructor_tmp_ = chpl_macro_tmp_673;
    chpl_macro_tmp_674.locale = (_field_destructor_tmp_).locale;
    chpl_macro_tmp_674.addr = &(((_field_destructor_tmp_).addr)->_cnt);
    _field_destructor_tmp_2 = chpl_macro_tmp_674;
    chpl_macro_tmp_675.locale = (_field_destructor_tmp_2).locale;
    chpl_macro_tmp_675.addr = &(((_field_destructor_tmp_2).addr)->_v);
    call_tmp3 = chpl_macro_tmp_675;
    T = (&call_tmp3)->addr;
    atomic_destroy_int_least64_t(T);
    chpl_macro_tmp_676.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_676.addr = T;
    call_tmp3 = chpl_macro_tmp_676;
    call_tmp4 = (&ret2)->locale;
    rvfDerefTmp = ret2;
    chpl_here_alloc_size = sizeof(chpl__class_localson_fn23_object);
    chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(36));
    _args_foron_fn = ((_class_localson_fn23)(chpl_here_alloc_tmp));
    chpl_check_nil(_args_foron_fn, INT64(1240), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    (_args_foron_fn)->_0__tmp = call_tmp4;
    chpl_check_nil(_args_foron_fn, INT64(1240), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    (_args_foron_fn)->_1_rvfDerefTmp = rvfDerefTmp;
    /*** wrapon_fn23 ***/ chpl_executeOn(&call_tmp4, INT32(24), _args_foron_fn, sizeof(chpl__class_localson_fn23_object), INT64(1240), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    chpl_here_free(((void*)(_args_foron_fn)));
  }
  return;
}

/* ChapelArray.chpl:1236 */
static void on_fn19(chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F* const this8) {
  chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F ret = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t wrap_call_tmp;
  chpl____wide_BaseArr call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp2;
  chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F ret2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr _parent_destructor_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_refcnt _field_destructor_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int64 _field_destructor_tmp_2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int_least64_t call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomic_int_least64_t T = NULL;
  chpl_localeID_t call_tmp4;
  chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn24 _args_foron_fn = NULL;
  int64_t chpl_here_alloc_size;
  chpl_opaque chpl_here_alloc_tmp;
  chpl____wide_BaseArr chpl_macro_tmp_677;
  chpl____wide_BaseArr chpl_macro_tmp_678;
  chpl____wide__ref_atomic_refcnt chpl_macro_tmp_679;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_680;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_681;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_682;
  ret = *(this8);
  chpl_macro_tmp_677.locale = (&ret)->locale;
  chpl_macro_tmp_677.addr = ((BaseArr)((&ret)->addr));
  call_tmp = chpl_macro_tmp_677;
  chpl_check_nil((&call_tmp)->addr, INT64(1237), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  wrap_call_tmp = destroyArr(&call_tmp);
  call_tmp2 = (wrap_call_tmp == INT64(0));
  if (call_tmp2) {
    chpl_decRefCountsForDomainsInArrayEltTypes3();
    ret2 = *(this8);
    chpl_macro_tmp_678.locale = (&ret2)->locale;
    chpl_macro_tmp_678.addr = ((BaseArr)((&ret2)->addr));
    _parent_destructor_tmp_ = chpl_macro_tmp_678;
    chpl_check_nil((&_parent_destructor_tmp_)->addr, INT64(1240), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    chpl_macro_tmp_679.locale = (&_parent_destructor_tmp_)->locale;
    chpl_macro_tmp_679.addr = &(((&_parent_destructor_tmp_)->addr)->_arrCnt);
    _field_destructor_tmp_ = chpl_macro_tmp_679;
    chpl_macro_tmp_680.locale = (_field_destructor_tmp_).locale;
    chpl_macro_tmp_680.addr = &(((_field_destructor_tmp_).addr)->_cnt);
    _field_destructor_tmp_2 = chpl_macro_tmp_680;
    chpl_macro_tmp_681.locale = (_field_destructor_tmp_2).locale;
    chpl_macro_tmp_681.addr = &(((_field_destructor_tmp_2).addr)->_v);
    call_tmp3 = chpl_macro_tmp_681;
    T = (&call_tmp3)->addr;
    atomic_destroy_int_least64_t(T);
    chpl_macro_tmp_682.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_682.addr = T;
    call_tmp3 = chpl_macro_tmp_682;
    call_tmp4 = (&ret2)->locale;
    rvfDerefTmp = ret2;
    chpl_here_alloc_size = sizeof(chpl__class_localson_fn24_object);
    chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(36));
    _args_foron_fn = ((_class_localson_fn24)(chpl_here_alloc_tmp));
    chpl_check_nil(_args_foron_fn, INT64(1240), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    (_args_foron_fn)->_0__tmp = call_tmp4;
    chpl_check_nil(_args_foron_fn, INT64(1240), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    (_args_foron_fn)->_1_rvfDerefTmp = rvfDerefTmp;
    /*** wrapon_fn24 ***/ chpl_executeOn(&call_tmp4, INT32(25), _args_foron_fn, sizeof(chpl__class_localson_fn24_object), INT64(1240), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    chpl_here_free(((void*)(_args_foron_fn)));
  }
  return;
}

/* ChapelArray.chpl:1236 */
static void on_fn20(chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F* const this8) {
  chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F ret = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t wrap_call_tmp;
  chpl____wide_BaseArr call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp2;
  chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F ret2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr _parent_destructor_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_refcnt _field_destructor_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int64 _field_destructor_tmp_2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int_least64_t call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomic_int_least64_t T = NULL;
  chpl_localeID_t call_tmp4;
  chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn25 _args_foron_fn = NULL;
  int64_t chpl_here_alloc_size;
  chpl_opaque chpl_here_alloc_tmp;
  chpl____wide_BaseArr chpl_macro_tmp_683;
  chpl____wide_BaseArr chpl_macro_tmp_684;
  chpl____wide__ref_atomic_refcnt chpl_macro_tmp_685;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_686;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_687;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_688;
  ret = *(this8);
  chpl_macro_tmp_683.locale = (&ret)->locale;
  chpl_macro_tmp_683.addr = ((BaseArr)((&ret)->addr));
  call_tmp = chpl_macro_tmp_683;
  chpl_check_nil((&call_tmp)->addr, INT64(1237), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  wrap_call_tmp = destroyArr(&call_tmp);
  call_tmp2 = (wrap_call_tmp == INT64(0));
  if (call_tmp2) {
    chpl_decRefCountsForDomainsInArrayEltTypes4();
    ret2 = *(this8);
    chpl_macro_tmp_684.locale = (&ret2)->locale;
    chpl_macro_tmp_684.addr = ((BaseArr)((&ret2)->addr));
    _parent_destructor_tmp_ = chpl_macro_tmp_684;
    chpl_check_nil((&_parent_destructor_tmp_)->addr, INT64(1240), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    chpl_macro_tmp_685.locale = (&_parent_destructor_tmp_)->locale;
    chpl_macro_tmp_685.addr = &(((&_parent_destructor_tmp_)->addr)->_arrCnt);
    _field_destructor_tmp_ = chpl_macro_tmp_685;
    chpl_macro_tmp_686.locale = (_field_destructor_tmp_).locale;
    chpl_macro_tmp_686.addr = &(((_field_destructor_tmp_).addr)->_cnt);
    _field_destructor_tmp_2 = chpl_macro_tmp_686;
    chpl_macro_tmp_687.locale = (_field_destructor_tmp_2).locale;
    chpl_macro_tmp_687.addr = &(((_field_destructor_tmp_2).addr)->_v);
    call_tmp3 = chpl_macro_tmp_687;
    T = (&call_tmp3)->addr;
    atomic_destroy_int_least64_t(T);
    chpl_macro_tmp_688.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_688.addr = T;
    call_tmp3 = chpl_macro_tmp_688;
    call_tmp4 = (&ret2)->locale;
    rvfDerefTmp = ret2;
    chpl_here_alloc_size = sizeof(chpl__class_localson_fn25_object);
    chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(36));
    _args_foron_fn = ((_class_localson_fn25)(chpl_here_alloc_tmp));
    chpl_check_nil(_args_foron_fn, INT64(1240), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    (_args_foron_fn)->_0__tmp = call_tmp4;
    chpl_check_nil(_args_foron_fn, INT64(1240), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    (_args_foron_fn)->_1_rvfDerefTmp = rvfDerefTmp;
    /*** wrapon_fn25 ***/ chpl_executeOn(&call_tmp4, INT32(26), _args_foron_fn, sizeof(chpl__class_localson_fn25_object), INT64(1240), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    chpl_here_free(((void*)(_args_foron_fn)));
  }
  return;
}

/* ChapelArray.chpl:1236 */
static void on_fn21(chpl____wide_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F* const this8) {
  chpl____wide_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F ret = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t wrap_call_tmp;
  chpl____wide_BaseArr call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp2;
  chpl____wide_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F delete_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F ret2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F _field_destructor_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F _field_destructor_tmp_2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F _field_destructor_tmp_3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr _parent_destructor_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_refcnt _field_destructor_tmp_4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int64 _field_destructor_tmp_5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int_least64_t call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomic_int_least64_t T = NULL;
  chpl_localeID_t call_tmp4;
  chpl____wide_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn26 _args_foron_fn = NULL;
  int64_t chpl_here_alloc_size;
  chpl_opaque chpl_here_alloc_tmp;
  chpl____wide_BaseArr chpl_macro_tmp_689;
  chpl____wide__ref_DefaultRectangularArr_chpldev_Task_1_int64_t_F chpl_macro_tmp_690;
  chpl____wide__ref_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_691;
  chpl____wide__ref_DefaultRectangularArr_chpldev_Task_1_int64_t_F chpl_macro_tmp_692;
  chpl____wide_BaseArr chpl_macro_tmp_693;
  chpl____wide__ref_atomic_refcnt chpl_macro_tmp_694;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_695;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_696;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_697;
  ret = *(this8);
  chpl_macro_tmp_689.locale = (&ret)->locale;
  chpl_macro_tmp_689.addr = ((BaseArr)((&ret)->addr));
  call_tmp = chpl_macro_tmp_689;
  chpl_check_nil((&call_tmp)->addr, INT64(1237), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  wrap_call_tmp = destroyArr(&call_tmp);
  call_tmp2 = (wrap_call_tmp == INT64(0));
  if (call_tmp2) {
    chpl_decRefCountsForDomainsInArrayEltTypes4();
    ret2 = *(this8);
    delete_tmp = ret2;
    chpl_check_nil((&delete_tmp)->addr, INT64(1240), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    chpl_macro_tmp_690.locale = (&delete_tmp)->locale;
    chpl_macro_tmp_690.addr = &(((&delete_tmp)->addr)->tmpTable);
    chpl_gen_comm_get(((void*)(&_field_destructor_tmp_)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_690).locale), INT64(0), NULL), (chpl_macro_tmp_690).addr, sizeof(chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F), -1, INT64(1), INT64(1240), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    chpl__autoDestroy7(&_field_destructor_tmp_);
    chpl_check_nil((&delete_tmp)->addr, INT64(1240), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    chpl_macro_tmp_691.locale = (&delete_tmp)->locale;
    chpl_macro_tmp_691.addr = &(((&delete_tmp)->addr)->tmpDom);
    chpl_gen_comm_get(((void*)(&_field_destructor_tmp_2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_691).locale), INT64(0), NULL), (chpl_macro_tmp_691).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), -1, INT64(1), INT64(1240), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    chpl__autoDestroy2(&_field_destructor_tmp_2);
    chpl_check_nil((&delete_tmp)->addr, INT64(1240), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    chpl_macro_tmp_692.locale = (&delete_tmp)->locale;
    chpl_macro_tmp_692.addr = &(((&delete_tmp)->addr)->data);
    chpl_gen_comm_get(((void*)(&_field_destructor_tmp_3)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_692).locale), INT64(0), NULL), (chpl_macro_tmp_692).addr, sizeof(chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F), -1, INT64(1), INT64(1240), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    chpl__autoDestroy7(&_field_destructor_tmp_3);
    chpl_macro_tmp_693.locale = (&ret2)->locale;
    chpl_macro_tmp_693.addr = ((BaseArr)((&ret2)->addr));
    _parent_destructor_tmp_ = chpl_macro_tmp_693;
    chpl_check_nil((&_parent_destructor_tmp_)->addr, INT64(1240), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    chpl_macro_tmp_694.locale = (&_parent_destructor_tmp_)->locale;
    chpl_macro_tmp_694.addr = &(((&_parent_destructor_tmp_)->addr)->_arrCnt);
    _field_destructor_tmp_4 = chpl_macro_tmp_694;
    chpl_macro_tmp_695.locale = (_field_destructor_tmp_4).locale;
    chpl_macro_tmp_695.addr = &(((_field_destructor_tmp_4).addr)->_cnt);
    _field_destructor_tmp_5 = chpl_macro_tmp_695;
    chpl_macro_tmp_696.locale = (_field_destructor_tmp_5).locale;
    chpl_macro_tmp_696.addr = &(((_field_destructor_tmp_5).addr)->_v);
    call_tmp3 = chpl_macro_tmp_696;
    T = (&call_tmp3)->addr;
    atomic_destroy_int_least64_t(T);
    chpl_macro_tmp_697.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_697.addr = T;
    call_tmp3 = chpl_macro_tmp_697;
    call_tmp4 = (&ret2)->locale;
    rvfDerefTmp = ret2;
    chpl_here_alloc_size = sizeof(chpl__class_localson_fn26_object);
    chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(36));
    _args_foron_fn = ((_class_localson_fn26)(chpl_here_alloc_tmp));
    chpl_check_nil(_args_foron_fn, INT64(1240), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    (_args_foron_fn)->_0__tmp = call_tmp4;
    chpl_check_nil(_args_foron_fn, INT64(1240), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    (_args_foron_fn)->_1_rvfDerefTmp = rvfDerefTmp;
    /*** wrapon_fn26 ***/ chpl_executeOn(&call_tmp4, INT32(27), _args_foron_fn, sizeof(chpl__class_localson_fn26_object), INT64(1240), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    chpl_here_free(((void*)(_args_foron_fn)));
  }
  return;
}

/* ChapelArray.chpl:1236 */
static void wrapon_fn17(_class_localson_fn17 c) {
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F _1_this = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_check_nil(c, INT64(1236), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  _1_this = (c)->_1_this;
  on_fn17(&_1_this);
  return;
}

/* ChapelArray.chpl:1236 */
static void wrapon_fn18(_class_localson_fn18 c) {
  chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F _1_this = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_check_nil(c, INT64(1236), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  _1_this = (c)->_1_this;
  on_fn18(&_1_this);
  return;
}

/* ChapelArray.chpl:1236 */
static void wrapon_fn19(_class_localson_fn19 c) {
  chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F _1_this = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_check_nil(c, INT64(1236), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  _1_this = (c)->_1_this;
  on_fn19(&_1_this);
  return;
}

/* ChapelArray.chpl:1236 */
static void wrapon_fn20(_class_localson_fn20 c) {
  chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F _1_this = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_check_nil(c, INT64(1236), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  _1_this = (c)->_1_this;
  on_fn20(&_1_this);
  return;
}

/* ChapelArray.chpl:1236 */
static void wrapon_fn21(_class_localson_fn21 c) {
  chpl____wide_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F _1_this = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_check_nil(c, INT64(1236), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  _1_this = (c)->_1_this;
  on_fn21(&_1_this);
  return;
}

/* ChapelArray.chpl:1240 */
static void on_fn22(chpl____wide_DefaultRectangularArr_locale_1_int64_t_F* const delete_tmp) {
  chpl_opaque call_tmp;
  call_tmp = ((void*)((delete_tmp)->addr));
  chpl_here_free(call_tmp);
  return;
}

/* ChapelArray.chpl:1240 */
static void on_fn23(chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F* const delete_tmp) {
  chpl_opaque call_tmp;
  call_tmp = ((void*)((delete_tmp)->addr));
  chpl_here_free(call_tmp);
  return;
}

/* ChapelArray.chpl:1240 */
static void on_fn24(chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F* const delete_tmp) {
  chpl_opaque call_tmp;
  call_tmp = ((void*)((delete_tmp)->addr));
  chpl_here_free(call_tmp);
  return;
}

/* ChapelArray.chpl:1240 */
static void on_fn25(chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F* const delete_tmp) {
  chpl_opaque call_tmp;
  call_tmp = ((void*)((delete_tmp)->addr));
  chpl_here_free(call_tmp);
  return;
}

/* ChapelArray.chpl:1240 */
static void on_fn26(chpl____wide_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F* const delete_tmp) {
  chpl_opaque call_tmp;
  call_tmp = ((void*)((delete_tmp)->addr));
  chpl_here_free(call_tmp);
  return;
}

/* ChapelArray.chpl:1240 */
static void wrapon_fn22(_class_localson_fn22 c) {
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_check_nil(c, INT64(1240), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn22(&_1_rvfDerefTmp);
  return;
}

/* ChapelArray.chpl:1240 */
static void wrapon_fn23(_class_localson_fn23 c) {
  chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_check_nil(c, INT64(1240), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn23(&_1_rvfDerefTmp);
  return;
}

/* ChapelArray.chpl:1240 */
static void wrapon_fn24(_class_localson_fn24 c) {
  chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_check_nil(c, INT64(1240), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn24(&_1_rvfDerefTmp);
  return;
}

/* ChapelArray.chpl:1240 */
static void wrapon_fn25(_class_localson_fn25 c) {
  chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_check_nil(c, INT64(1240), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn25(&_1_rvfDerefTmp);
  return;
}

/* ChapelArray.chpl:1240 */
static void wrapon_fn26(_class_localson_fn26 c) {
  chpl____wide_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_check_nil(c, INT64(1240), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn26(&_1_rvfDerefTmp);
  return;
}

/* ChapelArray.chpl:1248 */
static void _dom(chpl____wide_DefaultRectangularArr_locale_1_int64_t_F* const this8, _ref_DefaultRectangularDom_1_int64_t_F _retArg) {
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F ret = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F ret2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F wrap_call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  chpl____wide__ref_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_698;
  ret = *(this8);
  call_tmp = ret;
  chpl_check_nil((&call_tmp)->addr, INT64(1248), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  chpl_macro_tmp_698.locale = (&call_tmp)->locale;
  chpl_macro_tmp_698.addr = &(((&call_tmp)->addr)->dom);
  chpl_gen_comm_get(((void*)(&ret2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_698).locale), INT64(0), NULL), (chpl_macro_tmp_698).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), -1, INT64(1), INT64(1248), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  ret_to_arg_ref_tmp_ = &wrap_call_tmp;
  _getDomain(&ret2, ret_to_arg_ref_tmp_);
  call_tmp2 = wrap_call_tmp;
  *(_retArg) = chpl__initCopy2(&wrap_call_tmp);
  chpl__autoDestroy2(&call_tmp2);
  return;
}

/* ChapelArray.chpl:1248 */
static void _dom2(chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F* const this8, _ref_DefaultRectangularDom_1_int64_t_F _retArg) {
  chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F ret = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F ret2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F wrap_call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  chpl____wide__ref_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_699;
  ret = *(this8);
  call_tmp = ret;
  chpl_check_nil((&call_tmp)->addr, INT64(1248), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  chpl_macro_tmp_699.locale = (&call_tmp)->locale;
  chpl_macro_tmp_699.addr = &(((&call_tmp)->addr)->dom);
  chpl_gen_comm_get(((void*)(&ret2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_699).locale), INT64(0), NULL), (chpl_macro_tmp_699).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), -1, INT64(1), INT64(1248), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  ret_to_arg_ref_tmp_ = &wrap_call_tmp;
  _getDomain(&ret2, ret_to_arg_ref_tmp_);
  *(_retArg) = wrap_call_tmp;
  return;
}

/* ChapelArray.chpl:1371 */
static void newAlias(chpl____wide_DefaultRectangularArr_locale_1_int64_t_F* const this8, _ref_DefaultRectangularArr_locale_1_int64_t_F _retArg) {
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F ret = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_DefaultRectangularArr_locale_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  ret = *(this8);
  ret_to_arg_ref_tmp_ = &call_tmp;
  _newArray(&ret, ret_to_arg_ref_tmp_);
  *(_retArg) = call_tmp;
  return;
}

/* ChapelArray.chpl:1565 */
static void chpl___ASSIGN_(chpl____wide_DefaultDist* const a, chpl____wide_DefaultDist* const b) {
  memory_order local_memory_order_seq_cst;
  chpl____wide_DefaultDist ret = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp2;
  chpl____wide_DefaultDist call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_DefaultDist ret_to_arg_ref_tmp_ = NULL;
  chpl____wide_DefaultDist ret2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDist call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDist call_tmp5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_list_BaseDom call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t ret3;
  chpl_bool call_tmp7;
  chpl____wide_DefaultDist ret4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultDist ret5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp9 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp10;
  chpl____wide_DefaultDist ret6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDist call_tmp11 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDist call_tmp12 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_refcnt call_tmp13 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int64 call_tmp14 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order default_argorder;
  chpl_localeID_t call_tmp15;
  _class_localson_fn7 _args_foron_fn = NULL;
  int64_t chpl_here_alloc_size;
  chpl_opaque chpl_here_alloc_tmp;
  chpl____wide_DefaultDist ret7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultDist ret8 = {CHPL_LOCALEID_T_INIT, NULL};
  c_string T;
  chpl____wide_object chpl_macro_tmp_700;
  chpl____wide_BaseDist chpl_macro_tmp_701;
  chpl____wide__ref_list_BaseDom chpl_macro_tmp_702;
  chpl____wide__ref_int64_t chpl_macro_tmp_703;
  chpl____wide_object chpl_macro_tmp_704;
  chpl____wide_object chpl_macro_tmp_705;
  chpl____wide_BaseDist chpl_macro_tmp_706;
  chpl____wide__ref_atomic_refcnt chpl_macro_tmp_707;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_708;
  local_memory_order_seq_cst = memory_order_seq_cst;
  ret = *(a);
  chpl_macro_tmp_700.locale = (&ret)->locale;
  chpl_macro_tmp_700.addr = ((object)((&ret)->addr));
  call_tmp = chpl_macro_tmp_700;
  call_tmp2 = (&call_tmp)->addr == nil;
  if (call_tmp2) {
    ret_to_arg_ref_tmp_ = &call_tmp3;
    chpl_check_nil((b)->addr, INT64(1567), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    clone2(b, ret_to_arg_ref_tmp_);
    *(a) = call_tmp3;
  } else {
    ret2 = *(a);
    chpl_macro_tmp_701.locale = (&ret2)->locale;
    chpl_macro_tmp_701.addr = ((BaseDist)((&ret2)->addr));
    call_tmp5 = chpl_macro_tmp_701;
    call_tmp4 = call_tmp5;
    chpl_check_nil((&call_tmp4)->addr, INT64(1568), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    chpl_macro_tmp_702.locale = (&call_tmp4)->locale;
    chpl_macro_tmp_702.addr = &(((&call_tmp4)->addr)->_doms);
    call_tmp6 = chpl_macro_tmp_702;
    chpl_macro_tmp_703.locale = (call_tmp6).locale;
    chpl_macro_tmp_703.addr = &(((call_tmp6).addr)->length);
    chpl_gen_comm_get(((void*)(&ret3)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_703).locale), INT64(0), NULL), (chpl_macro_tmp_703).addr, sizeof(int64_t), -1, INT64(1), INT64(1568), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    call_tmp7 = (ret3 == INT64(0));
    if (call_tmp7) {
      ret4 = *(a);
      ret5 = *(b);
      chpl_macro_tmp_704.locale = (&ret4)->locale;
      chpl_macro_tmp_704.addr = ((object)((&ret4)->addr));
      call_tmp8 = chpl_macro_tmp_704;
      chpl_macro_tmp_705.locale = (&ret5)->locale;
      chpl_macro_tmp_705.addr = ((object)((&ret5)->addr));
      call_tmp9 = chpl_macro_tmp_705;
      call_tmp10 = (! (((&call_tmp8)->addr != (&call_tmp9)->addr) || ((!(! (&call_tmp8)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp8)->locale), INT64(0), NULL) != chpl_nodeFromLocaleID(&((&call_tmp9)->locale), INT64(0), NULL)))));
      if (call_tmp10) {
        ret6 = *(a);
        chpl_macro_tmp_706.locale = (&ret6)->locale;
        chpl_macro_tmp_706.addr = ((BaseDist)((&ret6)->addr));
        call_tmp12 = chpl_macro_tmp_706;
        call_tmp11 = call_tmp12;
        compilerAssert();
        chpl_check_nil((&call_tmp11)->addr, INT64(1577), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
        chpl_macro_tmp_707.locale = (&call_tmp11)->locale;
        chpl_macro_tmp_707.addr = &(((&call_tmp11)->addr)->_distCnt);
        call_tmp13 = chpl_macro_tmp_707;
        chpl_macro_tmp_708.locale = (call_tmp13).locale;
        chpl_macro_tmp_708.addr = &(((call_tmp13).addr)->_cnt);
        call_tmp14 = chpl_macro_tmp_708;
        default_argorder = local_memory_order_seq_cst;
        call_tmp15 = (&call_tmp14)->locale;
        chpl_here_alloc_size = sizeof(chpl__class_localson_fn7_object);
        chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(36));
        _args_foron_fn = ((_class_localson_fn7)(chpl_here_alloc_tmp));
        chpl_check_nil(_args_foron_fn, INT64(1577), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
        (_args_foron_fn)->_0__tmp = call_tmp15;
        chpl_check_nil(_args_foron_fn, INT64(1577), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
        (_args_foron_fn)->_1_this = call_tmp14;
        chpl_check_nil(_args_foron_fn, INT64(1577), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
        (_args_foron_fn)->_2_value = INT64(1);
        chpl_check_nil(_args_foron_fn, INT64(1577), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
        (_args_foron_fn)->_3_order = default_argorder;
        /*** wrapon_fn7 ***/ chpl_executeOn(&call_tmp15, INT32(8), _args_foron_fn, sizeof(chpl__class_localson_fn7_object), INT64(1069), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
        chpl_here_free(((void*)(_args_foron_fn)));
      } else {
        ret7 = *(a);
        ret8 = *(b);
        chpl_check_nil((&ret7)->addr, INT64(1579), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
        dsiAssign(&ret7, &ret8);
      }
    } else {
      T = "assignment to distributions with declared domains is not yet supported";
      halt(T, INT64(1583), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    }
  }
  return;
}

/* ChapelArray.chpl:1587 */
static void chpl___ASSIGN_2(chpl____wide_DefaultRectangularDom_1_int64_t_F* const a, chpl____wide_DefaultRectangularDom_1_int64_t_F* const b) {
  chpl____wide_DefaultRectangularDom_1_int64_t_F ret = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDom call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDom call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  list_BaseArr ret2;
  list_BaseArr _ic__F0_this;
  chpl____wide_listNode_BaseArr tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseArr ret3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool T;
  chpl____wide_object call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp4;
  chpl____wide_BaseArr ret4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp5;
  chpl____wide_BaseArr rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn27 _args_foron_fn = NULL;
  int64_t chpl_here_alloc_size;
  chpl_opaque chpl_here_alloc_tmp;
  chpl____wide_listNode_BaseArr ret5 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_listNode_BaseArr _ref_tmp_ = NULL;
  chpl____wide_object call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp7;
  _tuple_1_star_range_int64_t_bounded_F call_tmp8;
  _ref__tuple_1_star_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
  chpl____wide_DefaultRectangularDom_1_int64_t_F ret6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDom call_tmp9 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDom call_tmp10 = {CHPL_LOCALEID_T_INIT, NULL};
  list_BaseArr ret7;
  list_BaseArr _ic__F0_this2;
  chpl____wide_listNode_BaseArr tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseArr ret8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool T2;
  chpl____wide_object call_tmp11 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp12;
  chpl____wide_BaseArr ret9 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp13;
  chpl____wide_BaseArr rvfDerefTmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn28 _args_foron_fn2 = NULL;
  int64_t chpl_here_alloc_size2;
  chpl_opaque chpl_here_alloc_tmp2;
  chpl____wide_listNode_BaseArr ret10 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_listNode_BaseArr _ref_tmp_2 = NULL;
  chpl____wide_object call_tmp14 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp15;
  chpl____wide_BaseDom chpl_macro_tmp_709;
  chpl____wide__ref_list_BaseArr chpl_macro_tmp_710;
  chpl____wide_object chpl_macro_tmp_711;
  chpl____wide__ref_BaseArr chpl_macro_tmp_712;
  chpl____wide__ref_listNode_BaseArr chpl_macro_tmp_713;
  chpl____wide_object chpl_macro_tmp_714;
  chpl____wide_BaseDom chpl_macro_tmp_715;
  chpl____wide__ref_list_BaseArr chpl_macro_tmp_716;
  chpl____wide_object chpl_macro_tmp_717;
  chpl____wide__ref_BaseArr chpl_macro_tmp_718;
  chpl____wide__ref_listNode_BaseArr chpl_macro_tmp_719;
  chpl____wide_object chpl_macro_tmp_720;
  ret = *(a);
  chpl_macro_tmp_709.locale = (&ret)->locale;
  chpl_macro_tmp_709.addr = ((BaseDom)((&ret)->addr));
  call_tmp2 = chpl_macro_tmp_709;
  call_tmp = call_tmp2;
  chpl_check_nil((&call_tmp)->addr, INT64(1589), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  chpl_macro_tmp_710.locale = (&call_tmp)->locale;
  chpl_macro_tmp_710.addr = &(((&call_tmp)->addr)->_arrs);
  chpl_gen_comm_get(((void*)(&ret2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_710).locale), INT64(0), NULL), (chpl_macro_tmp_710).addr, sizeof(list_BaseArr), -1, INT64(1), INT64(1589), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  _ic__F0_this = ret2;
  ret3 = (&_ic__F0_this)->first;
  tmp = ret3;
  chpl_macro_tmp_711.locale = (&ret3)->locale;
  chpl_macro_tmp_711.addr = ((object)((&ret3)->addr));
  call_tmp3 = chpl_macro_tmp_711;
  call_tmp4 = (&call_tmp3)->addr != nil;
  T = call_tmp4;
  while (T) {
    chpl_check_nil((&tmp)->addr, INT64(1589), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    chpl_macro_tmp_712.locale = (&tmp)->locale;
    chpl_macro_tmp_712.addr = &(((&tmp)->addr)->data);
    chpl_gen_comm_get(((void*)(&ret4)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_712).locale), INT64(0), NULL), (chpl_macro_tmp_712).addr, sizeof(chpl____wide_BaseArr), -1, INT64(1), INT64(1589), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    call_tmp5 = (&ret4)->locale;
    rvfDerefTmp = ret4;
    chpl_here_alloc_size = sizeof(chpl__class_localson_fn27_object);
    chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(36));
    _args_foron_fn = ((_class_localson_fn27)(chpl_here_alloc_tmp));
    chpl_check_nil(_args_foron_fn, INT64(1590), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    (_args_foron_fn)->_0__tmp = call_tmp5;
    chpl_check_nil(_args_foron_fn, INT64(1590), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    (_args_foron_fn)->_1_rvfDerefTmp = rvfDerefTmp;
    chpl_check_nil(_args_foron_fn, INT64(1590), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    (_args_foron_fn)->_2__tmp = *(b);
    /*** wrapon_fn27 ***/ chpl_executeOn(&call_tmp5, INT32(28), _args_foron_fn, sizeof(chpl__class_localson_fn27_object), INT64(1590), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    chpl_here_free(((void*)(_args_foron_fn)));
    chpl_check_nil((&tmp)->addr, INT64(1589), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    chpl_macro_tmp_713.locale = (&tmp)->locale;
    chpl_macro_tmp_713.addr = &(((&tmp)->addr)->next);
    chpl_gen_comm_get(((void*)(&ret5)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_713).locale), INT64(0), NULL), (chpl_macro_tmp_713).addr, sizeof(chpl____wide_listNode_BaseArr), -1, INT64(1), INT64(1589), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    _ref_tmp_ = &tmp;
    *(_ref_tmp_) = ret5;
    chpl_macro_tmp_714.locale = (&tmp)->locale;
    chpl_macro_tmp_714.addr = ((object)((&tmp)->addr));
    call_tmp6 = chpl_macro_tmp_714;
    call_tmp7 = (&call_tmp6)->addr != nil;
    T = call_tmp7;
  }
  ret_to_arg_ref_tmp_ = &call_tmp8;
  chpl_check_nil((b)->addr, INT64(1592), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  getIndices(b, ret_to_arg_ref_tmp_);
  chpl_check_nil((a)->addr, INT64(1592), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  setIndices(a, &call_tmp8);
  ret6 = *(a);
  chpl_macro_tmp_715.locale = (&ret6)->locale;
  chpl_macro_tmp_715.addr = ((BaseDom)((&ret6)->addr));
  call_tmp10 = chpl_macro_tmp_715;
  call_tmp9 = call_tmp10;
  chpl_check_nil((&call_tmp9)->addr, INT64(1593), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  chpl_macro_tmp_716.locale = (&call_tmp9)->locale;
  chpl_macro_tmp_716.addr = &(((&call_tmp9)->addr)->_arrs);
  chpl_gen_comm_get(((void*)(&ret7)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_716).locale), INT64(0), NULL), (chpl_macro_tmp_716).addr, sizeof(list_BaseArr), -1, INT64(1), INT64(1593), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  _ic__F0_this2 = ret7;
  ret8 = (&_ic__F0_this2)->first;
  tmp2 = ret8;
  chpl_macro_tmp_717.locale = (&ret8)->locale;
  chpl_macro_tmp_717.addr = ((object)((&ret8)->addr));
  call_tmp11 = chpl_macro_tmp_717;
  call_tmp12 = (&call_tmp11)->addr != nil;
  T2 = call_tmp12;
  while (T2) {
    chpl_check_nil((&tmp2)->addr, INT64(1593), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    chpl_macro_tmp_718.locale = (&tmp2)->locale;
    chpl_macro_tmp_718.addr = &(((&tmp2)->addr)->data);
    chpl_gen_comm_get(((void*)(&ret9)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_718).locale), INT64(0), NULL), (chpl_macro_tmp_718).addr, sizeof(chpl____wide_BaseArr), -1, INT64(1), INT64(1593), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    call_tmp13 = (&ret9)->locale;
    rvfDerefTmp2 = ret9;
    chpl_here_alloc_size2 = sizeof(chpl__class_localson_fn28_object);
    chpl_here_alloc_tmp2 = chpl_here_alloc(chpl_here_alloc_size2, INT16(36));
    _args_foron_fn2 = ((_class_localson_fn28)(chpl_here_alloc_tmp2));
    chpl_check_nil(_args_foron_fn2, INT64(1594), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    (_args_foron_fn2)->_0__tmp = call_tmp13;
    chpl_check_nil(_args_foron_fn2, INT64(1594), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    (_args_foron_fn2)->_1_rvfDerefTmp = rvfDerefTmp2;
    /*** wrapon_fn28 ***/ chpl_executeOnFast(&call_tmp13, INT32(29), _args_foron_fn2, sizeof(chpl__class_localson_fn28_object), INT64(1594), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    chpl_here_free(((void*)(_args_foron_fn2)));
    chpl_check_nil((&tmp2)->addr, INT64(1593), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    chpl_macro_tmp_719.locale = (&tmp2)->locale;
    chpl_macro_tmp_719.addr = &(((&tmp2)->addr)->next);
    chpl_gen_comm_get(((void*)(&ret10)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_719).locale), INT64(0), NULL), (chpl_macro_tmp_719).addr, sizeof(chpl____wide_listNode_BaseArr), -1, INT64(1), INT64(1593), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    _ref_tmp_2 = &tmp2;
    *(_ref_tmp_2) = ret10;
    chpl_macro_tmp_720.locale = (&tmp2)->locale;
    chpl_macro_tmp_720.addr = ((object)((&tmp2)->addr));
    call_tmp14 = chpl_macro_tmp_720;
    call_tmp15 = (&call_tmp14)->addr != nil;
    T2 = call_tmp15;
  }
  return;
}

/* ChapelArray.chpl:1590 */
static void on_fn27(chpl____wide_BaseArr* const e, chpl____wide_DefaultRectangularDom_1_int64_t_F* const b) {
  chpl_bool _dynamic_dispatch_tmp_;
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F _cast_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool _dynamic_dispatch_tmp_2;
  chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F _cast_tmp_2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool _dynamic_dispatch_tmp_3;
  chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F _cast_tmp_3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool _dynamic_dispatch_tmp_4;
  chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F _cast_tmp_4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_int32_t chpl_macro_tmp_721;
  int32_t chpl_macro_tmp_722;
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F chpl_macro_tmp_723;
  chpl____wide__ref_int32_t chpl_macro_tmp_724;
  int32_t chpl_macro_tmp_725;
  chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F chpl_macro_tmp_726;
  chpl____wide__ref_int32_t chpl_macro_tmp_727;
  int32_t chpl_macro_tmp_728;
  chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F chpl_macro_tmp_729;
  chpl____wide__ref_int32_t chpl_macro_tmp_730;
  int32_t chpl_macro_tmp_731;
  chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F chpl_macro_tmp_732;
  chpl_check_nil((e)->addr, INT64(1590), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  chpl_macro_tmp_721.locale = (e)->locale;
  chpl_macro_tmp_721.addr = &(((object)((e)->addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_722)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_721).locale), INT64(0), NULL), (chpl_macro_tmp_721).addr, sizeof(int32_t), -1, INT64(1), INT64(1590), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  _dynamic_dispatch_tmp_ = (chpl_macro_tmp_722 == chpl__cid_DefaultRectangularArr_locale_1_int64_t_F);
  if (_dynamic_dispatch_tmp_) {
    chpl_macro_tmp_723.locale = (e)->locale;
    chpl_macro_tmp_723.addr = ((DefaultRectangularArr_locale_1_int64_t_F)((e)->addr));
    _cast_tmp_ = chpl_macro_tmp_723;
    chpl_check_nil((&_cast_tmp_)->addr, INT64(1590), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    dsiReallocate2(&_cast_tmp_, b);
  } else {
    chpl_check_nil((e)->addr, INT64(1590), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    chpl_macro_tmp_724.locale = (e)->locale;
    chpl_macro_tmp_724.addr = &(((object)((e)->addr))->chpl__cid);
    chpl_gen_comm_get(((void*)(&chpl_macro_tmp_725)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_724).locale), INT64(0), NULL), (chpl_macro_tmp_724).addr, sizeof(int32_t), -1, INT64(1), INT64(1590), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    _dynamic_dispatch_tmp_2 = (chpl_macro_tmp_725 == chpl__cid_DefaultRectangularArr_localesSignal_1_int64_t_F);
    if (_dynamic_dispatch_tmp_2) {
      chpl_macro_tmp_726.locale = (e)->locale;
      chpl_macro_tmp_726.addr = ((DefaultRectangularArr_localesSignal_1_int64_t_F)((e)->addr));
      _cast_tmp_2 = chpl_macro_tmp_726;
      chpl_check_nil((&_cast_tmp_2)->addr, INT64(1590), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
      dsiReallocate3(&_cast_tmp_2, b);
    } else {
      chpl_check_nil((e)->addr, INT64(1590), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
      chpl_macro_tmp_727.locale = (e)->locale;
      chpl_macro_tmp_727.addr = &(((object)((e)->addr))->chpl__cid);
      chpl_gen_comm_get(((void*)(&chpl_macro_tmp_728)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_727).locale), INT64(0), NULL), (chpl_macro_tmp_727).addr, sizeof(int32_t), -1, INT64(1), INT64(1590), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
      _dynamic_dispatch_tmp_3 = (chpl_macro_tmp_728 == chpl__cid_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F);
      if (_dynamic_dispatch_tmp_3) {
        chpl_macro_tmp_729.locale = (e)->locale;
        chpl_macro_tmp_729.addr = ((DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F)((e)->addr));
        _cast_tmp_3 = chpl_macro_tmp_729;
        chpl_check_nil((&_cast_tmp_3)->addr, INT64(1590), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
        dsiReallocate4(&_cast_tmp_3, b);
      } else {
        chpl_check_nil((e)->addr, INT64(1590), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
        chpl_macro_tmp_730.locale = (e)->locale;
        chpl_macro_tmp_730.addr = &(((object)((e)->addr))->chpl__cid);
        chpl_gen_comm_get(((void*)(&chpl_macro_tmp_731)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_730).locale), INT64(0), NULL), (chpl_macro_tmp_730).addr, sizeof(int32_t), -1, INT64(1), INT64(1590), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
        _dynamic_dispatch_tmp_4 = (chpl_macro_tmp_731 == chpl__cid_DefaultRectangularArr_chpldev_Task_1_int64_t_F);
        if (_dynamic_dispatch_tmp_4) {
          chpl_macro_tmp_732.locale = (e)->locale;
          chpl_macro_tmp_732.addr = ((DefaultRectangularArr_chpldev_Task_1_int64_t_F)((e)->addr));
          _cast_tmp_4 = chpl_macro_tmp_732;
          chpl_check_nil((&_cast_tmp_4)->addr, INT64(1590), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
          dsiReallocate5(&_cast_tmp_4, b);
        } else {
          chpl_check_nil((e)->addr, INT64(1590), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
          dsiReallocate(e, b);
        }
      }
    }
  }
  return;
}

/* ChapelArray.chpl:1590 */
static void wrapon_fn27(_class_localson_fn27 c) {
  chpl____wide_BaseArr _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F _2__tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_check_nil(c, INT64(1590), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  chpl_check_nil(c, INT64(1590), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  _2__tmp = (c)->_2__tmp;
  on_fn27(&_1_rvfDerefTmp, &_2__tmp);
  return;
}

/* ChapelArray.chpl:1594 */
static void on_fn28(chpl____wide_BaseArr* const e) {
  chpl_check_nil((e)->addr, INT64(1594), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  dsiPostReallocate(e);
  return;
}

/* ChapelArray.chpl:1594 */
static void wrapon_fn28(_class_localson_fn28 c) {
  chpl____wide_BaseArr _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_check_nil(c, INT64(1594), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn28(&_1_rvfDerefTmp);
  return;
}

/* ChapelArray.chpl:1771 */
static void checkArrayShapesUponAssignment(chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F* const a, chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F* const b) {
  range_int64_t_bounded_F aDims_x1;
  chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F ret = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F ret_x1;
  _tuple_1_star_range_int64_t_bounded_F wrap_call_tmp;
  chpl____wide_DefaultRectangularDom_1_int64_t_F call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__tuple_1_star_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
  range_int64_t_bounded_F bDims_x1;
  chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F ret2 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F ret_x12;
  _tuple_1_star_range_int64_t_bounded_F wrap_call_tmp2;
  chpl____wide_DefaultRectangularDom_1_int64_t_F call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__tuple_1_star_range_int64_t_bounded_F ret_to_arg_ref_tmp_2 = NULL;
  _ref_rangeBase_int64_t_bounded_F call_tmp5 = NULL;
  int64_t call_tmp6;
  chpl____wide__ref_rangeBase_int64_t_bounded_F T = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_rangeBase_int64_t_bounded_F call_tmp7 = NULL;
  int64_t call_tmp8;
  chpl____wide__ref_rangeBase_int64_t_bounded_F T2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp9;
  _ref_rangeBase_int64_t_bounded_F call_tmp10 = NULL;
  int64_t call_tmp11;
  chpl____wide__ref_rangeBase_int64_t_bounded_F T3 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_rangeBase_int64_t_bounded_F call_tmp12 = NULL;
  int64_t call_tmp13;
  chpl____wide__ref_rangeBase_int64_t_bounded_F T4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_chpl_string call_tmp14 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_chpl_string call_tmp15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_chpl_string call_tmp16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_733;
  chpl____wide__ref_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_734;
  chpl____wide__ref_rangeBase_int64_t_bounded_F chpl_macro_tmp_735;
  chpl____wide__ref_rangeBase_int64_t_bounded_F chpl_macro_tmp_736;
  chpl____wide__ref_rangeBase_int64_t_bounded_F chpl_macro_tmp_737;
  chpl____wide__ref_rangeBase_int64_t_bounded_F chpl_macro_tmp_738;
  ret = *(a);
  call_tmp = ret;
  chpl_check_nil((&call_tmp)->addr, INT64(1773), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  chpl_macro_tmp_733.locale = (&call_tmp)->locale;
  chpl_macro_tmp_733.addr = &(((&call_tmp)->addr)->dom);
  chpl_gen_comm_get(((void*)(&call_tmp2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_733).locale), INT64(0), NULL), (chpl_macro_tmp_733).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), -1, INT64(1), INT64(1773), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  ret_to_arg_ref_tmp_ = &wrap_call_tmp;
  chpl_check_nil((&call_tmp2)->addr, INT64(1773), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  dsiDims(&call_tmp2, ret_to_arg_ref_tmp_);
  ret_x1 = *(wrap_call_tmp + INT64(0));
  aDims_x1 = ret_x1;
  ret2 = *(b);
  call_tmp3 = ret2;
  chpl_check_nil((&call_tmp3)->addr, INT64(1774), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  chpl_macro_tmp_734.locale = (&call_tmp3)->locale;
  chpl_macro_tmp_734.addr = &(((&call_tmp3)->addr)->dom);
  chpl_gen_comm_get(((void*)(&call_tmp4)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_734).locale), INT64(0), NULL), (chpl_macro_tmp_734).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), -1, INT64(1), INT64(1774), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  ret_to_arg_ref_tmp_2 = &wrap_call_tmp2;
  chpl_check_nil((&call_tmp4)->addr, INT64(1774), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  dsiDims(&call_tmp4, ret_to_arg_ref_tmp_2);
  ret_x12 = *(wrap_call_tmp2 + INT64(0));
  bDims_x1 = ret_x12;
  compilerAssert();
  call_tmp5 = &((&aDims_x1)->_base);
  chpl_macro_tmp_735.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_735.addr = call_tmp5;
  T = chpl_macro_tmp_735;
  call_tmp6 = length(&T);
  call_tmp7 = &((&bDims_x1)->_base);
  chpl_macro_tmp_736.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_736.addr = call_tmp7;
  T2 = chpl_macro_tmp_736;
  call_tmp8 = length(&T2);
  call_tmp9 = (call_tmp6 != call_tmp8);
  if (call_tmp9) {
    call_tmp10 = &((&aDims_x1)->_base);
    chpl_macro_tmp_737.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_737.addr = call_tmp10;
    T3 = chpl_macro_tmp_737;
    call_tmp11 = length(&T3);
    call_tmp12 = &((&bDims_x1)->_base);
    chpl_macro_tmp_738.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_738.addr = call_tmp12;
    T4 = chpl_macro_tmp_738;
    call_tmp13 = length(&T4);
    wide_string_from_c_string(&call_tmp14, "assigning between arrays of different shapes in dimension ", INT64(0), INT64(0), INT64(1778), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    wide_string_from_c_string(&call_tmp15, ": ", INT64(0), INT64(0), INT64(1778), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    wide_string_from_c_string(&call_tmp16, " vs. ", INT64(0), INT64(0), INT64(1778), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    halt4(call_tmp14, INT64(1), call_tmp15, call_tmp11, call_tmp16, call_tmp13, INT64(1778), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  }
  return;
}

/* ChapelArray.chpl:1771 */
static void checkArrayShapesUponAssignment2(chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F* const a, chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F* const b) {
  range_int64_t_bounded_F aDims_x1;
  chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F ret = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F ret_x1;
  _tuple_1_star_range_int64_t_bounded_F wrap_call_tmp;
  chpl____wide_DefaultRectangularDom_1_int64_t_F call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__tuple_1_star_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
  range_int64_t_bounded_F bDims_x1;
  chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F ret2 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F ret_x12;
  _tuple_1_star_range_int64_t_bounded_F wrap_call_tmp2;
  chpl____wide_DefaultRectangularDom_1_int64_t_F call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__tuple_1_star_range_int64_t_bounded_F ret_to_arg_ref_tmp_2 = NULL;
  _ref_rangeBase_int64_t_bounded_F call_tmp5 = NULL;
  int64_t call_tmp6;
  chpl____wide__ref_rangeBase_int64_t_bounded_F T = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_rangeBase_int64_t_bounded_F call_tmp7 = NULL;
  int64_t call_tmp8;
  chpl____wide__ref_rangeBase_int64_t_bounded_F T2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp9;
  _ref_rangeBase_int64_t_bounded_F call_tmp10 = NULL;
  int64_t call_tmp11;
  chpl____wide__ref_rangeBase_int64_t_bounded_F T3 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_rangeBase_int64_t_bounded_F call_tmp12 = NULL;
  int64_t call_tmp13;
  chpl____wide__ref_rangeBase_int64_t_bounded_F T4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_chpl_string call_tmp14 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_chpl_string call_tmp15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_chpl_string call_tmp16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_739;
  chpl____wide__ref_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_740;
  chpl____wide__ref_rangeBase_int64_t_bounded_F chpl_macro_tmp_741;
  chpl____wide__ref_rangeBase_int64_t_bounded_F chpl_macro_tmp_742;
  chpl____wide__ref_rangeBase_int64_t_bounded_F chpl_macro_tmp_743;
  chpl____wide__ref_rangeBase_int64_t_bounded_F chpl_macro_tmp_744;
  ret = *(a);
  call_tmp = ret;
  chpl_check_nil((&call_tmp)->addr, INT64(1773), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  chpl_macro_tmp_739.locale = (&call_tmp)->locale;
  chpl_macro_tmp_739.addr = &(((&call_tmp)->addr)->dom);
  chpl_gen_comm_get(((void*)(&call_tmp2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_739).locale), INT64(0), NULL), (chpl_macro_tmp_739).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), -1, INT64(1), INT64(1773), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  ret_to_arg_ref_tmp_ = &wrap_call_tmp;
  chpl_check_nil((&call_tmp2)->addr, INT64(1773), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  dsiDims(&call_tmp2, ret_to_arg_ref_tmp_);
  ret_x1 = *(wrap_call_tmp + INT64(0));
  aDims_x1 = ret_x1;
  ret2 = *(b);
  call_tmp3 = ret2;
  chpl_check_nil((&call_tmp3)->addr, INT64(1774), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  chpl_macro_tmp_740.locale = (&call_tmp3)->locale;
  chpl_macro_tmp_740.addr = &(((&call_tmp3)->addr)->dom);
  chpl_gen_comm_get(((void*)(&call_tmp4)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_740).locale), INT64(0), NULL), (chpl_macro_tmp_740).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), -1, INT64(1), INT64(1774), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  ret_to_arg_ref_tmp_2 = &wrap_call_tmp2;
  chpl_check_nil((&call_tmp4)->addr, INT64(1774), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  dsiDims(&call_tmp4, ret_to_arg_ref_tmp_2);
  ret_x12 = *(wrap_call_tmp2 + INT64(0));
  bDims_x1 = ret_x12;
  compilerAssert();
  call_tmp5 = &((&aDims_x1)->_base);
  chpl_macro_tmp_741.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_741.addr = call_tmp5;
  T = chpl_macro_tmp_741;
  call_tmp6 = length(&T);
  call_tmp7 = &((&bDims_x1)->_base);
  chpl_macro_tmp_742.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_742.addr = call_tmp7;
  T2 = chpl_macro_tmp_742;
  call_tmp8 = length(&T2);
  call_tmp9 = (call_tmp6 != call_tmp8);
  if (call_tmp9) {
    call_tmp10 = &((&aDims_x1)->_base);
    chpl_macro_tmp_743.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_743.addr = call_tmp10;
    T3 = chpl_macro_tmp_743;
    call_tmp11 = length(&T3);
    call_tmp12 = &((&bDims_x1)->_base);
    chpl_macro_tmp_744.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_744.addr = call_tmp12;
    T4 = chpl_macro_tmp_744;
    call_tmp13 = length(&T4);
    wide_string_from_c_string(&call_tmp14, "assigning between arrays of different shapes in dimension ", INT64(0), INT64(0), INT64(1778), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    wide_string_from_c_string(&call_tmp15, ": ", INT64(0), INT64(0), INT64(1778), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    wide_string_from_c_string(&call_tmp16, " vs. ", INT64(0), INT64(0), INT64(1778), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
    halt4(call_tmp14, INT64(1), call_tmp15, call_tmp11, call_tmp16, call_tmp13, INT64(1778), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  }
  return;
}

/* ChapelArray.chpl:1839 */
static void wrapcoforall_fn(_class_localscoforall_fn c) {
  _tuple_1_star_range_int64_t_bounded_F _0_locBlock;
  int64_t _1_parDim;
  int64_t _2_numChunks;
  int64_t _3_chunk;
  chpl____wide__EndCount _4_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _tuple_2_star__array_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F _5_rvfDerefTmp;
  chpl_check_nil(c, INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  *(_0_locBlock + INT64(0)) = *((c)->_0_locBlock + INT64(0));
  chpl_check_nil(c, INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  _1_parDim = (c)->_1_parDim;
  chpl_check_nil(c, INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  _2_numChunks = (c)->_2_numChunks;
  chpl_check_nil(c, INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  _3_chunk = (c)->_3_chunk;
  chpl_check_nil(c, INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  _4_rvfDerefTmp = (c)->_4_rvfDerefTmp;
  chpl_check_nil(c, INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  *(_5_rvfDerefTmp + INT64(0)) = *((c)->_5_rvfDerefTmp + INT64(0));
  *(_5_rvfDerefTmp + INT64(1)) = *((c)->_5_rvfDerefTmp + INT64(1));
  coforall_fn(&_0_locBlock, _1_parDim, _2_numChunks, _3_chunk, &_4_rvfDerefTmp, &_5_rvfDerefTmp);
  chpl_here_free(((void*)(c)));
  return;
}

/* ChapelArray.chpl:1839 */
static void wrapcoforall_fn2(_class_localscoforall_fn2 c) {
  _tuple_1_star_range_int64_t_bounded_F _0_locBlock;
  int64_t _1_parDim;
  int64_t _2_numChunks;
  int64_t _3_chunk;
  chpl____wide__EndCount _4_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _tuple_2_star__array_DefaultRectangularArr_chpldev_Task_1_int64_t_F_DefaultRectangularArr_chpldev_Task_1_int64_t_F _5_rvfDerefTmp;
  chpl_check_nil(c, INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  *(_0_locBlock + INT64(0)) = *((c)->_0_locBlock + INT64(0));
  chpl_check_nil(c, INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  _1_parDim = (c)->_1_parDim;
  chpl_check_nil(c, INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  _2_numChunks = (c)->_2_numChunks;
  chpl_check_nil(c, INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  _3_chunk = (c)->_3_chunk;
  chpl_check_nil(c, INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  _4_rvfDerefTmp = (c)->_4_rvfDerefTmp;
  chpl_check_nil(c, INT64(1839), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  *(_5_rvfDerefTmp + INT64(0)) = *((c)->_5_rvfDerefTmp + INT64(0));
  *(_5_rvfDerefTmp + INT64(1)) = *((c)->_5_rvfDerefTmp + INT64(1));
  coforall_fn2(&_0_locBlock, _1_parDim, _2_numChunks, _3_chunk, &_4_rvfDerefTmp, &_5_rvfDerefTmp);
  chpl_here_free(((void*)(c)));
  return;
}

/* ChapelArray.chpl:1928 */
static void chpl__auto_destroy__OpaqueIndex(chpl___OpaqueIndex this8) {
  return;
}

/* ChapelArray.chpl:2221 */
static chpl____wide_DefaultDist chpl__initCopy(chpl____wide_DefaultDist* const a) {
  chpl____wide_DefaultDist call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_DefaultDist ret_to_arg_ref_tmp_ = NULL;
  ret_to_arg_ref_tmp_ = &call_tmp;
  chpl_check_nil((a)->addr, INT64(2222), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  clone2(a, ret_to_arg_ref_tmp_);
  return call_tmp;
}

/* ChapelArray.chpl:2227 */
static chpl____wide_DefaultRectangularDom_1_int64_t_F chpl__initCopy2(chpl____wide_DefaultRectangularDom_1_int64_t_F* const a) {
  chpl____wide_DefaultRectangularDom_1_int64_t_F type_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl___RuntimeTypeInfo call_tmp;
  chpl____wide_DefaultDist _runtime_type_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  chpl____wide_DefaultRectangularDom_1_int64_t_F b = {CHPL_LOCALEID_T_INIT, NULL};
  _tuple_1_star_range_int64_t_bounded_F call_tmp2;
  _ref__tuple_1_star_range_int64_t_bounded_F ret_to_arg_ref_tmp_2 = NULL;
  call_tmp = chpl__convertValueToRuntimeType(a);
  _runtime_type_tmp_ = (&call_tmp)->d;
  ret_to_arg_ref_tmp_ = &type_tmp;
  chpl__convertRuntimeTypeToValue(&_runtime_type_tmp_, ret_to_arg_ref_tmp_);
  b = type_tmp;
  ret_to_arg_ref_tmp_2 = &call_tmp2;
  chpl_check_nil((a)->addr, INT64(2230), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  getIndices(a, ret_to_arg_ref_tmp_2);
  chpl_check_nil((&type_tmp)->addr, INT64(2230), "/home/kp167/chap-svn/modules/internal/ChapelArray.chpl");
  setIndices(&type_tmp, &call_tmp2);
  return b;
}

