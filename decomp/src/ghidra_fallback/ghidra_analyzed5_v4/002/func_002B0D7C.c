#include "ghidra_types.h"

extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_002AB2D8(ushort *param_1,int param_2);
extern int func_002ABEC8(int *param_1,int param_2);
extern int func_002ADFE4(int param_1,int param_2,undefined1 param_3,undefined4 param_4,int param_5);
extern int func_002AE780(int param_1);
extern int func_004904CC(float fparam_0,float fparam_1);
extern float func_004F944C(void);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern float func_004FB2F0(int param_1,float fparam_0);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_004FD268(int param_1);
extern float func_0058AA40(int param_1);
extern undefined8 func_0058AB74(int param_1);
extern float func_0058AC38(int param_1);
extern undefined4 DAT_002b113c;
extern float DAT_002b1140;
extern undefined4 *DAT_002b1144;
extern undefined4 DAT_002b115c;
extern undefined4 DAT_002b1160;
extern undefined4 DAT_002b1164;
extern undefined4 DAT_002b1168;
extern undefined4 DAT_002b116c;
extern undefined4 DAT_002b1170;
extern int DAT_002b1418;

// USA 002B0D7C <- EU 002B0D58 (Ghidra, non-matching)
// GLOBAL DAT_002b113c undefined4
// GLOBAL DAT_002b1140 float
// GLOBAL DAT_002b1144 undefined4 *
// GLOBAL DAT_002b115c undefined4
// GLOBAL DAT_002b1160 undefined4
// GLOBAL DAT_002b1164 undefined4
// GLOBAL DAT_002b1168 undefined4
// GLOBAL DAT_002b116c undefined4
// GLOBAL DAT_002b1170 undefined4
// GLOBAL DAT_002b1418 int

float func_002B0D7C(int param_1,int param_2,uint param_3,int param_4,float fparam_0)

{
  _Alignas(8) unsigned char albw_frame[0x60]; /* entry_sp - 0x60 .. entry_sp + 0x0 */
#define stack0xffffffa8 (*(undefined4 *)(albw_frame + 0x8))
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ushort uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  uint in_fpscr;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  #define local_2c (*(uint *)(albw_frame + 0x34))
  uVar10 = param_2 - 5;
  if (*(char *)(param_1 + 0x113) == '\0') {
LAB_002b0da8:
    if (param_4 == 0) goto LAB_002b0db0;
LAB_002b0df4:
    bVar12 = false;
LAB_002b0df8:
    if (param_2 == 3) goto LAB_002b0f38;
LAB_002b0e00:
    bVar11 = false;
  }
  else {
    bVar12 = *(char *)(param_1 + 0x110) != '\x01';
    cVar1 = '\x01';
    if (bVar12) {
      cVar1 = *(char *)(param_1 + 0x111);
    }
    if (bVar12 && cVar1 != '\x01') goto LAB_002b0da8;
    param_4 = 0;
LAB_002b0db0:
    if (param_2 != 3) {
      if (param_2 != 0x12) goto LAB_002b0de8;
      bVar12 = false;
      goto LAB_002b0e00;
    }
    if (*(char *)(*(int *)(param_1 + 0x34) + 0x7fc) == '\x02') {
LAB_002b0de8:
      if (uVar10 < 5) goto LAB_002b0df4;
      bVar12 = true;
    }
    else {
      bVar12 = false;
    }
    if (!bVar12) goto LAB_002b0df8;
LAB_002b0f38:
    bVar11 = true;
  }
  fVar17 = fparam_0;
  func_002AE780(param_1);
  (**(code **)(**(int **)(param_1 + 0x34) + 0x68))(*(int **)(param_1 + 0x34),param_2,param_1 + 0xec)
  ;
  fVar17 = fparam_0 * fVar17;
  local_2c = param_3;
  if (param_3 == 0) {
    local_2c = 1;
  }
  *(ushort *)(param_1 + 0x38) = *(ushort *)(param_1 + 0x38) | 1;
  *(uint *)(*(int *)(param_1 + 0x34) + 0x5a0) =
       *(uint *)(*(int *)(param_1 + 0x34) + 0x5a0) & 0xfffffffe;
  func_00115D70((float *)(param_1 + 0x3c),(float *)(param_1 + 0xf8),fVar17);
  fVar16 = DAT_002b1140;
  uVar2 = DAT_002b113c;
  uVar18 = CONCAT44(DAT_002b1140,DAT_002b113c);
  *(uint *)(param_1 + 0x2c) = local_2c;
  if (local_2c == 0) {
    *(undefined4 *)(param_1 + 0x30) = uVar2;
  }
  else {
    fVar15 = (float)VectorUnsignedToFloat(local_2c,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x30) = fVar16 / fVar15;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(uint *)(param_1 + 0x14c) = local_2c;
  if (local_2c == 0) {
    *(undefined4 *)(param_1 + 0x150) = uVar2;
  }
  else {
    fVar15 = (float)VectorUnsignedToFloat(local_2c,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x150) = fVar16 / fVar15;
  }
  *(undefined4 *)(param_1 + 0x148) = 0;
  if ((uVar10 < 5) || (param_2 == 10)) {
    if (*(char *)(param_1 + 0x113) == '\0') {
      func_00150A84(*(int **)(param_1 + 0x34),(int *)&stack0xffffffa8,0);
    }
    else {
      func_002ABEC8(*(int **)(param_1 + 0x34),param_1 + 0xec);
    }
    *(float *)(param_1 + 0x3c) = *(float *)(param_1 + 0x3c) * *(float *)(param_1 + 0x164);
    *(float *)(param_1 + 0x44) = *(float *)(param_1 + 0x44) * *(float *)(param_1 + 0x164);
  }
  else if (*(char *)(param_1 + 0x113) != '\0') {
    func_002ABEC8(*(int **)(param_1 + 0x34),param_1 + 0xec);
  }
  if (param_2 == 0x12) {
    func_004FD268(*(int *)(param_1 + 0x34));
  }
  puVar3 = DAT_002b1144;
  *(undefined4 *)(param_1 + 0x70) = *DAT_002b1144;
  *(undefined4 *)(param_1 + 0x74) = puVar3[1];
  *(undefined4 *)(param_1 + 0x78) = puVar3[2];
  *(undefined4 *)(param_1 + 0x1ec) = 0;
  cVar1 = *(char *)(*(int *)(param_1 + 0x34) + 0x7fc);
  if (cVar1 == '\0' || cVar1 == '\x05') {
    fVar16 = func_004F944C();
    *(float *)(param_1 + 0x40) = fVar16;
  }
  uVar2 = DAT_002b1160;
  iVar9 = *(int *)(param_1 + 0x34);
  *(undefined1 *)(iVar9 + 0x655) = *(undefined1 *)(param_1 + 0x159);
  uVar7 = DAT_002b1170;
  uVar6 = DAT_002b116c;
  uVar5 = DAT_002b1168;
  uVar4 = DAT_002b1164;
  cVar1 = *(char *)(param_1 + 0x110);
  if (cVar1 != '\x01') {
    iVar9 = (int)*(char *)(param_1 + 0x111);
  }
  if (cVar1 == '\x01' || iVar9 == 1) {
    iVar9 = *(int *)(param_1 + 0x34);
    *(undefined4 *)(iVar9 + 0x6bc) = 0x16;
    *(undefined4 *)(iVar9 + 0x6c0) = uVar2;
    *(undefined4 *)(iVar9 + 0x6b8) = 0;
  }
  else if (cVar1 == '\x02' || iVar9 == 3) {
    iVar9 = *(int *)(param_1 + 0x34);
    *(undefined4 *)(iVar9 + 0x6c8) = 0x32;
    *(undefined4 *)(iVar9 + 0x6cc) = uVar4;
    *(undefined4 *)(iVar9 + 0x6c4) = 0;
  }
  else if (cVar1 == '\r') {
    iVar9 = *(int *)(param_1 + 0x34);
    *(undefined4 *)(iVar9 + 0x6e0) = 0x16;
    *(undefined4 *)(iVar9 + 0x6e4) = uVar2;
    *(undefined4 *)(iVar9 + 0x6dc) = 0;
  }
  else if (cVar1 == '\v') {
    iVar9 = *(int *)(param_1 + 0x34);
    *(undefined4 *)(iVar9 + 0x6d4) = 0x46;
    *(undefined4 *)(iVar9 + 0x6d8) = uVar5;
    *(undefined4 *)(iVar9 + 0x6d0) = 0;
  }
  else if (cVar1 == '\b') {
    iVar9 = *(int *)(param_1 + 0x34);
    *(undefined4 *)(iVar9 + 0x6f8) = 0x32;
    *(undefined4 *)(iVar9 + 0x6fc) = uVar4;
    *(undefined4 *)(iVar9 + 0x6f4) = 0;
  }
  else if (cVar1 == '\f') {
    iVar9 = *(int *)(param_1 + 0x34);
    *(undefined4 *)(iVar9 + 0x6ec) = 0x32;
    *(undefined4 *)(iVar9 + 0x6f0) = uVar4;
    *(undefined4 *)(iVar9 + 0x6e8) = 0;
  }
  else if (cVar1 == '\t') {
    iVar9 = *(int *)(param_1 + 0x34);
    *(undefined4 *)(iVar9 + 0x704) = 0x18;
    *(undefined4 *)(iVar9 + 0x708) = uVar6;
    *(undefined4 *)(iVar9 + 0x700) = 0;
  }
  else if (iVar9 == 2) {
    iVar9 = *(int *)(param_1 + 0x34);
    *(undefined4 *)(iVar9 + 0x728) = 0x2d;
    *(undefined4 *)(iVar9 + 0x72c) = uVar7;
    *(undefined4 *)(iVar9 + 0x724) = 0;
  }
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(int *)(param_1 + 0x144) = (int)uVar18;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  if ((param_4 == 0) && (uVar10 < 5)) {
    iVar9 = (int)*(char *)(DAT_002b1418 + *(int *)(param_1 + 0x34));
    if (-1 < iVar9) {
      func_004FC07C(*(int *)(param_1 + 0x34),iVar9,0xffffffff,1);
    }
    *(uint *)(*(int *)(param_1 + 0x34) + 0x5a0) =
         *(uint *)(*(int *)(param_1 + 0x34) + 0x5a0) | 0x800;
  }
  uVar19 = func_0058AB74(*(int *)(param_1 + 0x34));
  fVar16 = func_0058AA40(*(undefined4 *)(param_1 + 0x34));
  uVar20 = CONCAT44(fVar16,fVar17);
  if (!bVar11) {
    *(uint *)(*(int *)(param_1 + 0x34) + 0x5a0) =
         *(uint *)(*(int *)(param_1 + 0x34) + 0x5a0) | 0x800;
  }
  *(undefined1 *)(*(int *)(param_1 + 0x34) + 0x82a) = 0;
  func_002ADFE4(param_1,param_2,*(undefined1 *)(param_1 + 0x110),(int)*(char *)(param_1 + 0x111),0);
  *(uint *)(*(int *)(param_1 + 0x34) + 0x5a0) =
       *(uint *)(*(int *)(param_1 + 0x34) + 0x5a0) & 0xfffff7ff;
  fVar17 = func_004FB2F0(*(int *)(param_1 + 0x34),fVar16);
  if (uVar10 < 5) {
    *(ushort *)(param_1 + 0x38) = *(ushort *)(param_1 + 0x38) & 0xffdf;
  }
  else {
    if ((*(ushort *)(param_1 + 0x38) & 0x20) == 0) {
      iVar9 = func_002AB2D8((ushort *)(param_1 + 0x160),(int)*(char *)(param_1 + 0x110));
      if ((iVar9 == 0) || (uVar10 = (uint)*(byte *)(param_1 + 0x158), uVar10 == 0))
      goto LAB_002b12f8;
      if (local_2c < uVar10) {
        uVar10 = local_2c;
      }
      *(uint *)(param_1 + 0x134) = uVar10;
      if (uVar10 == 0) {
        *(int *)(param_1 + 0x138) = (int)uVar18;
      }
      else {
        fVar17 = (float)VectorUnsignedToFloat(uVar10,(byte)(in_fpscr >> 0x15) & 3);
        *(float *)(param_1 + 0x138) = ALBW_AS_F32(((ulonglong)uVar18 >> 0x20)) / fVar17;
      }
      *(undefined4 *)(param_1 + 0x130) = 0;
      uVar8 = *(ushort *)(param_1 + 0x38) | 0x20;
    }
    else {
      uVar10 = (uint)*(byte *)(param_1 + 0x158);
      if (local_2c < *(byte *)(param_1 + 0x158)) {
        uVar10 = local_2c;
      }
      if (uVar10 != 0) {
        if (local_2c < uVar10) {
          uVar10 = local_2c;
        }
        *(uint *)(param_1 + 0x134) = uVar10;
        if (uVar10 == 0) {
          *(int *)(param_1 + 0x138) = (int)uVar18;
        }
        else {
          fVar17 = (float)VectorUnsignedToFloat(uVar10,(byte)(in_fpscr >> 0x15) & 3);
          *(float *)(param_1 + 0x138) = ALBW_AS_F32(((ulonglong)uVar18 >> 0x20)) / fVar17;
        }
        *(undefined4 *)(param_1 + 0x130) = 0;
        goto LAB_002b12f8;
      }
      uVar8 = *(ushort *)(param_1 + 0x38) & 0xffdf;
    }
    *(ushort *)(param_1 + 0x38) = uVar8;
  }
LAB_002b12f8:
  uVar10 = in_fpscr & 0xfffffff | (uint)(ALBW_AS_F32(uVar20) == ALBW_AS_F32(uVar18)) << 0x1e;
  if (SUB41(uVar10 >> 0x1e,0)) {
    *(ushort *)(param_1 + 0x38) = *(ushort *)(param_1 + 0x38) & 0xffdf;
  }
  else {
    fVar17 = -*(float *)(param_1 + 0x3c);
    iVar9 = func_004904CC(fVar17,-*(float *)(param_1 + 0x44));
    *(int *)(param_1 + 0x154) = iVar9;
  }
  fVar16 = ALBW_AS_F32(((ulonglong)uVar20 >> 0x20));
  if (bVar11) {
    uVar20 = func_0058AB74(*(int *)(param_1 + 0x34));
    fVar17 = func_0058AA40(*(undefined4 *)(param_1 + 0x34));
    bVar13 = *(char *)(*(int *)(param_1 + 0x34) + 0x82a) == '\0';
    bVar14 = (int)uVar19 == (int)uVar20;
    bVar11 = bVar13 && bVar14;
    if (bVar13 && bVar14) {
      uVar10 = uVar10 & 0xfffffff | (uint)(fVar16 == fVar17) << 0x1e;
      bVar11 = SUB41(uVar10 >> 0x1e,0);
    }
    if (!bVar11) {
      fVar17 = func_0058AC38(*(int *)(param_1 + 0x34));
      iVar9 = VectorFloatToUnsigned(fVar17,3);
      *(int *)(param_1 + 0x140) = iVar9;
      if (iVar9 == 0) {
        *(int *)(param_1 + 0x144) = (int)uVar18;
        fVar17 = 0.0;
      }
      else {
        fVar17 = (float)VectorUnsignedToFloat(iVar9,(byte)(uVar10 >> 0x15) & 3);
        *(float *)(param_1 + 0x144) = ALBW_AS_F32(((ulonglong)uVar18 >> 0x20)) / fVar17;
      }
      *(undefined4 *)(param_1 + 0x13c) = 0;
      if ((*(uint *)(*(int *)(param_1 + 0x34) + 0x59c) & 0x40000000) != 0) {
        return fVar17;
      }
    }
  }
  if ((bVar12) && (-1 < *(int *)(param_1 + 0x15c))) {
    func_004FABDC(*(int *)(param_1 + 0x34),*(int *)(param_1 + 0x15c),0xffffffff,0);
    fVar17 = func_0058AC38(*(undefined4 *)(param_1 + 0x34));
    iVar9 = VectorFloatToUnsigned(fVar17,3);
    *(int *)(param_1 + 0x140) = iVar9;
    if (iVar9 == 0) {
      *(int *)(param_1 + 0x144) = (int)uVar18;
      fVar17 = 0.0;
    }
    else {
      fVar17 = (float)VectorUnsignedToFloat(iVar9,(byte)(uVar10 >> 0x15) & 3);
      *(float *)(param_1 + 0x144) = ALBW_AS_F32(((ulonglong)uVar18 >> 0x20)) / fVar17;
    }
    *(undefined4 *)(param_1 + 0x13c) = 0;
  }
  return fVar17;
}

