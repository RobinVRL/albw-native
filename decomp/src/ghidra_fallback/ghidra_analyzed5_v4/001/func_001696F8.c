#include "ghidra_types.h"

extern int func_0010DBB4(int param_1,int *param_2,float fparam_0);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00169344(int param_1,uint *param_2);
extern float DAT_00169994;
extern float DAT_00169998;
extern int DAT_0016999c;

// USA 001696F8 <- EU 001696F8 (Ghidra, non-matching)
// GLOBAL DAT_00169994 float
// GLOBAL DAT_00169998 float
// GLOBAL DAT_0016999c int

undefined4 func_001696F8(int param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int *unaff_r9;
  int *piVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;
  float fVar12;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(undefined4 *)(albw_frame + 0x4))
  fVar11 = DAT_00169998;
  fVar12 = DAT_00169994;
  uVar8 = *param_2;
  if (uVar8 == 0) {
LAB_00169794:
    uVar3 = 0;
  }
  else {
    uVar5 = *(uint *)(param_1 + 0xc);
    if (uVar5 == 0) {
      *(float *)(param_1 + 0x8c) = DAT_00169994;
      *(float *)(param_1 + 0x88) = fVar11;
    }
    else {
      if (uVar5 == uVar8) {
        uVar2 = 0;
        if (0 < (int)uVar5) {
          do {
            piVar7 = *(int **)(param_1 + 0x14);
            if (uVar2 < *(uint *)(param_1 + 0xc)) {
              piVar7 = *(int **)(param_1 + 0x14) + uVar2 * 10;
            }
            piVar9 = unaff_r9;
            if (uVar2 < uVar8) {
              piVar9 = (int *)(uVar2 * 3);
            }
            unaff_r9 = (int *)param_2[2];
            if (uVar2 < uVar8) {
              unaff_r9 = (int *)param_2[2] + (int)piVar9 * 2;
            }
            if (*piVar7 != *unaff_r9) goto LAB_0016979c;
            uVar2 = uVar2 + 1;
          } while ((int)uVar2 < (int)*(uint *)(param_1 + 0xc));
        }
        goto LAB_00169794;
      }
LAB_0016979c:
      fVar10 = *(float *)(param_1 + 0x88);
      uVar8 = in_fpscr & 0xfffffff | (uint)(fVar10 == DAT_00169998) << 0x1e |
              (uint)(DAT_00169998 <= fVar10) << 0x1d;
      bVar1 = (byte)(uVar8 >> 0x18);
      if ((!(bool)(bVar1 >> 5 & 1) || (bool)(bVar1 >> 6)) || ((int)ALBW_AS_U32(fVar10) < 0x3f000000)) {
        uVar5 = 0;
        if (0 < *(int *)(param_1 + 0x18)) {
          do {
            uVar2 = *(uint *)(param_1 + 0x18);
            if (uVar5 < uVar2) {
              iVar4 = *(int *)(param_1 + 0x20) + uVar5 * 0x28;
            }
            else {
              iVar4 = *(int *)(param_1 + 0x20);
            }
            iVar4 = (int)*(char *)(iVar4 + 0x24);
            if (-1 < iVar4) {
              iVar6 = *(int *)(param_1 + 0x20);
              if (uVar5 < uVar2) {
                iVar4 = uVar5 * 5;
              }
              if (uVar5 < uVar2) {
                iVar6 = iVar6 + iVar4 * 8;
              }
              iVar4 = *(int *)(param_1 + 0x94);
              if ((uint)(int)*(char *)(iVar6 + 0x24) < *(uint *)(param_1 + 0x90)) {
                iVar4 = iVar4 + *(char *)(iVar6 + 0x24) * 0x14;
              }
              *(undefined1 *)(iVar4 + 0x10) = 0;
            }
            uVar5 = uVar5 + 1;
          } while ((int)uVar5 < *(int *)(param_1 + 0x18));
        }
        uVar5 = *(uint *)(param_1 + 0xc);
        func_0010E3C4(*(uint **)(param_1 + 0x20),*(uint **)(param_1 + 0x14),uVar5 * 0x28);
        if (uVar5 <= *(uint *)(param_1 + 0x1c)) {
          *(uint *)(param_1 + 0x18) = uVar5;
        }
        *(float *)(param_1 + 0x88) = fVar12;
      }
      else {
        uVar2 = 0;
        if (0 < (int)uVar5) {
          do {
            uVar5 = *(uint *)(param_1 + 0xc);
            if (uVar2 < uVar5) {
              iVar4 = *(int *)(param_1 + 0x14) + uVar2 * 0x28;
            }
            else {
              iVar4 = *(int *)(param_1 + 0x14);
            }
            iVar4 = (int)*(char *)(iVar4 + 0x24);
            if (-1 < iVar4) {
              iVar6 = *(int *)(param_1 + 0x14);
              if (uVar2 < uVar5) {
                iVar4 = uVar2 * 5;
              }
              if (uVar2 < uVar5) {
                iVar6 = iVar6 + iVar4 * 8;
              }
              iVar4 = *(int *)(param_1 + 0x94);
              if ((uint)(int)*(char *)(iVar6 + 0x24) < *(uint *)(param_1 + 0x90)) {
                iVar4 = iVar4 + *(char *)(iVar6 + 0x24) * 0x14;
              }
              *(undefined1 *)(iVar4 + 0x10) = 0;
            }
            uVar2 = uVar2 + 1;
          } while ((int)uVar2 < *(int *)(param_1 + 0xc));
        }
      }
      if (((char)param_2[0x16] == '\0') && (uVar5 = 0, 0 < *(int *)(param_1 + 0x18))) {
        do {
          if (uVar5 < *(uint *)(param_1 + 0x18)) {
            iVar4 = *(int *)(param_1 + 0x20) + uVar5 * 0x28;
          }
          else {
            iVar4 = *(int *)(param_1 + 0x20);
          }
          uVar5 = uVar5 + 1;
          *(float *)(iVar4 + 0x10) = fVar11;
        } while ((int)uVar5 < *(int *)(param_1 + 0x18));
      }
      if (0 < (int)param_2[0x15]) {
        fVar11 = (float)VectorSignedToFloat(param_2[0x15],(byte)(uVar8 >> 0x15) & 3);
        fVar12 = fVar12 / fVar11;
      }
      *(float *)(param_1 + 0x8c) = fVar12;
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    func_00169344(param_1,param_2);
    if (*(int *)(param_1 + 0xa4) != 0) {
      local_2c = *(undefined4 *)**(undefined4 **)(*(int *)(param_1 + 0x14) + 4);
      local_30 = DAT_0016999c;
      func_0010DBB4(*(int *)(param_1 + 0xa4),&local_30,*(float *)(*(int *)(param_1 + 0x14) + 8));
    }
    uVar3 = 1;
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return uVar3;
}

