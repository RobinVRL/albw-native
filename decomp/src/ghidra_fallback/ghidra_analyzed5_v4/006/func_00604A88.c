#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_002239F8(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00604a88;

// USA 00604A88 <- EU 00604A60 (Ghidra, non-matching)
// GLOBAL DAT_00604a88 undefined4

undefined4 func_00604A88(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00604a88);
  if (puVar1 != (undefined4 *)0x0) {
    return func_002239F8(puVar1,param_1);
  }
  return 0;
}

