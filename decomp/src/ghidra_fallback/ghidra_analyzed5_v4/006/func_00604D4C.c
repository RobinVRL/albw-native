#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0023D784(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00604d4c;

// USA 00604D4C <- EU 00604D24 (Ghidra, non-matching)
// GLOBAL DAT_00604d4c undefined4

undefined4 func_00604D4C(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00604d4c);
  if (puVar1 != (undefined4 *)0x0) {
    return func_0023D784(puVar1,param_1);
  }
  return 0;
}

