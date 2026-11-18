#include "ghidra_types.h"


// USA 0010F8B8 <- EU 0010F8B8 (Ghidra, non-matching)

void func_0010F8B8(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = param_3;
  }
  return;
}

