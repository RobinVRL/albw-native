#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern undefined *DAT_003c3568;
extern undefined4 DAT_003c356c;

// USA 003C34C8 <- EU 003C34A4 (Ghidra, non-matching)
// GLOBAL DAT_003c3568 undefined *
// GLOBAL DAT_003c356c undefined4

undefined4 * func_003C34C8(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  bool bVar8;
  
  puVar4 = (undefined4 *)0x3;
  puVar2 = (undefined4 *)func_00100118(param_1,DAT_003c3568,0x24,3);
  uVar1 = DAT_003c356c;
  uVar3 = 0;
  do {
    bVar8 = uVar3 < 3;
    puVar7 = puVar2;
    puVar6 = puVar2;
    if (bVar8) {
      puVar7 = puVar2 + uVar3 * 9;
      puVar6 = puVar4;
    }
    *puVar7 = 0;
    if (bVar8) {
      puVar6 = puVar2 + uVar3 * 9;
      puVar7 = (undefined4 *)(uVar3 * 9);
    }
    puVar6[1] = 0;
    puVar5 = puVar2;
    puVar4 = puVar2;
    if (bVar8) {
      puVar5 = puVar6;
      puVar4 = puVar2 + (int)puVar7;
    }
    puVar4[2] = 0;
    if (bVar8) {
      puVar5 = puVar2 + uVar3 * 9;
      puVar4 = (undefined4 *)(uVar3 * 9);
    }
    puVar5[3] = 0;
    puVar6 = puVar2;
    puVar7 = puVar2;
    if (bVar8) {
      puVar6 = puVar5;
      puVar7 = puVar2 + (int)puVar4;
    }
    puVar7[4] = 0;
    if (bVar8) {
      puVar6 = puVar2 + uVar3 * 9;
      puVar7 = (undefined4 *)(uVar3 * 9);
    }
    puVar6[5] = 0;
    puVar4 = puVar2;
    if (bVar8) {
      puVar4 = puVar2 + (int)puVar7;
      puVar7 = (undefined4 *)(uVar3 * 9);
    }
    puVar4[6] = uVar1;
    puVar4 = puVar2;
    if (bVar8) {
      puVar4 = puVar2 + (int)puVar7;
      puVar7 = (undefined4 *)(uVar3 * 9);
    }
    puVar4[7] = uVar1;
    puVar4 = puVar2;
    if (bVar8) {
      puVar4 = puVar2 + (int)puVar7;
    }
    uVar3 = uVar3 + 1;
    *(undefined1 *)(puVar4 + 8) = 0;
  } while ((int)uVar3 < 3);
  return puVar2;
}

