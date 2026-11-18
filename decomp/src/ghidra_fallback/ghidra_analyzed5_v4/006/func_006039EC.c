#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_001AB038(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_006039ec;

// USA 006039EC <- EU 006039C4 (Ghidra, non-matching)
// GLOBAL DAT_006039ec undefined4

undefined4 func_006039EC(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_006039ec);
  if (puVar1 != (undefined4 *)0x0) {
    return func_001AB038(puVar1,param_1);
  }
  return 0;
}

