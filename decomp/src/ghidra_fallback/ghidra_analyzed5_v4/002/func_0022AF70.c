#include "ghidra_types.h"

extern int func_0065E8B8(undefined4 *param_1,undefined1 param_2);

// USA 0022AF70 <- EU 0022AF70 (Ghidra, non-matching)

undefined4 func_0022AF70(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xa70);
  if (uVar1 < *(uint *)(param_1 + 0xa74)) {
    uVar1 = uVar1 + 1;
    *(uint *)(param_1 + 0xa70) = uVar1;
  }
  if (uVar1 == 0x50) {
    *(undefined1 *)(param_1 + 0xd0b) = 1;
  }
  if (*(uint *)(param_1 + 0xa74) <= uVar1) {
    return func_0065E8B8((undefined4 *)(param_1 + 0x8fc),4);
  }
  return 0;
}

