#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00185C54(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_006035e8;

// USA 006035E8 <- EU 006035C0 (Ghidra, non-matching)
// GLOBAL DAT_006035e8 undefined4

undefined4 func_006035E8(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_006035e8);
  if (puVar1 != (undefined4 *)0x0) {
    return func_00185C54(puVar1,param_1);
  }
  return 0;
}

