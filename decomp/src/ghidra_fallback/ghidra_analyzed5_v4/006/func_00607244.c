#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_002CD968(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00607244;

// USA 00607244 <- EU 0060721C (Ghidra, non-matching)
// GLOBAL DAT_00607244 undefined4

undefined4 func_00607244(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00607244);
  if (puVar1 != (undefined4 *)0x0) {
    return func_002CD968(puVar1,param_1);
  }
  return 0;
}

