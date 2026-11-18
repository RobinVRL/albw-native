#include "ghidra_types.h"

extern int func_0011558C(float *param_1,float *param_2);
extern int func_00115B3C(undefined4 *param_1);
extern int func_0057D5C4(int *param_1);
extern float DAT_004925d4;
extern float DAT_004925d8;

// USA 0049224C <- EU 00492224 (Ghidra, non-matching)
// GLOBAL DAT_004925d4 float
// GLOBAL DAT_004925d8 float

undefined4 func_0049224C(int param_1)

{
  int iVar1;
  int *piVar2;
  float *pfVar3;
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
  float fVar33;
  float fVar34;
  float fVar35;
  
  if ((*(uint *)(param_1 + 0x2c8) & 1) == 0) {
    iVar1 = param_1 + 0x10;
  }
  else {
    iVar1 = param_1 + 400;
  }
  func_0011558C((float *)(param_1 + 0x120),(float *)(iVar1 + 4));
  if ((*(uint *)(param_1 + 0x2c8) & 2) == 0) {
    piVar2 = (int *)(param_1 + 0x68);
  }
  else {
    piVar2 = (int *)(param_1 + 500);
  }
  pfVar3 = (float *)func_0057D5C4(piVar2);
  fVar14 = pfVar3[5];
  fVar34 = pfVar3[10];
  fVar10 = pfVar3[4];
  fVar17 = pfVar3[0xb];
  fVar12 = pfVar3[6];
  fVar29 = pfVar3[0xf];
  fVar15 = pfVar3[7];
  fVar18 = pfVar3[8];
  fVar16 = pfVar3[9];
  fVar11 = pfVar3[2];
  fVar13 = pfVar3[3];
  fVar33 = fVar10 * fVar34;
  fVar5 = pfVar3[0xc];
  fVar6 = pfVar3[0xd];
  fVar7 = pfVar3[0xe];
  fVar8 = *pfVar3;
  fVar9 = pfVar3[1];
  fVar19 = fVar14 * fVar17;
  fVar22 = fVar14 * fVar18;
  fVar4 = fVar15 * fVar34;
  fVar20 = fVar15 * fVar18;
  fVar24 = fVar12 * fVar16;
  fVar25 = (((((fVar14 * fVar34 * fVar29 + fVar12 * fVar17 * fVar6 + fVar15 * fVar16 * fVar7) *
               fVar8 + fVar9 * (fVar10 * fVar17 * fVar7 + fVar12 * fVar18 * fVar29 + fVar4 * fVar5)
               + fVar11 * (fVar10 * fVar16 * fVar29 + fVar19 * fVar5 + fVar20 * fVar6) +
              fVar13 * (fVar33 * fVar6 + fVar22 * fVar7 + fVar24 * fVar5)) -
             fVar8 * (fVar19 * fVar7 + fVar24 * fVar29 + fVar4 * fVar6)) -
            fVar9 * (fVar33 * fVar29 + fVar12 * fVar17 * fVar5 + fVar20 * fVar7)) -
           fVar11 * (fVar10 * fVar17 * fVar6 + fVar22 * fVar29 + fVar15 * fVar16 * fVar5)) -
           fVar13 * (fVar10 * fVar16 * fVar7 + fVar14 * fVar34 * fVar5 + fVar12 * fVar18 * fVar6);
  if (fVar25 != DAT_004925d4) {
    fVar31 = fVar15 * fVar6 - fVar14 * fVar29;
    fVar28 = fVar16 * fVar29 - fVar17 * fVar6;
    fVar32 = fVar18 * fVar29 - fVar17 * fVar5;
    fVar26 = fVar10 * fVar29 - fVar15 * fVar5;
    fVar35 = fVar34 * fVar6 - fVar16 * fVar7;
    fVar30 = fVar34 * fVar29 - fVar17 * fVar7;
    fVar21 = fVar34 * fVar5 - fVar18 * fVar7;
    fVar25 = DAT_004925d8 / fVar25;
    fVar27 = fVar10 * fVar6 - fVar14 * fVar5;
    fVar23 = fVar12 * fVar29 - fVar15 * fVar7;
    fVar29 = fVar16 * fVar5 - fVar18 * fVar6;
    fVar6 = fVar14 * fVar7 - fVar12 * fVar6;
    fVar5 = fVar12 * fVar5 - fVar10 * fVar7;
    fVar24 = fVar24 - fVar14 * fVar34;
    fVar20 = fVar20 - fVar10 * fVar17;
    fVar4 = fVar4 - fVar12 * fVar17;
    fVar22 = fVar22 - fVar10 * fVar16;
    fVar19 = fVar19 - fVar15 * fVar16;
    fVar33 = fVar33 - fVar12 * fVar18;
    *(float *)(param_1 + 0x158) = (fVar9 * fVar23 + fVar11 * fVar31 + fVar13 * fVar6) * fVar25;
    *(float *)(param_1 + 0x164) = ((fVar8 * fVar30 - fVar11 * fVar32) - fVar13 * fVar21) * fVar25;
    *(float *)(param_1 + 0x168) = ((fVar11 * fVar26 + fVar13 * fVar5) - fVar8 * fVar23) * fVar25;
    *(float *)(param_1 + 0x174) = ((fVar9 * fVar32 + fVar13 * fVar29) - fVar8 * fVar28) * fVar25;
    *(float *)(param_1 + 0x178) = ((fVar13 * fVar27 - fVar8 * fVar31) - fVar9 * fVar26) * fVar25;
    *(float *)(param_1 + 0x150) = ((fVar14 * fVar30 - fVar12 * fVar28) - fVar15 * fVar35) * fVar25;
    *(float *)(param_1 + 0x154) = ((fVar11 * fVar28 + fVar13 * fVar35) - fVar9 * fVar30) * fVar25;
    *(float *)(param_1 + 0x160) = ((fVar12 * fVar32 + fVar15 * fVar21) - fVar10 * fVar30) * fVar25;
    *(float *)(param_1 + 0x170) = ((fVar10 * fVar28 - fVar14 * fVar32) - fVar15 * fVar29) * fVar25;
    *(float *)(param_1 + 0x188) = ((-(fVar11 * fVar27) - fVar8 * fVar6) - fVar9 * fVar5) * fVar25;
    *(float *)(param_1 + 0x15c) = (fVar9 * fVar4 + fVar11 * fVar19 + fVar13 * fVar24) * fVar25;
    *(float *)(param_1 + 0x16c) = ((fVar11 * fVar20 + fVar13 * fVar33) - fVar8 * fVar4) * fVar25;
    *(float *)(param_1 + 0x17c) = ((fVar13 * fVar22 - fVar8 * fVar19) - fVar9 * fVar20) * fVar25;
    *(float *)(param_1 + 0x18c) = ((-(fVar11 * fVar22) - fVar8 * fVar24) - fVar9 * fVar33) * fVar25;
    *(float *)(param_1 + 0x180) = ((fVar10 * fVar35 - fVar14 * fVar21) + fVar12 * fVar29) * fVar25;
    *(float *)(param_1 + 0x184) = ((fVar9 * fVar21 - fVar11 * fVar29) - fVar8 * fVar35) * fVar25;
    return 0;
  }
  return func_00115B3C((float *)(param_1 + 0x150));
}

