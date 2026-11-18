#include "ghidra_types.h"

extern int func_00115B3C(undefined4 *param_1);
extern float DAT_004925d4;
extern float DAT_004925d8;

// USA 00492298 <- EU 00492270 (Ghidra, non-matching)
// GLOBAL DAT_004925d4 float
// GLOBAL DAT_004925d8 float

undefined4 func_00492298(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
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
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  
  fVar11 = param_2[5];
  fVar31 = param_2[10];
  fVar7 = param_2[4];
  fVar14 = param_2[0xb];
  fVar9 = param_2[6];
  fVar26 = param_2[0xf];
  fVar12 = param_2[7];
  fVar15 = param_2[8];
  fVar13 = param_2[9];
  fVar8 = param_2[2];
  fVar10 = param_2[3];
  fVar30 = fVar7 * fVar31;
  fVar2 = param_2[0xc];
  fVar3 = param_2[0xd];
  fVar4 = param_2[0xe];
  fVar5 = *param_2;
  fVar6 = param_2[1];
  fVar16 = fVar11 * fVar14;
  fVar19 = fVar11 * fVar15;
  fVar1 = fVar12 * fVar31;
  fVar17 = fVar12 * fVar15;
  fVar21 = fVar9 * fVar13;
  fVar22 = (((((fVar11 * fVar31 * fVar26 + fVar9 * fVar14 * fVar3 + fVar12 * fVar13 * fVar4) * fVar5
               + fVar6 * (fVar7 * fVar14 * fVar4 + fVar9 * fVar15 * fVar26 + fVar1 * fVar2) +
               fVar8 * (fVar7 * fVar13 * fVar26 + fVar16 * fVar2 + fVar17 * fVar3) +
              fVar10 * (fVar30 * fVar3 + fVar19 * fVar4 + fVar21 * fVar2)) -
             fVar5 * (fVar16 * fVar4 + fVar21 * fVar26 + fVar1 * fVar3)) -
            fVar6 * (fVar30 * fVar26 + fVar9 * fVar14 * fVar2 + fVar17 * fVar4)) -
           fVar8 * (fVar7 * fVar14 * fVar3 + fVar19 * fVar26 + fVar12 * fVar13 * fVar2)) -
           fVar10 * (fVar7 * fVar13 * fVar4 + fVar11 * fVar31 * fVar2 + fVar9 * fVar15 * fVar3);
  if (fVar22 == DAT_004925d4) {
    return func_00115B3C(param_1);
  }
  fVar28 = fVar12 * fVar3 - fVar11 * fVar26;
  fVar25 = fVar13 * fVar26 - fVar14 * fVar3;
  fVar29 = fVar15 * fVar26 - fVar14 * fVar2;
  fVar23 = fVar7 * fVar26 - fVar12 * fVar2;
  fVar32 = fVar31 * fVar3 - fVar13 * fVar4;
  fVar27 = fVar31 * fVar26 - fVar14 * fVar4;
  fVar18 = fVar31 * fVar2 - fVar15 * fVar4;
  fVar22 = DAT_004925d8 / fVar22;
  fVar24 = fVar7 * fVar3 - fVar11 * fVar2;
  fVar20 = fVar9 * fVar26 - fVar12 * fVar4;
  fVar26 = fVar13 * fVar2 - fVar15 * fVar3;
  fVar3 = fVar11 * fVar4 - fVar9 * fVar3;
  fVar2 = fVar9 * fVar2 - fVar7 * fVar4;
  fVar21 = fVar21 - fVar11 * fVar31;
  fVar17 = fVar17 - fVar7 * fVar14;
  fVar1 = fVar1 - fVar9 * fVar14;
  fVar19 = fVar19 - fVar7 * fVar13;
  fVar16 = fVar16 - fVar12 * fVar13;
  fVar30 = fVar30 - fVar9 * fVar15;
  param_1[2] = (fVar6 * fVar20 + fVar8 * fVar28 + fVar10 * fVar3) * fVar22;
  param_1[5] = ((fVar5 * fVar27 - fVar8 * fVar29) - fVar10 * fVar18) * fVar22;
  param_1[6] = ((fVar8 * fVar23 + fVar10 * fVar2) - fVar5 * fVar20) * fVar22;
  param_1[9] = ((fVar6 * fVar29 + fVar10 * fVar26) - fVar5 * fVar25) * fVar22;
  param_1[10] = ((fVar10 * fVar24 - fVar5 * fVar28) - fVar6 * fVar23) * fVar22;
  *param_1 = ((fVar11 * fVar27 - fVar9 * fVar25) - fVar12 * fVar32) * fVar22;
  param_1[1] = ((fVar8 * fVar25 + fVar10 * fVar32) - fVar6 * fVar27) * fVar22;
  param_1[4] = ((fVar9 * fVar29 + fVar12 * fVar18) - fVar7 * fVar27) * fVar22;
  param_1[8] = ((fVar7 * fVar25 - fVar11 * fVar29) - fVar12 * fVar26) * fVar22;
  param_1[0xe] = ((-(fVar8 * fVar24) - fVar5 * fVar3) - fVar6 * fVar2) * fVar22;
  param_1[3] = (fVar6 * fVar1 + fVar8 * fVar16 + fVar10 * fVar21) * fVar22;
  param_1[7] = ((fVar8 * fVar17 + fVar10 * fVar30) - fVar5 * fVar1) * fVar22;
  param_1[0xb] = ((fVar10 * fVar19 - fVar5 * fVar16) - fVar6 * fVar17) * fVar22;
  param_1[0xf] = ((-(fVar8 * fVar19) - fVar5 * fVar21) - fVar6 * fVar30) * fVar22;
  param_1[0xc] = ((fVar7 * fVar32 - fVar11 * fVar18) + fVar9 * fVar26) * fVar22;
  param_1[0xd] = ((fVar6 * fVar18 - fVar8 * fVar26) - fVar5 * fVar32) * fVar22;
  return 0;
}

