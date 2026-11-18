#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int DAT_002cc61c;
extern char s_SE_TurtleMother_DOCKING_START_002cc5fc[];

// USA 002CC5CC <- EU 002CC5A8 (Ghidra, non-matching)
// GLOBAL DAT_002cc61c int
// GLOBAL s_SE_TurtleMother_DOCKING_START_002cc5fc string

void func_002CC5CC(int *param_1)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  local_10 = DAT_002cc61c;
  local_c = s_SE_TurtleMother_DOCKING_START_002cc5fc;
  func_00150A84(param_1,&local_10,0);
  (**(code **)(*param_1 + 0xac))(param_1,4,0xffffffff);
  *(undefined1 *)((int)param_1 + 0x9d2) = 1;
  return;
}

