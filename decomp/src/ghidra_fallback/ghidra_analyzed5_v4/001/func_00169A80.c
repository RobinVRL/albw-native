#include "ghidra_types.h"

extern int func_0010DBB4(int param_1,int *param_2,float fparam_0);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00169344(int param_1,uint *param_2);
extern float DAT_00169dfc;
extern float DAT_00169e00;
extern int DAT_00169e04;

// USA 00169A80 <- EU 00169A80 (Ghidra, non-matching)
// GLOBAL DAT_00169dfc float
// GLOBAL DAT_00169e00 float
// GLOBAL DAT_00169e04 int

void func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  byte bVar1;
  uint uVar2;
  float *pfVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  uint *puVar10;
  uint uVar11;
  byte bVar12;
  bool bVar13;
  bool bVar14;
  uint in_fpscr;
  float fVar15;
  float fVar16;
  float fVar17;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(undefined4 *)(albw_frame + 0x4))
  iVar8 = DAT_00169e04;
  fVar15 = DAT_00169e00;
  fVar17 = DAT_00169dfc;
  uVar6 = param_1[9];
  if (uVar6 == 0) goto LAB_00169e48;
  uVar11 = param_1[3];
  puVar10 = (uint *)(param_1 + 9);
  if (uVar11 == 0) {
    param_1[0x23] = (int)ALBW_AS_U32(DAT_00169e00);
    param_1[0x22] = (int)ALBW_AS_U32(fVar17);
LAB_00169e14:
    param_1[3] = 0;
    func_00169344((int)param_1,puVar10);
    if (param_1[0x29] != 0) {
      fVar15 = *(float *)(param_1[5] + 8);
LAB_00169c34:
      local_2c = *(undefined4 *)**(undefined4 **)(param_1[5] + 4);
      local_30 = iVar8;
      func_0010DBB4(param_1[0x29],&local_30,fVar15);
    }
  }
  else {
    if (uVar11 != uVar6) {
LAB_00169c60:
      fVar16 = ALBW_AS_F32(param_1[0x22]);
      uVar6 = in_fpscr & 0xfffffff | (uint)(fVar16 == DAT_00169dfc) << 0x1e |
              (uint)(DAT_00169dfc <= fVar16) << 0x1d;
      bVar12 = (byte)(uVar6 >> 0x18);
      if ((!(bool)(bVar12 >> 5 & 1) || (bool)(bVar12 >> 6)) || ((int)ALBW_AS_U32(fVar16) < 0x3f000000)) {
        uVar11 = 0;
        if (0 < param_1[6]) {
          do {
            uVar2 = param_1[6];
            if (uVar11 < uVar2) {
              iVar7 = param_1[8] + uVar11 * 0x28;
            }
            else {
              iVar7 = param_1[8];
            }
            iVar7 = (int)*(char *)(iVar7 + 0x24);
            if (-1 < iVar7) {
              iVar5 = param_1[8];
              if (uVar11 < uVar2) {
                iVar7 = uVar11 * 5;
              }
              if (uVar11 < uVar2) {
                iVar5 = iVar5 + iVar7 * 8;
              }
              iVar7 = param_1[0x25];
              if ((uint)(int)*(char *)(iVar5 + 0x24) < (uint)param_1[0x24]) {
                iVar7 = iVar7 + *(char *)(iVar5 + 0x24) * 0x14;
              }
              *(undefined1 *)(iVar7 + 0x10) = 0;
            }
            uVar11 = uVar11 + 1;
          } while ((int)uVar11 < param_1[6]);
        }
        uVar11 = param_1[3];
        func_0010E3C4((uint *)param_1[8],(uint *)param_1[5],uVar11 * 0x28);
        if (uVar11 <= (uint)param_1[7]) {
          param_1[6] = uVar11;
        }
        param_1[0x22] = (int)ALBW_AS_U32(fVar15);
      }
      else {
        uVar2 = 0;
        if (0 < (int)uVar11) {
          do {
            uVar11 = param_1[3];
            if (uVar2 < uVar11) {
              iVar7 = param_1[5] + uVar2 * 0x28;
            }
            else {
              iVar7 = param_1[5];
            }
            iVar7 = (int)*(char *)(iVar7 + 0x24);
            if (-1 < iVar7) {
              iVar5 = param_1[5];
              if (uVar2 < uVar11) {
                iVar7 = uVar2 * 5;
              }
              if (uVar2 < uVar11) {
                iVar5 = iVar5 + iVar7 * 8;
              }
              iVar7 = param_1[0x25];
              if ((uint)(int)*(char *)(iVar5 + 0x24) < (uint)param_1[0x24]) {
                iVar7 = iVar7 + *(char *)(iVar5 + 0x24) * 0x14;
              }
              *(undefined1 *)(iVar7 + 0x10) = 0;
            }
            uVar2 = uVar2 + 1;
          } while ((int)uVar2 < param_1[3]);
        }
      }
      if (((char)param_1[0x1f] == '\0') && (uVar11 = 0, 0 < param_1[6])) {
        do {
          if (uVar11 < (uint)param_1[6]) {
            iVar7 = param_1[8] + uVar11 * 0x28;
          }
          else {
            iVar7 = param_1[8];
          }
          uVar11 = uVar11 + 1;
          *(float *)(iVar7 + 0x10) = fVar17;
        } while ((int)uVar11 < param_1[6]);
      }
      if (0 < param_1[0x1e]) {
        fVar16 = (float)VectorSignedToFloat(param_1[0x1e],(byte)(uVar6 >> 0x15) & 3);
        fVar15 = fVar15 / fVar16;
      }
      param_1[0x23] = (int)ALBW_AS_U32(fVar15);
      goto LAB_00169e14;
    }
    uVar2 = 0;
    if (0 < (int)uVar11) {
      do {
        piVar4 = (int *)param_1[5];
        if (uVar2 < (uint)param_1[3]) {
          piVar4 = (int *)param_1[5] + uVar2 * 10;
        }
        piVar9 = param_4;
        if (uVar2 < uVar6) {
          piVar9 = (int *)(uVar2 * 3);
        }
        param_4 = (int *)param_1[0xb];
        if (uVar2 < uVar6) {
          param_4 = (int *)param_1[0xb] + (int)piVar9 * 2;
        }
        if (*piVar4 != *param_4) goto LAB_00169c60;
        uVar2 = uVar2 + 1;
      } while ((int)uVar2 < param_1[3]);
    }
    uVar11 = 0;
    if (0 < (int)uVar6) {
      do {
        iVar7 = param_1[0xb];
        uVar6 = param_1[3];
        if (uVar11 < *puVar10) {
          iVar7 = iVar7 + uVar11 * 0x18;
        }
        piVar4 = param_1 + 3;
        fVar15 = *(float *)(iVar7 + 0xc);
        uVar2 = uVar6;
        if (uVar11 < uVar6) {
          uVar2 = param_1[5];
          piVar4 = (int *)(uVar11 * 5);
        }
        if (uVar11 < uVar6) {
          iVar5 = uVar2 + (int)piVar4 * 8;
        }
        else {
          iVar5 = piVar4[2];
        }
        if (fVar15 < fVar17) {
          fVar15 = *(float *)(**(int **)(iVar5 + 4) + 8);
        }
        *(float *)(iVar5 + 0x14) = fVar15;
        bVar12 = *(byte *)(iVar7 + 0x14);
        bVar13 = (char)bVar12 < '\0';
        bVar14 = bVar12 == 0;
        if (bVar14) {
          bVar12 = 0;
        }
        if (bVar13) {
          bVar1 = *(byte *)(**(int **)(iVar5 + 4) + 4);
          bVar12 = bVar1 & 1;
          if ((bVar1 & 1) != 0) {
LAB_00169bac:
            bVar12 = 1;
          }
        }
        else if (!bVar14) goto LAB_00169bac;
        *(byte *)(iVar5 + 0x1c) = bVar12;
        fVar15 = *(float *)(iVar7 + 4);
        fVar16 = *(float *)(iVar7 + 8);
        if ((fVar17 <= fVar16) || (fVar15 != fVar17)) {
          *(float *)(iVar5 + 0xc) = fVar15;
          *(float *)(iVar5 + 8) = fVar15;
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
        *(undefined4 *)(iVar5 + 0x20) = *(undefined4 *)(iVar7 + 0x10);
      } while ((int)uVar11 < (int)*puVar10);
    }
    if (param_1[0x29] != 0) {
      fVar15 = *(float *)(param_1[5] + 8);
      goto LAB_00169c34;
    }
  }
  param_1[9] = 0;
LAB_00169e48:
  if (((fVar17 < ALBW_AS_F32(param_1[0x22])) && (*param_1 == 0)) && (uVar6 = 0, 0 < param_1[6])) {
    do {
      iVar8 = param_1[8];
      if (uVar6 < (uint)param_1[6]) {
        iVar8 = iVar8 + uVar6 * 0x28;
      }
      if ((*(int *)(iVar8 + 4) != 0) && (*(char *)(iVar8 + 0x25) == '\0')) {
        fVar16 = *(float *)(iVar8 + 8);
        pfVar3 = (float *)(iVar8 + 8);
        fVar15 = fVar16 + *(float *)(iVar8 + 0x10);
        *pfVar3 = fVar15;
        *(float *)(iVar8 + 0xc) = fVar16;
        fVar16 = *(float *)(iVar8 + 0x14);
        if (*(char *)(iVar8 + 0x1c) == '\0') {
          if (fVar16 < fVar15) {
            *pfVar3 = fVar16;
          }
          else {
            if (fVar15 <= fVar17) {
              fVar15 = fVar17;
            }
            *pfVar3 = fVar15;
          }
        }
        else if (fVar15 <= fVar16) {
          if (fVar15 < fVar17) {
            *pfVar3 = fVar15 + fVar16;
            *(int *)(iVar8 + 0x18) = *(int *)(iVar8 + 0x18) + 1;
          }
        }
        else {
          *pfVar3 = fVar15 - fVar16;
          *(int *)(iVar8 + 0x18) = *(int *)(iVar8 + 0x18) + 1;
        }
      }
      *(undefined1 *)(iVar8 + 0x25) = 0;
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < param_1[6]);
  }
  uVar6 = 0;
  if (0 < param_1[3]) {
    do {
      iVar8 = param_1[5];
      if (uVar6 < (uint)param_1[3]) {
        iVar8 = iVar8 + uVar6 * 0x28;
      }
      if ((*(int *)(iVar8 + 4) != 0) && (*(char *)(iVar8 + 0x25) == '\0')) {
        *(float *)(iVar8 + 0xc) = *(float *)(iVar8 + 8);
        fVar15 = *(float *)(iVar8 + 8) + *(float *)(iVar8 + 0x10);
        pfVar3 = (float *)(iVar8 + 8);
        *(float *)(iVar8 + 8) = fVar15;
        fVar16 = *(float *)(iVar8 + 0x14);
        if (*(char *)(iVar8 + 0x1c) == '\0') {
          if (fVar16 < fVar15) {
            *pfVar3 = fVar16;
          }
          else {
            if (fVar15 <= fVar17) {
              fVar15 = fVar17;
            }
            *pfVar3 = fVar15;
          }
        }
        else if (fVar15 <= fVar16) {
          if (fVar15 < fVar17) {
            *pfVar3 = fVar15 + fVar16;
            *(int *)(iVar8 + 0x18) = *(int *)(iVar8 + 0x18) + 1;
          }
        }
        else {
          *pfVar3 = fVar15 - fVar16;
          *(int *)(iVar8 + 0x18) = *(int *)(iVar8 + 0x18) + 1;
        }
      }
      *(undefined1 *)(iVar8 + 0x25) = 0;
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < param_1[3]);
  }
  return;
}

