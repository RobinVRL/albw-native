#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_003313C4(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_006083b0;

// USA 006083B0 <- EU 00608388 (Ghidra, non-matching)
// GLOBAL DAT_006083b0 undefined4

undefined4 func_006083B0(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_006083b0);
  if (puVar1 != (undefined4 *)0x0) {
    return func_003313C4(puVar1,param_1);
  }
  return 0;
}

