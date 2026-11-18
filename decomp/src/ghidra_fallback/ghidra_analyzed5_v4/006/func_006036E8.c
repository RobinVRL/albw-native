#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00192390(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_006036e8;

// USA 006036E8 <- EU 006036C0 (Ghidra, non-matching)
// GLOBAL DAT_006036e8 undefined4

undefined4 func_006036E8(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_006036e8);
  if (puVar1 != (undefined4 *)0x0) {
    return func_00192390(puVar1,param_1);
  }
  return 0;
}

