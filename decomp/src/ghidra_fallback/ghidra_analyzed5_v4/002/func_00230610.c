#include "ghidra_types.h"

extern int func_0010F1DC(int *param_1,int *param_2);

// USA 00230610 <- EU 00230610 (Ghidra, non-matching)

undefined4 func_00230610(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 0x3c) < *(int *)(param_1 + 0x48)) {
    puVar1 = *(undefined4 **)(param_1 + 0x40);
    if (puVar1 != (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 0x40) = *puVar1;
      *puVar1 = param_2;
      puVar1[1] = 0;
      puVar1[2] = 0;
    }
    func_0010F1DC((int *)(param_1 + 0x34),puVar1 + 1);
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
    if (puVar1 != (undefined4 *)0x0) {
      return 1;
    }
  }
  return 0;
}

