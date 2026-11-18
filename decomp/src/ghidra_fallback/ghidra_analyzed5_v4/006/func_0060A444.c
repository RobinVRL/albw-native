#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_004B0310(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_0060a444;

// USA 0060A444 <- EU 0060A41C (Ghidra, non-matching)
// GLOBAL DAT_0060a444 undefined4

undefined4 func_0060A444(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_0060a444);
  if (puVar1 != (undefined4 *)0x0) {
    return func_004B0310(puVar1,param_1);
  }
  return 0;
}

