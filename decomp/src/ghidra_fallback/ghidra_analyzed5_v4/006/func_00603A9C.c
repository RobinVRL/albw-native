#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_001B5E00(undefined4 *param_1,uint *param_2);

// USA 00603A9C <- EU 00603A74 (Ghidra, non-matching)

undefined4 func_00603A9C(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(0xa20);
  if (puVar1 != (undefined4 *)0x0) {
    return func_001B5E00(puVar1,param_1);
  }
  return 0;
}

