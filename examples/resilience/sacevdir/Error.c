/* Error.chpl:1 */
static void chpl__init_Error(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  if (chpl__init_Error_p) {
    goto _exit_chpl__init_Error;
  }
  modFormatStr = "%*s\n";
  modStr = "Error";
  printModuleInit(modFormatStr, modStr, INT64(5));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_Error_p = true;
  {
    chpl__init_SysBasic(INT64(1), "/home/kp167/chap-svn/modules/standard/Error.chpl");
  }
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_Error:;
  return;
}

/* Error.chpl:6 */
static c_string quote_string(chpl____wide_chpl_string s, int64_t len) {
  c_void_ptr local_c_nil;
  c_string ret;
  c_string ret2;
  syserr type_tmp;
  c_string ret3;
  c_string call_tmp;
  _ref_c_string _ref_tmp_ = NULL;
  syserr call_tmp2;
  _ref_c_string _ref_tmp_2 = NULL;
  _ref_c_string T = NULL;
  _ref_syserr _ref_tmp_3 = NULL;
  int32_t call_tmp3;
  chpl_bool call_tmp4;
  c_string call_tmp5;
  local_c_nil = c_nil;
  ret2 = "";
  ret3 = "";
  c_string_from_wide_string(&call_tmp, &s, INT64(17), "/home/kp167/chap-svn/modules/standard/Error.chpl");
  _ref_tmp_ = &ret3;
  *(_ref_tmp_) = call_tmp;
  _ref_tmp_2 = &ret2;
  T = _ref_tmp_2;
  call_tmp2 = qio_quote_string(UINT8(34), UINT8(34), QIO_STRING_FORMAT_CHPL, ret3, len, T, local_c_nil);
  _ref_tmp_2 = T;
  _ref_tmp_3 = &type_tmp;
  *(_ref_tmp_3) = call_tmp2;
  call_tmp3 = qio_err_iserr(type_tmp);
  call_tmp4 = (call_tmp3 != INT32(0));
  if (call_tmp4) {
    call_tmp5 = qio_strdup("<error>");
    ret = call_tmp5;
    goto _end_quote_string;
  }
  ret = ret2;
  _end_quote_string:;
  return ret;
}

/* Error.chpl:36 */
static void ioerror(syserr error, chpl____wide_chpl_string msg, chpl____wide_chpl_string path) {
  int32_t call_tmp;
  chpl_bool call_tmp2;
  c_string errstr;
  c_string quotedpath;
  int32_t type_tmp;
  int32_t strerror_err;
  _ref_int32_t _ref_tmp_ = NULL;
  c_string call_tmp3;
  _ref_int32_t _ref_tmp_2 = NULL;
  _ref_int32_t T = NULL;
  _ref_c_string _ref_tmp_3 = NULL;
  c_string ret;
  c_string call_tmp4;
  _ref_c_string _ref_tmp_4 = NULL;
  int64_t call_tmp5;
  c_string call_tmp6;
  _ref_c_string _ref_tmp_5 = NULL;
  c_string call_tmp7;
  c_string ret2;
  c_string call_tmp8;
  _ref_c_string _ref_tmp_6 = NULL;
  c_string call_tmp9;
  c_string call_tmp10;
  c_string call_tmp11;
  call_tmp = qio_err_iserr(error);
  call_tmp2 = (call_tmp != INT32(0));
  if (call_tmp2) {
    errstr = "";
    quotedpath = "";
    type_tmp = INT32(0);
    _ref_tmp_ = &type_tmp;
    *(_ref_tmp_) = INT32(0);
    strerror_err = type_tmp;
    _ref_tmp_2 = &strerror_err;
    T = _ref_tmp_2;
    call_tmp3 = sys_strerror_syserr_str(error, T);
    _ref_tmp_2 = T;
    _ref_tmp_3 = &errstr;
    *(_ref_tmp_3) = call_tmp3;
    ret = "";
    c_string_from_wide_string(&call_tmp4, &path, INT64(43), "/home/kp167/chap-svn/modules/standard/Error.chpl");
    _ref_tmp_4 = &ret;
    *(_ref_tmp_4) = call_tmp4;
    call_tmp5 = string_length(ret);
    call_tmp6 = quote_string(path, call_tmp5);
    _ref_tmp_5 = &quotedpath;
    *(_ref_tmp_5) = call_tmp6;
    call_tmp7 = string_concat(errstr, " ", INT64(44), "/home/kp167/chap-svn/modules/standard/Error.chpl");
    ret2 = "";
    c_string_from_wide_string(&call_tmp8, &msg, INT64(44), "/home/kp167/chap-svn/modules/standard/Error.chpl");
    _ref_tmp_6 = &ret2;
    *(_ref_tmp_6) = call_tmp8;
    call_tmp9 = string_concat(call_tmp7, ret2, INT64(44), "/home/kp167/chap-svn/modules/standard/Error.chpl");
    call_tmp10 = string_concat(call_tmp9, " with path ", INT64(44), "/home/kp167/chap-svn/modules/standard/Error.chpl");
    call_tmp11 = string_concat(call_tmp10, quotedpath, INT64(44), "/home/kp167/chap-svn/modules/standard/Error.chpl");
    chpl_error(call_tmp11, INT64(44), "/home/kp167/chap-svn/modules/standard/Error.chpl");
  }
  return;
}

/* Error.chpl:48 */
static void ioerror2(syserr error, chpl____wide_chpl_string msg, chpl____wide_chpl_string path, int64_t offset) {
  int32_t call_tmp;
  chpl_bool call_tmp2;
  c_string errstr;
  c_string quotedpath;
  int32_t type_tmp;
  int32_t strerror_err;
  _ref_int32_t _ref_tmp_ = NULL;
  c_string call_tmp3;
  _ref_int32_t _ref_tmp_2 = NULL;
  _ref_int32_t T = NULL;
  _ref_c_string _ref_tmp_3 = NULL;
  c_string ret;
  c_string call_tmp4;
  _ref_c_string _ref_tmp_4 = NULL;
  int64_t call_tmp5;
  c_string call_tmp6;
  _ref_c_string _ref_tmp_5 = NULL;
  c_string call_tmp7;
  c_string ret2;
  c_string call_tmp8;
  _ref_c_string _ref_tmp_6 = NULL;
  c_string call_tmp9;
  c_string call_tmp10;
  c_string call_tmp11;
  c_string call_tmp12;
  c_string call_tmp13;
  c_string call_tmp14;
  call_tmp = qio_err_iserr(error);
  call_tmp2 = (call_tmp != INT32(0));
  if (call_tmp2) {
    errstr = "";
    quotedpath = "";
    type_tmp = INT32(0);
    _ref_tmp_ = &type_tmp;
    *(_ref_tmp_) = INT32(0);
    strerror_err = type_tmp;
    _ref_tmp_2 = &strerror_err;
    T = _ref_tmp_2;
    call_tmp3 = sys_strerror_syserr_str(error, T);
    _ref_tmp_2 = T;
    _ref_tmp_3 = &errstr;
    *(_ref_tmp_3) = call_tmp3;
    ret = "";
    c_string_from_wide_string(&call_tmp4, &path, INT64(55), "/home/kp167/chap-svn/modules/standard/Error.chpl");
    _ref_tmp_4 = &ret;
    *(_ref_tmp_4) = call_tmp4;
    call_tmp5 = string_length(ret);
    call_tmp6 = quote_string(path, call_tmp5);
    _ref_tmp_5 = &quotedpath;
    *(_ref_tmp_5) = call_tmp6;
    call_tmp7 = string_concat(errstr, " ", INT64(56), "/home/kp167/chap-svn/modules/standard/Error.chpl");
    ret2 = "";
    c_string_from_wide_string(&call_tmp8, &msg, INT64(56), "/home/kp167/chap-svn/modules/standard/Error.chpl");
    _ref_tmp_6 = &ret2;
    *(_ref_tmp_6) = call_tmp8;
    call_tmp9 = string_concat(call_tmp7, ret2, INT64(56), "/home/kp167/chap-svn/modules/standard/Error.chpl");
    call_tmp10 = string_concat(call_tmp9, " with path ", INT64(56), "/home/kp167/chap-svn/modules/standard/Error.chpl");
    call_tmp11 = string_concat(call_tmp10, quotedpath, INT64(56), "/home/kp167/chap-svn/modules/standard/Error.chpl");
    call_tmp12 = string_concat(call_tmp11, " offset ", INT64(56), "/home/kp167/chap-svn/modules/standard/Error.chpl");
    call_tmp13 = int64_t_to_c_string(offset);
    call_tmp14 = string_concat(call_tmp12, call_tmp13, INT64(56), "/home/kp167/chap-svn/modules/standard/Error.chpl");
    chpl_error(call_tmp14, INT64(56), "/home/kp167/chap-svn/modules/standard/Error.chpl");
  }
  return;
}

