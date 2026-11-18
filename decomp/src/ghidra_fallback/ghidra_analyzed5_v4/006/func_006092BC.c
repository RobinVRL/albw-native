#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0037591C(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_006092bc;

// USA 006092BC <- EU 00609294 (Ghidra, non-matching)
// GLOBAL DAT_006092bc undefined4

undefined4 func_006092BC(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_006092bc);
  if (puVar1 != (undefined4 *)0x0) {
    return func_0037591C(puVar1,param_1);
  }
  return 0;
}

