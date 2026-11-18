#include "ghidra_types.h"

extern int func_0025BDA4(int *param_1,int *param_2);
extern int func_00295A8C(int param_1);
extern int DAT_004eab64;
extern char s_SE_S_READ_RIDDLE_004eab7c[];
extern char s_SE_S_READ_RIDDLE_S_004eab68[];

// USA 004EAB38 <- EU 004EAB10 (Ghidra, non-matching)
// GLOBAL DAT_004eab64 int
// GLOBAL s_SE_S_READ_RIDDLE_004eab7c string
// GLOBAL s_SE_S_READ_RIDDLE_S_004eab68 string

undefined4 func_004EAB38(int param_1,int param_2)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  local_10 = DAT_004eab64;
  if (param_2 == 0) {
    local_c = s_SE_S_READ_RIDDLE_004eab7c;
    func_0025BDA4(*(int **)(param_1 + 0x40),&local_10);
  }
  else {
    local_c = s_SE_S_READ_RIDDLE_S_004eab68;
    func_0025BDA4(*(int **)(param_1 + 0x40),&local_10);
  }
  return func_00295A8C(*(int *)(param_1 + 0x4c));
}

