#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_001AF0AC(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00603a18;

// USA 00603A18 <- EU 006039F0 (Ghidra, non-matching)
// GLOBAL DAT_00603a18 undefined4

undefined4 func_00603A18(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00603a18);
  if (puVar1 != (undefined4 *)0x0) {
    return func_001AF0AC(puVar1,param_1);
  }
  return 0;
}

