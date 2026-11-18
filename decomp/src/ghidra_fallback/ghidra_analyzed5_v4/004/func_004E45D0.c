#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_004E4788(int *param_1);
extern int func_00520FC0(void);
extern int func_00520FD4(void);
extern int func_0066A8D8(undefined4 *param_1,undefined1 param_2);
extern float DAT_004e4714;
extern int DAT_004e4718;
extern int DAT_004e471c;
extern float DAT_004e4720;
extern float DAT_004e4724;
extern float DAT_004e4728;
extern float DAT_004e472c;
extern float DAT_004e4730;
extern float DAT_004e4734;

// USA 004E45D0 <- EU 004E45A8 (Ghidra, non-matching)
// GLOBAL DAT_004e4714 float
// GLOBAL DAT_004e4718 int
// GLOBAL DAT_004e471c int
// GLOBAL DAT_004e4720 float
// GLOBAL DAT_004e4724 float
// GLOBAL DAT_004e4728 float
// GLOBAL DAT_004e472c float
// GLOBAL DAT_004e4730 float
// GLOBAL DAT_004e4734 float

undefined4 func_004E45D0(int *param_1)

{
  bool bVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define local_1c (*(float *)(albw_frame + 0x4))
  #define local_18 (*(float *)(albw_frame + 0x8))
  pfVar2 = (float *)func_00520FC0();
  func_00115C70(&local_20,pfVar2,(float *)(param_1 + 0xf4));
  local_1c = DAT_004e4714;
  fVar5 = SQRT(local_20 * local_20 + local_18 * local_18);
  if ((DAT_004e4718 < (int)ALBW_AS_U32(fVar5)) || (fVar3 = DAT_004e4714, bVar1 = func_00520FD4(), bVar1)) {
    func_0066A8D8(param_1 + 0x121,3);
  }
  else {
    if (DAT_004e471c < (int)ALBW_AS_U32(fVar5)) {
      fVar4 = DAT_004e4724 / fVar5;
      fVar3 = DAT_004e4728;
      if ((int)ALBW_AS_U32(fVar5) <= DAT_004e471c + 0x400000) {
        fVar3 = (DAT_004e4734 * (fVar5 - DAT_004e4730)) / DAT_004e4724 + DAT_004e472c;
      }
      fVar5 = ALBW_AS_F32(param_1[0x148]);
      fVar5 = fVar5 + (fVar3 - fVar5) * DAT_004e4720;
      param_1[0x148] = (int)ALBW_AS_U32(fVar5);
      func_00115D70(&local_20,&local_20,fVar5 * fVar4);
    }
    else {
      fVar5 = ALBW_AS_F32(param_1[0x148]);
      fVar5 = fVar5 + -fVar5 * DAT_004e4720;
      param_1[0x148] = (int)ALBW_AS_U32(fVar5);
      fVar4 = SQRT(local_20 * local_20 + local_1c * local_1c + local_18 * local_18);
      if (fVar3 < fVar4) {
        fVar5 = fVar5 / fVar4;
        local_18 = local_18 * fVar5;
        local_20 = local_20 * fVar5;
        local_1c = local_1c * fVar5;
      }
    }
    param_1[0xf7] = (int)ALBW_AS_U32(local_20);
    param_1[0xf9] = (int)ALBW_AS_U32(local_18);
  }
  return func_004E4788(param_1);
}

