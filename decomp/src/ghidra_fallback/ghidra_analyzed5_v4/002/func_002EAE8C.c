#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00437874(float *param_1,float *param_2,float fparam_0);
extern int func_004D8054(float *param_1,uint param_2,float fparam_0);
extern int func_00520FC0(void);
extern int func_0068C690(float *param_1);
extern float DAT_002eaf1c;
extern float DAT_002eaf20;
extern float DAT_002eaf24;
extern float DAT_002eaf28;
extern float DAT_002eaf2c;
extern float DAT_002eaf30;

// USA 002EAE8C <- EU 002EAE68 (Ghidra, non-matching)
// GLOBAL DAT_002eaf1c float
// GLOBAL DAT_002eaf20 float
// GLOBAL DAT_002eaf24 float
// GLOBAL DAT_002eaf28 float
// GLOBAL DAT_002eaf2c float
// GLOBAL DAT_002eaf30 float

undefined4 func_002EAE8C(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 ((float *)(albw_frame + 0x0))
  #define local_18 (*(float *)(albw_frame + 0x8))
  pfVar3 = (float *)func_00520FC0();
  func_00115C70(local_20,pfVar3,(float *)(param_1 + 0xbc0));
  iVar4 = func_0068C690(local_20);
  fVar2 = DAT_002eaf20;
  fVar1 = DAT_002eaf1c;
  fVar5 = *(float *)(param_1 + 0xbc4);
  fVar6 = *(float *)(param_1 + 0xbc8);
  *param_2 = *(float *)(param_1 + 0xbc0);
  param_2[1] = fVar5;
  param_2[2] = fVar6;
  fVar6 = SQRT(local_20[0] * local_20[0] + local_18 * local_18);
  fVar5 = DAT_002eaf24;
  if ((fVar1 < fVar6) && (fVar5 = DAT_002eaf28, fVar6 < fVar2)) {
    fVar5 = (DAT_002eaf2c * (fVar6 - fVar1)) / fVar2 + DAT_002eaf24;
  }
  func_004D8054(param_2,iVar4 + 0x80000000,fVar5);
  func_00437874(param_2,(float *)(param_1 + 0xe30),DAT_002eaf30);
  return 1;
}

