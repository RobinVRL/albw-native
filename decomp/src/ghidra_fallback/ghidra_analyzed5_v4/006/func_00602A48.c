#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00137458(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00602a48;

// USA 00602A48 <- EU 00602A20 (Ghidra, non-matching)
// GLOBAL DAT_00602a48 undefined4

undefined4 func_00602A48(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00602a48);
  if (puVar1 != (undefined4 *)0x0) {
    return func_00137458(puVar1,param_1);
  }
  return 0;
}

