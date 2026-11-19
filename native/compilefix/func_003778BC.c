/* compilefix: USA 003778BC (EU 00377898), player item-rod action states 0x4C-0x52: spawn position restored (BOOT_LOG 160ae). */
#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern float func_00115C14(float *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0018EF30(float *param_1,uint param_2,int param_3,int param_4);
extern int func_001DCE44(int param_1,int param_2,int param_3);
extern int func_001E8618(int param_1);
extern undefined4 func_0028D580(uint *param_1,int param_2,undefined1 param_3,undefined1 param_4,uint param_5);
extern int func_002D3C34(int param_1);
extern int func_002D55D0(int param_1,uint param_2);
extern int func_002D55E8(int param_1);
extern int func_002D56A8(int param_1,float fparam_0);
extern int func_002D5A38(int param_1);
extern int func_003AE624(int param_1);
extern int func_004905E0(float fparam_0);
extern int func_0051D2CC(int *param_1,int param_2,float fparam_0);
extern int func_0052E5E4(int param_1,int param_2);
extern int func_0052E620(int param_1,int param_2);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0052FE18(int param_1,undefined4 *param_2);
extern int func_0053ED3C(int param_1);
extern int func_0053EDD8(int param_1);
extern int func_0054CDD4(int param_1);
extern int func_0054CE38(int param_1);
extern float DAT_00377c20;
extern float DAT_00377c24;
extern int *DAT_00377c28;
extern uint *DAT_00377c2c;
extern undefined4 DAT_00377c30;
extern float DAT_00377c34;
extern uint *DAT_00377c38;
extern undefined4 *DAT_00377c3c;
extern undefined4 DAT_00377c40;
extern undefined4 *DAT_00377c44;
extern float DAT_00377c48;
extern uint *DAT_00378208;
extern undefined4 *DAT_0037820c;
extern undefined4 DAT_00378210;
extern int *DAT_00378214;

// USA 003778BC <- EU 00377898 (Ghidra, non-matching)
// GLOBAL DAT_00377c20 float
// GLOBAL DAT_00377c24 float
// GLOBAL DAT_00377c28 int *
// GLOBAL DAT_00377c2c uint *
// GLOBAL DAT_00377c30 undefined4
// GLOBAL DAT_00377c34 float
// GLOBAL DAT_00377c38 uint *
// GLOBAL DAT_00377c3c undefined4 *
// GLOBAL DAT_00377c40 undefined4
// GLOBAL DAT_00377c44 undefined4 *
// GLOBAL DAT_00377c48 float
// GLOBAL DAT_00378208 uint *
// GLOBAL DAT_0037820c undefined4 *
// GLOBAL DAT_00378210 undefined4
// GLOBAL DAT_00378214 int *

undefined4 func_003778BC(int *param_1,undefined4 param_2)

{
  _Alignas(8) unsigned char albw_frame[0x40]; /* entry_sp - 0x40 .. entry_sp + 0x0 */
#define stack0xffffffc8 (*(undefined4 *)(albw_frame + 0x8))
  int *piVar1;
  uint *puVar2;
  undefined4 uVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  undefined4 *puVar7;
  float *pfVar8;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  iVar6 = func_0052E5E4(param_1[10],0xb);
  uVar3 = DAT_00377c30;
  puVar2 = DAT_00377c2c;
  piVar1 = DAT_00377c28;
  fVar18 = DAT_00377c20;
  if (iVar6 != 0) {
    switch(param_2) {
    case 0x4c:
      fVar18 = DAT_00377c24;
      iVar6 = func_002D55E8((int)param_1);
      if ((iVar6 == 0) && (iVar6 = func_002D5A38((int)param_1), iVar6 == 0)) {
        func_002D56A8((int)param_1,DAT_00377c34);
        func_0051D2CC((int *)param_1[0xf],param_1[0x16],fVar18);
        iVar6 = func_0054CDD4(param_1[0x12]);
        if ((iVar6 != 0) && (9 < *(uint *)(param_1[0xb] + 0x44))) {
          return func_002D55D0((int)param_1,0x4d);
        }
      }
      break;
    case 0x4d:
      fVar18 = DAT_00377c24;
      iVar6 = func_002D55E8((int)param_1);
      if ((iVar6 == 0) &&
         (func_0051D2CC((int *)param_1[0xf],param_1[0x16],fVar18),
         *(int *)(param_1[0xb] + 0x44) == 2)) {
        {   /* ARM EU 3779F8..377A18: the spawn position is the translation of the matrix 0053ED3C
             * returns (words +0xC / +0x1C / +0x2C) stored at sp; the Ghidra text called it and lost
             * the three stores: the rod's projectile started at stack garbage and Link stayed in
             * the item state (0x4D) for good (Ice Rod, il_saves SkullSwampDark; BOOT_LOG 160ae) */
            float *m = (float *)(uintptr_t)(uint)func_0053ED3C(param_1[0x13]);
            float *v = (float *)&stack0xffffffc8;
            v[0] = m[3];
            v[1] = m[7];
            v[2] = m[11];
        }
        iVar6 = func_0018EF30((float *)&stack0xffffffc8,param_1[0x16],
                              (uint)(2 < *(uint *)(param_1[10] + 0x460)),0);
        param_1[0x20] = iVar6;
        func_002D3C34(*(int *)(param_1[10] + 0x5f8));
        puVar7 = (undefined4 *)param_1[0x1c];
        if (((*DAT_00377c38 & 1) == 0) && (iVar6 = func_00100174((int *)DAT_00377c38), iVar6 != 0))
        {
          *DAT_00377c3c = DAT_00377c40;
        }
        if ((puVar7 == (undefined4 *)0x0) ||
           (iVar6 = (**(code **)*puVar7)(puVar7,DAT_00377c3c), iVar6 == 0)) {
          puVar7 = (undefined4 *)0x0;
        }
        func_003AE624((int)puVar7);
      }
      break;
    case 0x4e:
      *(undefined1 *)(param_1[0x14] + 0x166) = 0;
      return 0;
    case 0x4f:
      iVar6 = func_0054CE38(param_1[0x12]);
      if (iVar6 != 0) {
        *(undefined1 *)(param_1 + 0x1f) = 1;
      }
      if ((*(float *)(param_1[0x12] + 0x24) <= fVar18) || ((char)param_1[0x1f] != '\0'))
      goto LAB_00377de8;
      puVar7 = (undefined4 *)func_0052FBA0(*piVar1 + 0x3dbbc,param_1[0x1d]);
      if (((*puVar2 & 1) == 0) && (iVar6 = func_00100174((int *)DAT_00377c2c), iVar6 != 0)) {
        *DAT_00377c44 = uVar3;
      }
      if ((puVar7 == (undefined4 *)0x0) ||
         (iVar6 = (**(code **)*puVar7)(puVar7,DAT_00377c44), iVar6 == 0)) {
        puVar7 = (undefined4 *)0x0;
      }
      if (puVar7 == (undefined4 *)0x0) goto LAB_00377de8;
      iVar6 = *(int *)(param_1[0x12] + 0x14);
      fVar13 = ALBW_AS_F32(puVar7[0xf4]) - *(float *)param_1[0xc];
      fVar14 = ((float *)param_1[0xc])[2];
      fVar15 = ALBW_AS_F32(puVar7[0xf6]);
      func_00115C14((float *)&stack0xffffffc8);
      fVar4 = DAT_00377c48;
      fVar17 = *(float *)(iVar6 + 0x118);
      fVar16 = *(float *)(iVar6 + 0x11c);
      fVar13 = fVar17 * fVar13;
      fVar14 = fVar16 * (fVar14 - fVar15);
      if (fVar17 != fVar18 || fVar16 != fVar18) {
        if (fVar17 < fVar18) {
          if (fVar16 < fVar18) {
            if (fVar17 <= fVar16) goto LAB_00377cd0;
          }
          else {
            fVar17 = -fVar17;
            if (fVar16 <= fVar17) goto LAB_00377cd0;
          }
LAB_00377cd8:
          fVar17 = fVar17 / fVar16;
        }
        else {
          if (fVar16 < fVar18) {
            fVar16 = -fVar16;
            if (fVar16 <= fVar17) goto LAB_00377cd0;
            goto LAB_00377cd8;
          }
          if (fVar17 < fVar16) goto LAB_00377cd8;
LAB_00377cd0:
          fVar17 = fVar16 / fVar17;
        }
        func_004905E0(fVar17);
      }
      if ((uint)ALBW_AS_U32((fVar13 + fVar14)) <= (uint)ALBW_AS_U32(fVar4)) {
LAB_00377de8:
        iVar6 = param_1[0x13];
        func_0028D580((uint *)(iVar6 + 0x3c),0x5e,1,1,6);
        func_0028D580((uint *)(iVar6 + 0x5c),0x5e,1,1,6);
        param_1[0x1e] = 0;
        return 0;
      }
      if ((ALBW_AS_F32(puVar7[0x11e]) == ALBW_AS_F32(puVar7[0x127])) &&
         (ALBW_AS_F32(puVar7[0x120]) == ALBW_AS_F32(puVar7[0x129]))) {
        iVar6 = param_1[0x13];
        func_0028D580((uint *)(iVar6 + 0x3c),0x61,1,1,6);
        iVar10 = 0x61;
LAB_003781f8:
        return func_0028D580((uint *)(iVar6 + 0x5c),iVar10,1,1,6);
      }
      iVar6 = param_1[0x13];
      param_1[0x1e] = param_1[0x1e] + 1;
      func_0028D580((uint *)(iVar6 + 0x3c),0x61,1,1,6);
      func_0028D580((uint *)(iVar6 + 0x5c),0x61,1,1,6);
      if (10 < param_1[0x1e]) {
        if (((*DAT_00378208 & 1) == 0) && (iVar6 = func_00100174((int *)DAT_00378208), iVar6 != 0))
        {
          *DAT_0037820c = DAT_00378210;
        }
        iVar6 = (**(code **)*puVar7)(puVar7,DAT_0037820c);
        if (iVar6 != 0) {
          return func_002D55D0((int)param_1,0x52);
        }
        return func_002D55D0((int)param_1,0x50);
      }
      break;
    case 0x50:
      puVar7 = (undefined4 *)func_0052FBA0(*DAT_00377c28 + 0x3dbbc,param_1[0x1d]);
      if (((*puVar2 & 1) == 0) && (iVar6 = func_00100174((int *)DAT_00377c2c), iVar6 != 0)) {
        *DAT_00377c44 = uVar3;
      }
      if ((puVar7 == (undefined4 *)0x0) ||
         (iVar6 = (**(code **)*puVar7)(puVar7,DAT_00377c44), iVar6 == 0)) {
        puVar7 = (undefined4 *)0x0;
      }
      if (puVar7 != (undefined4 *)0x0) {
        if ((ALBW_AS_F32(puVar7[0x11e]) == ALBW_AS_F32(puVar7[0x127])) &&
           (ALBW_AS_F32(puVar7[0x120]) == ALBW_AS_F32(puVar7[0x129]))) {
          if (*(char *)((int)param_1 + 0x7e) == '\0') {
            iVar6 = param_1[0x13];
            func_0028D580((uint *)(iVar6 + 0x3c),0x5e,1,1,6);
            func_0028D580((uint *)(iVar6 + 0x5c),0x5e,1,1,6);
            *(undefined1 *)(param_1 + 0x1f) = 1;
          }
          else {
            func_002D55D0((int)param_1,(uint)(fVar18 < *(float *)(param_1[0x12] + 0x24)));
          }
        }
        else {
          func_0052FE18((int)puVar7,(undefined4 *)&stack0xffffffc8);
          func_00115C54((float *)param_1[0xd],(float *)param_1[0xd],(float *)&stack0xffffffc8);
        }
      }
      iVar6 = param_1[0x14];
      if (((*(byte *)(iVar6 + 0x324) & 1) != 0 || (*(byte *)(iVar6 + 0x324) & 8) != 0) ||
         (*(char *)(iVar6 + 0x168) != '\0')) {
        bVar5 = false;
        if (*(float *)(iVar6 + 0x4e4) == fVar18) {
          bVar5 = *(float *)(iVar6 + 0x4e8) == fVar18;
        }
        bVar12 = false;
        if (bVar5) {
          bVar12 = *(float *)(iVar6 + 0x4ec) == fVar18;
        }
        if (bVar12) {
          return 0;
        }
      }
      (**(code **)(*param_1 + 0x20))(param_1);
      *(undefined1 *)(param_1 + 0x1f) = 1;
      *(undefined1 *)((int)param_1 + 0x7d) = 1;
      return func_002D55D0((int)param_1,0);
    case 0x51:
      *(undefined1 *)(param_1[0x14] + 0x166) = 0;
      *(float *)(param_1[0xd] + 4) = fVar18;
      if (*(char *)(param_1[0x14] + 0x4b9) != '\0') {
        pfVar8 = (float *)param_1[0xd];
        *pfVar8 = fVar18;
        pfVar8[1] = fVar18;
        pfVar8[2] = fVar18;
      }
      if (0xf < *(uint *)(param_1[0xb] + 0x44)) {
        pcVar11 = (char *)(param_1[0xb] + 0x20);
        bVar5 = func_0052E620(param_1[10],1);
        if (bVar5) {
          *pcVar11 = '\b';
        }
        piVar1 = DAT_00378214;
        if ((((**(uint **)(param_1[0x12] + 0x14) & 1) != 0) && (*pcVar11 == '\b')) &&
           (iVar6 = func_001DCE44(param_1[10],0,1), iVar6 != 0)) {
          return func_001E8618(*(int *)(*piVar1 + 0x18));
        }
        if (*(int *)(param_1[0xb] + 0x44) == 0x2d) {
          func_001E8618(*(int *)(*piVar1 + 0x18));
          return func_002D55D0((int)param_1,7);
        }
      }
      break;
    case 0x52:
      iVar6 = param_1[0x13];
      if (*(char *)((int)param_1 + 0x7f) == '\0') {
        if (*(short *)(iVar6 + 0x52) == 0x30) {
          if (*(int *)(param_1[0xb] + 0x44) != 0x1e) {
            return 0;
          }
          iVar6 = param_1[0x13];
          *(undefined1 *)((int)param_1 + 0x7d) = 1;
          func_0028D580((uint *)(iVar6 + 0x3c),0x31,1,1,6);
          iVar10 = 0x31;
          goto LAB_003781f8;
        }
        iVar6 = func_0053EDD8(iVar6 + 0x3c);
        if (iVar6 == 0) {
          return 0;
        }
        if (*(float *)(param_1[0x12] + 0x24) <= fVar18) goto LAB_00377928;
      }
      else {
        iVar6 = func_0053EDD8(iVar6 + 0x3c);
        if (iVar6 == 0) {
LAB_00378158:
          if (0x6e < *(uint *)(param_1[0xb] + 0x44)) {
            *(undefined1 *)((int)param_1 + 0x7d) = 1;
          }
          return 0;
        }
        iVar6 = param_1[0x13];
        if (*(short *)(iVar6 + 0x52) == 0x30) {
          func_0028D580((uint *)(iVar6 + 0x3c),0x31,1,0,6);
          func_0028D580((uint *)(iVar6 + 0x5c),0x31,1,0,6);
          goto LAB_00378158;
        }
        if (*(float *)(param_1[0x12] + 0x24) <= fVar18) goto LAB_00377928;
      }
      goto LAB_00377920;
    }
    return 0;
  }
  if (*(float *)(param_1[0x12] + 0x24) <= DAT_00377c20) {
LAB_00377928:
    uVar9 = 0;
    goto LAB_0037792c;
  }
LAB_00377920:
  uVar9 = 1;
LAB_0037792c:
  return func_002D55D0((int)param_1,uVar9);
}

