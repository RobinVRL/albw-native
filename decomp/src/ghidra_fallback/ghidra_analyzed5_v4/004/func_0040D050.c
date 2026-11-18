#include "ghidra_types.h"

extern int DAT_0040d0c4;
extern float DAT_0040d0c8;
extern float DAT_0040d0cc;

// USA 0040D050 <- EU 0040D030 (Ghidra, non-matching)
// GLOBAL DAT_0040d0c4 int
// GLOBAL DAT_0040d0c8 float
// GLOBAL DAT_0040d0cc float

int func_0040D050(int param_1)

{
  uint in_fpscr;
  float fVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = ALBW_AS_U32(VectorUnsignedToFloat(*(undefined4 *)(param_1 + 0xc),(byte)(in_fpscr >> 0x15) & 3));
  fVar1 = DAT_0040d0c8;
  if (DAT_0040d0c4 < iVar2) {
    fVar1 = (float)VectorUnsignedToFloat
                             (*(undefined4 *)(param_1 + 0xc),(byte)(in_fpscr >> 0x15) & 3);
  }
  iVar2 = VectorFloatToUnsigned(fVar1 * DAT_0040d0cc,3);
  iVar3 = ALBW_AS_U32(VectorUnsignedToFloat(*(undefined4 *)(param_1 + 0x14),(byte)(in_fpscr >> 0x15) & 3));
  fVar1 = DAT_0040d0c8;
  if (DAT_0040d0c4 < iVar3) {
    fVar1 = (float)VectorUnsignedToFloat
                             (*(undefined4 *)(param_1 + 0x14),(byte)(in_fpscr >> 0x15) & 3);
  }
  iVar3 = VectorFloatToUnsigned(fVar1 * DAT_0040d0cc,3);
  return (*(int *)(param_1 + 0x3c) * 4 +
          iVar2 * 0x280 + iVar3 * 0x280 + *(int *)(param_1 + 0x38) * 4 +
         *(int *)(param_1 + 0x40) * 4) * (uint)*(byte *)(param_1 + 0x10d) + 0x20;
}

