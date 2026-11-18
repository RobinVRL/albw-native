#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_003027B4(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00607790;

// USA 00607790 <- EU 00607768 (Ghidra, non-matching)
// GLOBAL DAT_00607790 undefined4

undefined4 func_00607790(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00607790);
  if (puVar1 != (undefined4 *)0x0) {
    return func_003027B4(puVar1,param_1);
  }
  return 0;
}

