#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0029F948(char *param_1,int param_2,int param_3);
extern int func_0031E300(int param_1);
extern int func_0034DC88(int param_1,float *param_2,int param_3);
extern int func_0036FA1C(undefined4 *param_1,undefined1 param_2);
extern int func_004904CC(float fparam_0,float fparam_1);
extern void func_0051D0B0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,float fparam_0);
extern int func_0052E440(int param_1);
extern int func_00554D78(int param_1);
extern int func_00581C5C(int param_1);
extern int func_0058E2B8(int *param_1);
extern int func_0066FA50(int param_1,float *param_2,int param_3,uint param_4,float fparam_0);
extern int *DAT_0034db7c;
extern float DAT_0034db80;
extern float DAT_0034db84;
extern int DAT_0034db88;
extern int *DAT_0034db8c;
extern float DAT_0034db90;
extern uint DAT_0034db94;
extern float DAT_0034db98;
extern int *DAT_0034db9c;
extern uint *DAT_0034dc60;

// USA 0034D780 <- EU 0034D75C (Ghidra, non-matching)
// GLOBAL DAT_0034db7c int *
// GLOBAL DAT_0034db80 float
// GLOBAL DAT_0034db84 float
// GLOBAL DAT_0034db88 int
// GLOBAL DAT_0034db8c int *
// GLOBAL DAT_0034db90 float
// GLOBAL DAT_0034db94 uint
// GLOBAL DAT_0034db98 float
// GLOBAL DAT_0034db9c int *
// GLOBAL DAT_0034dc60 uint *

uint func_0034D780(int param_1,float *param_2,int param_3)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  float fVar6;
  int iVar7;
  float *pfVar8;
  bool bVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_78 (*(float *)(albw_frame + 0x8))
  #define local_74 (*(float *)(albw_frame + 0xc))
  #define local_70 (*(float *)(albw_frame + 0x10))
  #define local_6c (*(float *)(albw_frame + 0x14))
  #define local_60 (*(int *)(albw_frame + 0x20))
  #define local_5c ((int *)(albw_frame + 0x24))
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_3 + 0x28);
  func_0036FA1C((undefined4 *)(param_1 + 0x44),0);
  piVar2 = DAT_0034db7c;
  iVar7 = *(int *)(param_3 + 0x20);
  if (*(char *)(param_1 + 0x20) == '\0') {
    pfVar8 = (float *)0x0;
    uVar5 = extraout_r1;
  }
  else {
    pfVar8 = (float *)func_0052E440(*DAT_0034db7c);
    uVar5 = extraout_r1_00;
  }
  *(undefined1 *)(param_1 + 0x137) = 0;
  fVar12 = DAT_0034db84;
  fVar10 = DAT_0034db80;
  *(undefined1 *)(param_1 + 0x138) = 0;
  *(undefined1 *)(param_1 + 0x139) = 0;
  if (*(char *)(param_1 + 0x20) == '\0') {
LAB_0034d8dc:
    uVar18 = func_00114608((uint)ALBW_AS_U32((**(float **)(param_1 + 0x90) * fVar10)),uVar5);
    *(int *)(param_1 + 0x30) = (int)uVar18;
LAB_0034d8f4:
    if (*(char *)(*(int *)(param_1 + 0x90) + 0x25) != '\0') {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x28);
    }
  }
  else {
    uVar3 = *(uint *)(iVar7 + 4);
    bVar9 = uVar3 == 0x3f800000;
    if (bVar9) {
      uVar3 = (uint)*(byte *)(param_3 + 0x2c);
    }
    if (!bVar9 || uVar3 != 0) {
      iVar4 = func_004904CC(*(float *)(iVar7 + 8),*(float *)(iVar7 + 0x10));
      func_0034DC88(param_1,pfVar8,iVar4);
      uVar5 = extraout_r1_01;
      if (*(char *)(param_1 + 0x20) == '\0') goto LAB_0034d8dc;
    }
    if (*(char *)(param_1 + 0x137) == '\0') {
      if (*(char *)(param_1 + 0x139) == '\0') {
        uVar18 = func_00114608((uint)ALBW_AS_U32((**(float **)(param_1 + 0x94) * fVar10)),uVar5);
        uVar14 = (undefined4)uVar18;
      }
      else {
        uVar14 = *(undefined4 *)(param_1 + 0x13c);
      }
      *(undefined4 *)(param_1 + 0x30) = uVar14;
    }
    else {
      func_00115C70(&local_74,(float *)(param_1 + 0x158),param_2 + 3);
      iVar4 = func_004904CC(local_70,SQRT(local_74 * local_74 + local_6c * local_6c));
      *(int *)(param_1 + 0x30) = iVar4;
      if (*(char *)(param_1 + 0x20) == '\0') goto LAB_0034d8f4;
    }
    uVar5 = *(uint *)(iVar7 + 4);
    bVar9 = uVar5 == 0x3f800000;
    if (bVar9) {
      uVar5 = (uint)*(byte *)(param_3 + 0x2c);
    }
    if (!bVar9 || uVar5 != 0) {
      if (*(char *)(param_1 + 0x137) == '\0') {
        iVar7 = func_004904CC(*(float *)(iVar7 + 8),*(float *)(iVar7 + 0x10));
        *(int *)(param_1 + 0x38) = iVar7;
        func_0052E440(*piVar2);
        func_00115C70(&local_78,param_2,param_2 + 3);
        iVar7 = func_004904CC(local_78,local_70);
        local_5c[0] = iVar7 - *(int *)(param_1 + 0x38);
        local_60 = func_0058E2B8(local_5c);
        if ((-1 < *(short *)(DAT_0034db88 + param_1)) && (*(short *)(DAT_0034db88 + param_1) < 1)) {
          func_00115C70(&local_78,pfVar8,(float *)(param_1 + 0x2a4));
          iVar7 = func_004904CC(local_78,local_70);
          iVar7 = iVar7 + -0x80000000;
          goto LAB_0034d9c0;
        }
        uVar5 = func_0058E2B8(&local_60);
        uVar3 = func_0058E2B8(DAT_0034db8c);
        if (uVar3 < uVar5) {
          fVar10 = (float)VectorUnsignedToFloat(*DAT_0034db8c,(byte)(in_fpscr >> 0x15) & 3);
          fVar11 = (float)VectorUnsignedToFloat(local_60,(byte)(in_fpscr >> 0x15) & 3);
          func_0051D0B0((undefined4 *)(param_1 + 0x38),iVar7,
                                 *(undefined4 *)(param_1 + 0x38),
                                 (fVar10 * DAT_0034db90) / (fVar11 * DAT_0034db90));
          uVar5 = func_0058E2B8(&local_60);
          if (DAT_0034db94 <= uVar5) {
            uVar14 = *(undefined4 *)(param_1 + 8);
            uVar15 = *(undefined4 *)(param_1 + 0xc);
            *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x30);
            *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x38);
            fVar11 = pfVar8[1];
            fVar6 = pfVar8[2];
            fVar16 = param_2[3];
            fVar13 = param_2[4];
            fVar17 = param_2[5];
            param_2[3] = *pfVar8;
            param_2[4] = fVar11;
            param_2[5] = fVar6;
            param_2[4] = fVar13;
            func_00554D78(param_1 + 0x98);
            uVar5 = func_0066FA50(param_1,param_2,param_3,1,fVar10);
            *(undefined4 *)(param_1 + 8) = uVar14;
            *(undefined4 *)(param_1 + 0xc) = uVar15;
            param_2[3] = fVar16;
            param_2[4] = fVar13;
            param_2[5] = fVar17;
            fVar10 = DAT_0034db98;
            if (uVar5 == 0) {
              fVar11 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x38),
                                                  (byte)(in_fpscr >> 0x15) & 3);
              fVar11 = fVar11 * DAT_0034db98;
              iVar7 = (int)fVar11;
              fVar6 = (float)VectorSignedToFloat(iVar7,(byte)(in_fpscr >> 0x15) & 3);
              uVar5 = in_fpscr & 0xfffffff | (uint)(fVar6 == fVar11) << 0x1e;
              if ((!SUB41(uVar5 >> 0x1e,0)) &&
                 (uVar5 = in_fpscr & 0xfffffff | (uint)(fVar12 == fVar11) << 0x1e |
                          (uint)(fVar11 <= fVar12) << 0x1d, bVar1 = (byte)(uVar5 >> 0x18),
                 (bool)(bVar1 >> 5 & 1) && !(bool)(bVar1 >> 6))) {
                iVar7 = iVar7 + -1;
              }
              *(int *)(param_1 + 0x38) = iVar7;
              iVar7 = func_00581C5C(*DAT_0034db9c);
              uVar5 = uVar5 & 0xfffffff | (uint)(*(float *)(iVar7 + 0x3c4) <= *pfVar8) << 0x1d;
              if (!SUB41(uVar5 >> 0x1d,0)) {
                *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x30);
                *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x38);
                fVar11 = pfVar8[1];
                fVar6 = pfVar8[2];
                param_2[3] = *pfVar8;
                param_2[4] = fVar11;
                param_2[5] = fVar6;
                param_2[4] = fVar13;
                fVar11 = fVar13;
                func_00554D78(param_1 + 0x98);
                uVar3 = func_0066FA50(param_1,param_2,param_3,1,fVar13);
                if (uVar3 == 0) {
                  fVar6 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x38),
                                                     (byte)(uVar5 >> 0x15) & 3);
                  fVar6 = fVar6 * fVar10;
                  iVar7 = (int)fVar6;
                  fVar13 = (float)VectorSignedToFloat(iVar7,(byte)(uVar5 >> 0x15) & 3);
                  fVar10 = fVar13;
                  if (fVar13 != fVar6) {
                    fVar10 = fVar12;
                  }
                  if (fVar6 <= fVar10 && (fVar13 != fVar6 && fVar12 != fVar6)) {
                    iVar7 = iVar7 + -1;
                  }
                  *(int *)(param_1 + 0x38) = iVar7;
                }
                *(undefined4 *)(param_1 + 8) = uVar14;
                *(undefined4 *)(param_1 + 0xc) = uVar15;
                param_2[3] = fVar16;
                param_2[4] = fVar11;
                param_2[5] = fVar17;
              }
            }
          }
        }
      }
      else if (*(char *)(param_1 + 0x148) == '\0') {
        func_00115C70(&local_78,(float *)(param_1 + 0x158),pfVar8);
        iVar7 = func_004904CC(local_78,local_70);
LAB_0034d9c0:
        *(int *)(param_1 + 0x38) = iVar7;
      }
      else {
        func_00115C70(&local_78,(float *)(param_1 + 0x158),(float *)(param_1 + 0x14c));
        iVar7 = func_004904CC(local_78,local_70);
        *(int *)(param_1 + 0x38) = iVar7;
      }
      *(undefined4 *)(param_1 + 0x3c) = 0;
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
  }
  if (*(char *)(param_1 + 0x20) == '\0') {
    local_74 = *(float *)(param_1 + 0xc);
    uVar5 = func_0058E2B8((int *)&local_74);
    uVar3 = (uint)(uVar5 >= *DAT_0034dc60);
    if (uVar5 < *DAT_0034dc60) goto LAB_0034dc20;
    func_0031E300(*piVar2);
  }
  else {
    bVar9 = *(char *)(param_3 + 0x2c) == '\0';
    uVar3 = (uint)bVar9;
    if (!bVar9) goto LAB_0034dc20;
  }
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x38);
LAB_0034dc20:
  func_0029F948((char *)(param_1 + 0x98),(int)*(char *)(param_1 + 0x20),uVar3);
  *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_1 + 0xa8);
  *(float *)(param_1 + 0x1cc) = fVar12;
  *(float *)(param_1 + 0x1d0) = fVar12;
  *(float *)(param_1 + 0x1d4) = fVar12;
  return uVar3;
}

