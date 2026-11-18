#include "ghidra_types.h"

extern int func_004BC61C(int *param_1);
extern int func_004BC8D8(int param_1);
extern int func_00564A78(int param_1,int *param_2);
extern int iRam0050e2bc;
extern int iRam0050e2c0;
extern char s_wrist_l_0050e2b4[];

// USA 0050E298 <- EU 0050E270 (Ghidra, non-matching)
// GLOBAL UNK_0050e2bc int
// GLOBAL UNK_0050e2c0 int
// GLOBAL s_wrist_l_0050e2b4 string

void func_0050E298(int param_1)

{
  uint uVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define iStack_10 (*(int *)(albw_frame + 0x0))
  #define pcStack_c (*(char * *)(albw_frame + 0x4))
  func_004BC8D8(param_1);
  func_004BC61C((int *)param_1);
  pcStack_c = s_wrist_l_0050e2b4;
  iStack_10 = iRam0050e2bc;
  uVar1 = func_00564A78(*(int *)(param_1 + 0x7a0),&iStack_10);
  *(short *)(iRam0050e2c0 + param_1) = (short)uVar1;
  return;
}

