#include "ghidra_types.h"

extern undefined4 *DAT_0048f7a8;

// USA 0048F6C4 <- EU 0048F69C (Ghidra, non-matching)
// GLOBAL DAT_0048f7a8 undefined4 *

undefined4 func_0048F6C4(int param_1,uint param_2,uint param_3,float *param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (param_2 != 0) {
    fVar5 = *(float *)(param_1 + 0x18);
    fVar9 = *(float *)(param_1 + 0x20);
    if (fVar9 < fVar5) {
LAB_0048f71c:
      *(float *)(param_1 + 0x110) = *param_4;
      *(float *)(param_1 + 0x114) = param_4[1];
    }
    else {
      fVar6 = *(float *)(param_1 + 0x1c);
      fVar8 = *(float *)(param_1 + 0x24);
      if (fVar8 < fVar6) goto LAB_0048f71c;
      fVar7 = *param_4;
      bVar3 = fVar5 == fVar7;
      bVar4 = fVar7 <= fVar5;
      if (!bVar4 || bVar3) {
        bVar3 = fVar7 == fVar9;
        bVar4 = fVar9 <= fVar7;
      }
      if (bVar4 && !bVar3) {
LAB_0048f714:
        param_2 = 0;
      }
      else {
        fVar9 = param_4[1];
        bVar3 = fVar6 == fVar9;
        bVar4 = fVar9 <= fVar6;
        if (!bVar4 || bVar3) {
          bVar3 = fVar9 == fVar8;
          bVar4 = fVar8 <= fVar9;
        }
        if (bVar4 && !bVar3) goto LAB_0048f714;
        *(float *)(param_1 + 0x110) = fVar7 - fVar5;
        *(float *)(param_1 + 0x114) = param_4[1] - fVar6;
      }
    }
    if (param_2 != 0) {
      uVar2 = *(uint *)(param_1 + 0xc) | 1;
      goto LAB_0048f744;
    }
  }
  uVar2 = *(uint *)(param_1 + 0xc) & 0xfffffffe;
LAB_0048f744:
  *(uint *)(param_1 + 0xc) = uVar2;
  if (-1 < (int)*(uint *)(param_1 + 0x104)) {
    uVar2 = 1 << (*(uint *)(param_1 + 0x104) & 0xff);
    if ((param_2 & param_3) == 0) {
      uVar2 = *(uint *)(param_1 + 0x10c) & ~uVar2;
    }
    else {
      uVar2 = uVar2 | *(uint *)(param_1 + 0x10c);
    }
    *(uint *)(param_1 + 0x10c) = uVar2;
  }
  puVar1 = DAT_0048f7a8;
  if ((*(uint *)(param_1 + 0xc) & 8) != 0) {
    if ((*(uint *)(param_1 + 0xc) & 1) == 0) {
      *(undefined4 *)(param_1 + 0x110) = *DAT_0048f7a8;
      *(undefined4 *)(param_1 + 0x114) = puVar1[1];
    }
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffff7;
  }
  return (undefined4)param_1;
}

