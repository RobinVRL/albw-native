#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0050D6C0(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_0060b360;

// USA 0060B360 <- EU 0060B338 (Ghidra, non-matching)
// GLOBAL DAT_0060b360 undefined4

undefined4 func_0060B360(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_0060b360);
  if (puVar1 != (undefined4 *)0x0) {
    return func_0050D6C0(puVar1,param_1);
  }
  return 0;
}

