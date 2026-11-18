#include "ghidra_types.h"

extern undefined4 DAT_00433178;
extern undefined4 DAT_0043317c;

// USA 00433020 <- EU 00433000 (Ghidra, non-matching)
// GLOBAL DAT_00433178 undefined4
// GLOBAL DAT_0043317c undefined4

void func_00433020(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  uVar1 = DAT_00433178;
  fVar5 = *(float *)(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x34) = DAT_00433178;
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  uVar1 = DAT_0043317c;
  *(undefined4 *)(param_1 + 0x40) = DAT_0043317c;
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  fVar4 = *(float *)(param_1 + 0x58);
  fVar2 = *(float *)(param_1 + 0x5c);
  fVar3 = *(float *)(param_1 + 0x60);
  fVar6 = *(float *)(param_1 + 0x34);
  if (fVar4 < *(float *)(param_1 + 0x34)) {
    fVar6 = fVar4;
  }
  *(float *)(param_1 + 0x34) = fVar6;
  fVar6 = *(float *)(param_1 + 0x38);
  if (fVar2 < *(float *)(param_1 + 0x38)) {
    fVar6 = fVar2;
  }
  *(float *)(param_1 + 0x38) = fVar6;
  fVar6 = *(float *)(param_1 + 0x3c);
  if (fVar3 < *(float *)(param_1 + 0x3c)) {
    fVar6 = fVar3;
  }
  *(float *)(param_1 + 0x3c) = fVar6;
  if (fVar4 < *(float *)(param_1 + 0x40)) {
    fVar4 = *(float *)(param_1 + 0x40);
  }
  *(float *)(param_1 + 0x40) = fVar4;
  if (fVar2 < *(float *)(param_1 + 0x44)) {
    fVar2 = *(float *)(param_1 + 0x44);
  }
  *(float *)(param_1 + 0x44) = fVar2;
  if (fVar3 < *(float *)(param_1 + 0x48)) {
    fVar3 = *(float *)(param_1 + 0x48);
  }
  *(float *)(param_1 + 0x48) = fVar3;
  fVar4 = *(float *)(param_1 + 100);
  fVar2 = *(float *)(param_1 + 0x68);
  fVar3 = *(float *)(param_1 + 0x6c);
  fVar6 = *(float *)(param_1 + 0x34);
  if (fVar4 < *(float *)(param_1 + 0x34)) {
    fVar6 = fVar4;
  }
  *(float *)(param_1 + 0x34) = fVar6;
  fVar6 = *(float *)(param_1 + 0x38);
  if (fVar2 < *(float *)(param_1 + 0x38)) {
    fVar6 = fVar2;
  }
  *(float *)(param_1 + 0x38) = fVar6;
  fVar6 = *(float *)(param_1 + 0x3c);
  if (fVar3 < *(float *)(param_1 + 0x3c)) {
    fVar6 = fVar3;
  }
  *(float *)(param_1 + 0x3c) = fVar6;
  if (fVar4 < *(float *)(param_1 + 0x40)) {
    fVar4 = *(float *)(param_1 + 0x40);
  }
  *(float *)(param_1 + 0x40) = fVar4;
  if (fVar2 < *(float *)(param_1 + 0x44)) {
    fVar2 = *(float *)(param_1 + 0x44);
  }
  *(float *)(param_1 + 0x44) = fVar2;
  if (fVar3 < *(float *)(param_1 + 0x48)) {
    fVar3 = *(float *)(param_1 + 0x48);
  }
  *(float *)(param_1 + 0x48) = fVar3;
  *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) - fVar5;
  *(float *)(param_1 + 0x38) = *(float *)(param_1 + 0x38) - fVar5;
  *(float *)(param_1 + 0x3c) = fVar6 - fVar5;
  *(float *)(param_1 + 0x48) = *(float *)(param_1 + 0x48) + fVar5;
  *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x40) + fVar5;
  *(float *)(param_1 + 0x44) = *(float *)(param_1 + 0x44) + fVar5;
  return;
}

