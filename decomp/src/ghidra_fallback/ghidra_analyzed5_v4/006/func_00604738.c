#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_001E7B4C(undefined4 *param_1,uint *param_2);

// USA 00604738 <- EU 00604710 (Ghidra, non-matching)

undefined4 func_00604738(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(0xae0);
  if (puVar1 != (undefined4 *)0x0) {
    return func_001E7B4C(puVar1,param_1);
  }
  return 0;
}

