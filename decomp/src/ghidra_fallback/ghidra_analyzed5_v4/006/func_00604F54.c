#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00241554(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00604f54;

// USA 00604F54 <- EU 00604F2C (Ghidra, non-matching)
// GLOBAL DAT_00604f54 undefined4

undefined4 func_00604F54(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00604f54);
  if (puVar1 != (undefined4 *)0x0) {
    return func_00241554(puVar1,param_1);
  }
  return 0;
}

