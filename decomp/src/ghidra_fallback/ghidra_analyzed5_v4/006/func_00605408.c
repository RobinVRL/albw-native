#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00246A50(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00605408;

// USA 00605408 <- EU 006053E0 (Ghidra, non-matching)
// GLOBAL DAT_00605408 undefined4

undefined4 func_00605408(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00605408);
  if (puVar1 != (undefined4 *)0x0) {
    return func_00246A50(puVar1,param_1);
  }
  return 0;
}

