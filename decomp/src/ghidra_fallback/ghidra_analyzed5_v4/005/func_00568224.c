#include "ghidra_types.h"

extern int func_001150CC(undefined4 *param_1,undefined4 *param_2,undefined4 param_3);
extern int func_003CC090(int *param_1,int param_2,uint param_3);
extern int DAT_00568384;
extern uint DAT_00568388;
extern undefined4 DAT_0056838c;
extern uint DAT_00568390;
extern int DAT_00568394;
extern undefined4 DAT_00568398;
extern undefined4 DAT_0056839c;
extern undefined4 DAT_005683a0;
extern undefined4 DAT_005683a4;

// USA 00568224 <- EU 005681FC (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// GLOBAL DAT_00568384 int
// GLOBAL DAT_00568388 uint
// GLOBAL DAT_0056838c undefined4
// GLOBAL DAT_00568390 uint
// GLOBAL DAT_00568394 int
// GLOBAL DAT_00568398 undefined4
// GLOBAL DAT_0056839c undefined4
// GLOBAL DAT_005683a0 undefined4
// GLOBAL DAT_005683a4 undefined4

undefined4 func_00568224(int param_1,int *param_2,int param_3,int *param_4,int param_5)

{
  byte bVar1;
  ushort uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  uint *puVar12;
  undefined4 uVar13;
  
  func_003CC090(param_2,*(int *)(param_1 + 8),*(int *)(param_1 + 0xc) << 2);
  iVar7 = DAT_00568384;
  puVar12 = (uint *)*param_2;
  uVar4 = param_1 - *(int *)(*(int *)(param_1 + 0x2c) + 0x40);
  iVar5 = (int)((longlong)(int)uVar4 * (longlong)DAT_00568384 + ((ulonglong)uVar4 << 0x20) >> 0x20);
  iVar9 = *(int *)(param_3 + 0x14);
  uVar2 = *(ushort *)
           (*(int *)(*(int *)(param_1 + 0x2c) + 0x68) + ((iVar5 >> 5) - (iVar5 >> 0x1f)) * 0x1c +
           0x1a);
  *puVar12 = *(byte *)(param_5 + 2) | 0x80000000;
  uVar3 = DAT_0056838c;
  puVar12[1] = DAT_00568388;
  func_001150CC(puVar12 + 2,(undefined4 *)(iVar9 + (uint)uVar2 * 0x30),uVar3);
  *param_2 = (int)(puVar12 + 0x10);
  uVar4 = DAT_00568390;
  uVar6 = param_1 - *(int *)(*(int *)(param_1 + 0x2c) + 0x40);
  iVar7 = (int)((longlong)(int)uVar6 * (longlong)iVar7 + ((ulonglong)uVar6 << 0x20) >> 0x20);
  puVar12[0x10] =
       *(ushort *)
        (*(int *)(*(int *)(param_1 + 0x2c) + 0x68) + ((iVar7 >> 5) - (iVar7 >> 0x1f)) * 0x1c + 0x18)
       | 0x7fff0000;
  puVar12[0x11] = uVar4;
  *param_2 = (int)(puVar12 + 0x12);
  uVar3 = DAT_00568398;
  iVar7 = DAT_00568394;
  bVar1 = *(byte *)(param_4 + 2);
  uVar4 = 0;
  if (bVar1 != 0) {
    uVar6 = DAT_00568394 - 0x38;
    iVar5 = DAT_00568394 + -0x1a;
    do {
      puVar8 = (undefined4 *)*param_2;
      puVar10 = (undefined4 *)(*param_4 + uVar4 * 8);
      uVar4 = uVar4 + 1;
      uVar13 = *puVar10;
      uVar11 = puVar10[1];
      *puVar8 = 1;
      puVar8[1] = iVar7;
      puVar8[2] = uVar13;
      puVar8[3] = uVar6;
      puVar8[4] = uVar11;
      puVar8[5] = DAT_0056839c;
      uVar11 = DAT_005683a0;
      puVar8[6] = 0;
      puVar8[7] = uVar11;
      uVar11 = DAT_005683a4;
      puVar8[8] = 1;
      puVar8[9] = uVar6 | 8;
      puVar8[10] = 1;
      puVar8[0xb] = iVar5;
      puVar8[0xc] = 1;
      puVar8[0xd] = uVar11;
      puVar8[0xe] = 0;
      puVar8[0xf] = uVar3;
      puVar8[0x10] = 0;
      puVar8[0x11] = uVar3;
      *param_2 = (int)(puVar8 + 0x12);
    } while (uVar4 < bVar1);
  }
  return func_003CC090(param_2,*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c) << 2);
}

