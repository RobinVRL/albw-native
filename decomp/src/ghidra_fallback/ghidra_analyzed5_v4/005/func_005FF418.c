#include "ghidra_types.h"

extern int func_00110490(undefined4 *param_1,uint param_2);
extern int DAT_005ff548;
extern undefined4 *DAT_005ff54c;
extern int *DAT_005ff550;
extern int *DAT_005ff554;

// USA 005FF418 <- EU 005FF3F0 (Ghidra, non-matching)
// GLOBAL DAT_005ff548 int
// GLOBAL DAT_005ff54c undefined4 *
// GLOBAL DAT_005ff550 int *
// GLOBAL DAT_005ff554 int *

int func_005FF418(uint param_1,undefined4 param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  
  iVar2 = DAT_005ff548;
  iVar8 = DAT_005ff548 + (param_1 & 0x1f) * 4;
  for (puVar7 = *(uint **)(iVar8 + 0x1c); puVar7 != (uint *)0x0; puVar7 = (uint *)puVar7[0x10]) {
    if (*puVar7 == param_1) {
      if (puVar7 != (uint *)0x0) goto LAB_005ff4e4;
      break;
    }
  }
  if (param_1 != 0) {
    if ((code *)*DAT_005ff54c == (code *)0x0) {
      puVar7 = (uint *)0x0;
    }
    else {
      param_3 = 0;
      puVar7 = (uint *)(*(code *)*DAT_005ff54c)(0x10000,0x100,0,0x44);
    }
    func_00110490(puVar7,0x44);
    puVar7[0xb] = 0x300;
    *puVar7 = param_1;
    puVar5 = *(uint **)(iVar8 + 0x1c);
    if (puVar5 == (uint *)0x0) {
      *(uint **)(iVar8 + 0x1c) = puVar7;
    }
    else if (param_1 < *puVar5) {
      puVar7[0x10] = (uint)puVar5;
      *(uint **)(iVar8 + 0x1c) = puVar7;
    }
    else {
      for (puVar1 = (uint *)puVar5[0x10]; puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[0x10]) {
        param_3 = *puVar1;
        if (param_1 < param_3) {
          puVar5[0x10] = (uint)puVar7;
          puVar7[0x10] = (uint)puVar1;
          if (puVar1 != (uint *)0x0) goto LAB_005ff4e4;
          break;
        }
        puVar5 = puVar1;
      }
      puVar5[0x10] = (uint)puVar7;
    }
  }
LAB_005ff4e4:
  piVar3 = DAT_005ff550;
  iVar8 = *(int *)(iVar2 + 0x9c);
  if (iVar8 != 0) {
    param_3 = *DAT_005ff550 - *(int *)(iVar8 + 4);
    *(uint *)(iVar8 + 0xc) = param_3;
  }
  *(uint **)(iVar2 + 0x9c) = puVar7;
  piVar4 = DAT_005ff554;
  if (puVar7 != (uint *)0x0) {
    param_3 = puVar7[1];
  }
  if (puVar7 != (uint *)0x0 && param_3 != 0) {
    *piVar3 = puVar7[3] + param_3;
    uVar6 = puVar7[2];
    *piVar4 = uVar6 + param_3;
    return uVar6 + param_3;
  }
  *DAT_005ff554 = 0;
  *piVar3 = 0;
  return (int)piVar3;
}

