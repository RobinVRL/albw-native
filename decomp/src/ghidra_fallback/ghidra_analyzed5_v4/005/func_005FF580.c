#include "ghidra_types.h"

extern int func_004964F8(uint param_1,int *param_2,int param_3,int param_4,undefined8 param_5);
extern int func_005FEF2C(int param_1,undefined4 param_2,int param_3);
extern int DAT_005ff6b4;
extern undefined4 *DAT_005ff6b8;

// USA 005FF580 <- EU 005FF558 (Ghidra, non-matching)
// GLOBAL DAT_005ff6b4 int
// GLOBAL DAT_005ff6b8 undefined4 *

void func_005FF580(int param_1,undefined4 param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 extraout_r1;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  undefined4 unaff_r4;
  int iVar7;
  
  func_005FEF2C(0x400,param_2,param_3);
  iVar5 = 0;
  func_004964F8(*(uint *)(param_1 + *(int *)(param_1 + 0x124) * 4 + 0xc4),(int *)(param_1 + 0xd4),0,
                0,0x500);
  func_005FEF2C(0x400,extraout_r1,iVar5);
  iVar5 = DAT_005ff6b4;
  uVar2 = *(uint *)(param_1 + *(int *)(param_1 + 0x124) * 4 + 0xc4);
  iVar7 = DAT_005ff6b4 + (uVar2 & 0x1f) * 4;
  puVar3 = *(uint **)(iVar7 + 0xa4);
  if (puVar3 != (uint *)0x0) {
    do {
      uVar4 = *puVar3;
      if (uVar4 != uVar2) {
        puVar3 = (uint *)puVar3[6];
      }
    } while (uVar4 != uVar2 && puVar3 != (uint *)0x0);
  }
  if ((uVar2 != 0) && (puVar3 == (uint *)0x0)) {
    if ((code *)*DAT_005ff6b8 == (code *)0x0) {
      puVar3 = (uint *)0x0;
    }
    else {
      puVar3 = (uint *)(*(code *)*DAT_005ff6b8)(0x10000,0x100,0,0x1c,unaff_r4);
    }
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    *puVar3 = uVar2;
    puVar6 = *(uint **)(iVar7 + 0xa4);
    if (puVar6 == (uint *)0x0) {
      *(uint **)(iVar7 + 0xa4) = puVar3;
    }
    else if (uVar2 < *puVar6) {
      puVar3[6] = (uint)puVar6;
      *(uint **)(iVar7 + 0xa4) = puVar3;
    }
    else {
      for (puVar1 = (uint *)puVar6[6]; puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[6]) {
        if (uVar2 < *puVar1) {
          puVar6[6] = (uint)puVar3;
          puVar3[6] = (uint)puVar1;
          if (puVar1 != (uint *)0x0) goto LAB_005ff6a4;
          break;
        }
        puVar6 = puVar1;
      }
      puVar6[6] = (uint)puVar3;
    }
  }
LAB_005ff6a4:
  *(uint **)(iVar5 + *(int *)(iVar5 + 0x124) * 4 + 0x128) = puVar3;
  return;
}

