#include "ghidra_types.h"

extern undefined4 DAT_00432418;
extern undefined4 DAT_0043241c;
extern undefined4 DAT_00432420;
extern undefined4 DAT_00432424;
extern undefined4 DAT_00432428;

// USA 004323A0 <- EU 00432380 (Ghidra, non-matching)
// GLOBAL DAT_00432418 undefined4
// GLOBAL DAT_0043241c undefined4
// GLOBAL DAT_00432420 undefined4
// GLOBAL DAT_00432424 undefined4
// GLOBAL DAT_00432428 undefined4

undefined4 func_004323A0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = DAT_00432418;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  param_1[0x16] = *param_2;
  param_1[0x17] = uVar2;
  param_1[0x18] = uVar3;
  param_1[0x19] = uVar4;
  uVar2 = DAT_0043241c;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar2;
  param_1[3] = uVar2;
  param_1[4] = uVar2;
  param_1[5] = uVar2;
  param_1[6] = uVar2;
  param_1[7] = uVar2;
  param_1[8] = uVar2;
  param_1[9] = uVar2;
  uVar1 = DAT_00432420;
  *(undefined2 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar1;
  param_1[0xf] = uVar1;
  uVar1 = DAT_00432424;
  param_1[0x10] = DAT_00432424;
  param_1[0x11] = uVar1;
  param_1[0x12] = uVar1;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined2 *)(param_1 + 0x15) = 5;
  *param_1 = DAT_00432428;
  return (undefined4)param_1;
}

