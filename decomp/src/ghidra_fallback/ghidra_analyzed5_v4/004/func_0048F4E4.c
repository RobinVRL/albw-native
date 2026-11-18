#include "ghidra_types.h"

extern int func_004905E0(float fparam_0);
extern float DAT_0048f698;

// USA 0048F4E4 <- EU 0048F4BC (Ghidra, non-matching)
// GLOBAL DAT_0048f698 float

uint func_0048F4E4(undefined4 param_1,uint param_2,float *param_3,uint param_4,float fparam_0,
                  float fparam_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar8 = *param_3;
  fVar7 = param_3[1];
  fVar9 = SQRT(fVar8 * fVar8 + fVar7 * fVar7);
  if (fparam_1 <= fVar9) {
    uVar1 = 1 << (param_4 + 1 & 0xff);
    uVar2 = 1 << (param_4 & 0xff);
    uVar3 = 1 << (param_4 + 2 & 0xff);
    uVar4 = 1 << (param_4 + 3 & 0xff);
    if ((fparam_0 <= fVar9) || (((uVar2 | uVar1 | uVar3 | uVar4) & param_2) != 0)) {
      if (fVar8 == DAT_0048f698 && fVar7 == DAT_0048f698) {
        return uVar4;
      }
      if (fVar8 < DAT_0048f698) {
        if (fVar7 < DAT_0048f698) {
          if (fVar7 < fVar8) {
            iVar6 = func_004905E0(fVar8 / fVar7);
            uVar5 = 0xc0000000 - iVar6;
          }
          else {
            iVar6 = func_004905E0(fVar7 / fVar8);
            uVar5 = iVar6 + 0x80000000;
          }
        }
        else {
          fVar8 = -fVar8;
          if (fVar8 < fVar7) {
            iVar6 = func_004905E0(fVar8 / fVar7);
            uVar5 = iVar6 + 0x40000000;
          }
          else {
            iVar6 = func_004905E0(fVar7 / fVar8);
            uVar5 = 0x80000000 - iVar6;
          }
        }
      }
      else if (fVar7 < DAT_0048f698) {
        fVar7 = -fVar7;
        if (fVar8 < fVar7) {
          iVar6 = func_004905E0(fVar8 / fVar7);
          uVar5 = iVar6 + 0xc0000000;
        }
        else {
          iVar6 = func_004905E0(fVar7 / fVar8);
          uVar5 = -iVar6;
        }
      }
      else if (fVar8 < fVar7) {
        iVar6 = func_004905E0(fVar8 / fVar7);
        uVar5 = 0x40000000 - iVar6;
      }
      else {
        uVar5 = func_004905E0(fVar7 / fVar8);
      }
      if (uVar5 < 0x10000000) {
        return uVar4;
      }
      if (uVar5 < 0x30000000) {
        return uVar4 | uVar2;
      }
      if (uVar5 < 0x50000000) {
        return uVar2;
      }
      if (uVar5 < 0x70000000) {
        return uVar3 | uVar2;
      }
      if (uVar5 < 0x90000000) {
        return uVar3;
      }
      if (uVar5 < 0xb0000000) {
        return uVar3 | uVar1;
      }
      if (uVar5 < 0xd0000000) {
        return uVar1;
      }
      if (uVar5 < 0xf0000000) {
        return uVar4 | uVar1;
      }
      return uVar4;
    }
  }
  return 0;
}

