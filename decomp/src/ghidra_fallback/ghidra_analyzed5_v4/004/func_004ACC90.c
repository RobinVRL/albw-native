#include "ghidra_types.h"

extern int DAT_004acd84;
extern int DAT_004acd88;
extern int *DAT_004acd8c;
extern int DAT_004acd90;
extern int DAT_004acd94;

// USA 004ACC90 <- EU 004ACC68 (Ghidra, non-matching)
// GLOBAL DAT_004acd84 int
// GLOBAL DAT_004acd88 int
// GLOBAL DAT_004acd8c int *
// GLOBAL DAT_004acd90 int
// GLOBAL DAT_004acd94 int

void func_004ACC90(int param_1,undefined4 param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  
  iVar1 = *(int *)(param_1 + 0x38);
  iVar2 = 0;
  if (iVar1 != 0) {
    if (*(short *)(DAT_004acd84 + iVar1) < 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = iVar1 + *(short *)(DAT_004acd84 + iVar1) * DAT_004acd88 * 4 + 0x183c;
    }
  }
  iVar1 = *DAT_004acd8c;
  if (((iVar2 != 0) && (*(float *)(iVar2 + 4) <= *param_3)) &&
     (*param_3 <= *(float *)(iVar2 + 0x10))) {
    fVar5 = param_3[1];
    bVar3 = *(float *)(iVar2 + 8) == fVar5;
    bVar4 = fVar5 <= *(float *)(iVar2 + 8);
    if (!bVar4 || bVar3) {
      bVar3 = fVar5 == *(float *)(iVar2 + 0x14);
      bVar4 = *(float *)(iVar2 + 0x14) <= fVar5;
    }
    if (!bVar4 || bVar3) {
      fVar5 = param_3[2];
      bVar3 = *(float *)(iVar2 + 0xc) == fVar5;
      bVar4 = fVar5 <= *(float *)(iVar2 + 0xc);
      if (!bVar4 || bVar3) {
        bVar3 = fVar5 == *(float *)(iVar2 + 0x18);
        bVar4 = *(float *)(iVar2 + 0x18) <= fVar5;
      }
      if (!bVar4 || bVar3) {
        *(undefined1 *)(DAT_004acd90 + param_1) = 1;
        *(float *)(param_1 + 0x770c) = *param_3;
        *(float *)(param_1 + 0x7710) = param_3[1];
        *(float *)(param_1 + 0x7714) = param_3[2];
        *(undefined4 *)(DAT_004acd94 + param_1) = param_2;
        *(undefined4 *)(param_1 + 0x771c) = *(undefined4 *)(iVar2 + 0x3c0);
        *(undefined1 *)(param_1 + 0x7724) = *(undefined1 *)(iVar1 + 0x18);
        *(undefined4 *)(param_1 + 0x7720) = *(undefined4 *)(iVar1 + 0x1c);
      }
    }
  }
  return;
}

