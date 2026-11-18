#include "ghidra_types.h"

extern int func_0052EF04(int param_1,int param_2);

// USA 0057049C <- EU 00570474 (Ghidra, non-matching)

undefined4 func_0057049C(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 0x34);
  if (*(int *)(iVar2 + 8) != 0) {
    iVar4 = *(int *)(iVar2 + 0xc);
    for (iVar3 = *(int *)(iVar2 + 4) - iVar4; iVar3 != iVar2 - iVar4;
        iVar3 = *(int *)(iVar3 + iVar4 + 4) - iVar4) {
      bVar1 = func_0052EF04(iVar3,param_2);
      if (bVar1) {
        return 1;
      }
    }
  }
  return 0;
}

