#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_001C0428(undefined4 *param_1,uint *param_2);

// USA 00603D3C <- EU 00603D14 (Ghidra, non-matching)

undefined4 func_00603D3C(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(0x4d0);
  if (puVar1 != (undefined4 *)0x0) {
    return func_001C0428(puVar1,param_1);
  }
  return 0;
}

