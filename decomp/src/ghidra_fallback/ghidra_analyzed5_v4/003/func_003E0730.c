#include "ghidra_types.h"

extern int DAT_003e07b0;
extern float DAT_003e07b4;
extern float DAT_003e07b8;

// USA 003E0730 <- EU 003E0710 (Ghidra, non-matching)
// GLOBAL DAT_003e07b0 int
// GLOBAL DAT_003e07b4 float
// GLOBAL DAT_003e07b8 float

int func_003E0730(int param_1)

{
  uint in_fpscr;
  int iVar1;
  float fVar2;
  int iVar3;
  
  iVar1 = ALBW_AS_U32(VectorUnsignedToFloat(*(undefined4 *)(param_1 + 4),(byte)(in_fpscr >> 0x15) & 3));
  fVar2 = DAT_003e07b4;
  if (DAT_003e07b0 < iVar1) {
    fVar2 = (float)VectorUnsignedToFloat(*(undefined4 *)(param_1 + 4),(byte)(in_fpscr >> 0x15) & 3);
  }
  iVar1 = VectorFloatToUnsigned(fVar2 * DAT_003e07b8,3);
  iVar3 = ALBW_AS_U32(VectorUnsignedToFloat(ALBW_AS_U32(*(float *)(param_1 + 0xc)),(byte)(in_fpscr >> 0x15) & 3));
  fVar2 = DAT_003e07b4;
  if (DAT_003e07b0 < iVar3) {
    fVar2 = *(float *)(param_1 + 0xc);
  }
  if (DAT_003e07b0 < iVar3) {
    fVar2 = (float)VectorUnsignedToFloat(ALBW_AS_U32(fVar2),(byte)(in_fpscr >> 0x15) & 3);
  }
  iVar3 = VectorFloatToUnsigned(fVar2 * DAT_003e07b8,3);
  return (*(int *)(param_1 + 0x34) * 4 +
          iVar1 * 0x280 + iVar3 * 0x280 + *(int *)(param_1 + 0x30) * 4 +
         *(int *)(param_1 + 0x38) * 4) * 2 + 0x20;
}

