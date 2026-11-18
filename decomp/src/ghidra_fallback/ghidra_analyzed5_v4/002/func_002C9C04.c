#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int DAT_002c9c38;
extern char s_SE_SwitchPull_PULL_START_002c9c1c[];

// USA 002C9C04 <- EU 002C9BE0 (Ghidra, non-matching)
// GLOBAL DAT_002c9c38 int
// GLOBAL s_SE_SwitchPull_PULL_START_002c9c1c string

void func_002C9C04(int *param_1)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  local_10 = DAT_002c9c38;
  local_c = s_SE_SwitchPull_PULL_START_002c9c1c;
  func_00150A84(param_1,&local_10,0);
  *(undefined1 *)((int)param_1 + 0x4e9) = 0;
  return;
}

