#include "ghidra_types.h"

extern int func_0036BE78();
extern int func_0065D630(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_0020b6a4;
extern undefined4 DAT_0020b6a8;
extern float *DAT_0020b6ac;

// USA 0020B614 <- EU 0020B614 (Ghidra, non-matching)
// GLOBAL DAT_0020b6a4 undefined4
// GLOBAL DAT_0020b6a8 undefined4
// GLOBAL DAT_0020b6ac float *

void func_0020B614(int param_1)

{
  undefined4 uVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  pfVar2 = DAT_0020b6ac;
  uVar1 = DAT_0020b6a8;
  *(undefined4 *)(param_1 + 0x574) = DAT_0020b6a4;
  *(undefined4 *)(param_1 + 0x3d4) = uVar1;
  fVar4 = *(float *)(param_1 + 0x3d0) + *pfVar2;
  *(float *)(param_1 + 0xb84) = fVar4;
  fVar5 = *(float *)(param_1 + 0xd34) + pfVar2[1];
  *(float *)(param_1 + 0xb88) = fVar5;
  fVar3 = *(float *)(param_1 + 0x3d8) + pfVar2[2];
  *(float *)(param_1 + 0xb8c) = fVar3;
  *(float *)(param_1 + 0xd2c) = fVar3;
  *(float *)(param_1 + 0xd24) = fVar4;
  *(float *)(param_1 + 0xd28) = fVar5;
  func_0036BE78(param_1 + 0xa7c);
  if (0x82 < *(int *)(param_1 + 0x8bc)) {
    func_0065D630((undefined4 *)(param_1 + 0x8bc),4);
  }
  return;
}

