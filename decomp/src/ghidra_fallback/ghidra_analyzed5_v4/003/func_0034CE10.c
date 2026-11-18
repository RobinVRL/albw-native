#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004904CC(float fparam_0,float fparam_1);
extern void func_0051D0B0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,float fparam_0);
extern int func_0051D27C(int *param_1,int param_2,int param_3);
extern int func_0051D2CC(int *param_1,int param_2,float fparam_0);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00541190(int param_1);
extern int func_005549BC(int param_1,int param_2);
extern int func_00556EAC(int param_1,int param_2);
extern int func_0058E2B8(int *param_1);
extern int *DAT_0034d1bc;
extern undefined4 DAT_0034d1c0;
extern float DAT_0034d1c4;
extern float DAT_0034d1c8;
extern float DAT_0034d1cc;
extern float DAT_0034d1d0;
extern float DAT_0034d1d4;
extern float DAT_0034d1d8;
extern float DAT_0034d1dc;
extern uint DAT_0034d1e0;
extern uint DAT_0034d644;
extern uint DAT_0034d648;
extern uint DAT_0034d64c;
extern uint DAT_0034d650;
extern uint DAT_0034d654;
extern uint DAT_0034d658;
extern float DAT_0034d65c;
extern uint DAT_0034d660;
extern int DAT_0034d664;
extern float DAT_0034d668;

// USA 0034CE10 <- EU 0034CDEC (Ghidra, non-matching)
// GLOBAL DAT_0034d1bc int *
// GLOBAL DAT_0034d1c0 undefined4
// GLOBAL DAT_0034d1c4 float
// GLOBAL DAT_0034d1c8 float
// GLOBAL DAT_0034d1cc float
// GLOBAL DAT_0034d1d0 float
// GLOBAL DAT_0034d1d4 float
// GLOBAL DAT_0034d1d8 float
// GLOBAL DAT_0034d1dc float
// GLOBAL DAT_0034d1e0 uint
// GLOBAL DAT_0034d644 uint
// GLOBAL DAT_0034d648 uint
// GLOBAL DAT_0034d64c uint
// GLOBAL DAT_0034d650 uint
// GLOBAL DAT_0034d654 uint
// GLOBAL DAT_0034d658 uint
// GLOBAL DAT_0034d65c float
// GLOBAL DAT_0034d660 uint
// GLOBAL DAT_0034d664 int
// GLOBAL DAT_0034d668 float

void func_0034CE10(int param_1,int param_2,float *param_3)

{
  char cVar1;
  short sVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  uint uVar9;
  uint extraout_r1;
  uint uVar10;
  uint extraout_r1_00;
  uint extraout_r1_01;
  uint extraout_r1_02;
  uint extraout_r1_03;
  uint extraout_r1_04;
  uint extraout_r1_05;
  int iVar11;
  int iVar12;
  float fVar13;
  bool bVar14;
  uint in_fpscr;
  uint uVar15;
  float fVar16;
  float in_s1;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 (*(float *)(albw_frame + 0x8))
  #define local_54 (*(float *)(albw_frame + 0xc))
  #define local_50 (*(float *)(albw_frame + 0x10))
  #define local_4c (*(float *)(albw_frame + 0x14))
  #define local_48 (*(int *)(albw_frame + 0x18))
  #define local_44 (*(int *)(albw_frame + 0x1c))
  #define local_40 (*(int *)(albw_frame + 0x20))
  fVar16 = DAT_0034d1cc;
  fVar18 = DAT_0034d1c8;
  fVar13 = DAT_0034d1c4;
  piVar4 = DAT_0034d1bc;
  iVar5 = *DAT_0034d1bc;
  uVar20 = CONCAT44(DAT_0034d1c4,DAT_0034d1c0);
  uVar9 = *(uint *)(*(int *)(param_2 + 0x20) + 4);
  bVar14 = uVar9 != 0x3f800000;
  if (!bVar14) {
    uVar9 = (uint)*(byte *)(param_2 + 0x2c);
  }
  if ((bVar14 || uVar9 != 0) ||
     (((*(char *)(param_1 + 0x2a1) != '\0' && (-1 < *(short *)(param_1 + 0x29e))) &&
      (*(short *)(param_1 + 0x29e) < 1)))) {
    sVar2 = *(short *)(param_1 + 0x228);
    fVar13 = DAT_0034d1cc;
    bVar14 = func_00556EAC(iVar5,0x62);
    if (bVar14) {
      if (sVar2 < 0) {
        *(undefined2 *)(param_1 + 0x228) = 0;
      }
      else {
        *(short *)(param_1 + 0x228) = *(short *)(param_1 + 0x228) + 1;
      }
    }
    else {
      *(undefined2 *)(param_1 + 0x228) = 0xffff;
    }
    uVar9 = extraout_r1;
    if (*(char *)(param_1 + 0x20) != '\0') {
      uVar19 = CONCAT44(fVar13,*(undefined4 *)(param_2 + 8));
      fVar13 = **(float **)(*piVar4 + 0x24);
      bVar14 = *(char *)(param_1 + 0x137) != '\0';
      cVar1 = '\0';
      if (bVar14) {
        cVar1 = *(char *)(param_1 + 0x148);
      }
      if ((bVar14 && cVar1 != '\0') && (*(char *)(param_1 + 0x164) != '\0')) {
        fVar13 = 0.0;
      }
      fVar16 = *(float *)(*(int *)(param_2 + 0x20) + 8);
      local_58 = ALBW_AS_F32(func_004904CC(fVar16,*(float *)(*(int *)(param_2 + 0x20) + 0x10)));
      if (((*(char *)(param_1 + 0x2a1) != '\0') && (-1 < *(short *)(param_1 + 0x29e))) &&
         (*(short *)(param_1 + 0x29e) < 1)) {
        func_00115C70(&local_54,(float *)(param_1 + 0x2a4),*(float **)(*piVar4 + 0x1c));
        fVar16 = local_54;
        local_58 = ALBW_AS_F32(func_004904CC(local_54,local_4c));
      }
      bVar14 = *(char *)(param_1 + 0x20) != '\0';
      cVar1 = '\0';
      if (bVar14) {
        cVar1 = *(char *)(param_1 + 0x137);
      }
      if (bVar14 && cVar1 != '\0') {
        bVar14 = *(char *)(param_1 + 0x148) != '\0';
        cVar1 = '\0';
        if (bVar14) {
          cVar1 = *(char *)(param_1 + 0x164);
        }
        if (bVar14 && cVar1 != '\0') {
          func_00115C70(&local_54,(float *)(param_1 + 0x158),(float *)(param_1 + 0x14c));
          fVar16 = local_54;
          local_58 = ALBW_AS_F32(func_004904CC(local_54,local_4c));
        }
      }
      if (*(short *)(param_1 + 0x228) < 10) {
        if (((*(char *)(param_1 + 0x22a) != '\x02') && (*(char *)(param_1 + 0x164) == '\0')) &&
           ((*(short *)(param_1 + 0x29e) < 0 ||
            ((0 < *(short *)(param_1 + 0x29e) || (*(char *)(param_1 + 0x2a1) == '\0')))))) {
          iVar5 = *(int *)(param_2 + 0x20);
          if (fVar13 != local_58 && -1 < (int)ALBW_AS_U32(fVar13) - (int)ALBW_AS_U32(local_58)) {
            iVar5 = iVar5 + 0x30;
          }
          if ((int)ALBW_AS_U32(fVar13) - (int)ALBW_AS_U32(local_58) < 1) {
            iVar5 = iVar5 + 0x18;
          }
          iVar5 = func_004904CC(*(float *)(iVar5 + 0xc),*(float *)(iVar5 + 0x14));
          func_0051D0B0(&local_58,ALBW_AS_U32(local_58),iVar5,ALBW_AS_F32(uVar20));
        }
      }
      else {
        if ((int)ALBW_AS_U32(local_58) < 0) {
          local_58 = -2.0;
        }
        else {
          local_58 = 2.0;
        }
        *(float *)(param_1 + 0x224) = local_58;
      }
      fVar17 = ALBW_AS_F32(((ulonglong)uVar20 >> 0x20));
      fVar6 = ALBW_AS_F32(func_005549BC(param_1,param_2));
      cVar1 = *(char *)(param_1 + 0x29c);
      if (*(char *)(param_1 + 0x22a) == '\0') {
        if (((cVar1 == '\x02') || (cVar1 == '\x03')) ||
           ((cVar1 == '\0' &&
            ((-1 < *(short *)(param_1 + 0x228) && (*(short *)(param_1 + 0x228) < 10))))))
        goto LAB_0034d06c;
      }
      else if (cVar1 == '\x02' || cVar1 == '\x03') {
LAB_0034d06c:
        local_58 = fVar6;
      }
      fVar7 = local_58;
      if (*(short *)(param_1 + 0x228) < 10) {
        fVar7 = fVar6;
      }
      local_48 = (int)ALBW_AS_U32(fVar13) - (int)ALBW_AS_U32(fVar7);
      uVar9 = func_0058E2B8(&local_48);
      bVar14 = *(char *)(param_1 + 0x20) != '\0';
      cVar1 = '\0';
      if (bVar14) {
        cVar1 = *(char *)(param_1 + 0x137);
      }
      if (bVar14 && cVar1 != '\0') {
        bVar14 = *(char *)(param_1 + 0x148) != '\0';
        cVar1 = '\0';
        if (bVar14) {
          cVar1 = *(char *)(param_1 + 0x164);
        }
        if (bVar14 && cVar1 != '\0') {
          local_44 = (int)ALBW_AS_U32(fVar13) - (int)ALBW_AS_U32(local_58);
          uVar9 = func_0058E2B8(&local_44);
        }
      }
      if (uVar9 < 0x40000000) {
        fVar16 = DAT_0034d1d0;
      }
      local_40 = (*(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x40)) - *(int *)(param_1 + 0x3c);
      if (uVar9 >= 0x40000000) {
        fVar16 = DAT_0034d1d4;
      }
      fVar6 = (float)VectorSignedToFloat((int)ALBW_AS_U32(fVar6) - (int)ALBW_AS_U32(local_58),(byte)(in_fpscr >> 0x15) & 3);
      iVar5 = (int)(fVar6 * fVar16);
      if (9 < *(short *)(param_1 + 0x228)) {
        iVar5 = 0;
      }
      bVar14 = *(char *)(param_1 + 0x20) != '\0';
      cVar1 = '\0';
      if (bVar14) {
        cVar1 = *(char *)(param_1 + 0x137);
      }
      if (bVar14 && cVar1 != '\0') {
        func_00115C70(&local_54,(float *)(param_1 + 0x158),param_3);
        iVar5 = func_004904CC(local_54,local_4c);
        iVar5 = iVar5 - (int)ALBW_AS_U32(local_58);
      }
      uVar15 = in_fpscr & 0xfffffff |
               (uint)(ALBW_AS_F32(((ulonglong)uVar19 >> 0x20)) <= ALBW_AS_F32(uVar19)) << 0x1d;
      uVar10 = *(int *)(param_1 + 0x40) - ((int)ALBW_AS_U32(local_58) - local_40);
      *(uint *)(param_1 + 0x40) = uVar10;
      fVar16 = DAT_0034d1d8;
      if (SUB41(uVar15 >> 0x1d,0)) {
        fVar6 = DAT_0034d1d8;
        if (*(char *)(param_1 + 0x135) == '\0') {
          fVar6 = DAT_0034d1dc;
        }
        if (uVar9 < DAT_0034d1e0) {
          *(undefined1 *)(param_1 + 0x135) = 1;
          fVar6 = fVar16;
        }
        else if (DAT_0034d644 < uVar9) {
          *(undefined1 *)(param_1 + 0x135) = 0;
          fVar6 = fVar17;
        }
        uVar9 = DAT_0034d648;
        if (*(short *)(param_1 + 0x228) < 10) {
          if (*(char *)(param_1 + 0x22a) == '\x02') {
            uVar20 = func_00114608(DAT_0034d64c,uVar10);
            func_0051D2F4((int *)(param_1 + 0x40),iVar5,0,(int)uVar20,fVar18);
            uVar10 = extraout_r1_01;
          }
          else {
            bVar14 = *(char *)(param_1 + 0x20) != '\0';
            cVar1 = '\0';
            if (bVar14) {
              cVar1 = *(char *)(param_1 + 0x137);
            }
            if (((bVar14 && cVar1 != '\0') && (*(char *)(param_1 + 0x164) == '\0')) &&
               (*(char *)(param_1 + 0x136) != '\0')) {
              uVar20 = func_00114608(DAT_0034d650,uVar10);
              func_0051D27C((int *)(param_1 + 0x40),iVar5,(int)uVar20);
              uVar10 = extraout_r1_02;
            }
            else {
              uVar20 = func_00114608(DAT_0034d654,uVar10);
              uVar21 = func_00114608(DAT_0034d658,(uint)((ulonglong)uVar20 >> 0x20));
              func_0051D2F4((int *)(param_1 + 0x40),iVar5,(int)uVar21,(int)uVar20,
                            fVar6 * ALBW_AS_F32(uVar19));
              uVar10 = extraout_r1_03;
            }
          }
        }
        else {
          *(undefined1 *)(param_1 + 0x135) = 0;
          uVar20 = func_00114608(uVar9,uVar10);
          func_0051D2F4((int *)(param_1 + 0x40),iVar5,0,(int)uVar20,fVar18);
          uVar10 = extraout_r1_00;
        }
      }
      else {
        *(int *)(param_1 + 0x40) = iVar5;
      }
      fVar13 = (float)VectorSignedToFloat((int)ALBW_AS_U32(local_58) - (int)ALBW_AS_U32(fVar13),(byte)(uVar15 >> 0x15) & 3);
      iVar5 = (int)(fVar13 * ALBW_AS_F32(((ulonglong)uVar19 >> 0x20)) * DAT_0034d65c);
      uVar20 = func_00114608(0,uVar10);
      func_0051D27C((int *)(param_1 + 0x3c),iVar5,(int)uVar20);
      uVar9 = extraout_r1_04;
      if (*(char *)(param_1 + 0x164) == '\0') {
        uVar9 = *(int *)(param_1 + 0x40) + (int)ALBW_AS_U32(local_58) + *(int *)(param_1 + 0x3c);
        *(uint *)(param_1 + 0x38) = uVar9;
      }
      bVar14 = *(char *)(param_1 + 0x2b8) != '\0';
      cVar1 = '\0';
      if (bVar14) {
        cVar1 = *(char *)(param_1 + 0x20);
      }
      if (((bVar14 && cVar1 != '\0') && (iVar5 = (int)*(short *)(param_1 + 0x29e), -1 < iVar5)) &&
         (iVar5 < 1)) {
        uVar9 = (uint)*(byte *)(param_1 + 0x164);
        if (uVar9 == 0) {
          func_0051D27C((int *)(param_1 + 0x2b4),*(int *)(param_1 + 0x2b0),
                        *(int *)(DAT_0034d664 + iVar5 * 0x14 + 0xc));
          *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x2b4);
          uVar9 = extraout_r1_05;
        }
        else {
          *(undefined4 *)(param_1 + 0x2b0) = *(undefined4 *)(param_1 + 0x38);
          *(undefined4 *)(param_1 + 0x2b4) = *(undefined4 *)(param_1 + 0x38);
        }
      }
    }
    uVar20 = func_00114608(DAT_0034d660,uVar9);
    func_0051D27C((int *)(param_1 + 0x34),*(int *)(param_1 + 0x38),(int)uVar20);
    goto LAB_0034d6e0;
  }
  *(undefined2 *)(param_1 + 0x228) = 0xffff;
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x264) == 0) {
    if (*(char *)(*(int *)(param_1 + 0x90) + 0x25) == '\0') {
      func_0051D2CC((int *)(param_1 + 0x34),0,fVar13);
    }
    else {
      uVar20 = func_00114608(DAT_0034d660,0);
      func_0051D27C((int *)(param_1 + 0x34),0,(int)uVar20);
    }
    goto LAB_0034d6e0;
  }
  iVar12 = *(int *)(iVar5 + 0x1c);
  iVar5 = func_00541190(*(int *)(param_1 + 0x264));
  fVar13 = ALBW_AS_F32(uVar20);
  if (*(char *)(param_1 + 0x250) == '\0') {
    fVar6 = *(float *)(iVar12 + 4);
    in_s1 = *(float *)(iVar5 + 0x34);
    in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar6 == in_s1) << 0x1e |
               (uint)(in_s1 <= fVar6) << 0x1d;
    bVar3 = (byte)(in_fpscr >> 0x18);
    if (!(bool)(bVar3 >> 5 & 1) || (bool)(bVar3 >> 6)) goto LAB_0034d44c;
  }
  else {
LAB_0034d44c:
    if (*(char *)(param_1 + 0x248) != '\0') {
      func_00115C70(&local_58,(float *)(param_1 + 0x23c),param_3);
      if (*(char *)(param_1 + 0x250) == '\0') {
        *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(iVar5 + 0x3c);
        fVar6 = (float)VectorSignedToFloat(*(undefined4 *)(iVar5 + 0x14),
                                           (byte)(in_fpscr >> 0x15) & 3);
        fVar6 = fVar6 * fVar13;
      }
      else {
        iVar12 = func_004904CC(local_58,local_50);
        *(int *)(param_1 + 0x38) = iVar12;
        *(int *)(param_1 + 0x38) = iVar12 + *(int *)(iVar5 + 0x30);
        fVar17 = *(float *)(iVar5 + 0x18);
        uVar9 = in_fpscr & 0xfffffff;
        uVar15 = uVar9 | (uint)(fVar17 < fVar16) << 0x1f | (uint)(fVar17 == fVar16) << 0x1e |
                 (uint)(fVar16 <= fVar17) << 0x1d;
        in_fpscr = uVar15 | (uint)(NAN(fVar17) || NAN(fVar16)) << 0x1c;
        fVar13 = **(float **)(*piVar4 + 0x20);
        fVar6 = (*(float **)(*piVar4 + 0x20))[2];
        fVar6 = SQRT(fVar13 * fVar13 + fVar6 * fVar6);
        bVar3 = (byte)(uVar15 >> 0x18);
        fVar13 = fVar18;
        if ((bool)(bVar3 >> 5 & 1)) {
          if ((bool)(bVar3 >> 6 & 1) || bVar3 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
            in_fpscr = uVar9 | (uint)(fVar6 <= fVar16) << 0x1d;
            fVar13 = fVar16;
            if (!SUB41(in_fpscr >> 0x1d,0)) {
              fVar13 = fVar18;
            }
          }
          else {
            fVar13 = fVar6 / fVar17;
          }
        }
        fVar6 = (float)VectorSignedToFloat(*(undefined4 *)(iVar5 + 0x14),
                                           (byte)(in_fpscr >> 0x15) & 3);
        if (0x3f800000 < (int)ALBW_AS_U32(fVar13)) {
          fVar13 = fVar18;
        }
        in_s1 = *(float *)(param_1 + 0x254);
        fVar6 = (float)VectorSignedToFloat((int)(fVar6 * fVar13),(byte)(in_fpscr >> 0x15) & 3);
        fVar6 = in_s1 * fVar6;
      }
      fVar13 = ALBW_AS_F32((int)fVar6);
      iVar11 = *(int *)(param_1 + 0x34);
      func_0051D27C((int *)(param_1 + 0x34),*(int *)(param_1 + 0x38),(int)ALBW_AS_U32(fVar13));
      iVar12 = *(int *)(param_1 + 0x34);
      if (iVar12 != iVar11) {
        in_s1 = *(float *)(iVar5 + 0x24);
        fVar13 = *(float *)(param_1 + 0x25c);
      }
      if (iVar12 - iVar11 < 1) {
        if (iVar12 - iVar11 < 0) {
LAB_0034d56c:
          fVar13 = fVar13 - in_s1;
          goto LAB_0034d570;
        }
        fVar13 = *(float *)(param_1 + 0x25c);
        uVar9 = in_fpscr & 0xfffffff | (uint)(fVar13 < fVar16) << 0x1f |
                (uint)(fVar13 == fVar16) << 0x1e | (uint)(fVar16 <= fVar13) << 0x1d;
        in_fpscr = uVar9 | (uint)(NAN(fVar13) || NAN(fVar16)) << 0x1c;
        bVar3 = (byte)(uVar9 >> 0x18);
        if (!(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
          in_s1 = *(float *)(iVar5 + 0x24);
          goto LAB_0034d56c;
        }
        if (!(bool)(bVar3 >> 5 & 1)) {
          in_s1 = *(float *)(iVar5 + 0x24);
          goto LAB_0034d580;
        }
      }
      else {
LAB_0034d580:
        fVar13 = fVar13 + in_s1;
LAB_0034d570:
        *(float *)(param_1 + 0x25c) = fVar13;
      }
      in_fpscr = in_fpscr & 0xfffffff;
      fVar6 = DAT_0034d668;
      if ((DAT_0034d668 <= fVar13) &&
         (in_fpscr = in_fpscr | (uint)(fVar13 < fVar18) << 0x1f, fVar6 = fVar13,
         fVar13 != fVar18 && SUB41(in_fpscr >> 0x1f,0) == (NAN(fVar13) || NAN(fVar18)))) {
        fVar6 = fVar18;
      }
      iVar8 = iVar12 - iVar11;
      *(float *)(param_1 + 0x25c) = fVar6;
      *(int *)(param_1 + 0x34) = iVar11;
      if (iVar8 < 0) {
LAB_0034d5cc:
        in_fpscr = in_fpscr & 0xfffffff;
        if (fVar16 < fVar6) {
LAB_0034d5d8:
          iVar12 = iVar11 - iVar8;
        }
      }
      else {
        in_fpscr = in_fpscr & 0xfffffff;
        if (fVar6 < fVar16) {
          if (iVar8 < 1) goto LAB_0034d5cc;
          goto LAB_0034d5d8;
        }
      }
      uVar9 = in_fpscr | (uint)(fVar6 < fVar16) << 0x1f | (uint)(fVar6 == fVar16) << 0x1e;
      uVar15 = uVar9 | (uint)(NAN(fVar6) || NAN(fVar16)) << 0x1c;
      bVar3 = (byte)(uVar9 >> 0x18);
      if ((bool)(bVar3 >> 6 & 1) || bVar3 >> 7 != ((byte)(uVar15 >> 0x1c) & 1)) {
        fVar6 = -fVar6;
      }
      func_0051D2CC((int *)(param_1 + 0x34),iVar12,fVar6);
      local_4c = ALBW_AS_F32((*(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x38)));
      uVar9 = func_0058E2B8((int *)&local_4c);
      if (uVar9 < *(uint *)(iVar5 + 0x28)) {
        iVar12 = *(int *)(param_1 + 0x34);
        *(int *)(param_1 + 0x34) = iVar11;
        fVar18 = (float)VectorUnsignedToFloat(uVar9,(byte)(uVar15 >> 0x15) & 3);
        fVar13 = (float)VectorSignedToFloat(*(undefined4 *)(iVar5 + 0x28),(byte)(uVar15 >> 0x15) & 3
                                           );
        func_0051D2CC((int *)(param_1 + 0x34),iVar12,fVar18 / fVar13);
      }
      else {
        local_48 = *(int *)(param_1 + 0x34) - (*(int *)(param_1 + 0x38) + -0x80000000);
        uVar9 = func_0058E2B8(&local_48);
        if (uVar9 < *(uint *)(iVar5 + 0x2c)) {
          iVar12 = *(int *)(param_1 + 0x34);
          *(int *)(param_1 + 0x34) = iVar11;
          fVar18 = (float)VectorUnsignedToFloat(uVar9,(byte)(uVar15 >> 0x15) & 3);
          fVar13 = (float)VectorSignedToFloat(*(undefined4 *)(iVar5 + 0x2c),
                                              (byte)(uVar15 >> 0x15) & 3);
          func_0051D2CC((int *)(param_1 + 0x34),iVar12,fVar18 / fVar13);
        }
      }
      goto LAB_0034d6e0;
    }
  }
  *(float *)(param_1 + 0x25c) = fVar16;
LAB_0034d6e0:
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x34);
  return;
}

