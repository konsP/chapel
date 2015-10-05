/* ChapelRangeBase.chpl:4 */
static void chpl__init_ChapelRangeBase(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  if (chpl__init_ChapelRangeBase_p) {
    goto _exit_chpl__init_ChapelRangeBase;
  }
  modFormatStr = "%*s\n";
  modStr = "ChapelRangeBase";
  printModuleInit(modFormatStr, modStr, INT64(15));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_ChapelRangeBase_p = true;
  {
    chpl__init_Math(INT64(4), "/home/kp167/chap-svn/modules/internal/ChapelRangeBase.chpl");
  }
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_ChapelRangeBase:;
  return;
}

/* ChapelRangeBase.chpl:31 */
static rangeBase_int64_t_bounded_F _construct_rangeBase(int64_t _low, int64_t _high, int64_t _stride, int64_t _alignment, rangeBase_int64_t_bounded_F* const meme) {
  rangeBase_int64_t_bounded_F this8;
  this8 = *(meme);
  (&this8)->_low = _low;
  (&this8)->_high = _high;
  (&this8)->_stride = _stride;
  (&this8)->_alignment = _alignment;
  return this8;
}

/* ChapelRangeBase.chpl:31 */
static rangeBase_int64_t_boundedLow_F _construct_rangeBase2(int64_t _low, int64_t _high, int64_t _stride, int64_t _alignment, rangeBase_int64_t_boundedLow_F* const meme) {
  rangeBase_int64_t_boundedLow_F this8;
  this8 = *(meme);
  (&this8)->_low = _low;
  (&this8)->_high = _high;
  (&this8)->_stride = _stride;
  (&this8)->_alignment = _alignment;
  return this8;
}

/* ChapelRangeBase.chpl:59 */
static rangeBase_int64_t_bounded_F rangeBase(int64_t _low, int64_t _high, int64_t _stride, int64_t _alignment) {
  rangeBase_int64_t_bounded_F this8;
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
  _ref_int64_t call_tmp = NULL;
  _ref_int64_t call_tmp2 = NULL;
  _ref_int64_t call_tmp3 = NULL;
  chpl_bool call_tmp4;
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
  this8 = wrap_call_tmp;
  call_tmp = &((&this8)->_low);
  *(call_tmp) = _low;
  call_tmp2 = &((&this8)->_high);
  *(call_tmp2) = _high;
  call_tmp3 = &((&this8)->_alignment);
  *(call_tmp3) = _alignment;
  call_tmp4 = (_stride == INT64(1));
  assert2(call_tmp4);
  return this8;
}

/* ChapelRangeBase.chpl:59 */
static rangeBase_int64_t_boundedLow_F rangeBase2(int64_t _low, int64_t _high, int64_t _stride, int64_t _alignment) {
  rangeBase_int64_t_boundedLow_F this8;
  rangeBase_int64_t_boundedLow_F this9;
  int64_t x;
  _ref_int64_t _ref_tmp_ = NULL;
  int64_t x2;
  _ref_int64_t _ref_tmp_2 = NULL;
  int64_t x3;
  _ref_int64_t _ref_tmp_3 = NULL;
  int64_t x4;
  _ref_int64_t _ref_tmp_4 = NULL;
  rangeBase_int64_t_boundedLow_F wrap_call_tmp;
  _ref_int64_t call_tmp = NULL;
  _ref_int64_t call_tmp2 = NULL;
  _ref_int64_t call_tmp3 = NULL;
  chpl_bool call_tmp4;
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
  wrap_call_tmp = _construct_rangeBase2(x, x2, x3, x4, &this9);
  this8 = wrap_call_tmp;
  call_tmp = &((&this8)->_low);
  *(call_tmp) = _low;
  call_tmp2 = &((&this8)->_high);
  *(call_tmp2) = _high;
  call_tmp3 = &((&this8)->_alignment);
  *(call_tmp3) = _alignment;
  call_tmp4 = (_stride == INT64(1));
  assert2(call_tmp4);
  return this8;
}

/* ChapelRangeBase.chpl:138 */
static int64_t length(chpl____wide__ref_rangeBase_int64_t_bounded_F* const this8) {
  int64_t ret;
  int64_t ret2;
  int64_t ret3;
  chpl_bool call_tmp;
  _ref_int64_t _ref_tmp_ = NULL;
  int64_t s;
  int64_t call_tmp2;
  int64_t ret4;
  int64_t ret5;
  _ref_int64_t _ref_tmp_2 = NULL;
  int64_t ret6;
  int64_t ret7;
  _ref_int64_t _ref_tmp_3 = NULL;
  int64_t call_tmp3;
  int64_t call_tmp4;
  int64_t call_tmp5;
  _ref_int64_t _ref_tmp_4 = NULL;
  chpl____wide__ref_int64_t chpl_macro_tmp_1411;
  chpl____wide__ref_int64_t chpl_macro_tmp_1412;
  chpl____wide__ref_int64_t chpl_macro_tmp_1413;
  chpl____wide__ref_int64_t chpl_macro_tmp_1414;
  ret = INT64(0);
  chpl_macro_tmp_1411.locale = (*(this8)).locale;
  chpl_macro_tmp_1411.addr = &(((*(this8)).addr)->_low);
  chpl_gen_comm_get(((void*)(&ret2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_1411).locale), INT64(0), NULL), (chpl_macro_tmp_1411).addr, sizeof(int64_t), -1, INT64(1), INT64(154), "/home/kp167/chap-svn/modules/internal/ChapelRangeBase.chpl");
  chpl_macro_tmp_1412.locale = (*(this8)).locale;
  chpl_macro_tmp_1412.addr = &(((*(this8)).addr)->_high);
  chpl_gen_comm_get(((void*)(&ret3)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_1412).locale), INT64(0), NULL), (chpl_macro_tmp_1412).addr, sizeof(int64_t), -1, INT64(1), INT64(154), "/home/kp167/chap-svn/modules/internal/ChapelRangeBase.chpl");
  call_tmp = (ret2 > ret3);
  if (call_tmp) {
    _ref_tmp_ = &ret;
    *(_ref_tmp_) = INT64(0);
    goto _end_length;
  }
  s = INT64(1);
  ret4 = INT64(0);
  chpl_macro_tmp_1413.locale = (*(this8)).locale;
  chpl_macro_tmp_1413.addr = &(((*(this8)).addr)->_high);
  chpl_gen_comm_get(((void*)(&ret5)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_1413).locale), INT64(0), NULL), (chpl_macro_tmp_1413).addr, sizeof(int64_t), -1, INT64(1), INT64(156), "/home/kp167/chap-svn/modules/internal/ChapelRangeBase.chpl");
  _ref_tmp_2 = &ret4;
  *(_ref_tmp_2) = ret5;
  goto _end_alignedHigh;
  _end_alignedHigh:;
  call_tmp2 = ret4;
  ret6 = INT64(0);
  chpl_macro_tmp_1414.locale = (*(this8)).locale;
  chpl_macro_tmp_1414.addr = &(((*(this8)).addr)->_low);
  chpl_gen_comm_get(((void*)(&ret7)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_1414).locale), INT64(0), NULL), (chpl_macro_tmp_1414).addr, sizeof(int64_t), -1, INT64(1), INT64(156), "/home/kp167/chap-svn/modules/internal/ChapelRangeBase.chpl");
  _ref_tmp_3 = &ret6;
  *(_ref_tmp_3) = ret7;
  goto _end_alignedLow;
  _end_alignedLow:;
  call_tmp3 = (call_tmp2 - ret6);
  call_tmp4 = (call_tmp3 / s);
  call_tmp5 = (call_tmp4 + INT64(1));
  _ref_tmp_4 = &ret;
  *(_ref_tmp_4) = call_tmp5;
  _end_length:;
  return ret;
}

/* ChapelRangeBase.chpl:232 */
static chpl_bool member3(chpl____wide__ref_rangeBase_int64_t_bounded_F* const this8, int64_t i) {
  chpl_bool ret;
  int64_t type_tmp;
  int64_t ret2;
  _ref_int64_t _ref_tmp_ = NULL;
  int64_t ret3;
  chpl_bool call_tmp;
  int64_t ret4;
  chpl_bool call_tmp2;
  chpl____wide__ref_int64_t chpl_macro_tmp_1415;
  chpl____wide__ref_int64_t chpl_macro_tmp_1416;
  chpl____wide__ref_int64_t chpl_macro_tmp_1417;
  type_tmp = INT64(0);
  chpl_macro_tmp_1415.locale = (*(this8)).locale;
  chpl_macro_tmp_1415.addr = &(((*(this8)).addr)->_alignment);
  chpl_gen_comm_get(((void*)(&ret2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_1415).locale), INT64(0), NULL), (chpl_macro_tmp_1415).addr, sizeof(int64_t), -1, INT64(1), INT64(234), "/home/kp167/chap-svn/modules/internal/ChapelRangeBase.chpl");
  _ref_tmp_ = &type_tmp;
  *(_ref_tmp_) = ret2;
  chpl_macro_tmp_1416.locale = (*(this8)).locale;
  chpl_macro_tmp_1416.addr = &(((*(this8)).addr)->_high);
  chpl_gen_comm_get(((void*)(&ret3)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_1416).locale), INT64(0), NULL), (chpl_macro_tmp_1416).addr, sizeof(int64_t), -1, INT64(1), INT64(237), "/home/kp167/chap-svn/modules/internal/ChapelRangeBase.chpl");
  call_tmp = (i > ret3);
  if (call_tmp) {
    ret = false;
    goto _end_member;
  }
  chpl_macro_tmp_1417.locale = (*(this8)).locale;
  chpl_macro_tmp_1417.addr = &(((*(this8)).addr)->_low);
  chpl_gen_comm_get(((void*)(&ret4)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_1417).locale), INT64(0), NULL), (chpl_macro_tmp_1417).addr, sizeof(int64_t), -1, INT64(1), INT64(241), "/home/kp167/chap-svn/modules/internal/ChapelRangeBase.chpl");
  call_tmp2 = (i < ret4);
  if (call_tmp2) {
    ret = false;
    goto _end_member;
  }
  ret = true;
  _end_member:;
  return ret;
}

/* ChapelRangeBase.chpl:536 */
static void chpl___ASSIGN_3(_ref_rangeBase_int64_t_bounded_F r1, rangeBase_int64_t_bounded_F* const r2) {
  *(r1) = *(r2);
  return;
}

/* ChapelRangeBase.chpl:536 */
static void chpl___ASSIGN_4(_ref_rangeBase_int64_t_boundedLow_F r1, rangeBase_int64_t_boundedLow_F* const r2) {
  *(r1) = *(r2);
  return;
}

/* ChapelRangeBase.chpl:590 */
static void this4(_ref_rangeBase_int64_t_bounded_F this8, rangeBase_int64_t_bounded_F* const other, _ref_rangeBase_int64_t_bounded_F _retArg) {
  int64_t ret;
  int64_t ret2;
  int64_t ret3;
  int64_t ret4;
  int64_t type_tmp;
  _ref_int64_t _ref_tmp_ = NULL;
  int64_t type_tmp2;
  _ref_int64_t _ref_tmp_2 = NULL;
  _tuple_2_star_int64_t type_tmp3;
  _tuple_2_star_int64_t call_tmp;
  _ref__tuple_2_star_int64_t _ref_tmp_3 = NULL;
  rangeBase_int64_t_bounded_F result;
  int64_t T;
  chpl_bool call_tmp2;
  int64_t T2;
  chpl_bool call_tmp3;
  rangeBase_int64_t_bounded_F wrap_call_tmp;
  _ref_int64_t call_tmp4 = NULL;
  chpl_check_nil(this8, INT64(609), "/home/kp167/chap-svn/modules/internal/ChapelRangeBase.chpl");
  ret = (this8)->_low;
  chpl_check_nil(this8, INT64(610), "/home/kp167/chap-svn/modules/internal/ChapelRangeBase.chpl");
  ret2 = (this8)->_high;
  ret3 = (other)->_low;
  ret4 = (other)->_high;
  type_tmp = INT64(0);
  _ref_tmp_ = &type_tmp;
  *(_ref_tmp_) = INT64(1);
  type_tmp2 = INT64(0);
  _ref_tmp_2 = &type_tmp2;
  *(_ref_tmp_2) = INT64(1);
  *(type_tmp3 + INT64(0)) = INT64(0);
  *(type_tmp3 + INT64(1)) = INT64(0);
  *(call_tmp + INT64(0)) = type_tmp2;
  *(call_tmp + INT64(1)) = INT64(0);
  _ref_tmp_3 = &type_tmp3;
  *(*(_ref_tmp_3) + INT64(0)) = *(call_tmp + INT64(0));
  *(*(_ref_tmp_3) + INT64(1)) = *(call_tmp + INT64(1));
  call_tmp2 = (ret > ret3);
  if (call_tmp2) {
    T = ret;
  } else {
    T = ret3;
  }
  call_tmp3 = (ret2 < ret4);
  if (call_tmp3) {
    T2 = ret2;
  } else {
    T2 = ret4;
  }
  wrap_call_tmp = rangeBase(T, T2, type_tmp, INT64(0));
  result = wrap_call_tmp;
  call_tmp4 = &((&result)->_alignment);
  *(call_tmp4) = INT64(0);
  *(_retArg) = result;
  return;
}

/* ChapelRangeBase.chpl:692 */
static void chpl__count(rangeBase_int64_t_boundedLow_F* const r, int64_t count, _ref_rangeBase_int64_t_bounded_F _retArg) {
  chpl_bool call_tmp;
  rangeBase_int64_t_bounded_F call_tmp2;
  chpl_bool call_tmp3;
  chpl_bool T;
  chpl_bool call_tmp4;
  c_string T2;
  int64_t call_tmp5;
  int64_t type_tmp;
  int64_t T3;
  chpl_bool call_tmp6;
  int64_t ret;
  int64_t ret2;
  int64_t call_tmp7;
  int64_t call_tmp8;
  _ref_int64_t _ref_tmp_ = NULL;
  int64_t type_tmp2;
  int64_t T4;
  chpl_bool call_tmp9;
  int64_t ret3;
  int64_t ret4;
  int64_t call_tmp10;
  int64_t call_tmp11;
  _ref_int64_t _ref_tmp_2 = NULL;
  int64_t ret5;
  rangeBase_int64_t_bounded_F wrap_call_tmp;
  call_tmp = (count == INT64(0));
  if (call_tmp) {
    call_tmp2 = rangeBase(INT64(1), INT64(0), INT64(1), INT64(1));
    *(_retArg) = call_tmp2;
    goto _end_chpl__count;
  }
  call_tmp3 = (! false);
  if (call_tmp3) {
    call_tmp4 = (count < INT64(0));
    T = call_tmp4;
  } else {
    T = false;
  }
  if (T) {
    T2 = "With a negative count, the range must have a last index.";
    halt(T2, INT64(710), "/home/kp167/chap-svn/modules/internal/ChapelRangeBase.chpl");
  }
  call_tmp5 = (count * INT64(1));
  type_tmp = INT64(0);
  call_tmp6 = (call_tmp5 > INT64(0));
  if (call_tmp6) {
    ret = (r)->_low;
    T3 = ret;
  } else {
    ret2 = (r)->_high;
    call_tmp7 = (call_tmp5 + INT64(1));
    call_tmp8 = chpl__add(ret2, call_tmp7);
    T3 = call_tmp8;
  }
  _ref_tmp_ = &type_tmp;
  *(_ref_tmp_) = T3;
  type_tmp2 = INT64(0);
  call_tmp9 = (call_tmp5 < INT64(0));
  if (call_tmp9) {
    ret3 = (r)->_high;
    T4 = ret3;
  } else {
    ret4 = (r)->_low;
    call_tmp10 = (call_tmp5 - INT64(1));
    call_tmp11 = chpl__add(ret4, call_tmp10);
    T4 = call_tmp11;
  }
  _ref_tmp_2 = &type_tmp2;
  *(_ref_tmp_2) = T4;
  ret5 = (r)->_alignment;
  wrap_call_tmp = rangeBase(type_tmp, type_tmp2, INT64(1), ret5);
  *(_retArg) = wrap_call_tmp;
  _end_chpl__count:;
  return;
}

/* ChapelRangeBase.chpl:1124 */
static int64_t chpl__add(int64_t a, int64_t b) {
  int64_t ret;
  chpl_bool call_tmp;
  chpl_bool T;
  chpl_bool call_tmp2;
  chpl_bool T2;
  int64_t call_tmp3;
  int64_t call_tmp4;
  chpl_bool call_tmp5;
  int64_t call_tmp6;
  chpl_bool call_tmp7;
  chpl_bool T3;
  chpl_bool call_tmp8;
  chpl_bool T4;
  int64_t call_tmp9;
  int64_t call_tmp10;
  chpl_bool call_tmp11;
  int64_t call_tmp12;
  int64_t call_tmp13;
  call_tmp = (a > INT64(0));
  if (call_tmp) {
    call_tmp2 = (b > INT64(0));
    T = call_tmp2;
  } else {
    T = false;
  }
  if (T) {
    call_tmp3 = max2();
    call_tmp4 = (call_tmp3 - a);
    call_tmp5 = (b > call_tmp4);
    T2 = call_tmp5;
  } else {
    T2 = false;
  }
  if (T2) {
    call_tmp6 = max2();
    ret = call_tmp6;
    goto _end_chpl__add;
  }
  call_tmp7 = (a < INT64(0));
  if (call_tmp7) {
    call_tmp8 = (b < INT64(0));
    T3 = call_tmp8;
  } else {
    T3 = false;
  }
  if (T3) {
    call_tmp9 = min2();
    call_tmp10 = (call_tmp9 - a);
    call_tmp11 = (b < call_tmp10);
    T4 = call_tmp11;
  } else {
    T4 = false;
  }
  if (T4) {
    call_tmp12 = min2();
    ret = call_tmp12;
    goto _end_chpl__add;
  }
  call_tmp13 = (a + b);
  ret = call_tmp13;
  _end_chpl__add:;
  return ret;
}

