#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0016FD34(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_006032a8;

// USA 006032A8 <- EU 00603280 (Ghidra, non-matching)
// GLOBAL DAT_006032a8 undefined4

undefined4 func_006032A8(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_006032a8);
  if (puVar1 != (undefined4 *)0x0) {
    return func_0016FD34(puVar1,param_1);
  }
  return 0;
}

