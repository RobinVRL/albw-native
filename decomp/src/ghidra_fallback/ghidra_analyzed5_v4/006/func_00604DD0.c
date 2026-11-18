#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0023F1E4(undefined4 *param_1,uint *param_2);

// USA 00604DD0 <- EU 00604DA8 (Ghidra, non-matching)

undefined4 func_00604DD0(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(0x4d0);
  if (puVar1 != (undefined4 *)0x0) {
    return func_0023F1E4(puVar1,param_1);
  }
  return 0;
}

