#include "ghidra_types.h"

extern float DAT_004697fc;
extern float DAT_00469800;

// USA 00469774 <- EU 0046974C (Ghidra, non-matching)
// GLOBAL DAT_004697fc float
// GLOBAL DAT_00469800 float

undefined4 func_00469774(int param_1)

{
  bool bVar1;
  float fVar2;
  int iVar3;
  uint in_fpscr;
  uint uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  
  fVar2 = DAT_004697fc;
  uVar4 = in_fpscr & 0xfffffff |
          (uint)(*(float *)(param_1 + 0xa8) == *(float *)(param_1 + 0x8c)) << 0x1e;
  if ((!SUB41(uVar4 >> 0x1e,0)) ||
     (uVar4 = in_fpscr & 0xfffffff |
              (uint)(*(float *)(param_1 + 0xac) == *(float *)(param_1 + 0x90)) << 0x1e,
     !SUB41(uVar4 >> 0x1e,0))) {
    fVar5 = *(float *)(param_1 + 0x94) + *(float *)(param_1 + 0x8c) * *(float *)(param_1 + 0x9c);
    iVar3 = *(int *)(**(int **)(param_1 + 0x1c) + 0x10);
    bVar1 = NAN(fVar5);
    if (!bVar1 && !NAN(DAT_004697fc)) {
      fVar5 = fVar5 + DAT_00469800;
    }
    fVar8 = *(float *)(param_1 + 0x98) - *(float *)(param_1 + 0x90) * *(float *)(param_1 + 0x9c);
    if (bVar1 || NAN(DAT_004697fc)) {
      fVar5 = fVar5 - DAT_00469800;
    }
    uVar4 = uVar4 & 0xfffffff | (uint)(fVar8 < DAT_004697fc) << 0x1f;
    uVar6 = ALBW_AS_U32(VectorSignedToFloat((int)fVar5,(byte)(uVar4 >> 0x15) & 3));
    if (SUB41(uVar4 >> 0x1f,0) == (NAN(fVar8) || NAN(DAT_004697fc))) {
      fVar8 = fVar8 + DAT_00469800;
    }
    else {
      fVar8 = fVar8 - DAT_00469800;
    }
    uVar7 = ALBW_AS_U32(VectorSignedToFloat((int)fVar8,(byte)(uVar4 >> 0x15) & 3));
    *(undefined4 *)(iVar3 + 0x1c) = uVar6;
    *(undefined4 *)(iVar3 + 0x20) = uVar7;
    *(float *)(iVar3 + 0x24) = fVar2;
    *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xef | 0x10;
    *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_1 + 0x8c);
    *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_1 + 0x90);
  }
  return (undefined4)param_1;
}

