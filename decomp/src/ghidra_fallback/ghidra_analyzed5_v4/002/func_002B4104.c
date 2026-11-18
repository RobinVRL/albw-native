#include "ghidra_types.h"

extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern undefined4 DAT_002b4134;
extern undefined4 DAT_002b4138;

// USA 002B4104 <- EU 002B40E0 (Ghidra, non-matching)
// GLOBAL DAT_002b4134 undefined4
// GLOBAL DAT_002b4138 undefined4

void func_002B4104(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_002b4134;
  *(undefined4 *)(param_1 + 0x3dc) = DAT_002b4134;
  *(undefined4 *)(param_1 + 0x3e0) = uVar1;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  func_004FC07C(param_1,3,0xffffffff,0);
  uVar1 = DAT_002b4138;
  *(undefined4 *)(param_1 + 0x938) = 0x3c;
  *(undefined4 *)(param_1 + 0x93c) = uVar1;
  *(undefined4 *)(param_1 + 0x934) = 0;
  *(undefined1 *)(param_1 + 0x989) = 1;
  return;
}

