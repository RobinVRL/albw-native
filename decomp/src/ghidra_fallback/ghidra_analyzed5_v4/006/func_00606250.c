#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00285BA4(undefined4 *param_1,uint *param_2);

// USA 00606250 <- EU 00606228 (Ghidra, non-matching)

undefined4 func_00606250(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(0x9a0);
  if (puVar1 != (undefined4 *)0x0) {
    return func_00285BA4(puVar1,param_1);
  }
  return 0;
}

