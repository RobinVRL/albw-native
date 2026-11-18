#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern undefined4 DAT_00436488;
extern undefined *DAT_0043648c;

// USA 00436444 <- EU 00436424 (Ghidra, non-matching)
// GLOBAL DAT_00436488 undefined4
// GLOBAL DAT_0043648c undefined *

int func_00436444(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  *param_1 = 0;
  uVar1 = DAT_00436488;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[6] = uVar1;
  *(undefined2 *)(param_1 + 0x19) = 0x1f;
  param_1[0x29] = 0;
  param_1[0x2a] = 2;
  param_1[0x2b] = 0;
  if (param_1 + 0x2c != (undefined4 *)0x0) {
    param_1[0x2b] = param_1 + 0x2c;
  }
  iVar2 = func_00100118((int)(param_1 + 0x2c),DAT_0043648c,0x4c,2);
  return iVar2 + -0xb0;
}

