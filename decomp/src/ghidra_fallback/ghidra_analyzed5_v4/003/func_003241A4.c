#include "ghidra_types.h"

extern float func_00490628(float fparam_0);
extern float func_004906A8(float fparam_0);
extern float DAT_00324250;
extern float DAT_00324254;

// USA 003241A4 <- EU 00324180 (Ghidra, non-matching)
// GLOBAL DAT_00324250 float
// GLOBAL DAT_00324254 float

void func_003241A4(char *param_1,float *param_2,float fparam_0)

{
  bool bVar1;
  char *pcVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar8;
  longlong lVar7;
  float fVar9;
  float fVar10;
  
  uVar3 = 0;
  lVar7 = (ulonglong)(uint)ALBW_AS_U32(fparam_0) << 0x20;
  fVar5 = DAT_00324254;
  fVar9 = DAT_00324250;
  do {
    pcVar2 = param_1;
    if (uVar3 < 8) {
      pcVar2 = param_1 + uVar3 * 0x10;
    }
    if (*pcVar2 != '\0') {
      pcVar2 = param_1;
      if (uVar3 < 8) {
        pcVar2 = param_1 + uVar3 * 0x10;
      }
      fVar8 = ALBW_AS_F32(((ulonglong)lVar7 >> 0x20));
      fVar4 = fVar8 * fVar9;
      lVar7 = CONCAT44(fVar8,fVar5);
      fVar10 = (*(float *)(pcVar2 + 4) - *param_2) * (*(float *)(pcVar2 + 4) - *param_2) +
               (*(float *)(pcVar2 + 0xc) - param_2[2]) * (*(float *)(pcVar2 + 0xc) - param_2[2]);
      fVar8 = fVar5;
      if (fVar4 != fVar5) {
        fVar4 = func_004906A8(fVar4);
        fVar8 = fVar5;
        fVar5 = func_00490628(fVar4 * fVar9);
      }
      bVar1 = fVar5 < fVar10;
      fVar5 = fVar8;
      if (bVar1) {
        pcVar2 = param_1;
        if (uVar3 < 8) {
          pcVar2 = param_1 + uVar3 * 0x10;
        }
        *pcVar2 = '\0';
        uVar6 = (undefined4)lVar7;
        *(undefined4 *)(pcVar2 + 4) = uVar6;
        *(undefined4 *)(pcVar2 + 8) = uVar6;
        *(undefined4 *)(pcVar2 + 0xc) = uVar6;
      }
    }
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 8);
  return;
}

