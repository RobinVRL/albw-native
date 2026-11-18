#include "ghidra_types.h"

extern int func_00109DE4(int param_1);
extern int func_0010F1DC(int *param_1,int *param_2);
extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_00258CA8(int param_1,int param_2);

// USA 00294B24 <- EU 00294B4C (Ghidra, non-matching)

void func_00294B24(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float in_s0;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar3 = *(int *)(param_1 + 0x30);
    iVar2 = *(int *)(param_1 + 0x28) - iVar3;
    iVar1 = *(int *)(iVar2 + iVar3 + 4);
    while (iVar2 != (param_1 + 0x24) - iVar3) {
      func_00258CA8(iVar2,0);
      func_00109DE4(iVar2);
      func_0010F1F8((int *)(*(int *)(param_1 + 0x30) + iVar2),in_s0);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
      func_0010F1DC((int *)(param_1 + 0x54),(int *)(*(int *)(param_1 + 0x60) + iVar2));
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
      iVar2 = iVar1 - iVar3;
      iVar1 = *(int *)(iVar1 + 4);
    }
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    iVar3 = *(int *)(param_1 + 0x40);
    iVar2 = *(int *)(param_1 + 0x38) - iVar3;
    iVar1 = *(int *)(iVar2 + iVar3 + 4);
    while (iVar2 != (param_1 + 0x34) - iVar3) {
      func_00258CA8(iVar2,0);
      func_00109DE4(iVar2);
      func_0010F1F8((int *)(*(int *)(param_1 + 0x40) + iVar2),in_s0);
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
      func_0010F1DC((int *)(param_1 + 0x54),(int *)(*(int *)(param_1 + 0x60) + iVar2));
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
      iVar2 = iVar1 - iVar3;
      iVar1 = *(int *)(iVar1 + 4);
    }
  }
  return;
}

