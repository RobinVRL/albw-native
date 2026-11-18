#include "ghidra_types.h"

extern undefined4 func_0065D120(undefined4 *param_1,undefined1 param_2,float fparam_0);

// USA 00200D44 <- EU 00200D44 (Ghidra, non-matching)

undefined4 func_00200D44(int param_1)

{
  float in_s0;
  
  if (*(char *)(param_1 + 0x93c) == '\0') {
    return 0;
  }
  if (*(uint *)(param_1 + 0x8cc) <= *(uint *)(param_1 + 0x8c8)) {
    return func_0065D120((undefined4 *)(param_1 + 0x8dc),3,in_s0);
  }
  *(uint *)(param_1 + 0x8c8) = *(uint *)(param_1 + 0x8c8) + 1;
  return 0;
}

