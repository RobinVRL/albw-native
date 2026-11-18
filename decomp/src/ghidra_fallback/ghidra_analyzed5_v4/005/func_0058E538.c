#include "ghidra_types.h"

extern int func_0056C508(int param_1,undefined4 param_2);

// USA 0058E538 <- EU 0058E510 (Ghidra, non-matching)

undefined4 func_0058E538(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 0x210);
  if (((piVar1 == (int *)0x0) || (iVar2 = (**(code **)(*piVar1 + 8))(piVar1,param_2), iVar2 == 0))
     && (iVar2 = func_0056C508(param_1,param_2), iVar2 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0058e56c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    return (**(code **)(*(int *)(param_1 + -0xc) + 0x10))((int *)(param_1 + -0xc),param_2);
  }
  return 0;
}

