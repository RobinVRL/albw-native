#include "ghidra_types.h"

extern undefined4 func_0065D120(undefined4 *param_1,undefined1 param_2,float fparam_0);

// USA 00201018 <- EU 00201018 (Ghidra, non-matching)

undefined4 func_00201018(int param_1)

{
  float in_s0;
  
  if (*(uint *)(param_1 + 0x8c8) < *(uint *)(param_1 + 0x8cc)) {
    *(uint *)(param_1 + 0x8c8) = *(uint *)(param_1 + 0x8c8) + 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x93d) = 0;
  }
  if (*(char *)(param_1 + 0x93c) == '\0') {
    return func_0065D120((undefined4 *)(param_1 + 0x8dc),0,in_s0);
  }
  return 0;
}

