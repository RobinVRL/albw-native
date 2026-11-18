#include "ghidra_types.h"

extern int func_001164F8(undefined4 *param_1,uint param_2,undefined4 param_3);

// USA 001164A8 <- EU 001164A8 (Ghidra, non-matching)

undefined4 * func_001164A8(undefined4 *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = param_2 & 0xff | (param_2 & 0xff) << 8;
  func_001164F8(param_1,param_3,uVar1 | uVar1 << 0x10);
  return param_1;
}

