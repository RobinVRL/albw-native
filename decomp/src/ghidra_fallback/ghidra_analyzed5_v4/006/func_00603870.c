#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0019BE30(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00603870;

// USA 00603870 <- EU 00603848 (Ghidra, non-matching)
// GLOBAL DAT_00603870 undefined4

undefined4 func_00603870(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00603870);
  if (puVar1 != (undefined4 *)0x0) {
    return func_0019BE30(puVar1,param_1);
  }
  return 0;
}

