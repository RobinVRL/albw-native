#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00250DD4(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_006055f0;

// USA 006055F0 <- EU 006055C8 (Ghidra, non-matching)
// GLOBAL DAT_006055f0 undefined4

undefined4 func_006055F0(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_006055f0);
  if (puVar1 != (undefined4 *)0x0) {
    return func_00250DD4(puVar1,param_1);
  }
  return 0;
}

