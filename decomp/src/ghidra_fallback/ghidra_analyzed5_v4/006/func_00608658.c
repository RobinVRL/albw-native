#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0033711C(undefined4 *param_1,uint *param_2);

// USA 00608658 <- EU 00608630 (Ghidra, non-matching)

undefined4 func_00608658(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(0x490);
  if (puVar1 != (undefined4 *)0x0) {
    return func_0033711C(puVar1,param_1);
  }
  return 0;
}

