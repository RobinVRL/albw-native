#include "ghidra_types.h"

extern int func_002C3980(undefined4 *param_1,uint param_2);
extern undefined4 DAT_00388000;

// USA 00388008 <- EU 00387FE4 (Ghidra, non-matching)
// GLOBAL DAT_00388000 undefined4

undefined4 * func_00388008(undefined4 *param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = func_002C3980(param_1,param_2);
  uVar1 = DAT_00388000;
  puVar2[0x2a] = 0;
  *puVar2 = uVar1;
  return puVar2;
}

