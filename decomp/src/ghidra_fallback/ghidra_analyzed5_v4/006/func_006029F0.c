#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00135C24(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_006029f0;

// USA 006029F0 <- EU 006029C8 (Ghidra, non-matching)
// GLOBAL DAT_006029f0 undefined4

undefined4 func_006029F0(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_006029f0);
  if (puVar1 != (undefined4 *)0x0) {
    return func_00135C24(puVar1,param_1);
  }
  return 0;
}

