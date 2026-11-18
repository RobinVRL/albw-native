#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_001390A4(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00602aa0;

// USA 00602AA0 <- EU 00602A78 (Ghidra, non-matching)
// GLOBAL DAT_00602aa0 undefined4

undefined4 func_00602AA0(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00602aa0);
  if (puVar1 != (undefined4 *)0x0) {
    return func_001390A4(puVar1,param_1);
  }
  return 0;
}

