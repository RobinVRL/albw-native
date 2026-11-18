#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_002F14EC(int param_1,uint param_2,float fparam_0,float fparam_1);
extern int func_0036BE78();
extern float func_003E19E8(float fparam_0,float fparam_1,float fparam_2,float fparam_3,float fparam_4);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_0051D39C(int *param_1,int param_2,int param_3);
extern int func_00521078(int param_1);
extern int func_0054F9E4(int param_1,uint param_2);
extern int func_0054FA10(int param_1,uint param_2);
extern int func_0054FAC0(int param_1,uint param_2);
extern int func_0058A8F0(int param_1);
extern undefined8 func_0058AB74(int param_1);
extern longlong func_0058ACC8(int param_1,float fparam_0);
extern undefined4 func_006640EC(undefined4 *param_1,undefined1 param_2,float fparam_0);
extern float fRam002e7ed0;
extern float fRam002e7ed4;
extern undefined4 uRam002e7ed8;
extern float DAT_002e7ebc;
extern float DAT_002e7ec0;
extern float DAT_002e7ec4;
extern float DAT_002e7ec8;
extern undefined4 DAT_002e7ecc;
extern float DAT_002e7f20;

// USA 002E7AEC <- EU 002E7AC8 (Ghidra, non-matching)
// GLOBAL DAT_002e7ebc float
// GLOBAL DAT_002e7ec0 float
// GLOBAL DAT_002e7ec4 float
// GLOBAL DAT_002e7ec8 float
// GLOBAL DAT_002e7ecc undefined4
// GLOBAL DAT_002e7f20 float
// GLOBAL UNK_002e7ed0 float
// GLOBAL UNK_002e7ed4 float
// GLOBAL UNK_002e7ed8 undefined4

undefined4 func_002E7AEC(int param_1)

{
  undefined4 uVar1;
  bool bVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fparam_0;
  float fparam_1;
  undefined8 uVar11;
  longlong lVar12;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(float *)(albw_frame + 0x8))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0xc))
  #define fStack_40 (*(float *)(albw_frame + 0x10))
  #define local_3c (*(float *)(albw_frame + 0x14))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x18))
  #define local_34 (*(float *)(albw_frame + 0x1c))
  func_0036BE78(param_1 + 0x964);
  pfVar3 = (float *)func_0054F9E4(param_1 + 0xe30,*(uint *)(param_1 + 0x1254));
  pfVar4 = (float *)func_0054FA10(param_1 + 0xe30,*(uint *)(param_1 + 0x1254));
  iVar5 = func_0054FAC0(param_1 + 0xe30,*(uint *)(param_1 + 0x1254));
  func_00115D70(&local_3c,pfVar4,DAT_002e7ebc);
  local_48 = local_3c;
  uStack_44 = uStack_38;
  fStack_40 = local_34;
  func_00115C54(&local_3c,pfVar3,&local_48);
  fparam_1 = DAT_002e7ec8;
  fparam_0 = DAT_002e7ec4;
  fVar10 = DAT_002e7ec0;
  if (*(int *)(param_1 + 0xb7c) == 0) {
    uVar6 = *(uint *)(param_1 + 0xb10);
    if (*(uint *)(param_1 + 0xb0c) < uVar6) {
      uVar8 = *(uint *)(param_1 + 0xb0c) + 1;
      if (uVar6 == 0 || uVar8 == 0) {
        fVar10 = DAT_002e7ec4;
      }
      *(uint *)(param_1 + 0xb0c) = uVar8;
      if ((uVar6 != 0 && uVar8 != 0) && (fVar10 = fparam_1, uVar8 < uVar6)) {
        fVar10 = (float)VectorUnsignedToFloat(uVar8,(byte)(in_fpscr >> 0x15) & 3);
        fVar10 = fVar10 * *(float *)(param_1 + 0xb14);
      }
      if (uVar6 - uVar8 != 0) {
        fVar9 = local_3c;
        func_0051D39C((int *)(param_1 + 1000),iVar5,uVar6 - uVar8);
        fVar10 = func_003E19E8(fparam_0,fparam_1,fparam_1,fparam_0,fVar10);
        *(float *)(param_1 + 0x3d0) =
             *(float *)(param_1 + 0xbe4) + (fVar9 - *(float *)(param_1 + 0xbe4)) * fVar10;
        *(float *)(param_1 + 0x3d8) =
             *(float *)(param_1 + 0xbec) + (local_34 - *(float *)(param_1 + 0xbec)) * fVar10;
      }
      *(float *)(param_1 + 0x3dc) = fparam_0;
      *(float *)(param_1 + 0x3e0) = fparam_0;
      *(float *)(param_1 + 0x3e4) = fparam_0;
      return 0;
    }
    *(float *)(param_1 + 0x3e0) = DAT_002e7ec0;
    uVar1 = DAT_002e7ecc;
    *(undefined4 *)(param_1 + 0xb10) = 0x19;
    *(undefined4 *)(param_1 + 0xb14) = uVar1;
    *(undefined4 *)(param_1 + 0xb0c) = 0;
    *(undefined4 *)(param_1 + 0xbe4) = *(undefined4 *)(param_1 + 0x3d0);
    *(undefined4 *)(param_1 + 0xbe8) = *(undefined4 *)(param_1 + 0x3d4);
    *(undefined4 *)(param_1 + 0xbec) = *(undefined4 *)(param_1 + 0x3d8);
    *(undefined4 *)(param_1 + 0xb7c) = 1;
  }
  uVar11 = func_0058AB74(param_1);
  iVar7 = (int)uVar11;
  if (iVar7 == 0x1f) {
    fVar9 = *(float *)(param_1 + 0xb98);
    *(float *)(param_1 + 0xb98) = fVar9 + (fVar10 - fVar9) * fVar10;
    uVar6 = *(uint *)(param_1 + 0xb0c);
    uVar8 = *(uint *)(param_1 + 0xb10);
    if (uVar6 < uVar8) {
      uVar6 = uVar6 + 1;
      *(uint *)(param_1 + 0xb0c) = uVar6;
    }
    if (uVar8 == 0 || uVar6 == 0) {
      fVar10 = fparam_0;
    }
    if ((uVar8 != 0 && uVar6 != 0) && (fVar10 = fparam_1, uVar6 < uVar8)) {
      fVar10 = (float)VectorUnsignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
      fVar10 = fVar10 * *(float *)(param_1 + 0xb14);
    }
    if (uVar8 - uVar6 != 0) {
      func_0051D39C((int *)(param_1 + 1000),iVar5,uVar8 - uVar6);
      fVar10 = func_003E19E8(fparam_0,fparam_1,fparam_1,fparam_0,fVar10);
      *(float *)(param_1 + 0x3d0) =
           *(float *)(param_1 + 0xbe4) + (local_3c - *(float *)(param_1 + 0xbe4)) * fVar10;
      *(float *)(param_1 + 0x3d8) =
           *(float *)(param_1 + 0xbec) + (local_34 - *(float *)(param_1 + 0xbec)) * fVar10;
    }
    bVar2 = func_00521078(param_1);
    if ((bVar2) || (iVar5 = func_0058A8F0(param_1), iVar5 != 0)) {
      func_004FABDC(param_1,0x20,0xffffffff,0);
      return func_002F14EC(param_1,0x19,fRam002e7ed4,fRam002e7ed0);
    }
  }
  else if (iVar7 == 0x20) {
    uVar6 = *(uint *)(param_1 + 0xb0c);
    uVar8 = *(uint *)(param_1 + 0xb10);
    if (uVar6 < uVar8) {
      uVar6 = uVar6 + 1;
      *(uint *)(param_1 + 0xb0c) = uVar6;
    }
    if (uVar8 == 0 || uVar6 == 0) {
      fVar10 = fparam_0;
    }
    if ((uVar8 != 0 && uVar6 != 0) && (fVar10 = fparam_1, uVar6 < uVar8)) {
      fVar10 = (float)VectorUnsignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
      fVar10 = fVar10 * *(float *)(param_1 + 0xb14);
    }
    if (uVar8 - uVar6 != 0) {
      func_0051D39C((int *)(param_1 + 1000),iVar5,uVar8 - uVar6);
      fVar10 = func_003E19E8(fparam_0,fparam_1,fparam_1,fparam_0,fVar10);
      *(float *)(param_1 + 0x3d0) =
           *(float *)(param_1 + 0xbe4) + (local_3c - *(float *)(param_1 + 0xbe4)) * fVar10;
      *(float *)(param_1 + 0x3d8) =
           *(float *)(param_1 + 0xbec) + (local_34 - *(float *)(param_1 + 0xbec)) * fVar10;
    }
    iVar7 = func_0058A8F0(param_1);
    if (iVar7 != 0) {
      *(int *)(param_1 + 1000) = iVar5;
      func_004FABDC(param_1,0x24,0xffffffff,0);
      uVar1 = uRam002e7ed8;
      *(undefined4 *)(param_1 + 0xb10) = 0x60;
      *(undefined4 *)(param_1 + 0xb14) = uVar1;
      *(undefined4 *)(param_1 + 0xb0c) = 0;
      return 0;
    }
  }
  else if (iVar7 == 0x21) {
    fVar10 = DAT_002e7f20;
    lVar12 = func_0058ACC8(param_1,DAT_002e7f20);
    if ((int)lVar12 != 0) {
      return func_006640EC((undefined4 *)(param_1 + 0x8c8),0x14,fVar10);
    }
  }
  else if (iVar7 == 0x24) {
    if (*(uint *)(param_1 + 0xb0c) < *(uint *)(param_1 + 0xb10)) {
      *(uint *)(param_1 + 0xb0c) = *(uint *)(param_1 + 0xb0c) + 1;
    }
    else {
      func_004FABDC(param_1,0x21,0xffffffff,0);
      *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xffffffcf;
    }
  }
  return 0;
}

