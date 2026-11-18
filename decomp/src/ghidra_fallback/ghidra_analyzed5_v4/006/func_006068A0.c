#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_002A94DC(undefined4 *param_1,uint *param_2);

// USA 006068A0 <- EU 00606878 (Ghidra, non-matching)

undefined4 func_006068A0(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(0x910);
  if (puVar1 != (undefined4 *)0x0) {
    return func_002A94DC(puVar1,param_1);
  }
  return 0;
}

