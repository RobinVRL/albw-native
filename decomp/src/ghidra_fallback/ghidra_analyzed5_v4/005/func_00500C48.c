#include "ghidra_types.h"

extern int func_0014FAFC(int param_1,uint param_2,float fparam_0);
extern int func_0014FDC4(int param_1,float *param_2,int param_3,float fparam_0,float fparam_1);
extern int func_004F8964(float *param_1,int param_2,float fparam_0);
extern float func_004F898C(void);
extern int func_00520FC0(void);
extern float func_0058AA40(int param_1);
extern float DAT_00500d04;
extern float DAT_00500d08;
extern int DAT_00500d0c;
extern float DAT_00500d10;
extern float DAT_00500d14;
extern float DAT_00500d18;
extern float DAT_00500d1c;
extern float DAT_00500d20;
extern float DAT_00500d24;

// USA 00500C48 <- EU 00500C20 (Ghidra, non-matching)
// GLOBAL DAT_00500d04 float
// GLOBAL DAT_00500d08 float
// GLOBAL DAT_00500d0c int
// GLOBAL DAT_00500d10 float
// GLOBAL DAT_00500d14 float
// GLOBAL DAT_00500d18 float
// GLOBAL DAT_00500d1c float
// GLOBAL DAT_00500d20 float
// GLOBAL DAT_00500d24 float

undefined4 func_00500C48(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = func_0058AA40(param_1);
  fVar3 = DAT_00500d24;
  fVar4 = DAT_00500d04;
  if ((int)ALBW_AS_U32(fVar2) + 0xbf800000U < 0x1100001) {
    fVar2 = (fVar2 - DAT_00500d10) * DAT_00500d14 * DAT_00500d1c - DAT_00500d18;
    *(float *)(param_1 + 0x574) = (DAT_00500d18 - fVar2 * fVar2) * DAT_00500d20;
    fVar2 = *(float *)(param_1 + 0x8f0);
    *(float *)(param_1 + 0x8f0) = fVar2 + (fVar3 - fVar2) * fVar4;
  }
  else {
    pfVar1 = (float *)func_00520FC0();
    func_0014FDC4(param_1,pfVar1,*(int *)(DAT_00500d0c + 4),*(float *)(param_1 + 0x8f0),DAT_00500d08
                 );
    fVar3 = *(float *)(param_1 + 0x8f0);
    *(float *)(param_1 + 0x8f0) = fVar3 + -fVar3 * fVar4;
  }
  func_0014FAFC(param_1,*(uint *)(param_1 + 1000),*(float *)(param_1 + 0x8f0));
  fVar4 = func_004F898C();
  return func_004F8964((float *)(param_1 + 0x3e0),1,fVar4);
}

