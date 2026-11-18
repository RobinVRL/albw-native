#include "ghidra_types.h"

extern undefined4 DAT_00549cbc;
extern char s_YukaByunHera_00549cac[];

// USA 00549CC0 <- EU 00549C98 (Ghidra, non-matching)
// GLOBAL DAT_00549cbc undefined4
// GLOBAL s_YukaByunHera_00549cac string

undefined4 * func_00549CC0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00549cbc;
  param_1[1] = s_YukaByunHera_00549cac;
  *param_1 = uVar1;
  return param_1;
}

