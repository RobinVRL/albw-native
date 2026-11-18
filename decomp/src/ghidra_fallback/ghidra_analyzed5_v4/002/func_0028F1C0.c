#include "ghidra_types.h"


// USA 0028F1C0 <- EU 0028F1E8 (Ghidra, non-matching)

undefined4 func_0028F1C0(int param_1)

{
  int iVar1;
  
  if ((*(short *)(*(int *)(param_1 + 0x14) + 0x42) != 0x97) &&
     ((iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x48), iVar1 == 0 ||
      (*(short *)(iVar1 + 4) != 0x97)))) {
    return 0;
  }
  return 1;
}

