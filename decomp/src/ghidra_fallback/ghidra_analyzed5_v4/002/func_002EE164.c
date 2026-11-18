#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0028FE00(int param_1,int param_2);
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
extern float DAT_002ee44c;
extern float DAT_002ee450;
extern float DAT_002ee454;
extern undefined DAT_002ee458;
extern uint DAT_002ee468;
extern undefined4 DAT_002ee46c;
extern undefined4 DAT_002ee624;
extern undefined4 DAT_002ee628;
extern float DAT_002ee62c;
extern float DAT_002ee630;
extern int *DAT_002ee634;
extern char s__OutImage_002ee45b[];
extern char s_cf_002ee45b[];
extern undefined4 _DAT_002ee458;

// USA 002EE164 <- EU 002EE140 (Ghidra, non-matching)
// GLOBAL DAT_002ee44c float
// GLOBAL DAT_002ee450 float
// GLOBAL DAT_002ee454 float
// GLOBAL DAT_002ee458 undefined
// GLOBAL DAT_002ee468 uint
// GLOBAL DAT_002ee46c undefined4
// GLOBAL DAT_002ee624 undefined4
// GLOBAL DAT_002ee628 undefined4
// GLOBAL DAT_002ee62c float
// GLOBAL DAT_002ee630 float
// GLOBAL DAT_002ee634 int *
// GLOBAL EXT_00000004 undefined
// GLOBAL s_cf_002ee45b string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_002EE164(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint extraout_r1;
  undefined4 *puVar6;
  uint uVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fparam_2;
  undefined8 uVar10;
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
  uVar1 = DAT_002ee624;
  fparam_2 = DAT_002ee450;
  fVar8 = DAT_002ee44c;
  puVar6 = (undefined4 *)(param_1 + 0xb7c);
  puVar5 = (undefined4 *)(param_1 + 0xb0c);
  puVar3 = (uint *)(param_1 + 0x1264);
  switch(*(undefined4 *)(param_1 + 0xb7c)) {
  case 0:
    iVar2 = *(int *)(*(int *)(param_1 + 0xdb4) + 0x14);
    if (*(char *)(iVar2 + 0x1c) == '\0') {
      if (*(float *)(iVar2 + 0x10) < DAT_002ee44c) {
        if (DAT_002ee44c < *(float *)(iVar2 + 8)) break;
      }
      else if (*(float *)(iVar2 + 8) != *(float *)(iVar2 + 0x14)) break;
      *puVar6 = 1;
      *(float *)(param_1 + 0x3dc) = fVar8;
      *(float *)(param_1 + 0x3e0) = fVar8;
      *(float *)(param_1 + 0x3e4) = fVar8;
      func_00115C70(&local_78,(float *)(param_1 + 0xddc),(float *)(param_1 + 0xe30));
      iVar2 = func_0068C690(&local_78);
      *(int *)(param_1 + 1000) = iVar2 + -0x80000000;
      *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 7;
      if (*(char *)(param_1 + 0xe2c) == '\0') {
        func_004FC07C(param_1,0x26,0xffffffff,0);
      }
      else {
        func_004FC07C(param_1,0x27,0xffffffff,0);
      }
      func_002F14EC(param_1,0xb4,ALBW_AS_F32(_DAT_002ee458),DAT_002ee454);
      local_68 = *(float *)(param_1 + 0xddc);
      local_64 = *(undefined4 *)(param_1 + 0xde0);
      uStack_60 = *(undefined4 *)(param_1 + 0xde4);
      if ((*(int *)(param_1 + 0x344) != 0) &&
         (func_004A1B9C((int *)&local_78,*(int *)(param_1 + 0x344),
                        (uint *)(s__OutImage_002ee45b + 1)), uVar4 = local_74, local_78 != 0.0)) {
        local_64 = *(undefined4 *)(param_1 + 0xc);
        func_004D8054(&local_68,*(uint *)(param_1 + 1000),fVar8);
        uStack_70 = *(undefined4 *)(param_1 + 1000);
        local_74 = DAT_002ee468;
        uStack_6c = 0;
        func_0049216C(afStack_58,&local_74,&local_68);
        if ((local_78 != 0.0) && (*(uint *)((int)ALBW_AS_U32(local_78) + 0x1c) == uVar4)) {
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
    uVar1 = DAT_002ee46c;
    if (*(uint *)(param_1 + 0x1268) <= *(uint *)(param_1 + 0x1264)) {
      *(undefined4 *)(param_1 + 0xb10) = 4;
      *(undefined4 *)(param_1 + 0xb14) = uVar1;
      *puVar5 = 0;
      *(float *)(param_1 + 0x3dc) = fVar8;
      *(float *)(param_1 + 0x3e0) = fVar8;
      *(float *)(param_1 + 0x3e4) = fVar8;
      puVar5 = (undefined4 *)0x2;
      *puVar6 = 2;
    }
    puVar6 = *(undefined4 **)(param_1 + 0x1268);
    if (puVar6 != (undefined4 *)0x0) {
      puVar5 = (undefined4 *)*puVar3;
    }
    fVar9 = fVar8;
    if ((puVar6 != (undefined4 *)0x0 && puVar5 != (undefined4 *)0x0) &&
       (fVar9 = fparam_2, puVar5 < puVar6)) {
      fVar9 = (float)VectorUnsignedToFloat(puVar5,(byte)(in_fpscr >> 0x15) & 3);
      fVar9 = fVar9 * *(float *)(param_1 + 0x126c);
    }
    fVar9 = func_003E19E8(fVar8,fVar8,fparam_2,fVar8,fVar9);
    func_0068A560((float *)(param_1 + 0x3d0),(float *)(param_1 + 0xbe4),(float *)(param_1 + 0xbf0),
                  fVar9);
    uVar7 = *(uint *)(param_1 + 0xba0);
    uVar4 = extraout_r1;
    if (uVar7 != 0) {
      uVar4 = *(uint *)(param_1 + 0xb9c);
    }
    if ((uVar7 != 0 && uVar4 != 0) && (fVar8 = fparam_2, uVar4 < uVar7)) {
      fVar8 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
      fVar8 = fVar8 * *(float *)(param_1 + 0xba4);
    }
    func_002F618C(param_1,fVar8);
    break;
  case 2:
    uVar4 = *(uint *)(param_1 + 0xb0c);
    if (*(uint *)(param_1 + 0xb10) <= uVar4) {
      *(undefined4 *)(param_1 + 0x1268) = 0x12;
      *(undefined4 *)(param_1 + 0x126c) = uVar1;
      *puVar3 = 0;
      *puVar6 = 3;
      break;
    }
    goto LAB_002ee570;
  case 3:
    if (*puVar3 < *(uint *)(param_1 + 0x1268)) {
      *puVar3 = *puVar3 + 1;
    }
    uVar1 = DAT_002ee628;
    if (*(uint *)(param_1 + 0x1268) <= *(uint *)(param_1 + 0x1264)) {
      *(undefined4 *)(param_1 + 0xb10) = 0x3c;
      *(undefined4 *)(param_1 + 0xb14) = uVar1;
      *puVar5 = 0;
      *(float *)(param_1 + 0x3dc) = fVar8;
      *(float *)(param_1 + 0x3e0) = fVar8;
      *(float *)(param_1 + 0x3e4) = fVar8;
      puVar5 = (undefined4 *)&UndefinedInstruction;
      *puVar6 = 4;
    }
    puVar6 = *(undefined4 **)(param_1 + 0x1268);
    if (puVar6 != (undefined4 *)0x0) {
      puVar5 = (undefined4 *)*puVar3;
    }
    fVar9 = fVar8;
    if ((puVar6 != (undefined4 *)0x0 && puVar5 != (undefined4 *)0x0) &&
       (fVar9 = fparam_2, puVar5 < puVar6)) {
      fVar9 = (float)VectorUnsignedToFloat(puVar5,(byte)(in_fpscr >> 0x15) & 3);
      fVar9 = fVar9 * *(float *)(param_1 + 0x126c);
    }
    fVar8 = func_003E19E8(fVar8,DAT_002ee630,fparam_2,DAT_002ee62c,fVar9);
    func_0068A560((float *)(param_1 + 0x3d0),(float *)(param_1 + 0xbf0),(float *)(param_1 + 0xe00),
                  fVar8);
    break;
  case 4:
    uVar4 = *(uint *)(param_1 + 0xb0c);
    if (*(uint *)(param_1 + 0xb10) <= uVar4) {
      *puVar6 = 5;
      func_0036B758(param_1 + 0x964);
      break;
    }
LAB_002ee570:
    *(uint *)(param_1 + 0xb0c) = uVar4 + 1;
    break;
  case 5:
    if (iVar2 != 0) {
      func_0028FE00(*DAT_002ee634,0);
      return func_006640EC((undefined4 *)(param_1 + 0x8c8),0x1f,fVar8);
    }
  }
  uVar10 = func_0058AB74(param_1);
  if ((((int)uVar10 == 0x26) || (uVar10 = func_0058AB74(param_1), (int)uVar10 == 0x27)) &&
     (iVar2 = func_0058A8F0(param_1), iVar2 != 0)) {
    return func_004FC07C(param_1,0x28,0,0);
  }
  return 0;
}

