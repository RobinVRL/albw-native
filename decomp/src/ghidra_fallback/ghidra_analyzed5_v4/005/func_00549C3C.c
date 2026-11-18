#include "ghidra_types.h"

extern undefined4 DAT_00549c34;
extern char s_YukaByun_00549c28[];

// USA 00549C3C <- EU 00549C14 (Ghidra, non-matching)
// GLOBAL DAT_00549c34 undefined4
// GLOBAL s_YukaByun_00549c28 string

undefined4 * func_00549C3C(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00549c34;
  param_1[1] = s_YukaByun_00549c28;
  *param_1 = uVar1;
  return param_1;
}

