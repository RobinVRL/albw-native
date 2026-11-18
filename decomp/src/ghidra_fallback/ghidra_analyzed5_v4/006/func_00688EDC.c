#include "ghidra_types.h"

extern int func_00689A2C(undefined4 *param_1,undefined4 param_2,int param_3);
extern undefined4 DAT_00688ee0;
extern undefined4 DAT_00688ee4;

// USA 00688EDC <- EU 00688EB4 (Ghidra, non-matching)
// GLOBAL DAT_00688ee0 undefined4
// GLOBAL DAT_00688ee4 undefined4

undefined4 * func_00688EDC(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = func_00689A2C(param_1,param_1 + 3,0x1e);
  *(undefined1 *)puVar1[1] = 0;
  *puVar1 = DAT_00688ee4;
  return puVar1;
}

