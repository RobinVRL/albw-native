#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0032F6CC(undefined4 *param_1,uint *param_2);

// USA 00608278 <- EU 00608250 (Ghidra, non-matching)

undefined4 func_00608278(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(0x940);
  if (puVar1 != (undefined4 *)0x0) {
    return func_0032F6CC(puVar1,param_1);
  }
  return 0;
}

