#include "ghidra_types.h"

extern int func_0048C320(int *param_1,int param_2,int param_3);

// USA 00260E30 <- EU 00260E58 (Ghidra, non-matching)

void func_00260E30(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *in_r3;
  uint *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  puVar5 = (uint *)(param_1 + 0x524);
  uVar6 = 0;
  if (0 < *(int *)(param_1 + 0x524)) {
    do {
      if (uVar6 < *puVar5) {
        iVar1 = *(int *)(*(int *)(param_1 + 0x52c) + uVar6 * 4);
      }
      else {
        iVar1 = 0;
      }
      iVar2 = *(int *)(iVar1 + 0x1c) + -1;
      if (0 < iVar2) {
        uVar6 = uVar6 + 1;
      }
      *(int *)(iVar1 + 0x1c) = iVar2;
      if (iVar2 < 1) {
        iVar1 = *(int *)(param_1 + 0x10);
        if (uVar6 < *puVar5) {
          iVar2 = *(int *)(*(int *)(param_1 + 0x52c) + uVar6 * 4);
        }
        else {
          iVar2 = 0;
        }
        if (0 < iVar1) {
          in_r3 = *(int **)(param_1 + 0x18);
        }
        iVar3 = 0;
        if (0 < iVar1) {
          do {
            if (in_r3[iVar3] == iVar2) goto LAB_00260eec;
            iVar3 = iVar3 + 1;
          } while (iVar3 < iVar1);
        }
        iVar3 = -1;
LAB_00260eec:
        in_r3 = (int *)(param_1 + 0x10);
        iVar2 = iVar3;
        if (iVar3 + 1 <= iVar1) {
          do {
            puVar7 = *(undefined4 **)(*(int *)(param_1 + 0x18) + iVar2 * 4);
            iVar2 = iVar2 + 1;
            *puVar7 = *(undefined4 *)(param_1 + 0x1c);
            *(undefined4 **)(param_1 + 0x1c) = puVar7;
          } while (iVar2 < iVar3 + 1);
        }
        func_0048C320(in_r3,iVar3,1);
        func_0048C320((int *)puVar5,uVar6,1);
      }
    } while ((int)uVar6 < *(int *)(param_1 + 0x524));
  }
  uVar6 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      if (uVar6 < *(uint *)(param_1 + 0x10)) {
        iVar1 = *(int *)(*(int *)(param_1 + 0x18) + uVar6 * 4);
      }
      else {
        iVar1 = 0;
      }
      iVar2 = *(int *)(iVar1 + 0x20) + -1;
      *(int *)(iVar1 + 0x20) = iVar2;
      if (iVar2 == 0) {
        if (uVar6 < *(uint *)(param_1 + 0x10)) {
          uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x18) + uVar6 * 4);
        }
        else {
          uVar4 = 0;
        }
        if ((int)*puVar5 < *(int *)(param_1 + 0x528)) {
          *(undefined4 *)(*(int *)(param_1 + 0x52c) + *puVar5 * 4) = uVar4;
          *puVar5 = *puVar5 + 1;
        }
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < *(int *)(param_1 + 0x10));
  }
  return;
}

