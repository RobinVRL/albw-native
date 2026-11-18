// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int DAT_001036d0;
extern undefined4 *DAT_001036d4;

// USA 001033DC <- EU 001033DC (Ghidra, non-matching)
// GLOBAL DAT_001036d0 int
// GLOBAL DAT_001036d4 undefined4 *

void func_001033DC(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  code *in_r12;
  bool bVar9;
  
  puVar4 = DAT_001036d4;
  if (*(int *)(DAT_001036d0 + 8) == 0) {
    return;
  }
  piVar8 = *(int **)(*(int *)(DAT_001036d0 + 8) + 0x1008);
  iVar3 = DAT_001036d0;
joined_r0x00103400:
  piVar1 = piVar8;
  (void) iVar3;
  if (piVar1 == (int *)0x0) {
    uVar6 = 0;
    do {
      iVar5 = *(int *)(*(int *)(iVar3 + 8) + uVar6 * 4 + 0x808);
      while (iVar5 != 0) {
        in_r12 = (code *)*puVar4;
        iVar5 = *(int *)(iVar5 + 0x18);
        if (in_r12 != (code *)0x0) {
          (*in_r12)(0x10000,0x100,0);
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 0x200);
    uVar6 = 0;
    do {
      piVar8 = (int *)*(int *)(*(int *)(iVar3 + 8) + uVar6 * 4 + 8);
      while (piVar1 = piVar8, piVar1 != (int *)0x0) {
        piVar8 = (int *)*piVar1;
        if (piVar1[0xb] != 0) {
          in_r12 = (code *)*puVar4;
        }
        if (piVar1[0xb] != 0 && in_r12 != (code *)0x0) {
          (*in_r12)(0x10000,0x100,0);
        }
        if (piVar1[0x70] != 0) {
          in_r12 = (code *)*puVar4;
        }
        if (piVar1[0x70] != 0 && in_r12 != (code *)0x0) {
          (*in_r12)(0x10000,0x100,0);
        }
        if (piVar1[7] != 0) {
          in_r12 = (code *)*puVar4;
        }
        if (piVar1[7] != 0 && in_r12 != (code *)0x0) {
          (*in_r12)(0x10000,0x100,0);
        }
        piVar7 = (int *)piVar1[6];
joined_r0x00103638:
        piVar2 = piVar7;
        if (piVar2 != (int *)0x0) {
          piVar7 = (int *)piVar2[2];
          if (*piVar2 != 0) goto code_r0x0010364c;
          goto LAB_00103668;
        }
        in_r12 = (code *)*puVar4;
        if (in_r12 != (code *)0x0) {
          (*in_r12)(0x10000,0x100,0,piVar1);
        }
      }
      uVar6 = uVar6 + 1;
      if (0x1ff < uVar6) {
        *(undefined4 *)(iVar3 + 8) = 0;
        return;
      }
    } while( true );
  }
  piVar8 = (int *)piVar1[8];
  if (*piVar1 != 0) {
    in_r12 = (code *)*puVar4;
  }
  if (*piVar1 != 0 && in_r12 != (code *)0x0) {
    (*in_r12)(0x10000,0x100,0);
  }
  if (piVar1[2] != 0) {
    in_r12 = (code *)*puVar4;
  }
  if (piVar1[2] != 0 && in_r12 != (code *)0x0) {
    (*in_r12)(0x10000,0x100,0);
  }
  uVar6 = 0;
  if (piVar1[5] != 0) {
    do {
      bVar9 = *(int *)(piVar1[4] + uVar6 * 0xe8 + 0x30) != 0;
      if (bVar9) {
        in_r12 = (code *)*puVar4;
      }
      if (bVar9 && in_r12 != (code *)0x0) {
        (*in_r12)(0x10000,0x100,0);
      }
      bVar9 = *(int *)(piVar1[4] + uVar6 * 0xe8 + 0xe0) != 0;
      if (bVar9) {
        in_r12 = (code *)*puVar4;
      }
      if (bVar9 && in_r12 != (code *)0x0) {
        (*in_r12)(0x10000,0x100,0);
      }
      bVar9 = *(int *)(piVar1[4] + uVar6 * 0xe8 + 0x58) != 0;
      if (bVar9) {
        in_r12 = (code *)*puVar4;
      }
      if (bVar9 && in_r12 != (code *)0x0) {
        (*in_r12)(0x10000,0x100,0);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < (uint)piVar1[5]);
  }
  if (piVar1[4] != 0) goto code_r0x00103514;
  goto LAB_00103530;
code_r0x0010364c:
  if ((code *)*puVar4 != (code *)0x0) {
    (*(code *)*puVar4)(0x10000,0x100,0);
LAB_00103668:
    if ((code *)*puVar4 != (code *)0x0) {
      (*(code *)*puVar4)(0x10000,0x100,0,piVar2);
    }
  }
  goto joined_r0x00103638;
code_r0x00103514:
  in_r12 = (code *)0x0;
  iVar3 = DAT_001036d0;
  if ((code *)*puVar4 != (code *)0x0) {
    (*(code *)*puVar4)(0x10000,0x100,0);
LAB_00103530:
    in_r12 = (code *)*puVar4;
    iVar3 = DAT_001036d0;
    if (in_r12 != (code *)0x0) {
      (*in_r12)(0x10000,0x100,0,piVar1);
      iVar3 = DAT_001036d0;
    }
  }
  goto joined_r0x00103400;
}

