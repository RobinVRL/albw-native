#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0022141C(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00604a5c;

// USA 00604A5C <- EU 00604A34 (Ghidra, non-matching)
// GLOBAL DAT_00604a5c undefined4

undefined4 func_00604A5C(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00604a5c);
  if (puVar1 != (undefined4 *)0x0) {
    return func_0022141C(puVar1,param_1);
  }
  return 0;
}

