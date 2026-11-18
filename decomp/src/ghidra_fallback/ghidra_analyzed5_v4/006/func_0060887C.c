#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0033A340(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_0060887c;

// USA 0060887C <- EU 00608854 (Ghidra, non-matching)
// GLOBAL DAT_0060887c undefined4

undefined4 func_0060887C(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_0060887c);
  if (puVar1 != (undefined4 *)0x0) {
    return func_0033A340(puVar1,param_1);
  }
  return 0;
}

