#include "ghidra_types.h"

extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern undefined4 DAT_00128590;
extern undefined4 DAT_00128594;

// USA 00128530 <- EU 00128530 (Ghidra, non-matching)
// GLOBAL DAT_00128590 undefined4
// GLOBAL DAT_00128594 undefined4

undefined4 func_00128530(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = DAT_00128590;
  *(undefined4 *)(param_1 + 0x3dc) = DAT_00128590;
  *(undefined4 *)(param_1 + 0x3e0) = uVar1;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  uVar2 = DAT_00128594;
  if (*(char *)(param_1 + 0x8c1) == '\x03') {
    *(undefined4 *)(param_1 + 0x8e4) = 100;
    *(undefined4 *)(param_1 + 0x8e8) = uVar2;
  }
  else {
    *(undefined4 *)(param_1 + 0x8e4) = 0;
    *(undefined4 *)(param_1 + 0x8e8) = uVar1;
  }
  *(undefined4 *)(param_1 + 0x8e0) = 0;
  return func_004FABDC(param_1,0,0xffffffff,0);
}

