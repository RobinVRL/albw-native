#include "ghidra_types.h"

extern int *DAT_001b7978;
extern undefined4 DAT_001b797c;

// USA 001B78E0 <- EU 001B78E0 (Ghidra, non-matching)
// GLOBAL DAT_001b7978 int *
// GLOBAL DAT_001b797c undefined4

undefined4 * func_001B78E0(int param_1,uint param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  
  uVar3 = DAT_001b797c;
  uVar8 = param_2 + *(short *)(param_1 + 4) * 6;
  iVar6 = *DAT_001b7978 + 0x284;
  if (uVar8 < 0x33) {
    iVar6 = iVar6 + uVar8 * 0x38;
  }
  piVar2 = (int *)(param_1 + 8 + param_2 * 4);
  if (5 < param_2) {
    piVar2 = (int *)(param_1 + 8);
  }
  *piVar2 = iVar6;
  puVar1 = (undefined4 *)*piVar2;
  *(undefined1 *)((int)puVar1 + 0x15) = 1;
  *(undefined1 *)((int)puVar1 + 0x16) = 1;
  *(undefined1 *)((int)puVar1 + 0x17) = 1;
  puVar1[2] = uVar3;
  puVar1[3] = uVar3;
  puVar1[4] = uVar3;
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 5) = 1;
  uVar3 = *param_4;
  uVar4 = param_4[1];
  uVar5 = param_4[2];
  uVar7 = param_4[3];
  puVar1[10] = uVar3;
  puVar1[0xb] = uVar4;
  puVar1[0xc] = uVar5;
  puVar1[0xd] = uVar7;
  puVar1[1] = uVar8;
  puVar1[6] = uVar3;
  puVar1[7] = uVar4;
  puVar1[8] = uVar5;
  puVar1[9] = uVar7;
  return puVar1 + 6;
}

