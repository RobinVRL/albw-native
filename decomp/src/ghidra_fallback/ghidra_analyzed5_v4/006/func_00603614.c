#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00186188(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00603614;

// USA 00603614 <- EU 006035EC (Ghidra, non-matching)
// GLOBAL DAT_00603614 undefined4

undefined4 func_00603614(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00603614);
  if (puVar1 != (undefined4 *)0x0) {
    return func_00186188(puVar1,param_1);
  }
  return 0;
}

