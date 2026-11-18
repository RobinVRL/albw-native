#include "ghidra_types.h"

extern float DAT_00689e3c;
extern float DAT_00689e40;

// USA 00689E18 <- EU 00689DF0 (Ghidra, non-matching)
// GLOBAL DAT_00689e3c float
// GLOBAL DAT_00689e40 float

float func_00689E18(int param_1,int param_2,float fparam_0)

{
  byte bVar1;
  uint in_fpscr;
  uint uVar2;
  float fVar3;
  float fVar4;
  
  uVar2 = in_fpscr & 0xfffffff | (uint)(DAT_00689e3c <= fparam_0) << 0x1d;
  fVar3 = DAT_00689e3c;
  if ((SUB41(uVar2 >> 0x1d,0)) &&
     (uVar2 = in_fpscr & 0xfffffff | (uint)(fparam_0 < DAT_00689e40) << 0x1f |
              (uint)(fparam_0 == DAT_00689e40) << 0x1e, bVar1 = (byte)(uVar2 >> 0x18),
     fVar3 = fparam_0,
     !(bool)(bVar1 >> 6 & 1) && (bool)(bVar1 >> 7) == (NAN(fparam_0) || NAN(DAT_00689e40)))) {
    fVar3 = DAT_00689e40;
  }
  fVar4 = (float)VectorSignedToFloat(*(byte *)(param_1 + 3) - 1,(byte)(uVar2 >> 0x15) & 3);
  return *(float *)(param_2 + (int)(fVar4 * fVar3) * 4);
}

