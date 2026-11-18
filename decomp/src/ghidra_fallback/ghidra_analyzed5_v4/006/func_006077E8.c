#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00304C64(undefined4 *param_1,uint *param_2);

// USA 006077E8 <- EU 006077C0 (Ghidra, non-matching)

undefined4 func_006077E8(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(0x520);
  if (puVar1 != (undefined4 *)0x0) {
    return func_00304C64(puVar1,param_1);
  }
  return 0;
}

