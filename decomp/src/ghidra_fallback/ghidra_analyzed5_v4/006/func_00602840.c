#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0012665C(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00602840;

// USA 00602840 <- EU 00602818 (Ghidra, non-matching)
// GLOBAL DAT_00602840 undefined4

undefined4 func_00602840(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00602840);
  if (puVar1 != (undefined4 *)0x0) {
    return func_0012665C(puVar1,param_1);
  }
  return 0;
}

