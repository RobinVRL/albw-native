#include "ghidra_types.h"

extern longlong func_001104E4(int param_1,int param_2);
extern int func_0065AC0C(undefined4 *param_1,undefined1 param_2);
extern float DAT_001ac358;
extern int DAT_001ac35c;
extern float DAT_001ac360;
extern float DAT_001ac364;
extern undefined4 DAT_001ac368;
extern float DAT_001ac36c;

// USA 001AC1D8 <- EU 001AC1D8 (Ghidra, non-matching)
// GLOBAL DAT_001ac358 float
// GLOBAL DAT_001ac35c int
// GLOBAL DAT_001ac360 float
// GLOBAL DAT_001ac364 float
// GLOBAL DAT_001ac368 undefined4
// GLOBAL DAT_001ac36c float

undefined4 func_001AC1D8(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 uVar4;
  uint uVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  longlong lVar11;
  
  fVar9 = *(float *)(param_1 + 0x3d0);
  fVar10 = *(float *)(param_1 + 0x3d8);
  uVar5 = *(uint *)(param_1 + 0x924);
  if (*(uint *)(param_1 + 0x920) < uVar5) {
    *(uint *)(param_1 + 0x920) = *(uint *)(param_1 + 0x920) + 1;
  }
  lVar11 = func_001104E4(0x40000000,*(uint *)(param_1 + 0x9a4));
  fVar7 = DAT_001ac364;
  uVar1 = (int)lVar11 * *(uint *)(param_1 + 0x920) * 2;
  iVar3 = DAT_001ac35c + (uVar1 >> 0x18) * 0x10;
  fVar6 = (float)VectorUnsignedToFloat(uVar1 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  fVar6 = DAT_001ac360 -
          (*(float *)(iVar3 + 8) + *(float *)(iVar3 + 0xc) * fVar6 * DAT_001ac358) * DAT_001ac360;
  *(float *)(param_1 + 0x91c) = fVar6;
  if (*(uint *)(param_1 + 0x920) < uVar5) {
    fVar7 = fVar7 - fVar6;
    fVar10 = fVar7 * fVar7;
    fVar7 = fVar7 * DAT_001ac36c;
    fVar8 = fVar6 * fVar6;
    fVar9 = *(float *)(param_1 + 0x914) * fVar10 + *(float *)(param_1 + 0x908) * fVar6 * fVar7 +
            *(float *)(param_1 + 0x8fc) * fVar8;
    *(float *)(param_1 + 0x3dc) =
         (*(float *)(param_1 + 0x910) * fVar10 + *(float *)(param_1 + 0x904) * fVar6 * fVar7 +
         *(float *)(param_1 + 0x8f8) * fVar8) - *(float *)(param_1 + 0x3d0);
    *(float *)(param_1 + 0x3e0) = fVar9 - *(float *)(param_1 + 0x3d4);
    *(float *)(param_1 + 0x3e4) =
         (*(float *)(param_1 + 0x918) * fVar10 + *(float *)(param_1 + 0x90c) * fVar6 * fVar7 +
         *(float *)(param_1 + 0x900) * fVar8) - *(float *)(param_1 + 0x3d8);
    *(float *)(param_1 + 0x574) =
         (*(float *)(param_1 + 0x574) + fVar9) - *(float *)(param_1 + 0x3d4);
    return 0;
  }
  *(float *)(param_1 + 0x91c) = fVar7;
  uVar2 = DAT_001ac368;
  *(float *)(param_1 + 0x3dc) = *(float *)(param_1 + 0x8f8) - fVar9;
  *(undefined4 *)(param_1 + 0x3e0) = uVar2;
  *(float *)(param_1 + 0x3e4) = *(float *)(param_1 + 0x900) - fVar10;
  uVar5 = *(uint *)(param_1 + 0x92c);
  if (uVar5 < *(uint *)(param_1 + 0x930)) {
    uVar5 = uVar5 + 1;
    *(uint *)(param_1 + 0x92c) = uVar5;
  }
  if (uVar5 < *(uint *)(param_1 + 0x930)) {
    uVar4 = 7;
  }
  else {
    uVar4 = 9;
  }
  return func_0065AC0C((undefined4 *)(param_1 + 0x8bc),uVar4);
}

