#include "ghidra_types.h"

extern undefined4 *DAT_00377258;
extern undefined4 DAT_0037725c;
extern undefined4 DAT_00377260;

// USA 00377220 <- EU 003771FC (Ghidra, non-matching)
// GLOBAL DAT_00377258 undefined4 *
// GLOBAL DAT_0037725c undefined4
// GLOBAL DAT_00377260 undefined4

undefined4 *
func_00377220(undefined4 *param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4,
             float fparam_0)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  puVar1 = DAT_00377258;
  param_1[1] = DAT_0037725c;
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  param_1[2] = param_1;
  param_1[3] = uVar2;
  param_1[4] = uVar3;
  uVar2 = DAT_00377260;
  param_1[5] = param_2;
  *param_1 = uVar2;
  param_1[6] = ALBW_AS_U32(fparam_0);
  *(undefined2 *)((int)param_1 + 0x1e) = 0x1f;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = param_3;
  *(undefined1 *)((int)param_1 + 0x31) = param_4;
  *(undefined1 *)((int)param_1 + 0x32) = 0;
  return param_1;
}

