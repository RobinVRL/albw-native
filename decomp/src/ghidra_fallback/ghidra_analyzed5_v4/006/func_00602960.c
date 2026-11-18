#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0012C140(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00602960;

// USA 00602960 <- EU 00602938 (Ghidra, non-matching)
// GLOBAL DAT_00602960 undefined4

undefined4 func_00602960(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00602960);
  if (puVar1 != (undefined4 *)0x0) {
    return func_0012C140(puVar1,param_1);
  }
  return 0;
}

