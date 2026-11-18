#include "ghidra_types.h"

extern int DAT_003f4654;
extern float DAT_003f4658;
extern float DAT_003f465c;

// USA 003F44EC <- EU 003F44CC (Ghidra, non-matching)
// GLOBAL DAT_003f4654 int
// GLOBAL DAT_003f4658 float
// GLOBAL DAT_003f465c float

undefined4 func_003F44EC(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  
  iVar1 = DAT_003f4654;
  if ((*(uint *)(param_3 + 8) & 0x10) == 0) {
                    /* WARNING: Could not recover jumptable at 0x003f4650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    return (**(code **)(DAT_003f4654 + *(int *)(param_2 + 0x250) * 4))(param_3);
  }
  fVar9 = *(float *)(param_3 + 0x30);
  fVar10 = *(float *)(param_3 + 0x40);
  fVar11 = *(float *)(param_3 + 0x50);
  fVar13 = *(float *)(param_3 + 0x94);
  uVar14 = *(undefined8 *)(param_3 + 0x98);
  fVar3 = ALBW_AS_F32(uVar14) - fVar10;
  fVar5 = ALBW_AS_F32(((ulonglong)uVar14 >> 0x20)) - fVar11;
  fVar3 = SQRT((fVar13 - fVar9) * (fVar13 - fVar9) + fVar3 * fVar3 + fVar5 * fVar5);
  if (fVar3 < *(float *)(param_2 + 0x2c0)) {
    fVar3 = DAT_003f4658;
  }
  if (fVar3 == DAT_003f4658) {
    fVar3 = *(float *)(param_2 + 700);
  }
  else {
    fVar5 = *(float *)(param_2 + 700);
    if ((fVar3 < *(float *)(param_2 + 700)) ||
       (fVar5 = *(float *)(param_2 + 0x2b8), *(float *)(param_2 + 0x2b8) < fVar3)) {
      fVar3 = fVar5;
    }
  }
  uVar15 = (ulonglong)(uint)ALBW_AS_U32(DAT_003f465c);
  fVar12 = *(float *)(param_3 + 0xa0) + fVar3;
  fVar5 = DAT_003f4658;
  if (*(float *)(param_2 + 0x2b4) != DAT_003f4658) {
    fVar5 = DAT_003f465c / *(float *)(param_2 + 0x2b4);
  }
  fVar5 = fVar12 * fVar5;
  fVar8 = DAT_003f4658;
  if (fVar3 != DAT_003f4658) {
    fVar8 = DAT_003f465c / fVar3;
  }
  iVar2 = 0;
  if (0 < (int)fVar5) {
    do {
      fVar12 = fVar12 - *(float *)(param_2 + 0x2b4);
      fVar3 = fVar12 * fVar8;
      fVar6 = ALBW_AS_F32(uVar15) - fVar3;
      fVar4 = fVar9 * fVar6 + fVar13 * fVar3;
      fVar7 = fVar10 * fVar6 + ALBW_AS_F32(uVar14) * fVar3;
      fVar3 = fVar11 * fVar6 + ALBW_AS_F32(((ulonglong)uVar14 >> 0x20)) * fVar3;
      *(float *)(param_3 + 0x30) = fVar4;
      *(float *)(param_3 + 0x40) = fVar7;
      *(float *)(param_3 + 0x50) = fVar3;
      *(float *)(param_3 + 0x60) = fVar4;
      *(float *)(param_3 + 0x70) = fVar7;
      *(float *)(param_3 + 0x80) = fVar3;
      (**(code **)(iVar1 + *(int *)(param_2 + 0x250) * 4))(param_3);
      *(float *)(param_3 + 0x30) = fVar9;
      *(float *)(param_3 + 0x60) = fVar9;
      *(float *)(param_3 + 0x40) = fVar10;
      *(float *)(param_3 + 0x70) = fVar10;
      *(float *)(param_3 + 0x50) = fVar11;
      iVar2 = iVar2 + 1;
      *(float *)(param_3 + 0x80) = fVar11;
    } while (iVar2 < (int)fVar5);
  }
  *(float *)(param_3 + 0xa0) = fVar12;
  return 0;
}

