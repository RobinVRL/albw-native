#include "ghidra_types.h"

extern int func_001B6C04(int param_1);
extern float DAT_00421594;
extern float DAT_00421598;
extern float DAT_0042159c;
extern float DAT_004215a0;
extern undefined4 DAT_004215a4;

// USA 00421510 <- EU 004214F0 (Ghidra, non-matching)
// GLOBAL DAT_00421594 float
// GLOBAL DAT_00421598 float
// GLOBAL DAT_0042159c float
// GLOBAL DAT_004215a0 float
// GLOBAL DAT_004215a4 undefined4

void func_00421510(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  float in_s0;
  float in_s3;
  
  func_001B6C04(param_1);
  fVar1 = DAT_00421594;
  iVar3 = *(int *)(param_1 + 0x44);
  bVar5 = iVar3 == *(int *)(param_1 + 0x40);
  if (bVar5) {
    in_s0 = DAT_00421598;
  }
  iVar2 = *(int *)(**(int **)(param_1 + 0x1c) + 0x10);
  if (!bVar5) {
    if (iVar3 == 0) {
      in_s3 = *(float *)(param_1 + 0x48) * DAT_00421594;
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(param_1 + 0x38);
    }
    if (iVar3 != 0) {
      in_s3 = *(float *)(iVar4 + 0xbc);
    }
    in_s0 = DAT_004215a0 - in_s3 * DAT_0042159c;
  }
  *(float *)(iVar2 + 0x20) = in_s0;
  *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xef | 0x10;
  if (*(int *)(param_1 + 0x44) == *(int *)(param_1 + 0x40)) {
    *(float *)(param_1 + 0x4c) = fVar1;
  }
  else {
    *(undefined4 *)(param_1 + 0x4c) = DAT_004215a4;
  }
  *(undefined1 *)(param_1 + 0x50) = 1;
  *(undefined1 *)(*(int *)(param_1 + 0x44) + 0x45) = 1;
  *(byte *)(*(int *)(param_1 + 0x1c) + 0x70) = *(byte *)(*(int *)(param_1 + 0x1c) + 0x70) | 2;
  *(undefined1 *)(param_1 + 0x51) = 0;
  return;
}

