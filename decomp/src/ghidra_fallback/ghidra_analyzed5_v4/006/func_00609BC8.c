#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0039B7C0(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00609bc8;

// USA 00609BC8 <- EU 00609BA0 (Ghidra, non-matching)
// GLOBAL DAT_00609bc8 undefined4

undefined4 func_00609BC8(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00609bc8);
  if (puVar1 != (undefined4 *)0x0) {
    return func_0039B7C0(puVar1,param_1);
  }
  return 0;
}

