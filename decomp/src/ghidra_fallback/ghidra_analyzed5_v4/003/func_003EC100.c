#include "ghidra_types.h"

extern int func_00114F58(float *param_1,float *param_2);
extern int func_00115074(float *param_1,float *param_2,float *param_3);
extern float DAT_003ec2a8;

// USA 003EC100 <- EU 003EC0E0 (Ghidra, non-matching)
// GLOBAL DAT_003ec2a8 float

short * func_003EC100(int param_1,undefined4 *param_2,short *param_3)

{
  undefined4 uVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_70 (*(float *)(albw_frame + 0x0))
  #define fStack_6c (*(float *)(albw_frame + 0x4))
  #define fStack_68 (*(float *)(albw_frame + 0x8))
  #define local_60 (*(float *)(albw_frame + 0x10))
  #define local_5c (*(float *)(albw_frame + 0x14))
  #define fStack_58 (*(float *)(albw_frame + 0x18))
  #define local_50 (*(float *)(albw_frame + 0x20))
  #define local_4c (*(float *)(albw_frame + 0x24))
  #define fStack_48 (*(float *)(albw_frame + 0x28))
  #define fStack_30 (*(float *)(albw_frame + 0x40))
  #define local_2c (*(float *)(albw_frame + 0x44))
  fVar5 = *(float *)(param_3 + 2);
  if (param_3[1] == 0) {
    if (*param_3 != 0) {
      if ((*param_3 == 1) && (ALBW_AS_F32(param_2[3]) < fVar5)) {
        fVar3 = *(float *)(param_3 + 4);
        param_2[3] = ALBW_AS_U32(fVar5);
        param_2[9] = ALBW_AS_U32(-(ALBW_AS_F32(param_2[9]) * fVar3));
      }
      goto LAB_003ec298;
    }
    if (fVar5 <= ALBW_AS_F32(param_2[3])) goto LAB_003ec298;
    uVar1 = param_2[1];
    param_2[3] = ALBW_AS_U32(fVar5);
  }
  else {
    if (*(int *)(param_1 + 200) == 0) {
      pfVar2 = (float *)(param_1 + 0x54);
    }
    else {
      pfVar2 = (float *)(param_2 + 0x40);
    }
    func_00115074(&fStack_30,pfVar2,(float *)(param_2 + 2));
    if (*param_3 != 0) {
      if ((*param_3 == 1) && (local_2c < fVar5)) {
        local_2c = fVar5 + DAT_003ec2a8;
        fVar4 = ALBW_AS_F32(param_2[8]);
        fVar3 = ALBW_AS_F32(param_2[9]);
        fVar5 = ALBW_AS_F32(param_2[10]);
        fVar7 = *pfVar2 * fVar4 + pfVar2[1] * fVar3 + pfVar2[2] * fVar5;
        fVar6 = pfVar2[8] * fVar4 + pfVar2[9] * fVar3 + pfVar2[10] * fVar5;
        fVar5 = -((pfVar2[4] * fVar4 + pfVar2[5] * fVar3 + pfVar2[6] * fVar5) *
                 *(float *)(param_3 + 4));
        func_00114F58(&local_70,pfVar2);
        func_00115074((float *)(param_2 + 2),&local_70,&fStack_30);
        param_2[8] = ALBW_AS_U32(local_70 * fVar7 + fStack_6c * fVar5 + fStack_68 * fVar6);
        param_2[9] = ALBW_AS_U32(local_60 * fVar7 + local_5c * fVar5 + fStack_58 * fVar6);
        param_2[10] = ALBW_AS_U32(local_50 * fVar7 + local_4c * fVar5 + fStack_48 * fVar6);
      }
      goto LAB_003ec298;
    }
    if (fVar5 <= local_2c) goto LAB_003ec298;
    uVar1 = param_2[1];
  }
  *param_2 = uVar1;
LAB_003ec298:
  return param_3 + 6;
}

