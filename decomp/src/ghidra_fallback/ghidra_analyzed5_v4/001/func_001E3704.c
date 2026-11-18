#include "ghidra_types.h"

extern void *func_0010E74C();
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_0048C320(int *param_1,int param_2,int param_3);

// USA 001E3704 <- EU 001E3704 (Ghidra, non-matching)

/* WARNING: Removing unreachable block (ram,0x001e379c) */
/* WARNING: Removing unreachable block (ram,0x001e3818) */

void func_001E3704(int param_1)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  bool bVar9;
  uint in_fpscr;
  float in_s0;
  
  if ((*(byte *)(param_1 + 0x74) & 1) == 0) {
    uVar6 = *(uint *)(*(int *)(param_1 + 0x28) + *(char *)(param_1 + 0x10) * 8 + 4);
    piVar1 = (int *)(*(int *)(param_1 + 0x28) + *(char *)(param_1 + 0x10) * 8);
    piVar7 = (int *)(*(int *)(param_1 + 0x20) + ((int)uVar6 >> 1));
    if ((uVar6 & 1) != 0) {
      piVar1 = (int *)(*piVar1 + *piVar7);
    }
    (*(code *)*piVar1)(piVar7);
    iVar2 = *(int *)(param_1 + 0xc) + 1;
    *(int *)(param_1 + 0xc) = iVar2;
    if (*(int *)(param_1 + 0x1c) != 0) {
      in_s0 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
      func_00352210(*(int *)(param_1 + 0x1c),1,in_s0);
    }
    iVar2 = *(int *)(param_1 + 0x50);
    if (iVar2 != 0) {
      uVar6 = **(uint **)(param_1 + 0x58);
      bVar9 = *(char *)(uVar6 + 0xd) == '\0';
      if (bVar9) {
        uVar6 = (uint)*(byte *)(uVar6 + 0xe);
      }
      if (bVar9 && uVar6 == 0) {
        if (iVar2 < 1) {
          uVar6 = 0;
        }
        else {
          puVar3 = *(uint **)(param_1 + 0x58);
          uVar6 = *puVar3;
          func_0010E74C(puVar3,puVar3 + 1,iVar2 * 4 - 4,in_s0);
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -1;
        }
        if (*(int *)(param_1 + 0x34) < *(int *)(param_1 + 0x38)) {
          *(uint *)(*(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x34) * 4) = uVar6;
          *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
        }
        if (*(int *)(param_1 + 0x50) != 0) {
          *(undefined1 *)(**(int **)(param_1 + 0x58) + 0xe) = 1;
        }
      }
    }
    iVar8 = *(int *)(param_1 + 0x34);
    iVar2 = 0;
    if (0 < iVar8) {
      do {
        piVar1 = *(int **)(*(int *)(param_1 + 0x3c) + iVar2 * 4);
        iVar4 = (**(code **)(*piVar1 + 0x44))(piVar1);
        if (iVar4 == 0) {
          iVar2 = iVar2 + 1;
        }
        else {
          piVar7 = (int *)(param_1 + 0x50);
          if (*(int *)(param_1 + 0x50) == 0) {
            *(undefined1 *)((int)piVar1 + 0xe) = 1;
          }
          if (*piVar7 < *(int *)(param_1 + 0x54)) {
            *(int **)(*(int *)(param_1 + 0x58) + *piVar7 * 4) = piVar1;
            *piVar7 = *piVar7 + 1;
          }
          func_0048C320((int *)(param_1 + 0x34),iVar2,1);
          iVar8 = iVar8 + -1;
        }
      } while (iVar2 < iVar8);
    }
    uVar6 = (uint)*(byte *)(param_1 + 0x74);
    bVar9 = (*(byte *)(param_1 + 0x74) & 2) == 0;
    if (bVar9) {
      uVar6 = *(uint *)(param_1 + 0x50);
    }
    if (!bVar9 || uVar6 != 0) {
      uVar6 = 1;
    }
    uVar5 = *(uint *)(*(int *)(param_1 + 0x30) + 0x18);
    if (uVar6 == 1) {
      uVar5 = uVar5 & 0xfffffffb;
    }
    else {
      uVar5 = uVar5 | 4;
    }
    *(uint *)(*(int *)(param_1 + 0x30) + 0x18) = uVar5;
  }
  return;
}

