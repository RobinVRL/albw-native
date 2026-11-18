#include "ghidra_types.h"

extern float func_003E1A24(float fparam_0,float fparam_1,float fparam_2,float fparam_3,float fparam_4, float fparam_5);
extern int func_0067E150(int param_1,float fparam_0);
extern float DAT_0067b64c;

// USA 0067B558 <- EU 0067B530 (Ghidra, non-matching)
// GLOBAL DAT_0067b64c float

int func_0067B558(int param_1,float fparam_0)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  bool bVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  pbVar2 = func_0067E150(param_1,fparam_0);
  fVar5 = (float)VectorUnsignedToFloat((uint)*pbVar2,(byte)(in_fpscr >> 0x15) & 3);
  fVar5 = fVar5 * *(float *)(param_1 + 0x18);
  uVar1 = in_fpscr & 0xfffffff | (uint)(fVar5 == fparam_0) << 0x1e;
  bVar4 = SUB41(uVar1 >> 0x1e,0);
  if (!bVar4) {
    bVar4 = pbVar2 == (byte *)(*(int *)(param_1 + 0x20) + (uint)*(ushort *)(param_1 + 0xe) * 6 + -6)
    ;
  }
  if (bVar4) {
    iVar3 = (uint)pbVar2[1] + (uint)pbVar2[2] * 0x100;
    VectorUnsignedToFloat(iVar3,(byte)(uVar1 >> 0x15) & 3);
    return iVar3;
  }
  fVar6 = (float)VectorUnsignedToFloat((uint)pbVar2[6],(byte)(uVar1 >> 0x15) & 3);
  fVar8 = (float)VectorUnsignedToFloat
                           ((uint)pbVar2[1] + (uint)pbVar2[2] * 0x100,(byte)(uVar1 >> 0x15) & 3);
  fVar9 = (float)VectorUnsignedToFloat
                           ((uint)pbVar2[7] + (uint)pbVar2[8] * 0x100,(byte)(uVar1 >> 0x15) & 3);
  iVar3 = (char)pbVar2[5] * 0x10 + (uint)(pbVar2[4] >> 4);
  fVar10 = (float)VectorSignedToFloat((uint)pbVar2[9] + (char)(pbVar2[10] << 4) * 0x10,
                                      (byte)(uVar1 >> 0x15) & 3);
  fVar7 = (float)VectorSignedToFloat(iVar3,(byte)(uVar1 >> 0x15) & 3);
  func_003E1A24(*(float *)(param_1 + 0x14) + fVar8 * *(float *)(param_1 + 0x10),fVar7 * DAT_0067b64c
                ,*(float *)(param_1 + 0x14) + fVar9 * *(float *)(param_1 + 0x10),
                fVar10 * DAT_0067b64c,fparam_0 - fVar5,fVar6 * *(float *)(param_1 + 0x18) - fVar5);
  return iVar3;
}

