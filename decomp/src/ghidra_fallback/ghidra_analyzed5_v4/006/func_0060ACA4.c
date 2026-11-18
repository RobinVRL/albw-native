#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_004D9DF8(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_0060aca4;

// USA 0060ACA4 <- EU 0060AC7C (Ghidra, non-matching)
// GLOBAL DAT_0060aca4 undefined4

undefined4 func_0060ACA4(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_0060aca4);
  if (puVar1 != (undefined4 *)0x0) {
    return func_004D9DF8(puVar1,param_1);
  }
  return 0;
}

