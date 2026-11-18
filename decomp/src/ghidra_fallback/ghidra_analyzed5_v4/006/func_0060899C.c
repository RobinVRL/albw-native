#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0033FA2C(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_0060899c;

// USA 0060899C <- EU 00608974 (Ghidra, non-matching)
// GLOBAL DAT_0060899c undefined4

undefined4 func_0060899C(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_0060899c);
  if (puVar1 != (undefined4 *)0x0) {
    return func_0033FA2C(puVar1,param_1);
  }
  return 0;
}

