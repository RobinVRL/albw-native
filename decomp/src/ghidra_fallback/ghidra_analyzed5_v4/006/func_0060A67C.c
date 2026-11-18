#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_004CC35C(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_0060a67c;

// USA 0060A67C <- EU 0060A654 (Ghidra, non-matching)
// GLOBAL DAT_0060a67c undefined4

undefined4 func_0060A67C(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_0060a67c);
  if (puVar1 != (undefined4 *)0x0) {
    return func_004CC35C(puVar1,param_1);
  }
  return 0;
}

