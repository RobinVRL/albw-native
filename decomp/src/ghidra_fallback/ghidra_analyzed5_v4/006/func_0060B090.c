#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00500540(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_0060b090;

// USA 0060B090 <- EU 0060B068 (Ghidra, non-matching)
// GLOBAL DAT_0060b090 undefined4

undefined4 func_0060B090(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_0060b090);
  if (puVar1 != (undefined4 *)0x0) {
    return func_00500540(puVar1,param_1);
  }
  return 0;
}

