#include "ghidra_types.h"


// USA 001300D4 <- EU 001300D4 (Ghidra, non-matching)

undefined4 * func_001300D4(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 0x5c) < *(int *)(param_1 + 0x60)) {
    puVar1 = *(undefined4 **)(param_1 + 0x68);
    if (puVar1 != (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 0x68) = *puVar1;
      *puVar1 = param_2;
      *(undefined1 *)(puVar1 + 1) = 0;
    }
    if (*(int *)(param_1 + 0x5c) < *(int *)(param_1 + 0x60)) {
      *(undefined4 **)(*(int *)(param_1 + 100) + *(int *)(param_1 + 0x5c) * 4) = puVar1;
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
    }
  }
  else {
    puVar1 = (undefined4 *)0x0;
  }
  return puVar1;
}

