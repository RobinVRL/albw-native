#include "ghidra_types.h"

extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int *DAT_0017ceb8;
extern int DAT_0017cebc;
extern undefined4 *DAT_0017cec0;
extern undefined4 DAT_0017cec4;
extern undefined4 DAT_0017cec8;
extern undefined4 DAT_0017cecc;

// USA 0017CD70 <- EU 0017CD70 (Ghidra, non-matching)
// GLOBAL DAT_0017ceb8 int *
// GLOBAL DAT_0017cebc int
// GLOBAL DAT_0017cec0 undefined4 *
// GLOBAL DAT_0017cec4 undefined4
// GLOBAL DAT_0017cec8 undefined4
// GLOBAL DAT_0017cecc undefined4

void func_0017CD70(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 *unaff_r8;
  bool bVar6;
  undefined4 uVar7;
  
  iVar5 = *DAT_0017ceb8;
  piVar3 = *(int **)(DAT_0017cebc + iVar5);
  piVar4 = *(int **)(DAT_0017cebc + 8 + iVar5);
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x7d4)) {
    do {
      puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x7dc) + iVar1 * 4);
      iVar1 = iVar1 + 1;
      *puVar2 = *(undefined4 *)(param_1 + 0x7e0);
      *(undefined4 **)(param_1 + 0x7e0) = puVar2;
    } while (iVar1 < *(int *)(param_1 + 0x7d4));
  }
  bVar6 = piVar3 != piVar4;
  if (bVar6) {
    unaff_r8 = DAT_0017cec0;
  }
  *(undefined4 *)(param_1 + 0x7d4) = 0;
  while ((bVar6 && (piVar3 = (int *)func_005841A8(iVar5,*unaff_r8,piVar3), piVar3 != piVar4))) {
    if ((*piVar3 != 0) &&
       (uVar7 = *(undefined4 *)(*piVar3 + 0x2cc),
       *(int *)(param_1 + 0x7d4) < *(int *)(param_1 + 0x7d8))) {
      puVar2 = *(undefined4 **)(param_1 + 0x7e0);
      if (puVar2 != (undefined4 *)0x0) {
        *(undefined4 *)(param_1 + 0x7e0) = *puVar2;
        *puVar2 = uVar7;
      }
      if (*(int *)(param_1 + 0x7d4) < *(int *)(param_1 + 0x7d8)) {
        *(undefined4 **)(*(int *)(param_1 + 0x7dc) + *(int *)(param_1 + 0x7d4) * 4) = puVar2;
        *(int *)(param_1 + 0x7d4) = *(int *)(param_1 + 0x7d4) + 1;
      }
    }
    piVar3 = piVar3 + 1;
    bVar6 = piVar3 != piVar4;
  }
  uVar7 = DAT_0017cec4;
  *(undefined4 *)(param_1 + 0x868) = 0;
  *(undefined4 *)(param_1 + 0x888) = uVar7;
  *(undefined1 *)(param_1 + 0x880) = 0;
  uVar7 = DAT_0017cec8;
  *(undefined4 *)(param_1 + 0x854) = 0x5a;
  *(undefined4 *)(param_1 + 0x858) = uVar7;
  *(undefined4 *)(param_1 + 0x850) = 0;
  uVar7 = DAT_0017cecc;
  *(undefined4 *)(param_1 + 0x860) = 0x1e;
  *(undefined4 *)(param_1 + 0x864) = uVar7;
  *(undefined4 *)(param_1 + 0x85c) = 0;
  return;
}

