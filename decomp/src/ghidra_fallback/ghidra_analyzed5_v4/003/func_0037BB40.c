#include "ghidra_types.h"

extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern float fRam0037bb68;

// USA 0037BB40 <- EU 0037BB1C (Ghidra, non-matching)
// GLOBAL UNK_0037bb68 float

void func_0037BB40(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,uint param_4,
                  float fparam_0,float fparam_1)

{
  float fVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define fStack_18 (*(float *)(albw_frame + 0x8))
  #define afStack_14 ((float *)(albw_frame + 0xc))
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = *param_3;
  param_1[4] = param_3[1];
  param_1[5] = param_3[2];
  param_1[9] = ALBW_AS_U32(fparam_0);
  param_1[0xb] = ALBW_AS_U32(fparam_0);
  param_1[10] = ALBW_AS_U32(fparam_1);
  fVar1 = fRam0037bb68;
  func_00115154(&fStack_18,afStack_14,param_4);
  param_1[6] = ALBW_AS_U32(fStack_18 * fVar1);
  param_1[8] = ALBW_AS_U32(afStack_14[0] * fVar1);
  return;
}

