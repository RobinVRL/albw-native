#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_001C6690(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00603ecc;

// USA 00603ECC <- EU 00603EA4 (Ghidra, non-matching)
// GLOBAL DAT_00603ecc undefined4

undefined4 func_00603ECC(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00603ecc);
  if (puVar1 != (undefined4 *)0x0) {
    return func_001C6690(puVar1,param_1);
  }
  return 0;
}

