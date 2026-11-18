#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_003717C4(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_0060918c;

// USA 0060918C <- EU 00609164 (Ghidra, non-matching)
// GLOBAL DAT_0060918c undefined4

undefined4 func_0060918C(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_0060918c);
  if (puVar1 != (undefined4 *)0x0) {
    return func_003717C4(puVar1,param_1);
  }
  return 0;
}

