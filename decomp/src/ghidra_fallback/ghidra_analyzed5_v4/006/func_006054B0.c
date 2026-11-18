#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00249AEC(undefined4 *param_1,uint *param_2);

// USA 006054B0 <- EU 00605488 (Ghidra, non-matching)

undefined4 func_006054B0(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(0x4f0);
  if (puVar1 != (undefined4 *)0x0) {
    return func_00249AEC(puVar1,param_1);
  }
  return 0;
}

