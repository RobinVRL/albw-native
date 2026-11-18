#include "ghidra_types.h"

extern int func_0010C1B8(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern int func_003E1A70(float *param_1,int param_2);
extern int func_003E1B2C(float *param_1,float *param_2,float *param_3,float *param_4);
extern int func_003E1E9C(float *param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3, float fparam_4,float fparam_5);
extern int func_003E2E88(float *param_1,undefined4 *param_2,float *param_3);
extern float DAT_003e2790;
extern float DAT_003e2794;
extern float *DAT_003e2798;
extern float DAT_003e279c;
extern float DAT_003e27a0;
extern int DAT_003e27a4;
extern float DAT_003e27a8;

// USA 003E23F4 <- EU 003E23D4 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 float *
// PARAM param_6 Stack[0x4]:4 float *
// PARAM param_7 Stack[0x8]:4 float *
// PARAM param_8 Stack[0xc]:4 int
// GLOBAL DAT_003e2790 float
// GLOBAL DAT_003e2794 float
// GLOBAL DAT_003e2798 float *
// GLOBAL DAT_003e279c float
// GLOBAL DAT_003e27a0 float
// GLOBAL DAT_003e27a4 int
// GLOBAL DAT_003e27a8 float

float func_003E23F4(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                   float *param_6,float *param_7,int param_8,float fparam_0,float fparam_1)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  float **ppfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define local_a8 (*(float *)(albw_frame + 0x8))
  #define local_a4 (*(float *)(albw_frame + 0xc))
  #define local_a0 (*(float *)(albw_frame + 0x10))
  #define local_9c (*(float *)(albw_frame + 0x14))
  #define local_98 (*(float *)(albw_frame + 0x18))
  #define local_94 (*(float *)(albw_frame + 0x1c))
  #define local_90 (*(float *)(albw_frame + 0x20))
  #define fStack_8c (*(float *)(albw_frame + 0x24))
  #define fStack_88 (*(float *)(albw_frame + 0x28))
  #define local_84 (*(float *)(albw_frame + 0x2c))
  #define local_80 (*(float *)(albw_frame + 0x30))
  #define local_7c (*(float *)(albw_frame + 0x34))
  #define local_78 (*(float *)(albw_frame + 0x38))
  #define local_74 (*(float *)(albw_frame + 0x3c))
  #define local_70 (*(float *)(albw_frame + 0x40))
  #define local_6c (*(float *)(albw_frame + 0x44))
  #define local_68 (*(float *)(albw_frame + 0x48))
  #define local_64 (*(float *)(albw_frame + 0x4c))
  pfVar3 = param_7;
  pfVar1 = DAT_003e2798;
  fVar18 = DAT_003e2790;
  ppfVar4 = &param_6;
  if ((DAT_003e2790 <= fparam_1) && (ppfVar4 = (float **)ALBW_PTR_BITS(fparam_1), (int)ALBW_AS_U32(fparam_1) < 0x3f800001)) {
    fVar9 = param_6[10];
    fVar8 = param_6[0xb];
    fVar16 = fVar8 / fVar9;
    fVar5 = fVar8 / (*param_6 * fVar9);
    fVar13 = (param_6[2] - DAT_003e2794) * fVar5;
    fVar5 = (param_6[2] + DAT_003e2794) * fVar5;
    fVar6 = fVar8 / (param_6[5] * fVar9);
    fVar17 = fVar5 - fVar13;
    fVar14 = (param_6[6] + DAT_003e2794) * fVar6;
    fVar6 = (param_6[6] - DAT_003e2794) * fVar6;
    fVar8 = fVar8 / (fVar9 - DAT_003e2794);
    fVar9 = (fVar14 - fVar6) * (fparam_0 / fVar16);
    fVar10 = fVar9 / DAT_003e2798[3];
    if (param_8 == 0) {
      param_1[0x14] = fparam_0;
      fVar9 = fVar5;
      fVar7 = fVar13;
      fVar15 = fVar8;
      fVar19 = fVar14;
      fVar20 = fVar6;
      fVar12 = fVar16;
      if (fVar8 <= fparam_0) {
        param_1[0x17] = fVar18;
      }
      else {
        param_1[0x17] = (fVar8 / (fVar8 - fparam_0)) * param_1[0x12] * fVar10;
      }
    }
    else {
      fVar7 = DAT_003e2798[1] * fVar10;
      param_1[0x14] = fVar7;
      fVar12 = fVar7 - (fparam_0 - fVar16);
      fVar15 = fVar7 + (fVar8 - fparam_0);
      if (fVar12 <= fVar18) {
        fVar12 = fVar7 * DAT_003e279c;
      }
      if (fVar15 <= fVar12) {
        fVar15 = fVar12 * DAT_003e27a0;
      }
      fVar17 = fVar17 * (fparam_0 / fVar16) * (fVar12 / fVar7);
      param_1[0x17] = *pfVar1 * fVar10;
      fVar10 = (fVar9 * (fVar12 / fVar7)) / (fVar14 - fVar6);
      fVar9 = fVar10 * fVar5;
      fVar7 = fVar10 * fVar13;
      fVar19 = fVar10 * fVar14;
      fVar20 = fVar10 * fVar6;
    }
    fVar10 = DAT_003e27a8;
    iVar2 = DAT_003e27a4;
    fVar11 = param_1[0x17];
    param_1[0x17] = fVar11 * fparam_1;
    if (*(char *)(iVar2 + 0x84) == '\0') {
      fVar18 = *(float *)(iVar2 + 0x80);
    }
    fVar10 = fVar18 * fVar11 * fparam_1 * fVar10;
    param_1[0x17] = fVar10;
    fVar11 = ((param_1[0x14] - fVar12) / param_1[0x14]) * fVar10;
    fVar18 = (fVar7 - fVar11) + fVar10;
    fVar10 = (fVar9 + fVar11) - fVar10;
    fVar9 = fVar10 - fVar17;
    func_003E1E9C(param_2,fVar18,fVar18 + fVar17,fVar20,fVar19,fVar12,fVar15);
    func_003E1A70(param_2,1);
    func_003E1E9C(param_4,fVar9,fVar10,fVar20,fVar19,fVar12,fVar15);
    func_003E1A70(param_4,1);
    func_003E2E88(pfVar3,&local_a8,&local_9c);
    param_1[6] = local_a8;
    param_1[7] = local_a4;
    param_1[8] = local_a0;
    param_1[9] = local_9c;
    param_1[10] = local_98;
    param_1[0xb] = local_94;
    param_1[0xc] = local_90;
    param_1[0xd] = fStack_8c;
    param_1[0xe] = fStack_88;
    fVar18 = param_1[0x14] - fparam_0;
    param_1[0xf] = local_84;
    param_1[0x10] = local_80;
    param_1[0x11] = local_7c;
    local_a8 = local_a8 - fVar18 * local_84;
    local_a4 = local_a4 - fVar18 * local_80;
    local_a0 = local_a0 - fVar18 * local_7c;
    local_78 = local_a8 - param_1[0x17] * local_9c;
    local_6c = local_78 + local_84;
    local_74 = local_a4 - param_1[0x17] * local_98;
    local_68 = local_74 + local_80;
    local_70 = local_a0 - param_1[0x17] * local_94;
    local_64 = local_70 + local_7c;
    func_003E1B2C(param_3,&local_78,&local_90,&local_6c);
    local_78 = local_a8 + param_1[0x17] * local_9c;
    local_6c = local_78 + local_84;
    local_74 = local_a4 + param_1[0x17] * local_98;
    local_68 = local_74 + local_80;
    local_70 = local_a0 + param_1[0x17] * local_94;
    local_64 = local_70 + local_7c;
    func_003E1B2C(param_5,&local_78,&local_90,&local_6c);
    param_1[0x15] = fVar12;
    param_1[0x16] = fVar15;
    param_1[2] = fVar6;
    param_1[3] = fVar14;
    param_1[4] = fVar16;
    param_1[5] = fVar8;
    *param_1 = fVar13;
    param_1[1] = fVar5;
    fVar17 = (param_1[0x14] / fVar12) * fVar17;
    param_1[0x13] = fVar17;
    return param_1[0x17] / fVar17;
  }
                    /* WARNING: Subroutine does not return */
  func_0010C1B8(ppfVar4,param_2,param_3);
}

