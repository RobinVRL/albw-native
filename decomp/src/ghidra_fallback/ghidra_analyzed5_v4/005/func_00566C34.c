#include "ghidra_types.h"


// USA 00566C34 <- EU 00566C0C (Ghidra, non-matching)

void func_00566C34(int param_1,int param_2,int param_3)

{
  int iVar1;
  byte bVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  undefined4 uVar8;
  
  iVar1 = *(int *)(param_1 + 0x34) + param_2 * 0x2c;
  puVar3 = *(undefined4 **)(iVar1 + 4);
  if (puVar3 != (undefined4 *)0x0) {
    cVar6 = *(char *)(puVar3 + 6);
    uVar8 = puVar3[1];
    bVar7 = cVar6 == '\f';
    if (bVar7) {
      cVar6 = '\x01';
    }
    *(undefined4 *)(param_3 + 0x13c) = *puVar3;
    *(undefined4 *)(param_3 + 0x140) = uVar8;
    if (!bVar7) {
      cVar6 = '\0';
    }
    if (cVar6 == '\0') {
      bVar2 = *(byte *)(param_3 + 2) & 0xfe;
    }
    else {
      bVar2 = *(byte *)(param_3 + 2) | 1;
    }
    *(byte *)(param_3 + 2) = bVar2;
  }
  iVar4 = *(int *)(iVar1 + 8);
  if (iVar4 != 0) {
    bVar7 = *(char *)(iVar4 + 0x18) == '\f';
    iVar5 = iVar4;
    if (bVar7) {
      iVar5 = 1;
    }
    uVar8 = *(undefined4 *)(iVar4 + 0xc);
    if (!bVar7) {
      iVar5 = 0;
    }
    *(undefined4 *)(param_3 + 0x144) = *(undefined4 *)(iVar4 + 8);
    *(undefined4 *)(param_3 + 0x148) = uVar8;
    if (iVar5 == 0) {
      bVar2 = *(byte *)(param_3 + 2) & 0xfd;
    }
    else {
      bVar2 = *(byte *)(param_3 + 2) | 2;
    }
    *(byte *)(param_3 + 2) = bVar2;
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 != 0) {
    bVar7 = *(char *)(iVar1 + 0x18) == '\f';
    iVar4 = iVar1;
    if (bVar7) {
      iVar4 = 1;
    }
    uVar8 = *(undefined4 *)(iVar1 + 0x10);
    if (!bVar7) {
      iVar4 = 0;
    }
    *(undefined4 *)(param_3 + 0x150) = *(undefined4 *)(iVar1 + 0x14);
    *(undefined4 *)(param_3 + 0x14c) = uVar8;
    if (iVar4 == 0) {
      bVar2 = *(byte *)(param_3 + 2) & 0xfb;
    }
    else {
      bVar2 = *(byte *)(param_3 + 2) | 4;
    }
    *(byte *)(param_3 + 2) = bVar2;
  }
  return;
}

