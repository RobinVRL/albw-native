#include "ghidra_types.h"

extern undefined4 DAT_00549e78;
extern char s_YukaPera_00549e6c[];

// USA 00549E80 <- EU 00549E58 (Ghidra, non-matching)
// GLOBAL DAT_00549e78 undefined4
// GLOBAL s_YukaPera_00549e6c string

undefined4 * func_00549E80(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00549e78;
  param_1[1] = s_YukaPera_00549e6c;
  *param_1 = uVar1;
  return param_1;
}

