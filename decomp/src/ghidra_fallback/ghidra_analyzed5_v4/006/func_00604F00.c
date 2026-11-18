#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_002403C4(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00604f00;

// USA 00604F00 <- EU 00604ED8 (Ghidra, non-matching)
// GLOBAL DAT_00604f00 undefined4

undefined4 func_00604F00(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00604f00);
  if (puVar1 != (undefined4 *)0x0) {
    return func_002403C4(puVar1,param_1);
  }
  return 0;
}

