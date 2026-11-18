#include "ghidra_types.h"

extern float func_003E1A24(float fparam_0,float fparam_1,float fparam_2,float fparam_3,float fparam_4, float fparam_5);
extern int func_0067D648(int param_1,float fparam_0);
extern float DAT_0067b428;
extern float DAT_0067b42c;

// USA 0067B35C <- EU 0067B334 (Ghidra, non-matching)
// GLOBAL DAT_0067b428 float
// GLOBAL DAT_0067b42c float

uint func_0067B35C(int param_1,float fparam_0)

{
  uint uVar1;
  ushort *puVar2;
  uint uVar3;
  bool bVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  puVar2 = func_0067D648(param_1,fparam_0);
  fVar6 = (float)VectorUnsignedToFloat((uint)*puVar2,(byte)(in_fpscr >> 0x15) & 3);
  fVar6 = fVar6 * DAT_0067b428 * *(float *)(param_1 + 0x18);
  uVar1 = in_fpscr & 0xfffffff | (uint)(fVar6 == fparam_0) << 0x1e;
  bVar4 = SUB41(uVar1 >> 0x1e,0);
  if (!bVar4) {
    bVar4 = puVar2 == (ushort *)
                      (*(int *)(param_1 + 0x20) + (uint)*(ushort *)(param_1 + 0xe) * 6 + -6);
  }
  if (bVar4) {
    VectorUnsignedToFloat((uint)puVar2[1],(byte)(uVar1 >> 0x15) & 3);
    return (uint)puVar2[1];
  }
  fVar7 = (float)VectorUnsignedToFloat((uint)puVar2[3],(byte)(uVar1 >> 0x15) & 3);
  fVar10 = (float)VectorSignedToFloat((int)(short)puVar2[5],(byte)(uVar1 >> 0x15) & 3);
  uVar3 = (uint)(short)puVar2[2];
  fVar8 = (float)VectorUnsignedToFloat((uint)puVar2[1],(byte)(uVar1 >> 0x15) & 3);
  fVar9 = (float)VectorUnsignedToFloat((uint)puVar2[4],(byte)(uVar1 >> 0x15) & 3);
  fVar5 = (float)VectorSignedToFloat(uVar3,(byte)(uVar1 >> 0x15) & 3);
  func_003E1A24(*(float *)(param_1 + 0x14) + fVar8 * *(float *)(param_1 + 0x10),fVar5 * DAT_0067b42c
                ,*(float *)(param_1 + 0x14) + fVar9 * *(float *)(param_1 + 0x10),
                fVar10 * DAT_0067b42c,fparam_0 - fVar6,
                fVar7 * DAT_0067b428 * *(float *)(param_1 + 0x18) - fVar6);
  return uVar3;
}

