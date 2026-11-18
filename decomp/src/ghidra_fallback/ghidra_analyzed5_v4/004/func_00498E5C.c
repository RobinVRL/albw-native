#include "ghidra_types.h"

extern longlong func_001104E4(int param_1,int param_2);
extern float func_005909A0(float fparam_0);
extern float func_0059163C(float fparam_0);
extern float DAT_00499058;
extern float DAT_0049905c;
extern float DAT_00499060;
extern float DAT_00499064;
extern float DAT_00499068;

// USA 00498E5C <- EU 00498E34 (Ghidra, non-matching)
// GLOBAL DAT_00499058 float
// GLOBAL DAT_0049905c float
// GLOBAL DAT_00499060 float
// GLOBAL DAT_00499064 float
// GLOBAL DAT_00499068 float

void func_00498E5C(int param_1,short *param_2,uint param_3)

{
  short sVar1;
  short sVar2;
  float *pfVar3;
  short *psVar4;
  short *psVar5;
  short sVar6;
  int iVar7;
  float *pfVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint in_fpscr;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  longlong lVar19;
  
  iVar10 = param_3 + 1;
  if (param_1 != 0) {
    iVar7 = 0;
    fVar17 = DAT_0049905c;
    fVar18 = DAT_00499058;
    fVar14 = DAT_00499060;
    fVar15 = DAT_00499064;
    fVar16 = DAT_00499068;
    if (0 < (int)param_3) {
      do {
        fVar12 = (float)VectorSignedToFloat(iVar7,(byte)(in_fpscr >> 0x15) & 3);
        fVar13 = (float)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
        fVar13 = (fVar12 * fVar18) / fVar13;
        fVar12 = func_005909A0(fVar13);
        pfVar3 = (float *)(param_1 + iVar7 * 0x24);
        *pfVar3 = fVar12 * fVar17;
        fVar12 = func_0059163C(fVar13);
        pfVar3[2] = fVar12 * fVar14;
        pfVar3[1] = fVar17;
        pfVar3[3] = *pfVar3;
        pfVar3[4] = fVar15 - fVar12 * fVar14;
        pfVar3[5] = fVar16;
        fVar12 = func_005909A0(fVar13);
        pfVar8 = (float *)(param_1 + (iVar7 + iVar10) * 0x24);
        *pfVar8 = fVar12 * fVar17;
        fVar12 = func_0059163C(fVar13);
        iVar7 = iVar7 + 1;
        pfVar8[2] = fVar12 * fVar14;
        pfVar8[1] = fVar14;
        pfVar8[3] = *pfVar3;
        pfVar8[4] = fVar15 - pfVar3[2];
        pfVar8[5] = fVar15;
      } while (iVar7 < (int)param_3);
    }
    pfVar3 = (float *)(param_1 + param_3 * 0x24);
    *pfVar3 = fVar16;
    pfVar3[1] = fVar17;
    pfVar3[2] = fVar16;
    pfVar3[3] = fVar17;
    pfVar3[4] = fVar17;
    pfVar3[5] = fVar16;
    pfVar3 = (float *)(param_1 + (param_3 + iVar10) * 0x24);
    *pfVar3 = fVar16;
    pfVar3[1] = fVar14;
    pfVar3[2] = fVar16;
    pfVar3[3] = fVar17;
    pfVar3[4] = fVar17;
    pfVar3[5] = fVar15;
  }
  if (param_2 != (short *)0x0) {
    sVar2 = (short)iVar10;
    if (0 < (int)param_3) {
      uVar9 = 1;
      psVar4 = param_2 + param_3 * 3;
      sVar6 = 0;
      psVar5 = param_2;
      uVar11 = param_3;
      do {
        *psVar5 = sVar6;
        lVar19 = func_001104E4(uVar9,param_3);
        sVar1 = (short)((ulonglong)lVar19 >> 0x20);
        psVar5[1] = sVar1;
        psVar5[2] = (short)param_3;
        *psVar4 = sVar6 + sVar2;
        uVar11 = uVar11 - 1;
        uVar9 = uVar9 + 1;
        psVar4[1] = (short)param_3 + sVar2;
        psVar4[2] = sVar1 + sVar2;
        psVar5 = psVar5 + 3;
        sVar6 = sVar6 + 1;
        psVar4 = psVar4 + 3;
      } while (uVar11 != 0);
    }
    if (0 < (int)param_3) {
      uVar9 = 1;
      sVar6 = 0;
      psVar5 = param_2 + param_3 * 6;
      uVar11 = param_3;
      do {
        *psVar5 = sVar6;
        psVar5[1] = sVar6 + sVar2;
        lVar19 = func_001104E4(uVar9,param_3);
        psVar5[4] = sVar6 + sVar2;
        sVar1 = (short)((ulonglong)lVar19 >> 0x20);
        psVar5[2] = sVar1;
        psVar5[3] = sVar1;
        psVar5[5] = sVar1 + sVar2;
        uVar11 = uVar11 - 1;
        uVar9 = uVar9 + 1;
        sVar6 = sVar6 + 1;
        psVar5 = psVar5 + 6;
      } while (uVar11 != 0);
    }
  }
  return;
}

