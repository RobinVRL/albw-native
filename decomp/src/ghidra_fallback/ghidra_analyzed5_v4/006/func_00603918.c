#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_001A37A0(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00603918;

// USA 00603918 <- EU 006038F0 (Ghidra, non-matching)
// GLOBAL DAT_00603918 undefined4

undefined4 func_00603918(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00603918);
  if (puVar1 != (undefined4 *)0x0) {
    return func_001A37A0(puVar1,param_1);
  }
  return 0;
}

