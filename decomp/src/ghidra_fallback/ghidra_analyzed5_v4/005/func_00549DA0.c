#include "ghidra_types.h"

extern undefined4 DAT_00549d9c;
extern char s_YukaByunSand_00549d8c[];

// USA 00549DA0 <- EU 00549D78 (Ghidra, non-matching)
// GLOBAL DAT_00549d9c undefined4
// GLOBAL s_YukaByunSand_00549d8c string

undefined4 * func_00549DA0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00549d9c;
  param_1[1] = s_YukaByunSand_00549d8c;
  *param_1 = uVar1;
  return param_1;
}

