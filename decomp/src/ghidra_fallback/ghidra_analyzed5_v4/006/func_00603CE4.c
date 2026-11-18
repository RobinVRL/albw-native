#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_001BED8C(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00603ce4;

// USA 00603CE4 <- EU 00603CBC (Ghidra, non-matching)
// GLOBAL DAT_00603ce4 undefined4

undefined4 func_00603CE4(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00603ce4);
  if (puVar1 != (undefined4 *)0x0) {
    return func_001BED8C(puVar1,param_1);
  }
  return 0;
}

