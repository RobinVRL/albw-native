#include "ghidra_types.h"

extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_001512B4(int param_1,float *param_2);
extern int func_00151328(int param_1);
extern int func_0036B708(int param_1);
extern int func_0036BA20(void);
extern int func_0036BE78();
extern int func_0036C09C(undefined4 param_1,uint param_2);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_00521078(int param_1);
extern int func_0058A8F0(int param_1);
extern undefined8 func_0058AB74(int param_1);
extern int func_00666318(undefined4 *param_1,undefined1 param_2);
extern float DAT_00353530;
extern float DAT_00353534;
extern undefined4 DAT_00353538;
extern float DAT_0035353c;
extern int DAT_00353540;
extern float DAT_00353544;
extern float DAT_00353548;
extern float DAT_0035354c;
extern int DAT_00353550;
extern int DAT_00353554;
extern int DAT_003536e0;
extern float DAT_003536e4;
extern float DAT_003536e8;
extern float DAT_003536ec;

// USA 00353254 <- EU 00353230 (Ghidra, non-matching)
// GLOBAL DAT_00353530 float
// GLOBAL DAT_00353534 float
// GLOBAL DAT_00353538 undefined4
// GLOBAL DAT_0035353c float
// GLOBAL DAT_00353540 int
// GLOBAL DAT_00353544 float
// GLOBAL DAT_00353548 float
// GLOBAL DAT_0035354c float
// GLOBAL DAT_00353550 int
// GLOBAL DAT_00353554 int
// GLOBAL DAT_003536e0 int
// GLOBAL DAT_003536e4 float
// GLOBAL DAT_003536e8 float
// GLOBAL DAT_003536ec float

undefined4 func_00353254(int *param_1)

{
  short sVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  float fVar5;
  bool bVar6;
  int iVar7;
  float *pfVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  uint in_fpscr;
  float fVar13;
  float fVar14;
  undefined8 in_d8;
  float fVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_60 (*(float *)(albw_frame + 0x0))
  #define local_5c (*(float *)(albw_frame + 0x4))
  #define local_58 (*(float *)(albw_frame + 0x8))
  #define local_54 (*(int *)(albw_frame + 0xc))
  #define local_50 (*(int *)(albw_frame + 0x10))
  #define afStack_4c ((float *)(albw_frame + 0x14))
  #define local_40 (*(float *)(albw_frame + 0x20))
  #define local_3c (*(float *)(albw_frame + 0x24))
  #define iStack_38 (*(int *)(albw_frame + 0x28))
  fVar15 = DAT_00353534;
  fVar13 = DAT_00353530;
  uVar9 = param_1[2];
  param_1[0x2a9] = uVar9;
  param_1[0x2aa] = param_1[3];
  param_1[0x2ab] = param_1[4];
  uVar4 = DAT_00353538;
  param_1[0x2aa] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0x2aa]) + fVar13));
  fVar13 = ALBW_AS_F32(param_1[0x2ab]) + fVar15;
  param_1[0x2ab] = (int)ALBW_AS_U32(fVar13);
  uVar10 = param_1[0x27f];
  bVar12 = uVar10 != 0;
  if (bVar12) {
    uVar9 = param_1[0x27e];
  }
  uVar2 = (int)((ulonglong)in_d8 >> 0x20);
  if (!bVar12 || uVar9 == 0) {
    uVar2 = uVar4;
  }
  uVar17 = CONCAT44(uVar2,uVar4);
  if (bVar12 && uVar9 != 0) {
    if (uVar9 < uVar10) {
      fVar13 = (float)VectorUnsignedToFloat(uVar9,(byte)(in_fpscr >> 0x15) & 3);
      uVar17 = CONCAT44(fVar13 * ALBW_AS_F32(param_1[0x280]),uVar4);
    }
    else {
      uVar17 = CONCAT44(fVar15,uVar4);
    }
  }
  uVar9 = param_1[0x27e];
  if (uVar9 < uVar10) {
    param_1[0x27e] = uVar9 + 1;
  }
  bVar12 = uVar9 >= uVar10;
  piVar3 = param_1 + 0x232;
  iVar7 = func_0036BE78((int)piVar3);
  fVar5 = DAT_0035353c;
  iVar11 = param_1[0x103];
  uVar16 = CONCAT44(DAT_0035353c,fVar15);
  fVar14 = ALBW_AS_F32(uVar17);
  if (iVar11 != 0) {
    if (bVar12) {
      param_1[0x167] = param_1[0x167] | 1;
      uVar9 = param_1[0x282];
      if ((uint)param_1[0x281] < uVar9) {
        uVar10 = param_1[0x281] + 1;
        if (uVar9 == 0 || uVar10 == 0) {
          fVar13 = fVar14;
        }
        param_1[0x281] = uVar10;
        if ((uVar9 != 0 && uVar10 != 0) && (fVar13 = fVar15, uVar10 < uVar9)) {
          fVar13 = (float)VectorUnsignedToFloat(uVar10,(byte)(in_fpscr >> 0x15) & 3);
          fVar13 = fVar13 * ALBW_AS_F32(param_1[0x283]);
        }
        *(float *)(iVar11 + 0x158) = fVar13;
      }
      else {
        *(float *)(iVar11 + 0x158) = fVar15;
      }
    }
    else {
      param_1[0xf7] = (int)ALBW_AS_U32(fVar14);
      param_1[0xf8] = (int)ALBW_AS_U32(fVar14);
      param_1[0xf9] = (int)ALBW_AS_U32(fVar14);
      param_1[0xf5] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0x274]) + fVar5));
    }
  }
  fVar13 = ALBW_AS_F32(param_1[0xf5]) - ALBW_AS_F32(param_1[3]);
  if (ALBW_AS_F32(param_1[0xf5]) - ALBW_AS_F32(param_1[3]) < fVar14) {
    fVar13 = fVar14;
  }
  if (((short)param_1[0x27a] == 1) &&
     (((bVar6 = func_00521078((int)param_1), bVar6 ||
       ((param_1[0xe7] & 0x400U) != 0 || (param_1[0xe7] & 0x800U) != 0)) ||
      ((int)ALBW_AS_U32(fVar13) < DAT_00353540)))) {
    iVar11 = (int)uVar17;
    param_1[0xf7] = iVar11;
    local_5c = DAT_00353544;
    param_1[0xf8] = iVar11;
    local_60 = DAT_00353548;
    param_1[0xf9] = iVar11;
    func_00150A84(param_1,(int *)&local_60,0);
    *(undefined2 *)(param_1 + 0x27a) = 2;
    func_0036C09C(piVar3,2);
  }
  sVar1 = (short)param_1[0x27a];
  if (sVar1 == 2) {
    uVar17 = func_0058AB74((int)param_1);
    if (((int)uVar17 == 1) && (iVar7 = func_0058A8F0((int)param_1), iVar7 != 0)) {
      func_004FC07C((int)param_1,0,0xffffffff,0);
      *(undefined2 *)(param_1 + 0x27a) = 3;
      iVar7 = DAT_00353554;
      param_1[0x285] = 0x1e;
      param_1[0x286] = iVar7;
      param_1[0x284] = 0;
    }
  }
  else if (sVar1 == 3) {
    if ((uint)param_1[0x285] <= (uint)param_1[0x284]) {
      func_0036BA20();
      func_0036B708((int)piVar3);
      *(undefined2 *)(param_1 + 0x27a) = 4;
      return 0;
    }
    param_1[0x284] = param_1[0x284] + 1;
  }
  else if (sVar1 == 4) {
    if (iVar7 != 0) {
      return func_00666318(param_1 + 0x297,3);
    }
  }
  else {
    local_58 = ALBW_AS_F32(param_1[0x2a3]);
    local_50 = param_1[0x2a5];
    local_54 = param_1[0xf5];
    func_00115C70(afStack_4c,&local_58,(float *)(param_1 + 0x2a3));
    bVar6 = false;
    fVar13 = (ALBW_AS_F32(param_1[0x274]) + DAT_0035354c) - ALBW_AS_F32(param_1[0xf5]);
    if (bVar12) {
      if ((uint)param_1[0x284] < (uint)param_1[0x285]) {
        bVar6 = false;
        param_1[0x284] = param_1[0x284] + 1;
      }
      else {
        bVar6 = true;
      }
    }
    iVar7 = DAT_003536e0;
    if ((DAT_00353550 < (int)ALBW_AS_U32(fVar13)) && (bVar6)) {
      if ((short)param_1[0x27a] == 0) {
        *(undefined2 *)(param_1 + 0x27a) = 1;
        param_1[0xf8] = iVar7;
        *(undefined1 *)((int)param_1 + 0x9ea) = 1;
        func_004FABDC((int)param_1,1,0xffffffff,0);
      }
    }
    else if ((short)param_1[0x27a] == 0) {
      param_1[0xf8] = (int)ALBW_AS_U32(((ALBW_AS_F32(param_1[0xf8]) + fVar13 * DAT_003536e4) * DAT_003536e8));
    }
    param_1[0x2a4] = param_1[0xf5];
    param_1[0xf4] = param_1[0x2a3];
    param_1[0xf6] = param_1[0x2a5];
    if (param_1[0x2a2] != 0) {
      local_40 = ALBW_AS_F32(param_1[0x2a3]);
      iStack_38 = param_1[0x2a5];
      fVar13 = ALBW_AS_F32(param_1[0x274]) +
               (ALBW_AS_F32(uVar16) - ALBW_AS_F32(((ulonglong)uVar17 >> 0x20)) * DAT_003536ec) *
               ALBW_AS_F32(((ulonglong)uVar16 >> 0x20));
      local_3c = ALBW_AS_F32(param_1[0x2a4]);
      if (fVar13 < ALBW_AS_F32(param_1[0xf5])) {
        local_3c = fVar13;
      }
      func_001512B4(param_1[0x2a2],&local_40);
      fVar13 = ALBW_AS_F32(uVar17);
      fVar15 = ALBW_AS_F32(uVar16);
      pfVar8 = (float *)func_00151328(param_1[0x2a2]);
      func_00115154(&local_60,&local_5c,param_1[0xfa]);
      pfVar8[4] = fVar15;
      pfVar8[7] = fVar13;
      pfVar8[3] = fVar13;
      pfVar8[5] = fVar13;
      pfVar8[1] = fVar13;
      *pfVar8 = local_5c;
      pfVar8[2] = local_60;
      pfVar8[6] = -local_60;
      pfVar8[8] = local_5c;
      return 0;
    }
  }
  return 0;
}

