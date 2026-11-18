#include "ghidra_types.h"

extern int func_0052EF04(int param_1,int param_2);

// USA 00547224 <- EU 005471FC (Ghidra, non-matching)

undefined4 func_00547224(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = *(int *)(param_1 + 0x3c);
  if (*(int *)(iVar2 + 0x2c) != 0) {
    iVar5 = *(int *)(iVar2 + 0x30);
    iVar3 = *(int *)(iVar2 + 0x30);
    for (iVar4 = *(int *)(iVar2 + 0x28) - iVar5; iVar4 != (iVar2 + 0x24) - iVar3;
        iVar4 = *(int *)(iVar4 + iVar5 + 4) - iVar5) {
      bVar1 = func_0052EF04(iVar4,param_2);
      if (bVar1) {
        return 1;
      }
    }
  }
  return 0;
}

