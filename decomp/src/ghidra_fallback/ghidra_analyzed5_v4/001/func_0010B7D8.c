#include "ghidra_types.h"

extern undefined4 DAT_0010b828;
extern undefined4 DAT_0010b82c;

// USA 0010B7D8 <- EU 0010B7D8 (Ghidra, non-matching)
// GLOBAL DAT_0010b828 undefined4
// GLOBAL DAT_0010b82c undefined4

undefined4 * func_0010B7D8(undefined4 *param_1,undefined1 param_2,float fparam_0)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0010b828;
  param_1[1] = ALBW_AS_U32(fparam_0);
  param_1[2] = ALBW_AS_U32(fparam_0);
  param_1[3] = uVar1;
  uVar1 = DAT_0010b82c;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 6) = param_2;
  param_1[7] = 0;
  param_1[9] = param_1 + 8;
  param_1[10] = 0;
  param_1[8] = param_1 + 8;
  param_1[0xc] = 0;
  param_1[0xb] = 0x30;
  param_1[0xd] = 0;
  return param_1;
}

