#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_001DEA54(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_0060456c;

// USA 0060456C <- EU 00604544 (Ghidra, non-matching)
// GLOBAL DAT_0060456c undefined4

undefined4 func_0060456C(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_0060456c);
  if (puVar1 != (undefined4 *)0x0) {
    return func_001DEA54(puVar1,param_1);
  }
  return 0;
}

