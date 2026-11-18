#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00110490(undefined4 *param_1,uint param_2);
extern undefined *DAT_004e9558;

// USA 004E9534 <- EU 004E950C (Ghidra, non-matching)
// GLOBAL DAT_004e9558 undefined *

int func_004E9534(int param_1)

{
  int iVar1;
  
  func_00110490((undefined4 *)(param_1 + 0x40),0x80);
  *(undefined4 *)(param_1 + 0x26c) = 0;
  *(undefined4 *)(param_1 + 0x270) = 0;
  *(undefined4 *)(param_1 + 0x274) = 0;
  *(undefined4 *)(param_1 + 0x278) = 0;
  *(undefined4 *)(param_1 + 0x27c) = 0;
  *(undefined4 *)(param_1 + 0x280) = 0;
  iVar1 = func_00100118(param_1 + 0x560,DAT_004e9558,0x40,0x20);
  return iVar1 + -0x560;
}

