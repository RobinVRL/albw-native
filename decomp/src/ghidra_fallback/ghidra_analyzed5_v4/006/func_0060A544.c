#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_004BC368(undefined4 *param_1,uint *param_2);

// USA 0060A544 <- EU 0060A51C (Ghidra, non-matching)

undefined4 func_0060A544(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(0x450);
  if (puVar1 != (undefined4 *)0x0) {
    return func_004BC368(puVar1,param_1);
  }
  return 0;
}

