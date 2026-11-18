#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_00115DAC(float *param_1,float *param_2,float *param_3,float fparam_0);
extern int func_004D7F70(float *param_1,uint param_2);
extern float *DAT_003596dc;
extern float DAT_003596e0;
extern float DAT_003596e4;
extern float DAT_003596e8;
extern float DAT_003596ec;
extern int *DAT_003596f0;
extern float DAT_003596f4;

// USA 003595D4 <- EU 003595B0 (Ghidra, non-matching)
// GLOBAL DAT_003596dc float *
// GLOBAL DAT_003596e0 float
// GLOBAL DAT_003596e4 float
// GLOBAL DAT_003596e8 float
// GLOBAL DAT_003596ec float
// GLOBAL DAT_003596f0 int *
// GLOBAL DAT_003596f4 float

void func_003595D4(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define afStack_18 ((float *)(albw_frame + 0x8))
  fVar4 = DAT_003596f4;
  if ((uint)param_1[10] < (uint)ALBW_AS_U32(param_1[0xb])) {
    param_1[10] = ALBW_AS_F32(((int)param_1[10] + 1));
    func_00115C70(afStack_18,DAT_003596dc,param_1);
    func_00115DAC(param_1 + 6,afStack_18,param_1 + 6,DAT_003596e0);
    func_00115D70(param_1 + 6,param_1 + 6,DAT_003596e4);
    func_00115C54(param_1,param_1,param_1 + 6);
    fVar1 = DAT_003596ec;
    fVar4 = DAT_003596e8;
    fVar2 = *param_1;
    fVar3 = DAT_003596e8;
    if ((DAT_003596e8 <= fVar2) && (fVar3 = fVar2, DAT_003596ec < fVar2)) {
      fVar3 = DAT_003596ec;
    }
    param_1[3] = fVar3;
    fVar2 = param_1[1];
    fVar3 = fVar4;
    if ((fVar4 <= fVar2) && (fVar3 = fVar2, fVar1 < fVar2)) {
      fVar3 = fVar1;
    }
    param_1[4] = fVar3;
    fVar3 = param_1[2];
    if ((fVar4 <= fVar3) && (fVar4 = fVar3, fVar1 < fVar3)) {
      fVar4 = fVar1;
    }
    param_1[5] = fVar4;
    func_004D7F70(param_1 + 3,(uint)ALBW_AS_U32(param_1[9]));
    param_1[9] = ALBW_AS_F32((*DAT_003596f0 + (int)ALBW_AS_U32(param_1[9])));
    return;
  }
  *param_1 = DAT_003596f4;
  param_1[1] = fVar4;
  param_1[2] = fVar4;
  param_1[3] = fVar4;
  param_1[4] = fVar4;
  param_1[5] = fVar4;
  return;
}

