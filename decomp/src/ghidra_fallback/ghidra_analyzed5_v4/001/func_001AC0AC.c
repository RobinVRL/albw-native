#include "ghidra_types.h"

extern int func_0065AC0C(undefined4 *param_1,undefined1 param_2);
extern int DAT_001ac1b8;
extern float DAT_001ac1bc;
extern int DAT_001ac1c0;
extern float DAT_001ac1c4;
extern float DAT_001ac1c8;
extern undefined4 DAT_001ac1cc;
extern float DAT_001ac1d0;

// USA 001AC0AC <- EU 001AC0AC (Ghidra, non-matching)
// GLOBAL DAT_001ac1b8 int
// GLOBAL DAT_001ac1bc float
// GLOBAL DAT_001ac1c0 int
// GLOBAL DAT_001ac1c4 float
// GLOBAL DAT_001ac1c8 float
// GLOBAL DAT_001ac1cc undefined4
// GLOBAL DAT_001ac1d0 float

undefined4 func_001AC0AC(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (*(uint *)(param_1 + 0x920) < *(uint *)(param_1 + 0x924)) {
    *(uint *)(param_1 + 0x920) = *(uint *)(param_1 + 0x920) + 1;
  }
  uVar1 = DAT_001ac1cc;
  fVar5 = DAT_001ac1c8;
  uVar2 = *(uint *)(param_1 + 0x920) * DAT_001ac1b8;
  iVar3 = DAT_001ac1c0 + (uVar2 >> 0x18) * 0x10;
  fVar4 = (float)VectorUnsignedToFloat(uVar2 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  fVar4 = DAT_001ac1c4 -
          (*(float *)(iVar3 + 8) + *(float *)(iVar3 + 0xc) * fVar4 * DAT_001ac1bc) * DAT_001ac1c4;
  *(float *)(param_1 + 0x91c) = fVar4;
  if (*(uint *)(param_1 + 0x920) < *(uint *)(param_1 + 0x924)) {
    fVar5 = fVar5 - fVar4;
    fVar6 = fVar5 * DAT_001ac1d0;
    *(float *)(param_1 + 0x3dc) =
         (*(float *)(param_1 + 0x910) * fVar5 * fVar5 + *(float *)(param_1 + 0x904) * fVar4 * fVar6
         + *(float *)(param_1 + 0x8f8) * fVar4 * fVar4) - *(float *)(param_1 + 0x3d0);
    *(undefined4 *)(param_1 + 0x3e0) = uVar1;
    *(float *)(param_1 + 0x3e4) =
         (*(float *)(param_1 + 0x918) * fVar5 * fVar5 + *(float *)(param_1 + 0x90c) * fVar4 * fVar6
         + *(float *)(param_1 + 0x900) * fVar4 * fVar4) - *(float *)(param_1 + 0x3d8);
    return 0;
  }
  *(float *)(param_1 + 0x91c) = fVar5;
  *(float *)(param_1 + 0x3dc) = *(float *)(param_1 + 0x8f8) - *(float *)(param_1 + 0x3d0);
  *(undefined4 *)(param_1 + 0x3e0) = uVar1;
  *(float *)(param_1 + 0x3e4) = *(float *)(param_1 + 0x900) - *(float *)(param_1 + 0x3d8);
  return func_0065AC0C((undefined4 *)(param_1 + 0x8bc),10);
}

