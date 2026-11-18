#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0029E9F0(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_006066d4;

// USA 006066D4 <- EU 006066AC (Ghidra, non-matching)
// GLOBAL DAT_006066d4 undefined4

undefined4 func_006066D4(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_006066d4);
  if (puVar1 != (undefined4 *)0x0) {
    return func_0029E9F0(puVar1,param_1);
  }
  return 0;
}

