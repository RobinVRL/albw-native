#include "ghidra_types.h"

extern int func_00532C78(int param_1);
extern float DAT_0016739c;

// USA 00167244 <- EU 00167248 (Ghidra, non-matching)
// GLOBAL DAT_0016739c float

void func_00167244(int param_1)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int in_r3;
  float fVar7;
  float fVar8;
  
  if ((*(int *)(param_1 + 0x28) != 0) && (-1 < *(short *)(param_1 + 0x22))) {
    bVar3 = func_00532C78(param_1 + 0x20);
    if (!bVar3) {
      iVar5 = *(int *)(param_1 + 0x1c);
      uVar4 = (uint)*(short *)(param_1 + 0x22);
      if (uVar4 < *(uint *)(iVar5 + 8)) {
        iVar6 = *(int *)(iVar5 + 0xc) + uVar4 * 0x38;
        in_r3 = *(int *)(iVar5 + 0xc);
      }
      else {
        iVar6 = *(int *)(iVar5 + 0xc);
      }
      if (uVar4 < *(uint *)(iVar5 + 8)) {
        in_r3 = in_r3 + uVar4 * 0x38;
      }
      else {
        in_r3 = *(int *)(iVar5 + 0xc);
      }
      fVar8 = -*(float *)(iVar6 + 0x1c);
      fVar7 = *(float *)(in_r3 + 0x20);
      iVar6 = *(int *)(iVar5 + 0xc);
      if (uVar4 < *(uint *)(iVar5 + 8)) {
        iVar6 = iVar6 + uVar4 * 0x38;
      }
      if (((*(char *)(iVar6 + 0x35) == '\0') || (*(float *)(iVar6 + 0x14) != fVar7)) ||
         (*(float *)(iVar6 + 0x1c) != fVar8)) {
        if ((DAT_0016739c <= fVar8) || (fVar7 != DAT_0016739c)) {
          *(float *)(iVar6 + 0x18) = fVar7;
          *(float *)(iVar6 + 0x14) = fVar7;
        }
        else {
          *(undefined4 *)(iVar6 + 0x18) = *(undefined4 *)(iVar6 + 0x20);
          *(undefined4 *)(iVar6 + 0x14) = *(undefined4 *)(iVar6 + 0x20);
        }
        *(float *)(iVar6 + 0x1c) = fVar8;
        *(undefined4 *)(iVar6 + 0x24) = 0;
        *(float *)(*(int *)(iVar6 + 0x10) + 0x10) = fVar7;
        *(undefined1 *)(iVar6 + 0x34) = 1;
        *(undefined1 *)(iVar6 + 0x35) = 1;
      }
      return;
    }
    iVar5 = *(int *)(param_1 + 0x1c);
    uVar4 = (uint)*(short *)(param_1 + 0x22);
    puVar1 = (uint *)(iVar5 + 8);
    if (uVar4 < *puVar1) {
      uVar2 = uVar4 * 7;
      iVar6 = *(int *)(iVar5 + 0xc) + uVar4 * 0x38;
      iVar5 = *(int *)(iVar5 + 0xc);
    }
    else {
      iVar6 = *(int *)(iVar5 + 0xc);
      uVar2 = uVar4;
    }
    if (uVar4 < *puVar1) {
      iVar5 = iVar5 + uVar2 * 8;
    }
    else {
      iVar5 = *(int *)(iVar5 + 0xc);
    }
    *(float *)(iVar5 + 0x1c) = -*(float *)(iVar6 + 0x1c);
  }
  return;
}

