#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0015A578(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_006030fc;

// USA 006030FC <- EU 006030D4 (Ghidra, non-matching)
// GLOBAL DAT_006030fc undefined4

undefined4 func_006030FC(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_006030fc);
  if (puVar1 != (undefined4 *)0x0) {
    return func_0015A578(puVar1,param_1);
  }
  return 0;
}

