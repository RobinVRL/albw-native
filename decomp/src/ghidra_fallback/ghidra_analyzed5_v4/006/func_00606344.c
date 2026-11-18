#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00287098(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00606344;

// USA 00606344 <- EU 0060631C (Ghidra, non-matching)
// GLOBAL DAT_00606344 undefined4

undefined4 func_00606344(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00606344);
  if (puVar1 != (undefined4 *)0x0) {
    return func_00287098(puVar1,param_1);
  }
  return 0;
}

