#include "ghidra_types.h"

extern undefined4 DAT_0034ca74;
extern undefined4 DAT_0034ca78;

// USA 0034CA20 <- EU 0034C9FC (Ghidra, non-matching)
// GLOBAL DAT_0034ca74 undefined4
// GLOBAL DAT_0034ca78 undefined4

undefined4 * func_0034CA20(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = DAT_0034ca74;
  param_1[1] = 0;
  param_1[2] = uVar1;
  param_1[3] = uVar1;
  param_1[4] = uVar1;
  param_1[5] = uVar1;
  param_1[6] = uVar1;
  param_1[7] = uVar1;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)((int)param_1 + 0x21) = 0x1f;
  *(undefined1 *)((int)param_1 + 0x22) = 0xff;
  *(undefined1 *)((int)param_1 + 0x23) = 0;
  param_1[9] = uVar1;
  param_1[10] = uVar1;
  param_1[0xb] = uVar1;
  uVar2 = DAT_0034ca78;
  *(undefined2 *)(param_1 + 0xc) = 0;
  *(undefined2 *)((int)param_1 + 0x32) = 0xffff;
  param_1[0xd] = uVar2;
  *param_1 = 0;
  param_1[0xe] = 0;
  param_1[0xf] = uVar1;
  param_1[0x10] = uVar1;
  param_1[0x11] = uVar1;
  return param_1;
}

