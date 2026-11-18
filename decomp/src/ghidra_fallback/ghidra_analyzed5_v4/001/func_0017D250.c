#include "ghidra_types.h"

extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int *DAT_0017d378;
extern int DAT_0017d37c;
extern undefined4 *DAT_0017d380;
extern undefined4 DAT_0017d384;
extern undefined4 DAT_0017d388;

// USA 0017D250 <- EU 0017D250 (Ghidra, non-matching)
// GLOBAL DAT_0017d378 int *
// GLOBAL DAT_0017d37c int
// GLOBAL DAT_0017d380 undefined4 *
// GLOBAL DAT_0017d384 undefined4
// GLOBAL DAT_0017d388 undefined4

void func_0017D250(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 *unaff_r8;
  bool bVar7;
  
  iVar6 = *DAT_0017d378;
  piVar4 = *(int **)(DAT_0017d37c + iVar6);
  piVar5 = *(int **)(DAT_0017d37c + 8 + iVar6);
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x7d4)) {
    do {
      puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x7dc) + iVar1 * 4);
      iVar1 = iVar1 + 1;
      *puVar2 = *(undefined4 *)(param_1 + 0x7e0);
      *(undefined4 **)(param_1 + 0x7e0) = puVar2;
    } while (iVar1 < *(int *)(param_1 + 0x7d4));
  }
  bVar7 = piVar4 != piVar5;
  if (bVar7) {
    unaff_r8 = DAT_0017d380;
  }
  *(undefined4 *)(param_1 + 0x7d4) = 0;
  while ((bVar7 && (piVar4 = (int *)func_005841A8(iVar6,*unaff_r8,piVar4), piVar4 != piVar5))) {
    if ((*piVar4 != 0) &&
       (uVar3 = *(undefined4 *)(*piVar4 + 0x2cc),
       *(int *)(param_1 + 0x7d4) < *(int *)(param_1 + 0x7d8))) {
      puVar2 = *(undefined4 **)(param_1 + 0x7e0);
      if (puVar2 != (undefined4 *)0x0) {
        *(undefined4 *)(param_1 + 0x7e0) = *puVar2;
        *puVar2 = uVar3;
      }
      if (*(int *)(param_1 + 0x7d4) < *(int *)(param_1 + 0x7d8)) {
        *(undefined4 **)(*(int *)(param_1 + 0x7dc) + *(int *)(param_1 + 0x7d4) * 4) = puVar2;
        *(int *)(param_1 + 0x7d4) = *(int *)(param_1 + 0x7d4) + 1;
      }
    }
    piVar4 = piVar4 + 1;
    bVar7 = piVar4 != piVar5;
  }
  uVar3 = DAT_0017d384;
  *(undefined4 *)(param_1 + 0x868) = 0;
  *(undefined4 *)(param_1 + 0x888) = uVar3;
  uVar3 = DAT_0017d388;
  *(undefined1 *)(param_1 + 0x880) = 0;
  *(undefined4 *)(param_1 + 0x854) = 0x5a;
  *(undefined4 *)(param_1 + 0x858) = uVar3;
  *(undefined4 *)(param_1 + 0x850) = 0;
  return;
}

