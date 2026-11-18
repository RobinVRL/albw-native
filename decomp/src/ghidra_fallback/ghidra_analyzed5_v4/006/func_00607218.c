#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_002CC800(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00607218;

// USA 00607218 <- EU 006071F0 (Ghidra, non-matching)
// GLOBAL DAT_00607218 undefined4

undefined4 func_00607218(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00607218);
  if (puVar1 != (undefined4 *)0x0) {
    return func_002CC800(puVar1,param_1);
  }
  return 0;
}

