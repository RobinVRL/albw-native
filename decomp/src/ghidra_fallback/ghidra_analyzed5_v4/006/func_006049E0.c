#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00219C60(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_006049e0;

// USA 006049E0 <- EU 006049B8 (Ghidra, non-matching)
// GLOBAL DAT_006049e0 undefined4

undefined4 func_006049E0(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_006049e0);
  if (puVar1 != (undefined4 *)0x0) {
    return func_00219C60(puVar1,param_1);
  }
  return 0;
}

