#include "ghidra_types.h"

extern int func_001E686C(int param_1,undefined4 *param_2);
extern undefined4 DAT_004bff98;

// USA 004BFF60 <- EU 004BFF38 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:1 undefined1
// PARAM param_6 Stack[0x4]:4 undefined4
// PARAM param_7 Stack[0x8]:4 undefined4 *
// GLOBAL DAT_004bff98 undefined4

void func_004BFF60(int param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5,undefined4 param_6,undefined4 *param_7,float fparam_0)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_1 + 0x7e7) = param_2;
  *(undefined1 *)(param_1 + 0x7e8) = param_3;
  *(undefined1 *)(param_1 + 0x7e9) = param_4;
  *(undefined1 *)(param_1 + 0x7ea) = param_5;
  *(float *)(param_1 + 0x7e0) = fparam_0;
  *(undefined4 *)(param_1 + 0x7d4) = param_6;
  func_001E686C(param_1 + 0x7c4,param_7);
  uVar1 = DAT_004bff98;
  *(byte *)(param_1 + 0x7eb) = ~(byte)(*(uint *)(param_1 + 0x8ac) >> 0xd) & 1;
  *(undefined4 *)(param_1 + 0x3dc) = uVar1;
  *(undefined4 *)(param_1 + 0x3e0) = uVar1;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  return;
}

