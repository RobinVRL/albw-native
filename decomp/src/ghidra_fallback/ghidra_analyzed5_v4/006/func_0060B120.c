#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00502204(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_0060b120;

// USA 0060B120 <- EU 0060B0F8 (Ghidra, non-matching)
// GLOBAL DAT_0060b120 undefined4

undefined4 func_0060B120(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_0060b120);
  if (puVar1 != (undefined4 *)0x0) {
    return func_00502204(puVar1,param_1);
  }
  return 0;
}

