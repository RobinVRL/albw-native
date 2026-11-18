#include "ghidra_types.h"

extern undefined4 *DAT_0068a690;
extern undefined4 DAT_0068a694;

// USA 0068A694 <- EU 0068A66C (Ghidra, non-matching)
// GLOBAL DAT_0068a690 undefined4 *
// GLOBAL DAT_0068a694 undefined4

undefined4 * func_0068A694(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_0068a690;
  param_1[1] = 0;
  uVar2 = puVar1[1];
  param_1[2] = *puVar1;
  param_1[3] = uVar2;
  *param_1 = DAT_0068a694;
  return param_1;
}

