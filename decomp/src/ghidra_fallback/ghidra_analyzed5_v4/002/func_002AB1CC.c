#include "ghidra_types.h"

extern float DAT_002ab220;

// USA 002AB1CC <- EU 002AB1A8 (Ghidra, non-matching)
// GLOBAL DAT_002ab220 float

uint func_002AB1CC(uint param_1,int param_2,uint param_3)

{
  uint uVar1;
  byte bVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  
  if ((param_2 != 0 && param_1 != 0x1e) && (param_1 - 0xe < 4)) {
    fVar3 = (float)VectorSignedToFloat(param_1 + param_2 + 1,(byte)(in_fpscr >> 0x15) & 3);
    uVar1 = in_fpscr & 0xfffffff | (uint)(fVar3 < DAT_002ab220) << 0x1f |
            (uint)(fVar3 == DAT_002ab220) << 0x1e;
    bVar2 = (byte)(uVar1 >> 0x18);
    if (!(bool)(bVar2 >> 6 & 1) && (bool)(bVar2 >> 7) == (NAN(fVar3) || NAN(DAT_002ab220))) {
      fVar3 = DAT_002ab220;
    }
    fVar4 = (float)VectorUnsignedToFloat((param_3 ^ 1) + 0xe,(byte)(uVar1 >> 0x15) & 3);
    fVar3 = (float)VectorSignedToFloat((int)fVar3 + -1,(byte)(uVar1 >> 0x15) & 3);
    if (fVar3 < fVar4) {
      fVar3 = fVar4;
    }
    param_1 = (int)fVar3 & 0xff;
  }
  return param_1;
}

