#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0013696C(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00602a1c;

// USA 00602A1C <- EU 006029F4 (Ghidra, non-matching)
// GLOBAL DAT_00602a1c undefined4

undefined4 func_00602A1C(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00602a1c);
  if (puVar1 != (undefined4 *)0x0) {
    return func_0013696C(puVar1,param_1);
  }
  return 0;
}

