#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_002D0B54(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_0060729c;

// USA 0060729C <- EU 00607274 (Ghidra, non-matching)
// GLOBAL DAT_0060729c undefined4

undefined4 func_0060729C(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_0060729c);
  if (puVar1 != (undefined4 *)0x0) {
    return func_002D0B54(puVar1,param_1);
  }
  return 0;
}

