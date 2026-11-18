#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00376068(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_006092e8;

// USA 006092E8 <- EU 006092C0 (Ghidra, non-matching)
// GLOBAL DAT_006092e8 undefined4

undefined4 func_006092E8(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_006092e8);
  if (puVar1 != (undefined4 *)0x0) {
    return func_00376068(puVar1,param_1);
  }
  return 0;
}

