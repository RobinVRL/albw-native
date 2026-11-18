#include "ghidra_types.h"


// USA 0053B530 <- EU 0053B508 (Ghidra, non-matching)

undefined4 func_0053B530(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  if ((-1 < (int)param_2 && -1 < (int)param_3) &&
     (param_2 < *(uint *)(*(int *)(param_1 + 0x38) + 0x15b4c))) {
    iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x38) + 0x15b54) + param_2 * 4);
    if (iVar1 != 0) {
      param_2 = *(uint *)(iVar1 + 0x28);
    }
    if ((iVar1 != 0 && param_2 != 0) && (param_3 < *(uint *)(iVar1 + 0x20))) {
      return *(undefined4 *)(param_2 + param_3 * 4);
    }
  }
  return 0;
}

