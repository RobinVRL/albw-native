#include "ghidra_types.h"

extern undefined4 *DAT_0010be68;
extern undefined4 DAT_0010be6c;

// USA 0010BE44 <- EU 0010BE44 (Ghidra, non-matching)
// GLOBAL DAT_0010be68 undefined4 *
// GLOBAL DAT_0010be6c undefined4

undefined4 * func_0010BE44(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_0010be68;
  param_1[1] = 0;
  uVar2 = puVar1[1];
  param_1[2] = *puVar1;
  param_1[3] = uVar2;
  *param_1 = DAT_0010be6c;
  return param_1;
}

