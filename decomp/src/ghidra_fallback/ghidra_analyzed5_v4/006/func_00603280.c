#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0016F250(undefined4 *param_1,uint *param_2);

// USA 00603280 <- EU 00603258 (Ghidra, non-matching)

undefined4 func_00603280(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(800);
  if (puVar1 != (undefined4 *)0x0) {
    return func_0016F250(puVar1,param_1);
  }
  return 0;
}

