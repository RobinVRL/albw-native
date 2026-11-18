#include "ghidra_types.h"

extern undefined4 DAT_00432fe4;
extern undefined4 DAT_00432fe8;
extern undefined4 DAT_00432fec;
extern undefined4 DAT_00432ff0;
extern undefined4 DAT_00432ff4;

// USA 00432F74 <- EU 00432F54 (Ghidra, non-matching)
// GLOBAL DAT_00432fe4 undefined4
// GLOBAL DAT_00432fe8 undefined4
// GLOBAL DAT_00432fec undefined4
// GLOBAL DAT_00432ff0 undefined4
// GLOBAL DAT_00432ff4 undefined4

undefined4 func_00432F74(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = DAT_00432fe8;
  *param_1 = DAT_00432fe4;
  param_1[1] = uVar1;
  param_1[2] = uVar1;
  param_1[3] = uVar1;
  param_1[4] = uVar1;
  param_1[5] = uVar1;
  param_1[6] = uVar1;
  param_1[7] = uVar1;
  param_1[8] = uVar1;
  param_1[9] = uVar1;
  uVar2 = DAT_00432fec;
  *(undefined2 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xd] = uVar2;
  param_1[0xe] = uVar2;
  param_1[0xf] = uVar2;
  uVar2 = DAT_00432ff0;
  param_1[0x10] = DAT_00432ff0;
  param_1[0x11] = uVar2;
  param_1[0x12] = uVar2;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined2 *)(param_1 + 0x15) = 6;
  *param_1 = DAT_00432ff4;
  param_1[0x16] = uVar1;
  return (undefined4)param_1;
}

