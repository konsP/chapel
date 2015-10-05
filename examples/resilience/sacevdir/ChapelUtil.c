/* ChapelUtil.chpl:6 */
static void chpl__init_ChapelUtil(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  if (chpl__init_ChapelUtil_p) {
    goto _exit_chpl__init_ChapelUtil;
  }
  modFormatStr = "%*s\n";
  modStr = "ChapelUtil";
  printModuleInit(modFormatStr, modStr, INT64(10));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_ChapelUtil_p = true;
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_ChapelUtil:;
  return;
}

