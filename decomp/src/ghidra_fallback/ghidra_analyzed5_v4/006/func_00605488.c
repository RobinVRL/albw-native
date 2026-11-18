#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00248D40(undefined4 *param_1,uint *param_2);

// USA 00605488 <- EU 00605460 (Ghidra, non-matching)

undefined4 func_00605488(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(0x480);
  if (puVar1 != (undefined4 *)0x0) {
    return func_00248D40(puVar1,param_1);
  }
  return 0;
}

