#include "ghidra_types.h"

extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_00115DAC(float *param_1,float *param_2,float *param_3,float fparam_0);
extern float func_00115DC8(float *param_1);
extern float DAT_0037c4ac;
extern int DAT_0037c4b0;
extern float DAT_0037c4b4;
extern float DAT_0037c4b8;

// USA 0037C358 <- EU 0037C334 (Ghidra, non-matching)
// GLOBAL DAT_0037c4ac float
// GLOBAL DAT_0037c4b0 int
// GLOBAL DAT_0037c4b4 float
// GLOBAL DAT_0037c4b8 float

void func_0037C358(undefined4 *param_1,float *param_2,uint param_3,int param_4,float fparam_0,
                  float fparam_1)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  uint in_fpscr;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define local_2c (*(float *)(albw_frame + 0x4))
  #define local_28 (*(float *)(albw_frame + 0x8))
  fVar5 = DAT_0037c4ac;
  fVar3 = param_2[1];
  fVar4 = param_2[2];
  param_1[2] = ALBW_AS_U32(*param_2);
  param_1[3] = ALBW_AS_U32(fVar3);
  param_1[4] = ALBW_AS_U32(fVar4);
  iVar1 = DAT_0037c4b0;
  param_1[0xc] = param_3;
  pfVar2 = (float *)(iVar1 + (param_3 >> 0x18) * 0x10);
  fVar3 = (float)VectorUnsignedToFloat(param_3 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  local_30 = pfVar2[2] + pfVar2[3] * fVar3 * fVar5;
  fVar3 = (float)VectorUnsignedToFloat(param_3 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  local_2c = DAT_0037c4b4;
  local_28 = -(*pfVar2 + pfVar2[1] * fVar3 * fVar5);
  fVar5 = DAT_0037c4b4;
  func_00115DC8(&local_30);
  param_1[5] = ALBW_AS_U32(local_30);
  param_1[6] = ALBW_AS_U32(local_2c);
  param_1[7] = ALBW_AS_U32(local_28);
  fVar3 = ALBW_AS_F32(param_1[5]) * *param_2 + local_2c * param_2[1] + local_28 * param_2[2];
  param_1[8] = ALBW_AS_U32(fVar3);
  pfVar2 = (float *)*param_1;
  func_00115DAC((float *)(param_1 + 9),(float *)(param_1 + 5),pfVar2,
                -((ALBW_AS_F32(param_1[5]) * *pfVar2 + ALBW_AS_F32(param_1[6]) * pfVar2[1] +
                  ALBW_AS_F32(param_1[7]) * pfVar2[2]) - fVar3));
  pfVar2 = (float *)param_1[1];
  if (pfVar2 != (float *)0x0) {
    fVar3 = SQRT(*pfVar2 * *pfVar2 + pfVar2[2] * pfVar2[2]);
    func_00115D70(pfVar2,pfVar2,fparam_0);
    param_1[0x10] = ALBW_AS_U32(fVar3 * fparam_0);
    param_1[0x11] = ALBW_AS_U32(fVar3 * fparam_1);
  }
  param_1[0xe] = param_4;
  if (param_4 == 0) {
    param_1[0xf] = ALBW_AS_U32(fVar5);
  }
  else {
    fVar5 = (float)VectorUnsignedToFloat(param_4,(byte)(in_fpscr >> 0x15) & 3);
    param_1[0xf] = ALBW_AS_U32(DAT_0037c4b8 / fVar5);
  }
  param_1[0xd] = 0;
  *(undefined1 *)((int)param_1 + 0x49) = 0;
  *(undefined1 *)(param_1 + 0x12) = 1;
  return;
}

