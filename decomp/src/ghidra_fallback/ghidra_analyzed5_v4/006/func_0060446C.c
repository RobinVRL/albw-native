#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_001CF3D4(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_0060446c;

// USA 0060446C <- EU 00604444 (Ghidra, non-matching)
// GLOBAL DAT_0060446c undefined4

undefined4 func_0060446C(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_0060446c);
  if (puVar1 != (undefined4 *)0x0) {
    return func_001CF3D4(puVar1,param_1);
  }
  return 0;
}

