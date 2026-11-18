#include "ghidra_types.h"

extern int func_00229E24(int param_1);
extern int func_0065E8B8(undefined4 *param_1,undefined1 param_2);

// USA 0022B038 <- EU 0022B038 (Ghidra, non-matching)

undefined4 func_0022B038(int param_1)

{
  undefined1 uVar1;
  
  func_00229E24(param_1);
  if (*(int *)(param_1 + 0xcb4) < 1) {
    uVar1 = 7;
  }
  else {
    if (*(uint *)(param_1 + 0xa70) < *(uint *)(param_1 + 0xa74)) {
      *(uint *)(param_1 + 0xa70) = *(uint *)(param_1 + 0xa70) + 1;
      return 0;
    }
    uVar1 = 6;
  }
  return func_0065E8B8((undefined4 *)(param_1 + 0x8fc),uVar1);
}

