#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0030F21C(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00607c70;

// USA 00607C70 <- EU 00607C48 (Ghidra, non-matching)
// GLOBAL DAT_00607c70 undefined4

undefined4 func_00607C70(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00607c70);
  if (puVar1 != (undefined4 *)0x0) {
    return func_0030F21C(puVar1,param_1);
  }
  return 0;
}

