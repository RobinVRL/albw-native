#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_002ACD14(undefined4 *param_1,int param_2,int param_3);
extern int func_002AD0E4(undefined4 *param_1,int param_2,float *param_3,undefined1 param_4,int param_5);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004F5494(undefined4 *param_1);
extern float func_004F944C(void);
extern int func_004FC510(int param_1,int param_2);
extern void func_0051D0B0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,float fparam_0);
extern int func_0051D39C(int *param_1,int param_2,int param_3);
extern int func_00521078(int param_1);
extern int func_00588BE4(int param_1);
extern int func_006624F4(undefined4 *param_1,undefined1 param_2);
extern float DAT_002ab09c;
extern float DAT_002ab0a0;
extern float DAT_002ab0a4;
extern undefined4 DAT_002ab0a8;
extern float *DAT_002ab0ac;
extern float DAT_002ab0b0;
extern float DAT_002ab0b4;
extern int DAT_002ab0b8;
extern int DAT_002ab0bc;
extern float DAT_002ab0c0;
extern int *DAT_002ab1a0;
extern int DAT_002ab1a4;

// USA 002AAD94 <- EU 002AAD70 (Ghidra, non-matching)
// GLOBAL DAT_002ab09c float
// GLOBAL DAT_002ab0a0 float
// GLOBAL DAT_002ab0a4 float
// GLOBAL DAT_002ab0a8 undefined4
// GLOBAL DAT_002ab0ac float *
// GLOBAL DAT_002ab0b0 float
// GLOBAL DAT_002ab0b4 float
// GLOBAL DAT_002ab0b8 int
// GLOBAL DAT_002ab0bc int
// GLOBAL DAT_002ab0c0 float
// GLOBAL DAT_002ab1a0 int *
// GLOBAL DAT_002ab1a4 int

/* WARNING: Variable defined which should be unmapped: objStack_20 */

undefined4 func_002AAD94(undefined4 *param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  float *pfVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint in_fpscr;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define objStack_20 ((uint *)(albw_frame + 0x0))
  #define local_1c (*(float *)(albw_frame + 0x4))
  #define local_18 (*(float *)(albw_frame + 0x8))
  fVar15 = DAT_002ab09c;
  *(short *)(param_1 + 0xb0) = *(short *)(param_1 + 0xb0) + 1;
  fVar12 = ALBW_AS_F32(param_1[0x10]);
  param_1[0x10] = ALBW_AS_U32(fVar12 - fVar15);
  if (*(char *)(param_1 + 0x7a) == '\0') {
    fVar13 = ALBW_AS_F32(param_1[0x79]);
    fVar14 = *(float *)(param_1[0xd] + 0x36c);
    uVar9 = in_fpscr & 0xfffffff;
    uVar11 = uVar9 | (uint)(fVar14 < fVar13) << 0x1f | (uint)(fVar14 == fVar13) << 0x1e;
    in_fpscr = uVar11 | (uint)(NAN(fVar14) || NAN(fVar13)) << 0x1c;
    bVar2 = (byte)(uVar11 >> 0x18);
    if ((!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) &&
       (fVar14 = fVar14 + (fVar12 - fVar15),
       in_fpscr = uVar9 | (uint)(fVar14 == fVar13) << 0x1e | (uint)(fVar13 <= fVar14) << 0x1d,
       bVar2 = (byte)(in_fpscr >> 0x18), !(bool)(bVar2 >> 5 & 1) || (bool)(bVar2 >> 6))) {
      *(undefined1 *)(param_1 + 0x7a) = 1;
      objStack_20[0] = 0;
      iVar6 = func_002AD0E4(param_1,1,(float *)0x0,0,0);
      if (iVar6 != 0) {
        return 0;
      }
    }
  }
  fVar15 = DAT_002ab0a0;
  fVar12 = ALBW_AS_F32(param_1[0x10]);
  uVar9 = in_fpscr & 0xfffffff | (uint)(fVar12 == DAT_002ab0a0) << 0x1e |
          (uint)(DAT_002ab0a0 <= fVar12) << 0x1d;
  bVar2 = (byte)(uVar9 >> 0x18);
  if ((bool)(bVar2 >> 5 & 1) && !(bool)(bVar2 >> 6)) {
    if ((*(uint *)(param_1[0xd] + 0x5a0) & 0x800000) != 0) {
      param_1[0x10] = ALBW_AS_U32(DAT_002ab0a0);
LAB_002aaee4:
      if ((*(char *)(param_1 + 1) == '\f') || (*(short *)(param_1[0xd] + 0x508) < 1))
      goto LAB_002ab128;
    }
  }
  else {
    bVar5 = func_00521078(param_1[0xd]);
    if (bVar5) {
      if (*(byte *)(param_1 + 9) < 2) {
        fVar12 = fVar12 * DAT_002ab0a4;
        *(ushort *)(param_1 + 0xe) = *(ushort *)(param_1 + 0xe) | 2;
        param_1[0x10] = ALBW_AS_U32(fVar12);
        if (*(char *)(param_1 + 9) == '\0') {
          (**(code **)(*(int *)param_1[0xd] + 0x4c))((int *)param_1[0xd]);
        }
      }
      else {
        fVar12 = func_004F944C();
        param_1[0x10] = ALBW_AS_U32(fVar12);
      }
      cVar1 = *(char *)(param_1 + 9);
      *(char *)(param_1 + 9) = cVar1 + '\x01';
      uVar3 = DAT_002ab0a8;
      if ((char)(cVar1 + '\x01') == '\x01') {
        param_1[0x61] = 6;
        param_1[0x62] = uVar3;
        param_1[0x60] = 0;
      }
      if (((*(ushort *)(param_1 + 0xe) & 0x40) != 0) ||
         ((*(uint *)(param_1[0xd] + 0x59c) & 0x80000) == 0)) goto LAB_002ab128;
    }
    else {
      uVar11 = param_1[0x5a];
      if (uVar11 < (uint)param_1[0x5b]) {
        uVar11 = uVar11 + 1;
        param_1[0x5a] = uVar11;
      }
      if ((uint)param_1[0x5b] <= uVar11) goto LAB_002aaee4;
    }
  }
  if (*(char *)(param_1 + 9) == '\0') {
    iVar6 = param_1[0xd];
    fVar13 = ALBW_AS_F32(param_1[0x5e]) + DAT_002ab0b0;
    fVar14 = ALBW_AS_F32(param_1[0x5e]) + DAT_002ab0b4;
    fVar12 = *(float *)(iVar6 + 0x3d4);
    if (*(float *)(iVar6 + 0x3d4) < fVar13) {
      fVar12 = fVar13;
    }
    if (fVar14 < fVar12) {
      fVar12 = fVar14;
    }
    fVar12 = (fVar12 - fVar13) / (fVar14 - fVar13);
    if ((*(uint *)(iVar6 + 0x59c) & 0x10000) != 0) {
      iVar8 = (int)*(char *)(DAT_002ab0b8 + (int)param_1);
      if (iVar8 < 0) {
        iVar8 = 0x1e;
      }
      func_0051D0B0((undefined4 *)(iVar6 + 0x500),param_1[0x5d],-(iVar8 * DAT_002ab0bc),fVar12);
    }
    func_004D80A4((float *)objStack_20,*(uint *)(param_1[0xd] + 1000),fVar12 * DAT_002ab0c0);
    param_1[0x1c] = objStack_20[0];
    param_1[0x1d] = ALBW_AS_U32(fVar15);
LAB_002ab078:
    param_1[0x1e] = ALBW_AS_U32(local_18);
  }
  else {
    uVar7 = param_1[0x61];
    uVar10 = param_1[0x60];
    uVar11 = uVar10;
    if (uVar10 < uVar7) {
      uVar11 = uVar10 + 1;
    }
    iVar6 = uVar7 - uVar11;
    if (uVar10 < uVar7) {
      param_1[0x60] = uVar11;
    }
    func_0051D39C((int *)(param_1[0xd] + 0x500),param_1[0x5d],iVar6);
    pfVar4 = DAT_002ab0ac;
    if (iVar6 < 1) {
      param_1[0x1c] = ALBW_AS_U32(*DAT_002ab0ac);
      param_1[0x1d] = ALBW_AS_U32(pfVar4[1]);
      local_18 = pfVar4[2];
      goto LAB_002ab078;
    }
    fVar15 = (float)VectorSignedToFloat(iVar6,(byte)(uVar9 >> 0x15) & 3);
    func_00115C70((float *)objStack_20,DAT_002ab0ac,(float *)(param_1 + 0x1c));
    param_1[0x1e] = ALBW_AS_U32(local_18 / fVar15 + ALBW_AS_F32(param_1[0x1e]));
    param_1[0x1c] = ALBW_AS_U32(ALBW_AS_F32(objStack_20[0]) / fVar15 + ALBW_AS_F32(param_1[0x1c]));
    param_1[0x1d] = ALBW_AS_U32(local_1c / fVar15 + ALBW_AS_F32(param_1[0x1d]));
  }
  if (*(byte *)(param_1 + 9) < 2) {
    iVar6 = func_00588BE4(param_1[0xd]);
    iVar8 = param_1[0xd];
    if (iVar6 == *DAT_002ab1a0) {
      func_004FC510(iVar8,2);
    }
    else {
      if ((*(uint *)(iVar8 + 0x59c) & 0x80000) == 0) {
        iVar6 = 0x8e;
      }
      else {
        iVar6 = 0x7c;
      }
      func_004FC510(iVar8,iVar6);
    }
  }
  else if ((uint)param_1[10] < (uint)param_1[0xb]) {
    param_1[10] = param_1[10] + 1;
  }
  if ((uint)param_1[0xb] <= (uint)param_1[10]) {
    uVar9 = param_1[0xd];
    if (*(short *)(DAT_002ab1a4 + uVar9) < 1) {
LAB_002ab128:
      func_004F5494(param_1 + 0x3b);
      return func_006624F4(param_1,0);
    }
    bVar5 = (*(uint *)(uVar9 + 0x59c) & 0x80000) != 0;
    if (bVar5) {
      uVar9 = (uint)*(byte *)(uVar9 + 0x7fc);
    }
    if (bVar5 && uVar9 != 5) {
      return func_006624F4(param_1,2);
    }
  }
  return func_002ACD14(param_1,0,(uint)((*(uint *)(param_1[0xd] + 0x59c) & 0x80000) != 0));
}

