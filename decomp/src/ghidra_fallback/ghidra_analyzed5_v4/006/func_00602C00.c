#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0013B6FC(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00602c00;

// USA 00602C00 <- EU 00602BD8 (Ghidra, non-matching)
// GLOBAL DAT_00602c00 undefined4

undefined4 func_00602C00(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00602c00);
  if (puVar1 != (undefined4 *)0x0) {
    return func_0013B6FC(puVar1,param_1);
  }
  return 0;
}

