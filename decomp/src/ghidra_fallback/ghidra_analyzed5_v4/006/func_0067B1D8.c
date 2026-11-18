#include "ghidra_types.h"

extern float func_003E1A24(float fparam_0,float fparam_1,float fparam_2,float fparam_3,float fparam_4, float fparam_5);
extern float DAT_0067b330;

// USA 0067B1D8 <- EU 0067B1B0 (Ghidra, non-matching)
// GLOBAL DAT_0067b330 float

int func_0067B1D8(int param_1,float fparam_0)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  bool bVar4;
  uint in_fpscr;
  float fVar5;
  uint uVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar9 = *(float *)(param_1 + 0x18);
  pbVar1 = *(byte **)(param_1 + 0x20);
  pbVar3 = pbVar1 + (uint)*(ushort *)(param_1 + 0xe) * 4 + -4;
  uVar6 = VectorFloatToUnsigned(fparam_0 / fVar9,3);
  pbVar2 = pbVar1;
  if ((*pbVar1 <= uVar6) && (pbVar2 = pbVar3, uVar6 < *pbVar3)) {
    fVar12 = (float)VectorSignedToFloat(*(ushort *)(param_1 + 0xe) - 1,(byte)(in_fpscr >> 0x15) & 3)
    ;
    iVar7 = VectorFloatToUnsigned(*(float *)(param_1 + 0x1c) * fVar12 * fparam_0,3);
    pbVar2 = pbVar1 + iVar7 * 4;
    pbVar1 = pbVar2;
    if (uVar6 < *pbVar2) {
      do {
        pbVar2 = pbVar2 + -4;
      } while (uVar6 < *pbVar2);
    }
    else {
      do {
        pbVar2 = pbVar1;
        pbVar1 = pbVar2 + 4;
      } while (pbVar2[4] <= uVar6);
    }
  }
  fVar12 = (float)VectorUnsignedToFloat((uint)*pbVar2,(byte)(in_fpscr >> 0x15) & 3);
  fVar12 = fVar12 * fVar9;
  uVar6 = in_fpscr & 0xfffffff | (uint)(fVar12 == fparam_0) << 0x1e;
  bVar4 = SUB41(uVar6 >> 0x1e,0);
  if (!bVar4) {
    bVar4 = pbVar2 == pbVar3;
  }
  if (!bVar4) {
    fVar5 = (float)VectorUnsignedToFloat((uint)pbVar2[4],(byte)(uVar6 >> 0x15) & 3);
    fVar10 = (float)VectorUnsignedToFloat
                              ((uint)pbVar2[1] + (pbVar2[2] & 0xf) * 0x100,(byte)(uVar6 >> 0x15) & 3
                              );
    iVar7 = (char)pbVar2[7] * 0x10 + (uint)(pbVar2[6] >> 4);
    fVar13 = (float)VectorSignedToFloat(iVar7,(byte)(uVar6 >> 0x15) & 3);
    fVar11 = (float)VectorUnsignedToFloat
                              ((uint)pbVar2[5] + (pbVar2[6] & 0xf) * 0x100,(byte)(uVar6 >> 0x15) & 3
                              );
    fVar8 = (float)VectorSignedToFloat((char)pbVar2[3] * 0x10 + (uint)(pbVar2[2] >> 4),
                                       (byte)(uVar6 >> 0x15) & 3);
    func_003E1A24(*(float *)(param_1 + 0x14) + fVar10 * *(float *)(param_1 + 0x10),
                  fVar8 * DAT_0067b330,
                  *(float *)(param_1 + 0x14) + fVar11 * *(float *)(param_1 + 0x10),
                  fVar13 * DAT_0067b330,fparam_0 - fVar12,fVar5 * fVar9 - fVar12);
    return iVar7;
  }
  iVar7 = (uint)pbVar2[1] + (pbVar2[2] & 0xf) * 0x100;
  VectorUnsignedToFloat(iVar7,(byte)(uVar6 >> 0x15) & 3);
  return iVar7;
}

