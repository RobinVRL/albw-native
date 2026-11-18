#include "ghidra_types.h"

extern int func_00133510(int *param_1,int param_2,int *param_3);
extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern undefined4 func_00151148(int param_1,int param_2);
extern void func_001699A0(int *param_1,int *param_2,undefined4 *param_3,float fparam_0);
extern int func_001D6FD0(undefined4 *param_1,uint param_2,int param_3,int *param_4,int param_5);
extern int func_00255B48(int param_1,int param_2,int param_3);
extern int func_0034CA20(undefined4 *param_1);
extern int func_003521F0(int param_1,undefined4 param_2);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004CF478(int param_1,int param_2);
extern int func_004EA104(int param_1,int *param_2,int param_3);
extern int func_00506798(int param_1,int param_2,int param_3);
extern int func_00506F38(undefined4 param_1,int param_2,int param_3);
extern int func_00539A98(undefined4 param_1,uint param_2,undefined4 param_3);
extern int func_00539AA8(int param_1,int param_2,uint param_3);
extern float *pfRam005073a4;
extern int *piRam005075f0;
extern float DAT_00507390;
extern undefined4 DAT_00507394;
extern int *DAT_00507398;
extern int DAT_0050739c;
extern undefined DAT_005073a0;
extern int *DAT_005075dc;
extern char s_SE_PL_RUPEE_GET_005075e0[];

// USA 00507034 <- EU 0050700C (Ghidra, non-matching)
// GLOBAL DAT_00507390 float
// GLOBAL DAT_00507394 undefined4
// GLOBAL DAT_00507398 int *
// GLOBAL DAT_0050739c int
// GLOBAL DAT_005073a0 undefined
// GLOBAL DAT_005075dc int *
// GLOBAL UNK_005073a4 float *
// GLOBAL UNK_005075f0 int *
// GLOBAL s_SE_PL_RUPEE_GET_005075e0 string

void func_00507034(int param_1)

{
  char cVar1;
  bool bVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  int *piVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  undefined *in_r2;
  float *in_r3;
  int iVar10;
  uint uVar11;
  int *piVar12;
  undefined *puVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define iStack_48 (*(int *)(albw_frame + 0x8))
  #define pcStack_44 (*(char * *)(albw_frame + 0xc))
  #define local_3c (*(int *)(albw_frame + 0x14))
  #define fStack_38 (*(float *)(albw_frame + 0x18))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x1c))
  #define fStack_30 (*(float *)(albw_frame + 0x20))
  piVar12 = DAT_00507398;
  uVar11 = 0xffffffff;
  iVar10 = 0;
  iVar14 = *(int *)(param_1 + 0x61c);
  puVar13 = *(undefined **)(param_1 + 0x620);
  fVar18 = DAT_00507390;
  if (iVar14 != 0) {
    local_3c = DAT_0050739c;
    uVar19 = DAT_00507394;
    do {
      uVar8 = *(uint *)(param_1 + 0x478);
      uVar11 = uVar11 + 1;
      if (uVar11 < uVar8) {
        in_r2 = *(undefined **)(param_1 + 0x480);
      }
      if (uVar11 < uVar8) {
        iVar15 = *(int *)(in_r2 + uVar11 * 4);
      }
      else {
        iVar15 = 0;
      }
      in_r2 = (undefined *)(uint)(byte)puVar13[iVar10 * 0x30];
      if (in_r2 == (undefined *)0x0) {
        func_0034CA20(*(undefined4 **)(puVar13 + iVar10 * 0x30 + 0x10));
        in_r2 = puVar13 + iVar10 * 0x30 + 0x14;
        in_r3 = (float *)0x1f00;
        func_0014E2A0(param_1,*(undefined4 *)(puVar13 + iVar10 * 0x30 + 0xc),in_r2,0x1f00,0,0);
        cVar1 = *(char *)(*(int *)(puVar13 + iVar10 * 0x30 + 0x10) + 0x21);
        if ((cVar1 == '\x11') || (cVar1 == '\x05')) {
          if (uVar11 < *(uint *)(param_1 + 0x610)) {
            iVar15 = *(int *)(*(int *)(param_1 + 0x618) + uVar11 * 4);
          }
          else {
            iVar15 = 0;
          }
          if (uVar11 < *(uint *)(param_1 + 0x61c)) {
            iVar4 = *(int *)(param_1 + 0x620) + uVar11 * 0x30;
          }
          else {
            iVar4 = *(int *)(param_1 + 0x620);
          }
          func_003521F0(iVar15 + 4,(int)*(short *)(iVar4 + 0x2a));
          in_r2 = &DAT_005073a0;
          if (uVar11 < *(uint *)(param_1 + 0x610)) {
            iVar15 = *(int *)(*(int *)(param_1 + 0x618) + uVar11 * 4);
          }
          else {
            iVar15 = 0;
          }
          if (*(int *)(iVar15 + 0x24) != 0) {
            func_004A1B9C(&iStack_48,*(int *)(iVar15 + 0x24),(uint *)&DAT_005073a0);
          }
          uVar7 = 1;
        }
        else {
          if (cVar1 != '\t' && cVar1 != '\n') {
            uVar8 = *(uint *)(param_1 + 0x478);
            if (uVar11 < uVar8) {
              in_r2 = *(undefined **)(param_1 + 0x480);
              iVar4 = *(int *)(in_r2 + uVar11 * 4);
            }
            else {
              iVar4 = 0;
            }
            if (*(short *)(iVar4 + 0x34) != 0) {
              if (uVar11 < uVar8) {
                in_r2 = *(undefined **)(param_1 + 0x480);
                iVar4 = *(int *)(in_r2 + uVar11 * 4);
              }
              else {
                iVar4 = 0;
              }
              if (*(short *)(iVar4 + 0x2e) == 0) {
                if (uVar11 < uVar8) {
                  in_r3 = *(float **)(param_1 + 0x480);
                  iVar4 = *(int *)(*(int *)(param_1 + 0x480) + uVar11 * 4);
                  uVar9 = *(uint *)(param_1 + 0x480);
                }
                else {
                  iVar4 = 0;
                  uVar9 = uVar8;
                }
                in_r2 = (undefined *)(uint)*(byte *)(iVar4 + 0x31);
                if (uVar11 < uVar8) {
                  iVar4 = *(int *)(uVar9 + uVar11 * 4);
                }
                else {
                  iVar4 = 0;
                }
                if (uVar11 < uVar8) {
                  fVar3 = in_r3[uVar11];
                }
                else {
                  fVar3 = 0.0;
                }
                bVar2 = func_00539A98(ALBW_AS_U32(fVar3),(uint)*(ushort *)(iVar4 + 0x34),in_r2);
                if (bVar2) {
                  iVar4 = 0;
                  func_004CF478(*(int *)(puVar13 + iVar10 * 0x30 + 4),0);
                  func_00151148(*(int *)(puVar13 + iVar10 * 0x30 + 0x24),iVar4);
                  if (uVar11 < *(uint *)(param_1 + 0x478)) {
                    iVar4 = *(int *)(*(int *)(param_1 + 0x480) + uVar11 * 4);
                  }
                  else {
                    iVar4 = 0;
                  }
                  func_00539AA8(iVar4,0,1);
                  in_r3 = &fStack_38;
                  if (uVar11 < *(uint *)(param_1 + 0x61c)) {
                    iVar4 = *(int *)(param_1 + 0x620) + uVar11 * 0x30;
                  }
                  else {
                    iVar4 = *(int *)(param_1 + 0x620);
                  }
                  in_r2 = (undefined *)0x4;
                  fStack_38 = fVar18;
                  uStack_34 = uVar19;
                  fStack_30 = fVar18;
                  func_001D6FD0((undefined4 *)(iVar15 + 4),(uint)*(byte *)(iVar4 + 0x2c),4,
                                (int *)in_r3,-1);
                  puVar13[iVar10 * 0x30] = 2;
                }
              }
            }
            goto LAB_00507458;
          }
          iVar4 = 0;
          func_004CF478(*(int *)(puVar13 + iVar10 * 0x30 + 4),0);
          func_00151148(*(int *)(puVar13 + iVar10 * 0x30 + 0x24),iVar4);
          if (uVar11 < *(uint *)(param_1 + 0x478)) {
            iVar4 = *(int *)(*(int *)(param_1 + 0x480) + uVar11 * 4);
          }
          else {
            iVar4 = 0;
          }
          func_00539AA8(iVar4,0,1);
          if (uVar11 < *(uint *)(param_1 + 0x61c)) {
            iVar4 = *(int *)(param_1 + 0x620) + uVar11 * 0x30;
          }
          else {
            iVar4 = *(int *)(param_1 + 0x620);
          }
          in_r2 = (undefined *)0x0;
          in_r3 = pfRam005073a4;
          func_001D6FD0((undefined4 *)(iVar15 + 4),(uint)*(byte *)(iVar4 + 0x2c),0,
                        (int *)pfRam005073a4,-1);
          uVar7 = 2;
        }
        puVar13[iVar10 * 0x30] = uVar7;
LAB_00507458:
        bVar2 = *(int *)(*piVar12 + 0xf74) != 0;
        iVar15 = 0;
        if (bVar2) {
          iVar15 = *(int *)(*(int *)(*piVar12 + 0xf74) + 0x20);
        }
        bVar16 = iVar15 != 0;
        if (bVar2 && bVar16) {
          iVar15 = *(int *)(iVar15 + 4);
        }
        if ((bVar2 && bVar16) && iVar15 != 0) {
          iVar15 = func_00506798(param_1,iVar10,(int)puVar13);
          if (iVar15 == 0) {
            puVar13[iVar10 * 0x30 + 0x2d] = 1;
          }
          else {
            puVar13[iVar10 * 0x30 + 0x2d] = 0;
          }
          in_r2 = puVar13;
          func_00506F38(param_1,iVar10,(int)puVar13);
        }
      }
      else {
        if (in_r2 == (undefined *)0x1) {
          if (uVar11 < *(uint *)(param_1 + 0x61c)) {
            iVar15 = *(int *)(param_1 + 0x620) + uVar11 * 0x30;
          }
          else {
            iVar15 = *(int *)(param_1 + 0x620);
          }
          iVar15 = func_00255B48(*DAT_005075dc,(int)*(short *)(iVar15 + 0x28),1);
          if (iVar15 != 0) {
            iVar15 = 0;
            func_004CF478(*(int *)(puVar13 + iVar10 * 0x30 + 4),0);
            func_00151148(*(int *)(puVar13 + iVar10 * 0x30 + 0x24),iVar15);
            iStack_48 = local_3c;
            pcStack_44 = s_SE_PL_RUPEE_GET_005075e0;
            func_004EA104(*piRam005075f0,&iStack_48,0);
            in_r2 = (undefined *)0x1;
            if (uVar11 < *(uint *)(param_1 + 0x478)) {
              iVar15 = *(int *)(*(int *)(param_1 + 0x480) + uVar11 * 4);
            }
            else {
              iVar15 = 0;
            }
            func_00539AA8(iVar15,0,1);
            puVar13[iVar10 * 0x30] = 2;
          }
          goto LAB_00507458;
        }
        if (in_r2 != (undefined *)0x2) {
          if (in_r2 == (undefined *)0x3) {
            if (uVar11 < uVar8) {
              in_r3 = *(float **)(param_1 + 0x480);
              iVar15 = *(int *)(*(int *)(param_1 + 0x480) + uVar11 * 4);
              uVar9 = *(uint *)(param_1 + 0x480);
            }
            else {
              iVar15 = 0;
              uVar9 = uVar8;
            }
            in_r2 = (undefined *)(uint)*(byte *)(iVar15 + 0x31);
            if (uVar11 < uVar8) {
              iVar15 = *(int *)(uVar9 + uVar11 * 4);
            }
            else {
              iVar15 = 0;
            }
            if (uVar11 < uVar8) {
              fVar3 = in_r3[uVar11];
            }
            else {
              fVar3 = 0.0;
            }
            bVar2 = func_00539A98(ALBW_AS_U32(fVar3),(uint)*(ushort *)(iVar15 + 0x34),in_r2);
            if (bVar2) {
              iVar15 = 1;
              in_r2 = (undefined *)0x0;
              func_004CF478(*(int *)(puVar13 + iVar10 * 0x30 + 4),1);
              func_00151148(*(int *)(puVar13 + iVar10 * 0x30 + 0x24),iVar15);
              puVar13[iVar10 * 0x30] = 0;
            }
          }
          goto LAB_00507458;
        }
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 != iVar14);
  }
  pfVar5 = (float *)(param_1 + 0x654);
  fVar3 = *pfVar5 + *(float *)(param_1 + 0x65c);
  *(float *)(param_1 + 0x658) = *pfVar5;
  *pfVar5 = fVar3;
  fVar17 = *(float *)(param_1 + 0x660);
  if (*(char *)(param_1 + 0x668) == '\0') {
    if (fVar17 < fVar3) {
      *pfVar5 = fVar17;
    }
    else {
      if (fVar3 <= fVar18) {
        fVar3 = fVar18;
      }
      *pfVar5 = fVar3;
    }
  }
  else if (fVar3 <= fVar17) {
    if (fVar3 < fVar18) {
      *(int *)(param_1 + 0x664) = *(int *)(param_1 + 0x664) + 1;
      *pfVar5 = fVar3 + fVar17;
    }
  }
  else {
    *(int *)(param_1 + 0x664) = *(int *)(param_1 + 0x664) + 1;
    *pfVar5 = fVar3 - fVar17;
  }
  uVar11 = 0;
  piVar12 = (int *)(param_1 + 0x624);
  do {
    piVar6 = piVar12;
    if (uVar11 < 8) {
      piVar6 = piVar12 + uVar11;
    }
    if (*piVar6 != 0) {
      piVar6 = piVar12;
      if (uVar11 < 8) {
        piVar6 = piVar12 + uVar11;
      }
      func_00133510(*(int **)(param_1 + 0x644),*(int *)(*(int *)(param_1 + 0x648) + 8),
                    (int *)*piVar6);
      piVar6 = piVar12;
      if (uVar11 < 8) {
        piVar6 = piVar12 + uVar11;
      }
      func_001699A0((int *)*piVar6,*(int **)(param_1 + 0x644),(undefined4 *)(param_1 + 0x64c),
                    *(float *)(param_1 + 0x654));
    }
    uVar11 = uVar11 + 1;
  } while ((int)uVar11 < 8);
  return;
}

