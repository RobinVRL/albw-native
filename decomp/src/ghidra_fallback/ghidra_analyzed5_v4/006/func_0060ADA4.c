#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_004E3780(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_0060ada4;

// USA 0060ADA4 <- EU 0060AD7C (Ghidra, non-matching)
// GLOBAL DAT_0060ada4 undefined4

undefined4 func_0060ADA4(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_0060ada4);
  if (puVar1 != (undefined4 *)0x0) {
    return func_004E3780(puVar1,param_1);
  }
  return 0;
}

