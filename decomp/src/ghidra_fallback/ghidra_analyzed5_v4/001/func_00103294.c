#include "ghidra_types.h"

extern int *DAT_001033cc;
extern undefined4 *DAT_001033d0;
extern undefined4 *DAT_001033d4;
extern undefined4 DAT_001033d8;

// USA 00103294 <- EU 00103294 (Ghidra, non-matching)
// GLOBAL DAT_001033cc int *
// GLOBAL DAT_001033d0 undefined4 *
// GLOBAL DAT_001033d4 undefined4 *
// GLOBAL DAT_001033d8 undefined4

void func_00103294(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  int *piVar10;
  code *in_r12;
  bool bVar11;
  
  uVar5 = DAT_001033d8;
  puVar4 = DAT_001033d4;
  puVar3 = DAT_001033d0;
  piVar2 = DAT_001033cc;
  if (*DAT_001033cc == 0) {
    return;
  }
  piVar10 = *(int **)(*DAT_001033cc + 4);
joined_r0x001032b8:
  do {
    piVar1 = piVar10;
    if (piVar1 == (int *)0x0) {
      iVar6 = *(int *)*piVar2;
      while (iVar6 != 0) {
        bVar11 = iVar6 != 0;
        if (bVar11) {
          in_r12 = (code *)*puVar3;
        }
        iVar6 = *(int *)(iVar6 + 0x24);
        if (bVar11 && in_r12 != (code *)0x0) {
          (*in_r12)(0x10000,0x100,0);
        }
      }
      *piVar2 = 0;
      return;
    }
    piVar10 = (int *)piVar1[0x11];
  } while (piVar1 == (int *)0x0);
  piVar9 = (int *)*piVar2;
  for (iVar6 = *piVar9; iVar6 != 0; iVar6 = *(int *)(iVar6 + 0x24)) {
    iVar7 = 0;
    do {
      puVar8 = (undefined4 *)(iVar6 + iVar7 * 0x10);
      if ((int *)puVar8[3] == piVar1) {
        if (piVar9[2] == iVar6) {
          *(uint *)*puVar4 = *(uint *)*puVar4 | 1;
        }
        puVar8[3] = 0;
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8[2] = 0;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 2);
  }
  if (*piVar1 != 0) goto code_r0x00103344;
  goto LAB_00103360;
code_r0x00103344:
  in_r12 = (code *)0x0;
  if ((code *)*puVar3 != (code *)0x0) {
    (*(code *)*puVar3)(piVar1[0xf],uVar5,piVar1[0x10]);
LAB_00103360:
    in_r12 = (code *)*puVar3;
    if (in_r12 != (code *)0x0) {
      (*in_r12)(0x10000,0x100,0,piVar1);
    }
  }
  goto joined_r0x001032b8;
}

