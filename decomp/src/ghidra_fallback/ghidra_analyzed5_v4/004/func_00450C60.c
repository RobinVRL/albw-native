#include "ghidra_types.h"

extern int func_00451050(int param_1);
extern int func_0066CEE0(undefined4 *param_1,undefined1 param_2);
extern int *DAT_00450e10;

// USA 00450C60 <- EU 00450C38 (Ghidra, non-matching)
// GLOBAL DAT_00450e10 int *

undefined4 func_00450C60(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  bool bVar8;
  
  piVar6 = *(int **)(param_1 + 0xf0);
  piVar7 = piVar6 + *(int *)(param_1 + 0xe8);
  for (; piVar6 != piVar7; piVar6 = piVar6 + 1) {
    iVar2 = (**(code **)(*(int *)*piVar6 + 0x3c))((int *)*piVar6);
    if (iVar2 != 0) {
      if (*(int *)(param_1 + 0x138) != *piVar6) {
        *(int *)(param_1 + 0x13c) = *(int *)(param_1 + 0x138);
        *(int *)(param_1 + 0x138) = *piVar6;
      }
      return func_0066CEE0((undefined4 *)(param_1 + 0x74),2);
    }
  }
  bVar1 = *(byte *)(param_1 + 0x70);
  iVar2 = *DAT_00450e10;
  uVar3 = func_00451050(param_1);
  *(undefined4 *)(param_1 + 0x13c) = uVar3;
  uVar4 = *(uint *)(iVar2 + (uint)bVar1 * 400 + 0x20);
  if ((uVar4 & 0x110000) == 0) {
    if ((uVar4 & 0x220000) != 0) {
      bVar1 = *(byte *)(param_1 + 0x155);
      uVar4 = (bVar1 >> 6) + 1;
      if (1 < uVar4) goto LAB_00450d00;
      goto LAB_00450d28;
    }
    if ((uVar4 & 0x440000) == 0) {
      if ((uVar4 & 0x880000) == 0) goto LAB_00450df8;
      bVar1 = *(byte *)(param_1 + 0x155);
      uVar4 = (uint)(bVar1 >> 6);
      bVar8 = uVar4 == 0;
      iVar2 = uVar4 << 1;
      if (bVar8) {
        uVar4 = (uint)*(byte *)(param_1 + 0x154);
      }
      if (bVar8) {
        uVar4 = uVar4 - 1;
      }
      if (!bVar8) {
        uVar4 = 1;
      }
      uVar5 = (bVar1 >> iVar2 & 3) + 1;
      if ((uVar4 & 0xff) < uVar5) {
        uVar5 = 0;
      }
      bVar1 = bVar1 & ~(byte)(3 << iVar2) | (byte)((uVar5 & 3) << iVar2);
    }
    else {
      bVar1 = *(byte *)(param_1 + 0x155);
      uVar4 = (uint)(bVar1 >> 6);
      bVar8 = uVar4 == 0;
      iVar2 = uVar4 << 1;
      if (bVar8) {
        uVar4 = (uint)*(byte *)(param_1 + 0x154);
      }
      if (bVar8) {
        uVar4 = uVar4 - 1;
      }
      if (!bVar8) {
        uVar4 = 1;
      }
      uVar5 = (bVar1 >> iVar2 & 3) - 1;
      uVar4 = uVar4 & 0xff;
      if ((-1 < (int)uVar5) && (bVar8 = (int)uVar4 < (int)uVar5, uVar4 = uVar5, bVar8)) {
        uVar4 = 0;
      }
      bVar1 = bVar1 & ~(byte)(3 << iVar2) | (byte)((uVar4 & 3) << iVar2);
    }
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x155);
    uVar4 = (bVar1 >> 6) - 1;
    if ((int)uVar4 < 0) {
      uVar4 = 1;
    }
    else if (1 < (int)uVar4) {
LAB_00450d00:
      uVar4 = 0;
    }
LAB_00450d28:
    bVar1 = bVar1 & 0x3f | (byte)(uVar4 << 6);
  }
  *(byte *)(param_1 + 0x155) = bVar1;
  iVar2 = func_00451050(param_1);
  *(int *)(param_1 + 0x138) = iVar2;
  if (iVar2 != *(int *)(param_1 + 0x13c)) {
    return func_0066CEE0((undefined4 *)(param_1 + 0x74),1);
  }
LAB_00450df8:
  *(undefined4 *)(param_1 + 0x13c) = 0;
  return 0;
}

