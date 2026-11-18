#include "ghidra_types.h"

extern float func_00265734(float fparam_0,float fparam_1,float fparam_2,float fparam_3,float fparam_4);
extern float func_0026579C(float fparam_0,float fparam_1,float fparam_2,float fparam_3,float fparam_4);
extern float DAT_00265964;
extern int DAT_00265968;
extern float DAT_0026596c;
extern float DAT_00265970;
extern float DAT_00265974;
extern float DAT_00265978;
extern int DAT_0026597c;
extern float DAT_00265980;
extern int DAT_00265984;
extern float DAT_00265988;
extern float DAT_0026598c;
extern int DAT_00265990;
extern float DAT_00265994;
extern int DAT_00265998;
extern float DAT_0026599c;

// USA 00265800 <- EU 00265828 (Ghidra, non-matching)
// GLOBAL DAT_00265964 float
// GLOBAL DAT_00265968 int
// GLOBAL DAT_0026596c float
// GLOBAL DAT_00265970 float
// GLOBAL DAT_00265974 float
// GLOBAL DAT_00265978 float
// GLOBAL DAT_0026597c int
// GLOBAL DAT_00265980 float
// GLOBAL DAT_00265984 int
// GLOBAL DAT_00265988 float
// GLOBAL DAT_0026598c float
// GLOBAL DAT_00265990 int
// GLOBAL DAT_00265994 float
// GLOBAL DAT_00265998 int
// GLOBAL DAT_0026599c float

bool func_00265800(int param_1)

{
  bool bVar1;
  float fVar2;
  float fparam_2;
  float fparam_4;
  float fparam_3;
  
  fVar2 = DAT_00265964;
  fparam_2 = *(float *)(param_1 + 0x8fc);
  bVar1 = false;
  if (DAT_00265968 < (int)ALBW_AS_U32(fparam_2)) {
    if (DAT_0026597c < (int)ALBW_AS_U32(fparam_2)) {
      fparam_4 = DAT_00265988;
      fparam_3 = DAT_00265980;
      if (DAT_00265984 < (int)ALBW_AS_U32(fparam_2)) {
        if ((int)ALBW_AS_U32(fparam_2) <= DAT_00265984 + 0x280000) {
          fVar2 = func_00265734(DAT_0026596c,DAT_00265964,fparam_2,DAT_00265988,DAT_0026598c);
          goto LAB_00265954;
        }
        fparam_4 = DAT_00265994;
        fparam_3 = DAT_0026598c;
        if (DAT_00265990 < (int)ALBW_AS_U32(fparam_2)) {
          bVar1 = DAT_00265998 < (int)ALBW_AS_U32(fparam_2);
          if (DAT_00265998 < (int)ALBW_AS_U32(fparam_2)) {
            *(float *)(param_1 + 0x8fc) = DAT_00265974;
          }
          else {
            fVar2 = func_00265734(DAT_0026596c,DAT_00265964,fparam_2,DAT_00265994,DAT_0026599c);
          }
          goto LAB_00265954;
        }
      }
      fVar2 = func_0026579C(DAT_0026596c,DAT_00265964,fparam_2,fparam_3,fparam_4);
    }
    else {
      fVar2 = func_00265734(DAT_00265978,DAT_00265964,fparam_2,DAT_00265970,DAT_00265980);
    }
  }
  else {
    fVar2 = func_0026579C(DAT_00265978,DAT_00265964,fparam_2,DAT_00265974,DAT_00265970);
  }
LAB_00265954:
  *(float *)(param_1 + 0x574) = fVar2;
  return bVar1;
}

