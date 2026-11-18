#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0035A3B8(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00608b1c;

// USA 00608B1C <- EU 00608AF4 (Ghidra, non-matching)
// GLOBAL DAT_00608b1c undefined4

undefined4 func_00608B1C(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00608b1c);
  if (puVar1 != (undefined4 *)0x0) {
    return func_0035A3B8(puVar1,param_1);
  }
  return 0;
}

