#include "ghidra_types.h"

extern undefined4 DAT_0055070c;
extern char s_YukaByunGanon_005506fc[];

// USA 00550710 <- EU 005506E8 (Ghidra, non-matching)
// GLOBAL DAT_0055070c undefined4
// GLOBAL s_YukaByunGanon_005506fc string

undefined4 * func_00550710(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0055070c;
  param_1[1] = s_YukaByunGanon_005506fc;
  *param_1 = uVar1;
  return param_1;
}

