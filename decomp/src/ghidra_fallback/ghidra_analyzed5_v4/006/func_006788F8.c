#include "ghidra_types.h"

extern int DAT_006789f4;
extern float DAT_006789f8;
extern float DAT_006789fc;
extern float DAT_00678a00;
extern float DAT_00678a04;
extern float DAT_00678a08;

// USA 006788F8 <- EU 006788D0 (Ghidra, non-matching)
// GLOBAL DAT_006789f4 int
// GLOBAL DAT_006789f8 float
// GLOBAL DAT_006789fc float
// GLOBAL DAT_00678a00 float
// GLOBAL DAT_00678a04 float
// GLOBAL DAT_00678a08 float

undefined4 func_006788F8(int *param_1,float *param_2,float *param_3,float fparam_0,float fparam_1)

{
  char cVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar7 = (*param_2 - *param_3) + fparam_0;
  fVar6 = (*param_2 - param_3[-2]) + fparam_0;
  fVar9 = fVar7;
  if (fVar7 <= fparam_1) {
    fVar9 = fVar6;
  }
  if ((fVar7 > fparam_1 || fVar6 < fparam_1) || fparam_1 == fVar9) {
    uVar5 = 0;
  }
  else {
    *param_1 = (int)(param_3 + -2);
    iVar2 = DAT_006789f4;
    cVar1 = *(char *)(param_2 + 3);
    if (cVar1 == '\0') {
      fVar9 = param_3[1];
      param_1[2] = (int)ALBW_AS_U32(fVar7);
      param_1[3] = (int)ALBW_AS_U32(fVar6);
      param_1[4] = (int)ALBW_AS_U32(fVar9);
      param_1[5] = iVar2;
      param_1[6] = iVar2;
      param_1[7] = iVar2;
    }
    else if (cVar1 == '\x01') {
      fVar9 = param_3[1];
      fVar8 = param_3[-1];
      param_1[2] = (int)ALBW_AS_U32(fVar7);
      param_1[3] = (int)ALBW_AS_U32(fVar6);
      param_1[4] = (int)ALBW_AS_U32(fVar9);
      param_1[5] = (int)ALBW_AS_U32(((fVar8 - fVar9) / (fVar6 - fVar7)));
      param_1[6] = iVar2;
      param_1[7] = iVar2;
    }
    else if (cVar1 == '\x02') {
      fVar10 = param_3[1];
      fVar11 = param_3[-1];
      param_1[2] = (int)ALBW_AS_U32(fVar7);
      param_1[3] = (int)ALBW_AS_U32(fVar6);
      fVar4 = DAT_00678a04;
      fVar3 = DAT_00678a00;
      fVar8 = DAT_006789fc;
      fVar9 = DAT_006789f8;
      fVar6 = fVar6 - fVar7;
      fVar11 = fVar10 - fVar11;
      param_1[4] = (int)ALBW_AS_U32(fVar10);
      fVar7 = DAT_00678a08;
      param_1[5] = (int)ALBW_AS_U32(fVar9);
      fVar8 = fVar8 / fVar6;
      param_1[6] = (int)ALBW_AS_U32((((fVar6 * fVar3 * fVar9 - fVar11 * fVar7) - fVar6 * fVar9) * fVar8 * fVar8))
      ;
      param_1[7] = (int)ALBW_AS_U32(((fVar11 * fVar4 + fVar6 * fVar9 + fVar6 * fVar9) * fVar8 * fVar8 * fVar8));
    }
    uVar5 = 1;
  }
  return uVar5;
}

