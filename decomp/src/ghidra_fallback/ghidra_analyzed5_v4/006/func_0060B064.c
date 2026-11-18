#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_004FF57C(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_0060b064;

// USA 0060B064 <- EU 0060B03C (Ghidra, non-matching)
// GLOBAL DAT_0060b064 undefined4

undefined4 func_0060B064(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_0060b064);
  if (puVar1 != (undefined4 *)0x0) {
    return func_004FF57C(puVar1,param_1);
  }
  return 0;
}

