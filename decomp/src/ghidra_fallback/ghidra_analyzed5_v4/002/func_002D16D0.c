#include "ghidra_types.h"

extern int func_004CF478(int param_1,int param_2);

// USA 002D16D0 <- EU 002D16AC (Ghidra, non-matching)

void func_002D16D0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x28);
  func_004CF478(*(int *)(iVar1 + 8),param_2);
  iVar3 = 0;
  do {
    iVar2 = *(int *)(iVar1 + iVar3 * 0x28 + 0x28);
    if (iVar2 != 0) {
      func_004CF478(iVar2,param_2);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  return;
}

