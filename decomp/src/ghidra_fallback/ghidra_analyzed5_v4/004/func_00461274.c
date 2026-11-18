#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_004B9A10(undefined4 *param_1,undefined1 param_2);
extern int DAT_004612e0;
extern undefined *DAT_004612e4;

// USA 00461274 <- EU 0046124C (Ghidra, non-matching)
// GLOBAL DAT_004612e0 int
// GLOBAL DAT_004612e4 undefined *

undefined4 * func_00461274(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  bool bVar6;
  
  piVar1 = func_004B9A10(param_1,0);
  iVar4 = DAT_004612e0 + 0x54;
  *piVar1 = DAT_004612e0;
  piVar1[0xe] = iVar4;
  piVar1[0x1d] = 0;
  piVar1[0x1e] = 0;
  puVar2 = (undefined4 *)func_00100118((int)(piVar1 + 0x1f),DAT_004612e4,0x18,10);
  uVar3 = 0;
  do {
    bVar6 = uVar3 < 10;
    puVar5 = puVar2;
    if (bVar6) {
      puVar5 = puVar2 + uVar3 * 6;
    }
    *puVar5 = 0xffffffff;
    puVar5 = puVar2;
    if (bVar6) {
      puVar5 = puVar2 + uVar3 * 6;
    }
    puVar5[1] = 0xffffffff;
    puVar5 = puVar2;
    if (bVar6) {
      puVar5 = puVar2 + uVar3 * 6;
    }
    uVar3 = uVar3 + 1;
    puVar5[2] = 0;
  } while ((int)uVar3 < 10);
  *(undefined1 *)((int)puVar2 + -0x6d) = 0x4e;
  return puVar2 + -0x1f;
}

