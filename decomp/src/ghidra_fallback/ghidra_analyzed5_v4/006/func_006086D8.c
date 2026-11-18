#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00339324(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_006086d8;

// USA 006086D8 <- EU 006086B0 (Ghidra, non-matching)
// GLOBAL DAT_006086d8 undefined4

undefined4 func_006086D8(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_006086d8);
  if (puVar1 != (undefined4 *)0x0) {
    return func_00339324(puVar1,param_1);
  }
  return 0;
}

