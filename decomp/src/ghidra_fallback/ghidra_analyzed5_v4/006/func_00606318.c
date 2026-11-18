#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00286658(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00606318;

// USA 00606318 <- EU 006062F0 (Ghidra, non-matching)
// GLOBAL DAT_00606318 undefined4

undefined4 func_00606318(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00606318);
  if (puVar1 != (undefined4 *)0x0) {
    return func_00286658(puVar1,param_1);
  }
  return 0;
}

