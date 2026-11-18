#include "ghidra_types.h"

extern int DAT_003405b0;

// USA 00340470 <- EU 0034044C (Ghidra, non-matching)
// GLOBAL DAT_003405b0 int

void * func_00340470(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 uVar5;
  ushort uVar6;
  float *pfVar7;
  int unaff_r5;
  int iVar8;
  
  iVar8 = *(int *)(param_1 + 0x84);
  iVar3 = 0;
  if (0 < iVar8) {
    do {
      pfVar7 = (float *)(param_1 + iVar3 * 0xc);
      if (DAT_003405b0 <
          (int)ALBW_AS_U32((*(float *)(param_2 + 4) * *pfVar7 + *(float *)(param_2 + 8) * pfVar7[1] +
               *(float *)(param_2 + 0xc) * pfVar7[2]))) {
        return (void *)param_1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar8);
  }
  if (iVar8 < 10) {
    puVar4 = (undefined4 *)(param_1 + iVar8 * 0xc);
    *puVar4 = *(undefined4 *)(param_2 + 4);
    puVar4[1] = *(undefined4 *)(param_2 + 8);
    puVar4[2] = *(undefined4 *)(param_2 + 0xc);
    if ((*(uint *)(param_2 + 0x24) & 0x2000000) == 0) {
      uVar6 = *(ushort *)(param_2 + 0x20) & 0x1f;
      if ((uVar6 == 5 || uVar6 == 4) || (uVar6 == 3)) {
        uVar5 = 1;
      }
      else {
        uVar5 = 0;
      }
      iVar3 = *(int *)(param_1 + 0x84);
    }
    else {
      iVar3 = *(int *)(param_1 + 0x84);
      uVar5 = 0;
    }
    *(undefined1 *)(iVar3 + param_1 + 0x78) = uVar5;
    *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
  }
  iVar3 = *(int *)(param_1 + 0xb0);
  if (iVar3 < 10) {
    if (0 < iVar3) {
      unaff_r5 = *(int *)(param_2 + 0x28);
    }
    bVar2 = true;
    iVar8 = 0;
    if (0 < iVar3) {
      do {
        iVar1 = iVar8 * 4;
        iVar8 = iVar8 + 1;
        if (unaff_r5 == *(int *)(param_1 + iVar1 + 0x88)) {
          bVar2 = false;
        }
      } while (iVar8 < iVar3);
      if (!bVar2) goto LAB_00340550;
    }
    *(undefined4 *)(param_1 + iVar3 * 4 + 0x88) = *(undefined4 *)(param_2 + 0x28);
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
  }
LAB_00340550:
  if (((*(uint *)(param_2 + 0x24) & 0x4000) != 0) || ((*(ushort *)(param_2 + 0x20) & 0x1f) == 5)) {
    *(undefined1 *)(param_1 + 0xb4) = 1;
  }
  return (void *)param_1;
}

