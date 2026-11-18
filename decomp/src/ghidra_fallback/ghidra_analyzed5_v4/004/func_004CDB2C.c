#include "ghidra_types.h"

extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_0058080C(int param_1,int param_2);

// USA 004CDB2C <- EU 004CDB04 (Ghidra, non-matching)

int func_004CDB2C(int param_1,int *param_2)

{
  int iVar1;
  bool bVar2;
  float in_s0;
  
  if (param_2 == (int *)0x0) {
    return 0;
  }
  iVar1 = param_2[9];
  bVar2 = iVar1 == 0;
  if (bVar2) {
    iVar1 = param_2[8];
  }
  if (bVar2 && iVar1 == 0) {
    iVar1 = param_2[0xb];
    bVar2 = iVar1 == 0;
    if (bVar2) {
      iVar1 = param_2[10];
    }
    if (bVar2 && iVar1 == 0) {
      return iVar1;
    }
  }
  (**(code **)(*param_2 + 0x24))(param_2);
  iVar1 = func_0058080C(param_1 + 0x14,*(int *)(param_1 + 0x20) + (int)param_2);
  if (-1 < iVar1) {
    func_0010F1F8((int *)(*(int *)(param_1 + 0x20) + (int)param_2),in_s0);
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
  }
  iVar1 = func_0058080C(param_1 + 0x24,*(int *)(param_1 + 0x30) + (int)param_2);
  if (-1 < iVar1) {
    func_0010F1F8((int *)(*(int *)(param_1 + 0x30) + (int)param_2),in_s0);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
  }
  return 1;
}

