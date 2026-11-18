#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_002C44E8(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_006069e4;

// USA 006069E4 <- EU 006069BC (Ghidra, non-matching)
// GLOBAL DAT_006069e4 undefined4

undefined4 func_006069E4(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_006069e4);
  if (puVar1 != (undefined4 *)0x0) {
    return func_002C44E8(puVar1,param_1);
  }
  return 0;
}

