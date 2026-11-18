#include "ghidra_types.h"

extern undefined4 DAT_00270a98;
extern undefined4 DAT_00270a9c;

// USA 00270A2C <- EU 00270A54 (Ghidra, non-matching)
// GLOBAL DAT_00270a98 undefined4
// GLOBAL DAT_00270a9c undefined4

undefined4 func_00270A2C(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = DAT_00270a98;
  param_1[1] = 0;
  *param_1 = 0xffffffff;
  uVar2 = DAT_00270a9c;
  param_1[2] = uVar1;
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  param_1[5] = uVar1;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 9) = 0xff;
  *(undefined1 *)((int)param_1 + 0x25) = 0;
  *(undefined1 *)((int)param_1 + 0x26) = 1;
  return (undefined4)param_1;
}

