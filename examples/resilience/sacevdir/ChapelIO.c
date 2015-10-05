/* ChapelIO.chpl:4 */
static void chpl__init_ChapelIO(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_1002;
  chpl_bool chpl_macro_tmp_1003;
  if (chpl__init_ChapelIO_p) {
    goto _exit_chpl__init_ChapelIO;
  }
  modFormatStr = "%*s\n";
  modStr = "ChapelIO";
  printModuleInit(modFormatStr, modStr, INT64(8));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_ChapelIO_p = true;
  {
    chpl__init_ChapelBase(INT64(4), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
    chpl__init_SysBasic(INT64(4), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
    chpl__init_IO(INT64(4), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  }
  chpl_check_nil((&chpl__testParOn)->addr, INT64(612), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  chpl_macro_tmp_1002.locale = (&chpl__testParOn)->locale;
  chpl_macro_tmp_1002.addr = &(((&chpl__testParOn)->addr)->value);
  chpl_macro_tmp_1003 = false;
  chpl_gen_comm_put(((void*)(&chpl_macro_tmp_1003)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_1002).locale), INT64(0), NULL), (chpl_macro_tmp_1002).addr, sizeof(chpl_bool), -1, INT64(1), INT64(612), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_ChapelIO:;
  return;
}

/* ChapelIO.chpl:15 */
static Writer _construct_Writer(Writer meme) {
  Writer this8 = NULL;
  object T = NULL;
  this8 = meme;
  chpl_check_nil(this8, INT64(15), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  T = &((this8)->super);
  _construct_object(T);
  return meme;
}

/* ChapelIO.chpl:15 */
static void chpl__auto_destroy_Writer(Writer this8) {
  return;
}

/* ChapelIO.chpl:18 */
static chpl_bool binary(chpl____wide_Writer* const this8) {
  chpl_bool ret;
  _ref_chpl_bool _ref_tmp_ = NULL;
  ret = false;
  _ref_tmp_ = &ret;
  *(_ref_tmp_) = false;
  return ret;
}

/* ChapelIO.chpl:20 */
static int64_t styleElement(chpl____wide_Writer* const this8, int64_t element) {
  int64_t ret;
  _ref_int64_t _ref_tmp_ = NULL;
  ret = INT64(0);
  _ref_tmp_ = &ret;
  *(_ref_tmp_) = INT64(0);
  return ret;
}

/* ChapelIO.chpl:25 */
static void writePrimitive(chpl____wide_Writer* const this8, chpl____wide_chpl_string x) {
  c_string T;
  T = "Generic Writer.writePrimitive called";
  halt(T, INT64(27), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  return;
}

/* ChapelIO.chpl:25 */
static void writePrimitive2(chpl____wide_Writer* const this8, ioLiteral* const x) {
  c_string T;
  T = "Generic Writer.writePrimitive called";
  halt(T, INT64(27), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  return;
}

/* ChapelIO.chpl:25 */
static void writePrimitive3(chpl____wide_Writer* const this8, int64_t x) {
  c_string T;
  T = "Generic Writer.writePrimitive called";
  halt(T, INT64(27), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  return;
}

/* ChapelIO.chpl:25 */
static void writePrimitive4(chpl____wide_Writer* const this8, uint64_t x) {
  c_string T;
  T = "Generic Writer.writePrimitive called";
  halt(T, INT64(27), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  return;
}

/* ChapelIO.chpl:32 */
static void writeIt(chpl____wide_Writer* const this8, chpl____wide_chpl_string x) {
  chpl_bool _dynamic_dispatch_tmp_;
  chpl____wide_StringWriter _cast_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_int32_t chpl_macro_tmp_1004;
  int32_t chpl_macro_tmp_1005;
  chpl____wide_StringWriter chpl_macro_tmp_1006;
  chpl_check_nil((this8)->addr, INT64(34), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  chpl_macro_tmp_1004.locale = (this8)->locale;
  chpl_macro_tmp_1004.addr = &(((object)((this8)->addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_1005)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_1004).locale), INT64(0), NULL), (chpl_macro_tmp_1004).addr, sizeof(int32_t), -1, INT64(1), INT64(34), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  _dynamic_dispatch_tmp_ = (chpl_macro_tmp_1005 == chpl__cid_StringWriter);
  if (_dynamic_dispatch_tmp_) {
    chpl_macro_tmp_1006.locale = (this8)->locale;
    chpl_macro_tmp_1006.addr = ((StringWriter)((this8)->addr));
    _cast_tmp_ = chpl_macro_tmp_1006;
    chpl_check_nil((&_cast_tmp_)->addr, INT64(34), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
    writePrimitive5(&_cast_tmp_, x);
  } else {
    chpl_check_nil((this8)->addr, INT64(34), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
    writePrimitive(this8, x);
  }
  return;
}

/* ChapelIO.chpl:32 */
static void writeIt2(chpl____wide_Writer* const this8, _tuple_1_star_int64_t* const x) {
  _ref__tuple_1_star_int64_t _ref_tmp_ = NULL;
  _ref_tmp_ = x;
  readWriteThis(_ref_tmp_, this8);
  return;
}

/* ChapelIO.chpl:32 */
static void writeIt3(chpl____wide_Writer* const this8, ioLiteral* const x) {
  chpl_bool _dynamic_dispatch_tmp_;
  chpl____wide_StringWriter _cast_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_int32_t chpl_macro_tmp_1007;
  int32_t chpl_macro_tmp_1008;
  chpl____wide_StringWriter chpl_macro_tmp_1009;
  chpl_check_nil((this8)->addr, INT64(34), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  chpl_macro_tmp_1007.locale = (this8)->locale;
  chpl_macro_tmp_1007.addr = &(((object)((this8)->addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_1008)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_1007).locale), INT64(0), NULL), (chpl_macro_tmp_1007).addr, sizeof(int32_t), -1, INT64(1), INT64(34), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  _dynamic_dispatch_tmp_ = (chpl_macro_tmp_1008 == chpl__cid_StringWriter);
  if (_dynamic_dispatch_tmp_) {
    chpl_macro_tmp_1009.locale = (this8)->locale;
    chpl_macro_tmp_1009.addr = ((StringWriter)((this8)->addr));
    _cast_tmp_ = chpl_macro_tmp_1009;
    chpl_check_nil((&_cast_tmp_)->addr, INT64(34), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
    writePrimitive6(&_cast_tmp_, x);
  } else {
    chpl_check_nil((this8)->addr, INT64(34), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
    writePrimitive2(this8, x);
  }
  return;
}

/* ChapelIO.chpl:32 */
static void writeIt4(chpl____wide_Writer* const this8, int64_t x) {
  chpl_bool _dynamic_dispatch_tmp_;
  chpl____wide_StringWriter _cast_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_int32_t chpl_macro_tmp_1010;
  int32_t chpl_macro_tmp_1011;
  chpl____wide_StringWriter chpl_macro_tmp_1012;
  chpl_check_nil((this8)->addr, INT64(34), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  chpl_macro_tmp_1010.locale = (this8)->locale;
  chpl_macro_tmp_1010.addr = &(((object)((this8)->addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_1011)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_1010).locale), INT64(0), NULL), (chpl_macro_tmp_1010).addr, sizeof(int32_t), -1, INT64(1), INT64(34), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  _dynamic_dispatch_tmp_ = (chpl_macro_tmp_1011 == chpl__cid_StringWriter);
  if (_dynamic_dispatch_tmp_) {
    chpl_macro_tmp_1012.locale = (this8)->locale;
    chpl_macro_tmp_1012.addr = ((StringWriter)((this8)->addr));
    _cast_tmp_ = chpl_macro_tmp_1012;
    chpl_check_nil((&_cast_tmp_)->addr, INT64(34), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
    writePrimitive7(&_cast_tmp_, x);
  } else {
    chpl_check_nil((this8)->addr, INT64(34), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
    writePrimitive3(this8, x);
  }
  return;
}

/* ChapelIO.chpl:32 */
static void writeIt5(chpl____wide_Writer* const this8, chpl_taskID_t x) {
  writeThis(x, this8);
  return;
}

/* ChapelIO.chpl:32 */
static void writeIt6(chpl____wide_Writer* const this8, uint64_t x) {
  chpl_bool _dynamic_dispatch_tmp_;
  chpl____wide_StringWriter _cast_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_int32_t chpl_macro_tmp_1013;
  int32_t chpl_macro_tmp_1014;
  chpl____wide_StringWriter chpl_macro_tmp_1015;
  chpl_check_nil((this8)->addr, INT64(34), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  chpl_macro_tmp_1013.locale = (this8)->locale;
  chpl_macro_tmp_1013.addr = &(((object)((this8)->addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_1014)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_1013).locale), INT64(0), NULL), (chpl_macro_tmp_1013).addr, sizeof(int32_t), -1, INT64(1), INT64(34), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  _dynamic_dispatch_tmp_ = (chpl_macro_tmp_1014 == chpl__cid_StringWriter);
  if (_dynamic_dispatch_tmp_) {
    chpl_macro_tmp_1015.locale = (this8)->locale;
    chpl_macro_tmp_1015.addr = ((StringWriter)((this8)->addr));
    _cast_tmp_ = chpl_macro_tmp_1015;
    chpl_check_nil((&_cast_tmp_)->addr, INT64(34), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
    writePrimitive8(&_cast_tmp_, x);
  } else {
    chpl_check_nil((this8)->addr, INT64(34), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
    writePrimitive4(this8, x);
  }
  return;
}

/* ChapelIO.chpl:55 */
static void readwrite(chpl____wide_Writer* const this8, ioLiteral* const x) {
  chpl_check_nil((this8)->addr, INT64(56), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  writeIt3(this8, x);
  return;
}

/* ChapelIO.chpl:55 */
static void readwrite2(chpl____wide_Writer* const this8, int64_t x) {
  chpl_check_nil((this8)->addr, INT64(56), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  writeIt4(this8, x);
  return;
}

/* ChapelIO.chpl:58 */
static void write2(chpl____wide_Writer* const this8, chpl____wide_chpl_string _e0_args, _tuple_1_star_int64_t* const _e1_args) {
  int64_t this_x2_x1;
  _tuple_1_star_int64_t call_tmp;
  this_x2_x1 = *(*(_e1_args) + INT64(0));
  chpl_check_nil((this8)->addr, INT64(60), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  writeIt(this8, _e0_args);
  *(call_tmp + INT64(0)) = this_x2_x1;
  chpl_check_nil((this8)->addr, INT64(60), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  writeIt2(this8, &call_tmp);
  return;
}

/* ChapelIO.chpl:58 */
static void write3(chpl____wide_Writer* const this8, chpl____wide_chpl_string _e0_args, int64_t _e1_args) {
  chpl_check_nil((this8)->addr, INT64(60), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  writeIt(this8, _e0_args);
  chpl_check_nil((this8)->addr, INT64(60), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  writeIt4(this8, _e1_args);
  return;
}

/* ChapelIO.chpl:58 */
static void write7(chpl____wide_Writer* const this8, chpl____wide_chpl_string _e0_args, chpl_taskID_t _e1_args) {
  chpl_check_nil((this8)->addr, INT64(60), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  writeIt(this8, _e0_args);
  chpl_check_nil((this8)->addr, INT64(60), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  writeIt5(this8, _e1_args);
  return;
}

/* ChapelIO.chpl:58 */
static void write6(chpl____wide_Writer* const this8, uint64_t _e0_args) {
  chpl_check_nil((this8)->addr, INT64(60), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  writeIt6(this8, _e0_args);
  return;
}

/* ChapelIO.chpl:58 */
static void write4(chpl____wide_Writer* const this8, chpl____wide_chpl_string _e0_args, int64_t _e1_args, chpl____wide_chpl_string _e2_args, int64_t _e3_args, chpl____wide_chpl_string _e4_args, int64_t _e5_args) {
  chpl_check_nil((this8)->addr, INT64(60), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  writeIt(this8, _e0_args);
  chpl_check_nil((this8)->addr, INT64(60), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  writeIt4(this8, _e1_args);
  chpl_check_nil((this8)->addr, INT64(60), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  writeIt(this8, _e2_args);
  chpl_check_nil((this8)->addr, INT64(60), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  writeIt4(this8, _e3_args);
  chpl_check_nil((this8)->addr, INT64(60), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  writeIt(this8, _e4_args);
  chpl_check_nil((this8)->addr, INT64(60), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  writeIt4(this8, _e5_args);
  return;
}

/* ChapelIO.chpl:58 */
static void write5(chpl____wide_Writer* const this8, chpl____wide_chpl_string _e0_args, chpl_taskID_t _e1_args, chpl____wide_chpl_string _e2_args, int64_t _e3_args, chpl____wide_chpl_string _e4_args, int64_t _e5_args, chpl____wide_chpl_string _e6_args) {
  chpl_check_nil((this8)->addr, INT64(60), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  writeIt(this8, _e0_args);
  chpl_check_nil((this8)->addr, INT64(60), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  writeIt5(this8, _e1_args);
  chpl_check_nil((this8)->addr, INT64(60), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  writeIt(this8, _e2_args);
  chpl_check_nil((this8)->addr, INT64(60), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  writeIt4(this8, _e3_args);
  chpl_check_nil((this8)->addr, INT64(60), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  writeIt(this8, _e4_args);
  chpl_check_nil((this8)->addr, INT64(60), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  writeIt4(this8, _e5_args);
  chpl_check_nil((this8)->addr, INT64(60), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  writeIt(this8, _e6_args);
  return;
}

/* ChapelIO.chpl:184 */
static void chpl__auto_destroy_Reader(Reader this8) {
  return;
}

/* ChapelIO.chpl:465 */
static void assert2(chpl_bool test) {
  chpl_bool call_tmp;
  call_tmp = (! test);
  if (call_tmp) {
    chpl_error("assert failed", INT64(467), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  }
  return;
}

/* ChapelIO.chpl:488 */
static void halt(c_string s, int64_t _ln, c_string _fn) {
  c_string call_tmp;
  call_tmp = string_concat("halt reached - ", s, _ln, _fn);
  chpl_error(call_tmp, _ln, _fn);
  return;
}

/* ChapelIO.chpl:492 */
static void halt2(chpl____wide_chpl_string _e0_args, _tuple_1_star_int64_t* const _e1_args, int64_t _ln, c_string _fn) {
  int64_t this_x2_x1;
  c_string tmpstring;
  chpl____wide__ref_c_string _ref_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  _tuple_1_star_int64_t call_tmp;
  c_string call_tmp2;
  chpl____wide__ref_c_string chpl_macro_tmp_1016;
  this_x2_x1 = *(*(_e1_args) + INT64(0));
  tmpstring = "";
  chpl_macro_tmp_1016.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1016.addr = &tmpstring;
  _ref_tmp_ = chpl_macro_tmp_1016;
  *(call_tmp + INT64(0)) = this_x2_x1;
  write8(&_ref_tmp_, _e0_args, &call_tmp);
  call_tmp2 = string_concat("halt reached - ", tmpstring, _ln, _fn);
  chpl_error(call_tmp2, _ln, _fn);
  return;
}

/* ChapelIO.chpl:492 */
static void halt3(chpl____wide_chpl_string _e0_args, int64_t _e1_args, int64_t _ln, c_string _fn) {
  c_string tmpstring;
  chpl____wide__ref_c_string _ref_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  c_string call_tmp;
  chpl____wide__ref_c_string chpl_macro_tmp_1017;
  tmpstring = "";
  chpl_macro_tmp_1017.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1017.addr = &tmpstring;
  _ref_tmp_ = chpl_macro_tmp_1017;
  write9(&_ref_tmp_, _e0_args, _e1_args);
  call_tmp = string_concat("halt reached - ", tmpstring, _ln, _fn);
  chpl_error(call_tmp, _ln, _fn);
  return;
}

/* ChapelIO.chpl:492 */
static void halt6(chpl____wide_chpl_string _e0_args, chpl_taskID_t _e1_args, int64_t _ln, c_string _fn) {
  c_string tmpstring;
  chpl____wide__ref_c_string _ref_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  c_string call_tmp;
  chpl____wide__ref_c_string chpl_macro_tmp_1018;
  tmpstring = "";
  chpl_macro_tmp_1018.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1018.addr = &tmpstring;
  _ref_tmp_ = chpl_macro_tmp_1018;
  write12(&_ref_tmp_, _e0_args, _e1_args);
  call_tmp = string_concat("halt reached - ", tmpstring, _ln, _fn);
  chpl_error(call_tmp, _ln, _fn);
  return;
}

/* ChapelIO.chpl:492 */
static void halt4(chpl____wide_chpl_string _e0_args, int64_t _e1_args, chpl____wide_chpl_string _e2_args, int64_t _e3_args, chpl____wide_chpl_string _e4_args, int64_t _e5_args, int64_t _ln, c_string _fn) {
  c_string tmpstring;
  chpl____wide__ref_c_string _ref_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  c_string call_tmp;
  chpl____wide__ref_c_string chpl_macro_tmp_1019;
  tmpstring = "";
  chpl_macro_tmp_1019.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1019.addr = &tmpstring;
  _ref_tmp_ = chpl_macro_tmp_1019;
  write10(&_ref_tmp_, _e0_args, _e1_args, _e2_args, _e3_args, _e4_args, _e5_args);
  call_tmp = string_concat("halt reached - ", tmpstring, _ln, _fn);
  chpl_error(call_tmp, _ln, _fn);
  return;
}

/* ChapelIO.chpl:492 */
static void halt5(chpl____wide_chpl_string _e0_args, chpl_taskID_t _e1_args, chpl____wide_chpl_string _e2_args, int64_t _e3_args, chpl____wide_chpl_string _e4_args, int64_t _e5_args, chpl____wide_chpl_string _e6_args, int64_t _ln, c_string _fn) {
  c_string tmpstring;
  chpl____wide__ref_c_string _ref_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  c_string call_tmp;
  chpl____wide__ref_c_string chpl_macro_tmp_1020;
  tmpstring = "";
  chpl_macro_tmp_1020.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1020.addr = &tmpstring;
  _ref_tmp_ = chpl_macro_tmp_1020;
  write11(&_ref_tmp_, _e0_args, _e1_args, _e2_args, _e3_args, _e4_args, _e5_args, _e6_args);
  call_tmp = string_concat("halt reached - ", tmpstring, _ln, _fn);
  chpl_error(call_tmp, _ln, _fn);
  return;
}

/* ChapelIO.chpl:517 */
static void writeThis(chpl_taskID_t this8, chpl____wide_Writer* const f) {
  uint64_t type_tmp;
  uint64_t call_tmp;
  _ref_uint64_t _ref_tmp_ = NULL;
  type_tmp = UINT64(0);
  call_tmp = ((uint64_t)(((intptr_t)(this8))));
  _ref_tmp_ = &type_tmp;
  *(_ref_tmp_) = call_tmp;
  chpl_check_nil((f)->addr, INT64(519), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  write6(f, type_tmp);
  return;
}

/* ChapelIO.chpl:527 */
static StringWriter _construct_StringWriter(c_string s, StringWriter meme) {
  StringWriter this8 = NULL;
  Writer T = NULL;
  this8 = meme;
  chpl_check_nil(this8, INT64(527), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  T = &((this8)->super);
  _construct_Writer(T);
  chpl_check_nil(this8, INT64(528), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  (this8)->s = s;
  return this8;
}

/* ChapelIO.chpl:527 */
static void chpl__auto_destroy_StringWriter(StringWriter this8) {
  return;
}

/* ChapelIO.chpl:529 */
static void writePrimitive5(chpl____wide_StringWriter* const this8, chpl____wide_chpl_string x) {
  chpl____wide__ref_c_string call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  c_string ret;
  c_string call_tmp2;
  _ref_c_string _ref_tmp_ = NULL;
  c_string call_tmp3;
  c_string call_tmp4;
  chpl____wide__ref_c_string chpl_macro_tmp_1021;
  chpl____wide__ref_c_string chpl_macro_tmp_1022;
  chpl_check_nil((this8)->addr, INT64(529), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  chpl_macro_tmp_1021.locale = (this8)->locale;
  chpl_macro_tmp_1021.addr = &(((this8)->addr)->s);
  call_tmp = chpl_macro_tmp_1021;
  ret = "";
  c_string_from_wide_string(&call_tmp2, &x, INT64(529), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  _ref_tmp_ = &ret;
  *(_ref_tmp_) = call_tmp2;
  chpl_check_nil((this8)->addr, INT64(529), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  chpl_macro_tmp_1022.locale = (this8)->locale;
  chpl_macro_tmp_1022.addr = &(((this8)->addr)->s);
  chpl_gen_comm_get(((void*)(&call_tmp3)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_1022).locale), INT64(0), NULL), (chpl_macro_tmp_1022).addr, sizeof(c_string), -1, INT64(1), INT64(529), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  call_tmp4 = string_concat(call_tmp3, ret, INT64(529), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  chpl_gen_comm_put(((void*)(&call_tmp4)), chpl_nodeFromLocaleID(&((call_tmp).locale), INT64(0), NULL), (call_tmp).addr, sizeof(c_string), -1, INT64(1), INT64(529), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  return;
}

/* ChapelIO.chpl:529 */
static void writePrimitive6(chpl____wide_StringWriter* const this8, ioLiteral* const x) {
  chpl____wide__ref_c_string call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  c_string ret;
  c_string call_tmp2;
  c_string call_tmp3;
  chpl____wide__ref_c_string chpl_macro_tmp_1023;
  chpl____wide__ref_c_string chpl_macro_tmp_1024;
  chpl_check_nil((this8)->addr, INT64(529), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  chpl_macro_tmp_1023.locale = (this8)->locale;
  chpl_macro_tmp_1023.addr = &(((this8)->addr)->s);
  call_tmp = chpl_macro_tmp_1023;
  ret = (x)->val;
  chpl_check_nil((this8)->addr, INT64(529), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  chpl_macro_tmp_1024.locale = (this8)->locale;
  chpl_macro_tmp_1024.addr = &(((this8)->addr)->s);
  chpl_gen_comm_get(((void*)(&call_tmp2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_1024).locale), INT64(0), NULL), (chpl_macro_tmp_1024).addr, sizeof(c_string), -1, INT64(1), INT64(529), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  call_tmp3 = string_concat(call_tmp2, ret, INT64(529), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  chpl_gen_comm_put(((void*)(&call_tmp3)), chpl_nodeFromLocaleID(&((call_tmp).locale), INT64(0), NULL), (call_tmp).addr, sizeof(c_string), -1, INT64(1), INT64(529), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  return;
}

/* ChapelIO.chpl:529 */
static void writePrimitive7(chpl____wide_StringWriter* const this8, int64_t x) {
  chpl____wide__ref_c_string call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  c_string call_tmp2;
  c_string call_tmp3;
  c_string call_tmp4;
  chpl____wide__ref_c_string chpl_macro_tmp_1025;
  chpl____wide__ref_c_string chpl_macro_tmp_1026;
  chpl_check_nil((this8)->addr, INT64(529), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  chpl_macro_tmp_1025.locale = (this8)->locale;
  chpl_macro_tmp_1025.addr = &(((this8)->addr)->s);
  call_tmp = chpl_macro_tmp_1025;
  call_tmp2 = int64_t_to_c_string(x);
  chpl_check_nil((this8)->addr, INT64(529), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  chpl_macro_tmp_1026.locale = (this8)->locale;
  chpl_macro_tmp_1026.addr = &(((this8)->addr)->s);
  chpl_gen_comm_get(((void*)(&call_tmp3)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_1026).locale), INT64(0), NULL), (chpl_macro_tmp_1026).addr, sizeof(c_string), -1, INT64(1), INT64(529), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  call_tmp4 = string_concat(call_tmp3, call_tmp2, INT64(529), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  chpl_gen_comm_put(((void*)(&call_tmp4)), chpl_nodeFromLocaleID(&((call_tmp).locale), INT64(0), NULL), (call_tmp).addr, sizeof(c_string), -1, INT64(1), INT64(529), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  return;
}

/* ChapelIO.chpl:529 */
static void writePrimitive8(chpl____wide_StringWriter* const this8, uint64_t x) {
  chpl____wide__ref_c_string call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  c_string call_tmp2;
  c_string call_tmp3;
  c_string call_tmp4;
  chpl____wide__ref_c_string chpl_macro_tmp_1027;
  chpl____wide__ref_c_string chpl_macro_tmp_1028;
  chpl_check_nil((this8)->addr, INT64(529), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  chpl_macro_tmp_1027.locale = (this8)->locale;
  chpl_macro_tmp_1027.addr = &(((this8)->addr)->s);
  call_tmp = chpl_macro_tmp_1027;
  call_tmp2 = uint64_t_to_c_string(x);
  chpl_check_nil((this8)->addr, INT64(529), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  chpl_macro_tmp_1028.locale = (this8)->locale;
  chpl_macro_tmp_1028.addr = &(((this8)->addr)->s);
  chpl_gen_comm_get(((void*)(&call_tmp3)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_1028).locale), INT64(0), NULL), (chpl_macro_tmp_1028).addr, sizeof(c_string), -1, INT64(1), INT64(529), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  call_tmp4 = string_concat(call_tmp3, call_tmp2, INT64(529), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  chpl_gen_comm_put(((void*)(&call_tmp4)), chpl_nodeFromLocaleID(&((call_tmp).locale), INT64(0), NULL), (call_tmp).addr, sizeof(c_string), -1, INT64(1), INT64(529), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  return;
}

/* ChapelIO.chpl:547 */
static void write8(chpl____wide__ref_c_string* const this8, chpl____wide_chpl_string _e0_args, _tuple_1_star_int64_t* const _e1_args) {
  int64_t this_x2_x1;
  chpl____wide_StringWriter sc = {CHPL_LOCALEID_T_INIT, NULL};
  c_string call_tmp;
  StringWriter this9 = NULL;
  int64_t call_tmp2;
  chpl_opaque cast_tmp;
  StringWriter T = NULL;
  c_string T2;
  chpl____wide_StringWriter wrap_call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Writer call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  _tuple_1_star_int64_t call_tmp4;
  c_string ret;
  chpl_localeID_t call_tmp5;
  chpl____wide_StringWriter rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn44 _args_foron_fn = NULL;
  int64_t chpl_here_alloc_size;
  chpl_opaque chpl_here_alloc_tmp;
  chpl____wide_StringWriter chpl_macro_tmp_1029;
  chpl____wide_Writer chpl_macro_tmp_1030;
  chpl____wide__ref_c_string chpl_macro_tmp_1031;
  this_x2_x1 = *(*(_e1_args) + INT64(0));
  chpl_gen_comm_get(((void*)(&call_tmp)), chpl_nodeFromLocaleID(&((*(this8)).locale), INT64(0), NULL), (*(this8)).addr, sizeof(c_string), -1, INT64(1), INT64(548), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  call_tmp2 = sizeof(chpl_StringWriter_object);
  cast_tmp = chpl_here_alloc(call_tmp2, INT16(19));
  T = ((StringWriter)(cast_tmp));
  this9 = T;
  ((object)(this9))->chpl__cid = chpl__cid_StringWriter;
  T2 = "";
  chpl_check_nil(this9, INT64(548), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  (this9)->s = T2;
  chpl_check_nil(this9, INT64(548), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  (this9)->s = call_tmp;
  chpl_macro_tmp_1029.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1029.addr = _construct_StringWriter(call_tmp, this9);
  wrap_call_tmp = chpl_macro_tmp_1029;
  sc = wrap_call_tmp;
  chpl_macro_tmp_1030.locale = (&wrap_call_tmp)->locale;
  chpl_macro_tmp_1030.addr = ((Writer)((&wrap_call_tmp)->addr));
  call_tmp3 = chpl_macro_tmp_1030;
  *(call_tmp4 + INT64(0)) = this_x2_x1;
  chpl_check_nil((&call_tmp3)->addr, INT64(549), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  write2(&call_tmp3, _e0_args, &call_tmp4);
  chpl_check_nil((&sc)->addr, INT64(550), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  chpl_macro_tmp_1031.locale = (&sc)->locale;
  chpl_macro_tmp_1031.addr = &(((&sc)->addr)->s);
  chpl_gen_comm_get(((void*)(&ret)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_1031).locale), INT64(0), NULL), (chpl_macro_tmp_1031).addr, sizeof(c_string), -1, INT64(1), INT64(550), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  chpl_gen_comm_put(((void*)(&ret)), chpl_nodeFromLocaleID(&((*(this8)).locale), INT64(0), NULL), (*(this8)).addr, sizeof(c_string), -1, INT64(1), INT64(550), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  call_tmp5 = (&wrap_call_tmp)->locale;
  rvfDerefTmp = wrap_call_tmp;
  chpl_here_alloc_size = sizeof(chpl__class_localson_fn44_object);
  chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(36));
  _args_foron_fn = ((_class_localson_fn44)(chpl_here_alloc_tmp));
  chpl_check_nil(_args_foron_fn, INT64(551), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  (_args_foron_fn)->_0__tmp = call_tmp5;
  chpl_check_nil(_args_foron_fn, INT64(551), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  (_args_foron_fn)->_1_rvfDerefTmp = rvfDerefTmp;
  /*** wrapon_fn44 ***/ chpl_executeOn(&call_tmp5, INT32(49), _args_foron_fn, sizeof(chpl__class_localson_fn44_object), INT64(551), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  chpl_here_free(((void*)(_args_foron_fn)));
  return;
}

/* ChapelIO.chpl:547 */
static void write9(chpl____wide__ref_c_string* const this8, chpl____wide_chpl_string _e0_args, int64_t _e1_args) {
  chpl____wide_StringWriter sc = {CHPL_LOCALEID_T_INIT, NULL};
  c_string call_tmp;
  StringWriter this9 = NULL;
  int64_t call_tmp2;
  chpl_opaque cast_tmp;
  StringWriter T = NULL;
  c_string T2;
  chpl____wide_StringWriter wrap_call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Writer call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  c_string ret;
  chpl_localeID_t call_tmp4;
  chpl____wide_StringWriter rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn45 _args_foron_fn = NULL;
  int64_t chpl_here_alloc_size;
  chpl_opaque chpl_here_alloc_tmp;
  chpl____wide_StringWriter chpl_macro_tmp_1032;
  chpl____wide_Writer chpl_macro_tmp_1033;
  chpl____wide__ref_c_string chpl_macro_tmp_1034;
  chpl_gen_comm_get(((void*)(&call_tmp)), chpl_nodeFromLocaleID(&((*(this8)).locale), INT64(0), NULL), (*(this8)).addr, sizeof(c_string), -1, INT64(1), INT64(548), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  call_tmp2 = sizeof(chpl_StringWriter_object);
  cast_tmp = chpl_here_alloc(call_tmp2, INT16(19));
  T = ((StringWriter)(cast_tmp));
  this9 = T;
  ((object)(this9))->chpl__cid = chpl__cid_StringWriter;
  T2 = "";
  chpl_check_nil(this9, INT64(548), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  (this9)->s = T2;
  chpl_check_nil(this9, INT64(548), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  (this9)->s = call_tmp;
  chpl_macro_tmp_1032.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1032.addr = _construct_StringWriter(call_tmp, this9);
  wrap_call_tmp = chpl_macro_tmp_1032;
  sc = wrap_call_tmp;
  chpl_macro_tmp_1033.locale = (&wrap_call_tmp)->locale;
  chpl_macro_tmp_1033.addr = ((Writer)((&wrap_call_tmp)->addr));
  call_tmp3 = chpl_macro_tmp_1033;
  chpl_check_nil((&call_tmp3)->addr, INT64(549), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  write3(&call_tmp3, _e0_args, _e1_args);
  chpl_check_nil((&sc)->addr, INT64(550), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  chpl_macro_tmp_1034.locale = (&sc)->locale;
  chpl_macro_tmp_1034.addr = &(((&sc)->addr)->s);
  chpl_gen_comm_get(((void*)(&ret)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_1034).locale), INT64(0), NULL), (chpl_macro_tmp_1034).addr, sizeof(c_string), -1, INT64(1), INT64(550), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  chpl_gen_comm_put(((void*)(&ret)), chpl_nodeFromLocaleID(&((*(this8)).locale), INT64(0), NULL), (*(this8)).addr, sizeof(c_string), -1, INT64(1), INT64(550), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  call_tmp4 = (&wrap_call_tmp)->locale;
  rvfDerefTmp = wrap_call_tmp;
  chpl_here_alloc_size = sizeof(chpl__class_localson_fn45_object);
  chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(36));
  _args_foron_fn = ((_class_localson_fn45)(chpl_here_alloc_tmp));
  chpl_check_nil(_args_foron_fn, INT64(551), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  (_args_foron_fn)->_0__tmp = call_tmp4;
  chpl_check_nil(_args_foron_fn, INT64(551), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  (_args_foron_fn)->_1_rvfDerefTmp = rvfDerefTmp;
  /*** wrapon_fn45 ***/ chpl_executeOn(&call_tmp4, INT32(50), _args_foron_fn, sizeof(chpl__class_localson_fn45_object), INT64(551), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  chpl_here_free(((void*)(_args_foron_fn)));
  return;
}

/* ChapelIO.chpl:547 */
static void write12(chpl____wide__ref_c_string* const this8, chpl____wide_chpl_string _e0_args, chpl_taskID_t _e1_args) {
  chpl____wide_StringWriter sc = {CHPL_LOCALEID_T_INIT, NULL};
  c_string call_tmp;
  StringWriter this9 = NULL;
  int64_t call_tmp2;
  chpl_opaque cast_tmp;
  StringWriter T = NULL;
  c_string T2;
  chpl____wide_StringWriter wrap_call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Writer call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  c_string ret;
  chpl_localeID_t call_tmp4;
  chpl____wide_StringWriter rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn48 _args_foron_fn = NULL;
  int64_t chpl_here_alloc_size;
  chpl_opaque chpl_here_alloc_tmp;
  chpl____wide_StringWriter chpl_macro_tmp_1035;
  chpl____wide_Writer chpl_macro_tmp_1036;
  chpl____wide__ref_c_string chpl_macro_tmp_1037;
  chpl_gen_comm_get(((void*)(&call_tmp)), chpl_nodeFromLocaleID(&((*(this8)).locale), INT64(0), NULL), (*(this8)).addr, sizeof(c_string), -1, INT64(1), INT64(548), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  call_tmp2 = sizeof(chpl_StringWriter_object);
  cast_tmp = chpl_here_alloc(call_tmp2, INT16(19));
  T = ((StringWriter)(cast_tmp));
  this9 = T;
  ((object)(this9))->chpl__cid = chpl__cid_StringWriter;
  T2 = "";
  chpl_check_nil(this9, INT64(548), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  (this9)->s = T2;
  chpl_check_nil(this9, INT64(548), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  (this9)->s = call_tmp;
  chpl_macro_tmp_1035.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1035.addr = _construct_StringWriter(call_tmp, this9);
  wrap_call_tmp = chpl_macro_tmp_1035;
  sc = wrap_call_tmp;
  chpl_macro_tmp_1036.locale = (&wrap_call_tmp)->locale;
  chpl_macro_tmp_1036.addr = ((Writer)((&wrap_call_tmp)->addr));
  call_tmp3 = chpl_macro_tmp_1036;
  chpl_check_nil((&call_tmp3)->addr, INT64(549), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  write7(&call_tmp3, _e0_args, _e1_args);
  chpl_check_nil((&sc)->addr, INT64(550), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  chpl_macro_tmp_1037.locale = (&sc)->locale;
  chpl_macro_tmp_1037.addr = &(((&sc)->addr)->s);
  chpl_gen_comm_get(((void*)(&ret)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_1037).locale), INT64(0), NULL), (chpl_macro_tmp_1037).addr, sizeof(c_string), -1, INT64(1), INT64(550), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  chpl_gen_comm_put(((void*)(&ret)), chpl_nodeFromLocaleID(&((*(this8)).locale), INT64(0), NULL), (*(this8)).addr, sizeof(c_string), -1, INT64(1), INT64(550), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  call_tmp4 = (&wrap_call_tmp)->locale;
  rvfDerefTmp = wrap_call_tmp;
  chpl_here_alloc_size = sizeof(chpl__class_localson_fn48_object);
  chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(36));
  _args_foron_fn = ((_class_localson_fn48)(chpl_here_alloc_tmp));
  chpl_check_nil(_args_foron_fn, INT64(551), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  (_args_foron_fn)->_0__tmp = call_tmp4;
  chpl_check_nil(_args_foron_fn, INT64(551), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  (_args_foron_fn)->_1_rvfDerefTmp = rvfDerefTmp;
  /*** wrapon_fn48 ***/ chpl_executeOn(&call_tmp4, INT32(53), _args_foron_fn, sizeof(chpl__class_localson_fn48_object), INT64(551), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  chpl_here_free(((void*)(_args_foron_fn)));
  return;
}

/* ChapelIO.chpl:547 */
static void write10(chpl____wide__ref_c_string* const this8, chpl____wide_chpl_string _e0_args, int64_t _e1_args, chpl____wide_chpl_string _e2_args, int64_t _e3_args, chpl____wide_chpl_string _e4_args, int64_t _e5_args) {
  chpl____wide_StringWriter sc = {CHPL_LOCALEID_T_INIT, NULL};
  c_string call_tmp;
  StringWriter this9 = NULL;
  int64_t call_tmp2;
  chpl_opaque cast_tmp;
  StringWriter T = NULL;
  c_string T2;
  chpl____wide_StringWriter wrap_call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Writer call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  c_string ret;
  chpl_localeID_t call_tmp4;
  chpl____wide_StringWriter rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn46 _args_foron_fn = NULL;
  int64_t chpl_here_alloc_size;
  chpl_opaque chpl_here_alloc_tmp;
  chpl____wide_StringWriter chpl_macro_tmp_1038;
  chpl____wide_Writer chpl_macro_tmp_1039;
  chpl____wide__ref_c_string chpl_macro_tmp_1040;
  chpl_gen_comm_get(((void*)(&call_tmp)), chpl_nodeFromLocaleID(&((*(this8)).locale), INT64(0), NULL), (*(this8)).addr, sizeof(c_string), -1, INT64(1), INT64(548), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  call_tmp2 = sizeof(chpl_StringWriter_object);
  cast_tmp = chpl_here_alloc(call_tmp2, INT16(19));
  T = ((StringWriter)(cast_tmp));
  this9 = T;
  ((object)(this9))->chpl__cid = chpl__cid_StringWriter;
  T2 = "";
  chpl_check_nil(this9, INT64(548), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  (this9)->s = T2;
  chpl_check_nil(this9, INT64(548), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  (this9)->s = call_tmp;
  chpl_macro_tmp_1038.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1038.addr = _construct_StringWriter(call_tmp, this9);
  wrap_call_tmp = chpl_macro_tmp_1038;
  sc = wrap_call_tmp;
  chpl_macro_tmp_1039.locale = (&wrap_call_tmp)->locale;
  chpl_macro_tmp_1039.addr = ((Writer)((&wrap_call_tmp)->addr));
  call_tmp3 = chpl_macro_tmp_1039;
  chpl_check_nil((&call_tmp3)->addr, INT64(549), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  write4(&call_tmp3, _e0_args, _e1_args, _e2_args, _e3_args, _e4_args, _e5_args);
  chpl_check_nil((&sc)->addr, INT64(550), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  chpl_macro_tmp_1040.locale = (&sc)->locale;
  chpl_macro_tmp_1040.addr = &(((&sc)->addr)->s);
  chpl_gen_comm_get(((void*)(&ret)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_1040).locale), INT64(0), NULL), (chpl_macro_tmp_1040).addr, sizeof(c_string), -1, INT64(1), INT64(550), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  chpl_gen_comm_put(((void*)(&ret)), chpl_nodeFromLocaleID(&((*(this8)).locale), INT64(0), NULL), (*(this8)).addr, sizeof(c_string), -1, INT64(1), INT64(550), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  call_tmp4 = (&wrap_call_tmp)->locale;
  rvfDerefTmp = wrap_call_tmp;
  chpl_here_alloc_size = sizeof(chpl__class_localson_fn46_object);
  chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(36));
  _args_foron_fn = ((_class_localson_fn46)(chpl_here_alloc_tmp));
  chpl_check_nil(_args_foron_fn, INT64(551), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  (_args_foron_fn)->_0__tmp = call_tmp4;
  chpl_check_nil(_args_foron_fn, INT64(551), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  (_args_foron_fn)->_1_rvfDerefTmp = rvfDerefTmp;
  /*** wrapon_fn46 ***/ chpl_executeOn(&call_tmp4, INT32(51), _args_foron_fn, sizeof(chpl__class_localson_fn46_object), INT64(551), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  chpl_here_free(((void*)(_args_foron_fn)));
  return;
}

/* ChapelIO.chpl:547 */
static void write11(chpl____wide__ref_c_string* const this8, chpl____wide_chpl_string _e0_args, chpl_taskID_t _e1_args, chpl____wide_chpl_string _e2_args, int64_t _e3_args, chpl____wide_chpl_string _e4_args, int64_t _e5_args, chpl____wide_chpl_string _e6_args) {
  chpl____wide_StringWriter sc = {CHPL_LOCALEID_T_INIT, NULL};
  c_string call_tmp;
  StringWriter this9 = NULL;
  int64_t call_tmp2;
  chpl_opaque cast_tmp;
  StringWriter T = NULL;
  c_string T2;
  chpl____wide_StringWriter wrap_call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Writer call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  c_string ret;
  chpl_localeID_t call_tmp4;
  chpl____wide_StringWriter rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn47 _args_foron_fn = NULL;
  int64_t chpl_here_alloc_size;
  chpl_opaque chpl_here_alloc_tmp;
  chpl____wide_StringWriter chpl_macro_tmp_1041;
  chpl____wide_Writer chpl_macro_tmp_1042;
  chpl____wide__ref_c_string chpl_macro_tmp_1043;
  chpl_gen_comm_get(((void*)(&call_tmp)), chpl_nodeFromLocaleID(&((*(this8)).locale), INT64(0), NULL), (*(this8)).addr, sizeof(c_string), -1, INT64(1), INT64(548), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  call_tmp2 = sizeof(chpl_StringWriter_object);
  cast_tmp = chpl_here_alloc(call_tmp2, INT16(19));
  T = ((StringWriter)(cast_tmp));
  this9 = T;
  ((object)(this9))->chpl__cid = chpl__cid_StringWriter;
  T2 = "";
  chpl_check_nil(this9, INT64(548), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  (this9)->s = T2;
  chpl_check_nil(this9, INT64(548), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  (this9)->s = call_tmp;
  chpl_macro_tmp_1041.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1041.addr = _construct_StringWriter(call_tmp, this9);
  wrap_call_tmp = chpl_macro_tmp_1041;
  sc = wrap_call_tmp;
  chpl_macro_tmp_1042.locale = (&wrap_call_tmp)->locale;
  chpl_macro_tmp_1042.addr = ((Writer)((&wrap_call_tmp)->addr));
  call_tmp3 = chpl_macro_tmp_1042;
  chpl_check_nil((&call_tmp3)->addr, INT64(549), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  write5(&call_tmp3, _e0_args, _e1_args, _e2_args, _e3_args, _e4_args, _e5_args, _e6_args);
  chpl_check_nil((&sc)->addr, INT64(550), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  chpl_macro_tmp_1043.locale = (&sc)->locale;
  chpl_macro_tmp_1043.addr = &(((&sc)->addr)->s);
  chpl_gen_comm_get(((void*)(&ret)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_1043).locale), INT64(0), NULL), (chpl_macro_tmp_1043).addr, sizeof(c_string), -1, INT64(1), INT64(550), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  chpl_gen_comm_put(((void*)(&ret)), chpl_nodeFromLocaleID(&((*(this8)).locale), INT64(0), NULL), (*(this8)).addr, sizeof(c_string), -1, INT64(1), INT64(550), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  call_tmp4 = (&wrap_call_tmp)->locale;
  rvfDerefTmp = wrap_call_tmp;
  chpl_here_alloc_size = sizeof(chpl__class_localson_fn47_object);
  chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(36));
  _args_foron_fn = ((_class_localson_fn47)(chpl_here_alloc_tmp));
  chpl_check_nil(_args_foron_fn, INT64(551), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  (_args_foron_fn)->_0__tmp = call_tmp4;
  chpl_check_nil(_args_foron_fn, INT64(551), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  (_args_foron_fn)->_1_rvfDerefTmp = rvfDerefTmp;
  /*** wrapon_fn47 ***/ chpl_executeOn(&call_tmp4, INT32(52), _args_foron_fn, sizeof(chpl__class_localson_fn47_object), INT64(551), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  chpl_here_free(((void*)(_args_foron_fn)));
  return;
}

/* ChapelIO.chpl:551 */
static void on_fn44(chpl____wide_StringWriter* const delete_tmp) {
  chpl_opaque call_tmp;
  call_tmp = ((void*)((delete_tmp)->addr));
  chpl_here_free(call_tmp);
  return;
}

/* ChapelIO.chpl:551 */
static void on_fn45(chpl____wide_StringWriter* const delete_tmp) {
  chpl_opaque call_tmp;
  call_tmp = ((void*)((delete_tmp)->addr));
  chpl_here_free(call_tmp);
  return;
}

/* ChapelIO.chpl:551 */
static void on_fn46(chpl____wide_StringWriter* const delete_tmp) {
  chpl_opaque call_tmp;
  call_tmp = ((void*)((delete_tmp)->addr));
  chpl_here_free(call_tmp);
  return;
}

/* ChapelIO.chpl:551 */
static void on_fn47(chpl____wide_StringWriter* const delete_tmp) {
  chpl_opaque call_tmp;
  call_tmp = ((void*)((delete_tmp)->addr));
  chpl_here_free(call_tmp);
  return;
}

/* ChapelIO.chpl:551 */
static void on_fn48(chpl____wide_StringWriter* const delete_tmp) {
  chpl_opaque call_tmp;
  call_tmp = ((void*)((delete_tmp)->addr));
  chpl_here_free(call_tmp);
  return;
}

/* ChapelIO.chpl:551 */
static void wrapon_fn44(_class_localson_fn44 c) {
  chpl____wide_StringWriter _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_check_nil(c, INT64(551), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn44(&_1_rvfDerefTmp);
  return;
}

/* ChapelIO.chpl:551 */
static void wrapon_fn45(_class_localson_fn45 c) {
  chpl____wide_StringWriter _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_check_nil(c, INT64(551), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn45(&_1_rvfDerefTmp);
  return;
}

/* ChapelIO.chpl:551 */
static void wrapon_fn46(_class_localson_fn46 c) {
  chpl____wide_StringWriter _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_check_nil(c, INT64(551), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn46(&_1_rvfDerefTmp);
  return;
}

/* ChapelIO.chpl:551 */
static void wrapon_fn47(_class_localson_fn47 c) {
  chpl____wide_StringWriter _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_check_nil(c, INT64(551), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn47(&_1_rvfDerefTmp);
  return;
}

/* ChapelIO.chpl:551 */
static void wrapon_fn48(_class_localson_fn48 c) {
  chpl____wide_StringWriter _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_check_nil(c, INT64(551), "/home/kp167/chap-svn/modules/internal/ChapelIO.chpl");
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn48(&_1_rvfDerefTmp);
  return;
}

