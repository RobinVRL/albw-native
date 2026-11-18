#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_002A19B0(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00606848;

// USA 00606848 <- EU 00606820 (Ghidra, non-matching)
// GLOBAL DAT_00606848 undefined4

undefined4 func_00606848(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00606848);
  if (puVar1 != (undefined4 *)0x0) {
    return func_002A19B0(puVar1,param_1);
  }
  return 0;
}

