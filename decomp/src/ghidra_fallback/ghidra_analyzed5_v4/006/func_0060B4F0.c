#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00511624(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_0060b4f0;

// USA 0060B4F0 <- EU 0060B4C8 (Ghidra, non-matching)
// GLOBAL DAT_0060b4f0 undefined4

undefined4 func_0060B4F0(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_0060b4f0);
  if (puVar1 != (undefined4 *)0x0) {
    return func_00511624(puVar1,param_1);
  }
  return 0;
}

