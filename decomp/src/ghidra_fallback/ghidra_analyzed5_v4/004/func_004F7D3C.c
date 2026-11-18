#include "ghidra_types.h"

extern undefined4 DAT_004f7dc4;
extern int DAT_004f7dc8;
extern undefined4 DAT_004f7dcc;
extern float DAT_004f7dd0;

// USA 004F7D3C <- EU 004F7D14 (Ghidra, non-matching)
// GLOBAL DAT_004f7dc4 undefined4
// GLOBAL DAT_004f7dc8 int
// GLOBAL DAT_004f7dcc undefined4
// GLOBAL DAT_004f7dd0 float

void func_004F7D3C(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  
  uVar2 = DAT_004f7dcc;
  uVar1 = DAT_004f7dc4;
  if (((*(char *)(param_1 + 0x657) == '\0') && (*(char *)(param_1 + 0x656) != '\0')) &&
     (DAT_004f7dc8 < *(int *)(param_1 + 0x4c4))) {
    *(undefined4 *)(param_1 + 0x4c8) = DAT_004f7dcc;
    *(undefined4 *)(param_1 + 0x4b8) = uVar1;
    *(undefined4 *)(param_1 + 0x4c0) = uVar1;
    *(undefined4 *)(param_1 + 0x4bc) = uVar2;
  }
  fVar3 = *(float *)(param_1 + 0x4c4);
  fVar4 = *(float *)(param_1 + 0x4c8);
  if (fVar3 == fVar4) {
    return;
  }
  if (fVar3 <= fVar4) {
    fVar4 = fVar4 - fVar3 * DAT_004f7dd0;
    *(float *)(param_1 + 0x4c8) = fVar4;
    if (fVar4 <= fVar3) goto LAB_004f7db0;
  }
  else {
    fVar4 = fVar4 + fVar3 * DAT_004f7dd0;
    *(float *)(param_1 + 0x4c8) = fVar4;
    if (fVar3 < fVar4) goto LAB_004f7db0;
  }
  fVar3 = fVar4;
LAB_004f7db0:
  *(float *)(param_1 + 0x4c8) = fVar3;
  *(undefined4 *)(param_1 + 0x4b8) = uVar1;
  *(undefined4 *)(param_1 + 0x4c0) = uVar1;
  *(float *)(param_1 + 0x4bc) = fVar3;
  return;
}

