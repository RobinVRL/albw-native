#include "ghidra_types.h"

extern longlong func_001104E4(int param_1,int param_2);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float DAT_002cc118;
extern float DAT_002cc11c;

// USA 002CBFF4 <- EU 002CBFD0 (Ghidra, non-matching)
// GLOBAL DAT_002cc118 float
// GLOBAL DAT_002cc11c float

void func_002CBFF4(int param_1,float param_2,float *param_3,float fparam_0,float fparam_1)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  longlong lVar9;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(float *)(albw_frame + 0x8))
  #define fStack_44 (*(float *)(albw_frame + 0xc))
  #define fStack_40 (*(float *)(albw_frame + 0x10))
  #define local_3c (*(float *)(albw_frame + 0x14))
  #define fStack_38 (*(float *)(albw_frame + 0x18))
  #define fStack_34 (*(float *)(albw_frame + 0x1c))
  #define local_30 (*(float *)(albw_frame + 0x20))
  #define fStack_2c (*(float *)(albw_frame + 0x24))
  #define fStack_28 (*(float *)(albw_frame + 0x28))
  do {
    fVar3 = param_2;
    fVar7 = fparam_1;
    fVar8 = fparam_0;
    lVar9 = func_001104E4((int)ALBW_AS_U32(fVar3) + 1,*(uint *)(param_1 + 0xda4));
    fVar1 = DAT_002cc118;
    param_2 = ALBW_AS_F32(((ulonglong)lVar9 >> 0x20));
    pfVar5 = (float *)(param_1 + 0x9e4);
    pfVar4 = pfVar5;
    if ((uint)ALBW_AS_U32(fVar3) < 0x50) {
      pfVar4 = pfVar5 + (int)ALBW_AS_U32(fVar3) * 3;
    }
    pfVar2 = pfVar5;
    if ((uint)ALBW_AS_U32(param_2) < 0x50) {
      pfVar2 = pfVar5 + (int)ALBW_AS_U32(param_2) * 3;
    }
    fVar6 = SQRT((*pfVar4 - *pfVar2) * (*pfVar4 - *pfVar2) +
                 (pfVar4[2] - pfVar2[2]) * (pfVar4[2] - pfVar2[2]));
    fparam_1 = fVar7 - fVar6 * (DAT_002cc118 - fVar8);
    fparam_0 = DAT_002cc11c;
  } while (DAT_002cc11c < fparam_1);
  param_3[3] = fVar3;
  pfVar4 = pfVar5;
  if ((uint)ALBW_AS_U32(fVar3) < 0x50) {
    pfVar4 = pfVar5 + (int)ALBW_AS_U32(fVar3) * 3;
  }
  fVar8 = fVar7 / fVar6 + fVar8;
  param_3[4] = fVar8;
  func_00115D70(&local_30,pfVar4,fVar1 - fVar8);
  local_48 = local_30;
  fStack_44 = fStack_2c;
  fStack_40 = fStack_28;
  if ((uint)ALBW_AS_U32(param_2) < 0x50) {
    pfVar5 = pfVar5 + (int)ALBW_AS_U32(param_2) * 3;
  }
  func_00115D70(&local_30,pfVar5,fVar8);
  local_3c = local_30;
  fStack_38 = fStack_2c;
  fStack_34 = fStack_28;
  func_00115C54(&local_30,&local_48,&local_3c);
  *param_3 = local_30;
  param_3[1] = fStack_2c;
  param_3[2] = fStack_28;
  return;
}

