#include "ghidra_types.h"

extern float DAT_004746e0;
extern float DAT_004746e4;
extern float DAT_004746e8;
extern float DAT_004746ec;
extern float DAT_004746f0;
extern float DAT_004746f4;
extern int DAT_004746f8;
extern float DAT_004746fc;

// USA 004745E0 <- EU 004745B8 (Ghidra, non-matching)
// GLOBAL DAT_004746e0 float
// GLOBAL DAT_004746e4 float
// GLOBAL DAT_004746e8 float
// GLOBAL DAT_004746ec float
// GLOBAL DAT_004746f0 float
// GLOBAL DAT_004746f4 float
// GLOBAL DAT_004746f8 int
// GLOBAL DAT_004746fc float

void func_004745E0(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  
  fVar1 = DAT_004746e8;
  iVar3 = *(int *)(param_1 + 0x90);
  iVar2 = *(int *)(**(int **)(param_1 + 0x1c) + 0x10);
  fVar7 = (DAT_004746e0 * *(float *)(param_1 + 0x80) * *(float *)(iVar3 + 0x34) -
          -*(float *)(iVar3 + 0x1c)) + DAT_004746e4;
  bVar6 = NAN(fVar7);
  uVar4 = in_fpscr & 0xfffffff | (uint)(fVar7 < DAT_004746e8) << 0x1f;
  bVar5 = SUB41(uVar4 >> 0x1f,0);
  if (bVar5 == (bVar6 || NAN(DAT_004746e8))) {
    fVar7 = fVar7 + DAT_004746ec;
  }
  if (bVar5 != (bVar6 || NAN(DAT_004746e8))) {
    fVar7 = fVar7 - DAT_004746ec;
  }
  fVar8 = DAT_004746f0 -
          (DAT_004746e0 * *(float *)(param_1 + 0x84) * *(float *)(iVar3 + 0x38) -
          *(float *)(iVar3 + 0x20));
  fVar7 = (float)VectorSignedToFloat((int)fVar7,(byte)(uVar4 >> 0x15) & 3);
  uVar4 = in_fpscr & 0xfffffff | (uint)(fVar8 < DAT_004746e8) << 0x1f;
  if (SUB41(uVar4 >> 0x1f,0) == (NAN(fVar8) || NAN(DAT_004746e8))) {
    fVar8 = fVar8 + DAT_004746ec;
  }
  else {
    fVar8 = fVar8 - DAT_004746ec;
  }
  fVar8 = (float)VectorSignedToFloat((int)fVar8,(byte)(uVar4 >> 0x15) & 3);
  if (((((uint)ALBW_AS_U32(fVar7) < (uint)ALBW_AS_U32(DAT_004746f4)) && ((int)ALBW_AS_U32(fVar7) < DAT_004746f8)) &&
      ((int)ALBW_AS_U32(fVar8) < DAT_004746f8 + 0x3e0000)) && ((uint)ALBW_AS_U32(fVar8) < (uint)ALBW_AS_U32(DAT_004746fc))) {
    uVar4 = *(uint *)(param_1 + 0x18) & 0xfffffffb;
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x18) | 4;
  }
  *(uint *)(param_1 + 0x18) = uVar4;
  bVar6 = false;
  if (*(float *)(iVar2 + 0x1c) == fVar7) {
    bVar6 = *(float *)(iVar2 + 0x20) == fVar8;
  }
  if (!bVar6) {
    *(float *)(iVar2 + 0x1c) = fVar7;
    *(float *)(iVar2 + 0x20) = fVar8;
    *(float *)(iVar2 + 0x24) = fVar1;
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xef | 0x10;
    *(byte *)(*(int *)(param_1 + 0x1c) + 0x70) = *(byte *)(*(int *)(param_1 + 0x1c) + 0x70) | 2;
  }
  return;
}

