/* ChapelRange.chpl:4 */
static void chpl__init_ChapelRange(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  if (chpl__init_ChapelRange_p) {
    goto _exit_chpl__init_ChapelRange;
  }
  modFormatStr = "%*s\n";
  modStr = "ChapelRange";
  printModuleInit(modFormatStr, modStr, INT64(11));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_ChapelRange_p = true;
  {
    chpl__init_ChapelRangeBase(INT64(4), "/home/kp167/chap-svn/modules/internal/ChapelRange.chpl");
  }
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_ChapelRange:;
  return;
}

/* ChapelRange.chpl:27 */
static range_int64_t_bounded_F _construct_range(rangeBase_int64_t_bounded_F* const _base, chpl_bool _aligned, range_int64_t_bounded_F* const meme) {
  range_int64_t_bounded_F this8;
  this8 = *(meme);
  (&this8)->_base = *(_base);
  (&this8)->_aligned = _aligned;
  return this8;
}

/* ChapelRange.chpl:27 */
static range_int64_t_boundedLow_F _construct_range2(rangeBase_int64_t_boundedLow_F* const _base, chpl_bool _aligned, range_int64_t_boundedLow_F* const meme) {
  range_int64_t_boundedLow_F this8;
  this8 = *(meme);
  (&this8)->_base = *(_base);
  (&this8)->_aligned = _aligned;
  return this8;
}

/* ChapelRange.chpl:71 */
static range_int64_t_bounded_F range(int64_t _low, int64_t _high, int64_t _stride, int64_t _alignment, chpl_bool _aligned) {
  range_int64_t_bounded_F this8;
  range_int64_t_bounded_F this9;
  rangeBase_int64_t_bounded_F _init_class_tmp_;
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
  _ref_rangeBase_int64_t_bounded_F call_tmp = NULL;
  rangeBase_int64_t_bounded_F call_tmp2;
  _ref_chpl_bool call_tmp3 = NULL;
  (&_init_class_tmp_)->_low = INT64(0);
  (&_init_class_tmp_)->_high = INT64(0);
  (&_init_class_tmp_)->_stride = INT64(0);
  (&_init_class_tmp_)->_alignment = INT64(0);
  (&this9)->_base = _init_class_tmp_;
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
  this8 = wrap_call_tmp2;
  call_tmp = &((&this8)->_base);
  call_tmp2 = rangeBase(_low, _high, _stride, _alignment);
  chpl___ASSIGN_3(call_tmp, &call_tmp2);
  call_tmp3 = &((&this8)->_aligned);
  *(call_tmp3) = _aligned;
  return this8;
}

/* ChapelRange.chpl:71 */
static range_int64_t_boundedLow_F range2(int64_t _low, int64_t _high, int64_t _stride, int64_t _alignment, chpl_bool _aligned) {
  range_int64_t_boundedLow_F this8;
  range_int64_t_boundedLow_F this9;
  rangeBase_int64_t_boundedLow_F _init_class_tmp_;
  rangeBase_int64_t_boundedLow_F this10;
  int64_t x;
  _ref_int64_t _ref_tmp_ = NULL;
  int64_t x2;
  _ref_int64_t _ref_tmp_2 = NULL;
  int64_t x3;
  _ref_int64_t _ref_tmp_3 = NULL;
  int64_t x4;
  _ref_int64_t _ref_tmp_4 = NULL;
  rangeBase_int64_t_boundedLow_F wrap_call_tmp;
  chpl_bool x5;
  _ref_chpl_bool _ref_tmp_5 = NULL;
  range_int64_t_boundedLow_F wrap_call_tmp2;
  _ref_rangeBase_int64_t_boundedLow_F call_tmp = NULL;
  rangeBase_int64_t_boundedLow_F call_tmp2;
  _ref_chpl_bool call_tmp3 = NULL;
  (&_init_class_tmp_)->_low = INT64(0);
  (&_init_class_tmp_)->_high = INT64(0);
  (&_init_class_tmp_)->_stride = INT64(0);
  (&_init_class_tmp_)->_alignment = INT64(0);
  (&this9)->_base = _init_class_tmp_;
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
  wrap_call_tmp = _construct_rangeBase2(x, x2, x3, x4, &this10);
  (&this9)->_base = wrap_call_tmp;
  x5 = false;
  _ref_tmp_5 = &x5;
  *(_ref_tmp_5) = false;
  (&this9)->_aligned = x5;
  wrap_call_tmp2 = _construct_range2(&wrap_call_tmp, x5, &this9);
  this8 = wrap_call_tmp2;
  call_tmp = &((&this8)->_base);
  call_tmp2 = rangeBase2(_low, _high, _stride, _alignment);
  chpl___ASSIGN_4(call_tmp, &call_tmp2);
  call_tmp3 = &((&this8)->_aligned);
  *(call_tmp3) = _aligned;
  return this8;
}

/* ChapelRange.chpl:84 */
static range_int64_t_bounded_F range3(rangeBase_int64_t_bounded_F* const _base, chpl_bool _aligned) {
  range_int64_t_bounded_F this8;
  range_int64_t_bounded_F this9;
  rangeBase_int64_t_bounded_F _init_class_tmp_;
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
  _ref_rangeBase_int64_t_bounded_F call_tmp = NULL;
  _ref_chpl_bool call_tmp2 = NULL;
  (&_init_class_tmp_)->_low = INT64(0);
  (&_init_class_tmp_)->_high = INT64(0);
  (&_init_class_tmp_)->_stride = INT64(0);
  (&_init_class_tmp_)->_alignment = INT64(0);
  (&this9)->_base = _init_class_tmp_;
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
  this8 = wrap_call_tmp2;
  call_tmp = &((&this8)->_base);
  chpl___ASSIGN_3(call_tmp, _base);
  call_tmp2 = &((&this8)->_aligned);
  *(call_tmp2) = _aligned;
  return this8;
}

/* ChapelRange.chpl:108 */
static void _build_range(int64_t low, int64_t high2, _ref_range_int64_t_bounded_F _retArg) {
  range_int64_t_bounded_F wrap_call_tmp;
  wrap_call_tmp = range(low, high2, INT64(1), INT64(0), false);
  *(_retArg) = wrap_call_tmp;
  return;
}

/* ChapelRange.chpl:120 */
static void _build_range2(int64_t bound, _ref_range_int64_t_boundedLow_F _retArg) {
  range_int64_t_boundedLow_F wrap_call_tmp;
  wrap_call_tmp = range2(bound, bound, INT64(1), INT64(0), false);
  *(_retArg) = wrap_call_tmp;
  return;
}

/* ChapelRange.chpl:481 */
static void this3(_ref_range_int64_t_bounded_F this8, range_int64_t_bounded_F* const other, _ref_range_int64_t_bounded_F _retArg) {
  _ref_rangeBase_int64_t_bounded_F call_tmp = NULL;
  rangeBase_int64_t_bounded_F ret;
  rangeBase_int64_t_bounded_F wrap_call_tmp;
  _ref_rangeBase_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
  chpl_bool call_tmp2;
  chpl_bool T;
  chpl_bool ret2;
  chpl_bool T2;
  chpl_bool ret3;
  range_int64_t_bounded_F call_tmp3;
  chpl_check_nil(this8, INT64(502), "/home/kp167/chap-svn/modules/internal/ChapelRange.chpl");
  call_tmp = &((this8)->_base);
  ret = (other)->_base;
  ret_to_arg_ref_tmp_ = &wrap_call_tmp;
  this4(call_tmp, &ret, ret_to_arg_ref_tmp_);
  call_tmp2 = (! false);
  if (call_tmp2) {
    chpl_check_nil(this8, INT64(504), "/home/kp167/chap-svn/modules/internal/ChapelRange.chpl");
    ret2 = (this8)->_aligned;
    if (ret2) {
      T2 = true;
    } else {
      ret3 = (other)->_aligned;
      T2 = ret3;
    }
    T = T2;
  } else {
    T = false;
  }
  call_tmp3 = range3(&wrap_call_tmp, T);
  *(_retArg) = call_tmp3;
  return;
}

/* ChapelRange.chpl:520 */
static void chpl_count_help(range_int64_t_boundedLow_F* const r, int64_t count, _ref_range_int64_t_bounded_F _retArg) {
  rangeBase_int64_t_boundedLow_F ret;
  rangeBase_int64_t_bounded_F wrap_call_tmp;
  _ref_rangeBase_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
  chpl_bool ret2;
  range_int64_t_bounded_F wrap_call_tmp2;
  ret = (r)->_base;
  ret_to_arg_ref_tmp_ = &wrap_call_tmp;
  chpl__count(&ret, count, ret_to_arg_ref_tmp_);
  ret2 = (r)->_aligned;
  wrap_call_tmp2 = range3(&wrap_call_tmp, ret2);
  *(_retArg) = wrap_call_tmp2;
  return;
}

/* ChapelRange.chpl:528 */
static void chpl___POUND_(range_int64_t_boundedLow_F* const r, int64_t count, _ref_range_int64_t_bounded_F _retArg) {
  range_int64_t_bounded_F call_tmp;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
  ret_to_arg_ref_tmp_ = &call_tmp;
  chpl_count_help(r, count, ret_to_arg_ref_tmp_);
  *(_retArg) = call_tmp;
  return;
}

