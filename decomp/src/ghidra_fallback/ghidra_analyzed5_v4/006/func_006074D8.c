#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_002E5460(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_006074d8;

// USA 006074D8 <- EU 006074B0 (Ghidra, non-matching)
// GLOBAL DAT_006074d8 undefined4

undefined4 func_006074D8(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_006074d8);
  if (puVar1 != (undefined4 *)0x0) {
    return func_002E5460(puVar1,param_1);
  }
  return 0;
}

