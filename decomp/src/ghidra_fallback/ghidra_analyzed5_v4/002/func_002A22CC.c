#include "ghidra_types.h"

extern float *DAT_002a237c;
extern float DAT_002a2380;
extern float DAT_002a2384;
extern float *DAT_002a2388;

// USA 002A22CC <- EU 002A22A8 (Ghidra, non-matching)
// GLOBAL DAT_002a237c float *
// GLOBAL DAT_002a2380 float
// GLOBAL DAT_002a2384 float
// GLOBAL DAT_002a2388 float *

bool func_002A22CC(int param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar6 = DAT_002a2384;
  fVar5 = DAT_002a2380;
  pfVar4 = DAT_002a237c;
  fVar9 = *(float *)(param_1 + 0x3d0);
  bVar1 = fVar9 < *DAT_002a237c + DAT_002a2380;
  if (bVar1) {
    fVar9 = fVar9 + ((*DAT_002a237c + DAT_002a2380) - fVar9) * DAT_002a2384;
    *(float *)(param_1 + 0x3d0) = fVar9;
  }
  pfVar7 = DAT_002a2388;
  fVar8 = *DAT_002a2388 - fVar5;
  if (fVar8 < fVar9) {
    *(float *)(param_1 + 0x3d0) = fVar9 + (fVar8 - fVar9) * fVar6;
  }
  fVar10 = *(float *)(param_1 + 0x3d8);
  bVar2 = fVar10 < pfVar4[2] + fVar5;
  if (bVar2) {
    fVar10 = fVar10 + ((pfVar4[2] + fVar5) - fVar10) * fVar6;
    *(float *)(param_1 + 0x3d8) = fVar10;
  }
  bVar3 = bVar2 || (fVar8 < fVar9 || bVar1);
  if (fVar10 <= pfVar7[2] - fVar5) {
    if (!bVar2 && (fVar9 <= fVar8 && !bVar1)) {
      return bVar3;
    }
  }
  else {
    bVar3 = true;
    fVar10 = fVar10 + ((pfVar7[2] - fVar5) - fVar10) * fVar6;
    *(float *)(param_1 + 0x3d8) = fVar10;
  }
  *(undefined4 *)(param_1 + 0x368) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(param_1 + 0x36c) = *(undefined4 *)(param_1 + 0x3d4);
  *(float *)(param_1 + 0x370) = fVar10;
  return bVar3;
}

