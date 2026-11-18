#include "ghidra_types.h"

extern undefined4 DAT_0010c88c;
extern undefined4 DAT_0010c890;

// USA 0010C864 <- EU 0010C864 (Ghidra, non-matching)
// GLOBAL DAT_0010c88c undefined4
// GLOBAL DAT_0010c890 undefined4

undefined4 * func_0010C864(undefined4 *param_1,float fparam_0)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0010c88c;
  *param_1 = DAT_0010c890;
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[1] = ALBW_AS_U32(fparam_0);
  param_1[2] = ALBW_AS_U32(fparam_0);
  return param_1;
}

