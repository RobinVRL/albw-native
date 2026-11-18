#include "ghidra_types.h"

extern float DAT_0036afec;

// USA 0036AFA8 <- EU 0036AF84 (Ghidra, non-matching)
// GLOBAL DAT_0036afec float

undefined4 func_0036AFA8(int param_1)

{
  uint uVar1;
  byte bVar2;
  uint in_fpscr;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = *(float *)(param_1 + 0x74);
  fVar6 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x6c),(byte)(in_fpscr >> 0x15) & 3);
  iVar3 = (int)fVar5;
  uVar1 = in_fpscr & 0xfffffff | (uint)(fVar6 < fVar5) << 0x1f | (uint)(fVar6 == fVar5) << 0x1e;
  bVar2 = (byte)(uVar1 >> 0x18);
  fVar4 = (float)VectorSignedToFloat(iVar3,(byte)(uVar1 >> 0x15) & 3);
  if ((bool)(bVar2 >> 6 & 1) || (bool)(bVar2 >> 7) != (NAN(fVar6) || NAN(fVar5))) {
    if ((fVar4 != fVar5) && (fVar5 < DAT_0036afec)) {
      iVar3 = iVar3 + -1;
    }
  }
  else if ((fVar4 != fVar5) && (DAT_0036afec <= fVar5)) {
    iVar3 = iVar3 + 1;
  }
  *(int *)(param_1 + 0x6c) = iVar3;
  return (undefined4)param_1;
}

