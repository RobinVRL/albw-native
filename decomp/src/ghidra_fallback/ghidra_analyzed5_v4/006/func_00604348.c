#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_001CC3F8(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00604348;

// USA 00604348 <- EU 00604320 (Ghidra, non-matching)
// GLOBAL DAT_00604348 undefined4

undefined4 func_00604348(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00604348);
  if (puVar1 != (undefined4 *)0x0) {
    return func_001CC3F8(puVar1,param_1);
  }
  return 0;
}

