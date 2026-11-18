#include "ghidra_types.h"

extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_004A1860(int *param_1,int param_2);
extern int func_004A2934(int param_1);

// USA 004A1F20 <- EU 004A1EF8 (Ghidra, non-matching)

void func_004A1F20(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float in_s0;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x3c)) {
    do {
      func_004A1860((int *)(*(int *)(param_1 + 0x38) + iVar3 * 0xc),param_1);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x3c));
  }
  iVar4 = *(int *)(param_1 + 0x50);
  iVar3 = *(int *)(param_1 + 0x48) - iVar4;
  while (iVar2 = iVar3, iVar2 != (param_1 + 0x44) - *(int *)(param_1 + 0x50)) {
    iVar3 = *(int *)(iVar2 + iVar4 + 4) - iVar4;
    uVar1 = func_004A2934(iVar2);
    if (uVar1 != 0) {
      func_0010F1F8((int *)(*(int *)(param_1 + 0x50) + iVar2),in_s0);
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
      *(undefined4 *)(iVar2 + 0x18) = 0;
    }
  }
  return;
}

