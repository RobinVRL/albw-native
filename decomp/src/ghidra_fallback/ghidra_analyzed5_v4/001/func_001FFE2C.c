#include "ghidra_types.h"

extern int func_0026F16C(int param_1,undefined4 *param_2);
extern int func_003E6D64(int param_1,int param_2);
extern int func_003EEF88(int param_1,float *param_2);
extern int *DAT_00200250;
extern float DAT_00200254;
extern float DAT_00200258;
extern float DAT_0020025c;

// USA 001FFE2C <- EU 001FFE2C (Ghidra, non-matching)
// GLOBAL DAT_00200250 int *
// GLOBAL DAT_00200254 float
// GLOBAL DAT_00200258 float
// GLOBAL DAT_0020025c float

void func_001FFE2C(undefined4 param_1,int param_2)

{
  uint uVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int unaff_r5;
  bool bVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define local_20 (*(float *)(albw_frame + 0x10))
  #define local_1c (*(float *)(albw_frame + 0x14))
  piVar3 = (int *)**(int **)(param_2 + 0x10);
  uVar6 = *(uint *)(*(int *)(*(int *)(*(int *)(*piVar3 + 0xc) + piVar3[100] * 4) + 0x18) +
                   piVar3[0x65] * 0x3c + 0xc);
  uVar1 = uVar6 >> 0x10;
  bVar7 = (uVar1 & 0x18) != 0;
  if (bVar7) {
    uVar6 = piVar3[1];
  }
  if (bVar7 && uVar6 != 0) {
    iVar4 = func_003E6D64((int)piVar3,0);
    if (iVar4 != 0) {
      unaff_r5 = *(int *)(iVar4 + 0xdc);
    }
    if (iVar4 != 0 && unaff_r5 != 0) {
      if ((uVar1 & 0x10) == 0) {
        if ((uVar1 & 8) == 0) {
          return;
        }
        piVar3 = (int *)(*DAT_00200250 + 0xf9c);
      }
      else {
        piVar3 = (int *)(*DAT_00200250 + 4000);
      }
      iVar5 = func_0026F16C(*piVar3,(undefined4 *)(unaff_r5 + 0x2c));
      local_28 = DAT_00200254;
      local_24 = DAT_00200254;
      local_20 = DAT_00200254;
      local_1c = DAT_00200258;
      fVar12 = DAT_00200254;
      fVar13 = DAT_00200258;
      func_003EEF88(unaff_r5,&local_28);
      fVar2 = DAT_0020025c;
      fVar11 = fVar12;
      if ((fVar12 <= local_1c) && (fVar11 = local_1c, fVar13 < local_1c)) {
        fVar11 = fVar13;
      }
      fVar8 = fVar12 + *(float *)(*(int *)(iVar4 + 0xd8) + 0x430) * fVar11;
      fVar9 = fVar12;
      if ((fVar12 <= fVar8) && (fVar9 = fVar8, fVar13 < fVar8)) {
        fVar9 = fVar13;
      }
      uVar10 = VectorFloatToUnsigned(fVar9 * DAT_0020025c,3);
      *(char *)(iVar5 + 0x34) = (char)uVar10;
      fVar8 = fVar12 + *(float *)(*(int *)(iVar4 + 0xd8) + 0x434) * fVar11;
      fVar9 = fVar12;
      if ((fVar12 <= fVar8) && (fVar9 = fVar8, fVar13 < fVar8)) {
        fVar9 = fVar13;
      }
      uVar10 = VectorFloatToUnsigned(fVar9 * fVar2,3);
      *(char *)(iVar5 + 0x35) = (char)uVar10;
      fVar8 = fVar12 + *(float *)(*(int *)(iVar4 + 0xd8) + 0x438) * fVar11;
      fVar9 = fVar12;
      if ((fVar12 <= fVar8) && (fVar9 = fVar8, fVar13 < fVar8)) {
        fVar9 = fVar13;
      }
      uVar10 = VectorFloatToUnsigned(fVar9 * fVar2,3);
      *(char *)(iVar5 + 0x36) = (char)uVar10;
      fVar8 = fVar12 + *(float *)(*(int *)(iVar4 + 0xd8) + 0x440) * fVar11;
      fVar9 = fVar12;
      if ((fVar12 <= fVar8) && (fVar9 = fVar8, fVar13 < fVar8)) {
        fVar9 = fVar13;
      }
      uVar10 = VectorFloatToUnsigned(fVar9 * fVar2,3);
      *(char *)(iVar5 + 0x30) = (char)uVar10;
      fVar8 = fVar12 + *(float *)(*(int *)(iVar4 + 0xd8) + 0x444) * fVar11;
      fVar9 = fVar12;
      if ((fVar12 <= fVar8) && (fVar9 = fVar8, fVar13 < fVar8)) {
        fVar9 = fVar13;
      }
      uVar10 = VectorFloatToUnsigned(fVar9 * fVar2,3);
      *(char *)(iVar5 + 0x31) = (char)uVar10;
      fVar8 = fVar12 + *(float *)(*(int *)(iVar4 + 0xd8) + 0x448) * fVar11;
      fVar9 = fVar12;
      if ((fVar12 <= fVar8) && (fVar9 = fVar8, fVar13 < fVar8)) {
        fVar9 = fVar13;
      }
      uVar10 = VectorFloatToUnsigned(fVar9 * fVar2,3);
      *(char *)(iVar5 + 0x32) = (char)uVar10;
      fVar8 = fVar12 + *(float *)(*(int *)(iVar4 + 0xd8) + 0x450) * fVar11;
      fVar9 = fVar12;
      if ((fVar12 <= fVar8) && (fVar9 = fVar8, fVar13 < fVar8)) {
        fVar9 = fVar13;
      }
      uVar10 = VectorFloatToUnsigned(fVar9 * fVar2,3);
      *(char *)(iVar5 + 0x38) = (char)uVar10;
      fVar8 = fVar12 + *(float *)(*(int *)(iVar4 + 0xd8) + 0x454) * fVar11;
      fVar9 = fVar12;
      if ((fVar12 <= fVar8) && (fVar9 = fVar8, fVar13 < fVar8)) {
        fVar9 = fVar13;
      }
      uVar10 = VectorFloatToUnsigned(fVar9 * fVar2,3);
      *(char *)(iVar5 + 0x39) = (char)uVar10;
      fVar8 = fVar12 + *(float *)(*(int *)(iVar4 + 0xd8) + 0x458) * fVar11;
      fVar9 = fVar12;
      if ((fVar12 <= fVar8) && (fVar9 = fVar8, fVar13 < fVar8)) {
        fVar9 = fVar13;
      }
      uVar10 = VectorFloatToUnsigned(fVar9 * fVar2,3);
      *(char *)(iVar5 + 0x3a) = (char)uVar10;
      fVar8 = fVar12 + *(float *)(*(int *)(iVar4 + 0xd8) + 0x460) * fVar11;
      fVar9 = fVar12;
      if ((fVar12 <= fVar8) && (fVar9 = fVar8, fVar13 < fVar8)) {
        fVar9 = fVar13;
      }
      uVar10 = VectorFloatToUnsigned(fVar9 * fVar2,3);
      *(char *)(iVar5 + 0x3c) = (char)uVar10;
      fVar8 = fVar12 + *(float *)(*(int *)(iVar4 + 0xd8) + 0x464) * fVar11;
      fVar9 = fVar12;
      if ((fVar12 <= fVar8) && (fVar9 = fVar8, fVar13 < fVar8)) {
        fVar9 = fVar13;
      }
      uVar10 = VectorFloatToUnsigned(fVar9 * fVar2,3);
      *(char *)(iVar5 + 0x3d) = (char)uVar10;
      fVar11 = fVar12 + *(float *)(*(int *)(iVar4 + 0xd8) + 0x468) * fVar11;
      if ((fVar12 <= fVar11) && (fVar12 = fVar11, fVar13 < fVar11)) {
        fVar12 = fVar13;
      }
      uVar10 = VectorFloatToUnsigned(fVar12 * fVar2,3);
      *(char *)(iVar5 + 0x3e) = (char)uVar10;
      *(undefined4 *)(iVar5 + 0x54) = *(undefined4 *)(unaff_r5 + 100);
      *(undefined4 *)(iVar5 + 0x58) = *(undefined4 *)(unaff_r5 + 0x68);
    }
  }
  return;
}

