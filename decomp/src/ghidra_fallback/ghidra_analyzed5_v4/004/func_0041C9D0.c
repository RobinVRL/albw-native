#include "ghidra_types.h"

extern int func_0041D830(undefined4 *param_1,undefined4 *param_2);

// USA 0041C9D0 <- EU 0041C9B0 (Ghidra, non-matching)

undefined4 func_0041C9D0(int param_1,undefined4 *param_2)

{
  param_2[0x4b] = 0;
  if (param_2 != (undefined4 *)0x0) {
    (**(code **)*param_2)(param_2);
    return func_0041D830((undefined4 *)(param_1 + 8),param_2);
  }
  return 0;
}

