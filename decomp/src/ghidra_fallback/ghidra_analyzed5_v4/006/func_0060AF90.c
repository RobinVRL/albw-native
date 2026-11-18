#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_004F3DBC(undefined4 *param_1,uint *param_2);

// USA 0060AF90 <- EU 0060AF68 (Ghidra, non-matching)

undefined4 func_0060AF90(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(0x960);
  if (puVar1 != (undefined4 *)0x0) {
    return func_004F3DBC(puVar1,param_1);
  }
  return 0;
}

