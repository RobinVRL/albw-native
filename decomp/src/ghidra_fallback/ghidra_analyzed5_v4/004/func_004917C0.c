#include "ghidra_types.h"

extern float func_00115154(float *param_1,float *param_2,uint param_3);

// USA 004917C0 <- EU 00491798 (Ghidra, non-matching)

void func_004917C0(float *param_1,float *param_2,uint *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(float *)(albw_frame + 0x0))
  #define local_3c (*(float *)(albw_frame + 0x4))
  #define afStack_38 ((float *)(albw_frame + 0x8))
  #define local_28 (*(float *)(albw_frame + 0x18))
  #define fStack_24 (*(float *)(albw_frame + 0x1c))
  #define fStack_20 (*(float *)(albw_frame + 0x20))
  func_00115154(&local_28,&local_40,*param_3);
  func_00115154(&fStack_24,&local_3c,param_3[1]);
  func_00115154(&fStack_20,afStack_38,param_3[2]);
  fVar3 = *param_2;
  fVar2 = param_2[1];
  fVar1 = param_2[2];
  *param_1 = local_3c * afStack_38[0] * fVar3;
  param_1[4] = local_3c * fStack_20 * fVar3;
  param_1[8] = -(fVar3 * fStack_24);
  param_1[1] = fVar2 * (local_28 * fStack_24 * afStack_38[0] - local_40 * fStack_20);
  param_1[5] = fVar2 * (local_40 * afStack_38[0] + local_28 * fStack_24 * fStack_20);
  param_1[9] = local_28 * local_3c * fVar2;
  param_1[2] = (local_28 * fStack_20 + local_40 * afStack_38[0] * fStack_24) * fVar1;
  param_1[6] = (fStack_24 * local_40 * fStack_20 - local_28 * afStack_38[0]) * fVar1;
  param_1[10] = local_40 * local_3c * fVar1;
  param_1[3] = *param_4;
  param_1[7] = param_4[1];
  param_1[0xb] = param_4[2];
  return;
}

