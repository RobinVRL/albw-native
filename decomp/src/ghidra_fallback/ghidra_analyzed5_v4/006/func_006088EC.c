#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0033B298(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_006088ec;

// USA 006088EC <- EU 006088C4 (Ghidra, non-matching)
// GLOBAL DAT_006088ec undefined4

undefined4 func_006088EC(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_006088ec);
  if (puVar1 != (undefined4 *)0x0) {
    return func_0033B298(puVar1,param_1);
  }
  return 0;
}

