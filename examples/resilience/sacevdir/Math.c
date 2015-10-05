/* Math.chpl:1 */
static void chpl__init_Math(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  if (chpl__init_Math_p) {
    goto _exit_chpl__init_Math;
  }
  modFormatStr = "%*s\n";
  modStr = "Math";
  printModuleInit(modFormatStr, modStr, INT64(4));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_Math_p = true;
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_Math:;
  return;
}

