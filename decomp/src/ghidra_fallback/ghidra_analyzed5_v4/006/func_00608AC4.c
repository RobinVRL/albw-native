#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00358760(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00608ac4;

// USA 00608AC4 <- EU 00608A9C (Ghidra, non-matching)
// GLOBAL DAT_00608ac4 undefined4

undefined4 func_00608AC4(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00608ac4);
  if (puVar1 != (undefined4 *)0x0) {
    return func_00358760(puVar1,param_1);
  }
  return 0;
}

