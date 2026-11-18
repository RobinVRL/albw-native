#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0035A62C(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00608b48;

// USA 00608B48 <- EU 00608B20 (Ghidra, non-matching)
// GLOBAL DAT_00608b48 undefined4

undefined4 func_00608B48(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00608b48);
  if (puVar1 != (undefined4 *)0x0) {
    return func_0035A62C(puVar1,param_1);
  }
  return 0;
}

