#include "ghidra_types.h"

extern int func_0065D774(undefined4 *param_1,undefined1 param_2);

// USA 0021214C <- EU 0021214C (Ghidra, non-matching)

undefined4 func_0021214C(int param_1)

{
  if (*(char *)(param_1 + 0x8c1) == '\x06') {
    if (*(uint *)(param_1 + 0x970) < *(uint *)(param_1 + 0x974)) {
      *(uint *)(param_1 + 0x970) = *(uint *)(param_1 + 0x970) + 1;
      return 0;
    }
  }
  else if (*(int *)(param_1 + 0x8bc) < 0xf1) {
    return 0;
  }
  return func_0065D774((undefined4 *)(param_1 + 0x8bc),2);
}

