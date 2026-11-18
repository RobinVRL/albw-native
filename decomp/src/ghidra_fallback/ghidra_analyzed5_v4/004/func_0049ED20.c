#include "ghidra_types.h"

extern float DAT_0049edd0;
extern float DAT_0049edd4;

// USA 0049ED20 <- EU 0049ECF8 (Ghidra, non-matching)
// GLOBAL DAT_0049edd0 float
// GLOBAL DAT_0049edd4 float

undefined4 func_0049ED20(undefined1 *param_1,byte *param_2,byte *param_3,float fparam_0)

{
  byte bVar1;
  uint in_fpscr;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  uVar2 = in_fpscr & 0xfffffff | (uint)(DAT_0049edd0 <= fparam_0) << 0x1d;
  fVar3 = DAT_0049edd0;
  if ((SUB41(uVar2 >> 0x1d,0)) &&
     (uVar2 = in_fpscr & 0xfffffff | (uint)(fparam_0 < DAT_0049edd4) << 0x1f |
              (uint)(fparam_0 == DAT_0049edd4) << 0x1e, bVar1 = (byte)(uVar2 >> 0x18),
     fVar3 = fparam_0,
     !(bool)(bVar1 >> 6 & 1) && (bool)(bVar1 >> 7) == (NAN(fparam_0) || NAN(DAT_0049edd4)))) {
    fVar3 = DAT_0049edd4;
  }
  fVar4 = (float)VectorSignedToFloat((uint)*param_2,(byte)(uVar2 >> 0x15) & 3);
  fVar5 = (float)VectorSignedToFloat((uint)*param_3 - (uint)*param_2,(byte)(uVar2 >> 0x15) & 3);
  *param_1 = (char)(int)(fVar4 + fVar5 * fVar3);
  fVar4 = (float)VectorSignedToFloat((uint)param_2[3],(byte)(uVar2 >> 0x15) & 3);
  fVar5 = (float)VectorSignedToFloat((uint)param_3[3] - (uint)param_2[3],(byte)(uVar2 >> 0x15) & 3);
  param_1[3] = (char)(int)(fVar4 + fVar5 * fVar3);
  fVar4 = (float)VectorSignedToFloat((uint)param_2[2],(byte)(uVar2 >> 0x15) & 3);
  fVar5 = (float)VectorSignedToFloat((uint)param_3[2] - (uint)param_2[2],(byte)(uVar2 >> 0x15) & 3);
  param_1[2] = (char)(int)(fVar4 + fVar5 * fVar3);
  fVar4 = (float)VectorSignedToFloat((uint)param_2[1],(byte)(uVar2 >> 0x15) & 3);
  fVar5 = (float)VectorSignedToFloat((uint)param_3[1] - (uint)param_2[1],(byte)(uVar2 >> 0x15) & 3);
  param_1[1] = (char)(int)(fVar4 + fVar5 * fVar3);
  return (undefined4)param_1;
}

