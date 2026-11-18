#include "ghidra_types.h"

extern undefined4 *DAT_004f1984;

// USA 004F1998 <- EU 004F1970 (Ghidra, non-matching)
// GLOBAL DAT_004f1984 undefined4 *

undefined4 * func_004F1998(undefined4 *param_1,float fparam_0,float fparam_1,float fparam_2)

{
  undefined4 uVar1;
  
  uVar1 = *DAT_004f1984;
  *param_1 = ALBW_AS_U32(fparam_0);
  param_1[1] = ALBW_AS_U32(fparam_1);
  param_1[2] = ALBW_AS_U32(fparam_2);
  param_1[3] = uVar1;
  return param_1;
}

