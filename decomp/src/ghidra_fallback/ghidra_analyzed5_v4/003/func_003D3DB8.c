#include "ghidra_types.h"

extern int func_003D534C(float *param_1,float fparam_0);
extern float DAT_003d4178;
extern float DAT_003d417c;
extern float DAT_003d4180;
extern float *DAT_003d4184;
extern float DAT_003d41f8;

// USA 003D3DB8 <- EU 003D3D94 [EDITED REGION: check by hand] (Ghidra, non-matching)
// GLOBAL DAT_003d4178 float
// GLOBAL DAT_003d417c float
// GLOBAL DAT_003d4180 float
// GLOBAL DAT_003d4184 float *
// GLOBAL DAT_003d41f8 float

float func_003D3DB8(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
  fVar17 = *param_3;
  fVar12 = param_3[1];
  fVar14 = param_3[2];
  fVar11 = SQRT(fVar17 * fVar17 + fVar12 * fVar12 + fVar14 * fVar14);
  if (fVar11 == DAT_003d4178) {
    return DAT_003d4178;
  }
  fVar13 = *(float *)(param_1 + 0x86c);
  if ((int)ALBW_AS_U32(fVar11) < 0x3f800000) {
    if (fVar11 <= DAT_003d4180 - fVar13) {
      return DAT_003d4178;
    }
    fVar13 = (DAT_003d4180 / fVar13) * (fVar11 - (DAT_003d4180 - fVar13));
  }
  else {
    if (fVar13 + DAT_003d4180 <= fVar11) {
      return DAT_003d4178;
    }
    fVar13 = (DAT_003d417c / fVar13) * (fVar11 - (fVar13 + DAT_003d4180));
  }
  fVar11 = DAT_003d4180 / fVar11;
  fVar17 = fVar17 * fVar11;
  fVar12 = fVar12 * fVar11;
  fVar14 = fVar14 * fVar11;
  fVar13 = *(float *)(param_1 + 0x868) * fVar13 * fVar13;
  fVar23 = fVar17 * *param_2 + fVar12 * param_2[3] + fVar14 * param_2[6];
  fVar24 = fVar17 * param_2[1] + fVar12 * param_2[4] + fVar14 * param_2[7];
  fVar22 = fVar17 * param_2[2] + fVar12 * param_2[5] + fVar14 * param_2[8];
  fVar11 = fVar23 - fVar23 * fVar13;
  fVar12 = fVar22 - fVar22 * fVar13;
  fVar14 = fVar24 + (DAT_003d417c - fVar24) * fVar13;
  fVar17 = fVar11 * fVar11 + fVar14 * fVar14 + fVar12 * fVar12;
  if (fVar17 == DAT_003d4178) {
    fVar11 = *DAT_003d4184;
    fVar14 = DAT_003d4184[1];
    fVar12 = DAT_003d4184[2];
  }
  else {
    fVar17 = DAT_003d4180 / SQRT(fVar17);
    fVar11 = fVar11 * fVar17;
    fVar14 = fVar14 * fVar17;
    fVar12 = fVar12 * fVar17;
  }
  bVar8 = false;
  if (fVar11 == *DAT_003d4184) {
    bVar8 = fVar14 == DAT_003d4184[1];
  }
  bVar9 = false;
  if (bVar8) {
    bVar9 = fVar12 == DAT_003d4184[2];
  }
  fVar17 = DAT_003d4178;
  if (!bVar9) {
    fVar15 = fVar24 * fVar12 - fVar22 * fVar14;
    fVar13 = fVar22 * fVar11 - fVar23 * fVar12;
    fVar17 = fVar23 * fVar14 - fVar24 * fVar11;
    if (SQRT(fVar15 * fVar15 + fVar13 * fVar13 + fVar17 * fVar17) == DAT_003d4178) {
      fVar17 = DAT_003d4184[10];
      fVar2 = DAT_003d4184[3];
      fVar6 = DAT_003d4184[9];
      fVar1 = DAT_003d4184[4];
      fVar4 = DAT_003d4184[5];
      fVar5 = DAT_003d4184[6];
      fVar15 = DAT_003d4184[7];
      fVar7 = DAT_003d4184[8];
      fVar3 = DAT_003d4184[0xb];
    }
    else {
      fVar1 = DAT_003d4180 / SQRT(fVar15 * fVar15 + fVar13 * fVar13 + fVar17 * fVar17);
      fVar15 = fVar15 * fVar1;
      fVar13 = fVar13 * fVar1;
      fVar17 = fVar17 * fVar1;
      fVar7 = fVar22 * fVar15 - fVar23 * fVar17;
      fVar3 = fVar14 * fVar17 - fVar12 * fVar13;
      fVar2 = fVar24 * fVar17 - fVar22 * fVar13;
      fVar10 = fVar23 * fVar13 - fVar24 * fVar15;
      fVar18 = fVar12 * fVar15 - fVar11 * fVar17;
      fVar16 = fVar11 * fVar13 - fVar14 * fVar15;
      fVar1 = fVar13 * fVar15 + fVar18 * fVar2 + fVar23 * fVar14;
      fVar4 = fVar17 * fVar15 + fVar16 * fVar2 + fVar23 * fVar12;
      fVar5 = fVar13 * fVar15 + fVar3 * fVar7 + fVar24 * fVar11;
      fVar6 = fVar17 * fVar15 + fVar3 * fVar10 + fVar22 * fVar11;
      fVar2 = fVar15 * fVar15 + fVar3 * fVar2 + fVar11 * fVar23;
      fVar15 = fVar13 * fVar13 + fVar18 * fVar7 + fVar14 * fVar24;
      fVar3 = fVar17 * fVar17 + fVar16 * fVar10 + fVar12 * fVar22;
      fVar7 = fVar17 * fVar13 + fVar16 * fVar7 + fVar24 * fVar12;
      fVar17 = fVar17 * fVar13 + fVar18 * fVar10 + fVar22 * fVar14;
    }
    fVar16 = *param_2;
    fVar18 = param_2[3];
    fVar19 = param_2[6];
    fVar20 = param_2[1];
    fVar25 = param_2[4];
    fVar27 = param_2[7];
    fVar21 = param_2[2];
    fVar26 = param_2[5];
    fVar10 = param_2[8];
    *param_2 = fVar16 * fVar2 + fVar20 * fVar5 + fVar21 * fVar6;
    fVar13 = DAT_003d41f8;
    param_2[1] = fVar16 * fVar1 + fVar20 * fVar15 + fVar21 * fVar17;
    param_2[2] = fVar16 * fVar4 + fVar20 * fVar7 + fVar21 * fVar3;
    param_2[3] = fVar18 * fVar2 + fVar25 * fVar5 + fVar26 * fVar6;
    param_2[4] = fVar18 * fVar1 + fVar25 * fVar15 + fVar26 * fVar17;
    param_2[5] = fVar18 * fVar4 + fVar25 * fVar7 + fVar26 * fVar3;
    param_2[6] = fVar19 * fVar2 + fVar27 * fVar5 + fVar10 * fVar6;
    param_2[7] = fVar19 * fVar1 + fVar27 * fVar15 + fVar10 * fVar17;
    param_2[8] = fVar19 * fVar4 + fVar27 * fVar7 + fVar10 * fVar3;
    func_003D534C(param_2,fVar13);
    fVar17 = SQRT((fVar23 - fVar11) * (fVar23 - fVar11) + (fVar24 - fVar14) * (fVar24 - fVar14) +
                  (fVar22 - fVar12) * (fVar22 - fVar12));
  }
  return fVar17;
}

