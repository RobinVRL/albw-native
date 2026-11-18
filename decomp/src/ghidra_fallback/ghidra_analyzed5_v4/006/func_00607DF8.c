#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_003137A4(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00607df8;

// USA 00607DF8 <- EU 00607DD0 (Ghidra, non-matching)
// GLOBAL DAT_00607df8 undefined4

undefined4 func_00607DF8(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00607df8);
  if (puVar1 != (undefined4 *)0x0) {
    return func_003137A4(puVar1,param_1);
  }
  return 0;
}

