#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0023C2D4(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00604cf4;

// USA 00604CF4 <- EU 00604CCC (Ghidra, non-matching)
// GLOBAL DAT_00604cf4 undefined4

undefined4 func_00604CF4(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00604cf4);
  if (puVar1 != (undefined4 *)0x0) {
    return func_0023C2D4(puVar1,param_1);
  }
  return 0;
}

