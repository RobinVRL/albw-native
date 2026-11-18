#include "ghidra_types.h"

extern undefined4 DAT_0010d368;
extern undefined4 DAT_0010d36c;

// USA 0010D18C <- EU 0010D18C (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// GLOBAL DAT_0010d368 undefined4
// GLOBAL DAT_0010d36c undefined4

int func_0010D18C(uint *param_1,int param_2,int param_3,int param_4,int param_5)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined4 *puVar8;
  undefined2 *puVar9;
  uint uVar10;
  uint unaff_r11;
  bool bVar11;
  
  uVar2 = DAT_0010d368;
  puVar8 = (undefined4 *)(param_3 + -0x10);
  puVar9 = (undefined2 *)(*(int *)(param_2 + 4) + param_2 + 0x10);
  puVar6 = (undefined2 *)(param_3 + param_4);
  puVar4 = *(undefined4 **)(param_2 + 8);
  puVar5 = (undefined4 *)(param_2 - (((uint)*(ushort *)(param_2 + 2) << 0x11) >> 0x19));
  uVar3 = *(uint *)(param_2 + 0xc);
  if (puVar4 == (undefined4 *)0x0) {
    *param_1 = uVar3;
  }
  else {
    puVar4[3] = uVar3;
  }
  if (uVar3 != 0) {
    *(undefined4 **)(uVar3 + 8) = puVar4;
  }
  uVar10 = (int)puVar8 - (int)puVar5;
  if (uVar3 == 0) {
    param_1[1] = (uint)puVar4;
  }
  if (0x13 < uVar10) {
    if (param_5 == 0) {
      unaff_r11 = (uint)(byte)param_1[5];
    }
    if (param_5 != 0 || unaff_r11 != 0) {
      *(short *)puVar5 = (short)uVar2;
      *(undefined2 *)((int)puVar5 + 2) = 0;
      puVar5[3] = 0;
      puVar5[2] = puVar4;
      puVar5[1] = uVar10 - 0x10;
      if (puVar4 == (undefined4 *)0x0) {
        uVar10 = *param_1;
        *param_1 = (uint)puVar5;
      }
      else {
        uVar10 = puVar4[3];
        puVar4[3] = puVar5;
      }
      puVar5[3] = uVar10;
      puVar4 = puVar5;
      if (uVar10 == 0) {
        param_1[1] = (uint)puVar5;
        puVar5 = puVar8;
      }
      else {
        *(undefined4 **)(uVar10 + 8) = puVar5;
        puVar5 = puVar8;
      }
    }
  }
  puVar7 = puVar9;
  if (0x13 < (uint)((int)puVar9 - (int)puVar6)) {
    if (param_5 == 1) {
      uVar10 = (uint)(byte)param_1[5];
    }
    if (param_5 != 1 || uVar10 != 0) {
      *puVar6 = (short)uVar2;
      puVar6[1] = 0;
      *(undefined4 *)(puVar6 + 6) = 0;
      *(undefined4 **)(puVar6 + 4) = puVar4;
      *(uint *)(puVar6 + 2) = ((int)puVar9 - (int)puVar6) - 0x10;
      if (puVar4 == (undefined4 *)0x0) {
        uVar3 = *param_1;
        *param_1 = (uint)puVar6;
      }
      else {
        uVar3 = puVar4[3];
        puVar4[3] = puVar6;
      }
      *(uint *)(puVar6 + 6) = uVar3;
      puVar7 = puVar6;
      if (uVar3 == 0) {
        param_1[1] = (uint)puVar6;
      }
      else {
        *(undefined2 **)(uVar3 + 8) = puVar6;
      }
    }
  }
  uVar3 = (int)puVar7 - (int)puVar5;
  bVar11 = (param_1[-1] & 1) != 0;
  if (bVar11) {
    puVar9 = (undefined2 *)0x0;
  }
  if (bVar11 && 3 < uVar3) {
    puVar4 = puVar5 + -1;
    if ((int)(uVar3 * 0x20000000) < 0) {
      *puVar5 = puVar9;
      puVar4 = puVar5;
    }
    for (uVar3 = uVar3 >> 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      puVar4[1] = puVar9;
      puVar4 = puVar4 + 2;
      *puVar4 = puVar9;
    }
  }
  *(short *)puVar8 = (short)DAT_0010d36c;
  *(undefined4 *)(param_3 + -8) = 0;
  *(int *)(param_3 + -0xc) = (int)puVar7 + (-0x10 - (int)puVar8);
  *(undefined4 *)(param_3 + -4) = 0;
  uVar1 = (ushort)(param_5 << 0xf) | (ushort)(((int)puVar8 - (int)puVar5 & 0x7fU) << 8);
  *(ushort *)(param_3 + -0xe) = uVar1;
  *(ushort *)(param_3 + -0xe) = uVar1 | (ushort)param_1[4] & 0xff;
  uVar3 = param_1[3];
  *(uint *)(param_3 + -8) = uVar3;
  if (uVar3 == 0) {
    uVar10 = param_1[2];
    param_1[2] = (uint)puVar8;
  }
  else {
    uVar10 = *(uint *)(uVar3 + 0xc);
    *(undefined4 **)(uVar3 + 0xc) = puVar8;
  }
  *(uint *)(param_3 + -4) = uVar10;
  if (uVar10 == 0) {
    param_1[3] = (uint)puVar8;
  }
  else {
    *(undefined4 **)(uVar10 + 8) = puVar8;
  }
  return param_3;
}

