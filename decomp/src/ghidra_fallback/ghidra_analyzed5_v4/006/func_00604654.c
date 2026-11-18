#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_001E29C0(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00604654;

// USA 00604654 <- EU 0060462C (Ghidra, non-matching)
// GLOBAL DAT_00604654 undefined4

undefined4 func_00604654(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00604654);
  if (puVar1 != (undefined4 *)0x0) {
    return func_001E29C0(puVar1,param_1);
  }
  return 0;
}

