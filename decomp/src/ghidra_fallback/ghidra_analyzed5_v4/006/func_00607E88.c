#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00314BBC(undefined4 *param_1,uint *param_2);

// USA 00607E88 <- EU 00607E60 (Ghidra, non-matching)

undefined4 func_00607E88(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(0x9a0);
  if (puVar1 != (undefined4 *)0x0) {
    return func_00314BBC(puVar1,param_1);
  }
  return 0;
}

