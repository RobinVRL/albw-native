#include "ghidra_types.h"

extern undefined4 DAT_00549f00;
extern char s_YukaPeraDark_00549ef0[];

// USA 00549F04 <- EU 00549EDC (Ghidra, non-matching)
// GLOBAL DAT_00549f00 undefined4
// GLOBAL s_YukaPeraDark_00549ef0 string

undefined4 * func_00549F04(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00549f00;
  param_1[1] = s_YukaPeraDark_00549ef0;
  *param_1 = uVar1;
  return param_1;
}

