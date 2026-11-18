#include "ghidra_types.h"


// USA 00566508 <- EU 005664E0 (Ghidra, non-matching)

void func_00566508(int param_1,int param_2,ushort *param_3)

{
  char cVar1;
  byte bVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  iVar5 = *(int *)(*(int *)(param_1 + 0x34) + param_2 * 0x2c);
  if (iVar5 != 0) {
    *param_3 = *(ushort *)(iVar5 + 4) | *param_3;
    *(undefined4 *)(param_3 + 0x1e) = *(undefined4 *)(iVar5 + 0x58);
    *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(iVar5 + 0x5c);
    *(undefined4 *)(param_3 + 0x22) = *(undefined4 *)(iVar5 + 0x60);
    *(undefined4 *)(param_3 + 0x24) = *(undefined4 *)(iVar5 + 100);
    *(undefined4 *)(param_3 + 0x26) = *(undefined4 *)(iVar5 + 0x68);
    iVar4 = 0;
    do {
      iVar6 = iVar4 + 1;
      *(undefined4 *)(param_3 + iVar4 * 2 + 0x12) = *(undefined4 *)(iVar5 + iVar4 * 4 + 0x6c);
      iVar4 = iVar6;
    } while (iVar6 < 6);
    *(undefined4 *)(param_3 + 0x28) = *(undefined4 *)(iVar5 + 0x84);
    *(byte *)((int)param_3 + 3) = *(byte *)(iVar5 + 0xa4) >> 4;
    uVar8 = *(undefined4 *)(iVar5 + 0x10);
    uVar9 = *(undefined4 *)(iVar5 + 0x14);
    uVar10 = *(undefined4 *)(iVar5 + 0x18);
    uVar11 = *(undefined4 *)(iVar5 + 0x1c);
    uVar12 = *(undefined4 *)(iVar5 + 0x20);
    *(undefined4 *)(param_3 + 0x74) = *(undefined4 *)(iVar5 + 0xc);
    *(undefined4 *)(param_3 + 0x76) = uVar8;
    *(undefined4 *)(param_3 + 0x78) = uVar9;
    *(undefined4 *)(param_3 + 0x7a) = uVar10;
    *(undefined4 *)(param_3 + 0x7c) = uVar11;
    *(undefined4 *)(param_3 + 0x7e) = uVar12;
    uVar8 = *(undefined4 *)(iVar5 + 0x28);
    uVar9 = *(undefined4 *)(iVar5 + 0x2c);
    uVar10 = *(undefined4 *)(iVar5 + 0x30);
    uVar11 = *(undefined4 *)(iVar5 + 0x34);
    uVar12 = *(undefined4 *)(iVar5 + 0x38);
    *(undefined4 *)(param_3 + 0x80) = *(undefined4 *)(iVar5 + 0x24);
    *(undefined4 *)(param_3 + 0x82) = uVar8;
    *(undefined4 *)(param_3 + 0x84) = uVar9;
    *(undefined4 *)(param_3 + 0x86) = uVar10;
    *(undefined4 *)(param_3 + 0x88) = uVar11;
    *(undefined4 *)(param_3 + 0x8a) = uVar12;
    uVar8 = *(undefined4 *)(iVar5 + 0x40);
    uVar9 = *(undefined4 *)(iVar5 + 0x44);
    uVar10 = *(undefined4 *)(iVar5 + 0x48);
    uVar11 = *(undefined4 *)(iVar5 + 0x4c);
    uVar12 = *(undefined4 *)(iVar5 + 0x50);
    *(undefined4 *)(param_3 + 0x8c) = *(undefined4 *)(iVar5 + 0x3c);
    *(undefined4 *)(param_3 + 0x8e) = uVar8;
    *(undefined4 *)(param_3 + 0x90) = uVar9;
    *(undefined4 *)(param_3 + 0x92) = uVar10;
    *(undefined4 *)(param_3 + 0x94) = uVar11;
    *(undefined4 *)(param_3 + 0x96) = uVar12;
    *(undefined4 *)(param_3 + 4) = *(undefined4 *)(iVar5 + 0xc0);
    param_3[0x10] = *(ushort *)(iVar5 + 0x54);
    param_3[0x11] = *(ushort *)(iVar5 + 0x56);
  }
  iVar5 = *(int *)(param_1 + 0x34) + param_2 * 0x2c;
  *(undefined4 *)(param_3 + 0x98) = *(undefined4 *)(*(int *)(iVar5 + 0x18) + 0xc);
  *(undefined4 *)(param_3 + 0x9a) = *(undefined4 *)(*(int *)(iVar5 + 0x18) + 0x1c);
  *(undefined4 *)(param_3 + 0x9c) = *(undefined4 *)(*(int *)(iVar5 + 0x18) + 0x2c);
  iVar5 = *(int *)(param_1 + 0x34) + param_2 * 0x2c;
  puVar3 = *(undefined4 **)(iVar5 + 4);
  if (puVar3 != (undefined4 *)0x0) {
    cVar1 = *(char *)(puVar3 + 6);
    uVar8 = puVar3[1];
    *(undefined4 *)(param_3 + 0x9e) = *puVar3;
    *(undefined4 *)(param_3 + 0xa0) = uVar8;
    if (cVar1 == '\f') {
      bVar2 = (byte)param_3[1] | 1;
    }
    else {
      bVar2 = (byte)param_3[1] & 0xfe;
    }
    *(byte *)(param_3 + 1) = bVar2;
  }
  iVar4 = *(int *)(iVar5 + 8);
  if (iVar4 != 0) {
    bVar7 = *(char *)(iVar4 + 0x18) == '\f';
    iVar6 = iVar4;
    if (bVar7) {
      iVar6 = 1;
    }
    uVar8 = *(undefined4 *)(iVar4 + 0xc);
    if (!bVar7) {
      iVar6 = 0;
    }
    *(undefined4 *)(param_3 + 0xa2) = *(undefined4 *)(iVar4 + 8);
    *(undefined4 *)(param_3 + 0xa4) = uVar8;
    if (iVar6 == 0) {
      bVar2 = (byte)param_3[1] & 0xfd;
    }
    else {
      bVar2 = (byte)param_3[1] | 2;
    }
    *(byte *)(param_3 + 1) = bVar2;
  }
  iVar5 = *(int *)(iVar5 + 0xc);
  if (iVar5 != 0) {
    bVar7 = *(char *)(iVar5 + 0x18) == '\f';
    iVar4 = iVar5;
    if (bVar7) {
      iVar4 = 1;
    }
    uVar8 = *(undefined4 *)(iVar5 + 0x10);
    if (!bVar7) {
      iVar4 = 0;
    }
    *(undefined4 *)(param_3 + 0xa8) = *(undefined4 *)(iVar5 + 0x14);
    *(undefined4 *)(param_3 + 0xa6) = uVar8;
    if (iVar4 == 0) {
      bVar2 = (byte)param_3[1] & 0xfb;
    }
    else {
      bVar2 = (byte)param_3[1] | 4;
    }
    *(byte *)(param_3 + 1) = bVar2;
  }
  return;
}

