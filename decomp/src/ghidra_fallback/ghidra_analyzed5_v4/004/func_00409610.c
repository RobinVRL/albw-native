#include "ghidra_types.h"

extern int func_00409838(float *param_1,float *param_2,float *param_3,float fparam_0,float fparam_1, float fparam_2);
extern float func_0040C650(float fparam_0,float fparam_1,float fparam_2,float fparam_3,float fparam_4);
extern float func_005909A0(float fparam_0);
extern float DAT_004097f0;
extern float DAT_004097f4;
extern float DAT_004097f8;
extern float DAT_004097fc;
extern float DAT_00409800;
extern float DAT_00409804;
extern int DAT_00409808;
extern float DAT_0040980c;
extern float DAT_00409810;
extern float DAT_00409814;

// USA 00409610 <- EU 004095F0 (Ghidra, non-matching)
// GLOBAL DAT_004097f0 float
// GLOBAL DAT_004097f4 float
// GLOBAL DAT_004097f8 float
// GLOBAL DAT_004097fc float
// GLOBAL DAT_00409800 float
// GLOBAL DAT_00409804 float
// GLOBAL DAT_00409808 int
// GLOBAL DAT_0040980c float
// GLOBAL DAT_00409810 float
// GLOBAL DAT_00409814 float

void func_00409610(float *param_1,float *param_2,float *param_3,float fparam_0,float fparam_1,
                  float fparam_2,float fparam_3,float fparam_4,float fparam_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define local_34 ((float *)(albw_frame + 0xc))
  uVar7 = CONCAT44(fparam_2,fparam_4);
  func_00409838(param_1,&local_38,local_34,fparam_1,fparam_0,fparam_2);
  fVar2 = ALBW_AS_F32(uVar7);
  fVar4 = -fVar2;
  fVar3 = -fparam_3;
  uVar6 = CONCAT44(fparam_3,DAT_004097f8);
  if (fVar4 <= local_38) {
    fVar1 = DAT_004097f4;
    if ((uint)ALBW_AS_U32(DAT_00409800) < (uint)ALBW_AS_U32(local_38)) {
      fVar4 = func_0040C650(local_38,fVar4,DAT_00409804,DAT_004097f8,DAT_004097f0);
    }
    else if (fVar3 <= local_38) {
      if (fparam_3 <= local_38) {
        fVar1 = DAT_004097f8;
        if ((int)ALBW_AS_U32(local_38) < DAT_00409808) {
          fVar4 = func_0040C650(local_38,fparam_3,DAT_0040980c,DAT_004097f4,DAT_004097f0);
        }
        else if (fVar2 <= local_38) {
          fVar1 = func_0040C650(local_38,fVar2,DAT_00409810,DAT_004097f8,DAT_004097f0);
          fVar4 = ALBW_AS_F32(uVar6);
        }
        else {
          fVar4 = func_0040C650(local_38,DAT_0040980c,fVar2,DAT_004097f0,DAT_004097f8);
        }
      }
      else {
        fVar4 = DAT_004097f4;
        fVar1 = func_0040C650(local_38,fVar3,fparam_3,DAT_004097f4,DAT_004097f8);
      }
    }
    else {
      fVar4 = func_0040C650(local_38,DAT_00409804,fVar3,DAT_004097f0,DAT_004097f4);
    }
  }
  else {
    fVar1 = func_0040C650(local_38,DAT_004097fc,fVar4,DAT_004097f0,DAT_004097f4);
    fVar4 = ALBW_AS_F32(uVar6);
  }
  fVar3 = func_005909A0(ALBW_AS_F32(((ulonglong)uVar6 >> 0x20)));
  fVar5 = ALBW_AS_F32(uVar6);
  fVar2 = func_005909A0(ALBW_AS_F32(uVar7));
  fVar2 = (fVar3 + fVar2) * DAT_00409814;
  fVar3 = func_005909A0(ALBW_AS_F32(uVar7));
  fVar8 = ALBW_AS_F32(((ulonglong)uVar7 >> 0x20));
  *param_2 = fVar1 * fVar8 * local_34[0];
  *param_3 = fVar4 * fVar8 * local_34[0] + (fVar2 / (fVar2 - fVar3)) * (fVar5 - local_34[0]) + fVar5
             + fparam_5;
  return;
}

