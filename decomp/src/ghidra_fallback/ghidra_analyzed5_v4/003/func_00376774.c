#include "ghidra_types.h"

extern int func_00667638(undefined4 *param_1,undefined1 param_2);

// USA 00376774 <- EU 00376750 (Ghidra, non-matching)

void func_00376774(int param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  ushort *puVar3;
  ushort uVar4;
  int *piVar5;
  uint uVar6;
  
  piVar5 = *(int **)(param_1 + 0x1c);
  iVar2 = *(int *)(*piVar5 + 0x10);
  if (iVar2 == 0) {
LAB_003767a8:
    if (param_2 != 0) goto LAB_003767bc;
  }
  else {
    bVar1 = *(byte *)(iVar2 + 0x44);
    uVar6 = bVar1 & 1;
    if ((bVar1 & 1) != 0) {
      uVar6 = 1;
    }
    if (uVar6 == param_2) goto LAB_003767a8;
    *(byte *)(iVar2 + 0x44) = bVar1 & 0xfe | (byte)param_2;
    if (param_2 != 0) {
      *(byte *)(piVar5 + 0x1c) = *(byte *)(piVar5 + 0x1c) | 2;
      goto LAB_003767bc;
    }
  }
  func_00667638((undefined4 *)(param_1 + 0x38),0);
LAB_003767bc:
  puVar3 = (ushort *)(*(int *)(param_1 + 0x14) + 0x16);
  uVar4 = *puVar3;
  if (param_2 == 1) {
    uVar4 = uVar4 & 0xfffe;
  }
  else {
    uVar4 = uVar4 | 1;
  }
  *puVar3 = uVar4;
  *(byte *)(param_1 + 0x68) = (byte)param_2;
  if (param_2 == 0) {
    puVar3 = (ushort *)(*(int *)(param_1 + 0x14) + 0x16);
    *puVar3 = *puVar3 & 0xfffd;
  }
  return;
}

