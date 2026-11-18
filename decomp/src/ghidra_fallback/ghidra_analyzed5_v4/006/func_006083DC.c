#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_003319E4(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_006083dc;

// USA 006083DC <- EU 006083B4 (Ghidra, non-matching)
// GLOBAL DAT_006083dc undefined4

undefined4 func_006083DC(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_006083dc);
  if (puVar1 != (undefined4 *)0x0) {
    return func_003319E4(puVar1,param_1);
  }
  return 0;
}

