#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int DAT_00240fd4;
extern char s_SE_SwitchPull_PULL_START_00240fb8[];

// USA 00240F7C <- EU 00240F7C (Ghidra, non-matching)
// GLOBAL DAT_00240fd4 int
// GLOBAL s_SE_SwitchPull_PULL_START_00240fb8 string

void func_00240F7C(int *param_1)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  local_10 = DAT_00240fd4;
  local_c = s_SE_SwitchPull_PULL_START_00240fb8;
  func_00150A84(param_1,&local_10,0);
  *(undefined1 *)(param_1 + 0x13c) = 0;
  return;
}

