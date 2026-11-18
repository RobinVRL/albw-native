#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_001CA158(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00604040;

// USA 00604040 <- EU 00604018 (Ghidra, non-matching)
// GLOBAL DAT_00604040 undefined4

undefined4 func_00604040(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00604040);
  if (puVar1 != (undefined4 *)0x0) {
    return func_001CA158(puVar1,param_1);
  }
  return 0;
}

