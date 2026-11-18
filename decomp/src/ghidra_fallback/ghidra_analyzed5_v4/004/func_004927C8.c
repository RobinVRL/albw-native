#include "ghidra_types.h"

extern undefined4 DAT_00492848;
extern undefined1 *DAT_0049284c;
extern undefined4 *DAT_00492850;
extern undefined4 *DAT_00492854;
extern undefined4 DAT_00492858;
extern float DAT_0049285c;

// USA 004927C8 <- EU 004927A0 (Ghidra, non-matching)
// GLOBAL DAT_00492848 undefined4
// GLOBAL DAT_0049284c undefined1 *
// GLOBAL DAT_00492850 undefined4 *
// GLOBAL DAT_00492854 undefined4 *
// GLOBAL DAT_00492858 undefined4
// GLOBAL DAT_0049285c float

undefined4 func_004927C8(undefined4 *param_1,int param_2,float fparam_0,float fparam_1)

{
  float fVar1;
  
  *param_1 = DAT_00492848;
  *(undefined1 *)(param_1 + 1) = 1;
  *(undefined1 *)((int)param_1 + 5) = 1;
  *(undefined1 *)(param_1 + 0x22) = *DAT_0049284c;
  param_1[0x23] = *DAT_00492850;
  param_1[0x24] = *DAT_00492854;
  *param_1 = DAT_00492858;
  param_1[0x25] = ALBW_AS_U32(fparam_0);
  param_1[0x26] = ALBW_AS_U32(fparam_1);
  fVar1 = DAT_0049285c;
  param_1[0x27] = ALBW_AS_U32((*(float *)(param_2 + 0x10) - *(float *)(param_2 + 8)) * DAT_0049285c);
  param_1[0x28] = ALBW_AS_U32(-((*(float *)(param_2 + 0x10) - *(float *)(param_2 + 8)) * fVar1));
  param_1[0x29] = ALBW_AS_U32(-((*(float *)(param_2 + 0xc) - *(float *)(param_2 + 4)) * fVar1));
  param_1[0x2a] = ALBW_AS_U32((*(float *)(param_2 + 0xc) - *(float *)(param_2 + 4)) * fVar1);
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_2 + 0x14);
  return (undefined4)param_1;
}

