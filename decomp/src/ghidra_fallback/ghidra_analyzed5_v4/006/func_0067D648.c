#include "ghidra_types.h"

extern float DAT_0067d6d4;

// USA 0067D648 <- EU 0067D620 (Ghidra, non-matching)
// GLOBAL DAT_0067d6d4 float

ushort * func_0067D648(int param_1,float fparam_0)

{
  ushort *puVar1;
  ushort *puVar2;
  uint in_fpscr;
  int iVar3;
  uint uVar4;
  float fVar5;
  
  puVar2 = *(ushort **)(param_1 + 0x20);
  uVar4 = (uint)((fparam_0 / *(float *)(param_1 + 0x18)) * DAT_0067d6d4);
  if (uVar4 < *puVar2) {
    return puVar2;
  }
  puVar1 = puVar2 + (uint)*(ushort *)(param_1 + 0xe) * 3 + -3;
  if (uVar4 < *puVar1) {
    fVar5 = (float)VectorSignedToFloat(*(ushort *)(param_1 + 0xe) - 1,(byte)(in_fpscr >> 0x15) & 3);
    iVar3 = VectorFloatToUnsigned(*(float *)(param_1 + 0x1c) * fVar5 * fparam_0,3);
    puVar1 = puVar2 + iVar3 * 3;
    if (*puVar1 <= uVar4) {
      do {
        puVar2 = puVar1;
        puVar1 = puVar2 + 3;
      } while (*puVar1 <= uVar4);
      return puVar2;
    }
    do {
      puVar1 = puVar1 + -3;
    } while (uVar4 < *puVar1);
  }
  return puVar1;
}

