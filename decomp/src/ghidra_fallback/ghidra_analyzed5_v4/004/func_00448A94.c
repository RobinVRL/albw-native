#include "ghidra_types.h"

extern int func_00522958(int param_1);
extern int *DAT_00448c60;
extern float DAT_00448c64;
extern float DAT_00448c68;
extern float DAT_00448c6c;
extern float DAT_00448c70;
extern float DAT_00448c74;
extern float DAT_00448c78;
extern float DAT_00448c7c;

// USA 00448A94 <- EU 00448A6C (Ghidra, non-matching)
// GLOBAL DAT_00448c60 int *
// GLOBAL DAT_00448c64 float
// GLOBAL DAT_00448c68 float
// GLOBAL DAT_00448c6c float
// GLOBAL DAT_00448c70 float
// GLOBAL DAT_00448c74 float
// GLOBAL DAT_00448c78 float
// GLOBAL DAT_00448c7c float

void func_00448A94(int param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  piVar1 = DAT_00448c60;
  if (((*(ushort *)(*(int *)(param_1 + 0x14) + 0x16) & 8) != 0) ||
     ((iVar4 = func_00522958(*DAT_00448c60), iVar4 != 0 && (*(char *)(param_1 + 0x27c) != '\0')))) {
    *(undefined1 *)(param_1 + 0x291) = 0;
    fVar2 = DAT_00448c64;
    iVar4 = *(int *)(*(int *)(param_1 + 0x14) + 8);
    bVar5 = iVar4 == 2;
    if (iVar4 < 3) {
      bVar5 = *(char *)(param_1 + 0x27c) == '\0';
    }
    if (!bVar5) {
      fVar9 = *(float *)(*piVar1 + 0x10) - *(float *)(param_1 + 0x26c);
      fVar8 = *(float *)(*piVar1 + 0x14) - *(float *)(param_1 + 0x270);
      fVar11 = fVar9;
      if (fVar9 <= DAT_00448c64) {
        fVar11 = -fVar9;
      }
      if ((int)ALBW_AS_U32(fVar11) < 0x3f000001) {
        fVar11 = fVar8;
        if (fVar8 <= DAT_00448c64) {
          fVar11 = -fVar8;
        }
        if ((int)ALBW_AS_U32(fVar11) < 0x3f000001) {
          return;
        }
      }
      *(float *)(param_1 + 0x264) = fVar9;
      *(float *)(param_1 + 0x268) = fVar8;
      fVar3 = DAT_00448c74;
      fVar14 = DAT_00448c70;
      fVar11 = DAT_00448c6c;
      fVar9 = DAT_00448c68;
      if ((*(ushort *)(*(int *)(param_1 + 0x14) + 0x16) & 8) != 0) {
        fVar12 = *(float *)(param_1 + 0x264);
        fVar10 = DAT_00448c6c;
        if (fVar2 < fVar12) {
          fVar10 = DAT_00448c68;
        }
        fVar10 = fVar10 - *(float *)(param_1 + 0x248);
        if (fVar10 <= fVar2) {
          fVar10 = -fVar10;
        }
        if (fVar10 < fVar12 * fVar12) {
          fVar13 = DAT_00448c70;
          if (fVar12 < fVar2) {
            fVar13 = DAT_00448c74;
          }
          *(float *)(param_1 + 0x264) = fVar13 * SQRT(fVar10);
        }
        if (fVar2 < fVar8) {
          fVar11 = fVar9;
        }
        fVar11 = fVar11 - *(float *)(param_1 + 0x24c);
        if (fVar11 <= fVar2) {
          fVar11 = -fVar11;
        }
        if (fVar11 < fVar8 * fVar8) {
          if (NAN(fVar8) || NAN(fVar2)) {
            fVar14 = fVar3;
          }
          *(float *)(param_1 + 0x268) = fVar14 * SQRT(fVar11);
        }
      }
      fVar14 = *(float *)(param_1 + 0x264);
      fVar9 = *(float *)(param_1 + 0x268);
      fVar11 = fVar14 * fVar14 + fVar9 * fVar9;
      fVar8 = SQRT(fVar11);
      bVar7 = SBORROW4((int)ALBW_AS_U32(fVar8),(int)ALBW_AS_U32(DAT_00448c78));
      bVar5 = (int)ALBW_AS_U32(fVar8) - (int)ALBW_AS_U32(DAT_00448c78) < 0;
      bVar6 = fVar8 == DAT_00448c78;
      if ((int)ALBW_AS_U32(DAT_00448c78) < (int)ALBW_AS_U32(fVar8)) {
        bVar5 = fVar8 < fVar2;
        bVar6 = fVar8 == fVar2;
        bVar7 = NAN(fVar8) || NAN(fVar2);
        fVar11 = DAT_00448c7c;
      }
      if (!bVar6 && bVar5 == bVar7) {
        *(float *)(param_1 + 0x264) = fVar14 * (fVar11 / fVar8);
        *(float *)(param_1 + 0x268) = fVar9 * (fVar11 / fVar8);
      }
      *(undefined1 *)(param_1 + 0x27c) = 1;
    }
  }
  return;
}

