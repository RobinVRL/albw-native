#include "ghidra_types.h"

extern int func_001DFEE0(int param_1,int param_2);

// USA 002DED00 <- EU 002DECDC (Ghidra, non-matching)

void func_002DED00(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar3 = *(int *)(param_1 + 0x30);
    iVar1 = *(int *)(param_1 + 0x30);
    for (iVar2 = *(int *)(param_1 + 0x28) - iVar3; iVar2 != (param_1 + 0x24) - iVar1;
        iVar2 = *(int *)(iVar2 + iVar3 + 4) - iVar3) {
      func_001DFEE0(iVar2,param_2);
    }
  }
  return;
}

