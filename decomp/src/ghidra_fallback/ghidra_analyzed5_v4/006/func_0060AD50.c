#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_004DFBCC(undefined4 *param_1,uint *param_2);

// USA 0060AD50 <- EU 0060AD28 (Ghidra, non-matching)

undefined4 func_0060AD50(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(0x9f0);
  if (puVar1 != (undefined4 *)0x0) {
    return func_004DFBCC(puVar1,param_1);
  }
  return 0;
}

