#include "ghidra_types.h"

extern int func_00520FC0(void);
extern int func_0065E9FC(undefined4 *param_1,undefined1 param_2);
extern float DAT_0022e718;
extern float DAT_0022e71c;
extern float DAT_0022e720;
extern float DAT_0022e724;

// USA 0022E54C <- EU 0022E54C (Ghidra, non-matching)
// GLOBAL DAT_0022e718 float
// GLOBAL DAT_0022e71c float
// GLOBAL DAT_0022e720 float
// GLOBAL DAT_0022e724 float

undefined4 func_0022E54C(int param_1)

{
  float *pfVar1;
  uint uVar2;
  float *pfVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  pfVar1 = (float *)func_00520FC0();
  fVar7 = DAT_0022e71c;
  iVar6 = *(int *)(param_1 + 0x8c4);
  uVar5 = 0xffffffff;
  uVar2 = 0;
  if (0 < iVar6) {
    fVar8 = DAT_0022e71c;
    do {
      pfVar3 = (float *)(param_1 + 0x8c8);
      if (uVar2 < 0x20) {
        pfVar3 = (float *)(param_1 + 0x8c8) + uVar2 * 3;
      }
      fVar9 = (*pfVar1 - *pfVar3) * (*pfVar1 - *pfVar3) +
              (pfVar1[2] - pfVar3[2]) * (pfVar1[2] - pfVar3[2]);
      if ((fVar9 < DAT_0022e718 * DAT_0022e718) && ((uVar5 == 0xffffffff || (fVar9 < fVar8)))) {
        uVar5 = uVar2;
        fVar8 = fVar9;
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < iVar6);
  }
  *(undefined1 *)(param_1 + 0xa6d) = 1;
  if (*(char *)(param_1 + 0xa6c) == '\0') {
    if (uVar5 == 0xffffffff) {
      return 0;
    }
  }
  else if (uVar5 == 0xffffffff) {
    uVar5 = 0xffffffff;
    uVar2 = 0;
    if (iVar6 < 1) {
      return 0;
    }
    do {
      pfVar1 = (float *)(param_1 + 0x8c8);
      if (uVar2 < 0x20) {
        pfVar1 = (float *)(param_1 + 0x8c8) + uVar2 * 3;
      }
      fVar8 = *(float *)(param_1 + 0xa70) - *pfVar1;
      fVar9 = *(float *)(param_1 + 0xa78) - pfVar1[2];
      fVar8 = fVar8 * fVar8 + fVar9 * fVar9;
      if ((fVar8 < DAT_0022e720 * DAT_0022e720) && ((uVar5 == 0xffffffff || (fVar8 < fVar7)))) {
        uVar5 = uVar2;
        fVar7 = fVar8;
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < iVar6);
    if (uVar5 == 0xffffffff) {
      return 0;
    }
    *(undefined1 *)(param_1 + 0xa6d) = 0;
  }
  if (*(int *)(param_1 + 0xa7c) < 3) {
    return 0;
  }
  puVar4 = (undefined4 *)(param_1 + 0x8c8);
  if (uVar5 < 0x20) {
    puVar4 = (undefined4 *)(param_1 + 0x8c8 + uVar5 * 0xc);
  }
  *(uint *)(param_1 + 0x8c0) = uVar5;
  fVar7 = DAT_0022e724;
  *(undefined4 *)(param_1 + 0x3d0) = *puVar4;
  *(undefined4 *)(param_1 + 0x3d4) = puVar4[1];
  *(undefined4 *)(param_1 + 0x3d8) = puVar4[2];
  *(float *)(param_1 + 0x3d4) = *(float *)(param_1 + 0x3d4) + fVar7;
  return func_0065E9FC((undefined4 *)(param_1 + 0xa7c),1);
}

