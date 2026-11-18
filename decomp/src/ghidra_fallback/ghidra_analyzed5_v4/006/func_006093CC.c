#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0037A860(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_006093cc;

// USA 006093CC <- EU 006093A4 (Ghidra, non-matching)
// GLOBAL DAT_006093cc undefined4

undefined4 func_006093CC(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_006093cc);
  if (puVar1 != (undefined4 *)0x0) {
    return func_0037A860(puVar1,param_1);
  }
  return 0;
}

