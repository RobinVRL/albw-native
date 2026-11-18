#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0035A0AC(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00608af0;

// USA 00608AF0 <- EU 00608AC8 (Ghidra, non-matching)
// GLOBAL DAT_00608af0 undefined4

undefined4 func_00608AF0(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00608af0);
  if (puVar1 != (undefined4 *)0x0) {
    return func_0035A0AC(puVar1,param_1);
  }
  return 0;
}

