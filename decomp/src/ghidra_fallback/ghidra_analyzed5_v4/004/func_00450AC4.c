#include "ghidra_types.h"

extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_0045072C(int param_1,int param_2);
extern int func_00451050(int param_1);
extern int func_0066CEE0(undefined4 *param_1,undefined1 param_2);
extern int *DAT_00450c30;
extern float DAT_00450c34;

// USA 00450AC4 <- EU 00450A9C (Ghidra, non-matching)
// GLOBAL DAT_00450c30 int *
// GLOBAL DAT_00450c34 float

void func_00450AC4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  byte bVar5;
  uint uVar6;
  bool bVar7;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x138) + 0x58))(*(int **)(param_1 + 0x138));
  if (iVar1 != 0) {
    return;
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 0x138) + 0x54))(*(int **)(param_1 + 0x138));
  if (iVar1 != 0) {
    func_0066CEE0((undefined4 *)(param_1 + 0x74),4);
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x80;
  }
  iVar1 = *DAT_00450c30 + 0x10 + (uint)*(byte *)(param_1 + 0x70) * 400;
  if ((*(uint *)(iVar1 + 0x11c) & 0x330000) != 0) {
    return;
  }
  uVar2 = func_00451050(param_1);
  *(undefined4 *)(param_1 + 0x13c) = uVar2;
  uVar3 = *(uint *)(iVar1 + 0x10);
  if ((uVar3 & 0x440000) == 0) {
    if ((uVar3 & 0x880000) == 0) goto LAB_00450c28;
    bVar5 = *(byte *)(param_1 + 0x155);
    uVar3 = (uint)(bVar5 >> 6);
    bVar7 = uVar3 == 0;
    iVar1 = uVar3 << 1;
    if (bVar7) {
      uVar3 = (uint)*(byte *)(param_1 + 0x154);
    }
    if (bVar7) {
      uVar3 = uVar3 - 1;
    }
    if (!bVar7) {
      uVar3 = 1;
    }
    uVar6 = (bVar5 >> iVar1 & 3) + 1;
    if ((uVar3 & 0xff) < uVar6) goto LAB_00450b78;
  }
  else {
    bVar5 = *(byte *)(param_1 + 0x155);
    uVar6 = (uint)(bVar5 >> 6);
    bVar7 = uVar6 == 0;
    iVar1 = uVar6 << 1;
    if (bVar7) {
      uVar6 = (uint)*(byte *)(param_1 + 0x154);
    }
    if (bVar7) {
      uVar6 = uVar6 - 1;
    }
    if (!bVar7) {
      uVar6 = 1;
    }
    uVar3 = (bVar5 >> iVar1 & 3) - 1;
    uVar6 = uVar6 & 0xff;
    if ((-1 < (int)uVar3) && (bVar7 = (int)uVar6 < (int)uVar3, uVar6 = uVar3, bVar7)) {
LAB_00450b78:
      uVar6 = 0;
    }
  }
  *(byte *)(param_1 + 0x155) = bVar5 & ~(byte)(3 << iVar1) | (byte)((uVar6 & 3) << iVar1);
  piVar4 = (int *)func_00451050(param_1);
  *(int **)(param_1 + 0x138) = piVar4;
  if (piVar4 != *(int **)(param_1 + 0x13c)) {
    (**(code **)(**(int **)(param_1 + 0x13c) + 0x4c))(*(int **)(param_1 + 0x13c));
    (**(code **)(**(int **)(param_1 + 0x138) + 0x48))(*(int **)(param_1 + 0x138));
    func_002317C0((undefined2 *)(param_1 + 300),DAT_00450c34);
    func_0045072C(param_1,(int)*(char *)(*(int *)(*(int *)(param_1 + 0x138) + 0x14) + 0x14));
  }
LAB_00450c28:
  *(undefined4 *)(param_1 + 0x13c) = 0;
  return;
}

