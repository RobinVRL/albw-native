#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int DAT_0066d9f8;
extern undefined *DAT_0066d9fc;

// USA 0066D8D0 <- EU 0066D8A8 (Ghidra, non-matching)
// GLOBAL DAT_0066d9f8 int
// GLOBAL DAT_0066d9fc undefined *

/* WARNING: Removing unreachable block (ram,0x0066d8f4) */

void func_0066D8D0(int param_1,undefined4 param_2,byte *param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  
  uVar2 = (uint)*param_3;
  *(byte *)(param_1 + 6) = *param_3;
  *(undefined4 *)(param_1 + 0x14) = param_2;
  iVar3 = func_0010BA78(uVar2 << 4);
  *(int *)(param_1 + 0x18) = iVar3;
  iVar6 = DAT_0066d9f8;
  *(uint *)(param_1 + 0x1c) = iVar3 + (uint)*(byte *)(param_1 + 6) * 8;
  if (uVar2 != 0) {
    puVar4 = (undefined4 *)(iVar3 + -8);
    for (iVar7 = (int)(uVar2 * 2) >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
      uVar8 = *(undefined4 *)(iVar6 + 0xbc);
      puVar4[2] = *(undefined4 *)(iVar6 + 0xb8);
      puVar4[3] = uVar8;
      uVar8 = *(undefined4 *)(iVar6 + 0xbc);
      puVar4[4] = *(undefined4 *)(iVar6 + 0xb8);
      puVar4[5] = uVar8;
      puVar4 = puVar4 + 4;
    }
  }
  bVar1 = *(byte *)(param_1 + 6);
  uVar2 = (uint)bVar1;
  puVar4 = (undefined4 *)func_0010BA78(uVar2 << 3);
  *(undefined4 **)(param_1 + 0x20) = puVar4;
  if (uVar2 != 0) {
    puVar5 = puVar4 + -2;
    if ((bVar1 & 1) != 0) {
      uVar8 = *(undefined4 *)(iVar6 + 0x14);
      *puVar4 = *(undefined4 *)(iVar6 + 0x10);
      puVar4[1] = uVar8;
      puVar5 = puVar4;
    }
    for (iVar3 = (int)uVar2 >> 1; iVar3 != 0; iVar3 = iVar3 + -1) {
      uVar8 = *(undefined4 *)(iVar6 + 0x14);
      puVar5[2] = *(undefined4 *)(iVar6 + 0x10);
      puVar5[3] = uVar8;
      uVar8 = *(undefined4 *)(iVar6 + 0x14);
      puVar5[4] = *(undefined4 *)(iVar6 + 0x10);
      puVar5[5] = uVar8;
      puVar5 = puVar5 + 4;
    }
  }
  uVar2 = (uint)*param_3;
  if (uVar2 != 0) {
    puVar4 = (undefined4 *)func_0010CEE0(uVar2 * 0x24 + 8,(int *)0x0,4);
    iVar6 = 0;
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = 0x24;
      puVar4[1] = uVar2;
      iVar6 = func_00100118((int)(puVar4 + 2),DAT_0066d9fc,0x24,uVar2);
    }
    if (iVar6 != 0) {
      *(uint *)(param_1 + 8) = uVar2;
      *(int *)(param_1 + 0xc) = iVar6;
    }
  }
  return;
}

