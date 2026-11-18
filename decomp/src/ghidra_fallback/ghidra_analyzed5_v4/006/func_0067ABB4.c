#include "ghidra_types.h"

extern undefined4 DAT_0067acf0;

// USA 0067ABB4 <- EU 0067AB8C (Ghidra, non-matching)
// GLOBAL DAT_0067acf0 undefined4

int func_0067ABB4(int param_1,float fparam_0)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  bool bVar4;
  uint in_fpscr;
  uint uVar5;
  int iVar6;
  float fVar7;
  
  pbVar1 = *(byte **)(param_1 + 0x20);
  pbVar3 = pbVar1 + (uint)*(ushort *)(param_1 + 0xe) * 4 + -4;
  uVar5 = VectorFloatToUnsigned(fparam_0 / *(float *)(param_1 + 0x18),3);
  pbVar2 = pbVar1;
  if ((*pbVar1 <= uVar5) && (pbVar2 = pbVar3, uVar5 < *pbVar3)) {
    fVar7 = (float)VectorSignedToFloat(*(ushort *)(param_1 + 0xe) - 1,(byte)(in_fpscr >> 0x15) & 3);
    iVar6 = VectorFloatToUnsigned(*(float *)(param_1 + 0x1c) * fVar7 * fparam_0,3);
    pbVar2 = pbVar1 + iVar6 * 4;
    pbVar1 = pbVar2;
    if (uVar5 < *pbVar2) {
      do {
        pbVar2 = pbVar2 + -4;
      } while (uVar5 < *pbVar2);
    }
    else {
      do {
        pbVar2 = pbVar1;
        pbVar1 = pbVar2 + 4;
      } while (pbVar2[4] <= uVar5);
    }
  }
  fVar7 = (float)VectorUnsignedToFloat((uint)*pbVar2,(byte)(in_fpscr >> 0x15) & 3);
  uVar5 = in_fpscr & 0xfffffff | (uint)(fVar7 * *(float *)(param_1 + 0x18) == fparam_0) << 0x1e;
  bVar4 = SUB41(uVar5 >> 0x1e,0);
  if (!bVar4) {
    bVar4 = pbVar2 == pbVar3;
  }
  if (!bVar4) {
    VectorUnsignedToFloat((uint)pbVar2[4],(byte)(uVar5 >> 0x15) & 3);
    VectorUnsignedToFloat((uint)pbVar2[1] + (pbVar2[2] & 0xf) * 0x100,(byte)(uVar5 >> 0x15) & 3);
    iVar6 = (uint)pbVar2[5] + (pbVar2[6] & 0xf) * 0x100;
    VectorUnsignedToFloat(iVar6,(byte)(uVar5 >> 0x15) & 3);
    return iVar6;
  }
  iVar6 = (uint)pbVar2[1] + (pbVar2[2] & 0xf) * 0x100;
  VectorUnsignedToFloat(iVar6,(byte)(uVar5 >> 0x15) & 3);
  return iVar6;
}

