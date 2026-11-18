#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00335DA4(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_0060862c;

// USA 0060862C <- EU 00608604 (Ghidra, non-matching)
// GLOBAL DAT_0060862c undefined4

undefined4 func_0060862C(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_0060862c);
  if (puVar1 != (undefined4 *)0x0) {
    return func_00335DA4(puVar1,param_1);
  }
  return 0;
}

