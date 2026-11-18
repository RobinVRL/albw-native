#include "ghidra_types.h"

extern float DAT_0051e820;

// USA 0051E740 <- EU 0051E718 (Ghidra, non-matching)
// GLOBAL DAT_0051e820 float

undefined4 func_0051E740(int param_1,float *param_2)

{
  float *pfVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar14 = param_2[2];
  fVar9 = *param_2;
  fVar10 = param_2[1];
  pfVar1 = (float *)(param_1 + 0x28f0);
  fVar11 = param_2[3];
  fVar12 = param_2[4];
  fVar13 = param_2[5];
  if (*(char *)(param_1 + 0x2968) != '\0') {
    fVar6 = *pfVar1;
    bVar3 = fVar6 < fVar11;
    bVar4 = fVar6 == fVar11;
    bVar5 = NAN(fVar6) || NAN(fVar11);
    if (fVar6 <= fVar11) {
      fVar6 = *(float *)(param_1 + 0x28fc);
      bVar3 = fVar9 < fVar6;
      bVar4 = fVar9 == fVar6;
      bVar5 = NAN(fVar9) || NAN(fVar6);
    }
    if (!bVar4 && bVar3 == bVar5) {
      return 0;
    }
    fVar6 = *(float *)(param_1 + 0x28f4);
    bVar3 = fVar6 < fVar12;
    bVar4 = fVar6 == fVar12;
    bVar5 = NAN(fVar6) || NAN(fVar12);
    if (fVar6 <= fVar12) {
      fVar6 = *(float *)(param_1 + 0x2900);
      bVar3 = fVar10 < fVar6;
      bVar4 = fVar10 == fVar6;
      bVar5 = NAN(fVar10) || NAN(fVar6);
    }
    if (!bVar4 && bVar3 == bVar5) {
      return 0;
    }
    fVar6 = *(float *)(param_1 + 0x28f8);
    bVar3 = fVar6 < fVar13;
    bVar4 = fVar6 == fVar13;
    bVar5 = NAN(fVar6) || NAN(fVar13);
    if (fVar6 <= fVar13) {
      fVar6 = *(float *)(param_1 + 0x2904);
      bVar3 = fVar14 < fVar6;
      bVar4 = fVar14 == fVar6;
      bVar5 = NAN(fVar14) || NAN(fVar6);
    }
    if (!bVar4 && bVar3 == bVar5) {
      return 0;
    }
  }
  iVar2 = 0;
  if (*(byte *)(param_1 + 0x2969) != 0) {
    do {
      fVar6 = fVar9;
      if (pfVar1[iVar2 * 4 + 6] < DAT_0051e820) {
        fVar6 = fVar11;
      }
      fVar7 = fVar12;
      if (DAT_0051e820 <= pfVar1[iVar2 * 4 + 7]) {
        fVar7 = fVar10;
      }
      fVar8 = fVar14;
      if (pfVar1[iVar2 * 4 + 8] < DAT_0051e820) {
        fVar8 = fVar13;
      }
      if (DAT_0051e820 <
          pfVar1[iVar2 * 4 + 7] * fVar7 + pfVar1[iVar2 * 4 + 8] * fVar8 +
          pfVar1[iVar2 * 4 + 9] + pfVar1[iVar2 * 4 + 6] * fVar6) {
        return 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(uint)*(byte *)(param_1 + 0x2969));
  }
  return 1;
}

