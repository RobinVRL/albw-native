#include "ghidra_types.h"

extern float DAT_004ad7e8;
extern float DAT_004ad7ec;
extern float DAT_004ad7f0;

// USA 004AD7A0 <- EU 004AD778 (Ghidra, non-matching)
// GLOBAL DAT_004ad7e8 float
// GLOBAL DAT_004ad7ec float
// GLOBAL DAT_004ad7f0 float

uint func_004AD7A0(float fparam_0,float fparam_1)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  uint in_fpscr;
  float fVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  
  fVar4 = (fparam_0 - DAT_004ad7e8) * DAT_004ad7ec;
  iVar7 = (int)fVar4;
  fVar8 = (float)VectorSignedToFloat(iVar7,(byte)(in_fpscr >> 0x15) & 3);
  uVar1 = in_fpscr & 0xfffffff | (uint)(fVar8 == fVar4) << 0x1e | (uint)(fVar4 <= fVar8) << 0x1d;
  bVar2 = (byte)(uVar1 >> 0x18);
  bVar3 = (bool)(bVar2 >> 6);
  if (!bVar3) {
    uVar1 = in_fpscr & 0xfffffff | (uint)(DAT_004ad7f0 == fVar4) << 0x1e |
            (uint)(fVar4 <= DAT_004ad7f0) << 0x1d;
    bVar2 = (byte)(uVar1 >> 0x18);
    bVar3 = (bool)(bVar2 >> 6);
  }
  if ((bool)(bVar2 >> 5 & 1) && !bVar3) {
    iVar7 = iVar7 + -1;
  }
  fVar8 = (fparam_1 - DAT_004ad7e8) * DAT_004ad7ec;
  iVar5 = (int)fVar8;
  fVar6 = (float)VectorSignedToFloat(iVar5,(byte)(uVar1 >> 0x15) & 3);
  fVar4 = fVar6;
  if (fVar6 != fVar8) {
    fVar4 = DAT_004ad7f0;
  }
  if (fVar8 <= fVar4 && (fVar6 != fVar8 && DAT_004ad7f0 != fVar8)) {
    iVar5 = iVar5 + -1;
  }
  return iVar7 + iVar5 * 8 & 0xff;
}

