#include "ghidra_types.h"

extern float func_005909A0(float fparam_0);
extern float func_0059163C(float fparam_0);
extern float func_00591804(float fparam_0);
extern undefined4 DAT_004985e0;
extern undefined1 *DAT_004985e4;
extern undefined4 *DAT_004985e8;
extern undefined4 *DAT_004985ec;
extern undefined4 DAT_004985f0;
extern undefined4 *DAT_004985f4;
extern float DAT_004985f8;

// USA 00498564 <- EU 0049853C (Ghidra, non-matching)
// GLOBAL DAT_004985e0 undefined4
// GLOBAL DAT_004985e4 undefined1 *
// GLOBAL DAT_004985e8 undefined4 *
// GLOBAL DAT_004985ec undefined4 *
// GLOBAL DAT_004985f0 undefined4
// GLOBAL DAT_004985f4 undefined4 *
// GLOBAL DAT_004985f8 float

undefined4 *
func_00498564(undefined4 *param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  float fVar4;
  float fparam_0_00;
  
  *param_1 = DAT_004985e0;
  puVar1 = DAT_004985e4;
  *(undefined1 *)(param_1 + 1) = 1;
  *(undefined1 *)((int)param_1 + 5) = 1;
  puVar2 = DAT_004985f4;
  *(undefined1 *)(param_1 + 0x22) = *puVar1;
  param_1[0x23] = *DAT_004985e8;
  param_1[0x24] = *DAT_004985ec;
  *param_1 = DAT_004985f0;
  param_1[0x2b] = ALBW_AS_U32(fparam_3);
  param_1[0x25] = ALBW_AS_U32(fparam_0);
  param_1[0x26] = ALBW_AS_U32(fparam_1);
  uVar3 = puVar2[1];
  fparam_0_00 = fparam_2 * DAT_004985f8;
  param_1[0x2c] = *puVar2;
  param_1[0x2d] = uVar3;
  param_1[0x27] = ALBW_AS_U32(fparam_2);
  fVar4 = func_0059163C(fparam_0_00);
  param_1[0x28] = ALBW_AS_U32(fVar4);
  fVar4 = func_005909A0(fparam_0_00);
  param_1[0x29] = ALBW_AS_U32(fVar4);
  fVar4 = func_00591804(fparam_0_00);
  param_1[0x2a] = ALBW_AS_U32(fVar4);
  *(undefined1 *)(param_1 + 1) = 1;
  return param_1;
}

