#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_002FC1A8(int *param_1);
extern int func_004904CC(float fparam_0,float fparam_1);
extern int func_0051E6D0(int param_1,float *param_2,float fparam_0);
extern int func_00520FC0(void);
extern int func_006644B8(undefined4 *param_1,undefined1 param_2);
extern float *DAT_002fbad0;
extern float DAT_002fbad4;
extern float DAT_002fbad8;
extern int DAT_002fbadc;
extern int *DAT_002fbae0;
extern float DAT_002fbae4;
extern int DAT_002fbae8;

// USA 002FB9CC <- EU 002FB9A8 (Ghidra, non-matching)
// GLOBAL DAT_002fbad0 float *
// GLOBAL DAT_002fbad4 float
// GLOBAL DAT_002fbad8 float
// GLOBAL DAT_002fbadc int
// GLOBAL DAT_002fbae0 int *
// GLOBAL DAT_002fbae4 float
// GLOBAL DAT_002fbae8 int

undefined4 func_002FB9CC(int *param_1)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define fStack_1c (*(float *)(albw_frame + 0x4))
  #define local_18 (*(float *)(albw_frame + 0x8))
  local_20 = *DAT_002fbad0;
  fStack_1c = DAT_002fbad0[1];
  local_18 = DAT_002fbad0[2];
  pfVar2 = (float *)func_00520FC0();
  func_00115C70(&local_20,pfVar2,(float *)(param_1 + 0xf4));
  iVar3 = func_004904CC(local_20,local_18);
  param_1[0xfa] = iVar3;
  fVar1 = DAT_002fbad8;
  fVar5 = DAT_002fbad4;
  param_1[0x13e] = param_1[0x238];
  iVar3 = DAT_002fbadc;
  fVar4 = ALBW_AS_F32(param_1[0x238]);
  fVar4 = fVar4 + (fVar5 - fVar4) * fVar1;
  param_1[0x238] = (int)ALBW_AS_U32(fVar4);
  if ((int)ALBW_AS_U32(fVar4) <= iVar3) {
    return 0;
  }
  param_1[0x139] = (int)ALBW_AS_U32(fVar5);
  param_1[0x13a] = (int)ALBW_AS_U32(fVar5);
  param_1[0x13b] = (int)ALBW_AS_U32(fVar5);
  param_1[0x238] = (int)ALBW_AS_U32(fVar5);
  func_002FC1A8(param_1);
  iVar3 = func_0051E6D0(*DAT_002fbae0,(float *)(param_1 + 0xf4),fVar5);
  if (iVar3 != 0) {
    iVar3 = func_00520FC0();
    fVar5 = *(float *)(iVar3 + 4) - ALBW_AS_F32(param_1[0xf5]);
    if (fVar5 <= DAT_002fbae4) {
      fVar5 = -fVar5;
    }
    if ((int)ALBW_AS_U32(fVar5) < DAT_002fbae8) {
      return func_006644B8(param_1 + 0x22f,2);
    }
  }
  return func_006644B8(param_1 + 0x22f,4);
}

