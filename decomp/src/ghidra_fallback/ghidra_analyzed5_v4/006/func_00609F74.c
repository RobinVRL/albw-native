#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_003A445C(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00609f74;

// USA 00609F74 <- EU 00609F4C (Ghidra, non-matching)
// GLOBAL DAT_00609f74 undefined4

undefined4 func_00609F74(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00609f74);
  if (puVar1 != (undefined4 *)0x0) {
    return func_003A445C(puVar1,param_1);
  }
  return 0;
}

