#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00367A18(undefined4 *param_1,uint *param_2);

// USA 00608FAC <- EU 00608F84 (Ghidra, non-matching)

undefined4 func_00608FAC(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(0x940);
  if (puVar1 != (undefined4 *)0x0) {
    return func_00367A18(puVar1,param_1);
  }
  return 0;
}

