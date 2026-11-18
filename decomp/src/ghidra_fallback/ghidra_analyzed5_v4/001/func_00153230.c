#include "ghidra_types.h"

extern float func_001534C0(float fparam_0,float fparam_1,float fparam_2,float fparam_3,float fparam_4);
extern float func_00153528(float fparam_0,float fparam_1,float fparam_2,float fparam_3,float fparam_4);
extern float func_0058AA40(int param_1);
extern float DAT_00153354;
extern float DAT_00153358;
extern int DAT_0015335c;
extern float DAT_00153360;
extern float DAT_00153364;
extern int DAT_00153368;
extern float DAT_0015336c;
extern float DAT_00153370;
extern float DAT_00153374;
extern float DAT_00153378;
extern float DAT_0015337c;
extern float DAT_00153380;
extern int DAT_00153384;
extern float DAT_00153388;
extern float DAT_0015338c;
extern int DAT_00153390;
extern float DAT_00153394;

// USA 00153230 <- EU 00153234 (Ghidra, non-matching)
// GLOBAL DAT_00153354 float
// GLOBAL DAT_00153358 float
// GLOBAL DAT_0015335c int
// GLOBAL DAT_00153360 float
// GLOBAL DAT_00153364 float
// GLOBAL DAT_00153368 int
// GLOBAL DAT_0015336c float
// GLOBAL DAT_00153370 float
// GLOBAL DAT_00153374 float
// GLOBAL DAT_00153378 float
// GLOBAL DAT_0015337c float
// GLOBAL DAT_00153380 float
// GLOBAL DAT_00153384 int
// GLOBAL DAT_00153388 float
// GLOBAL DAT_0015338c float
// GLOBAL DAT_00153390 int
// GLOBAL DAT_00153394 float

void func_00153230(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = func_0058AA40(param_1);
  fVar1 = fVar1 + DAT_00153354;
  if ((int)ALBW_AS_U32(fVar1) <= DAT_0015335c) {
    fVar2 = func_001534C0(DAT_00153364,DAT_00153358,fVar1,DAT_00153360,DAT_00153354);
    goto LAB_00153348;
  }
  fVar2 = DAT_00153354;
  fVar3 = DAT_0015336c;
  fVar4 = DAT_00153370;
  if (DAT_00153368 < (int)ALBW_AS_U32(fVar1)) {
    fVar2 = DAT_00153374;
    if ((int)ALBW_AS_U32(fVar1) <= DAT_00153368 + 0x380000) {
LAB_001532d0:
      fVar2 = func_001534C0(fVar4,DAT_00153358,fVar1,fVar3,fVar2);
      goto LAB_00153348;
    }
    fVar3 = DAT_00153378;
    fVar4 = DAT_0015337c;
    if (DAT_00153368 + 0x600000 < (int)ALBW_AS_U32(fVar1)) {
      fVar2 = DAT_00153380;
      if ((int)ALBW_AS_U32(fVar1) <= DAT_00153368 + 0x7c0000) goto LAB_001532d0;
      fVar3 = DAT_00153388;
      fVar4 = DAT_0015338c;
      if (DAT_00153384 < (int)ALBW_AS_U32(fVar1)) {
        fVar2 = DAT_00153358;
        if ((int)ALBW_AS_U32(fVar1) <= DAT_00153390) {
          fVar2 = func_001534C0(DAT_0015338c,DAT_00153358,fVar1,DAT_00153388,DAT_00153394);
        }
        goto LAB_00153348;
      }
    }
  }
  fVar2 = func_00153528(fVar4,DAT_00153358,fVar1,fVar2,fVar3);
LAB_00153348:
  *(float *)(param_1 + 0x574) = fVar2;
  return;
}

