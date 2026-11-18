#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00337E5C(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00608680;

// USA 00608680 <- EU 00608658 (Ghidra, non-matching)
// GLOBAL DAT_00608680 undefined4

undefined4 func_00608680(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00608680);
  if (puVar1 != (undefined4 *)0x0) {
    return func_00337E5C(puVar1,param_1);
  }
  return 0;
}

