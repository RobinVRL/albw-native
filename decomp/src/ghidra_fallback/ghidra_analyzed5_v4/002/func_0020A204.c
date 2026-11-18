#include "ghidra_types.h"

extern int func_0036BE78();
extern int func_0058A8F0(int param_1);
extern int func_0065D630(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_0020a298;
extern undefined4 DAT_0020a29c;
extern float *DAT_0020a2a0;

// USA 0020A204 <- EU 0020A204 (Ghidra, non-matching)
// GLOBAL DAT_0020a298 undefined4
// GLOBAL DAT_0020a29c undefined4
// GLOBAL DAT_0020a2a0 float *

void func_0020A204(int param_1)

{
  undefined4 uVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  pfVar2 = DAT_0020a2a0;
  uVar1 = DAT_0020a29c;
  *(undefined4 *)(param_1 + 0x574) = DAT_0020a298;
  *(undefined4 *)(param_1 + 0x3d4) = uVar1;
  fVar4 = *(float *)(param_1 + 0x3d0) + *pfVar2;
  *(float *)(param_1 + 0xb84) = fVar4;
  fVar5 = *(float *)(param_1 + 0xd34) + pfVar2[1];
  *(float *)(param_1 + 0xb88) = fVar5;
  fVar6 = *(float *)(param_1 + 0x3d8) + pfVar2[2];
  *(float *)(param_1 + 0xb8c) = fVar6;
  *(float *)(param_1 + 0xd24) = fVar4;
  *(float *)(param_1 + 0xd28) = fVar5;
  *(float *)(param_1 + 0xd2c) = fVar6;
  func_0036BE78(param_1 + 0xa7c);
  iVar3 = func_0058A8F0(param_1);
  if (iVar3 != 0) {
    func_0065D630((undefined4 *)(param_1 + 0x8bc),3);
  }
  return;
}

