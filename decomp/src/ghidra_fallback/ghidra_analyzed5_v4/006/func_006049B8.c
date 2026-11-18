#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00218EEC(undefined4 *param_1,uint *param_2);

// USA 006049B8 <- EU 00604990 (Ghidra, non-matching)

undefined4 func_006049B8(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(0x900);
  if (puVar1 != (undefined4 *)0x0) {
    return func_00218EEC(puVar1,param_1);
  }
  return 0;
}

