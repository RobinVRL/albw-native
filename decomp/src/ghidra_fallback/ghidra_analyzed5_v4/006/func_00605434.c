#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00246E74(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00605434;

// USA 00605434 <- EU 0060540C (Ghidra, non-matching)
// GLOBAL DAT_00605434 undefined4

undefined4 func_00605434(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00605434);
  if (puVar1 != (undefined4 *)0x0) {
    return func_00246E74(puVar1,param_1);
  }
  return 0;
}

