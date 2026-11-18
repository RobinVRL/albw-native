#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_002BE030(undefined4 *param_1,uint *param_2);

// USA 00606984 <- EU 0060695C (Ghidra, non-matching)

undefined4 func_00606984(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(0x960);
  if (puVar1 != (undefined4 *)0x0) {
    return func_002BE030(puVar1,param_1);
  }
  return 0;
}

