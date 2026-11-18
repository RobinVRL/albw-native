#include "ghidra_types.h"

extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00556EAC(int param_1,int param_2);
extern int func_00588BE4(int param_1);
extern int *DAT_0055eba0;
extern float DAT_0055eba4;
extern float DAT_0055eba8;
extern float DAT_0055ebac;
extern int *DAT_0055ebb0;
extern int *DAT_0055ebb4;

// USA 0055E87C <- EU 0055E854 (Ghidra, non-matching)
// GLOBAL DAT_0055eba0 int *
// GLOBAL DAT_0055eba4 float
// GLOBAL DAT_0055eba8 float
// GLOBAL DAT_0055ebac float
// GLOBAL DAT_0055ebb0 int *
// GLOBAL DAT_0055ebb4 int *

undefined4 func_0055E87C(int param_1)

{
  int *piVar1;
  bool bVar2;
  float *pfVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  ulonglong uVar13;
  
  fVar10 = DAT_0055eba4;
  fVar11 = *(float *)(param_1 + 0x40c);
  pfVar3 = *(float **)(*DAT_0055eba0 + 0x1c);
  uVar13 = (ulonglong)(uint)ALBW_AS_U32(DAT_0055eba8);
  fVar9 = pfVar3[1] - *(float *)(param_1 + 0x3d4);
  if (*(char *)(param_1 + 0x42c) == '\x02') {
    if ((((uint)ALBW_AS_U32(DAT_0055eba4) < (uint)ALBW_AS_U32(fVar9)) || (*(float *)(param_1 + 0x414) <= fVar9)) ||
       (fVar12 = *pfVar3 - *(float *)(param_1 + 0x3d0),
       fVar9 = pfVar3[2] - *(float *)(param_1 + 0x3d8),
       (fVar11 + DAT_0055eba8) * (fVar11 + DAT_0055eba8) <= fVar12 * fVar12 + fVar9 * fVar9))
    goto LAB_0055e8fc;
  }
  else if ((((uint)ALBW_AS_U32(DAT_0055ebac) < (uint)ALBW_AS_U32(fVar9)) || (*(float *)(param_1 + 0x414) <= fVar9)) ||
          (fVar9 = *pfVar3 - *(float *)(param_1 + 0x3d0),
          fVar12 = pfVar3[2] - *(float *)(param_1 + 0x3d8),
          fVar11 * fVar11 <= fVar9 * fVar9 + fVar12 * fVar12)) goto LAB_0055e8fc;
  bVar2 = func_00556EAC(*DAT_0055eba0,0x46);
  if (!bVar2) {
    return 1;
  }
LAB_0055e8fc:
  piVar1 = DAT_0055ebb0;
  fVar9 = ALBW_AS_F32(uVar13);
  uVar7 = 0;
  if (*(short *)(param_1 + 0x5b4) != 0) {
    puVar8 = (uint *)(param_1 + 0x434);
    do {
      puVar4 = puVar8;
      if (uVar7 < 0x60) {
        puVar4 = puVar8 + uVar7;
      }
      if (*puVar4 != 0) {
        puVar4 = puVar8;
        if (uVar7 < 0x60) {
          puVar4 = puVar8 + uVar7;
        }
        iVar5 = func_0052FBA0(*piVar1 + 0x3dbbc,*puVar4);
        if (iVar5 != 0) {
          iVar6 = func_00588BE4(iVar5);
          fVar9 = *(float *)(iVar5 + 0x3d4) - *(float *)(param_1 + 0x3d4);
          if (iVar6 == *DAT_0055ebb4) {
            fVar11 = *(float *)(param_1 + 0x410);
          }
          else {
            fVar11 = *(float *)(param_1 + 0x40c);
          }
          if (*(char *)(param_1 + 0x42c) == '\x02') {
            if ((((uint)ALBW_AS_U32(fVar9) <= (uint)ALBW_AS_U32(fVar10)) && (fVar9 < *(float *)(param_1 + 0x414))) &&
               (fVar11 = fVar11 + ALBW_AS_F32(uVar13),
               fVar12 = *(float *)(iVar5 + 0x3d0) - *(float *)(param_1 + 0x3d0),
               fVar9 = *(float *)(iVar5 + 0x3d8) - *(float *)(param_1 + 0x3d8),
               fVar12 * fVar12 + fVar9 * fVar9 < fVar11 * fVar11)) {
              return 1;
            }
          }
          else if ((((uint)ALBW_AS_U32(fVar9) <= (uint)ALBW_AS_U32(DAT_0055ebac)) && (fVar9 < *(float *)(param_1 + 0x414))) &&
                  (fVar12 = *(float *)(iVar5 + 0x3d0) - *(float *)(param_1 + 0x3d0),
                  fVar9 = *(float *)(iVar5 + 0x3d8) - *(float *)(param_1 + 0x3d8),
                  fVar12 * fVar12 + fVar9 * fVar9 < fVar11 * fVar11)) {
            return 1;
          }
        }
      }
      fVar9 = ALBW_AS_F32(uVar13);
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)(uint)*(ushort *)(param_1 + 0x5b4));
  }
  uVar7 = *(uint *)(param_1 + 0x430);
  if ((uVar7 != *(uint *)(param_1 + 0x2cc) && uVar7 != 0) &&
     (iVar5 = func_0052FBA0(*piVar1 + 0x3dbbc,uVar7), iVar5 != 0)) {
    fVar12 = *(float *)(param_1 + 0x40c);
    fVar11 = *(float *)(iVar5 + 0x3d4) - *(float *)(param_1 + 0x3d4);
    if (*(char *)(param_1 + 0x42c) == '\x02') {
      if ((((uint)ALBW_AS_U32(fVar11) <= (uint)ALBW_AS_U32(fVar10)) && (fVar11 < *(float *)(param_1 + 0x414))) &&
         (fVar11 = *(float *)(iVar5 + 0x3d0) - *(float *)(param_1 + 0x3d0),
         fVar10 = *(float *)(iVar5 + 0x3d8) - *(float *)(param_1 + 0x3d8),
         fVar11 * fVar11 + fVar10 * fVar10 < (fVar12 + fVar9) * (fVar12 + fVar9))) {
        return 1;
      }
    }
    else if ((((uint)ALBW_AS_U32(fVar11) <= (uint)ALBW_AS_U32(DAT_0055ebac)) && (fVar11 < *(float *)(param_1 + 0x414))) &&
            (fVar10 = *(float *)(iVar5 + 0x3d0) - *(float *)(param_1 + 0x3d0),
            fVar9 = *(float *)(iVar5 + 0x3d8) - *(float *)(param_1 + 0x3d8),
            fVar10 * fVar10 + fVar9 * fVar9 < fVar12 * fVar12)) {
      return 1;
    }
  }
  return 0;
}

