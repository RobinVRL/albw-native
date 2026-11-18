#include "ghidra_types.h"

extern int func_0019D01C(int *param_1,int *param_2,int *param_3);
extern int func_001FF22C(undefined4 *param_1,undefined4 param_2,int *param_3,undefined4 param_4, undefined4 *param_5,float fparam_0,float fparam_1,float fparam_2);
extern int func_0055696C(int param_1,int param_2);
extern int func_00687AF0(float *param_1,int *param_2);
extern int func_00688CA0(int param_1,int *param_2);
extern int func_00689894(int param_1,int *param_2,uint param_3);
extern int func_00689A2C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int func_00691884(int *param_1,int *param_2);
extern int func_00691D84(int *param_1,int *param_2);
extern int func_00691E50(int *param_1,int *param_2);
extern undefined4 DAT_004b60b4;
extern undefined4 DAT_004b60b8;
extern undefined DAT_004b60bc;
extern int DAT_004b60c4;
extern undefined4 DAT_004b60c8;
extern undefined4 DAT_004b60cc;
extern undefined4 DAT_004b60d0;
extern undefined4 DAT_004b60d4;
extern int *DAT_004b60d8;
extern float DAT_004b6104;
extern undefined4 DAT_004b62e8;
extern undefined4 DAT_004b62ec;
extern char s_Actor_FlatLinkLv1_bch_004b60dc[];
extern char s_Actor_FlatLinkLv2_bch_004b62b8[];
extern char s_Actor_FlatLinkLv3_bch_004b62d0[];
extern char s_FlatLinkSide_004b60f4[];
extern char s_cf_004b60dc[];
extern char s_cf_004b62b8[];
extern char s_cf_004b62d0[];

// USA 004B5D70 <- EU 004B5D48 (Ghidra, non-matching)
// GLOBAL DAT_004b60b4 undefined4
// GLOBAL DAT_004b60b8 undefined4
// GLOBAL DAT_004b60bc undefined
// GLOBAL DAT_004b60c4 int
// GLOBAL DAT_004b60c8 undefined4
// GLOBAL DAT_004b60cc undefined4
// GLOBAL DAT_004b60d0 undefined4
// GLOBAL DAT_004b60d4 undefined4
// GLOBAL DAT_004b60d8 int *
// GLOBAL DAT_004b6104 float
// GLOBAL DAT_004b62e8 undefined4
// GLOBAL DAT_004b62ec undefined4
// GLOBAL s_cf_004b60dc string
// GLOBAL s_cf_004b62b8 string
// GLOBAL s_cf_004b62d0 string
// GLOBAL s_FlatLinkSide_004b60f4 string

undefined4 func_004B5D70(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  _Alignas(8) unsigned char albw_frame[0x150];
  #define iStack_144 (*(int *)(albw_frame + 0xc))
  #define local_140 (*(char * *)(albw_frame + 0x10))
  #define auStack_138 ((undefined1 *)(albw_frame + 0x18))
  #define iStack_f8 (*(int *)(albw_frame + 0x58))
  #define local_f4 (*(char * *)(albw_frame + 0x5c))
  #define auStack_ec ((undefined1 *)(albw_frame + 0x64))
  #define aiStack_d4 ((int *)(albw_frame + 0x7c))
  #define auStack_c8 ((undefined1 *)(albw_frame + 0x88))
  #define local_b0 (*(float *)(albw_frame + 0xa0))
  #define afStack_ac ((float *)(albw_frame + 0xa4))
  #define local_a4 (*(float *)(albw_frame + 0xac))
  #define local_a0 (*(uint *)(albw_frame + 0xb0))
  #define local_98 (*(int *)(albw_frame + 0xb8))
  #define local_94 (*(undefined * *)(albw_frame + 0xbc))
  #define local_90 (*(int *)(albw_frame + 0xc0))
  #define local_8c (*(char * *)(albw_frame + 0xc4))
  #define local_88 (*(int *)(albw_frame + 0xc8))
  #define local_84 (*(char * *)(albw_frame + 0xcc))
  #define local_80 (*(int *)(albw_frame + 0xd0))
  #define local_7c (*(undefined * *)(albw_frame + 0xd4))
  #define aiStack_64 ((int *)(albw_frame + 0xec))
  #define auStack_58 ((undefined1 *)(albw_frame + 0xf8))
  #define local_48 (*(float *)(albw_frame + 0x108))
  #define local_44 (*(float *)(albw_frame + 0x10c))
  #define local_40 ((float *)(albw_frame + 0x110))
  #define iStack_34 (*(int *)(albw_frame + 0x11c))
  #define piStack_30 (*(int * *)(albw_frame + 0x120))
  #define local_2c (*(int *)(albw_frame + 0x124))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x128))
  iStack_34 = param_1;
  piStack_30 = param_2;
  local_2c = param_3;
  uStack_28 = param_4;
  puVar2 = func_00689A2C(aiStack_64,auStack_58,0x10);
  uVar1 = DAT_004b60b8;
  *(undefined1 *)puVar2[1] = 0;
  *puVar2 = uVar1;
  func_00688CA0(local_2c,aiStack_64);
  local_a0 = func_00691D84(param_2,aiStack_64);
  iVar7 = DAT_004b60c4;
  if ((int)local_a0 < 0) {
    return 0;
  }
  piVar9 = aiStack_64;
  local_84 = &DAT_004b60bc;
  piVar4 = param_2 + 0x9c;
  local_88 = DAT_004b60c4;
  iVar3 = func_00691884(piVar9,&local_88);
  if (iVar3 == 0) {
    uVar11 = 0;
    if (0 < param_2[0xb8]) {
      do {
        piVar10 = piVar4 + uVar11 * 7;
        do {
          iVar3 = func_00691884(piVar9,piVar10);
          if (iVar3 != 0) {
            return 0;
          }
          uVar11 = uVar11 + 1;
          if (param_2[0xb8] <= (int)uVar11) goto LAB_004b5e58;
          piVar10 = piVar4;
        } while (3 < uVar11);
      } while( true );
    }
LAB_004b5e58:
    if ((uint)param_2[0xb8] < 4) {
      piVar4 = piVar4 + param_2[0xb8] * 7;
    }
    func_00689894((int)piVar4,piVar9,0xffffffff);
    param_2[0xb8] = param_2[0xb8] + 1;
  }
  else {
    local_7c = &DAT_004b60bc;
    local_80 = iVar7;
    iVar3 = func_00691884(param_2 + 0xb1,&local_80);
    if (iVar3 != 0) {
      return 0;
    }
    func_00689894((int)(param_2 + 0xb1),piVar9,0xffffffff);
  }
  puVar2 = func_00689A2C(&iStack_144,auStack_138,0x40);
  *(undefined1 *)puVar2[1] = 0;
  *puVar2 = DAT_004b60cc;
  func_00688CA0(local_2c,&iStack_144);
  puVar2 = func_00689A2C(&iStack_f8,auStack_ec,0x18);
  *(undefined1 *)puVar2[1] = 0;
  *puVar2 = DAT_004b60d4;
  func_00688CA0(local_2c,&iStack_f8);
  local_94 = &DAT_004b60bc;
  local_98 = iVar7;
  iVar3 = func_00691884(aiStack_64,&local_98);
  if (iVar3 == 0) {
    uVar11 = func_00691E50(param_2 + 0x9c,aiStack_64);
    if (2 < uVar11) {
      return 0;
    }
    puVar2 = (undefined4 *)(param_1 + 0x16c4 + uVar11 * 0xa0);
  }
  else {
    uVar11 = 3;
    puVar2 = (undefined4 *)(param_1 + 0x1620);
    if (*local_140 == '\0') {
      if (*local_f4 != '\0') {
        return 0;
      }
      if (*DAT_004b60d8 != 0) {
        iVar5 = func_0055696C(*DAT_004b60d8,0x1f);
        if (iVar5 == 3) {
          local_8c = s_Actor_FlatLinkLv2_bch_004b62b8;
          local_90 = iVar7;
          func_00689894((int)&iStack_144,&local_90,0xffffffff);
        }
        else {
          local_90 = iVar7;
          if (iVar5 == 4) {
            local_8c = s_Actor_FlatLinkLv3_bch_004b62d0;
            func_00689894((int)&iStack_144,&local_90,0xffffffff);
          }
          else {
            local_8c = s_Actor_FlatLinkLv1_bch_004b60dc;
            func_00689894((int)&iStack_144,&local_90,0xffffffff);
          }
        }
        local_84 = s_FlatLinkSide_004b60f4;
        local_88 = iVar7;
        func_00689894((int)&iStack_f8,&local_88,0xffffffff);
      }
    }
    else if (*local_f4 == '\0') {
      return 0;
    }
  }
  local_48 = DAT_004b6104;
  local_44 = DAT_004b6104;
  local_40[0] = DAT_004b6104;
  puVar6 = func_00689A2C(aiStack_d4,auStack_c8,0x10);
  *(undefined1 *)puVar6[1] = 0;
  *puVar6 = uVar1;
  func_00688CA0(local_2c,aiStack_d4);
  func_00687AF0(&local_48,aiStack_d4);
  func_00688CA0(local_2c,aiStack_d4);
  func_00687AF0(&local_44,aiStack_d4);
  func_00688CA0(local_2c,aiStack_d4);
  func_00687AF0(local_40,aiStack_d4);
  func_00688CA0(local_2c,aiStack_d4);
  func_00687AF0(&local_b0,aiStack_d4);
  func_00688CA0(local_2c,aiStack_d4);
  func_00687AF0(afStack_ac,aiStack_d4);
  func_00688CA0(local_2c,aiStack_d4);
  func_00687AF0(&local_a4,aiStack_d4);
  iVar7 = func_001FF22C(puVar2,&iStack_144,&iStack_f8,local_a0,&local_48,local_b0,afStack_ac[0],
                        local_a4);
  if (iVar7 == 0) {
    return 0;
  }
  puVar6 = (undefined4 *)(param_1 + 0x18a4);
  if (iVar3 == 0) {
    if (*(uint *)(param_1 + 0x23e4) < 4) {
      puVar6 = puVar6 + *(uint *)(param_1 + 0x23e4);
    }
    *puVar6 = puVar2;
    *(int *)(param_1 + 0x23e4) = *(int *)(param_1 + 0x23e4) + 1;
  }
  else {
    *(undefined4 **)(param_1 + 0x18b0) = puVar2;
  }
  iVar7 = puVar2[1];
  puVar2 = func_00689A2C(&local_90,&local_84,0x1e);
  *(undefined1 *)puVar2[1] = 0;
  *puVar2 = DAT_004b62ec;
  func_00688CA0(local_2c,&local_90);
  piVar9 = param_2 + 0x5bfd;
  if (uVar11 < 4) {
    piVar9 = piVar9 + uVar11 * 0x162;
  }
  piVar9[0x161] = iVar7;
  func_0019D01C(piVar9,&local_90,(int *)0x0);
  func_00688CA0(local_2c,&local_90);
  (**(code **)(local_90 + 8))(&local_90);
  iVar3 = 0;
  do {
    if (local_8c[iVar3] == '\0') {
      if (((iVar3 < 0x40001) && (iVar3 != 0)) && (uVar8 = iVar3 - 1, -1 < (int)uVar8))
      goto LAB_004b625c;
      break;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x40001);
  goto LAB_004b6270;
  while( true ) {
    local_8c[uVar8] = '\0';
    uVar8 = uVar8 - 1;
    if (0x7fffffff < uVar8) break;
LAB_004b625c:
    if ((' ' < local_8c[uVar8]) && (local_8c[uVar8] != '\x7f')) break;
  }
LAB_004b6270:
  piVar9 = param_2 + 0x6185;
  if (uVar11 < 4) {
    piVar9 = piVar9 + uVar11 * 0x162;
  }
  piVar9[0x161] = iVar7;
  return func_0019D01C(piVar9,&local_90,(int *)0x0);
}

