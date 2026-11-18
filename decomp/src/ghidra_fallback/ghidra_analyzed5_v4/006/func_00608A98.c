#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00356E8C(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00608a98;

// USA 00608A98 <- EU 00608A70 (Ghidra, non-matching)
// GLOBAL DAT_00608a98 undefined4

undefined4 func_00608A98(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00608a98);
  if (puVar1 != (undefined4 *)0x0) {
    return func_00356E8C(puVar1,param_1);
  }
  return 0;
}

