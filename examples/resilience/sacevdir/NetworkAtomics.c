/* NetworkAtomics.chpl:3 */
static void chpl__init_NetworkAtomics(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  if (chpl__init_NetworkAtomics_p) {
    goto _exit_chpl__init_NetworkAtomics;
  }
  modFormatStr = "%*s\n";
  modStr = "NetworkAtomics";
  printModuleInit(modFormatStr, modStr, INT64(14));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_NetworkAtomics_p = true;
  LINENO = INT32(-1);
  chpl_comm_broadcast_private(INT64(4), sizeof(int32_t), -1);
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_NetworkAtomics:;
  return;
}

