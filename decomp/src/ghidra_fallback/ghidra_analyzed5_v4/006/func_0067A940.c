#include "ghidra_types.h"

extern undefined4 DAT_0067aa8c;

// USA 0067A940 <- EU 0067A918 (Ghidra, non-matching)
// GLOBAL DAT_0067aa8c undefined4

undefined8 func_0067A940(int param_1,float fparam_0)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  bool bVar6;
  uint in_fpscr;
  uint uVar7;
  int iVar8;
  float fVar9;
  
  puVar1 = *(uint **)(param_1 + 0x20);
  puVar5 = puVar1 + (*(ushort *)(param_1 + 0xe) - 1);
  uVar7 = VectorFloatToUnsigned(fparam_0 / *(float *)(param_1 + 0x18),3);
  puVar2 = puVar1;
  if (((*puVar1 & 0xfff) <= uVar7) && (puVar2 = puVar5, uVar7 < (*puVar5 & 0xfff))) {
    fVar9 = (float)VectorSignedToFloat(*(ushort *)(param_1 + 0xe) - 1,(byte)(in_fpscr >> 0x15) & 3);
    iVar8 = VectorFloatToUnsigned(*(float *)(param_1 + 0x1c) * fVar9 * fparam_0,3);
    puVar2 = puVar1 + iVar8;
    puVar1 = puVar2;
    if (uVar7 < (*puVar2 & 0xfff)) {
      do {
        puVar2 = puVar2 + -1;
      } while (uVar7 < (*puVar2 & 0xfff));
    }
    else {
      do {
        puVar2 = puVar1;
        puVar1 = puVar2 + 1;
      } while ((puVar2[1] & 0xfff) <= uVar7);
    }
  }
  uVar4 = *puVar2;
  fVar9 = (float)VectorUnsignedToFloat(uVar4 & 0xfff,(byte)(in_fpscr >> 0x15) & 3);
  uVar7 = in_fpscr & 0xfffffff | (uint)(fVar9 * *(float *)(param_1 + 0x18) == fparam_0) << 0x1e;
  bVar6 = SUB41(uVar7 >> 0x1e,0);
  if (!bVar6) {
    bVar6 = puVar2 == puVar5;
  }
  if (!bVar6) {
    uVar3 = puVar2[1];
    VectorUnsignedToFloat(uVar3 & 0xfff,(byte)(uVar7 >> 0x15) & 3);
    VectorUnsignedToFloat(uVar4 >> 0xc,(byte)(uVar7 >> 0x15) & 3);
    VectorUnsignedToFloat(uVar3 >> 0xc,(byte)(uVar7 >> 0x15) & 3);
    return CONCAT44(uVar3,uVar3 >> 0xc);
  }
  VectorUnsignedToFloat(uVar4 >> 0xc,(byte)(uVar7 >> 0x15) & 3);
  return CONCAT44(uVar4 >> 0xc,param_1);
}

