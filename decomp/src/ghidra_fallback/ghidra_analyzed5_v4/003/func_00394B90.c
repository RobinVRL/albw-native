#include "ghidra_types.h"

extern int func_004A1520();
extern undefined4 DAT_00394b98;
extern int DAT_00394b9c;

// USA 00394B90 <- EU 00394B6C (Ghidra, non-matching)
// GLOBAL DAT_00394b98 undefined4
// GLOBAL DAT_00394b9c int

undefined4 * func_00394B90(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_00394b9c;
  *param_1 = DAT_00394b98;
  if (param_1 == *(undefined4 **)(iVar1 + 8)) {
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 4) = 0;
  }
  puVar2 = func_004A1520(param_1);
  return puVar2;
}

