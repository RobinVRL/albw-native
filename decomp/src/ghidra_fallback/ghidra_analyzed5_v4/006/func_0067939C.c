#include "ghidra_types.h"

extern int DAT_006794a4;
extern float DAT_006794a8;
extern float DAT_006794ac;
extern float DAT_006794b0;
extern float DAT_006794b4;

// USA 0067939C <- EU 00679374 (Ghidra, non-matching)
// GLOBAL DAT_006794a4 int
// GLOBAL DAT_006794a8 float
// GLOBAL DAT_006794ac float
// GLOBAL DAT_006794b0 float
// GLOBAL DAT_006794b4 float

undefined4 func_0067939C(int *param_1,float *param_2,float *param_3,float fparam_0,float fparam_1)

{
  char cVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar7 = (*param_2 - *param_3) + fparam_0;
  fVar5 = (*param_2 - param_3[-4]) + fparam_0;
  fVar8 = fVar7;
  if (fVar7 <= fparam_1) {
    fVar8 = fVar5;
  }
  if ((fVar7 > fparam_1 || fVar5 < fparam_1) || fparam_1 == fVar8) {
    uVar4 = 0;
  }
  else {
    *param_1 = (int)(param_3 + -4);
    iVar2 = DAT_006794a4;
    cVar1 = *(char *)(param_2 + 3);
    if (cVar1 == '\0') {
      fVar8 = param_3[1];
      param_1[2] = (int)ALBW_AS_U32(fVar7);
      param_1[3] = (int)ALBW_AS_U32(fVar5);
      param_1[4] = (int)ALBW_AS_U32(fVar8);
      param_1[5] = iVar2;
      param_1[6] = iVar2;
      param_1[7] = iVar2;
    }
    else if (cVar1 == '\x01') {
      fVar8 = param_3[1];
      fVar10 = param_3[-3];
      param_1[2] = (int)ALBW_AS_U32(fVar7);
      param_1[3] = (int)ALBW_AS_U32(fVar5);
      param_1[4] = (int)ALBW_AS_U32(fVar8);
      param_1[5] = (int)ALBW_AS_U32(((fVar10 - fVar8) / (fVar5 - fVar7)));
      param_1[6] = iVar2;
      param_1[7] = iVar2;
    }
    else if (cVar1 == '\x02') {
      fVar9 = param_3[3];
      fVar6 = param_3[-2];
      fVar11 = param_3[1];
      fVar12 = param_3[-3];
      param_1[2] = (int)ALBW_AS_U32(fVar7);
      param_1[3] = (int)ALBW_AS_U32(fVar5);
      fVar3 = DAT_006794b0;
      fVar10 = DAT_006794ac;
      fVar8 = DAT_006794a8;
      fVar5 = fVar5 - fVar7;
      fVar12 = fVar11 - fVar12;
      fVar9 = -fVar9;
      param_1[4] = (int)ALBW_AS_U32(fVar11);
      fVar7 = DAT_006794b4;
      param_1[5] = (int)ALBW_AS_U32(fVar9);
      fVar8 = fVar8 / fVar5;
      param_1[6] = (int)ALBW_AS_U32((((fVar5 * fVar10 * fVar9 - fVar12 * fVar7) - fVar5 * -fVar6) *
                        fVar8 * fVar8));
      param_1[7] = (int)ALBW_AS_U32(((fVar12 * fVar3 + fVar5 * fVar9 + fVar5 * -fVar6) * fVar8 * fVar8 * fVar8));
    }
    uVar4 = 1;
  }
  return uVar4;
}

