#include "ghidra_types.h"

extern int func_001509A4(int param_1,int *param_2,int param_3);
extern int func_002F8DE4(int *param_1,int param_2,uint param_3,int param_4);
extern int DAT_006740dc;
extern undefined4 DAT_006740e0;
extern int DAT_006740e4;

// USA 0067409C <- EU 00674074 (Ghidra, non-matching)
// GLOBAL DAT_006740dc int
// GLOBAL DAT_006740e0 undefined4
// GLOBAL DAT_006740e4 int

void func_0067409C(int *param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(undefined4 *)(albw_frame + 0x4))
  param_1[0x23d] = 0;
  *(undefined1 *)(param_1 + 0x242) = 0;
  func_002F8DE4(param_1,0,0xffffffff,0);
  local_c = DAT_006740e0;
  iVar1 = DAT_006740dc;
  param_1[0xf7] = DAT_006740dc;
  local_10 = DAT_006740e4;
  param_1[0xf9] = iVar1;
  func_001509A4((int)param_1,&local_10,0);
  *(undefined1 *)((int)param_1 + 0x98f) = 1;
  return;
}

