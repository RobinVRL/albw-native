#include "ghidra_types.h"

extern int func_00106030(int param_1);
extern int func_00106108(int param_1,int *param_2);
extern int func_00110490(undefined4 *param_1,uint param_2);
extern int *DAT_00103a30;
extern int *DAT_00103a34;
extern undefined4 *DAT_00103a38;

// USA 001036F4 <- EU 001036F4 (Ghidra, non-matching)
// GLOBAL DAT_00103a30 int *
// GLOBAL DAT_00103a34 int *
// GLOBAL DAT_00103a38 undefined4 *

void func_001036F4(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  code *in_r12;
  code *pcVar9;
  bool bVar10;
  
  puVar2 = DAT_00103a38;
  if (*DAT_00103a30 == 0) {
    return;
  }
  iVar8 = 0;
  iVar4 = *DAT_00103a34;
  do {
    piVar7 = *(int **)(*DAT_00103a30 + iVar8 * 4 + 0x10);
    while (piVar1 = piVar7, piVar1 != (int *)0x0) {
      iVar5 = *piVar1;
      piVar7 = (int *)piVar1[3];
      if (iVar5 != 0) {
        iVar3 = piVar1[1];
        if (iVar3 == 0) {
          func_00106030(iVar5 + 0x34);
          func_00106108(*(int *)(iVar5 + 0x2c),(int *)(iVar5 + 0x34));
          pcVar9 = (code *)*puVar2;
joined_r0x00103798:
          if (pcVar9 != (code *)0x0) {
            (*pcVar9)(0x10000,0x100,0,iVar5);
          }
        }
        else {
          if (iVar3 == 1) {
            iVar3 = 0;
            do {
              iVar6 = iVar5 + iVar3 * 0x44;
              func_00106030(iVar6 + 0x34);
              func_00106108(*(int *)(iVar5 + 0x2c),(int *)(iVar6 + 0x34));
              iVar3 = iVar3 + 1;
            } while (iVar3 < 6);
            pcVar9 = (code *)*puVar2;
            goto joined_r0x00103798;
          }
          if (iVar3 == 2) {
            pcVar9 = (code *)*puVar2;
            goto joined_r0x00103798;
          }
          if (iVar3 != 3) goto LAB_001038f4;
          if ((*(int *)(iVar5 + 0x804) != 0) && (in_r12 = (code *)*puVar2, in_r12 != (code *)0x0)) {
            (*in_r12)(0x10000,0x100,0);
          }
          bVar10 = *(int *)(iVar5 + 0x808) != 0;
          if (bVar10) {
            in_r12 = (code *)*puVar2;
          }
          if (bVar10 && in_r12 != (code *)0x0) {
            (*in_r12)(0x10000,0x100,0);
          }
          bVar10 = *(int *)(iVar5 + 0x80c) != 0;
          if (bVar10) {
            in_r12 = (code *)*puVar2;
          }
          if (bVar10 && in_r12 != (code *)0x0) {
            (*in_r12)(0x10000,0x100,0);
          }
          bVar10 = *(int *)(iVar5 + 0x810) != 0;
          if (bVar10) {
            in_r12 = (code *)*puVar2;
          }
          if (bVar10 && in_r12 != (code *)0x0) {
            (*in_r12)(0x10000,0x100,0);
          }
          bVar10 = *(int *)(iVar5 + 0x814) != 0;
          if (bVar10) {
            in_r12 = (code *)*puVar2;
          }
          if (bVar10 && in_r12 != (code *)0x0) {
            (*in_r12)(0x10000,0x100,0);
          }
          if (*(int *)(iVar5 + 0x818) == 0) {
LAB_001038dc:
            pcVar9 = (code *)*puVar2;
            goto joined_r0x00103798;
          }
          if ((code *)*puVar2 != (code *)0x0) {
            (*(code *)*puVar2)(0x10000,0x100,0);
            goto LAB_001038dc;
          }
        }
        *piVar1 = 0;
      }
LAB_001038f4:
      in_r12 = (code *)*puVar2;
      if (in_r12 != (code *)0x0) {
        (*in_r12)(0x10000,0x100,0,piVar1);
      }
    }
    iVar8 = iVar8 + 1;
    if (0x1ff < iVar8) {
      *(undefined4 *)(iVar4 + 0x5c) = 0;
      *(undefined4 *)(iVar4 + 0x68) = 0;
      *(undefined4 *)(iVar4 + 0x60) = 0;
      *(undefined4 *)(iVar4 + 0x6c) = 0;
      *(undefined4 *)(iVar4 + 100) = 0;
      *(undefined4 *)(iVar4 + 0x70) = 0;
      func_00110490((undefined4 *)(iVar4 + 0x74),0x80);
      piVar7 = DAT_00103a30;
      *(undefined4 *)(iVar4 + 0xf4) = 0;
      iVar4 = *(int *)*piVar7;
      func_00106030(iVar4 + 0x34);
      func_00106108(*(int *)(iVar4 + 0x2c),(int *)(iVar4 + 0x34));
      if ((code *)*puVar2 != (code *)0x0) {
        (*(code *)*puVar2)(0x10000,0x100,0,iVar4);
      }
      iVar4 = 0;
      iVar8 = *(int *)(*piVar7 + 4);
      do {
        iVar5 = iVar8 + iVar4 * 0x44;
        func_00106030(iVar5 + 0x34);
        func_00106108(*(int *)(iVar8 + 0x2c),(int *)(iVar5 + 0x34));
        iVar4 = iVar4 + 1;
      } while (iVar4 < 6);
      if ((code *)*puVar2 != (code *)0x0) {
        (*(code *)*puVar2)(0x10000,0x100,0,iVar8);
      }
      if ((code *)*puVar2 != (code *)0x0) {
        (*(code *)*puVar2)(0x10000,0x100,0,*(undefined4 *)(*piVar7 + 8));
      }
      *piVar7 = 0;
      return;
    }
  } while( true );
}

