#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_002810A0(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00605cc0;

// USA 00605CC0 <- EU 00605C98 (Ghidra, non-matching)
// GLOBAL DAT_00605cc0 undefined4

undefined4 func_00605CC0(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00605cc0);
  if (puVar1 != (undefined4 *)0x0) {
    return func_002810A0(puVar1,param_1);
  }
  return 0;
}

