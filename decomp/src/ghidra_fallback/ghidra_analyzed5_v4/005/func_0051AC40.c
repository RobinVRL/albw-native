#include "ghidra_types.h"

extern int func_00454C38(int param_1,undefined4 *param_2);

// USA 0051AC40 <- EU 0051AC18 (Ghidra, non-matching)

undefined4 func_0051AC40(int param_1,undefined4 *param_2)

{
  if (*(int *)(param_1 + 0xb0) != 0) {
    return func_00454C38(*(int *)(param_1 + 0xb0),param_2);
  }
  return 0;
}

