#include "ghidra_types.h"

extern int func_001BB724(int param_1,uint param_2,int param_3);
extern int func_001BB754(int param_1,uint param_2,int param_3);
extern int func_001BB8F4(int param_1,uint param_2,int param_3);
extern int func_004C4D6C(int param_1,uint param_2,uint param_3,int param_4);
extern int func_004CDF40(int param_1,int param_2,int param_3);
extern int func_0052A05C(int param_1,uint param_2);
extern int func_0052A07C(int param_1,uint param_2);
extern int func_0052A1B4(int param_1,uint param_2);
extern int func_00584B94(int param_1,int param_2);
extern int *DAT_004adb14;
extern int *DAT_004adb18;

// USA 004AD9E8 <- EU 004AD9C0 (Ghidra, non-matching)
// GLOBAL DAT_004adb14 int *
// GLOBAL DAT_004adb18 int *

void func_004AD9E8(int param_1,uint param_2,uint param_3,uint param_4,float fparam_0)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if (param_2 == 0) {
    return;
  }
  uVar5 = 0;
  switch(param_3) {
  case 0:
    uVar3 = *(uint *)(param_1 + 0x76a4 + (param_2 >> 5) * 4);
    uVar1 = 1 << (param_2 & 0x1f);
    uVar5 = (uVar3 & uVar1) != 0 ^ param_4;
    if (param_4 == 0) {
      uVar3 = uVar3 & ~uVar1;
    }
    else {
      uVar3 = uVar3 | uVar1;
    }
    *(uint *)(param_1 + 0x76a4 + (param_2 >> 5) * 4) = uVar3;
    break;
  case 1:
    bVar2 = func_0052A07C(*(int *)(param_1 + 0x40),param_2);
    uVar5 = bVar2 ^ param_4;
    func_001BB754(*(int *)(param_1 + 0x40),param_2,param_4);
    break;
  case 2:
    bVar2 = func_0052A1B4(*(int *)(param_1 + 0x40),param_2);
    uVar5 = bVar2 ^ param_4;
    func_001BB8F4(*(int *)(param_1 + 0x40),param_2,param_4);
    break;
  case 3:
    bVar2 = func_0052A05C(*(int *)(param_1 + 0x40),param_2);
    uVar5 = bVar2 ^ param_4;
    func_001BB724(*(int *)(param_1 + 0x40),param_2,param_4);
    break;
  case 4:
    iVar4 = *DAT_004adb14;
    bVar2 = func_00584B94(iVar4,param_2 & 0xffff);
    uVar5 = bVar2 ^ param_4;
    func_004CDF40(iVar4,param_2 & 0xffff,param_4);
  }
  if (uVar5 == 0) {
    return;
  }
  func_004C4D6C(*DAT_004adb18,param_2,param_3,param_4);
  return;
}

