#include "ghidra_types.h"


// USA 0067E848 <- EU 0067E820 (Ghidra, non-matching)

uint * func_0067E848(int param_1,float fparam_0)

{
  uint *puVar1;
  uint *puVar2;
  uint in_fpscr;
  int iVar3;
  uint uVar4;
  float fVar5;
  
  puVar2 = *(uint **)(param_1 + 0x20);
  uVar4 = VectorFloatToUnsigned(fparam_0 / *(float *)(param_1 + 0x18),3);
  if (uVar4 < (*puVar2 & 0xfff)) {
    return puVar2;
  }
  puVar1 = puVar2 + (uint)*(ushort *)(param_1 + 0xe) * 2 + -2;
  if (uVar4 < (*puVar1 & 0xfff)) {
    fVar5 = (float)VectorSignedToFloat(*(ushort *)(param_1 + 0xe) - 1,(byte)(in_fpscr >> 0x15) & 3);
    iVar3 = VectorFloatToUnsigned(*(float *)(param_1 + 0x1c) * fVar5 * fparam_0,3);
    puVar1 = puVar2 + iVar3 * 2;
    if ((*puVar1 & 0xfff) <= uVar4) {
      do {
        puVar2 = puVar1;
        puVar1 = puVar2 + 2;
      } while ((*puVar1 & 0xfff) <= uVar4);
      return puVar2;
    }
    do {
      puVar1 = puVar1 + -2;
    } while (uVar4 < (*puVar1 & 0xfff));
  }
  return puVar1;
}

