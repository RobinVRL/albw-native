#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0030372C(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_006077bc;

// USA 006077BC <- EU 00607794 (Ghidra, non-matching)
// GLOBAL DAT_006077bc undefined4

undefined4 func_006077BC(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_006077bc);
  if (puVar1 != (undefined4 *)0x0) {
    return func_0030372C(puVar1,param_1);
  }
  return 0;
}

