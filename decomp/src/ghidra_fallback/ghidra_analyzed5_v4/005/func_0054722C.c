#include "ghidra_types.h"

extern int func_0052EF04(int param_1,int param_2);

// USA 0054722C <- EU 00547204 (Ghidra, non-matching)

undefined4 func_0054722C(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar4 = *(int *)(param_1 + 0x30);
    iVar2 = *(int *)(param_1 + 0x30);
    for (iVar3 = *(int *)(param_1 + 0x28) - iVar4; iVar3 != (param_1 + 0x24) - iVar2;
        iVar3 = *(int *)(iVar3 + iVar4 + 4) - iVar4) {
      bVar1 = func_0052EF04(iVar3,param_2);
      if (bVar1) {
        return 1;
      }
    }
  }
  return 0;
}

