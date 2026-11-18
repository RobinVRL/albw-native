#include "ghidra_types.h"

extern float func_003E1A24(float fparam_0,float fparam_1,float fparam_2,float fparam_3,float fparam_4, float fparam_5);
extern int func_0067E848(int param_1,float fparam_0);
extern float DAT_0067b744;

// USA 0067B678 <- EU 0067B650 (Ghidra, non-matching)
// GLOBAL DAT_0067b744 float

uint func_0067B678(int param_1,float fparam_0)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  puVar2 = func_0067E848(param_1,fparam_0);
  uVar4 = *puVar2;
  fVar6 = (float)VectorUnsignedToFloat(uVar4 & 0xfff,(byte)(in_fpscr >> 0x15) & 3);
  fVar6 = fVar6 * *(float *)(param_1 + 0x18);
  uVar1 = in_fpscr & 0xfffffff | (uint)(fVar6 == fparam_0) << 0x1e;
  bVar5 = SUB41(uVar1 >> 0x1e,0);
  if (!bVar5) {
    bVar5 = puVar2 == (uint *)(*(int *)(param_1 + 0x20) + (uint)*(ushort *)(param_1 + 0xe) * 8 + -8)
    ;
  }
  if (bVar5) {
    VectorUnsignedToFloat(uVar4 >> 0xc,(byte)(uVar1 >> 0x15) & 3);
    return uVar4 >> 0xc;
  }
  uVar3 = (uint)*(short *)((int)puVar2 + 6);
  fVar7 = (float)VectorUnsignedToFloat(puVar2[2] & 0xfff,(byte)(uVar1 >> 0x15) & 3);
  fVar11 = (float)VectorSignedToFloat(uVar3,(byte)(uVar1 >> 0x15) & 3);
  fVar8 = (float)VectorUnsignedToFloat(uVar4 >> 0xc,(byte)(uVar1 >> 0x15) & 3);
  fVar9 = (float)VectorUnsignedToFloat(puVar2[2] >> 0xc,(byte)(uVar1 >> 0x15) & 3);
  fVar10 = (float)VectorSignedToFloat((int)(short)puVar2[3],(byte)(uVar1 >> 0x15) & 3);
  func_003E1A24(*(float *)(param_1 + 0x14) + fVar8 * *(float *)(param_1 + 0x10),
                fVar11 * DAT_0067b744,
                *(float *)(param_1 + 0x14) + fVar9 * *(float *)(param_1 + 0x10),
                fVar10 * DAT_0067b744,fparam_0 - fVar6,fVar7 * *(float *)(param_1 + 0x18) - fVar6);
  return uVar3;
}

