#include "ghidra_types.h"

extern float DAT_00523df4;
extern float DAT_00523df8;
extern float DAT_00523dfc;
extern int DAT_00523e00;

// USA 00523D88 <- EU 00523D60 (Ghidra, non-matching)
// GLOBAL DAT_00523df4 float
// GLOBAL DAT_00523df8 float
// GLOBAL DAT_00523dfc float
// GLOBAL DAT_00523e00 int

int func_00523D88(int param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  
  if (*(int *)(param_1 + 0x2dc) == -1) {
    iVar3 = 0;
  }
  else {
    fVar4 = (float)VectorUnsignedToFloat
                             (*(int *)(param_1 + 0x2d8) - *(int *)(param_1 + 0x2f0),
                              (byte)(in_fpscr >> 0x15) & 3);
    fVar5 = fVar4 * DAT_00523df8 * DAT_00523dfc;
    uVar1 = in_fpscr & 0xfffffff | (uint)(DAT_00523df4 < fVar5) << 0x1f |
            (uint)(DAT_00523df4 == fVar5) << 0x1e;
    bVar2 = (byte)(uVar1 >> 0x18);
    fVar4 = DAT_00523df4;
    if ((bool)(bVar2 >> 6 & 1) || (bool)(bVar2 >> 7) != (NAN(DAT_00523df4) || NAN(fVar5))) {
      fVar4 = fVar5;
    }
    iVar3 = (int)fVar4;
    fVar5 = (float)VectorSignedToFloat(iVar3,(byte)(uVar1 >> 0x15) & 3);
    if ((fVar5 != fVar4) && (DAT_00523df4 <= fVar4)) {
      iVar3 = iVar3 + 1;
    }
    iVar3 = (int)(short)((short)iVar3 +
                        ((short)(int)((longlong)DAT_00523e00 * (longlong)iVar3 >> 0x25) -
                        (short)((longlong)DAT_00523e00 * (longlong)iVar3 >> 0x3f)) * -100);
  }
  return iVar3;
}

