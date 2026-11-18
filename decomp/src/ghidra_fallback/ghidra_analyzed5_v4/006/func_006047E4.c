#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0020ECD0(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_006047e4;

// USA 006047E4 <- EU 006047BC (Ghidra, non-matching)
// GLOBAL DAT_006047e4 undefined4

undefined4 func_006047E4(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_006047e4);
  if (puVar1 != (undefined4 *)0x0) {
    return func_0020ECD0(puVar1,param_1);
  }
  return 0;
}

