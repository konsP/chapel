/* Sys.chpl:2 */
static void chpl__init_Sys(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  if (chpl__init_Sys_p) {
    goto _exit_chpl__init_Sys;
  }
  modFormatStr = "%*s\n";
  modStr = "Sys";
  printModuleInit(modFormatStr, modStr, INT64(3));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_Sys_p = true;
  {
    chpl__init_SysBasic(INT64(2), "/home/kp167/chap-svn/modules/standard/Sys.chpl");
  }
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_Sys:;
  return;
}

