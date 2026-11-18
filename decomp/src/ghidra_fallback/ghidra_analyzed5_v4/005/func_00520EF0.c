#include "ghidra_types.h"

extern int func_00527794(int param_1,int *param_2);

// USA 00520EF0 <- EU 00520EC8 (Ghidra, non-matching)

undefined4 func_00520EF0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x404);
  iVar3 = *(int *)(param_1 + 0x3fc) - iVar4;
  iVar2 = *(int *)(param_1 + 0x404);
  while( true ) {
    if (iVar3 == (param_1 + 0x3f8) - iVar2) {
      return 0;
    }
    iVar1 = func_00527794(iVar3,param_2);
    if (iVar1 != 0) break;
    iVar3 = *(int *)(iVar3 + iVar4 + 4) - iVar4;
  }
  return 1;
}

