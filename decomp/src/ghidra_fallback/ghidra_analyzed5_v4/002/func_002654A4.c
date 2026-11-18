#include "ghidra_types.h"

extern float func_00265734(float fparam_0,float fparam_1,float fparam_2,float fparam_3,float fparam_4);
extern float func_0026579C(float fparam_0,float fparam_1,float fparam_2,float fparam_3,float fparam_4);
extern float func_0058AA40(int param_1);
extern float DAT_002655ec;
extern float DAT_002655f0;
extern int DAT_002655f4;
extern float DAT_002655f8;
extern float DAT_002655fc;
extern int DAT_00265600;
extern float DAT_00265604;
extern float DAT_00265608;
extern float DAT_0026560c;
extern float DAT_00265610;
extern float DAT_00265614;
extern float DAT_00265618;
extern int DAT_0026561c;
extern float DAT_00265620;
extern float DAT_00265624;
extern int DAT_00265628;
extern float DAT_0026562c;

// USA 002654A4 <- EU 002654CC (Ghidra, non-matching)
// GLOBAL DAT_002655ec float
// GLOBAL DAT_002655f0 float
// GLOBAL DAT_002655f4 int
// GLOBAL DAT_002655f8 float
// GLOBAL DAT_002655fc float
// GLOBAL DAT_00265600 int
// GLOBAL DAT_00265604 float
// GLOBAL DAT_00265608 float
// GLOBAL DAT_0026560c float
// GLOBAL DAT_00265610 float
// GLOBAL DAT_00265614 float
// GLOBAL DAT_00265618 float
// GLOBAL DAT_0026561c int
// GLOBAL DAT_00265620 float
// GLOBAL DAT_00265624 float
// GLOBAL DAT_00265628 int
// GLOBAL DAT_0026562c float

void func_002654A4(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = func_0058AA40(param_1);
  fVar1 = fVar1 + DAT_002655ec;
  if ((int)ALBW_AS_U32(fVar1) <= DAT_002655f4) {
    fVar2 = func_00265734(DAT_002655fc,DAT_002655f0,fVar1,DAT_002655f8,DAT_002655ec);
    goto LAB_002655e0;
  }
  fVar2 = DAT_002655ec;
  fVar3 = DAT_00265604;
  fVar4 = DAT_00265608;
  if (DAT_00265600 < (int)ALBW_AS_U32(fVar1)) {
    fVar2 = DAT_0026560c;
    if ((int)ALBW_AS_U32(fVar1) <= DAT_00265600 + 0x380000) {
LAB_00265568:
      fVar2 = func_00265734(fVar4,DAT_002655f0,fVar1,fVar3,fVar2);
      goto LAB_002655e0;
    }
    fVar3 = DAT_00265610;
    fVar4 = DAT_00265614;
    if (DAT_00265600 + 0x600000 < (int)ALBW_AS_U32(fVar1)) {
      fVar2 = DAT_00265618;
      if ((int)ALBW_AS_U32(fVar1) <= DAT_00265600 + 0x7c0000) goto LAB_00265568;
      fVar3 = DAT_00265620;
      fVar4 = DAT_00265624;
      if (DAT_0026561c < (int)ALBW_AS_U32(fVar1)) {
        fVar2 = DAT_002655f0;
        if ((int)ALBW_AS_U32(fVar1) <= DAT_00265628) {
          fVar2 = func_00265734(DAT_00265624,DAT_002655f0,fVar1,DAT_00265620,DAT_0026562c);
        }
        goto LAB_002655e0;
      }
    }
  }
  fVar2 = func_0026579C(fVar4,DAT_002655f0,fVar1,fVar2,fVar3);
LAB_002655e0:
  *(float *)(param_1 + 0x574) = fVar2;
  return;
}

