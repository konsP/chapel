/* ChapelTuple.chpl:6 */
static void chpl__init_ChapelTuple(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  if (chpl__init_ChapelTuple_p) {
    goto _exit_chpl__init_ChapelTuple;
  }
  modFormatStr = "%*s\n";
  modStr = "ChapelTuple";
  printModuleInit(modFormatStr, modStr, INT64(11));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_ChapelTuple_p = true;
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_ChapelTuple:;
  return;
}

/* ChapelTuple.chpl:87 */
static int64_t this5(_ref__tuple_27_star_int64_t this8, int64_t i) {
  int64_t ret;
  chpl_bool call_tmp;
  chpl_bool T;
  chpl_bool call_tmp2;
  chpl____wide_chpl_string call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  call_tmp = (i < INT64(1));
  if (call_tmp) {
    T = true;
  } else {
    call_tmp2 = (i > INT64(27));
    T = call_tmp2;
  }
  if (T) {
    wide_string_from_c_string(&call_tmp3, "tuple access out of bounds: ", INT64(0), INT64(0), INT64(92), "/home/kp167/chap-svn/modules/internal/ChapelTuple.chpl");
    halt3(call_tmp3, i, INT64(92), "/home/kp167/chap-svn/modules/internal/ChapelTuple.chpl");
  }
  ret = *(*(this8) + (i - INT64(1)));
  return ret;
}

/* ChapelTuple.chpl:87 */
static void this7(_ref__tuple_1_star_range_int64_t_bounded_F this8, int64_t i, _ref_range_int64_t_bounded_F _retArg) {
  range_int64_t_bounded_F ret;
  chpl_bool call_tmp;
  chpl_bool T;
  chpl_bool call_tmp2;
  chpl____wide_chpl_string call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  call_tmp = (i < INT64(1));
  if (call_tmp) {
    T = true;
  } else {
    call_tmp2 = (i > INT64(1));
    T = call_tmp2;
  }
  if (T) {
    wide_string_from_c_string(&call_tmp3, "tuple access out of bounds: ", INT64(0), INT64(0), INT64(92), "/home/kp167/chap-svn/modules/internal/ChapelTuple.chpl");
    halt3(call_tmp3, i, INT64(92), "/home/kp167/chap-svn/modules/internal/ChapelTuple.chpl");
  }
  ret = *(*(this8) + (i - INT64(1)));
  *(_retArg) = ret;
  return;
}

/* ChapelTuple.chpl:87 */
static chpl____wide__ref_range_int64_t_bounded_F this6(_ref__tuple_1_star_range_int64_t_bounded_F this8, int64_t i) {
  chpl_bool call_tmp;
  chpl_bool T;
  chpl_bool call_tmp2;
  chpl____wide_chpl_string call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_range_int64_t_bounded_F call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_74;
  call_tmp = (i < INT64(1));
  if (call_tmp) {
    T = true;
  } else {
    call_tmp2 = (i > INT64(1));
    T = call_tmp2;
  }
  if (T) {
    wide_string_from_c_string(&call_tmp3, "tuple access out of bounds: ", INT64(0), INT64(0), INT64(92), "/home/kp167/chap-svn/modules/internal/ChapelTuple.chpl");
    halt3(call_tmp3, i, INT64(92), "/home/kp167/chap-svn/modules/internal/ChapelTuple.chpl");
  }
  chpl_macro_tmp_74.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_74.addr = (*(this8) + (i - INT64(1)));
  call_tmp4 = chpl_macro_tmp_74;
  return call_tmp4;
}

/* ChapelTuple.chpl:149 */
static void readWriteThis(_ref__tuple_1_star_int64_t this8, chpl____wide_Writer* const f) {
  int64_t local_QIO_TUPLE_FORMAT_JSON;
  int64_t local_QIO_TUPLE_FORMAT_SPACE;
  int64_t local_QIO_STYLE_ELEMENT_TUPLE;
  int64_t call_tmp;
  ioLiteral this9;
  c_string T;
  c_string T2;
  chpl_bool x;
  _ref_chpl_bool _ref_tmp_ = NULL;
  ioLiteral wrap_call_tmp;
  c_string T3;
  ioLiteral start2;
  ioLiteral this10;
  c_string T4;
  c_string T5;
  chpl_bool x2;
  _ref_chpl_bool _ref_tmp_2 = NULL;
  ioLiteral wrap_call_tmp2;
  c_string T6;
  ioLiteral comma;
  ioLiteral this11;
  c_string T7;
  c_string T8;
  chpl_bool x3;
  _ref_chpl_bool _ref_tmp_3 = NULL;
  ioLiteral wrap_call_tmp3;
  c_string T9;
  ioLiteral end;
  chpl_bool call_tmp2;
  chpl_bool call_tmp3;
  ioLiteral this12;
  c_string T10;
  c_string T11;
  chpl_bool x4;
  _ref_chpl_bool _ref_tmp_4 = NULL;
  ioLiteral wrap_call_tmp4;
  c_string T12;
  _ref_ioLiteral _ref_tmp_5 = NULL;
  ioLiteral this13;
  c_string T13;
  c_string T14;
  chpl_bool x5;
  _ref_chpl_bool _ref_tmp_6 = NULL;
  ioLiteral wrap_call_tmp5;
  c_string T15;
  _ref_ioLiteral _ref_tmp_7 = NULL;
  ioLiteral this14;
  c_string T16;
  c_string T17;
  chpl_bool x6;
  _ref_chpl_bool _ref_tmp_8 = NULL;
  ioLiteral wrap_call_tmp6;
  c_string T18;
  _ref_ioLiteral _ref_tmp_9 = NULL;
  chpl_bool call_tmp4;
  ioLiteral this15;
  c_string T19;
  c_string T20;
  chpl_bool x7;
  _ref_chpl_bool _ref_tmp_10 = NULL;
  ioLiteral wrap_call_tmp7;
  c_string T21;
  _ref_ioLiteral _ref_tmp_11 = NULL;
  ioLiteral this16;
  c_string T22;
  c_string T23;
  chpl_bool x8;
  _ref_chpl_bool _ref_tmp_12 = NULL;
  ioLiteral wrap_call_tmp8;
  c_string T24;
  _ref_ioLiteral _ref_tmp_13 = NULL;
  ioLiteral this17;
  c_string T25;
  c_string T26;
  chpl_bool x9;
  _ref_chpl_bool _ref_tmp_14 = NULL;
  ioLiteral wrap_call_tmp9;
  c_string T27;
  _ref_ioLiteral _ref_tmp_15 = NULL;
  ioLiteral this18;
  c_string T28;
  c_string T29;
  chpl_bool x10;
  _ref_chpl_bool _ref_tmp_16 = NULL;
  ioLiteral wrap_call_tmp10;
  c_string T30;
  _ref_ioLiteral _ref_tmp_17 = NULL;
  ioLiteral this19;
  c_string T31;
  c_string T32;
  chpl_bool x11;
  _ref_chpl_bool _ref_tmp_18 = NULL;
  ioLiteral wrap_call_tmp11;
  c_string T33;
  _ref_ioLiteral _ref_tmp_19 = NULL;
  ioLiteral this20;
  c_string T34;
  c_string T35;
  chpl_bool x12;
  _ref_chpl_bool _ref_tmp_20 = NULL;
  ioLiteral wrap_call_tmp12;
  c_string T36;
  _ref_ioLiteral _ref_tmp_21 = NULL;
  chpl_bool call_tmp5;
  chpl____wide_Writer ret = {CHPL_LOCALEID_T_INIT, NULL};
  Writer call_tmp6 = NULL;
  Writer T37 = NULL;
  _ref_Writer _ref_tmp_22 = NULL;
  int64_t call_tmp7;
  chpl____wide_Writer ret2 = {CHPL_LOCALEID_T_INIT, NULL};
  Writer call_tmp8 = NULL;
  Writer T38 = NULL;
  _ref_Writer _ref_tmp_23 = NULL;
  chpl_bool call_tmp9;
  chpl____wide_Writer ret3 = {CHPL_LOCALEID_T_INIT, NULL};
  Writer call_tmp10 = NULL;
  Writer T39 = NULL;
  _ref_Writer _ref_tmp_24 = NULL;
  chpl____wide_Writer chpl_macro_tmp_75;
  chpl____wide_Writer chpl_macro_tmp_76;
  chpl____wide_Writer chpl_macro_tmp_77;
  local_QIO_TUPLE_FORMAT_JSON = QIO_TUPLE_FORMAT_JSON;
  local_QIO_TUPLE_FORMAT_SPACE = QIO_TUPLE_FORMAT_SPACE;
  local_QIO_STYLE_ELEMENT_TUPLE = QIO_STYLE_ELEMENT_TUPLE;
  chpl_check_nil((f)->addr, INT64(150), "/home/kp167/chap-svn/modules/internal/ChapelTuple.chpl");
  call_tmp = styleElement(f, local_QIO_STYLE_ELEMENT_TUPLE);
  T = "";
  (&this9)->val = T;
  (&this9)->ignoreWhiteSpace = false;
  T2 = "";
  (&this9)->val = T2;
  x = false;
  _ref_tmp_ = &x;
  *(_ref_tmp_) = true;
  (&this9)->ignoreWhiteSpace = x;
  T3 = "";
  wrap_call_tmp = _construct_ioLiteral(T3, x, &this9);
  start2 = wrap_call_tmp;
  T4 = "";
  (&this10)->val = T4;
  (&this10)->ignoreWhiteSpace = false;
  T5 = "";
  (&this10)->val = T5;
  x2 = false;
  _ref_tmp_2 = &x2;
  *(_ref_tmp_2) = true;
  (&this10)->ignoreWhiteSpace = x2;
  T6 = "";
  wrap_call_tmp2 = _construct_ioLiteral(T6, x2, &this10);
  comma = wrap_call_tmp2;
  T7 = "";
  (&this11)->val = T7;
  (&this11)->ignoreWhiteSpace = false;
  T8 = "";
  (&this11)->val = T8;
  x3 = false;
  _ref_tmp_3 = &x3;
  *(_ref_tmp_3) = true;
  (&this11)->ignoreWhiteSpace = x3;
  T9 = "";
  wrap_call_tmp3 = _construct_ioLiteral(T9, x3, &this11);
  end = wrap_call_tmp3;
  chpl_check_nil((f)->addr, INT64(154), "/home/kp167/chap-svn/modules/internal/ChapelTuple.chpl");
  call_tmp2 = binary(f);
  call_tmp3 = (call_tmp == local_QIO_TUPLE_FORMAT_SPACE);
  if (call_tmp3) {
    T10 = "";
    (&this12)->val = T10;
    (&this12)->ignoreWhiteSpace = false;
    T11 = "";
    (&this12)->val = T11;
    x4 = false;
    _ref_tmp_4 = &x4;
    *(_ref_tmp_4) = true;
    (&this12)->ignoreWhiteSpace = x4;
    T12 = "";
    wrap_call_tmp4 = _construct_ioLiteral(T12, x4, &this12);
    _ref_tmp_5 = &start2;
    chpl___ASSIGN_10(_ref_tmp_5, &wrap_call_tmp4);
    T13 = "";
    (&this13)->val = T13;
    (&this13)->ignoreWhiteSpace = false;
    T14 = " ";
    (&this13)->val = T14;
    x5 = false;
    _ref_tmp_6 = &x5;
    *(_ref_tmp_6) = true;
    (&this13)->ignoreWhiteSpace = x5;
    T15 = " ";
    wrap_call_tmp5 = _construct_ioLiteral(T15, x5, &this13);
    _ref_tmp_7 = &comma;
    chpl___ASSIGN_10(_ref_tmp_7, &wrap_call_tmp5);
    T16 = "";
    (&this14)->val = T16;
    (&this14)->ignoreWhiteSpace = false;
    T17 = "";
    (&this14)->val = T17;
    x6 = false;
    _ref_tmp_8 = &x6;
    *(_ref_tmp_8) = true;
    (&this14)->ignoreWhiteSpace = x6;
    T18 = "";
    wrap_call_tmp6 = _construct_ioLiteral(T18, x6, &this14);
    _ref_tmp_9 = &end;
    chpl___ASSIGN_10(_ref_tmp_9, &wrap_call_tmp6);
  } else {
    call_tmp4 = (call_tmp == local_QIO_TUPLE_FORMAT_JSON);
    if (call_tmp4) {
      T19 = "";
      (&this15)->val = T19;
      (&this15)->ignoreWhiteSpace = false;
      T20 = "[";
      (&this15)->val = T20;
      x7 = false;
      _ref_tmp_10 = &x7;
      *(_ref_tmp_10) = true;
      (&this15)->ignoreWhiteSpace = x7;
      T21 = "[";
      wrap_call_tmp7 = _construct_ioLiteral(T21, x7, &this15);
      _ref_tmp_11 = &start2;
      chpl___ASSIGN_10(_ref_tmp_11, &wrap_call_tmp7);
      T22 = "";
      (&this16)->val = T22;
      (&this16)->ignoreWhiteSpace = false;
      T23 = ", ";
      (&this16)->val = T23;
      x8 = false;
      _ref_tmp_12 = &x8;
      *(_ref_tmp_12) = true;
      (&this16)->ignoreWhiteSpace = x8;
      T24 = ", ";
      wrap_call_tmp8 = _construct_ioLiteral(T24, x8, &this16);
      _ref_tmp_13 = &comma;
      chpl___ASSIGN_10(_ref_tmp_13, &wrap_call_tmp8);
      T25 = "";
      (&this17)->val = T25;
      (&this17)->ignoreWhiteSpace = false;
      T26 = "]";
      (&this17)->val = T26;
      x9 = false;
      _ref_tmp_14 = &x9;
      *(_ref_tmp_14) = true;
      (&this17)->ignoreWhiteSpace = x9;
      T27 = "]";
      wrap_call_tmp9 = _construct_ioLiteral(T27, x9, &this17);
      _ref_tmp_15 = &end;
      chpl___ASSIGN_10(_ref_tmp_15, &wrap_call_tmp9);
    } else {
      T28 = "";
      (&this18)->val = T28;
      (&this18)->ignoreWhiteSpace = false;
      T29 = "(";
      (&this18)->val = T29;
      x10 = false;
      _ref_tmp_16 = &x10;
      *(_ref_tmp_16) = true;
      (&this18)->ignoreWhiteSpace = x10;
      T30 = "(";
      wrap_call_tmp10 = _construct_ioLiteral(T30, x10, &this18);
      _ref_tmp_17 = &start2;
      chpl___ASSIGN_10(_ref_tmp_17, &wrap_call_tmp10);
      T31 = "";
      (&this19)->val = T31;
      (&this19)->ignoreWhiteSpace = false;
      T32 = ", ";
      (&this19)->val = T32;
      x11 = false;
      _ref_tmp_18 = &x11;
      *(_ref_tmp_18) = true;
      (&this19)->ignoreWhiteSpace = x11;
      T33 = ", ";
      wrap_call_tmp11 = _construct_ioLiteral(T33, x11, &this19);
      _ref_tmp_19 = &comma;
      chpl___ASSIGN_10(_ref_tmp_19, &wrap_call_tmp11);
      T34 = "";
      (&this20)->val = T34;
      (&this20)->ignoreWhiteSpace = false;
      T35 = ")";
      (&this20)->val = T35;
      x12 = false;
      _ref_tmp_20 = &x12;
      *(_ref_tmp_20) = true;
      (&this20)->ignoreWhiteSpace = x12;
      T36 = ")";
      wrap_call_tmp12 = _construct_ioLiteral(T36, x12, &this20);
      _ref_tmp_21 = &end;
      chpl___ASSIGN_10(_ref_tmp_21, &wrap_call_tmp12);
    }
  }
  call_tmp5 = (! call_tmp2);
  if (call_tmp5) {
    T37 = ((Writer)(nil));
    call_tmp6 = T37;
    chpl_macro_tmp_75.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_75.addr = call_tmp6;
    ret = chpl_macro_tmp_75;
    chpl_check_nil((f)->addr, INT64(171), "/home/kp167/chap-svn/modules/internal/ChapelTuple.chpl");
    readwrite(f, &start2);
    _ref_tmp_22 = &ret;
    *(_ref_tmp_22) = *(f);
  }
  call_tmp7 = *(*(this8) + INT64(0));
  T38 = ((Writer)(nil));
  call_tmp8 = T38;
  chpl_macro_tmp_76.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_76.addr = call_tmp8;
  ret2 = chpl_macro_tmp_76;
  chpl_check_nil((f)->addr, INT64(174), "/home/kp167/chap-svn/modules/internal/ChapelTuple.chpl");
  readwrite2(f, call_tmp7);
  _ref_tmp_23 = &ret2;
  *(_ref_tmp_23) = *(f);
  call_tmp9 = (! call_tmp2);
  if (call_tmp9) {
    T39 = ((Writer)(nil));
    call_tmp10 = T39;
    chpl_macro_tmp_77.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_77.addr = call_tmp10;
    ret3 = chpl_macro_tmp_77;
    chpl_check_nil((f)->addr, INT64(183), "/home/kp167/chap-svn/modules/internal/ChapelTuple.chpl");
    readwrite(f, &end);
    _ref_tmp_24 = &ret3;
    *(_ref_tmp_24) = *(f);
  }
  return;
}

