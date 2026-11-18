#include "ghidra_types.h"

extern int func_0019A6DC(int param_1,int param_2,int param_3);
extern int func_00587FCC(int param_1,int *param_2);
extern int *DAT_00150a1c;

// USA 001509A4 <- EU 001509A4 (Ghidra, non-matching)
// GLOBAL DAT_00150a1c int *

void func_001509A4(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = func_00587FCC(*DAT_00150a1c,param_2);
  if ((iVar1 != -1) && (*(int *)(param_1 + 0x400) != 0)) {
    iVar3 = *(int *)(param_1 + 0x404);
    for (iVar2 = *(int *)(param_1 + 0x3fc) - iVar3; iVar2 != (param_1 + 0x3f8) - iVar3;
        iVar2 = *(int *)(iVar2 + iVar3 + 4) - iVar3) {
      func_0019A6DC(iVar2,iVar1,param_3);
    }
  }
  return;
}

