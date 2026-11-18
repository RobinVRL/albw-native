#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_004D1114(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_0060a71c;

// USA 0060A71C <- EU 0060A6F4 (Ghidra, non-matching)
// GLOBAL DAT_0060a71c undefined4

undefined4 func_0060A71C(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_0060a71c);
  if (puVar1 != (undefined4 *)0x0) {
    return func_004D1114(puVar1,param_1);
  }
  return 0;
}

