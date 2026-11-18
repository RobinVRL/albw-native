#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00360C94(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00608f80;

// USA 00608F80 <- EU 00608F58 (Ghidra, non-matching)
// GLOBAL DAT_00608f80 undefined4

undefined4 func_00608F80(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00608f80);
  if (puVar1 != (undefined4 *)0x0) {
    return func_00360C94(puVar1,param_1);
  }
  return 0;
}

