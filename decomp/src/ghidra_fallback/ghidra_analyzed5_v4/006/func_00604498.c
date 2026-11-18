#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_001D42A8(undefined4 *param_1,uint *param_2);

// USA 00604498 <- EU 00604470 (Ghidra, non-matching)

undefined4 func_00604498(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(0x490);
  if (puVar1 != (undefined4 *)0x0) {
    return func_001D42A8(puVar1,param_1);
  }
  return 0;
}

