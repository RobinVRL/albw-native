#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00144150(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00602f50;

// USA 00602F50 <- EU 00602F28 (Ghidra, non-matching)
// GLOBAL DAT_00602f50 undefined4

undefined4 func_00602F50(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00602f50);
  if (puVar1 != (undefined4 *)0x0) {
    return func_00144150(puVar1,param_1);
  }
  return 0;
}

