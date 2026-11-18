#include "ghidra_types.h"

extern int func_00172498(int param_1,uint param_2);
extern undefined8 func_005239DC(int param_1,uint param_2);
extern int func_00523A1C(int param_1,uint param_2);
extern undefined8 func_00523BA0(int param_1);
extern int func_00523BD0(int param_1);
extern int *DAT_001cadc8;

// USA 001CACAC <- EU 001CACAC (Ghidra, non-matching)
// GLOBAL DAT_001cadc8 int *

undefined4 func_001CACAC(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  
  piVar1 = DAT_001cadc8;
  iVar2 = *DAT_001cadc8;
  switch(param_2) {
  case 0:
    uVar3 = func_005239DC(iVar2,6);
    *(int *)(param_1 + 0x778) = (int)uVar3;
    iVar2 = func_00523A1C(*piVar1,6);
    goto LAB_001cadbc;
  case 1:
    uVar3 = func_005239DC(iVar2,7);
    *(int *)(param_1 + 0x778) = (int)uVar3;
    iVar2 = func_00523A1C(*piVar1,7);
    *(int *)(param_1 + 0x77c) = iVar2;
    return 1;
  case 2:
    uVar3 = func_005239DC(iVar2,8);
    *(int *)(param_1 + 0x778) = (int)uVar3;
    iVar2 = func_00523A1C(*piVar1,8);
    *(int *)(param_1 + 0x77c) = iVar2;
    return 1;
  case 3:
    func_00172498(iVar2,6);
    break;
  case 4:
    func_00172498(iVar2,7);
    break;
  case 5:
    func_00172498(iVar2,8);
    break;
  default:
    goto switchD_001cacc4_default;
  }
  uVar3 = func_00523BA0(*piVar1);
  *(int *)(param_1 + 0x778) = (int)uVar3;
  iVar2 = func_00523BD0(*piVar1);
LAB_001cadbc:
  *(int *)(param_1 + 0x77c) = iVar2;
switchD_001cacc4_default:
  return 1;
}

