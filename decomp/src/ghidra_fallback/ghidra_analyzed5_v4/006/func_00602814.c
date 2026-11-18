#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0012507C(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00602814;

// USA 00602814 <- EU 006027EC (Ghidra, non-matching)
// GLOBAL DAT_00602814 undefined4

undefined4 func_00602814(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00602814);
  if (puVar1 != (undefined4 *)0x0) {
    return func_0012507C(puVar1,param_1);
  }
  return 0;
}

