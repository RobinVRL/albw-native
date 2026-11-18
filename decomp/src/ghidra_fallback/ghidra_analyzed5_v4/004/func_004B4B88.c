#include "ghidra_types.h"

extern int func_004CDF40(int param_1,int param_2,int param_3);
extern int func_006875AC(int *param_1,int *param_2,int param_3);
extern int func_00688CA0(int param_1,int *param_2);
extern int func_00689A2C(undefined4 *param_1,undefined4 param_2,int param_3);
extern undefined4 DAT_004b4bd4;
extern undefined4 DAT_004b4bd8;
extern int *DAT_004b4bdc;

// USA 004B4B88 <- EU 004B4B60 (Ghidra, non-matching)
// GLOBAL DAT_004b4bd4 undefined4
// GLOBAL DAT_004b4bd8 undefined4
// GLOBAL DAT_004b4bdc int *

undefined4 func_004B4B88(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define aiStack_28 ((int *)(albw_frame + 0x8))
  #define auStack_1c ((undefined1 *)(albw_frame + 0x14))
  #define local_10 (*(uint *)(albw_frame + 0x20))
  puVar1 = func_00689A2C(aiStack_28,auStack_1c,10);
  *(undefined1 *)puVar1[1] = 0;
  *puVar1 = DAT_004b4bd8;
  func_00688CA0(param_3,aiStack_28);
  local_10 = 0;
  func_006875AC((int *)&local_10,aiStack_28,-1);
  return func_004CDF40(*DAT_004b4bdc,local_10 & 0xffff,1);
}

