#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00142BE8(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00602f24;

// USA 00602F24 <- EU 00602EFC (Ghidra, non-matching)
// GLOBAL DAT_00602f24 undefined4

undefined4 func_00602F24(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00602f24);
  if (puVar1 != (undefined4 *)0x0) {
    return func_00142BE8(puVar1,param_1);
  }
  return 0;
}

