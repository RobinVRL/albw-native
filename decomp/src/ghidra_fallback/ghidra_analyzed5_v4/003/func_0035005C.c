// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern ulonglong func_00110710(uint param_1,uint param_2);
extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_001157FC(float *param_1,float *param_2,float *param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115CA8(float *param_1,float *param_2,float *param_3);
extern int func_0012159C(int param_1);
extern int func_00261564(int param_1);
extern int func_0029FA1C(int param_1);
extern int func_002E12C0(undefined4 param_1,float *param_2,float *param_3,undefined4 *param_4,int param_5, float fparam_0);
extern int func_002E1424(float *param_1,float *param_2);
extern int func_002E15CC(float *param_1,float *param_2,float *param_3,int param_4,int param_5,int param_6, float fparam_0,float fparam_1,float fparam_2);
extern int func_0034CE10(int param_1,int param_2,float *param_3);
extern int func_0034DF14(int param_1,float *param_2,int param_3,int param_4,float fparam_0);
extern int func_0034E038(int param_1,float *param_2,int param_3,int param_4,float fparam_0,float fparam_1);
extern undefined8 func_0034EFB0(int param_1);
extern int func_003517A4(int param_1,float *param_2,undefined4 param_3,float *param_4,float fparam_0);
extern int func_0036F6C8(float *param_1,float *param_2,float *param_3);
extern int func_0036F874(float *param_1,float *param_2,undefined4 *param_3,float fparam_0);
extern int func_0036FA1C(undefined4 *param_1,undefined1 param_2);
extern int func_0036FA58(float *param_1,byte *param_2,float *param_3,int param_4);
extern int func_004904CC(float fparam_0,float fparam_1);
extern int func_00491E80(float *param_1,uint param_2,uint param_3,uint param_4);
extern float func_004D7FBC(float *param_1,float *param_2,uint param_3,uint param_4,float fparam_0);
extern int func_004D838C(float *param_1,float *param_2,float fparam_0,float fparam_1,float fparam_2);
extern int func_0051D27C(int *param_1,int param_2,int param_3);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00541190(int param_1);
extern float func_00542330(undefined4 param_1,int param_2);
extern float func_00542350(undefined4 param_1,int param_2);
extern float func_005548EC(int param_1,int param_2);
extern int func_005569A4();
extern int func_00556A90();
extern int func_005581D4(float *param_1,float *param_2,int param_3,byte *param_4);
extern int func_00581DF8(int param_1,undefined4 param_2,undefined4 param_3);
extern int func_00588BE4(int param_1);
extern int func_00588F20(undefined4 param_1,float *param_2,float fparam_0);
extern int func_0058E2B8(int *param_1);
extern int *DAT_0034fde8;
extern int *DAT_0034fdf4;
extern int DAT_003501b4;
extern uint DAT_003501c4;
extern uint *DAT_003501c8;
extern int DAT_003501cc;
extern float DAT_003501d0;
extern int DAT_003501d4;
extern uint DAT_00350718;
extern uint DAT_0035071c;
extern uint DAT_00350720;
extern int DAT_00350724;
extern int DAT_00350728;
extern float DAT_0035072c;
extern int *DAT_00350730;
extern int *DAT_00350734;
extern int *DAT_00350738;
extern int *DAT_0035073c;
extern int *DAT_00350740;
extern float DAT_00350744;
extern float DAT_00350748;
extern float DAT_0035074c;
extern undefined4 DAT_00350750;
extern float *DAT_003514d4;
extern int DAT_003514d8;
extern int DAT_003514dc;
extern int *DAT_003514e0;
extern int DAT_003514e4;
extern float DAT_003514e8;
extern int DAT_003514ec;
extern int *DAT_003514f0;
extern int *DAT_003514f4;
extern int DAT_003514f8;
extern int DAT_003516bc;
extern int *DAT_003516c0;
extern uint *DAT_003516c4;
extern undefined4 *DAT_003516c8;
extern undefined4 DAT_003516cc;

// USA 0035005C <- EU 00350038 (Ghidra, non-matching)
// GLOBAL DAT_0034fde8 int *
// GLOBAL DAT_0034fdf4 int *
// GLOBAL DAT_003501b4 int
// GLOBAL DAT_003501c4 uint
// GLOBAL DAT_003501c8 uint *
// GLOBAL DAT_003501cc int
// GLOBAL DAT_003501d0 float
// GLOBAL DAT_003501d4 int
// GLOBAL DAT_00350718 uint
// GLOBAL DAT_0035071c uint
// GLOBAL DAT_00350720 uint
// GLOBAL DAT_00350724 int
// GLOBAL DAT_00350728 int
// GLOBAL DAT_0035072c float
// GLOBAL DAT_00350730 int *
// GLOBAL DAT_00350734 int *
// GLOBAL DAT_00350738 int *
// GLOBAL DAT_0035073c int *
// GLOBAL DAT_00350740 int *
// GLOBAL DAT_00350744 float
// GLOBAL DAT_00350748 float
// GLOBAL DAT_0035074c float
// GLOBAL DAT_00350750 undefined4
// GLOBAL DAT_003514d4 float *
// GLOBAL DAT_003514d8 int
// GLOBAL DAT_003514dc int
// GLOBAL DAT_003514e0 int *
// GLOBAL DAT_003514e4 int
// GLOBAL DAT_003514e8 float
// GLOBAL DAT_003514ec int
// GLOBAL DAT_003514f0 int *
// GLOBAL DAT_003514f4 int *
// GLOBAL DAT_003514f8 int
// GLOBAL DAT_003516bc int
// GLOBAL DAT_003516c0 int *
// GLOBAL DAT_003516c4 uint *
// GLOBAL DAT_003516c8 undefined4 *
// GLOBAL DAT_003516cc undefined4

undefined4 func_0035005C(undefined4 param_1,uint param_2)

{
  _Alignas(8) unsigned char albw_frame[0x150]; /* entry_sp - 0x0 .. entry_sp + 0x150 */
#define stack0x00000008 (*(undefined4 *)(albw_frame + 0x8))
#define stack0x0000000c (*(undefined4 *)(albw_frame + 0xc))
#define stack0x00000018 (*(undefined4 *)(albw_frame + 0x18))
#define stack0x0000001c (*(undefined4 *)(albw_frame + 0x1c))
#define stack0x00000020 (*(undefined4 *)(albw_frame + 0x20))
#define stack0x00000024 (*(undefined4 *)(albw_frame + 0x24))
#define stack0x00000038 (*(undefined4 *)(albw_frame + 0x38))
#define stack0x0000003c (*(undefined4 *)(albw_frame + 0x3c))
#define stack0x00000044 (*(undefined4 *)(albw_frame + 0x44))
#define stack0x00000050 (*(undefined4 *)(albw_frame + 0x50))
#define stack0x00000068 (*(undefined4 *)(albw_frame + 0x68))
#define stack0x00000074 (*(undefined4 *)(albw_frame + 0x74))
#define stack0x00000080 (*(undefined4 *)(albw_frame + 0x80))
#define stack0x000000a0 (*(undefined4 *)(albw_frame + 0xa0))
#define stack0x000000d0 (*(undefined4 *)(albw_frame + 0xd0))
#define stack0x00000104 (*(undefined4 *)(albw_frame + 0x104))
#define stack0x00000110 (*(undefined4 *)(albw_frame + 0x110))
  char cVar1;
  byte bVar2;
  uint uVar3;
  float *pfVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int iVar10;
  int unaff_r4;
  float *unaff_r5;
  int unaff_r6;
  int unaff_r7;
  byte *unaff_r8;
  int unaff_r9;
  int iVar11;
  int unaff_r10;
  int unaff_r11;
  bool bVar12;
  bool bVar13;
  uint in_fpscr;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 in_d8;
  undefined8 in_d9;
  float in_s20;
  ulonglong uVar23;
  undefined8 uVar24;
  undefined8 in_d11;
  undefined8 uVar25;
  #define in_stack_00000008 (*(float *)(albw_frame + 0x8)) /* V4: frame slot (callee-filled) */
  float fStack0000000c;
  float fStack00000010;
  float fStack00000014;
  #define in_stack_00000018 (*(float *)(albw_frame + 0x18)) /* V4: frame slot (callee-filled) */
  #define in_stack_0000001c (*(float *)(albw_frame + 0x1c)) /* V4: frame slot (callee-filled) */
  #define in_stack_00000020 (*(float *)(albw_frame + 0x20)) /* V4: frame slot (callee-filled) */
  #define in_stack_00000024 (*(float *)(albw_frame + 0x24)) /* V4: frame slot (callee-filled) */
  #define in_stack_00000038 (*(float *)(albw_frame + 0x38)) /* V4: frame slot (callee-filled) */
  #define in_stack_0000003c (*(float *)(albw_frame + 0x3c)) /* V4: frame slot (callee-filled) */
  float in_stack_00000040;
  #define in_stack_00000044 (*(float *)(albw_frame + 0x44)) /* V4: frame slot (callee-filled) */
  float in_stack_00000048;
  float in_stack_0000004c;
  #define in_stack_00000050 (*(float *)(albw_frame + 0x50)) /* V4: frame slot (callee-filled) */
  float in_stack_00000054;
  float in_stack_00000058;
  float in_stack_0000005c;
  float in_stack_00000060;
  int in_stack_00000064;
  #define in_stack_00000068 (*(float *)(albw_frame + 0x68)) /* V4: frame slot (callee-filled) */
  float in_stack_00000070;
  #define in_stack_00000074 (*(float *)(albw_frame + 0x74)) /* V4: frame slot (callee-filled) */
  float in_stack_0000007c;
  #define in_stack_00000080 (*(float *)(albw_frame + 0x80)) /* V4: frame slot (callee-filled) */
  float in_stack_00000084;
  float in_stack_00000088;
  int in_stack_0000009c;
  float in_stack_000000dc;
  undefined4 in_stack_000000ec;
  undefined4 in_stack_000000fc;
  int iStack00000100;
  #define in_stack_00000104 (*(float *)(albw_frame + 0x104)) /* V4: frame slot (callee-filled) */
  float in_stack_0000010c;
  #define in_stack_00000110 (*(float *)(albw_frame + 0x110)) /* V4: frame slot (callee-filled) */
  undefined4 in_stack_00000114;
  undefined4 in_stack_00000118;
  
  fVar16 = ALBW_AS_F32(((ulonglong)in_d8 >> 0x20));
  if (*(byte *)(unaff_r4 + 0x22b) < 5) {
    if (unaff_r9 == 0) {
      if (*(short *)(unaff_r7 + 0x28) < 0) {
        uVar25 = func_00114608(DAT_0035071c,param_2);
        func_0051D27C((int *)(unaff_r4 + 0x2c),*(int *)(unaff_r4 + 0x30),(int)uVar25);
      }
      else {
        uVar25 = func_00114608(DAT_00350718,param_2);
        func_0051D27C((int *)(unaff_r4 + 0x2c),*(int *)(unaff_r4 + 0x30),(int)uVar25);
      }
    }
    else {
      iVar11 = *(int *)(unaff_r4 + 0x2c);
      if (unaff_r10 == *(int *)(unaff_r4 + 0x30)) {
        fVar14 = *(float *)(unaff_r4 + 0x188);
        uVar3 = in_fpscr & 0xfffffff;
        uVar6 = uVar3 | (uint)(fVar14 < fVar16) << 0x1f | (uint)(fVar14 == fVar16) << 0x1e;
        in_fpscr = uVar6 | (uint)(NAN(fVar14) || NAN(fVar16)) << 0x1c;
        bVar2 = (byte)(uVar6 >> 0x18);
        if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
          fVar14 = *(float *)(unaff_r4 + 0x194) + ALBW_AS_F32(in_d9);
          *(float *)(unaff_r4 + 0x194) = fVar14;
          uVar3 = uVar3 | (uint)(fVar14 < *(float *)(unaff_r4 + 0x188)) << 0x1f;
          in_fpscr = uVar3 | (uint)(NAN(fVar14) || NAN(*(float *)(unaff_r4 + 0x188))) << 0x1c;
          if ((byte)(uVar3 >> 0x1f) != ((byte)(in_fpscr >> 0x1c) & 1)) goto code_r0x003500dc;
          *(undefined4 *)(unaff_r4 + 400) = 0;
          *(undefined4 *)(unaff_r4 + 0x18c) = 0;
          *(float *)(unaff_r4 + 0x188) = fVar16;
          *(float *)(unaff_r4 + 0x184) = fVar16;
          *(float *)(unaff_r4 + 0x194) = fVar16;
          *(undefined4 *)(unaff_r4 + 0x2c) = *(undefined4 *)(unaff_r4 + 0x30);
        }
      }
      else {
        in_stack_00000020 = ALBW_AS_F32((unaff_r10 - *(int *)(unaff_r4 + 0x30)));
        uVar3 = func_0058E2B8((int *)&stack0x00000020);
        uVar6 = *DAT_003501c8;
        uVar25 = func_00110710(uVar3,uVar6);
        iVar10 = DAT_003501cc;
        fVar20 = (float)VectorUnsignedToFloat((int)uVar25,(byte)(in_fpscr >> 0x15) & 3);
        fVar22 = (float)VectorUnsignedToFloat
                                  ((int)((ulonglong)uVar25 >> 0x20),(byte)(in_fpscr >> 0x15) & 3);
        fVar14 = (float)VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
        fVar14 = *(float *)(unaff_r4 + 0x188) + fVar20 + fVar22 / fVar14;
        *(float *)(unaff_r4 + 0x188) = fVar14;
        if ((int)ALBW_AS_U32((fVar14 - *(float *)(unaff_r4 + 0x194))) < iVar10) {
          *(float *)(unaff_r4 + 0x188) = *(float *)(unaff_r4 + 0x194) + DAT_003501d0;
        }
        if (DAT_003501d4 < (int)ALBW_AS_U32((*(float *)(unaff_r4 + 0x188) - *(float *)(unaff_r4 + 0x194)))) {
          *(float *)(unaff_r4 + 0x188) = *(float *)(unaff_r4 + 0x194) + in_s20;
        }
        *(undefined4 *)(unaff_r4 + 0x184) = *(undefined4 *)(unaff_r4 + 0x194);
        *(undefined4 *)(unaff_r4 + 0x180) = *(undefined4 *)(unaff_r4 + 0x2c);
        *(float *)(unaff_r4 + 0x194) = *(float *)(unaff_r4 + 0x194) + ALBW_AS_F32(in_d9);
        *(undefined4 *)(unaff_r6 + 0x8c) = *(undefined4 *)(unaff_r6 + 0x90);
code_r0x003500dc:
        uVar25 = func_0034EFB0(unaff_r4);
        *(int *)(unaff_r4 + 0x2c) = (int)uVar25;
        *(int *)(unaff_r4 + 400) = (int)uVar25 - iVar11;
      }
    }
  }
  else {
    uVar25 = func_00114608(DAT_003501c4,param_2);
    func_0051D27C((int *)(unaff_r4 + 0x2c),*(int *)(unaff_r4 + 0x30),(int)uVar25);
  }
  *(undefined4 *)(unaff_r4 + 8) = *(undefined4 *)(unaff_r4 + 0x2c);
  func_0034CE10(unaff_r4,(int)unaff_r8,unaff_r5 + 3);
  iVar11 = 0;
  switch(*unaff_r8) {
  default:
    func_0036FA1C((undefined4 *)(unaff_r4 + 0x44),0);
    break;
  case 8:
    fVar14 = *(float *)(unaff_r4 + 0xb8);
    fVar22 = *(float *)(unaff_r4 + 0xc4);
    uVar3 = in_fpscr & 0xfffffff;
    uVar6 = uVar3 | (uint)(fVar14 < fVar22) << 0x1f | (uint)(fVar14 == fVar22) << 0x1e;
    in_fpscr = uVar6 | (uint)(NAN(fVar14) || NAN(fVar22)) << 0x1c;
    bVar2 = (byte)(uVar6 >> 0x18);
    if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
      fVar14 = *(float *)(unaff_r4 + 0xbc);
      fVar22 = *(float *)(unaff_r4 + 200);
      uVar6 = uVar3 | (uint)(fVar14 < fVar22) << 0x1f | (uint)(fVar14 == fVar22) << 0x1e;
      in_fpscr = uVar6 | (uint)(NAN(fVar14) || NAN(fVar22)) << 0x1c;
      bVar2 = (byte)(uVar6 >> 0x18);
      if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
        in_fpscr = uVar3 | (uint)(*(float *)(unaff_r4 + 0xc0) <= *(float *)(unaff_r4 + 0xcc)) <<
                           0x1d;
        iVar11 = 0;
        if (SUB41(in_fpscr >> 0x1d,0)) goto switchD_00350244_caseD_0;
      }
    }
    iVar11 = 1;
  case 0:
  case 4:
  case 5:
  case 6:
switchD_00350244_caseD_0:
    in_stack_00000018 = unaff_r5[3];
    in_stack_00000020 = unaff_r5[5];
    in_stack_0000001c = unaff_r5[4] - *(float *)(unaff_r4 + 0x24);
    if (*(char *)(unaff_r4 + 0x22) != '\0') {
      func_00115C70(&stack0x00000018,&stack0x00000018,(float *)(unaff_r4 + 0x290));
    }
    func_0036FA58((float *)(unaff_r4 + 0x44),unaff_r8,&stack0x00000018,iVar11);
  }
  func_0029FA1C(unaff_r4 + 0x98);
  fVar22 = *(float *)(unaff_r4 + 0x24);
  fVar14 = func_00542330(unaff_r4 + 0x98,unaff_r8);
  uVar23 = (ulonglong)DAT_00350720;
  *(float *)(unaff_r4 + 0x24) = fVar22 + (fVar14 - fVar22) * *(float *)(DAT_003501b4 + 8);
  piVar5 = DAT_0034fdf4;
  if (0x3f7fffff < *(int *)(unaff_r4 + 0x108)) goto LAB_003505fc;
  if ((*unaff_r8 == 4 || *unaff_r8 == 5) &&
     ((*(char *)(unaff_r7 + 0x2c) != '\0' || (*(char *)(unaff_r7 + 0x2d) == '\0')))) {
    *(int *)(unaff_r4 + 0x108) = (int)in_d9;
    goto LAB_003505fc;
  }
  func_005569A4(*DAT_0034fdf4,&stack0x0000001c);
  fVar14 = in_stack_0000001c * in_stack_0000001c + in_stack_00000020 * in_stack_00000020 +
           in_stack_00000024 * in_stack_00000024;
  bVar12 = DAT_00350724 < (int)ALBW_AS_U32(fVar14);
  if (DAT_00350724 < (int)ALBW_AS_U32(fVar14)) {
    *(undefined1 *)(unaff_r4 + 0x22e) = 0xff;
  }
  else if ((*(char *)(unaff_r7 + 0x2c) == '\0') &&
          ((*(char *)(unaff_r7 + 0x2d) != '\0' || (*(byte *)(unaff_r4 + 0x22e) < 5)))) {
    bVar12 = true;
    if ((int)ALBW_AS_U32(fVar14) < DAT_00350728) {
      fVar14 = DAT_0035072c;
    }
    *(char *)(unaff_r4 + 0x22e) = *(char *)(unaff_r4 + 0x22e) + '\x01';
  }
  else {
    *(undefined1 *)(unaff_r4 + 0x22e) = 0xff;
    uVar3 = func_00556A90(*piVar5);
    if ((uVar3 != 0) &&
       ((iVar11 = func_0052FBA0(*DAT_00350730 + 0x3dbbc,uVar3), iVar11 != 0 &&
        ((((iVar11 = func_00588BE4(iVar11), iVar11 == *DAT_00350734 || (iVar11 == *DAT_00350738)) ||
          (iVar11 == *DAT_0035073c)) ||
         (bVar12 = iVar11 == *DAT_00350740 && bVar12, iVar11 == *DAT_00350740)))))) {
      bVar12 = true;
    }
  }
  fVar22 = in_stack_0000001c * in_stack_0000001c + in_stack_00000024 * in_stack_00000024;
  if (bVar12) {
LAB_003505b8:
    fVar22 = SQRT(fVar14) * DAT_00350748;
    if (ALBW_AS_F32(uVar23) < SQRT(fVar14) * DAT_00350748) {
      fVar22 = ALBW_AS_F32(uVar23);
    }
    fVar22 = *(float *)(unaff_r4 + 0x108) + fVar22;
    fVar14 = ALBW_AS_F32(in_d9);
    uVar3 = in_fpscr & 0xfffffff | (uint)(fVar22 < fVar14) << 0x1f |
            (uint)(fVar22 == fVar14) << 0x1e;
    in_fpscr = uVar3 | (uint)(NAN(fVar22) || NAN(fVar14)) << 0x1c;
    bVar2 = (byte)(uVar3 >> 0x18);
    if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
      fVar22 = fVar14;
    }
    *(float *)(unaff_r4 + 0x108) = fVar22;
  }
  else {
    uVar3 = in_fpscr & 0xfffffff | (uint)(fVar22 < fVar16) << 0x1f |
            (uint)(fVar22 == fVar16) << 0x1e;
    in_fpscr = uVar3 | (uint)(NAN(fVar22) || NAN(fVar16)) << 0x1c;
    bVar2 = (byte)(uVar3 >> 0x18);
    if ((!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) &&
       (bVar2 = func_00588F20(*DAT_0034fde8,*(undefined4 *)(*piVar5 + 0x1c),DAT_00350744),
       bVar2 != 0)) {
      iVar11 = func_004904CC(in_stack_0000001c,in_stack_00000024);
      if ((bVar2 & 4) == 0) {
        if ((bVar2 & 8) != 0) {
          in_stack_0000003c = ALBW_AS_F32(((*(int *)(unaff_r4 + 0xc) + 0x40000000) - iVar11));
          uVar3 = func_0058E2B8((int *)&stack0x0000003c);
          goto joined_r0x00350554;
        }
      }
      else {
        in_stack_0000003c = ALBW_AS_F32(((*(int *)(unaff_r4 + 0xc) + -0x40000000) - iVar11));
        uVar3 = func_0058E2B8((int *)&stack0x0000003c);
joined_r0x00350554:
        if (uVar3 < 0x40000000) goto LAB_003505b8;
      }
      if ((bVar2 & 2) == 0) {
        if ((bVar2 & 1) == 0) goto LAB_003505ec;
        in_stack_00000018 = ALBW_AS_F32(((*(int *)(unaff_r4 + 0xc) + -0x80000000) - iVar11));
        uVar3 = func_0058E2B8((int *)&stack0x00000018);
      }
      else {
        in_stack_00000018 = ALBW_AS_F32((*(int *)(unaff_r4 + 0xc) - iVar11));
        uVar3 = func_0058E2B8((int *)&stack0x00000018);
      }
      if (uVar3 < 0x40000000) goto LAB_003505b8;
    }
LAB_003505ec:
    *(float *)(unaff_r4 + 0x108) = *(float *)(unaff_r4 + 0x108) * DAT_0035074c;
  }
LAB_003505fc:
  uVar25 = CONCAT44(fVar16,DAT_00350750);
  iStack00000100 = 1;
  do {
    pfVar4 = *(float **)(unaff_r8 + 4);
    fStack0000000c = *pfVar4;
    fStack00000010 = pfVar4[1];
    fVar16 = pfVar4[2];
    bVar12 = *(char *)(unaff_r4 + 0x20) != '\0';
    cVar1 = '\0';
    if (bVar12) {
      cVar1 = *(char *)(unaff_r6 + 0x37);
    }
    fStack00000014 = fVar16;
    if (bVar12 && cVar1 != '\0') {
      func_0036FA1C((undefined4 *)(unaff_r4 + 0x44),0);
    }
    func_005581D4((float *)(unaff_r4 + 0x44),&stack0x0000001c,
                  (uint)(*(char *)(unaff_r4 + 0x20) == '\0'),(byte *)0x0);
    func_00115C54(&stack0x0000000c,&stack0x0000000c,&stack0x0000001c);
    if (*(char *)(unaff_r4 + 0x20) == '\0') {
      fVar14 = *(float *)(unaff_r4 + 0x24);
    }
    else {
      fVar14 = *(float *)(unaff_r4 + 0x1c4);
    }
    fStack00000010 = fStack00000010 + fVar14;
    if ((*(char *)(unaff_r4 + 0x20) == '\0') && (*(int *)(unaff_r4 + 0x264) != 0)) {
      piVar5 = (int *)func_00541190(*(int *)(unaff_r4 + 0x264));
      iVar10 = *DAT_0034fdf4;
      iVar11 = *(int *)(unaff_r4 + 0x264);
      pfVar4 = *(float **)(iVar10 + 0x1c);
      fVar14 = *pfVar4 - *(float *)(iVar11 + 0x3d0);
      fVar16 = pfVar4[2] - *(float *)(iVar11 + 0x3d8);
      fVar16 = SQRT(fVar14 * fVar14 + fVar16 * fVar16);
      uVar3 = in_fpscr & 0xfffffff;
      if (pfVar4[1] <= ALBW_AS_F32(piVar5[0xd])) {
        *(undefined1 *)(unaff_r4 + 0x250) = 0;
      }
      else {
        *(bool *)(unaff_r4 + 0x250) = ALBW_AS_F32(piVar5[7]) <= fVar16;
      }
      uVar6 = uVar3;
      if (*(char *)(unaff_r7 + 0x50) != '\0') {
        fVar14 = ALBW_AS_F32(piVar5[7]);
        fVar22 = ALBW_AS_F32(piVar5[8]);
        uVar6 = uVar3 | (uint)(fVar22 < fVar14) << 0x1f;
        fVar20 = ALBW_AS_F32(in_d9);
        if (fVar22 == fVar14 || SUB41(uVar6 >> 0x1f,0) != (NAN(fVar22) || NAN(fVar14))) {
          *(float *)(unaff_r4 + 0x254) = fVar20;
        }
        else {
          fVar16 = (fVar16 - fVar14) / (fVar22 - fVar14);
          uVar6 = uVar3 | (uint)(fVar16 < fVar20) << 0x1f;
          if (fVar16 != fVar20 && SUB41(uVar6 >> 0x1f,0) == (NAN(fVar16) || NAN(fVar20))) {
            fVar16 = fVar20;
          }
          *(float *)(unaff_r4 + 0x254) = fVar16;
        }
      }
      fStack0000000c = *(float *)(iVar11 + 0x3d0);
      fStack00000014 = *(float *)(iVar11 + 0x3d8);
      fVar16 = ALBW_AS_F32(piVar5[0xd]);
      fVar14 = ALBW_AS_F32(piVar5[2]);
      fVar22 = *(float *)(*(int *)(iVar10 + 0x1c) + 4);
      in_fpscr = uVar6 & 0xfffffff | (uint)(fVar22 == fVar16) << 0x1e |
                 (uint)(fVar16 <= fVar22) << 0x1d;
      bVar2 = (byte)(in_fpscr >> 0x18);
      if (!(bool)(bVar2 >> 5 & 1) || (bool)(bVar2 >> 6)) {
        fVar14 = ALBW_AS_F32(piVar5[3]);
      }
      else {
        fVar20 = fVar16 + ALBW_AS_F32(piVar5[0xe]);
        uVar3 = uVar6 & 0xfffffff | (uint)(fVar20 < fVar22) << 0x1f;
        in_fpscr = uVar3 | (uint)(NAN(fVar20) || NAN(fVar22)) << 0x1c;
        if ((byte)(uVar3 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1)) {
          fVar22 = fVar22 - fVar16;
          fVar16 = ALBW_AS_F32(piVar5[3]);
          fVar14 = fVar16 + (fVar14 - fVar16) * (fVar22 / ALBW_AS_F32(piVar5[0xe]));
        }
      }
      fStack00000010 = fVar14 + fStack00000010;
      func_00115C70(&stack0x00000104,(float *)(*(int *)(unaff_r4 + 0x264) + 0x3d0),
                    *(float **)(unaff_r8 + 4));
      if (*(char *)(unaff_r7 + 0x50) != '\0') {
        iVar11 = func_004904CC(in_stack_00000104,in_stack_0000010c);
        *(int *)(unaff_r4 + 600) = iVar11;
      }
      func_00491E80((float *)&stack0x000000a0,0,*(uint *)(unaff_r4 + 600),0);
      in_stack_00000064 = piVar5[1];
      in_stack_00000038 = ALBW_AS_F32(in_d9);
      in_stack_0000003c = ALBW_AS_F32(((ulonglong)uVar25 >> 0x20));
      in_stack_00000040 = in_stack_0000003c;
      in_stack_00000044 = in_stack_0000003c;
      in_stack_00000048 = in_stack_0000003c;
      in_stack_0000004c = in_stack_00000038;
      in_stack_00000050 = in_stack_0000003c;
      in_stack_00000054 = in_stack_0000003c;
      in_stack_00000058 = in_stack_0000003c;
      in_stack_0000005c = in_stack_0000003c;
      in_stack_00000060 = in_stack_00000038;
      func_00491E80(&stack0x00000068,-*piVar5,0,0);
      func_001157FC(&stack0x00000068,&stack0x00000068,&stack0x00000038);
      func_001157FC((float *)&stack0x000000d0,(float *)&stack0x000000a0,&stack0x00000068);
      in_stack_00000110 = in_stack_000000dc;
      in_stack_00000114 = in_stack_000000ec;
      in_stack_00000118 = in_stack_000000fc;
      func_00115C54((float *)(unaff_r4 + 0x23c),&stack0x0000000c,&stack0x00000110);
      *(undefined1 *)(unaff_r4 + 0x248) = 1;
      *(undefined1 *)(unaff_r4 + 0x249) = 0;
      *(undefined1 *)(unaff_r4 + 0x24a) = 0;
    }
    else {
      *(int *)(unaff_r4 + 0x25c) = (int)((ulonglong)uVar25 >> 0x20);
    }
    if (((*(char *)(unaff_r4 + 0x20) == '\0') &&
        (iVar11 = *(int *)(unaff_r4 + 0x90), *(char *)(iVar11 + 0x24) != '\0')) &&
       ((*(char *)(unaff_r6 + 0x33) == '\0' || (*(char *)(*DAT_0034fde8 + 0x95) == '\0')))) {
      fVar14 = func_005548EC(unaff_r4,1);
      fVar16 = *(float *)(iVar11 + 0x18) + *(float *)(unaff_r4 + 0x104);
      in_stack_00000008 = (fVar14 + fVar16) - fStack00000010;
      fVar14 = ALBW_AS_F32(((ulonglong)uVar25 >> 0x20));
      uVar3 = in_fpscr & 0xfffffff | (uint)(in_stack_00000008 < fVar14) << 0x1f |
              (uint)(in_stack_00000008 == fVar14) << 0x1e;
      in_fpscr = uVar3 | (uint)(NAN(in_stack_00000008) || NAN(fVar14)) << 0x1c;
      bVar2 = (byte)(uVar3 >> 0x18);
      if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
        in_stack_00000008 = -in_stack_00000008;
      }
      iVar11 = *DAT_0034fde8;
      cVar1 = *(char *)(iVar11 + 0x88);
      bVar12 = cVar1 == '\0';
      if (bVar12) {
        cVar1 = *(char *)(iVar11 + 0x94);
      }
      bVar13 = bVar12 && cVar1 == '\0';
      if (bVar12 && cVar1 == '\0') {
        bVar13 = *(char *)(iVar11 + 0x95) == '\0';
      }
      if (!bVar13) {
        func_0012159C(*(int *)(iVar11 + 0x18));
      }
LAB_00350a40:
      if (*(char *)(unaff_r4 + 0x20) == '\0') {
LAB_00350a4c:
        *(float *)(unaff_r4 + 0x1bc) = in_stack_00000008;
      }
    }
    else {
      in_stack_00000008 = *(float *)(unaff_r4 + 0xa0);
      if (*(char *)(unaff_r4 + 0x20) == '\0') {
        iVar11 = *(int *)(unaff_r4 + 0x90);
        if ((*(char *)(iVar11 + 0x24) != '\0') && (-1 < *(int *)(unaff_r4 + 0x110))) {
          fVar14 = (float)VectorSignedToFloat(*(int *)(unaff_r4 + 0x110),
                                              (byte)(in_fpscr >> 0x15) & 3);
          fVar14 = fVar14 / *(float *)(unaff_r4 + 0x120);
          if ((int)ALBW_AS_U32(fVar14) < 0x3f800000) {
            fVar22 = func_005548EC(unaff_r4,1);
            fVar16 = *(float *)(iVar11 + 0x18) + *(float *)(unaff_r4 + 0x104);
            fVar22 = (fVar22 + fVar16) - fStack00000010;
            fVar20 = ALBW_AS_F32(((ulonglong)uVar25 >> 0x20));
            uVar3 = in_fpscr & 0xfffffff | (uint)(fVar22 < fVar20) << 0x1f |
                    (uint)(fVar22 == fVar20) << 0x1e;
            in_fpscr = uVar3 | (uint)(NAN(fVar22) || NAN(fVar20)) << 0x1c;
            bVar2 = (byte)(uVar3 >> 0x18);
            if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
              fVar22 = -fVar22;
            }
            in_stack_00000008 = fVar22 + (in_stack_00000008 - fVar22) * fVar14;
            goto LAB_00350a40;
          }
        }
        goto LAB_00350a4c;
      }
    }
    if (*(int *)(unaff_r4 + 0x264) == 0) {
      *(int *)(unaff_r4 + 0x24c) = (int)((ulonglong)uVar25 >> 0x20);
    }
    else {
      iVar11 = func_00541190(*(int *)(unaff_r4 + 0x264));
      fVar22 = *(float *)(unaff_r4 + 0x24c);
      fVar14 = *(float *)(iVar11 + 4);
      uVar3 = in_fpscr & 0xfffffff;
      if (fVar22 == ALBW_AS_F32(((ulonglong)uVar25 >> 0x20))) {
        uVar6 = uVar3 | (uint)(in_stack_00000008 < fVar14) << 0x1f |
                (uint)(in_stack_00000008 == fVar14) << 0x1e |
                (uint)(fVar14 <= in_stack_00000008) << 0x1d;
        in_fpscr = uVar6 | (uint)(NAN(in_stack_00000008) || NAN(fVar14)) << 0x1c;
        bVar2 = (byte)(uVar6 >> 0x18);
        fVar22 = fVar14;
        if ((bool)(bVar2 >> 5 & 1)) {
          fVar22 = in_stack_00000008;
          if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
            fVar16 = in_stack_00000008 - ALBW_AS_F32(uVar25);
            in_fpscr = uVar3 | (uint)(fVar16 == fVar14) << 0x1e | (uint)(fVar14 <= fVar16) << 0x1d;
            bVar2 = (byte)(in_fpscr >> 0x18);
            fVar22 = fVar14;
            if (((bool)(bVar2 >> 5 & 1) && !(bool)(bVar2 >> 6)) &&
               (uVar3 = uVar3 | (uint)(fVar16 < in_stack_00000008) << 0x1f |
                        (uint)(fVar16 == in_stack_00000008) << 0x1e,
               in_fpscr = uVar3 | (uint)(NAN(fVar16) || NAN(in_stack_00000008)) << 0x1c,
               bVar2 = (byte)(uVar3 >> 0x18),
               (bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)))
            goto LAB_00350ae0;
          }
        }
        else {
          fVar16 = in_stack_00000008 + ALBW_AS_F32(uVar25);
          in_fpscr = uVar3 | (uint)(fVar14 == fVar16) << 0x1e | (uint)(fVar16 <= fVar14) << 0x1d;
          bVar2 = (byte)(in_fpscr >> 0x18);
          if (((bool)(bVar2 >> 5 & 1) && !(bool)(bVar2 >> 6)) &&
             (uVar3 = uVar3 | (uint)(in_stack_00000008 < fVar16) << 0x1f |
                      (uint)(in_stack_00000008 == fVar16) << 0x1e,
             in_fpscr = uVar3 | (uint)(NAN(in_stack_00000008) || NAN(fVar16)) << 0x1c,
             bVar2 = (byte)(uVar3 >> 0x18),
             (bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1))) {
LAB_00350ae0:
            fVar22 = fVar16;
          }
        }
        in_stack_00000008 = fVar22;
        *(float *)(unaff_r4 + 0x24c) = in_stack_00000008;
      }
      else {
        uVar6 = uVar3 | (uint)(fVar22 < fVar14) << 0x1f | (uint)(fVar22 == fVar14) << 0x1e |
                (uint)(fVar14 <= fVar22) << 0x1d;
        in_fpscr = uVar6 | (uint)(NAN(fVar22) || NAN(fVar14)) << 0x1c;
        fVar16 = *(float *)(iVar11 + 0x10);
        bVar2 = (byte)(uVar6 >> 0x18);
        if ((bool)(bVar2 >> 5 & 1)) {
          if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
            fVar16 = fVar22 - fVar16;
            in_fpscr = uVar3 | (uint)(fVar16 == fVar14) << 0x1e | (uint)(fVar14 <= fVar16) << 0x1d;
            bVar2 = (byte)(in_fpscr >> 0x18);
            if ((!(bool)(bVar2 >> 5 & 1) || (bool)(bVar2 >> 6)) ||
               (uVar3 = uVar3 | (uint)(fVar16 < fVar22) << 0x1f | (uint)(fVar16 == fVar22) << 0x1e,
               in_fpscr = uVar3 | (uint)(NAN(fVar16) || NAN(fVar22)) << 0x1c,
               bVar2 = (byte)(uVar3 >> 0x18),
               !(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)))
            goto LAB_00350b44;
            goto LAB_00350b4c;
          }
        }
        else {
          fVar16 = fVar22 + fVar16;
          in_fpscr = uVar3 | (uint)(fVar14 == fVar16) << 0x1e | (uint)(fVar16 <= fVar14) << 0x1d;
          bVar2 = (byte)(in_fpscr >> 0x18);
          if ((!(bool)(bVar2 >> 5 & 1) || (bool)(bVar2 >> 6)) ||
             (uVar3 = uVar3 | (uint)(fVar22 < fVar16) << 0x1f | (uint)(fVar22 == fVar16) << 0x1e,
             in_fpscr = uVar3 | (uint)(NAN(fVar22) || NAN(fVar16)) << 0x1c,
             bVar2 = (byte)(uVar3 >> 0x18),
             !(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1))) {
LAB_00350b44:
            *(float *)(unaff_r4 + 0x24c) = fVar14;
          }
          else {
LAB_00350b4c:
            *(float *)(unaff_r4 + 0x24c) = fVar16;
          }
        }
        in_stack_00000008 = *(float *)(unaff_r4 + 0x24c);
      }
    }
    fVar14 = ALBW_AS_F32(in_d11);
    uVar8 = (undefined4)uVar23;
    if (*(char *)(unaff_r6 + 0x34) == '\0') goto LAB_00350c40;
    fVar22 = *(float *)(unaff_r4 + 0xb8);
    fVar20 = *(float *)(unaff_r4 + 0xc4);
    uVar3 = in_fpscr & 0xfffffff;
    uVar6 = uVar3 | (uint)(fVar22 < fVar20) << 0x1f | (uint)(fVar22 == fVar20) << 0x1e;
    in_fpscr = uVar6 | (uint)(NAN(fVar22) || NAN(fVar20)) << 0x1c;
    bVar2 = (byte)(uVar6 >> 0x18);
    if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
LAB_00350c24:
      func_002E15CC((float *)(unaff_r4 + 0xb8),&stack0x0000000c,&stack0x00000008,1,1,0,fVar22,fVar20
                    ,fVar16);
      goto LAB_00350c40;
    }
    fVar22 = *(float *)(unaff_r4 + 0xbc);
    fVar20 = *(float *)(unaff_r4 + 200);
    uVar6 = uVar3 | (uint)(fVar22 < fVar20) << 0x1f | (uint)(fVar22 == fVar20) << 0x1e;
    in_fpscr = uVar6 | (uint)(NAN(fVar22) || NAN(fVar20)) << 0x1c;
    bVar2 = (byte)(uVar6 >> 0x18);
    if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) goto LAB_00350c24;
    fVar22 = *(float *)(unaff_r4 + 0xc0);
    fVar20 = *(float *)(unaff_r4 + 0xcc);
    uVar3 = uVar3 | (uint)(fVar22 < fVar20) << 0x1f | (uint)(fVar22 == fVar20) << 0x1e;
    in_fpscr = uVar3 | (uint)(NAN(fVar22) || NAN(fVar20)) << 0x1c;
    bVar2 = (byte)(uVar3 >> 0x18);
    if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) goto LAB_00350c24;
    func_002E15CC((float *)(unaff_r4 + 0xb8),&stack0x0000000c,&stack0x00000008,iStack00000100,0,0,
                  fVar22,fVar20,fVar16);
    fVar14 = ALBW_AS_F32(in_d11);
    uVar8 = (undefined4)uVar23;
    if ((*(char *)(unaff_r4 + 0x20) != '\0') || (iStack00000100 == 0)) break;
    func_004D7FBC(&stack0x00000018,&stack0x0000000c,*(uint *)(unaff_r4 + 0x30),
                  *(uint *)(unaff_r4 + 0x38),in_stack_00000008);
    fVar14 = func_00542350(unaff_r4 + 0x98,0);
    iVar11 = func_0036F874((float *)(unaff_r4 + 0x44),&stack0x0000000c,&stack0x00000018,fVar14);
    fVar14 = ALBW_AS_F32(in_d11);
    uVar8 = (undefined4)uVar23;
    if (iVar11 != 0) break;
    iStack00000100 = 0;
  } while( true );
  *(undefined4 *)(unaff_r4 + 0xd4) = 0;
  *(int *)(unaff_r4 + 0xd8) = (int)((ulonglong)uVar25 >> 0x20);
LAB_00350c40:
  fVar22 = ALBW_AS_F32(((ulonglong)uVar25 >> 0x20));
  if ((*(char *)(unaff_r4 + 0x20) == '\0') &&
     (((int)((uint)*(ushort *)(unaff_r8 + 0x1c) << 0x1d) < 0 ||
      (func_003517A4(unaff_r4,&stack0x0000000c,*(undefined4 *)(unaff_r8 + 4),(float *)0x0,
                     in_stack_00000008), *(char *)(unaff_r4 + 0x20) == '\0')))) {
    in_stack_00000018 = fStack0000000c;
    in_stack_0000001c = fStack00000010;
    in_stack_00000020 = fStack00000014;
    in_stack_00000038 = *DAT_003514d4;
    in_stack_0000003c = DAT_003514d4[1];
    in_stack_00000040 = DAT_003514d4[2];
    if (*(int *)(unaff_r4 + 0x264) == 0) {
      func_002E1424((float *)(unaff_r4 + 0xdc),&stack0x0000000c);
    }
    if (*(char *)(unaff_r6 + 0x34) != '\0') {
      fVar20 = *(float *)(unaff_r4 + 0xdc);
      fVar15 = *(float *)(unaff_r4 + 0xe8);
      uVar3 = in_fpscr & 0xfffffff;
      uVar6 = uVar3 | (uint)(fVar20 < fVar15) << 0x1f | (uint)(fVar20 == fVar15) << 0x1e;
      in_fpscr = uVar6 | (uint)(NAN(fVar20) || NAN(fVar15)) << 0x1c;
      bVar2 = (byte)(uVar6 >> 0x18);
      if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
        fVar20 = *(float *)(unaff_r4 + 0xe0);
        fVar15 = *(float *)(unaff_r4 + 0xec);
        uVar6 = uVar3 | (uint)(fVar20 < fVar15) << 0x1f | (uint)(fVar20 == fVar15) << 0x1e;
        in_fpscr = uVar6 | (uint)(NAN(fVar20) || NAN(fVar15)) << 0x1c;
        bVar2 = (byte)(uVar6 >> 0x18);
        if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
          fVar20 = *(float *)(unaff_r4 + 0xe4);
          fVar15 = *(float *)(unaff_r4 + 0xf0);
          uVar3 = uVar3 | (uint)(fVar20 < fVar15) << 0x1f | (uint)(fVar20 == fVar15) << 0x1e;
          in_fpscr = uVar3 | (uint)(NAN(fVar20) || NAN(fVar15)) << 0x1c;
          bVar2 = (byte)(uVar3 >> 0x18);
          if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
            func_002E15CC((float *)(unaff_r4 + 0xdc),&stack0x0000000c,&stack0x00000008,0,0,1,fVar20,
                          fVar15,fVar16);
            func_00115C70(&stack0x00000038,&stack0x0000000c,&stack0x00000018);
            func_004D7FBC(&stack0x00000044,&stack0x0000000c,*(uint *)(unaff_r4 + 0x30),
                          *(uint *)(unaff_r4 + 0x38),in_stack_00000008);
            fVar16 = func_00542350(unaff_r4 + 0x98,0);
            func_002E12C0(unaff_r4 + 0xdc,&stack0x00000050,&stack0x0000000c,&stack0x00000044,
                          unaff_r4 + 0x44,fVar16);
            func_00115C54(&stack0x0000000c,&stack0x0000000c,&stack0x00000050);
            *(undefined4 *)(unaff_r4 + 0xf8) = 0;
            *(float *)(unaff_r4 + 0xfc) = fVar22;
            goto LAB_00350da4;
          }
        }
      }
      func_002E15CC((float *)(unaff_r4 + 0xdc),&stack0x0000000c,&stack0x00000008,1,1,0,fVar20,fVar15
                    ,fVar16);
    }
LAB_00350da4:
    fVar16 = *(float *)(unaff_r4 + 0xdc);
    fVar20 = *(float *)(unaff_r4 + 0xe8);
    uVar3 = in_fpscr & 0xfffffff;
    uVar6 = uVar3 | (uint)(fVar16 < fVar20) << 0x1f | (uint)(fVar16 == fVar20) << 0x1e;
    in_fpscr = uVar6 | (uint)(NAN(fVar16) || NAN(fVar20)) << 0x1c;
    bVar2 = (byte)(uVar6 >> 0x18);
    if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) goto LAB_00350dec;
    fVar16 = *(float *)(unaff_r4 + 0xe0);
    fVar20 = *(float *)(unaff_r4 + 0xec);
    uVar6 = uVar3 | (uint)(fVar16 < fVar20) << 0x1f | (uint)(fVar16 == fVar20) << 0x1e;
    in_fpscr = uVar6 | (uint)(NAN(fVar16) || NAN(fVar20)) << 0x1c;
    bVar2 = (byte)(uVar6 >> 0x18);
    if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) goto LAB_00350dec;
    fVar16 = *(float *)(unaff_r4 + 0xe4);
    fVar20 = *(float *)(unaff_r4 + 0xf0);
    uVar3 = uVar3 | (uint)(fVar16 < fVar20) << 0x1f | (uint)(fVar16 == fVar20) << 0x1e;
    in_fpscr = uVar3 | (uint)(NAN(fVar16) || NAN(fVar20)) << 0x1c;
    bVar2 = (byte)(uVar3 >> 0x18);
    if ((!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) ||
       ((*(ushort *)(unaff_r8 + 0x1c) & 4) != 0)) goto LAB_00350dec;
    func_003517A4(unaff_r4,&stack0x0000000c,*(undefined4 *)(unaff_r8 + 4),&stack0x00000018,
                  in_stack_00000008);
    fVar16 = SQRT(in_stack_00000038 * in_stack_00000038 + in_stack_0000003c * in_stack_0000003c +
                  in_stack_00000040 * in_stack_00000040);
    if ((*(char *)(unaff_r4 + 0x22) == '\0') ||
       (in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar16 == fVar22) << 0x1e,
       !SUB41(in_fpscr >> 0x1e,0))) {
      *(float *)(unaff_r4 + 0x2cc) = fVar16;
    }
    else if (DAT_003514e4 <
             (int)ALBW_AS_U32(SQRT(*(float *)(unaff_r4 + 0x290) * *(float *)(unaff_r4 + 0x290) +
                       *(float *)(unaff_r4 + 0x294) * *(float *)(unaff_r4 + 0x294) +
                       *(float *)(unaff_r4 + 0x298) * *(float *)(unaff_r4 + 0x298)))) {
      *(undefined4 *)(unaff_r4 + 0x108) = *(undefined4 *)(unaff_r4 + 0x10c);
    }
    if ((int)*(float *)(unaff_r4 + 0x108) < 0x3f800000) {
      uVar3 = in_fpscr & 0xfffffff;
      in_fpscr = uVar3 | (uint)(*(float *)(unaff_r4 + 0x2cc) <= fVar22) << 0x1d;
      if (!SUB41(in_fpscr >> 0x1d,0)) {
        fVar16 = SQRT((fStack0000000c - in_stack_00000018) * (fStack0000000c - in_stack_00000018) +
                      (fStack00000010 - in_stack_0000001c) * (fStack00000010 - in_stack_0000001c) +
                      (fStack00000014 - in_stack_00000020) * (fStack00000014 - in_stack_00000020)) /
                 *(float *)(unaff_r4 + 0x2cc);
        in_fpscr = uVar3 | (uint)(fVar16 <= *(float *)(unaff_r4 + 0x108)) << 0x1d;
        if (!SUB41(in_fpscr >> 0x1d,0)) {
          fVar20 = fVar16;
          if (0x3f800000 < (int)ALBW_AS_U32(fVar16)) {
            fVar20 = ALBW_AS_F32(in_d9);
          }
          *(float *)(unaff_r4 + 0x108) = fVar16;
          *(float *)(unaff_r4 + 0x108) = fVar20;
        }
      }
    }
  }
  else {
LAB_00350dec:
    *(float *)(unaff_r4 + 0x290) = fVar22;
    *(float *)(unaff_r4 + 0x294) = fVar22;
    *(float *)(unaff_r4 + 0x298) = fVar22;
  }
  *(undefined1 *)(unaff_r4 + 0x134) = 1;
  if (*(char *)(unaff_r6 + 100) == '\0') {
    uVar3 = (uint)*unaff_r8;
  }
  else {
    uVar3 = 7;
  }
  pfVar4 = (float *)(DAT_003514d8 + uVar3 * 0xc);
  fVar20 = ALBW_AS_F32(in_d9);
  uVar3 = in_fpscr & 0xfffffff | 0x40000000;
  bVar12 = SUB41(uVar3 >> 0x1e,0);
  fVar16 = (fVar20 - SQRT(fVar20 - *pfVar4)) * *(float *)(unaff_r4 + 0x108);
  if (!bVar12) {
    fVar16 = fVar20;
  }
  uVar25 = CONCAT44(fVar22,fVar16);
  if ((((bVar12) && ((int)ALBW_AS_U32(fVar16) < DAT_003514dc)) && (*(char *)(unaff_r6 + 0x33) != '\0')) &&
     ((-1 < *(int *)(unaff_r4 + 0x110) &&
      (*(int *)(*DAT_003514e0 + 0x8c) != *(int *)(unaff_r4 + 0x124))))) {
    fVar16 = (float)VectorSignedToFloat(*(int *)(unaff_r4 + 0x110),(byte)(uVar3 >> 0x15) & 3);
    uVar3 = in_fpscr & 0xfffffff | (uint)(*(float *)(unaff_r4 + 0x120) == fVar16) << 0x1e |
            (uint)(fVar16 <= *(float *)(unaff_r4 + 0x120)) << 0x1d;
    bVar2 = (byte)(uVar3 >> 0x18);
    if ((bool)(bVar2 >> 5 & 1) && !(bool)(bVar2 >> 6)) {
      uVar25 = CONCAT44(fVar22,uVar8);
    }
  }
  fVar22 = ALBW_AS_F32(((ulonglong)in_d9 >> 0x20));
  fVar16 = unaff_r5[3];
  uVar24 = *(undefined8 *)(unaff_r5 + 4);
  if (((*(char *)(unaff_r7 + 0x2c) == '\0') || (*(char *)(unaff_r7 + 0x2d) != '\0')) &&
     (((*(char *)(unaff_r4 + 0x20) == '\0' ||
       (((*(char *)(unaff_r6 + 100) != '\0' || (*(short *)(unaff_r7 + 0x9e) < 0)) ||
        (0 < *(short *)(unaff_r7 + 0x9e))))) || (*(char *)(unaff_r7 + 0xb8) == '\0')))) {
    if (in_stack_0000009c == 0) {
      func_004D838C(unaff_r5 + 3,&stack0x0000000c,ALBW_AS_F32(uVar25),pfVar4[1],pfVar4[2]);
    }
    else {
      func_004D838C(unaff_r5 + 3,(float *)(unaff_r4 + 0x14c),ALBW_AS_F32(uVar25),pfVar4[1],pfVar4[2]);
    }
  }
  fVar20 = *(float *)(unaff_r4 + 0x1c);
  fVar15 = ALBW_AS_F32(((ulonglong)uVar25 >> 0x20));
  uVar6 = uVar3 & 0xfffffff | (uint)(fVar20 < fVar15) << 0x1f | (uint)(fVar20 == fVar15) << 0x1e;
  uVar3 = uVar6 | (uint)(NAN(fVar20) || NAN(fVar15)) << 0x1c;
  bVar2 = (byte)(uVar6 >> 0x18);
  if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(uVar3 >> 0x1c) & 1)) {
    fVar15 = unaff_r5[3];
    unaff_r5[3] = fVar15 + (fVar16 - fVar15) * fVar20;
    unaff_r5[4] = unaff_r5[4] + (ALBW_AS_F32(uVar24) - unaff_r5[4]) * fVar20;
    unaff_r5[5] = unaff_r5[5] + (ALBW_AS_F32(((ulonglong)uVar24 >> 0x20)) - unaff_r5[5]) * fVar20;
  }
  if (*(char *)(unaff_r6 + 100) == '\0') {
    func_0034DF14(unaff_r4,unaff_r5,(int)unaff_r8,unaff_r11,in_stack_00000008);
    if (*(char *)(unaff_r4 + 0x20) == '\0') {
      fVar16 = *(float *)(unaff_r4 + 0xdc);
      fVar20 = *(float *)(unaff_r4 + 0xe8);
      uVar6 = uVar3 & 0xfffffff;
      uVar7 = uVar6 | (uint)(fVar16 < fVar20) << 0x1f | (uint)(fVar16 == fVar20) << 0x1e;
      uVar3 = uVar7 | (uint)(NAN(fVar16) || NAN(fVar20)) << 0x1c;
      bVar2 = (byte)(uVar7 >> 0x18);
      if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(uVar3 >> 0x1c) & 1)) {
        fVar16 = *(float *)(unaff_r4 + 0xe0);
        fVar20 = *(float *)(unaff_r4 + 0xec);
        uVar7 = uVar6 | (uint)(fVar16 < fVar20) << 0x1f | (uint)(fVar16 == fVar20) << 0x1e;
        uVar3 = uVar7 | (uint)(NAN(fVar16) || NAN(fVar20)) << 0x1c;
        bVar2 = (byte)(uVar7 >> 0x18);
        if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(uVar3 >> 0x1c) & 1)) {
          fVar16 = *(float *)(unaff_r4 + 0xe4);
          fVar20 = *(float *)(unaff_r4 + 0xf0);
          uVar7 = uVar6 | (uint)(fVar16 < fVar20) << 0x1f | (uint)(fVar16 == fVar20) << 0x1e;
          uVar3 = uVar7 | (uint)(NAN(fVar16) || NAN(fVar20)) << 0x1c;
          bVar2 = (byte)(uVar7 >> 0x18);
          if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(uVar3 >> 0x1c) & 1)) {
            fVar16 = ALBW_AS_F32(((ulonglong)uVar25 >> 0x20));
            uVar3 = uVar6 | (uint)(*(float *)(unaff_r4 + 0x290) == fVar16) << 0x1e;
            bVar12 = false;
            if (SUB41(uVar3 >> 0x1e,0)) {
              uVar3 = uVar6 | (uint)(*(float *)(unaff_r4 + 0x294) == fVar16) << 0x1e;
              bVar12 = SUB41(uVar3 >> 0x1e,0);
            }
            bVar13 = false;
            if (bVar12) {
              uVar3 = uVar3 & 0xfffffff | (uint)(*(float *)(unaff_r4 + 0x298) == fVar16) << 0x1e;
              bVar13 = SUB41(uVar3 >> 0x1e,0);
            }
            if ((!bVar13) &&
               ((bVar2 = *unaff_r8, bVar2 == 0 || bVar2 == 4 || (bVar2 == 5 || bVar2 == 6)))) {
              in_stack_0000001c = fVar16;
              in_stack_00000020 = fVar16;
              in_stack_00000024 = fVar16;
              bVar12 = func_00581DF8(*DAT_003514f4,&stack0x0000001c,unaff_r5);
              if (bVar12) {
                uVar6 = uVar3 & 0xfffffff;
                uVar3 = uVar6 | (uint)(in_stack_0000001c == fVar16) << 0x1e;
                bVar12 = false;
                if (SUB41(uVar3 >> 0x1e,0)) {
                  uVar3 = uVar6 | (uint)(in_stack_00000020 == fVar16) << 0x1e;
                  bVar12 = SUB41(uVar3 >> 0x1e,0);
                }
                bVar13 = false;
                if (bVar12) {
                  uVar3 = uVar3 & 0xfffffff | (uint)(in_stack_00000024 == fVar16) << 0x1e;
                  bVar13 = SUB41(uVar3 >> 0x1e,0);
                }
                if (!bVar13) {
                  func_00115C54(unaff_r5,unaff_r5,&stack0x0000001c);
                  func_00115C54(unaff_r5 + 3,unaff_r5 + 3,&stack0x0000001c);
                }
              }
              goto LAB_003510bc;
            }
          }
        }
      }
      goto LAB_003511a8;
    }
    if (*(char *)(unaff_r7 + 0x2a) == '\0') {
      func_0036F6C8((float *)(unaff_r4 + 0x44),unaff_r5 + 3,*(float **)(unaff_r8 + 4));
      goto LAB_003510bc;
    }
LAB_003512c4:
    if (((*(char *)(unaff_r6 + 100) == '\0') && (-1 < *(short *)(unaff_r7 + 0x9e))) &&
       (*(short *)(unaff_r7 + 0x9e) < 1)) {
      if (*(char *)(unaff_r7 + 0xb8) == '\0') {
        *(undefined4 *)(unaff_r4 + 0x2b0) = 0;
        *(undefined4 *)(unaff_r4 + 0x2b4) = 0;
      }
      else {
        func_00115C70(&stack0x00000068,*(float **)(*DAT_003514f0 + 0x1c),(float *)(unaff_r4 + 0x2a4)
                     );
        func_00115C70(&stack0x00000074,(float *)(unaff_r4 + 700),(float *)(unaff_r4 + 0x2a4));
        iVar11 = func_004904CC(in_stack_00000068,in_stack_00000070);
        iVar10 = func_004904CC(in_stack_00000074,in_stack_0000007c);
        in_stack_00000018 = ALBW_AS_F32((iVar11 - iVar10));
        in_stack_00000024 = in_stack_00000018;
        uVar6 = func_0058E2B8((int *)&stack0x00000024);
        uVar7 = *(uint *)(DAT_003514f8 + *(short *)(unaff_r7 + 0x9e) * 0x14 + 0x10);
        if (uVar6 < uVar7) {
          uVar6 = uVar6 >> 1;
        }
        else {
          fVar20 = (float)VectorSignedToFloat(uVar7,(byte)(uVar3 >> 0x15) & 3);
          fVar16 = (float)VectorUnsignedToFloat(-0x80000000 - uVar6,(byte)(uVar3 >> 0x15) & 3);
          fVar15 = (float)VectorUnsignedToFloat(-0x80000000 - uVar7,(byte)(uVar3 >> 0x15) & 3);
          uVar6 = (uint)(fVar20 * (fVar16 / fVar15) * fVar14);
        }
        if (0 < (int)ALBW_AS_U32(in_stack_00000018)) {
          uVar6 = -uVar6;
        }
        *(uint *)(unaff_r4 + 0x2b0) = uVar6 + iVar11 + -0x80000000;
        func_00491E80(&stack0x00000038,0,*(uint *)(unaff_r4 + 0x2b4),0);
        in_stack_00000080 = ALBW_AS_F32(((ulonglong)uVar25 >> 0x20));
        in_stack_00000088 =
             -SQRT(in_stack_00000068 * in_stack_00000068 + in_stack_00000070 * in_stack_00000070);
        in_stack_00000084 = in_stack_00000080;
        func_00115CA8(&stack0x00000080,&stack0x00000038,&stack0x00000080);
        fVar16 = unaff_r5[4];
        func_00115C54(unaff_r5 + 3,(float *)(unaff_r4 + 0x2a4),&stack0x00000080);
        unaff_r5[4] = fVar16;
      }
      func_0036FA1C((undefined4 *)(unaff_r4 + 0x44),0);
      if (*(char *)(unaff_r4 + 0x20) == '\0') goto LAB_003514fc;
    }
    fVar16 = *(float *)(unaff_r4 + 0x1c8);
  }
  else {
    func_0034E038(unaff_r4,unaff_r5,(int)unaff_r8,unaff_r11,in_stack_00000008,ALBW_AS_F32(uVar25));
LAB_003510bc:
    if (*(char *)(unaff_r4 + 0x20) != '\0') goto LAB_003512c4;
LAB_003511a8:
    if (*(int *)(unaff_r4 + 0x264) != 0) {
      iVar11 = func_00541190(*(int *)(unaff_r4 + 0x264));
      func_00115C70(&stack0x00000038,unaff_r5 + 3,unaff_r5);
      fVar16 = *(float *)(iVar11 + 4);
      pfVar4 = (float *)(DAT_003514ec + (*(uint *)(unaff_r4 + 8) >> 0x18) * 0x10);
      fVar20 = (float)VectorUnsignedToFloat
                                (*(uint *)(unaff_r4 + 8) & 0xffffff,(byte)(uVar3 >> 0x15) & 3);
      fVar20 = *pfVar4 + pfVar4[1] * fVar20 * DAT_003514e8;
      fVar15 = ALBW_AS_F32(((ulonglong)uVar25 >> 0x20));
      uVar3 = uVar3 & 0xfffffff;
      uVar6 = uVar3 | (uint)(fVar20 == fVar15) << 0x1e;
      if (!SUB41(uVar6 >> 0x1e,0)) {
        fVar18 = *(float *)(iVar11 + 0x34);
        fVar17 = *(float *)(iVar11 + 8);
        fVar19 = *(float *)(*(int *)(*DAT_003514f0 + 0x1c) + 4);
        uVar6 = uVar3 | (uint)(fVar19 == fVar18) << 0x1e | (uint)(fVar18 <= fVar19) << 0x1d;
        bVar2 = (byte)(uVar6 >> 0x18);
        if (!(bool)(bVar2 >> 5 & 1) || (bool)(bVar2 >> 6)) {
          fVar17 = *(float *)(iVar11 + 0xc);
        }
        else {
          fVar21 = fVar18 + *(float *)(iVar11 + 0x38);
          uVar6 = uVar3 | (uint)(fVar21 < fVar19) << 0x1f;
          if (SUB41(uVar6 >> 0x1f,0) == (NAN(fVar21) || NAN(fVar19))) {
            fVar17 = *(float *)(iVar11 + 0xc) +
                     (fVar17 - *(float *)(iVar11 + 0xc)) *
                     ((fVar19 - fVar18) / *(float *)(iVar11 + 0x38));
          }
        }
        fVar16 = fVar17 / fVar20 + fVar16;
      }
      fVar20 = SQRT(in_stack_00000038 * in_stack_00000038 + in_stack_0000003c * in_stack_0000003c +
                    in_stack_00000040 * in_stack_00000040);
      uVar6 = uVar6 & 0xfffffff | (uint)(fVar20 < fVar15) << 0x1f | (uint)(fVar20 == fVar15) << 0x1e
      ;
      uVar3 = uVar6 | (uint)(NAN(fVar20) || NAN(fVar15)) << 0x1c;
      bVar2 = (byte)(uVar6 >> 0x18);
      if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(uVar3 >> 0x1c) & 1)) {
        fVar16 = fVar16 / fVar20;
        in_stack_00000038 = in_stack_00000038 * fVar16;
        in_stack_0000003c = in_stack_0000003c * fVar16;
        in_stack_00000040 = in_stack_00000040 * fVar16;
      }
      func_00115C54(unaff_r5 + 3,unaff_r5,&stack0x00000038);
      if (*(char *)(unaff_r4 + 0x20) != '\0') goto LAB_003512c4;
    }
LAB_003514fc:
    fVar16 = *(float *)(unaff_r4 + 0xa8);
  }
  unaff_r5[6] = fVar16;
  if (((*(char *)(unaff_r6 + 100) != '\0') &&
      (unaff_r5[6] = fVar22 + (unaff_r5[6] - fVar22) * ALBW_AS_F32(uVar25), unaff_r11 == 0)) &&
     (unaff_r8[0x2c] == 0)) {
    iVar11 = *DAT_003514f0;
    fVar16 = ALBW_AS_F32(((ulonglong)uVar25 >> 0x20));
    if (*(float *)(*(int *)(iVar11 + 0x28) + 4) == fVar16) {
      pfVar4 = *(float **)(iVar11 + 0x1c);
      fVar14 = *(float *)(unaff_r4 + 0x1a4) - *pfVar4;
      fVar20 = *(float *)(unaff_r4 + 0x1a8) - pfVar4[1];
      fVar22 = *(float *)(unaff_r4 + 0x1ac) - pfVar4[2];
      if (DAT_003516bc <= (int)ALBW_AS_U32((fVar14 * fVar14 + fVar20 * fVar20 + fVar22 * fVar22))) {
        bVar12 = *(char *)(unaff_r6 + 0x37) != '\0';
        cVar1 = '\0';
        if (bVar12) {
          cVar1 = *(char *)(unaff_r6 + 0x48);
        }
        if (!bVar12 || cVar1 == '\0') {
          *(undefined1 *)(unaff_r4 + 0x164) = 0;
          *(undefined1 *)(unaff_r4 + 0x135) = 0;
          uVar8 = *(undefined4 *)(unaff_r4 + 8);
          *(undefined4 *)(unaff_r4 + 0x2c) = uVar8;
          *(undefined4 *)(unaff_r4 + 0x174) = uVar8;
          *(undefined4 *)(unaff_r4 + 0x34) = *(undefined4 *)(unaff_r4 + 0xc);
          *(undefined4 *)(unaff_r6 + 0x80) = uVar8;
          *(float *)(unaff_r4 + 0x184) = fVar16;
          *(float *)(unaff_r4 + 0x194) = fVar16;
          *(undefined4 *)(unaff_r4 + 400) = 0;
          *(undefined4 *)(unaff_r4 + 0x18c) = 0;
          *(float *)(unaff_r4 + 0x188) = fVar16;
        }
      }
    }
    else {
      puVar9 = *(undefined4 **)(iVar11 + 0x1c);
      *(undefined4 *)(unaff_r4 + 0x1a4) = *puVar9;
      *(undefined4 *)(unaff_r4 + 0x1a8) = puVar9[1];
      *(undefined4 *)(unaff_r4 + 0x1ac) = puVar9[2];
    }
  }
  *(undefined1 *)(unaff_r4 + 0x22) = 0;
  bVar12 = *(char *)(unaff_r7 + 0x2c) != '\0';
  cVar1 = '\0';
  if (bVar12) {
    cVar1 = *(char *)(unaff_r7 + 0x2d);
  }
  if (bVar12 && cVar1 != '\0') {
    *(float *)(unaff_r4 + 0x230) = unaff_r5[3];
    *(float *)(unaff_r4 + 0x234) = unaff_r5[4];
    *(float *)(unaff_r4 + 0x238) = unaff_r5[5];
  }
  piVar5 = DAT_003516c0;
  *(undefined1 *)(unaff_r4 + 0x22d) = 0;
  piVar5 = *(int **)(*piVar5 + 0x44);
  if (((*DAT_003516c4 & 1) == 0) && (iVar11 = func_00100174((int *)DAT_003516c4), iVar11 != 0)) {
    *DAT_003516c8 = DAT_003516cc;
  }
  if (((piVar5 == (int *)0x0) ||
      (iVar11 = (**(code **)(*piVar5 + 8))(piVar5,DAT_003516c8), iVar11 == 0)) &&
     (*(undefined1 *)(unaff_r4 + 0x22a) = 0, piVar5 == (int *)0x0)) {
    *(undefined4 *)(unaff_r4 + 0x264) = 0;
  }
  return func_00261564(unaff_r4);
}

