#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0010EEE0(int param_1);
extern int DAT_00232f30;
extern int DAT_00232f34;
extern int DAT_00232f38;
extern undefined4 DAT_00232f3c;

// USA 00232D34 <- EU 00232D34 (Ghidra, non-matching)
// GLOBAL DAT_00232f30 int
// GLOBAL DAT_00232f34 int
// GLOBAL DAT_00232f38 int
// GLOBAL DAT_00232f3c undefined4

undefined8 func_00232D34(int param_1,uint *param_2,int param_3)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  int *piVar7;
  undefined8 uVar8;
  
  piVar7 = (int *)(param_1 + 0xb8c8);
  *piVar7 = *piVar7 + 1;
  func_0010E3C4((uint *)(param_1 + 0xb84c),param_2,0x7c);
  *(char *)(DAT_00232f30 + param_1) = (char)param_3;
  pbVar5 = (byte *)(param_1 + 0xb848);
  if (param_3 == 0) {
    sVar1 = (short)DAT_00232f3c;
    *(int *)(param_1 + (int)(short)(ushort)*pbVar5 * (int)sVar1 * 4 + 0x5c28) = *piVar7;
    iVar2 = param_1 + (int)(short)(ushort)*pbVar5 * (int)sVar1 * 4;
    func_0010E3C4((uint *)(iVar2 + 0x10),param_2,0x7c);
    uVar3 = 0;
    if (0 < *(int *)(iVar2 + 0x90)) {
      do {
        if (uVar3 < *(uint *)(iVar2 + 0x90)) {
          iVar6 = *(int *)(iVar2 + 0x98) + uVar3 * 0x70;
        }
        else {
          iVar6 = *(int *)(iVar2 + 0x98);
        }
        uVar3 = uVar3 + 1;
        *(undefined4 *)(iVar6 + 0x4c) = 0;
      } while ((int)uVar3 < *(int *)(iVar2 + 0x90));
    }
    uVar8 = func_0010E3C4((uint *)(iVar2 + 0x159c),param_2,0x7c);
    return CONCAT44((int)((ulonglong)uVar8 >> 0x20),1);
  }
  func_0010C0B8(param_1 + 0xb8e8);
  if (*(uint *)(DAT_00232f38 + param_1) < *(uint *)(DAT_00232f34 + param_1)) {
    *pbVar5 = 0;
  }
  else {
    *pbVar5 = 1;
  }
  func_0010EEE0(param_1 + 0xb8e8);
  uVar3 = (int)(short)(1 - (ushort)*pbVar5) * (int)(short)DAT_00232f3c;
  iVar2 = param_1 + 0x10 + uVar3 * 4;
  if ((*(char *)(iVar2 + 0x7c) != '\0') && (*(char *)(iVar2 + 0x1608) != '\0')) {
    iVar2 = param_1 + uVar3 * 4;
    iVar6 = param_1 + 0xb8cc;
    func_0010E3C4((uint *)(iVar2 + 0x10),param_2,0x7c);
    if (iVar6 != 0) {
      func_0010C0B8(iVar6);
    }
    uVar3 = 0;
    if (0 < *(int *)(iVar2 + 0x90)) {
      do {
        if (uVar3 < *(uint *)(iVar2 + 0x90)) {
          iVar4 = *(int *)(iVar2 + 0x98) + uVar3 * 0x70;
        }
        else {
          iVar4 = *(int *)(iVar2 + 0x98);
        }
        uVar3 = uVar3 + 1;
        *(undefined4 *)(iVar4 + 0x4c) = 0;
      } while ((int)uVar3 < *(int *)(iVar2 + 0x90));
    }
    if (iVar6 != 0) {
      func_0010EEE0(iVar6);
    }
    uVar8 = func_0010E3C4((uint *)(iVar2 + 0x159c),param_2,0x7c);
    return CONCAT44((int)((ulonglong)uVar8 >> 0x20),1);
  }
  return (ulonglong)uVar3 << 0x20;
}

