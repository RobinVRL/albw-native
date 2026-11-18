#include "ghidra_types.h"

extern float func_003FF720(float *param_1,int param_2,float fparam_0,float fparam_1);
extern float DAT_003fe628;
extern float DAT_003fe62c;
extern undefined4 DAT_003fe630;
extern undefined4 DAT_003fe634;
extern int DAT_003fe638;
extern float DAT_003fe63c;
extern int DAT_003fe640;

// USA 003FE3A8 <- EU 003FE388 (Ghidra, non-matching)
// GLOBAL DAT_003fe628 float
// GLOBAL DAT_003fe62c float
// GLOBAL DAT_003fe630 undefined4
// GLOBAL DAT_003fe634 undefined4
// GLOBAL DAT_003fe638 int
// GLOBAL DAT_003fe63c float
// GLOBAL DAT_003fe640 int

void func_003FE3A8(int param_1,int *param_2,int param_3,float fparam_0,float fparam_1)

{
  byte bVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  iVar2 = DAT_003fe638;
  iVar11 = 0;
  if (*(char *)(param_3 + 0x1c) != '\0') {
    uVar15 = CONCAT44(DAT_003fe630,DAT_003fe634);
    fVar16 = DAT_003fe63c;
    fVar17 = DAT_003fe628;
    fVar18 = DAT_003fe62c;
    do {
      piVar10 = (int *)(*(int *)(param_3 + 0x20 + iVar11 * 4) + param_3);
      iVar4 = DAT_003fe640 + *piVar10;
      if (iVar4 == 0) {
        iVar4 = 0;
        fVar13 = *(float *)(param_1 + 0x10);
        if ((char)piVar10[1] != '\0') {
          do {
            iVar5 = piVar10[iVar4 + 2];
            bVar1 = *(byte *)((int)piVar10 + iVar5 + 1);
            fVar12 = func_003FF720((float *)((int)piVar10 +
                                            *(int *)((int)piVar10 + iVar5 + 8) + iVar5),
                                   (uint)*(ushort *)((int)piVar10 + iVar5 + 4),fVar13,fparam_1);
            iVar4 = iVar4 + 1;
            param_2[bVar1 + 7] = (int)ALBW_AS_U32(fVar12);
            *(byte *)(param_2 + 0x11) = *(byte *)(param_2 + 0x11) & 0xef | 0x10;
          } while (iVar4 < (int)(uint)*(byte *)(piVar10 + 1));
        }
      }
      else if (iVar4 == 0x2060000) {
        iVar4 = 0;
        fVar13 = *(float *)(param_1 + 0x10);
        if ((char)piVar10[1] != '\0') {
          do {
            iVar5 = piVar10[iVar4 + 2];
            fVar14 = func_003FF720((float *)((int)piVar10 +
                                            *(int *)((int)piVar10 + iVar5 + 8) + iVar5),
                                   (uint)*(ushort *)((int)piVar10 + iVar5 + 4),fVar13,fparam_1);
            fVar14 = fVar14 + ALBW_AS_F32(((ulonglong)uVar15 >> 0x20));
            fVar12 = ALBW_AS_F32(uVar15);
            if ((fVar12 <= fVar14) && (fVar12 = fVar14, iVar2 < (int)ALBW_AS_U32(fVar14))) {
              fVar12 = fVar16;
            }
            uVar8 = VectorFloatToUnsigned(fVar12,3);
            (**(code **)(*param_2 + 0x18))
                      (param_2,*(undefined1 *)((int)piVar10 + iVar5 + 1),uVar8 & 0xff);
            iVar4 = iVar4 + 1;
          } while (iVar4 < (int)(uint)*(byte *)(piVar10 + 1));
        }
      }
      else if (iVar4 == 0x8060000) {
        iVar4 = 0;
        fVar13 = *(float *)(param_1 + 0x10);
        if ((char)piVar10[1] != '\0') {
          do {
            iVar5 = piVar10[iVar4 + 2];
            uVar8 = (uint)*(ushort *)((int)piVar10 + iVar5 + 4);
            pfVar7 = (float *)((int)piVar10 + *(int *)((int)piVar10 + iVar5 + 8) + iVar5);
            if ((uVar8 == 1) || (fparam_1 = fVar13, fVar13 <= *pfVar7)) {
              sVar3 = *(short *)(pfVar7 + 1);
            }
            else if (pfVar7[uVar8 * 2 + -2] <= fVar13) {
              sVar3 = *(short *)(pfVar7 + uVar8 * 2 + -1);
            }
            else {
              iVar6 = 0;
              iVar5 = uVar8 - 1;
              while (iVar9 = iVar5, iVar6 != iVar9 + -1 && iVar6 != iVar9) {
                iVar5 = (iVar6 + iVar9) / 2;
                if (pfVar7[iVar5 * 2] <= fVar13) {
                  iVar6 = iVar5;
                  iVar5 = iVar9;
                }
              }
              fparam_1 = fVar13 - pfVar7[iVar9 * 2];
              if (fparam_1 <= fVar18 || fVar17 <= fparam_1) {
                sVar3 = *(short *)(pfVar7 + iVar6 * 2 + 1);
              }
              else {
                sVar3 = *(short *)(pfVar7 + iVar9 * 2 + 1);
              }
            }
            iVar4 = iVar4 + 1;
            *(byte *)(param_2 + 0x11) = sVar3 != 0 | *(byte *)(param_2 + 0x11) & 0xfe;
          } while (iVar4 < (int)(uint)*(byte *)(piVar10 + 1));
        }
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < (int)(uint)*(byte *)(param_3 + 0x1c));
  }
  return;
}

