#include "ghidra_types.h"

extern int func_001B6AFC(int param_1);
extern int DAT_004214ec;

// USA 00421494 <- EU 00421474 (Ghidra, non-matching)
// GLOBAL DAT_004214ec int

undefined4 func_00421494(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  uint in_fpscr;
  undefined4 uVar3;
  float fVar4;
  
  uVar2 = func_001B6AFC(param_1);
  fVar4 = (float)VectorUnsignedToFloat((uint)*(byte *)(param_1 + 0x50),(byte)(in_fpscr >> 0x15) & 3)
  ;
  if ((int)ALBW_AS_U32((fVar4 + *(float *)(param_1 + 0x4c))) < DAT_004214ec) {
    uVar2 = 0;
    fVar4 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)(param_1 + 0x50),(byte)(in_fpscr >> 0x15) & 3);
    uVar3 = VectorFloatToUnsigned(fVar4 + *(float *)(param_1 + 0x4c),3);
    uVar1 = (undefined1)uVar3;
  }
  else {
    uVar1 = 0xff;
  }
  *(undefined1 *)(param_1 + 0x50) = uVar1;
  *(undefined1 *)(*(int *)(param_1 + 0x44) + 0x45) = *(undefined1 *)(param_1 + 0x50);
  *(byte *)(*(int *)(param_1 + 0x1c) + 0x70) = *(byte *)(*(int *)(param_1 + 0x1c) + 0x70) | 2;
  return uVar2;
}

