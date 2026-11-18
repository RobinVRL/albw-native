#include "ghidra_types.h"

extern void func_001138EC(undefined4 *param_1,int param_2,float fparam_0);
extern undefined4 *DAT_00112f34;

// USA 00112EA0 <- EU 00112EA0 (Ghidra, non-matching)
// GLOBAL DAT_00112f34 undefined4 *

void func_00112EA0(undefined4 *param_1,int param_2,uint param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  float in_s0;
  
  uVar6 = (uint)*(byte *)(param_2 + 2);
  func_001138EC(param_1,uVar6,in_s0);
  puVar1 = DAT_00112f34;
  *(undefined1 *)((int)param_1 + uVar6 + 0x154) = 1;
  *(char *)(param_1 + uVar6 * 5 + 0x1a8) = (char)param_3;
  uVar5 = *puVar1;
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  if (param_3 != 0) {
    uVar5 = *param_4;
  }
  uVar4 = puVar1[3];
  param_1[uVar6 * 5 + 0x1a9] = uVar5;
  if (1 < param_3) {
    uVar2 = param_4[1];
  }
  param_1[uVar6 * 5 + 0x1aa] = uVar2;
  if (2 < param_3) {
    uVar3 = param_4[2];
  }
  param_1[uVar6 * 5 + 0x1ab] = uVar3;
  if (3 < param_3) {
    uVar4 = param_4[3];
  }
  param_1[uVar6 * 5 + 0x1ac] = uVar4;
  *param_1 = 0;
  return;
}

