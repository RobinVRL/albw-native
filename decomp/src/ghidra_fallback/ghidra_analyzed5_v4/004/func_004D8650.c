#include "ghidra_types.h"

extern int func_00115E10(float *param_1,float *param_2,float *param_3);
extern float func_00590570(float fparam_0);
extern float func_0059163C(float fparam_0);
extern float DAT_004d88dc;
extern float DAT_004d88e0;
extern uint DAT_004d88e4;
extern float DAT_004d88e8;
extern float DAT_004d88ec;
extern float DAT_004d88f0;

// USA 004D8650 <- EU 004D8628 (Ghidra, non-matching)
// GLOBAL DAT_004d88dc float
// GLOBAL DAT_004d88e0 float
// GLOBAL DAT_004d88e4 uint
// GLOBAL DAT_004d88e8 float
// GLOBAL DAT_004d88ec float
// GLOBAL DAT_004d88f0 float

void func_004D8650(float *param_1,float *param_2,float *param_3,float *param_4,float fparam_0)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 in_d8;
  undefined8 in_d9;
  float fVar7;
  float fVar8;
  float fVar9;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(float *)(albw_frame + 0x8))
  #define local_44 (*(float *)(albw_frame + 0xc))
  #define local_40 (*(float *)(albw_frame + 0x10))
  #define local_3c (*(float *)(albw_frame + 0x14))
  #define local_38 (*(float *)(albw_frame + 0x18))
  #define fStack_34 (*(float *)(albw_frame + 0x1c))
  fVar1 = ALBW_AS_F32(((ulonglong)in_d8 >> 0x20));
  if (DAT_004d88dc < fparam_0) {
    if ((int)ALBW_AS_U32(fparam_0) < 0x3f800000) {
      fVar4 = *param_2;
      fVar8 = SQRT(fVar4 * fVar4 + param_2[1] * param_2[1] + param_2[2] * param_2[2]);
      if (DAT_004d88dc < fVar8) {
        fVar2 = DAT_004d88e0 / fVar8;
        local_48 = fVar4 * fVar2;
        local_44 = param_2[1] * fVar2;
        local_40 = param_2[2] * fVar2;
      }
      if (fVar8 == DAT_004d88dc) {
        local_48 = DAT_004d88dc;
        local_44 = DAT_004d88dc;
        local_40 = DAT_004d88dc;
      }
      fVar4 = *param_3;
      fVar5 = param_3[1];
      fVar2 = param_3[2];
      fVar9 = SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar2 * fVar2);
      if (DAT_004d88dc < fVar9) {
        fVar1 = DAT_004d88e0 / fVar9;
        in_d9 = CONCAT44(fVar2 * fVar1,fVar5 * fVar1);
        fVar1 = fVar4 * fVar1;
      }
      if (fVar9 == DAT_004d88dc) {
        in_d9 = CONCAT44(DAT_004d88dc,DAT_004d88dc);
        fVar1 = DAT_004d88dc;
      }
      fVar7 = DAT_004d88e0 - fparam_0;
      fVar5 = local_48 * fVar1 + local_44 * ALBW_AS_F32(in_d9) +
              local_40 * ALBW_AS_F32(((ulonglong)in_d9 >> 0x20));
      fVar4 = DAT_004d88e0;
      fVar2 = fparam_0;
      if ((int)ALBW_AS_U32(fVar5) <= (int)DAT_004d88e4) {
        if ((DAT_004d88e4 | DAT_004d88e4 << 0x1a) < (uint)ALBW_AS_U32(fVar5)) {
          if (param_4 != (float *)0x0) {
            fVar5 = DAT_004d88dc;
            func_00115E10(&local_3c,param_4,&local_48);
            fVar3 = SQRT(local_3c * local_3c + local_38 * local_38 + fStack_34 * fStack_34);
            if (fVar5 < fVar3) {
              fVar6 = fVar4 / fVar3;
              local_3c = local_3c * fVar6;
              fStack_34 = fStack_34 * fVar6;
              local_38 = local_38 * fVar6;
            }
            if (fVar3 != fVar5) {
              if ((int)ALBW_AS_U32(fparam_0) < 0x3f000001) {
                in_d9 = CONCAT44(fStack_34,local_38);
                fVar1 = local_3c;
              }
              else {
                fparam_0 = fparam_0 - DAT_004d88ec;
                local_44 = local_38;
                local_48 = local_3c;
                local_40 = fStack_34;
              }
              fparam_0 = fparam_0 * DAT_004d88e8;
              fVar2 = DAT_004d88f0;
              fVar7 = func_0059163C(DAT_004d88f0 * (fVar4 - fparam_0));
              fVar2 = func_0059163C(fVar2 * fparam_0);
            }
          }
        }
        else {
          fVar2 = func_00590570(fVar5);
          fVar5 = func_0059163C(fVar2);
          fVar7 = func_0059163C(fVar7 * fVar2);
          fVar7 = fVar7 / fVar5;
          fVar2 = func_0059163C(fparam_0 * fVar2);
          fVar2 = fVar2 / fVar5;
        }
      }
      fVar4 = (fVar4 - fparam_0) * fVar8 + fparam_0 * fVar9;
      *param_1 = (local_48 * fVar7 + fVar2 * fVar1) * fVar4;
      param_1[1] = (local_44 * fVar7 + fVar2 * ALBW_AS_F32(in_d9)) * fVar4;
      param_1[2] = (local_40 * fVar7 + fVar2 * ALBW_AS_F32(((ulonglong)in_d9 >> 0x20))) * fVar4;
      return;
    }
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    fVar1 = param_3[2];
  }
  else {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    fVar1 = param_2[2];
  }
  param_1[2] = fVar1;
  return;
}

