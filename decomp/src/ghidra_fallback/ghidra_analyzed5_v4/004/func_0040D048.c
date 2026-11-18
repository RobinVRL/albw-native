#include "ghidra_types.h"

extern int DAT_0040d0c4;
extern float DAT_0040d0c8;
extern float DAT_0040d0cc;

// USA 0040D048 <- EU 0040D028 (Ghidra, non-matching)
// GLOBAL DAT_0040d0c4 int
// GLOBAL DAT_0040d0c8 float
// GLOBAL DAT_0040d0cc float

int func_0040D048(int param_1)

{
  int iVar1;
  uint in_fpscr;
  float fVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar3 = ALBW_AS_U32(VectorUnsignedToFloat(*(undefined4 *)(iVar1 + 0xc),(byte)(in_fpscr >> 0x15) & 3));
  fVar2 = DAT_0040d0c8;
  if (DAT_0040d0c4 < iVar3) {
    fVar2 = (float)VectorUnsignedToFloat(*(undefined4 *)(iVar1 + 0xc),(byte)(in_fpscr >> 0x15) & 3);
  }
  iVar3 = VectorFloatToUnsigned(fVar2 * DAT_0040d0cc,3);
  iVar4 = ALBW_AS_U32(VectorUnsignedToFloat(*(undefined4 *)(iVar1 + 0x14),(byte)(in_fpscr >> 0x15) & 3));
  fVar2 = DAT_0040d0c8;
  if (DAT_0040d0c4 < iVar4) {
    fVar2 = (float)VectorUnsignedToFloat(*(undefined4 *)(iVar1 + 0x14),(byte)(in_fpscr >> 0x15) & 3)
    ;
  }
  iVar4 = VectorFloatToUnsigned(fVar2 * DAT_0040d0cc,3);
  return (*(int *)(iVar1 + 0x3c) * 4 + iVar3 * 0x280 + iVar4 * 0x280 + *(int *)(iVar1 + 0x38) * 4 +
         *(int *)(iVar1 + 0x40) * 4) * (uint)*(byte *)(iVar1 + 0x10d) + 0x20;
}

