#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0039CD78(undefined4 *param_1,uint *param_2);

// USA 00609E74 <- EU 00609E4C (Ghidra, non-matching)

undefined4 func_00609E74(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(0x4c0);
  if (puVar1 != (undefined4 *)0x0) {
    return func_0039CD78(puVar1,param_1);
  }
  return 0;
}

