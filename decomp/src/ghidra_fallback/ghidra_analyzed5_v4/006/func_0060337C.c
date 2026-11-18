#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00175B08(undefined4 *param_1,uint *param_2);

// USA 0060337C <- EU 00603354 (Ghidra, non-matching)

undefined4 func_0060337C(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(0x4b0);
  if (puVar1 != (undefined4 *)0x0) {
    return func_00175B08(puVar1,param_1);
  }
  return 0;
}

