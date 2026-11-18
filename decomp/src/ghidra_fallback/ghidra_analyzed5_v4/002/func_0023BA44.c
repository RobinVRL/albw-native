#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern float func_00115DC8(float *param_1);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004D82C4(float *param_1,float *param_2,float *param_3);
extern int DAT_0023bbd8;
extern uint *DAT_0023bbdc;
extern int DAT_0023bbe0;
extern int DAT_0023bbe4;
extern float DAT_0023bbe8;
extern float DAT_0023bbec;
extern int DAT_0023bbf0;
extern float DAT_0023bbf4;
extern float DAT_0023bbf8;
extern float DAT_0023bbfc;

// USA 0023BA44 <- EU 0023BA44 (Ghidra, non-matching)
// GLOBAL DAT_0023bbd8 int
// GLOBAL DAT_0023bbdc uint *
// GLOBAL DAT_0023bbe0 int
// GLOBAL DAT_0023bbe4 int
// GLOBAL DAT_0023bbe8 float
// GLOBAL DAT_0023bbec float
// GLOBAL DAT_0023bbf0 int
// GLOBAL DAT_0023bbf4 float
// GLOBAL DAT_0023bbf8 float
// GLOBAL DAT_0023bbfc float

void func_0023BA44(int *param_1,float *param_2)

{
  uint *puVar1;
  int iVar2;
  float *pfVar3;
  int *piVar4;
  float fVar5;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(int *)(albw_frame + 0x4))
  func_00115C54((float *)(param_1 + 0xf4),(float *)(param_1 + 0xf4),param_2);
  puVar1 = DAT_0023bbdc;
  if (DAT_0023bbd8 <
      (int)ALBW_AS_U32(SQRT(ALBW_AS_F32(param_1[0xf7]) * ALBW_AS_F32(param_1[0xf7]) +
                ALBW_AS_F32(param_1[0xf8]) * ALBW_AS_F32(param_1[0xf8]) +
                ALBW_AS_F32(param_1[0xf9]) * ALBW_AS_F32(param_1[0xf9])))) {
    piVar4 = param_1 + 0x109;
    if (param_1[0xd1] == 0) {
      *piVar4 = 0;
      param_1[0x10a] = 0;
    }
    else {
      iVar2 = *piVar4;
      if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == param_1[0x10a])) {
        func_00110848(iVar2);
      }
      func_004A1B9C(&local_20,param_1[0xd1],puVar1);
      *piVar4 = local_20;
      param_1[0x10a] = local_1c;
    }
    if (param_1[0x11c] < 2) {
      local_1c = DAT_0023bbe0;
      local_20 = DAT_0023bbe4;
      func_00150A84(param_1,&local_20,0);
    }
  }
  pfVar3 = (float *)(param_1 + 0x119);
  func_00115DC8(pfVar3);
  func_004D82C4((float *)(param_1 + 0xf7),(float *)(param_1 + 0xf7),pfVar3);
  if (DAT_0023bbf0 <
      (int)ALBW_AS_U32((*pfVar3 * DAT_0023bbe8 + ALBW_AS_F32(param_1[0x11a]) * DAT_0023bbec +
           ALBW_AS_F32(param_1[0x11b]) * DAT_0023bbe8))) {
    fVar5 = ALBW_AS_F32(param_1[0xf7]) * DAT_0023bbf4;
    fVar6 = ALBW_AS_F32(param_1[0xf8]) * DAT_0023bbf8;
    param_1[0xf9] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0xf9]) * DAT_0023bbf4));
    param_1[0xf7] = (int)ALBW_AS_U32(fVar5);
    param_1[0xf8] = (int)ALBW_AS_U32(fVar6);
  }
  else {
    fVar6 = ALBW_AS_F32(param_1[0xf8]) * DAT_0023bbfc;
    fVar5 = ALBW_AS_F32(param_1[0xf9]) * DAT_0023bbfc;
    param_1[0xf7] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0xf7]) * DAT_0023bbfc));
    param_1[0xf8] = (int)ALBW_AS_U32(fVar6);
    param_1[0xf9] = (int)ALBW_AS_U32(fVar5);
  }
  if (*(char *)((int)param_1 + 0x436) == '\0') {
    *(undefined1 *)((int)param_1 + 0x436) = 1;
  }
  param_1[0x11c] = param_1[0x11c] + 1;
  return;
}

