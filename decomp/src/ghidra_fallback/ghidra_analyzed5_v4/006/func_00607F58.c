#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0031A96C(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00607f58;

// USA 00607F58 <- EU 00607F30 (Ghidra, non-matching)
// GLOBAL DAT_00607f58 undefined4

undefined4 func_00607F58(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00607f58);
  if (puVar1 != (undefined4 *)0x0) {
    return func_0031A96C(puVar1,param_1);
  }
  return 0;
}

