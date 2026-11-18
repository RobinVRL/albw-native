#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0035D078(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00608d08;

// USA 00608D08 <- EU 00608CE0 (Ghidra, non-matching)
// GLOBAL DAT_00608d08 undefined4

undefined4 func_00608D08(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00608d08);
  if (puVar1 != (undefined4 *)0x0) {
    return func_0035D078(puVar1,param_1);
  }
  return 0;
}

