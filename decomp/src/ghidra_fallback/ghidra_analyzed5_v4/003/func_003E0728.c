#include "ghidra_types.h"

extern int DAT_003e07b0;
extern float DAT_003e07b4;
extern float DAT_003e07b8;

// USA 003E0728 <- EU 003E0708 (Ghidra, non-matching)
// GLOBAL DAT_003e07b0 int
// GLOBAL DAT_003e07b4 float
// GLOBAL DAT_003e07b8 float

int func_003E0728(int param_1)

{
  int iVar1;
  uint in_fpscr;
  int iVar2;
  float fVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = ALBW_AS_U32(VectorUnsignedToFloat(*(undefined4 *)(iVar1 + 4),(byte)(in_fpscr >> 0x15) & 3));
  fVar3 = DAT_003e07b4;
  if (DAT_003e07b0 < iVar2) {
    fVar3 = (float)VectorUnsignedToFloat(*(undefined4 *)(iVar1 + 4),(byte)(in_fpscr >> 0x15) & 3);
  }
  iVar2 = VectorFloatToUnsigned(fVar3 * DAT_003e07b8,3);
  iVar4 = ALBW_AS_U32(VectorUnsignedToFloat(ALBW_AS_U32(*(float *)(iVar1 + 0xc)),(byte)(in_fpscr >> 0x15) & 3));
  fVar3 = DAT_003e07b4;
  if (DAT_003e07b0 < iVar4) {
    fVar3 = *(float *)(iVar1 + 0xc);
  }
  if (DAT_003e07b0 < iVar4) {
    fVar3 = (float)VectorUnsignedToFloat(ALBW_AS_U32(fVar3),(byte)(in_fpscr >> 0x15) & 3);
  }
  iVar4 = VectorFloatToUnsigned(fVar3 * DAT_003e07b8,3);
  return (*(int *)(iVar1 + 0x34) * 4 + iVar2 * 0x280 + iVar4 * 0x280 + *(int *)(iVar1 + 0x30) * 4 +
         *(int *)(iVar1 + 0x38) * 4) * 2 + 0x20;
}

