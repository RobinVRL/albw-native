#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00310F64(undefined4 *param_1,uint *param_2);

// USA 00607DD0 <- EU 00607DA8 (Ghidra, non-matching)

undefined4 func_00607DD0(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(0xb20);
  if (puVar1 != (undefined4 *)0x0) {
    return func_00310F64(puVar1,param_1);
  }
  return 0;
}

