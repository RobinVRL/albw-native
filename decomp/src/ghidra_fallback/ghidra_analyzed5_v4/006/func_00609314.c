#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0037A358(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00609314;

// USA 00609314 <- EU 006092EC (Ghidra, non-matching)
// GLOBAL DAT_00609314 undefined4

undefined4 func_00609314(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00609314);
  if (puVar1 != (undefined4 *)0x0) {
    return func_0037A358(puVar1,param_1);
  }
  return 0;
}

