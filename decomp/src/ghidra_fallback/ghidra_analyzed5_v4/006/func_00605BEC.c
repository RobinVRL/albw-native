#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0027CAD8(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00605bec;

// USA 00605BEC <- EU 00605BC4 (Ghidra, non-matching)
// GLOBAL DAT_00605bec undefined4

undefined4 func_00605BEC(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00605bec);
  if (puVar1 != (undefined4 *)0x0) {
    return func_0027CAD8(puVar1,param_1);
  }
  return 0;
}

