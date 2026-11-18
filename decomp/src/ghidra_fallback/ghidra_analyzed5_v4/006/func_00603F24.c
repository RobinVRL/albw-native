#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_001C811C(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00603f24;

// USA 00603F24 <- EU 00603EFC (Ghidra, non-matching)
// GLOBAL DAT_00603f24 undefined4

undefined4 func_00603F24(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00603f24);
  if (puVar1 != (undefined4 *)0x0) {
    return func_001C811C(puVar1,param_1);
  }
  return 0;
}

