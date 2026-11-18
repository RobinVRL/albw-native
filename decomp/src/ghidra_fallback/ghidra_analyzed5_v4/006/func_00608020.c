#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00323864(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00608020;

// USA 00608020 <- EU 00607FF8 (Ghidra, non-matching)
// GLOBAL DAT_00608020 undefined4

undefined4 func_00608020(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00608020);
  if (puVar1 != (undefined4 *)0x0) {
    return func_00323864(puVar1,param_1);
  }
  return 0;
}

