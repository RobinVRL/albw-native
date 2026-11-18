#include "ghidra_types.h"

extern float func_00265734(float fparam_0,float fparam_1,float fparam_2,float fparam_3,float fparam_4);
extern float func_0026579C(float fparam_0,float fparam_1,float fparam_2,float fparam_3,float fparam_4);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0058A8F0(int param_1);
extern float func_0058AA40(int param_1);
extern int func_006605D4(undefined4 *param_1,undefined1 param_2);
extern int DAT_0026530c;
extern float DAT_00265310;
extern float DAT_00265314;
extern int DAT_00265318;
extern float DAT_0026531c;
extern float DAT_00265320;
extern float DAT_00265324;
extern int DAT_00265328;
extern float DAT_0026532c;

// USA 00265214 <- EU 0026523C (Ghidra, non-matching)
// GLOBAL DAT_0026530c int
// GLOBAL DAT_00265310 float
// GLOBAL DAT_00265314 float
// GLOBAL DAT_00265318 int
// GLOBAL DAT_0026531c float
// GLOBAL DAT_00265320 float
// GLOBAL DAT_00265324 float
// GLOBAL DAT_00265328 int
// GLOBAL DAT_0026532c float

undefined4 func_00265214(int param_1)

{
  int iVar1;
  float fparam_2;
  float fVar2;
  
  func_0051D2F4((int *)(param_1 + 0x904),0,DAT_0026530c,0x7fffffff,DAT_00265310);
  iVar1 = func_0058A8F0(param_1);
  if (iVar1 != 0) {
    return func_006605D4((undefined4 *)(param_1 + 0x918),0);
  }
  fparam_2 = func_0058AA40(param_1);
  fVar2 = DAT_00265314;
  if (DAT_00265318 < (int)ALBW_AS_U32(fparam_2)) {
    if (DAT_00265318 + 0x140000 < (int)ALBW_AS_U32(fparam_2)) {
      if ((int)ALBW_AS_U32(fparam_2) <= DAT_00265328) {
        fVar2 = func_00265734(DAT_0026531c,DAT_00265314,fparam_2,DAT_00265320,DAT_0026532c);
      }
    }
    else {
      fVar2 = func_0026579C(DAT_0026531c,DAT_00265314,fparam_2,DAT_00265324,DAT_00265320);
    }
  }
  *(float *)(param_1 + 0x574) = fVar2;
  return 0;
}

