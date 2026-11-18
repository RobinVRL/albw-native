#include "ghidra_types.h"

extern float DAT_002e19c0;

// USA 002E1904 <- EU 002E18E0 (Ghidra, non-matching)
// GLOBAL DAT_002e19c0 float

void func_002E1904(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *(undefined4 *)(param_1 + 0x20) = *param_2;
  *(undefined4 *)(param_1 + 0x24) = param_2[1];
  *(undefined4 *)(param_1 + 0x28) = param_2[2];
  *(undefined4 *)(param_1 + 0x2c) = *param_3;
  *(undefined4 *)(param_1 + 0x30) = param_3[1];
  *(undefined4 *)(param_1 + 0x34) = param_3[2];
  *(undefined4 *)(param_1 + 0x38) = param_3[3];
  uVar3 = param_3[5];
  uVar4 = param_3[6];
  *(undefined4 *)(param_1 + 0x3c) = param_3[4];
  *(undefined4 *)(param_1 + 0x40) = uVar3;
  *(undefined4 *)(param_1 + 0x44) = uVar4;
  *(undefined4 *)(param_1 + 0x48) = param_3[7];
  *(undefined4 *)(param_1 + 0x4c) = param_3[8];
  *(undefined4 *)(param_1 + 0x50) = param_3[9];
  *(undefined2 *)(param_1 + 0x54) = *(undefined2 *)(param_3 + 10);
  *(undefined2 *)(param_1 + 0x56) = *(undefined2 *)((int)param_3 + 0x2a);
  fVar1 = DAT_002e19c0;
  if (*(int *)(param_1 + 0x44) != 0) {
    fVar2 = *(float *)(param_1 + 0x38) + *(float *)(param_1 + 0x58);
    *(float *)(param_1 + 0x38) = fVar2;
    if ((int)ALBW_AS_U32(fVar2) < 0x3f800001) {
      fVar2 = fVar1;
    }
    *(float *)(param_1 + 0x38) = fVar2;
    fVar2 = *(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x5c);
    *(float *)(param_1 + 0x3c) = fVar2;
    if ((int)ALBW_AS_U32(fVar2) < 0x3f800001) {
      fVar2 = fVar1;
    }
    *(float *)(param_1 + 0x3c) = fVar2;
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x34);
  return;
}

