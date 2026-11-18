#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0050FDAC(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_0060b3e4;

// USA 0060B3E4 <- EU 0060B3BC (Ghidra, non-matching)
// GLOBAL DAT_0060b3e4 undefined4

undefined4 func_0060B3E4(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_0060b3e4);
  if (puVar1 != (undefined4 *)0x0) {
    return func_0050FDAC(puVar1,param_1);
  }
  return 0;
}

