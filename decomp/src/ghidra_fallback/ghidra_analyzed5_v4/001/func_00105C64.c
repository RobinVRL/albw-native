#include "ghidra_types.h"

extern int func_001097FC(undefined4 *param_1,byte *param_2);
extern undefined4 DAT_00105c78;

// USA 00105C64 <- EU 00105C64 (Ghidra, non-matching)
// GLOBAL DAT_00105c78 undefined4

undefined4 * func_00105C64(undefined4 *param_1,byte *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = func_001097FC(param_1,param_2);
  *puVar1 = DAT_00105c78;
  return puVar1;
}

