#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_001CAEE8(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_006040fc;

// USA 006040FC <- EU 006040D4 (Ghidra, non-matching)
// GLOBAL DAT_006040fc undefined4

undefined4 func_006040FC(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_006040fc);
  if (puVar1 != (undefined4 *)0x0) {
    return func_001CAEE8(puVar1,param_1);
  }
  return 0;
}

