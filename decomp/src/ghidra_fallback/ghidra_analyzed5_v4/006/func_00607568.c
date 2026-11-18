#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_002F6A38(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00607568;

// USA 00607568 <- EU 00607540 (Ghidra, non-matching)
// GLOBAL DAT_00607568 undefined4

undefined4 func_00607568(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00607568);
  if (puVar1 != (undefined4 *)0x0) {
    return func_002F6A38(puVar1,param_1);
  }
  return 0;
}

