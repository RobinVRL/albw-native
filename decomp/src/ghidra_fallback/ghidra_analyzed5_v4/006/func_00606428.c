#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00287A3C(undefined4 *param_1,uint *param_2);

// USA 00606428 <- EU 00606400 (Ghidra, non-matching)

undefined4 func_00606428(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(0x450);
  if (puVar1 != (undefined4 *)0x0) {
    return func_00287A3C(puVar1,param_1);
  }
  return 0;
}

