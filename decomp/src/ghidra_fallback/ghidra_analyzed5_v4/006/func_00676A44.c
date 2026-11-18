#include "ghidra_types.h"

extern int func_003DA464(int *param_1,int param_2,int param_3);

// USA 00676A44 <- EU 00676A1C (Ghidra, non-matching)

int func_00676A44(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1 + 8;
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar1 = *(int *)(param_1 + 0xc);
    while (iVar1 != iVar3) {
      iVar2 = *(int *)(iVar1 + 4);
      func_003DA464(*(int **)(param_1 + 0x10),iVar1,1);
      iVar1 = iVar2;
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(int *)iVar3 = iVar3;
    *(int *)(param_1 + 0xc) = iVar3;
  }
  return param_1;
}

