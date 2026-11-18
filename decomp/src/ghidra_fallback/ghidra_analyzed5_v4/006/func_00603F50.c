#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_001C9640(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00603f50;

// USA 00603F50 <- EU 00603F28 (Ghidra, non-matching)
// GLOBAL DAT_00603f50 undefined4

undefined4 func_00603F50(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00603f50);
  if (puVar1 != (undefined4 *)0x0) {
    return func_001C9640(puVar1,param_1);
  }
  return 0;
}

