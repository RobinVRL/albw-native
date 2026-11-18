#include "ghidra_types.h"

extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_002DFFF4(uint *param_1,uint param_2);
extern int func_0034CA20(undefined4 *param_1);
extern int func_004C66D8(undefined4 param_1,float *param_2);
extern int func_004CEAF0(int param_1);
extern int func_004E0CA4(void);
extern int func_004E0CC8(void);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0052FCA4(int param_1,undefined4 *param_2,int *param_3);
extern int func_0053F1CC(int param_1,int *param_2);
extern int func_00548068(int param_1,float *param_2);
extern uint DAT_004d7894;
extern undefined4 DAT_004d7898;
extern undefined4 *DAT_004d789c;
extern int *DAT_004d78a0;
extern undefined4 *DAT_004d78a4;
extern int *DAT_004d7b80;
extern uint DAT_004d7b84;
extern int *DAT_004d7b88;
extern int *DAT_004d7b8c;

// USA 004D7538 <- EU 004D7510 (Ghidra, non-matching)
// GLOBAL DAT_004d7894 uint
// GLOBAL DAT_004d7898 undefined4
// GLOBAL DAT_004d789c undefined4 *
// GLOBAL DAT_004d78a0 int *
// GLOBAL DAT_004d78a4 undefined4 *
// GLOBAL DAT_004d7b80 int *
// GLOBAL DAT_004d7b84 uint
// GLOBAL DAT_004d7b88 int *
// GLOBAL DAT_004d7b8c int *

void func_004D7538(int param_1)

{
  _Alignas(8) unsigned char albw_frame[0x60]; /* entry_sp - 0x60 .. entry_sp + 0x0 */
#define stack0xffffffa8 (*(undefined4 *)(albw_frame + 0x8))
  char cVar1;
  short sVar2;
  bool bVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  ulonglong uVar16;
  #define local_48 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x28))
  #define local_34 (*(undefined4 *)(albw_frame + 0x2c))
  uVar4 = DAT_004d7898;
  iVar10 = 0;
  uVar12 = 0xffffffff;
  iVar13 = *(int *)(param_1 + 0x61c);
  iVar11 = *(int *)(param_1 + 0x620);
  if (iVar13 != 0) {
    uVar16 = (ulonglong)DAT_004d7894;
    do {
      uVar12 = uVar12 + 1;
      pcVar5 = (char *)(iVar11 + iVar10 * 0x38);
      piVar14 = *(int **)(iVar11 + iVar10 * 0x38 + 4);
      if (*pcVar5 == '\0') {
        if (*(char *)(param_1 + 0x639) == '\0') {
          sVar2 = *(short *)(iVar11 + iVar10 * 0x38 + 0x34);
          if (sVar2 < 0) {
            *pcVar5 = '\x01';
          }
          else if (sVar2 == 0) {
            *pcVar5 = '\x01';
            if ((uVar12 < *(uint *)(param_1 + 0x478)) &&
               (iVar15 = *(int *)(*(int *)(param_1 + 0x480) + uVar12 * 4), iVar15 != 0)) {
              uStack_44 = *DAT_004d789c;
              local_48 = uVar4;
              local_40 = *(undefined4 *)(iVar15 + 4);
              uStack_3c = *(undefined4 *)(iVar15 + 8);
              uStack_38 = *(undefined4 *)(iVar15 + 0xc);
              local_34 = (undefined4)uVar16;
              iVar6 = *DAT_004d78a0;
              piVar14 = *(int **)(iVar6 + 0x3dbc8);
              piVar7 = func_0052FCA4(iVar6 + 0x3dbbc,&local_48,*(int **)(iVar6 + 0x3dbc0));
              iVar6 = 0;
              if (piVar7 != piVar14) {
                iVar6 = *piVar7;
              }
              if (iVar6 != 0) {
                if (uVar12 < *(uint *)(param_1 + 0x478)) {
                  iVar8 = *(int *)(*(int *)(param_1 + 0x480) + uVar12 * 4);
                  if ((iVar8 == 0) ||
                     (iVar8 = func_00548068(iVar6,(float *)(iVar8 + 4)), iVar8 == 0))
                  goto LAB_004d7700;
                  if (uVar12 < *(uint *)(param_1 + 0x61c)) {
                    iVar8 = *(int *)(param_1 + 0x620) + uVar12 * 0x38;
                  }
                  else {
                    iVar8 = *(int *)(param_1 + 0x620);
                  }
                  iVar8 = *(int *)(iVar8 + 8);
                  if (iVar8 != 0) {
                    *(uint *)(iVar8 + 0x2c) = *(uint *)(iVar8 + 0x2c) | 0x4000;
                  }
                  iVar8 = *(int *)(param_1 + 0x620);
                  if (uVar12 < *(uint *)(param_1 + 0x61c)) {
                    iVar8 = iVar8 + uVar12 * 0x38;
                  }
                  bVar3 = true;
                  *(undefined4 *)(iVar8 + 0x30) = *(undefined4 *)(iVar6 + 0x2cc);
                }
                else {
                  bVar3 = false;
                }
                if (bVar3) goto LAB_004d7ae8;
              }
LAB_004d7700:
              uStack_44 = *DAT_004d78a4;
              local_34 = (undefined4)uVar16;
              local_48 = uVar4;
              local_40 = *(undefined4 *)(iVar15 + 4);
              uStack_3c = *(undefined4 *)(iVar15 + 8);
              uStack_38 = *(undefined4 *)(iVar15 + 0xc);
              iVar15 = *DAT_004d78a0;
              piVar7 = *(int **)(iVar15 + 0x3dbc8);
              piVar14 = func_0052FCA4(iVar15 + 0x3dbbc,&local_48,*(int **)(iVar15 + 0x3dbc0));
              if (piVar14 == piVar7) {
                iVar15 = 0;
              }
              else {
                iVar15 = *piVar14;
              }
              if ((((iVar15 != 0) && (uVar12 < *(uint *)(param_1 + 0x478))) &&
                  (iVar6 = *(int *)(*(int *)(param_1 + 0x480) + uVar12 * 4), iVar6 != 0)) &&
                 (iVar6 = func_00548068(iVar15,(float *)(iVar6 + 4)), iVar6 != 0)) {
                if (uVar12 < *(uint *)(param_1 + 0x61c)) {
                  iVar6 = *(int *)(param_1 + 0x620) + uVar12 * 0x38;
                }
                else {
                  iVar6 = *(int *)(param_1 + 0x620);
                }
                iVar6 = *(int *)(iVar6 + 8);
                if (iVar6 != 0) {
                  *(uint *)(iVar6 + 0x2c) = *(uint *)(iVar6 + 0x2c) | 0x4000;
                }
                if (uVar12 < *(uint *)(param_1 + 0x61c)) {
                  iVar6 = *(int *)(param_1 + 0x620) + uVar12 * 0x38;
                }
                else {
                  iVar6 = *(int *)(param_1 + 0x620);
                }
                *(undefined4 *)(iVar6 + 0x30) = *(undefined4 *)(iVar15 + 0x2cc);
              }
            }
          }
          else {
LAB_004d7a68:
            *(short *)(pcVar5 + 0x34) = *(short *)(pcVar5 + 0x34) + -1;
          }
        }
        else {
          if ((*(char *)(param_1 + 0x638) == '\0') && (iVar15 = *(int *)(pcVar5 + 8), iVar15 != 0))
          {
            *(uint *)(iVar15 + 0x2c) = *(uint *)(iVar15 + 0x2c) | 0x4000;
          }
          *(undefined1 *)(iVar11 + iVar10 * 0x38) = 1;
        }
      }
      else if (*pcVar5 == '\x01') {
        if (*(char *)(param_1 + 0x639) == '\0') {
          if (*(int *)(pcVar5 + 0x30) != 0) {
            if (*(short *)(iVar11 + iVar10 * 0x38 + 0x34) != 0) goto LAB_004d7a68;
            pcVar5[0x34] = -0x6a;
            pcVar5[0x35] = '\0';
            if (*DAT_004d78a0 != 0) {
              iVar15 = func_0052FBA0(*DAT_004d78a0 + 0x3dbbc,
                                     *(uint *)(iVar11 + iVar10 * 0x38 + 0x30));
              cVar1 = '\0';
              if (iVar15 != 0) {
                cVar1 = *(char *)(iVar15 + 0x444);
              }
              if (iVar15 != 0 && cVar1 != '\0') {
                iVar15 = *(int *)(iVar11 + iVar10 * 0x38 + 8);
                if (iVar15 != 0) {
                  *(uint *)(iVar15 + 0x2c) = *(uint *)(iVar15 + 0x2c) & 0xffffbfff;
                }
                *(undefined4 *)(iVar11 + iVar10 * 0x38 + 0x30) = 0;
              }
            }
          }
        }
        else if (*(char *)(param_1 + 0x638) == '\0') {
          if (*(char *)(param_1 + 0x63b) == '\0') {
            func_0034CA20(*(undefined4 **)(pcVar5 + 0xc));
            if ((*DAT_004d7b80 == 0) ||
               (cVar1 = *(char *)(*DAT_004d7b80 + 0x18), uVar9 = DAT_004d7b84,
               cVar1 != '\a' && cVar1 != '%')) {
              uVar9 = 0x1f00;
            }
            iVar15 = iVar11 + iVar10 * 0x38;
            func_0014E2A0(param_1,*(undefined4 *)(iVar15 + 8),iVar15 + 0x1c,uVar9,0,0);
            if (*(char *)(*(int *)(iVar11 + iVar10 * 0x38 + 0xc) + 0x21) == '\v') {
              func_004E0CA4();
              iVar15 = *(int *)(iVar11 + iVar10 * 0x38 + 8);
              *(undefined1 *)(param_1 + 0x638) = 1;
              if ((*(char *)(param_1 + 0x63a) == '\0') && (piVar14 != (int *)0x0)) {
                (**(code **)(*piVar14 + 0x10))(piVar14,0x24);
              }
              func_002DFFF4((uint *)(*(int *)(*DAT_004d78a0 + 0x3dbe4) + 0x24),0);
            }
            else {
              if ((*DAT_004d7b88 == 0) ||
                 (iVar15 = func_0053F1CC(*DAT_004d7b88,(int *)&stack0xffffffa8), iVar15 == 0))
              goto LAB_004d7ae8;
              func_004E0CC8();
              iVar15 = *(int *)(iVar11 + iVar10 * 0x38 + 8);
              *(undefined1 *)(param_1 + 0x638) = 1;
              if ((*(char *)(param_1 + 0x63a) == '\0') && (piVar14 != (int *)0x0)) {
                (**(code **)(*piVar14 + 0x10))(piVar14,0x24);
              }
              func_002DFFF4((uint *)(*(int *)(*DAT_004d78a0 + 0x3dbe4) + 0x24),0);
            }
          }
          else {
            *(undefined1 *)(param_1 + 0x63b) = 0;
            func_004E0CC8();
            iVar15 = *(int *)(iVar11 + iVar10 * 0x38 + 8);
            *(undefined1 *)(param_1 + 0x638) = 1;
            if ((*(char *)(param_1 + 0x63a) == '\0') && (piVar14 != (int *)0x0)) {
              (**(code **)(*piVar14 + 0x10))(piVar14,0x24);
            }
            func_002DFFF4((uint *)(*(int *)(*DAT_004d78a0 + 0x3dbe4) + 0x24),0);
          }
          if (iVar15 != 0) {
            *(uint *)(iVar15 + 0x2c) = *(uint *)(iVar15 + 0x2c) & 0xffffbfff;
          }
        }
      }
LAB_004d7ae8:
      func_004CEAF0(*(int *)(iVar11 + iVar10 * 0x38 + 4));
      iVar10 = iVar10 + 1;
    } while (iVar10 != iVar13);
  }
  if ((*(char *)(param_1 + 0x639) != '\0') && (iVar10 = *DAT_004d7b8c, iVar10 != 0)) {
    iVar13 = *(int *)(param_1 + 0x61c);
    iVar11 = 0;
    uVar12 = 0xffffffff;
    if (iVar13 != 0) {
      do {
        uVar12 = uVar12 + 1;
        if ((uVar12 < *(uint *)(param_1 + 0x478)) &&
           (iVar15 = *(int *)(*(int *)(param_1 + 0x480) + uVar12 * 4), iVar15 != 0)) {
          func_004C66D8(iVar10,(float *)(iVar15 + 4));
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 != iVar13);
    }
  }
  return;
}

