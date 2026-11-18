#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0024BBD8(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00605504;

// USA 00605504 <- EU 006054DC (Ghidra, non-matching)
// GLOBAL DAT_00605504 undefined4

undefined4 func_00605504(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00605504);
  if (puVar1 != (undefined4 *)0x0) {
    return func_0024BBD8(puVar1,param_1);
  }
  return 0;
}

