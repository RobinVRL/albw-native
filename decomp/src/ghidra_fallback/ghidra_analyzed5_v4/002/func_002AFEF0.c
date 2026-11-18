#include "ghidra_types.h"

extern int func_002AB248(undefined4 *param_1,float *param_2,undefined1 param_3);
extern void func_002AC858(int param_1,float fparam_0);
extern int func_002ACD14(undefined4 *param_1,int param_2,int param_3);
extern int func_002AD550(int param_1,int param_2,int param_3);
extern int func_004F5494(undefined4 *param_1);
extern int func_004FD0B4(int param_1);
extern int func_004FD268(int param_1);
extern void func_0051D0B0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,float fparam_0);
extern int func_00521018(int param_1);
extern int func_006624F4(undefined4 *param_1,undefined1 param_2);
extern float DAT_002b0360;
extern float DAT_002b0364;
extern float DAT_002b0368;
extern int DAT_002b036c;
extern float DAT_002b0370;
extern int DAT_002b0374;
extern int *DAT_002b0378;
extern float DAT_002b037c;
extern undefined4 *DAT_002b0380;
extern float DAT_002b04c0;

// USA 002AFEF0 <- EU 002AFECC (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// GLOBAL DAT_002b0360 float
// GLOBAL DAT_002b0364 float
// GLOBAL DAT_002b0368 float
// GLOBAL DAT_002b036c int
// GLOBAL DAT_002b0370 float
// GLOBAL DAT_002b0374 int
// GLOBAL DAT_002b0378 int *
// GLOBAL DAT_002b037c float
// GLOBAL DAT_002b0380 undefined4 *
// GLOBAL DAT_002b04c0 float

undefined4 func_002AFEF0(undefined4 *param_1,int param_2,uint param_3,int param_4,int param_5,
                  float fparam_0)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  undefined4 *puVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  float *pfVar10;
  undefined4 uVar11;
  int iVar12;
  uint in_fpscr;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_3c ((float *)(albw_frame + 0x4))
  cVar1 = *(char *)(param_1[0xd] + 0x7fc);
  bVar3 = cVar1 != '\0' && cVar1 != '\x05';
  if (((*(uint *)(param_1[0xd] + 0x59c) & 0x80000) == 0) && (cVar1 != '\x05')) {
    iVar12 = 0;
  }
  else {
    iVar12 = 1;
  }
  bVar2 = *(byte *)(param_1 + 1);
  if ((bVar2 - 5 < 5) || (bVar2 == 10)) {
    iVar8 = 1;
  }
  else {
    iVar8 = 0;
  }
  *(short *)(param_1 + 0xb0) = *(short *)(param_1 + 0xb0) + 1;
  fVar15 = DAT_002b0364;
  fVar14 = DAT_002b0360;
  if ((uint)param_1[10] < (uint)param_1[0xb]) {
    param_1[10] = param_1[10] + 1;
  }
  fVar16 = DAT_002b0368;
  if ((uint)param_1[0x4f] < (uint)param_1[0x50]) {
    param_1[0x4f] = param_1[0x4f] + 1;
  }
  if ((uint)param_1[0x52] < (uint)param_1[0x53]) {
    param_1[0x52] = param_1[0x52] + 1;
  }
  if (*(char *)(param_1 + 9) == '\0') {
    *(int *)(param_1[0xd] + 1000) = param_1[0x1b] + *(int *)(param_1[0xd] + 1000);
    bVar5 = func_00521018(param_1[0xd]);
    if (bVar5) {
      func_002AC858((int)param_1,fparam_0);
    }
    if ((*(ushort *)(param_1 + 0xe) & 0x20) != 0) {
      uVar6 = param_1[0x4c];
      uVar9 = param_1[0x4d];
      if (uVar6 < uVar9) {
        uVar6 = uVar6 + 1;
        param_1[0x4c] = uVar6;
      }
      fVar13 = fVar15;
      if ((uVar9 != 0 && uVar6 != 0) && (fVar13 = fVar16, uVar6 < uVar9)) {
        fVar13 = (float)VectorUnsignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
        fVar13 = fVar13 * ALBW_AS_F32(param_1[0x4e]);
      }
      func_0051D0B0((undefined4 *)(param_1[0xd] + 1000),param_1[0x24],param_1[0x55],fVar13);
    }
    if (bVar2 == 0x12) {
      uVar6 = param_1[0x7b];
      pfVar10 = (float *)(DAT_002b036c + (uVar6 >> 0x18) * 0x10);
      fVar13 = (float)VectorUnsignedToFloat(uVar6 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
      iVar7 = uVar6 + DAT_002b0374;
      fVar14 = (*pfVar10 + pfVar10[1] * fVar13 * fVar14) * DAT_002b0370;
      param_1[0x1e] = ALBW_AS_U32(fVar14);
      param_1[0x1c] = ALBW_AS_U32(fVar14);
      param_1[0x1d] = ALBW_AS_U32(fVar15);
      param_1[0x7b] = iVar7;
      if (*(int *)(*DAT_002b0378 + 0x10) << 0x1e < 0) {
        func_004FD0B4(param_1[0xd]);
      }
      else {
        func_004FD268(param_1[0xd]);
      }
    }
    if ((uint)param_1[0x53] <= (uint)param_1[0x52]) {
      *(ushort *)(param_1 + 0xe) = *(ushort *)(param_1 + 0xe) & 0xfff7;
      local_3c[0] = fVar15;
      if (bVar2 == 0x12) {
        if (*(byte *)(param_1[0xd] + 0x895) < 2) {
          return func_006624F4(param_1,0x13);
        }
        if (0 < *(short *)(param_1[0xd] + 0x508)) {
          func_004F5494(param_1 + 0x3b);
          return func_006624F4(param_1,0);
        }
        return func_006624F4(param_1,0x1f);
      }
      if ((bVar3) ||
         (uVar6 = func_002AB248((undefined4 *)(param_1[0xd] + 0x3d0),local_3c,0), uVar6 == 4)) {
        if (param_2 == 0) {
          *(undefined1 *)(param_1 + 9) = 2;
          param_1[0xb] = param_3;
          if (param_3 == 0) {
            param_1[0xc] = ALBW_AS_U32(fVar15);
          }
          else {
            fVar14 = (float)VectorUnsignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
            param_1[0xc] = ALBW_AS_U32(fVar16 / fVar14);
          }
          param_1[10] = 0;
          if (param_3 != 0) {
            *(ushort *)(param_1 + 0xe) = *(ushort *)(param_1 + 0xe) | 2;
            if (iVar12 != 0) goto LAB_002b0318;
LAB_002b0244:
            param_1[0xb] = 0;
            param_1[0xc] = ALBW_AS_U32(fVar15);
          }
          goto LAB_002b0328;
        }
        *(ushort *)(param_1 + 0xe) = *(ushort *)(param_1 + 0xe) | 2;
        fVar14 = (float)VectorUnsignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
        *(undefined1 *)(param_1 + 9) = 1;
        param_1[0xb] = param_2;
        param_1[0xc] = ALBW_AS_U32(fVar16 / fVar14);
      }
      else {
        *(undefined1 *)(param_1 + 9) = 2;
        param_1[0xb] = 0;
        param_1[0xc] = ALBW_AS_U32(fVar15);
      }
      param_1[10] = 0;
    }
  }
  else if (*(char *)(param_1 + 9) == '\x01') {
    uVar6 = param_1[0x7b];
    pfVar10 = (float *)(DAT_002b036c + (uVar6 >> 0x18) * 0x10);
    fVar13 = (float)VectorUnsignedToFloat(uVar6 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
    iVar7 = uVar6 + DAT_002b0374;
    fVar14 = (*pfVar10 + pfVar10[1] * fVar13 * fVar14) * DAT_002b037c;
    param_1[0x1e] = ALBW_AS_U32(fVar14);
    param_1[0x1c] = ALBW_AS_U32(fVar14);
    param_1[0x1d] = ALBW_AS_U32(fVar15);
    param_1[0x7b] = iVar7;
    puVar4 = DAT_002b0380;
    if ((uint)param_1[0xb] <= (uint)param_1[10]) {
      param_1[0x1c] = *DAT_002b0380;
      param_1[0x1d] = puVar4[1];
      uVar11 = puVar4[2];
      param_1[0x7b] = 0;
      param_1[0x1e] = uVar11;
      *(undefined1 *)(param_1 + 9) = 2;
      if (*(char *)(param_1[0xd] + 0x7fc) != '\x02') {
        param_1[0xb] = param_3;
        if (param_3 == 0) {
          param_1[0xc] = ALBW_AS_U32(fVar15);
        }
        else {
          fVar14 = (float)VectorUnsignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
          param_1[0xc] = ALBW_AS_U32(fVar16 / fVar14);
        }
        param_1[10] = 0;
        if (param_3 != 0) {
          if (iVar12 == 0) goto LAB_002b0244;
LAB_002b0318:
          func_002AD550((int)param_1,param_3,iVar8);
        }
      }
    }
  }
LAB_002b0328:
  if (((*(char *)(param_1[0xd] + 0x7fc) == '\x05') && ((-iVar12 & param_3) == 0)) &&
     ((cVar1 = *(char *)(param_1[0xd] + 0x392), cVar1 == '\t' || (cVar1 == '\x16')))) {
    fVar14 = ALBW_AS_F32(param_1[0x11]) * DAT_002b04c0;
    param_1[0xf] = ALBW_AS_U32(ALBW_AS_F32(param_1[0xf]) * DAT_002b04c0);
  }
  else {
    iVar8 = param_1[0x53] - param_1[0x52];
    if (iVar8 < 2) {
      iVar8 = 1;
    }
    fVar13 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3);
    fVar14 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3);
    param_1[0xf] = ALBW_AS_U32(ALBW_AS_F32(param_1[0xf]) + (fVar15 - ALBW_AS_F32(param_1[0xf])) * (fVar16 / fVar13));
    fVar14 = ALBW_AS_F32(param_1[0x11]) + (fVar15 - ALBW_AS_F32(param_1[0x11])) * (fVar16 / fVar14);
  }
  param_1[0x11] = ALBW_AS_U32(fVar14);
  if (((uint)param_1[0xb] <= (uint)param_1[10]) && ((uint)param_1[0x4f] < (uint)param_1[0x50])) {
    *(ushort *)(param_1 + 0xe) = *(ushort *)(param_1 + 0xe) & 0xfff7;
    if ((bVar3) ||
       (uVar6 = func_002AB248((undefined4 *)(param_1[0xd] + 0x3d0),(float *)0x0,0), uVar6 == 4)) {
      *(ushort *)(param_1 + 0xe) = *(ushort *)(param_1 + 0xe) | 2;
    }
    param_1[0xb] = 1;
    param_1[0xc] = ALBW_AS_U32(fVar16);
    param_1[10] = 0;
  }
  if (iVar12 != 0) {
    if ((param_5 != 0) && (0 < *(short *)(param_1[0xd] + 0x508))) {
      param_4 = 1;
      goto LAB_002b04a4;
    }
    if (param_3 != 0) goto LAB_002b04a4;
  }
  param_4 = 0;
LAB_002b04a4:
  return func_002ACD14(param_1,1,param_4);
}

