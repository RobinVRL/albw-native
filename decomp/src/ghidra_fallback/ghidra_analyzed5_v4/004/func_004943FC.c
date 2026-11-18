#include "ghidra_types.h"


// USA 004943FC <- EU 004943D4 (Ghidra, non-matching)

int func_004943FC(int param_1,int param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != 0) {
    iVar2 = 0;
    if (*(int *)(param_1 + 0x50) != 0) {
      (**(code **)(*param_3 + 8))(param_3);
      iVar2 = 0;
      if (param_3[1] != 0) {
        iVar1 = (**(code **)(**(int **)(param_1 + 0x50) + 0x1c))
                          (*(int **)(param_1 + 0x50),param_3,param_2 + 0x1c);
        iVar2 = 0;
        if (iVar1 != 0) {
          *(int *)(param_2 + 0x18) = iVar1;
          *(undefined4 *)(param_2 + 0x24) = 0;
          iVar2 = param_1;
        }
      }
    }
    return iVar2;
  }
  return 0;
}

