#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00144F4C(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00602f7c;

// USA 00602F7C <- EU 00602F54 (Ghidra, non-matching)
// GLOBAL DAT_00602f7c undefined4

undefined4 func_00602F7C(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00602f7c);
  if (puVar1 != (undefined4 *)0x0) {
    return func_00144F4C(puVar1,param_1);
  }
  return 0;
}

