#include "ghidra_types.h"

extern int func_0012C85C(int *param_1,uint param_2);
extern int func_002326C0(int param_1,int *param_2);
extern int func_00232750(int *param_1);
extern int func_002327BC(undefined4 *param_1,int *param_2);
extern int func_0051E300(int param_1);

// USA 0038A948 <- EU 0038A924 (Ghidra, non-matching)

void func_0038A948(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  bool bVar10;
  bool bVar11;
  
  piVar5 = (int *)param_1[0x1d];
  iVar2 = func_0051E300((int)piVar5);
  uVar4 = extraout_r1;
  if (iVar2 != 0) {
    (**(code **)(*piVar5 + 0xc))(piVar5);
    uVar4 = extraout_r1_00;
  }
  func_0012C85C(param_1,uVar4);
  piVar9 = (int *)0x0;
  piVar5 = (int *)0x0;
  func_00232750((int *)param_1[0x20]);
  func_00232750((int *)param_1[0x21]);
  piVar6 = (int *)param_1[9];
  piVar8 = piVar6 + param_1[7];
  for (; piVar6 != piVar8; piVar6 = piVar6 + 1) {
    piVar7 = (int *)*piVar6;
    iVar2 = func_0051E300((int)piVar7);
    if (iVar2 != 0) {
      (**(code **)(*piVar7 + 0xc))(piVar7);
    }
    iVar2 = *piVar6;
    piVar7 = (int *)(uint)*(byte *)(iVar2 + 0xd);
    bVar10 = piVar7 == (int *)0x0;
    if (bVar10) {
      piVar7 = (int *)(uint)*(byte *)(iVar2 + 0xe);
    }
    bVar11 = piVar7 != (int *)0x0;
    if (!bVar10 || bVar11) {
      piVar7 = *(int **)(iVar2 + 0x1c);
    }
    if ((((!bVar10 || bVar11) && piVar7 != (int *)0x0) && (*(int *)(*piVar7 + 0x10) != 0)) &&
       ((*(byte *)(*(int *)(*piVar7 + 0x10) + 0x44) & 1) != 0)) {
      piVar7 = (int *)(uint)*(byte *)(iVar2 + 0x30);
      if (piVar7 == (int *)0x0) {
        bVar10 = piVar5 == (int *)0x0;
        if (bVar10) {
          piVar5 = *(int **)(iVar2 + 0x20);
        }
        else {
          piVar7 = *(int **)(iVar2 + 0x20);
        }
        puVar3 = (undefined4 *)param_1[0x21];
        piVar1 = piVar5;
      }
      else {
        bVar10 = piVar9 == (int *)0x0;
        if (bVar10) {
          piVar9 = *(int **)(iVar2 + 0x20);
        }
        else {
          piVar7 = *(int **)(iVar2 + 0x20);
        }
        puVar3 = (undefined4 *)param_1[0x20];
        piVar1 = piVar9;
      }
      if (bVar10) {
        func_002327BC(puVar3,piVar1);
      }
      else {
        func_002326C0((int)puVar3,piVar7);
      }
    }
  }
  return;
}

