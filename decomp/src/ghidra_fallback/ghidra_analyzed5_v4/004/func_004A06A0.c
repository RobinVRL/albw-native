#include "ghidra_types.h"

extern undefined4 DAT_004a0778;
extern undefined4 DAT_004a077c;
extern float DAT_004a0780;
extern undefined4 DAT_004a0784;
extern undefined1 *DAT_004a0788;
extern int *DAT_004a078c;
extern undefined4 DAT_004a0790;

// USA 004A06A0 <- EU 004A0678 (Ghidra, non-matching)
// GLOBAL DAT_004a0778 undefined4
// GLOBAL DAT_004a077c undefined4
// GLOBAL DAT_004a0780 float
// GLOBAL DAT_004a0784 undefined4
// GLOBAL DAT_004a0788 undefined1 *
// GLOBAL DAT_004a078c int *
// GLOBAL DAT_004a0790 undefined4

undefined4 *
func_004A06A0(undefined4 *param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  
  uVar4 = DAT_004a0784;
  uVar2 = DAT_004a0778;
  param_1[1] = DAT_004a0778;
  param_1[2] = uVar2;
  uVar2 = DAT_004a077c;
  param_1[3] = DAT_004a077c;
  param_1[4] = uVar2;
  *param_1 = uVar4;
  piVar5 = DAT_004a078c;
  fVar3 = DAT_004a0780;
  uVar1 = *DAT_004a0788;
  *(undefined1 *)(param_1 + 5) = uVar1;
  uVar2 = DAT_004a0790;
  iVar6 = *piVar5;
  if (iVar6 == 0) {
    param_1[1] = ALBW_AS_U32(fVar3);
    param_1[3] = uVar2;
    param_1[2] = ALBW_AS_U32(fVar3);
    param_1[4] = uVar2;
    return param_1;
  }
  switch(uVar1) {
  case 0:
  case 3:
  case 4:
  case 5:
    fVar7 = *(float *)(iVar6 + 4);
    fVar8 = *(float *)(iVar6 + 8);
    if (fVar3 < fVar7) {
      param_1[1] = ALBW_AS_U32(fVar3);
    }
    else {
      param_1[1] = ALBW_AS_U32(fVar7);
      fVar7 = fVar3;
    }
    param_1[3] = ALBW_AS_U32(fVar7);
    break;
  case 1:
  case 2:
    fVar7 = *(float *)(iVar6 + 8);
    fVar8 = *(float *)(iVar6 + 4);
    if (fVar3 < fVar7) {
      param_1[1] = ALBW_AS_U32(fVar3);
    }
    else {
      param_1[1] = ALBW_AS_U32(fVar7);
      fVar7 = fVar3;
    }
    param_1[3] = ALBW_AS_U32(fVar7);
    break;
  default:
    return param_1;
  }
  if (fVar3 < fVar8) {
    param_1[2] = ALBW_AS_U32(fVar3);
    param_1[4] = ALBW_AS_U32(fVar8);
    return param_1;
  }
  param_1[2] = ALBW_AS_U32(fVar8);
  param_1[4] = ALBW_AS_U32(fVar3);
  return param_1;
}

