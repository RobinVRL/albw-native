#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int DAT_003f8218;
extern uint DAT_003f821c;
extern int DAT_003f8220;
extern uint *DAT_003f8224;
extern undefined4 DAT_003f8228;
extern undefined4 *DAT_003f822c;

// USA 003F80EC <- EU 003F80CC (Ghidra, non-matching)
// GLOBAL DAT_003f8218 int
// GLOBAL DAT_003f821c uint
// GLOBAL DAT_003f8220 int
// GLOBAL DAT_003f8224 uint *
// GLOBAL DAT_003f8228 undefined4
// GLOBAL DAT_003f822c undefined4 *

undefined4 * func_003F80EC(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  uint *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  
  iVar4 = DAT_003f8218;
  iVar9 = 0;
  do {
    uVar8 = *(int *)(param_1 + 0x444) + 1U & *(uint *)(param_1 + 0x45c);
    *(uint *)(param_1 + 0x444) = uVar8;
    uVar1 = DAT_003f821c;
    if (*(int *)(*(int *)(param_1 + 0x33c) + iVar4 + uVar8 * 0x5880) == 0) {
      iVar4 = param_1 + *(int *)(param_2 + 0x14) * 4;
      puVar7 = (undefined4 *)(*(int *)(param_1 + 0x33c) + *(int *)(param_1 + 0x444) * 0x5880);
      if (*(int *)(iVar4 + 0x340) == 0) {
        *(undefined4 **)(iVar4 + 0x340) = puVar7;
        *(undefined4 *)(uVar1 + (int)puVar7) = 0;
        *(undefined4 *)((uVar1 - 4) + (int)puVar7) = 0;
      }
      else {
        *(undefined4 **)(*(int *)(iVar4 + 0x340) + 0x5870) = puVar7;
        *(undefined4 *)(uVar1 + (int)puVar7) = *(undefined4 *)(iVar4 + 0x340);
        *(undefined4 **)(iVar4 + 0x340) = puVar7;
        *(undefined4 *)((uVar1 & 0xfffffffa) + (int)puVar7) = 0;
      }
      iVar4 = DAT_003f8220;
      puVar7[2] = 0;
      *puVar7 = param_3;
      puVar7[1] = 0;
      *(undefined4 *)(iVar4 + (int)puVar7) = 0;
      *(undefined4 *)(iVar4 + 8 + (int)puVar7) = *(undefined4 *)(param_2 + 0xd8);
      *(undefined4 *)(iVar4 + 4 + (int)puVar7) = *(undefined4 *)(param_2 + 0x14);
      puVar2 = DAT_003f8224;
      *(undefined4 *)(iVar4 + 0xc + (int)puVar7) = 0;
      if (((*puVar2 & 1) == 0) &&
         (iVar4 = func_00100174((int *)DAT_003f8224), puVar3 = DAT_003f822c, uVar5 = DAT_003f8228,
         iVar4 != 0)) {
        *DAT_003f822c = DAT_003f8228;
        puVar3[1] = uVar5;
        puVar3[2] = uVar5;
      }
      uVar5 = DAT_003f822c[1];
      uVar6 = DAT_003f822c[2];
      puVar7[0x13] = *DAT_003f822c;
      puVar7[0x14] = uVar5;
      puVar7[0x15] = uVar6;
      return puVar7;
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 < *(int *)(param_1 + 0x450));
  return (undefined4 *)0x0;
}

