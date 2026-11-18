#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_002F14EC(int param_1,uint param_2,float fparam_0,float fparam_1);
extern int func_002F618C(int param_1,float fparam_0);
extern int func_0036B758(int param_1);
extern int func_0036BE78();
extern float func_003E19E8(float fparam_0,float fparam_1,float fparam_2,float fparam_3,float fparam_4);
extern float func_0049216C(float *param_1,uint *param_2,float *param_3);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A2D1C(int param_1,float *param_2);
extern int func_004D8054(float *param_1,uint param_2,float fparam_0);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_0058A8F0(int param_1);
extern undefined8 func_0058AB74(int param_1);
extern undefined4 func_006640EC(undefined4 *param_1,undefined1 param_2,float fparam_0);
extern int func_0068A560(float *param_1,float *param_2,float *param_3,float fparam_0);
extern int func_0068C690(float *param_1);
extern float DAT_002e90d8;
extern float DAT_002e90dc;
extern float DAT_002e90e0;
extern undefined DAT_002e90e4;
extern uint DAT_002e90f4;
extern undefined4 DAT_002e90f8;
extern undefined4 DAT_002e92ac;
extern undefined4 DAT_002e92b0;
extern float DAT_002e92b4;
extern float DAT_002e92b8;
extern char s__OutImage_002e90e7[];
extern char s_cf_002e90e7[];
extern undefined4 _DAT_002e90e4;

// USA 002E8DF0 <- EU 002E8DCC (Ghidra, non-matching)
// GLOBAL DAT_002e90d8 float
// GLOBAL DAT_002e90dc float
// GLOBAL DAT_002e90e0 float
// GLOBAL DAT_002e90e4 undefined
// GLOBAL DAT_002e90f4 uint
// GLOBAL DAT_002e90f8 undefined4
// GLOBAL DAT_002e92ac undefined4
// GLOBAL DAT_002e92b0 undefined4
// GLOBAL DAT_002e92b4 float
// GLOBAL DAT_002e92b8 float
// GLOBAL EXT_00000004 undefined
// GLOBAL s_cf_002e90e7 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_002E8DF0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint *puVar3;
  float *pfVar4;
  uint uVar5;
  undefined1 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  float *pfVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;
  float fparam_2;
  undefined8 uVar12;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_78 (*(float *)(albw_frame + 0x8))
  #define local_74 (*(uint *)(albw_frame + 0xc))
  #define uStack_70 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_6c (*(undefined4 *)(albw_frame + 0x14))
  #define local_68 (*(float *)(albw_frame + 0x18))
  #define local_64 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_60 (*(undefined4 *)(albw_frame + 0x20))
  #define afStack_58 ((float *)(albw_frame + 0x28))
  iVar2 = func_0036BE78(param_1 + 0x964);
  uVar1 = DAT_002e92ac;
  fparam_2 = DAT_002e90dc;
  fVar10 = DAT_002e90d8;
  puVar8 = (undefined4 *)(param_1 + 0xb7c);
  puVar7 = (undefined4 *)(param_1 + 0xb0c);
  puVar3 = (uint *)(param_1 + 0x1264);
  switch(*(undefined4 *)(param_1 + 0xb7c)) {
  case 0:
    iVar2 = *(int *)(*(int *)(param_1 + 0xdb4) + 0x14);
    if (*(char *)(iVar2 + 0x1c) == '\0') {
      if (*(float *)(iVar2 + 0x10) < DAT_002e90d8) {
        if (DAT_002e90d8 < *(float *)(iVar2 + 8)) break;
      }
      else if (*(float *)(iVar2 + 8) != *(float *)(iVar2 + 0x14)) break;
      *puVar8 = 1;
      *(float *)(param_1 + 0x3dc) = fVar10;
      *(float *)(param_1 + 0x3e0) = fVar10;
      *(float *)(param_1 + 0x3e4) = fVar10;
      func_00115C70(&local_78,(float *)(param_1 + 0xddc),(float *)(param_1 + 0xe30));
      iVar2 = func_0068C690(&local_78);
      *(int *)(param_1 + 1000) = iVar2 + -0x80000000;
      *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 7;
      if (*(char *)(param_1 + 0xe2c) == '\0') {
        func_004FC07C(param_1,0x22,0xffffffff,0);
      }
      else {
        func_004FC07C(param_1,0x23,0xffffffff,0);
      }
      func_002F14EC(param_1,0xb4,ALBW_AS_F32(_DAT_002e90e4),DAT_002e90e0);
      local_68 = *(float *)(param_1 + 0xddc);
      local_64 = *(undefined4 *)(param_1 + 0xde0);
      uStack_60 = *(undefined4 *)(param_1 + 0xde4);
      if ((*(int *)(param_1 + 0x344) != 0) &&
         (func_004A1B9C((int *)&local_78,*(int *)(param_1 + 0x344),
                        (uint *)(s__OutImage_002e90e7 + 1)), uVar5 = local_74, local_78 != 0.0)) {
        local_64 = *(undefined4 *)(param_1 + 0xc);
        func_004D8054(&local_68,*(uint *)(param_1 + 1000),fVar10);
        uStack_70 = *(undefined4 *)(param_1 + 1000);
        local_74 = DAT_002e90f4;
        uStack_6c = 0;
        func_0049216C(afStack_58,&local_74,&local_68);
        if ((local_78 != 0.0) && (*(uint *)((int)ALBW_AS_U32(local_78) + 0x1c) == uVar5)) {
          func_004A2D1C((int)ALBW_AS_U32(local_78),afStack_58);
        }
      }
    }
    break;
  case 1:
    if (*puVar3 < *(uint *)(param_1 + 0x1268)) {
      *puVar3 = *puVar3 + 1;
    }
    if (*(uint *)(param_1 + 0xb9c) < *(uint *)(param_1 + 0xba0)) {
      *(uint *)(param_1 + 0xb9c) = *(uint *)(param_1 + 0xb9c) + 1;
    }
    if (*(uint *)(param_1 + 0x1264) == 0xf) {
      *(undefined1 *)(param_1 + 0xe0e) = 0;
    }
    uVar1 = DAT_002e90f8;
    if (*(uint *)(param_1 + 0x1268) <= *(uint *)(param_1 + 0x1264)) {
      *(undefined4 *)(param_1 + 0xb10) = 4;
      *(undefined4 *)(param_1 + 0xb14) = uVar1;
      *puVar7 = 0;
      *(float *)(param_1 + 0x3dc) = fVar10;
      *(float *)(param_1 + 0x3e0) = fVar10;
      *(float *)(param_1 + 0x3e4) = fVar10;
      puVar7 = (undefined4 *)0x2;
      *puVar8 = 2;
    }
    puVar8 = *(undefined4 **)(param_1 + 0x1268);
    if (puVar8 != (undefined4 *)0x0) {
      puVar7 = (undefined4 *)*puVar3;
    }
    fVar11 = fVar10;
    if ((puVar8 != (undefined4 *)0x0 && puVar7 != (undefined4 *)0x0) &&
       (fVar11 = fparam_2, puVar7 < puVar8)) {
      fVar11 = (float)VectorUnsignedToFloat(puVar7,(byte)(in_fpscr >> 0x15) & 3);
      fVar11 = fVar11 * *(float *)(param_1 + 0x126c);
    }
    fVar11 = func_003E19E8(fVar10,fVar10,fparam_2,fVar10,fVar11);
    pfVar4 = func_0068A560((float *)(param_1 + 0x3d0),(float *)(param_1 + 0xbe4),
                           (float *)(param_1 + 0xbf0),fVar11);
    pfVar9 = *(float **)(param_1 + 0xba0);
    if (pfVar9 != (float *)0x0) {
      pfVar4 = *(float **)(param_1 + 0xb9c);
    }
    if ((pfVar9 != (float *)0x0 && pfVar4 != (float *)0x0) && (fVar10 = fparam_2, pfVar4 < pfVar9))
    {
      fVar10 = (float)VectorUnsignedToFloat(pfVar4,(byte)(in_fpscr >> 0x15) & 3);
      fVar10 = fVar10 * *(float *)(param_1 + 0xba4);
    }
    func_002F618C(param_1,fVar10);
    break;
  case 2:
    uVar5 = *(uint *)(param_1 + 0xb0c);
    if (*(uint *)(param_1 + 0xb10) <= uVar5) {
      *(undefined4 *)(param_1 + 0x1268) = 0x12;
      *(undefined4 *)(param_1 + 0x126c) = uVar1;
      *puVar3 = 0;
      *puVar8 = 3;
      break;
    }
    goto LAB_002e91fc;
  case 3:
    if (*puVar3 < *(uint *)(param_1 + 0x1268)) {
      *puVar3 = *puVar3 + 1;
    }
    uVar1 = DAT_002e92b0;
    if (*(uint *)(param_1 + 0x1268) <= *(uint *)(param_1 + 0x1264)) {
      *(undefined4 *)(param_1 + 0xb10) = 0x3c;
      *(undefined4 *)(param_1 + 0xb14) = uVar1;
      *puVar7 = 0;
      *(float *)(param_1 + 0x3dc) = fVar10;
      *(float *)(param_1 + 0x3e0) = fVar10;
      *(float *)(param_1 + 0x3e4) = fVar10;
      puVar7 = (undefined4 *)&UndefinedInstruction;
      *puVar8 = 4;
    }
    puVar8 = *(undefined4 **)(param_1 + 0x1268);
    if (puVar8 != (undefined4 *)0x0) {
      puVar7 = (undefined4 *)*puVar3;
    }
    fVar11 = fVar10;
    if ((puVar8 != (undefined4 *)0x0 && puVar7 != (undefined4 *)0x0) &&
       (fVar11 = fparam_2, puVar7 < puVar8)) {
      fVar11 = (float)VectorUnsignedToFloat(puVar7,(byte)(in_fpscr >> 0x15) & 3);
      fVar11 = fVar11 * *(float *)(param_1 + 0x126c);
    }
    fVar10 = func_003E19E8(fVar10,DAT_002e92b8,fparam_2,DAT_002e92b4,fVar11);
    func_0068A560((float *)(param_1 + 0x3d0),(float *)(param_1 + 0xbf0),(float *)(param_1 + 0xe00),
                  fVar10);
    break;
  case 4:
    uVar5 = *(uint *)(param_1 + 0xb0c);
    if (*(uint *)(param_1 + 0xb10) <= uVar5) {
      *puVar8 = 5;
      func_0036B758(param_1 + 0x964);
      break;
    }
LAB_002e91fc:
    *(uint *)(param_1 + 0xb0c) = uVar5 + 1;
    break;
  case 5:
    if (iVar2 != 0) {
      if (*(char *)(param_1 + 0xd48) == '\x02') {
        uVar6 = 0x1f;
      }
      else {
        uVar6 = 0x1e;
      }
      return func_006640EC((undefined4 *)(param_1 + 0x8c8),uVar6,DAT_002e90d8);
    }
  }
  uVar12 = func_0058AB74(param_1);
  if ((((int)uVar12 == 0x22) || (uVar12 = func_0058AB74(param_1), (int)uVar12 == 0x23)) &&
     (iVar2 = func_0058A8F0(param_1), iVar2 != 0)) {
    return func_004FC07C(param_1,0x24,0,0);
  }
  return 0;
}

