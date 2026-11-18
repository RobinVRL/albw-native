#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0039E924(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00609e9c;

// USA 00609E9C <- EU 00609E74 (Ghidra, non-matching)
// GLOBAL DAT_00609e9c undefined4

undefined4 func_00609E9C(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00609e9c);
  if (puVar1 != (undefined4 *)0x0) {
    return func_0039E924(puVar1,param_1);
  }
  return 0;
}

