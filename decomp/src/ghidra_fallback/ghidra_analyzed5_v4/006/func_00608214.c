#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0032DB20(undefined4 *param_1,uint *param_2);

// USA 00608214 <- EU 006081EC (Ghidra, non-matching)

undefined4 func_00608214(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(0xca0);
  if (puVar1 != (undefined4 *)0x0) {
    return func_0032DB20(puVar1,param_1);
  }
  return 0;
}

