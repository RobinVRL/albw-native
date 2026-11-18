#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_001CA830(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_006040d0;

// USA 006040D0 <- EU 006040A8 (Ghidra, non-matching)
// GLOBAL DAT_006040d0 undefined4

undefined4 func_006040D0(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_006040d0);
  if (puVar1 != (undefined4 *)0x0) {
    return func_001CA830(puVar1,param_1);
  }
  return 0;
}

