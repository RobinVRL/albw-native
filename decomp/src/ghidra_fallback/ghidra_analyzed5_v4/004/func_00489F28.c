#include "ghidra_types.h"


// USA 00489F28 <- EU 00489F00 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4

int func_00489F28(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  
  if ((char)param_1[0x13] == '\0' || param_2 == 0) {
    iVar1 = 0;
  }
  else {
    *(undefined4 *)(param_2 + 0x38) = param_5;
    iVar1 = (**(code **)(*param_1 + 0x2c))(param_1,param_2);
    *(int *)(param_2 + 0x10) = iVar1;
    if (iVar1 != 0) {
      *(int **)(param_2 + 0x14) = param_1;
    }
  }
  return iVar1;
}

