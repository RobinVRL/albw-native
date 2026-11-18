#include "ghidra_types.h"

extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_001312BC(int param_1,int param_2);
extern int func_0014A5B8(void);
extern int func_001B9410(int param_1);
extern int func_002C329C(int param_1);
extern int func_002E3DF4(int param_1);
extern int func_004A7528(int param_1);
extern int func_004AB57C(undefined4 param_1);
extern int func_004C8F04(int param_1);
extern int func_00520A8C(int param_1);
extern int *DAT_0014b74c;
extern int *DAT_0014b750;
extern int *DAT_0014b754;
extern int *DAT_0014b758;
extern int *DAT_0014b75c;
extern undefined4 *DAT_0014b760;
extern int *DAT_0014b764;

// USA 0014B610 <- EU 0014B610 (Ghidra, non-matching)
// GLOBAL DAT_0014b74c int *
// GLOBAL DAT_0014b750 int *
// GLOBAL DAT_0014b754 int *
// GLOBAL DAT_0014b758 int *
// GLOBAL DAT_0014b75c int *
// GLOBAL DAT_0014b760 undefined4 *
// GLOBAL DAT_0014b764 int *

void func_0014B610(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  float in_s0;
  
  uVar2 = func_00520A8C(*(int *)(param_1 + 0x1bc));
  piVar5 = DAT_0014b74c;
  *(char *)(param_1 + 0x210) = (char)uVar2;
  func_004A7528(*piVar5);
  if ((*(uint *)(param_1 + 0x214) & 1) == 0) {
    func_001312BC(*DAT_0014b750,(int)*(char *)(param_1 + 0x210));
  }
  if (*(char *)(param_1 + 0x210) == '\0') {
    if ((*(uint *)(param_1 + 0x214) & 4) == 0) {
      func_004C8F04(*piVar5);
    }
    if ((*(uint *)(param_1 + 0x214) & 4) == 0) {
      func_002E3DF4(*DAT_0014b754);
    }
    if ((*(uint *)(param_1 + 0x214) & 1) == 0) {
      func_001B9410(*DAT_0014b758);
    }
    if ((*(uint *)(param_1 + 0x214) & 1) == 0) {
      func_002C329C(*DAT_0014b75c);
    }
    if ((*(uint *)(param_1 + 0x214) & 2) == 0) {
      func_004AB57C(*DAT_0014b760);
    }
  }
  if ((*(uint *)(param_1 + 0x214) & 0x20) == 0) {
    func_0014A5B8();
  }
  iVar3 = *DAT_0014b764;
  iVar6 = *(int *)(iVar3 + 0x58);
  piVar5 = (int *)(*(int *)(iVar3 + 0x50) - iVar6);
  iVar1 = *(int *)((int)piVar5 + iVar6 + 4);
  while (piVar5 != (int *)((iVar3 + 0x4c) - iVar6)) {
    iVar4 = (**(code **)(*piVar5 + 8))(piVar5);
    if (iVar4 != 0) {
      func_0010F1F8((int *)(*(int *)(iVar3 + 0x58) + (int)piVar5),in_s0);
      *(int *)(iVar3 + 0x54) = *(int *)(iVar3 + 0x54) + -1;
    }
    piVar5 = (int *)(iVar1 - iVar6);
    iVar1 = *(int *)(iVar1 + 4);
  }
  return;
}

