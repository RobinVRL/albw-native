#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0029B290(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00606654;

// USA 00606654 <- EU 0060662C (Ghidra, non-matching)
// GLOBAL DAT_00606654 undefined4

undefined4 func_00606654(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00606654);
  if (puVar1 != (undefined4 *)0x0) {
    return func_0029B290(puVar1,param_1);
  }
  return 0;
}

