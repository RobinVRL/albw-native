#include "ghidra_types.h"

extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_00110DB8(int param_1,int param_2);
extern int func_001DF5C4(int param_1,int param_2,float fparam_0);
extern int func_001DF80C(int param_1,int param_2,float fparam_0);
extern int func_001DF984(int param_1,int param_2,float fparam_0);
extern int func_001DFFA8(int param_1,float fparam_0);
extern int func_001E0040(uint param_1,uint param_2);
extern int func_001E02FC(int param_1,int param_2,float fparam_0);
extern int func_001E0634(int param_1,int param_2,float fparam_0,float fparam_1);
extern int func_0025BE98(int *param_1,int param_2);
extern float func_004906A8(float fparam_0);
extern int func_004994B0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int func_004EA174(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
extern int func_0052EF6C(int param_1);
extern int func_00587FCC(int param_1,int *param_2);
extern int func_00588154(int param_1,uint param_2);
extern int func_00588354(int param_1,int *param_2);
extern int *DAT_00322114;
extern int DAT_00322118;
extern float DAT_0032212c;
extern float DAT_00322130;
extern int DAT_00322134;
extern float DAT_00322138;
extern uint DAT_0032213c;
extern float DAT_00322140;
extern int DAT_00322144;
extern float DAT_00322148;
extern char s__s_BIND_00322124[];
extern char s__s__d_0032211c[];
extern char s_cf_0032211c[];
extern char s_cf_00322124[];

// USA 00321D9C <- EU 00321D78 (Ghidra, non-matching)
// GLOBAL DAT_00322114 int *
// GLOBAL DAT_00322118 int
// GLOBAL DAT_0032212c float
// GLOBAL DAT_00322130 float
// GLOBAL DAT_00322134 int
// GLOBAL DAT_00322138 float
// GLOBAL DAT_0032213c uint
// GLOBAL DAT_00322140 float
// GLOBAL DAT_00322144 int
// GLOBAL DAT_00322148 float
// GLOBAL s_cf_0032211c string
// GLOBAL s_cf_00322124 string

void func_00321D9C(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  uint in_fpscr;
  float in_s0;
  float fVar14;
  float in_s1;
  float fVar15;
  float fVar16;
  float fparam_0;
  float fparam_0_00;
  ulonglong uVar17;
  float fVar18;
  float fVar19;
  _Alignas(8) unsigned char albw_frame[0xc0];
  #define local_c0 (*(int *)(albw_frame + 0x0))
  #define local_bc (*(undefined1 * *)(albw_frame + 0x4))
  #define uStack_b8 (*(undefined4 *)(albw_frame + 0x8))
  #define local_b4 ((undefined1 *)(albw_frame + 0xc))
  #define uStack_75 (*(undefined1 *)(albw_frame + 0x4b))
  #define local_70 (*(float *)(albw_frame + 0x50))
  #define local_6c (*(float *)(albw_frame + 0x54))
  #define local_68 (*(float *)(albw_frame + 0x58))
  #define local_64 (*(float *)(albw_frame + 0x5c))
  #define local_60 (*(float *)(albw_frame + 0x60))
  #define local_5c (*(float *)(albw_frame + 0x64))
  #define local_58 (*(float *)(albw_frame + 0x68))
  #define local_54 (*(undefined4 *)(albw_frame + 0x6c))
  #define local_50 (*(undefined4 *)(albw_frame + 0x70))
  #define local_4c (*(undefined4 *)(albw_frame + 0x74))
  piVar5 = DAT_00322114;
  if ((*(uint *)(param_1 + 0x18) & 8) != 0) {
    iVar8 = *(int *)(param_1 + 0x14);
    iVar9 = (param_1 + 8) - iVar8;
    iVar3 = *(int *)(param_1 + 0xc) - iVar8;
    iVar10 = 0;
    if (iVar3 != iVar9) {
      do {
        if (*(char *)(iVar3 + 0x10e) == '\0') {
          iVar10 = iVar10 + 1;
        }
        iVar3 = *(int *)(iVar3 + iVar8 + 4) - iVar8;
      } while (iVar3 != iVar9);
      if (1 < iVar10) {
        uVar4 = func_00588154(*DAT_00322114,*(undefined4 *)(param_1 + 0x28));
        local_bc = local_b4;
        uStack_b8 = 0x40;
        uStack_75 = 0;
        local_c0 = DAT_00322118;
        local_b4[0] = 0;
        func_004994B0((int)&local_c0,s__s__d_0032211c,uVar4,iVar10);
        iVar3 = func_00588354(*piVar5,&local_c0);
        if (iVar3 == 0) {
          iVar3 = *(int *)(param_1 + 0x24);
        }
        else {
          iVar3 = func_00587FCC(*piVar5,&local_c0);
          *(int *)(param_1 + 0x24) = iVar3;
        }
        if (iVar3 == -1) {
          func_004994B0((int)&local_c0,s__s_BIND_00322124,uVar4,iVar10);
          iVar3 = func_00588354(*piVar5,&local_c0);
          if (iVar3 == 0) {
            iVar3 = *(int *)(param_1 + 0x24);
          }
          else {
            iVar3 = func_00587FCC(*piVar5,&local_c0);
            *(int *)(param_1 + 0x24) = iVar3;
          }
          if (iVar3 == -1) goto LAB_00322034;
        }
        uVar17 = (ulonglong)(uint)ALBW_AS_U32(DAT_0032212c);
        iVar9 = *(int *)(param_1 + 0x14);
        iVar3 = *(int *)(param_1 + 0xc) - iVar9;
        iVar8 = *(int *)(iVar3 + iVar9 + 4);
        fVar15 = DAT_0032212c;
        fVar16 = DAT_0032212c;
        fVar18 = DAT_0032212c;
        fparam_0 = DAT_0032212c;
        fparam_0_00 = DAT_0032212c;
        fVar14 = DAT_0032212c;
        fVar19 = DAT_00322130;
        while (iVar3 != (param_1 + 8) - iVar9) {
          if (*(char *)(iVar3 + 0x10e) == '\0') {
            if (*(int *)(iVar3 + 0x28) == 0) {
              fVar15 = fVar15 + fVar19;
            }
            else {
              local_68 = ALBW_AS_F32(uVar17);
              local_54 = 0;
              local_50 = 0;
              local_4c = 0;
              local_70 = fVar19;
              local_6c = fVar19;
              local_64 = local_68;
              local_60 = local_68;
              local_5c = local_68;
              local_58 = local_68;
              func_004EA174(*piVar5,*(undefined4 *)(param_1 + 0x28),*(int *)(iVar3 + 0x28),&local_70
                           );
              fVar15 = local_70 + fVar15;
              fVar16 = fVar16 + local_68 * local_70;
              fparam_0 = fparam_0 + local_64 * local_70;
              fparam_0_00 = fparam_0_00 + local_60 * local_70;
              fVar18 = fVar18 + local_5c * local_70;
              in_s0 = local_70;
              in_s1 = local_68;
            }
            func_00110DB8(iVar3,0);
            func_0010F1F8((int *)(*(int *)(param_1 + 0x14) + iVar3),in_s0);
            *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
          }
          fVar14 = ALBW_AS_F32(uVar17);
          iVar3 = iVar8 - iVar9;
          iVar8 = *(int *)(iVar8 + 4);
        }
        piVar5 = func_0025BE98(*(int **)(*piVar5 + 0x40),*(int *)(param_1 + 0x24));
        if (piVar5 != (int *)0x0) {
          uVar4 = in_fpscr & 0xfffffff | (uint)(fVar15 < fVar14) << 0x1f |
                  (uint)(fVar15 == fVar14) << 0x1e;
          in_fpscr = uVar4 | (uint)(NAN(fVar15) || NAN(fVar14)) << 0x1c;
          bVar2 = (byte)(uVar4 >> 0x18);
          if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
            fVar16 = fVar16 / fVar15;
            fparam_0 = fparam_0 / fVar15;
          }
          if (0x3f800000 < (int)ALBW_AS_U32(fVar15)) {
            fVar14 = func_004906A8(fVar15);
            fVar15 = fVar14 + fVar19;
            if (DAT_00322134 < (int)ALBW_AS_U32((fVar14 + fVar19))) {
              fVar15 = DAT_00322138;
            }
          }
          func_001E0634((int)piVar5,0,fVar15,in_s1);
          func_001E02FC((int)piVar5,0,fVar16);
          func_001DF984((int)piVar5,0,fparam_0);
          func_001DF80C((int)piVar5,0,fparam_0_00);
          func_001DF5C4((int)piVar5,0,fVar18);
        }
      }
    }
  }
LAB_00322034:
  iVar3 = DAT_00322144;
  iVar8 = *(int *)(param_1 + 0x14);
  iVar9 = 0;
  uVar4 = *(int *)(param_1 + 0xc) - iVar8;
  uVar11 = (param_1 + 8) - iVar8;
  if (uVar4 != uVar11) {
    uVar17 = (ulonglong)DAT_0032213c;
    uVar12 = 0;
    fVar15 = DAT_00322140;
    fVar16 = DAT_00322148;
    do {
      bVar13 = *(char *)(uVar4 + 0x109) != '\0';
      cVar1 = '\0';
      if (bVar13) {
        cVar1 = *(char *)(uVar4 + 0x10a);
      }
      uVar6 = uVar12;
      if (!bVar13 || cVar1 == '\0') {
        if (*(char *)(uVar4 + 0x10e) == '\0') {
          *(undefined1 *)(uVar4 + 0x10e) = 1;
          if ((*(uint *)(param_1 + 0x18) & 1) != 0 && 0 < iVar9) {
            fVar18 = (float)VectorSignedToFloat(iVar9,(byte)(in_fpscr >> 0x15) & 3);
            fVar18 = fVar15 - fVar18 * ALBW_AS_F32(uVar17);
            if ((int)ALBW_AS_U32(fVar18) < iVar3) {
              fVar18 = fVar16;
            }
            func_001DFFA8(uVar4,fVar18);
          }
          uVar7 = uVar12;
          if ((*(uint *)(param_1 + 0x18) & 2) == 0) {
            uVar7 = 0;
          }
          func_001E0040(uVar4,uVar7);
        }
        if (*(char *)(uVar4 + 0x109) == '\0') {
          bVar13 = func_0052EF6C(uVar4);
          if (bVar13) {
            uVar7 = *(uint *)(uVar4 + 0xfc);
            if (uVar7 == 0) {
              uVar6 = 2;
            }
            else if ((uVar7 < 2) && (uVar6 = 2 - uVar7, (int)(2 - uVar7) < (int)uVar12)) {
              uVar6 = uVar12;
            }
            if (uVar7 < *(ushort *)(param_1 + 0x2c)) goto LAB_00322194;
          }
        }
        else {
          if (*(int *)(uVar4 + 0xf0) == 0) {
            uVar6 = 2;
          }
          else {
            uVar6 = *(int *)(uVar4 + 0xf0) + 2;
            if ((int)uVar6 < (int)uVar12) {
              uVar6 = uVar12;
            }
          }
LAB_00322194:
          iVar9 = iVar9 + 1;
        }
      }
      uVar4 = *(int *)(uVar4 + iVar8 + 4) - iVar8;
      uVar12 = uVar6;
    } while (uVar4 != uVar11);
  }
  return;
}

