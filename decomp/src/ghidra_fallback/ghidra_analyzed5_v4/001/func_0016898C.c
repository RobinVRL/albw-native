#include "ghidra_types.h"

extern int func_0010DBB4(int param_1,int *param_2,float fparam_0);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00169344(int param_1,uint *param_2);
extern float DAT_00168d08;
extern float DAT_00168d0c;
extern int DAT_00168d10;

// USA 0016898C <- EU 0016898C (Ghidra, non-matching)
// GLOBAL DAT_00168d08 float
// GLOBAL DAT_00168d0c float
// GLOBAL DAT_00168d10 int

void func_0016898C(int param_1,uint *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int in_r2;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  uint in_fpscr;
  float fVar14;
  float fVar15;
  float fVar16;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(undefined4 *)(albw_frame + 0x4))
  iVar2 = DAT_00168d10;
  fVar15 = DAT_00168d0c;
  fVar14 = DAT_00168d08;
  uVar8 = *param_2;
  if (uVar8 == 0) goto LAB_00168d50;
  uVar11 = *(uint *)(param_1 + 0xc);
  if (uVar11 == 0) {
    *(float *)(param_1 + 0x88) = DAT_00168d0c;
    *(float *)(param_1 + 0x8c) = fVar14;
LAB_00168d20:
    *(undefined4 *)(param_1 + 0xc) = 0;
    func_00169344(param_1,param_2);
    if (*(int *)(param_1 + 0xa4) == 0) goto LAB_00168d50;
    fVar14 = *(float *)(*(int *)(param_1 + 0x14) + 8);
  }
  else {
    if (uVar11 != uVar8) {
LAB_00168b6c:
      fVar16 = *(float *)(param_1 + 0x88);
      uVar8 = in_fpscr & 0xfffffff | (uint)(fVar16 == DAT_00168d0c) << 0x1e |
              (uint)(DAT_00168d0c <= fVar16) << 0x1d;
      bVar10 = (byte)(uVar8 >> 0x18);
      if ((!(bool)(bVar10 >> 5 & 1) || (bool)(bVar10 >> 6)) || ((int)ALBW_AS_U32(fVar16) < 0x3f000000)) {
        uVar11 = 0;
        if (0 < *(int *)(param_1 + 0x18)) {
          do {
            uVar3 = *(uint *)(param_1 + 0x18);
            if (uVar11 < uVar3) {
              iVar5 = *(int *)(param_1 + 0x20) + uVar11 * 0x28;
            }
            else {
              iVar5 = *(int *)(param_1 + 0x20);
            }
            iVar5 = (int)*(char *)(iVar5 + 0x24);
            if (-1 < iVar5) {
              iVar7 = *(int *)(param_1 + 0x20);
              if (uVar11 < uVar3) {
                iVar5 = uVar11 * 5;
              }
              if (uVar11 < uVar3) {
                iVar7 = iVar7 + iVar5 * 8;
              }
              iVar5 = *(int *)(param_1 + 0x94);
              if ((uint)(int)*(char *)(iVar7 + 0x24) < *(uint *)(param_1 + 0x90)) {
                iVar5 = iVar5 + *(char *)(iVar7 + 0x24) * 0x14;
              }
              *(undefined1 *)(iVar5 + 0x10) = 0;
            }
            uVar11 = uVar11 + 1;
          } while ((int)uVar11 < *(int *)(param_1 + 0x18));
        }
        uVar11 = *(uint *)(param_1 + 0xc);
        func_0010E3C4(*(uint **)(param_1 + 0x20),*(uint **)(param_1 + 0x14),uVar11 * 0x28);
        if (uVar11 <= *(uint *)(param_1 + 0x1c)) {
          *(uint *)(param_1 + 0x18) = uVar11;
        }
        *(float *)(param_1 + 0x88) = fVar14;
      }
      else {
        uVar3 = 0;
        if (0 < (int)uVar11) {
          do {
            uVar11 = *(uint *)(param_1 + 0xc);
            if (uVar3 < uVar11) {
              iVar5 = *(int *)(param_1 + 0x14) + uVar3 * 0x28;
            }
            else {
              iVar5 = *(int *)(param_1 + 0x14);
            }
            iVar5 = (int)*(char *)(iVar5 + 0x24);
            if (-1 < iVar5) {
              iVar7 = *(int *)(param_1 + 0x14);
              if (uVar3 < uVar11) {
                iVar5 = uVar3 * 5;
              }
              if (uVar3 < uVar11) {
                iVar7 = iVar7 + iVar5 * 8;
              }
              iVar5 = *(int *)(param_1 + 0x94);
              if ((uint)(int)*(char *)(iVar7 + 0x24) < *(uint *)(param_1 + 0x90)) {
                iVar5 = iVar5 + *(char *)(iVar7 + 0x24) * 0x14;
              }
              *(undefined1 *)(iVar5 + 0x10) = 0;
            }
            uVar3 = uVar3 + 1;
          } while ((int)uVar3 < *(int *)(param_1 + 0xc));
        }
      }
      if (((char)param_2[0x16] == '\0') && (uVar11 = 0, 0 < *(int *)(param_1 + 0x18))) {
        do {
          if (uVar11 < *(uint *)(param_1 + 0x18)) {
            iVar5 = *(int *)(param_1 + 0x20) + uVar11 * 0x28;
          }
          else {
            iVar5 = *(int *)(param_1 + 0x20);
          }
          uVar11 = uVar11 + 1;
          *(float *)(iVar5 + 0x10) = fVar15;
        } while ((int)uVar11 < *(int *)(param_1 + 0x18));
      }
      if (0 < (int)param_2[0x15]) {
        fVar15 = (float)VectorSignedToFloat(param_2[0x15],(byte)(uVar8 >> 0x15) & 3);
        fVar14 = fVar14 / fVar15;
      }
      *(float *)(param_1 + 0x8c) = fVar14;
      goto LAB_00168d20;
    }
    uVar3 = 0;
    if (0 < (int)uVar11) {
      do {
        piVar4 = *(int **)(param_1 + 0x14);
        if (uVar3 < *(uint *)(param_1 + 0xc)) {
          piVar4 = *(int **)(param_1 + 0x14) + uVar3 * 10;
        }
        if (uVar3 < uVar8) {
          in_r2 = uVar3 * 3;
        }
        piVar6 = (int *)param_2[2];
        if (uVar3 < uVar8) {
          piVar6 = (int *)param_2[2] + in_r2 * 2;
        }
        in_r2 = *piVar6;
        if (*piVar4 != in_r2) goto LAB_00168b6c;
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < (int)*(uint *)(param_1 + 0xc));
    }
    uVar11 = 0;
    if (0 < (int)uVar8) {
      do {
        uVar8 = param_2[2];
        uVar3 = *(uint *)(param_1 + 0xc);
        if (uVar11 < *param_2) {
          uVar8 = uVar8 + uVar11 * 0x18;
        }
        iVar5 = param_1 + 0xc;
        fVar14 = *(float *)(uVar8 + 0xc);
        uVar9 = uVar3;
        if (uVar11 < uVar3) {
          uVar9 = *(uint *)(param_1 + 0x14);
          iVar5 = uVar11 * 5;
        }
        if (uVar11 < uVar3) {
          iVar5 = uVar9 + iVar5 * 8;
        }
        else {
          iVar5 = *(int *)(iVar5 + 8);
        }
        if (fVar14 < fVar15) {
          fVar14 = *(float *)(**(int **)(iVar5 + 4) + 8);
        }
        *(float *)(iVar5 + 0x14) = fVar14;
        bVar10 = *(byte *)(uVar8 + 0x14);
        bVar12 = (char)bVar10 < '\0';
        bVar13 = bVar10 == 0;
        if (bVar13) {
          bVar10 = 0;
        }
        if (bVar12) {
          bVar1 = *(byte *)(**(int **)(iVar5 + 4) + 4);
          bVar10 = bVar1 & 1;
          if ((bVar1 & 1) != 0) {
LAB_00168ab8:
            bVar10 = 1;
          }
        }
        else if (!bVar13) goto LAB_00168ab8;
        *(byte *)(iVar5 + 0x1c) = bVar10;
        fVar14 = *(float *)(uVar8 + 4);
        fVar16 = *(float *)(uVar8 + 8);
        if ((fVar15 <= fVar16) || (fVar14 != fVar15)) {
          *(float *)(iVar5 + 0xc) = fVar14;
          *(float *)(iVar5 + 8) = fVar14;
        }
        else {
          *(float *)(iVar5 + 0xc) = *(float *)(iVar5 + 0x14);
          *(float *)(iVar5 + 8) = *(float *)(iVar5 + 0x14);
        }
        *(float *)(iVar5 + 0x10) = fVar16;
        *(undefined4 *)(iVar5 + 0x18) = 0;
        *(undefined1 *)(iVar5 + 0x26) = 1;
        *(undefined1 *)(iVar5 + 0x25) = 1;
        uVar11 = uVar11 + 1;
        *(undefined4 *)(iVar5 + 0x20) = *(undefined4 *)(uVar8 + 0x10);
      } while ((int)uVar11 < (int)*param_2);
    }
    if (*(int *)(param_1 + 0xa4) == 0) goto LAB_00168d50;
    fVar14 = *(float *)(*(int *)(param_1 + 0x14) + 8);
  }
  local_2c = *(undefined4 *)**(undefined4 **)(*(int *)(param_1 + 0x14) + 4);
  local_30 = iVar2;
  func_0010DBB4(*(int *)(param_1 + 0xa4),&local_30,fVar14);
LAB_00168d50:
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}

