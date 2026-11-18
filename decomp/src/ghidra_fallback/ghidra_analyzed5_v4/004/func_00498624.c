#include "ghidra_types.h"

extern float func_005909A0(float fparam_0);
extern float func_0059163C(float fparam_0);
extern float func_00591804(float fparam_0);
extern undefined4 DAT_004986ac;
extern undefined1 *DAT_004986b0;
extern undefined4 *DAT_004986b4;
extern undefined4 *DAT_004986b8;
extern undefined4 DAT_004986bc;
extern undefined4 DAT_004986c0;
extern undefined4 DAT_004986c4;
extern undefined4 DAT_004986c8;
extern undefined4 *DAT_004986cc;
extern undefined4 DAT_004986d0;
extern float DAT_004986d4;

// USA 00498624 <- EU 004985FC (Ghidra, non-matching)
// GLOBAL DAT_004986ac undefined4
// GLOBAL DAT_004986b0 undefined1 *
// GLOBAL DAT_004986b4 undefined4 *
// GLOBAL DAT_004986b8 undefined4 *
// GLOBAL DAT_004986bc undefined4
// GLOBAL DAT_004986c0 undefined4
// GLOBAL DAT_004986c4 undefined4
// GLOBAL DAT_004986c8 undefined4
// GLOBAL DAT_004986cc undefined4 *
// GLOBAL DAT_004986d0 undefined4
// GLOBAL DAT_004986d4 float

undefined4 * func_00498624(undefined4 *param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  
  *param_1 = DAT_004986ac;
  puVar1 = DAT_004986b0;
  *(undefined1 *)(param_1 + 1) = 1;
  *(undefined1 *)((int)param_1 + 5) = 1;
  puVar4 = DAT_004986cc;
  uVar3 = DAT_004986c4;
  uVar2 = DAT_004986bc;
  *(undefined1 *)(param_1 + 0x22) = *puVar1;
  fVar7 = DAT_004986d4;
  uVar5 = DAT_004986c0;
  param_1[0x23] = *DAT_004986b4;
  param_1[0x24] = *DAT_004986b8;
  *param_1 = DAT_004986c8;
  param_1[0x2b] = uVar3;
  param_1[0x25] = uVar2;
  param_1[0x26] = uVar5;
  uVar2 = DAT_004986d0;
  uVar5 = puVar4[1];
  param_1[0x2c] = *puVar4;
  param_1[0x2d] = uVar5;
  param_1[0x27] = uVar2;
  fVar6 = func_0059163C(fVar7);
  param_1[0x28] = ALBW_AS_U32(fVar6);
  fVar6 = func_005909A0(fVar7);
  param_1[0x29] = ALBW_AS_U32(fVar6);
  fVar7 = func_00591804(fVar7);
  param_1[0x2a] = ALBW_AS_U32(fVar7);
  *(undefined1 *)(param_1 + 1) = 1;
  return param_1;
}

