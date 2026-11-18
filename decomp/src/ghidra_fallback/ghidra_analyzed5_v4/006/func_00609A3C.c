#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_003922C0(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00609a3c;

// USA 00609A3C <- EU 00609A14 (Ghidra, non-matching)
// GLOBAL DAT_00609a3c undefined4

undefined4 func_00609A3C(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00609a3c);
  if (puVar1 != (undefined4 *)0x0) {
    return func_003922C0(puVar1,param_1);
  }
  return 0;
}

