#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0013BF0C(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00602e08;

// USA 00602E08 <- EU 00602DE0 (Ghidra, non-matching)
// GLOBAL DAT_00602e08 undefined4

undefined4 func_00602E08(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00602e08);
  if (puVar1 != (undefined4 *)0x0) {
    return func_0013BF0C(puVar1,param_1);
  }
  return 0;
}

