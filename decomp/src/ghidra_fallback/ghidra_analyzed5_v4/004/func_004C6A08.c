#include "ghidra_types.h"

extern int func_0019CDBC(int param_1,int param_2,undefined4 param_3,uint param_4);

// USA 004C6A08 <- EU 004C69E0 (Ghidra, non-matching)

void func_004C6A08(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  func_0019CDBC(param_1,param_2,param_3,param_4);
  iVar2 = *(int *)(param_2 + 0x460);
  *(int *)(param_1 + 0x57c) = iVar2;
  iVar3 = *(int *)(param_2 + 0x464);
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  *(int *)(param_1 + 0x580) = iVar3;
  iVar1 = *(int *)(param_2 + 0x468);
  if (iVar3 < 1) {
    iVar3 = 0;
  }
  *(int *)(param_1 + 0x584) = iVar1;
  if (iVar1 < 1) {
    iVar1 = 0;
  }
  *(int *)(param_1 + 0x57c) = iVar2;
  *(int *)(param_1 + 0x580) = iVar3;
  *(int *)(param_1 + 0x584) = iVar1;
  if (0x14 < iVar1) {
    iVar1 = 0x14;
  }
  *(int *)(param_1 + 0x584) = iVar1;
  return;
}

