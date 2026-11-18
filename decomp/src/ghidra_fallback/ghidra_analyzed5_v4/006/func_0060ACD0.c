#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_004DAC4C(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_0060acd0;

// USA 0060ACD0 <- EU 0060ACA8 (Ghidra, non-matching)
// GLOBAL DAT_0060acd0 undefined4

undefined4 func_0060ACD0(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_0060acd0);
  if (puVar1 != (undefined4 *)0x0) {
    return func_004DAC4C(puVar1,param_1);
  }
  return 0;
}

