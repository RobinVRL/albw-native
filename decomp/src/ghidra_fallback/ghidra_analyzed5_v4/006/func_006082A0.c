#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_003306C0(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_006082a0;

// USA 006082A0 <- EU 00608278 (Ghidra, non-matching)
// GLOBAL DAT_006082a0 undefined4

undefined4 func_006082A0(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_006082a0);
  if (puVar1 != (undefined4 *)0x0) {
    return func_003306C0(puVar1,param_1);
  }
  return 0;
}

