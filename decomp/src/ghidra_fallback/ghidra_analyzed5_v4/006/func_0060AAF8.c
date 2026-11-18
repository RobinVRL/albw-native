#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_004D7BB8(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_0060aaf8;

// USA 0060AAF8 <- EU 0060AAD0 (Ghidra, non-matching)
// GLOBAL DAT_0060aaf8 undefined4

undefined4 func_0060AAF8(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_0060aaf8);
  if (puVar1 != (undefined4 *)0x0) {
    return func_004D7BB8(puVar1,param_1);
  }
  return 0;
}

