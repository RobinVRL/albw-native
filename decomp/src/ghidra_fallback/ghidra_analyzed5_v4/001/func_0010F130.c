#include "ghidra_types.h"

extern void func_0010F1F8(int *param_1,float fparam_0);

// USA 0010F130 <- EU 0010F130 (Ghidra, non-matching)

void func_0010F130(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float in_s0;
  
  iVar3 = *(int *)(param_1 + 0x84);
  iVar1 = *(int *)(param_1 + 0x7c) - iVar3;
  while( true ) {
    iVar2 = iVar1;
    if (iVar2 == (param_1 + 0x78) - *(int *)(param_1 + 0x84)) {
      return;
    }
    iVar1 = *(int *)(iVar2 + iVar3 + 4) - iVar3;
    if (iVar1 == (param_1 + 0x78) - *(int *)(param_1 + 0x84)) break;
    if (*(int *)(iVar2 + 8) + *(int *)(iVar2 + 0xc) + 0x10 + iVar2 == iVar1) {
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + *(int *)(iVar1 + 0xc) + *(int *)(iVar1 + 8) + 0x10
      ;
      func_0010F1F8((int *)(*(int *)(param_1 + 0x84) + iVar1),in_s0);
      *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + -1;
      iVar1 = iVar2;
    }
  }
  return;
}

