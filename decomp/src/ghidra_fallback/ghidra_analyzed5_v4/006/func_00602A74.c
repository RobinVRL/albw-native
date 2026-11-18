#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00137AD0(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00602a74;

// USA 00602A74 <- EU 00602A4C (Ghidra, non-matching)
// GLOBAL DAT_00602a74 undefined4

undefined4 func_00602A74(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00602a74);
  if (puVar1 != (undefined4 *)0x0) {
    return func_00137AD0(puVar1,param_1);
  }
  return 0;
}

