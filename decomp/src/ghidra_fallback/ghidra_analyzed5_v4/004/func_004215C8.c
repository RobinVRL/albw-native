#include "ghidra_types.h"

extern int func_001B6CE4(int param_1);

// USA 004215C8 <- EU 004215A8 (Ghidra, non-matching)

undefined4 func_004215C8(int param_1)

{
  uint uVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  uint in_fpscr;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  
  uVar4 = func_001B6CE4(param_1);
  fVar5 = *(float *)(param_1 + 0x4c);
  fVar7 = (float)VectorUnsignedToFloat((uint)*(byte *)(param_1 + 0x50),(byte)(in_fpscr >> 0x15) & 3)
  ;
  uVar1 = in_fpscr & 0xfffffff | (uint)(fVar7 < fVar5) << 0x1f | (uint)(fVar7 == fVar5) << 0x1e;
  bVar2 = (byte)(uVar1 >> 0x18);
  if ((bool)(bVar2 >> 6 & 1) || (bool)(bVar2 >> 7) != (NAN(fVar7) || NAN(fVar5))) {
    uVar3 = 0;
  }
  else {
    uVar4 = 0;
    fVar7 = (float)VectorUnsignedToFloat((uint)*(byte *)(param_1 + 0x50),(byte)(uVar1 >> 0x15) & 3);
    uVar6 = VectorFloatToUnsigned(fVar7 - fVar5,3);
    uVar3 = (undefined1)uVar6;
  }
  *(undefined1 *)(param_1 + 0x50) = uVar3;
  *(undefined1 *)(*(int *)(param_1 + 0x44) + 0x45) = *(undefined1 *)(param_1 + 0x50);
  *(byte *)(*(int *)(param_1 + 0x1c) + 0x70) = *(byte *)(*(int *)(param_1 + 0x1c) + 0x70) | 2;
  return uVar4;
}

