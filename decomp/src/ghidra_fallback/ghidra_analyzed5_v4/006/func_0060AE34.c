#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_004E7B14(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_0060ae34;

// USA 0060AE34 <- EU 0060AE0C (Ghidra, non-matching)
// GLOBAL DAT_0060ae34 undefined4

undefined4 func_0060AE34(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_0060ae34);
  if (puVar1 != (undefined4 *)0x0) {
    return func_004E7B14(puVar1,param_1);
  }
  return 0;
}

