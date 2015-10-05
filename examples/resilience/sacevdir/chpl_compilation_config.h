/*** Compilation Info ***/

const char* chpl_compileCommand = "chpl --savec examples/resilience/sacevdir --explain-verbose -o cobegin2loc examples/resilience/cobegin.chpl ";
const char* chpl_compileVersion = "1.9.0.0";
const char* CHPL_HOME = "/home/kp167/chap-svn";
const char* CHPL_HOST_PLATFORM = "linux64";
const char* CHPL_HOST_COMPILER = "gnu";
const char* CHPL_TARGET_PLATFORM = "linux64";
const char* CHPL_TARGET_COMPILER = "gnu";
const char* CHPL_TARGET_ARCH = "unknown";
const char* CHPL_LOCALE_MODEL = "flat";
const char* CHPL_COMM = "gasnet";
const char* CHPL_COMM_SUBSTRATE = "udp";
const char* CHPL_GASNET_SEGMENT = "everything";
const char* CHPL_TASKS = "fifo";
const char* CHPL_THREADS = "pthreads";
const char* CHPL_LAUNCHER = "amudprun";
const char* CHPL_TIMERS = "generic";
const char* CHPL_MEM = "default";
const char* CHPL_MAKE = "gmake";
const char* CHPL_ATOMICS = "intrinsics";
const char* CHPL_NETWORK_ATOMICS = "none";
const char* CHPL_GMP = "none";
const char* CHPL_HWLOC = "none";
const char* CHPL_REGEXP = "none";
const char* CHPL_WIDE_POINTERS = "struct";
const char* CHPL_LLVM = "none";
const char* CHPL_AUX_FILESYS = "none";
const int CHPL_STACK_CHECKS = 0;
const int CHPL_CACHE_REMOTE = 0;

void chpl_program_about(void);

void chpl_program_about() {
  printf("Compilation command: chpl --savec examples/resilience/sacevdir --explain-verbose -o cobegin2loc examples/resilience/cobegin.chpl \n");
  printf("Chapel compiler version: 1.9.0.0\n");
  printf("Chapel environment:\n");
  printf("  CHPL_HOME: /home/kp167/chap-svn\n");
  printf("  CHPL_HOST_PLATFORM: linux64\n");
  printf("  CHPL_HOST_COMPILER: gnu\n");
  printf("  CHPL_TARGET_PLATFORM: linux64\n");
  printf("  CHPL_TARGET_COMPILER: gnu\n");
  printf("  CHPL_TARGET_ARCH: unknown\n");
  printf("  CHPL_LOCALE_MODEL: flat\n");
  printf("  CHPL_COMM: gasnet\n");
  printf("  CHPL_COMM_SUBSTRATE: udp\n");
  printf("  CHPL_GASNET_SEGMENT: everything\n");
  printf("  CHPL_TASKS: fifo\n");
  printf("  CHPL_THREADS: pthreads\n");
  printf("  CHPL_LAUNCHER: amudprun\n");
  printf("  CHPL_TIMERS: generic\n");
  printf("  CHPL_MEM: default\n");
  printf("  CHPL_MAKE: gmake\n");
  printf("  CHPL_ATOMICS: intrinsics\n");
  printf("  CHPL_NETWORK_ATOMICS: none\n");
  printf("  CHPL_GMP: none\n");
  printf("  CHPL_HWLOC: none\n");
  printf("  CHPL_REGEXP: none\n");
  printf("  CHPL_WIDE_POINTERS: struct\n");
  printf("  CHPL_LLVM: none\n");
  printf("  CHPL_AUX_FILESYS: none\n");
}
