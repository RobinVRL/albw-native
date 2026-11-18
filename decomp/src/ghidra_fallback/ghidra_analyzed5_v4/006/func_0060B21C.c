#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0050761C(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_0060b21c;

// USA 0060B21C <- EU 0060B1F4 (Ghidra, non-matching)
// GLOBAL DAT_0060b21c undefined4

undefined4 func_0060B21C(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_0060b21c);
  if (puVar1 != (undefined4 *)0x0) {
    return func_0050761C(puVar1,param_1);
  }
  return 0;
}

