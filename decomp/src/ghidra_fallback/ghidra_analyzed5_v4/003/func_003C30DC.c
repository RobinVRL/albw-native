#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern undefined4 DAT_003c31e8;
extern undefined4 *DAT_003c31ec;
extern undefined4 DAT_003c31f0;
extern undefined4 DAT_003c31f4;
extern undefined4 DAT_003c31f8;
extern undefined4 *DAT_003c31fc;
extern uint *DAT_003c3200;
extern undefined4 *DAT_003c3204;
extern undefined4 DAT_003c3208;

// USA 003C30DC <- EU 003C30B8 (Ghidra, non-matching)
// GLOBAL DAT_003c31e8 undefined4
// GLOBAL DAT_003c31ec undefined4 *
// GLOBAL DAT_003c31f0 undefined4
// GLOBAL DAT_003c31f4 undefined4
// GLOBAL DAT_003c31f8 undefined4
// GLOBAL DAT_003c31fc undefined4 *
// GLOBAL DAT_003c3200 uint *
// GLOBAL DAT_003c3204 undefined4 *
// GLOBAL DAT_003c3208 undefined4

undefined4 *
func_003C30DC(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined1 param_4,
             float fparam_0,float fparam_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  *param_1 = DAT_003c31e8;
  param_1[1] = param_2;
  param_1[2] = param_3;
  uVar5 = *DAT_003c31ec;
  uVar6 = DAT_003c31ec[1];
  param_1[7] = param_1;
  uVar1 = DAT_003c31f0;
  param_1[8] = uVar5;
  param_1[9] = uVar6;
  param_1[6] = uVar1;
  param_1[10] = param_1 + 6;
  param_1[0xb] = 0;
  param_1[0xc] = 3;
  param_1[0xd] = 0x3c;
  param_1[0xe] = 0xffffffff;
  uVar1 = DAT_003c31f4;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = uVar1;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = uVar1;
  puVar2 = DAT_003c31fc;
  uVar1 = DAT_003c31f8;
  param_1[0x15] = ALBW_AS_U32(fparam_0);
  param_1[0x16] = uVar1;
  param_1[0x17] = ALBW_AS_U32(fparam_1);
  uVar5 = *puVar2;
  uVar6 = puVar2[1];
  param_1[0x1a] = puVar2[2];
  param_1[0x18] = uVar5;
  param_1[0x19] = uVar6;
  param_1[0x1b] = uVar1;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)((int)param_1 + 0x71) = 0;
  *(undefined1 *)((int)param_1 + 0x72) = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)((int)param_1 + 0x75) = param_4;
  *(undefined1 *)((int)param_1 + 0x76) = 0;
  *(undefined1 *)((int)param_1 + 0x77) = 0;
  if (((*DAT_003c3200 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_003c3200), iVar4 != 0)) {
    *DAT_003c3204 = DAT_003c3208;
  }
  if ((param_2 == (undefined4 *)0x0) ||
     (iVar4 = (**(code **)*param_2)(param_2,DAT_003c3204), iVar4 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  *(undefined1 *)(param_1 + 0x1d) = uVar3;
  return param_1;
}

