#include "ghidra_types.h"


// USA 004CE804 <- EU 004CE7DC (Ghidra, non-matching)

void func_004CE804(int param_1,int param_2,int param_3,int param_4,float fparam_0)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ushort *puVar9;
  
  if (*(int *)(param_1 + 0x15c) == param_2 && param_4 == 0) {
    return;
  }
  if ((*(uint *)(param_1 + 0x160) & 0x40000000) == 0) {
    uVar8 = 0;
    if (*(int *)(*(int *)(param_1 + 0x20) + 4) != 0) {
      do {
        puVar9 = (ushort *)(**(int **)(param_1 + 0x20) + uVar8 * 0x154);
        if (param_3 == 0) {
          sVar5 = *(short *)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x50) + 8) + 0x34) +
                                     uVar8 * 0x2c) + 0x54);
        }
        else {
          sVar5 = 0;
        }
        uVar8 = uVar8 + 1;
        puVar9[0x10] = sVar5 + (short)param_2;
        *puVar9 = *puVar9 | 0x100;
      } while (uVar8 < *(uint *)(*(int *)(param_1 + 0x20) + 4));
    }
    goto LAB_004ce990;
  }
  iVar3 = *(int *)(param_1 + 0x50);
  piVar2 = (int *)0x0;
  iVar7 = 0;
  do {
    piVar4 = (int *)(iVar3 + 0xc + iVar7 * 0xc);
    iVar6 = piVar4[2];
    if (iVar6 == param_2) goto LAB_004ce8c8;
    if (iVar6 < 0) {
      *(char *)(iVar3 + 0x100) = (char)iVar7;
      piVar2 = piVar4;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 2);
  if (piVar2 == (int *)0x0) {
    bVar1 = 1 - *(char *)(iVar3 + 0x100);
    *(byte *)(iVar3 + 0x100) = bVar1;
    piVar2 = (int *)(iVar3 + (uint)bVar1 * 0xc + 0xc);
    if (piVar2 != (int *)0x0) goto LAB_004ce840;
  }
  else {
LAB_004ce840:
    piVar2[2] = param_2;
    uVar8 = 0;
    if (piVar2[1] != 0) {
      do {
        iVar7 = uVar8 * 0x154;
        if (param_3 == 0) {
          sVar5 = *(short *)(*(int *)(*(int *)(*(int *)(iVar3 + 8) + 0x34) + uVar8 * 0x2c) + 0x54);
        }
        else {
          sVar5 = 0;
        }
        uVar8 = uVar8 + 1;
        *(short *)(*piVar2 + iVar7 + 0x20) = sVar5 + (short)param_2;
      } while (uVar8 < (uint)piVar2[1]);
    }
  }
LAB_004ce8c8:
  iVar7 = *(int *)(param_1 + 0x50);
  iVar3 = 0;
  do {
    if (*(int *)(iVar7 + iVar3 * 0xc + 0x14) == param_2) {
      *(int *)(iVar7 + 0x24) = iVar7 + 0xc + iVar3 * 0xc;
      break;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 2);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(*(int *)(param_1 + 0x50) + 0x24);
LAB_004ce990:
  *(int *)(param_1 + 0x15c) = param_2;
  return;
}

