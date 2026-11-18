#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0048C378(int *param_1,int param_2,undefined4 param_3);
extern int func_006875AC(int *param_1,int *param_2,int param_3);
extern int func_00688CA0(int param_1,int *param_2);
extern int func_00689894(int param_1,int *param_2,uint param_3);
extern int func_00689A2C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int func_00691884(int *param_1,int *param_2);
extern int func_006919D8(int *param_1,int *param_2);
extern undefined4 DAT_004b5474;
extern undefined4 DAT_004b5478;
extern int DAT_004b547c;
extern undefined4 *DAT_004b54b0;
extern undefined4 DAT_004b54b4;
extern undefined DAT_004b54d8;
extern undefined4 DAT_004b55a0;
extern char s_Hilda_004b54c0[];
extern char s_MGanon_004b54d0[];
extern char s_MIDDLE_004b54a0[];
extern char s_Medium_004b54c8[];
extern char s_Middle_004b5498[];
extern char s_Sister_004b54e0[];
extern char s_UPPER_004b5488[];
extern char s_Upper_004b5480[];
extern char s_Zelda_004b54b8[];
extern char s_middle_004b54a8[];
extern char s_upper_004b5490[];

// USA 004B5024 <- EU 004B4FFC (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// GLOBAL DAT_004b5474 undefined4
// GLOBAL DAT_004b5478 undefined4
// GLOBAL DAT_004b547c int
// GLOBAL DAT_004b54b0 undefined4 *
// GLOBAL DAT_004b54b4 undefined4
// GLOBAL DAT_004b54d8 undefined
// GLOBAL DAT_004b55a0 undefined4
// GLOBAL s_Hilda_004b54c0 string
// GLOBAL s_MGanon_004b54d0 string
// GLOBAL s_MIDDLE_004b54a0 string
// GLOBAL s_Medium_004b54c8 string
// GLOBAL s_Middle_004b5498 string
// GLOBAL s_Sister_004b54e0 string
// GLOBAL s_UPPER_004b5488 string
// GLOBAL s_Upper_004b5480 string
// GLOBAL s_Zelda_004b54b8 string
// GLOBAL s_middle_004b54a8 string
// GLOBAL s_upper_004b5490 string

void func_004B5024(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  _Alignas(8) unsigned char albw_frame[0x160];
  #define iStack_158 (*(int *)(albw_frame + 0x8))
  #define local_154 (*(char * *)(albw_frame + 0xc))
  #define auStack_14c ((undefined1 *)(albw_frame + 0x14))
  #define aiStack_12c ((int *)(albw_frame + 0x34))
  #define auStack_120 ((undefined1 *)(albw_frame + 0x40))
  #define local_f8 (*(int * *)(albw_frame + 0x68))
  #define local_f4 ((int *)(albw_frame + 0x6c))
  #define iStack_ec (*(int *)(albw_frame + 0x74))
  #define local_e8 (*(char * *)(albw_frame + 0x78))
  #define auStack_e0 ((undefined1 *)(albw_frame + 0x80))
  #define aiStack_c0 ((int *)(albw_frame + 0xa0))
  #define auStack_b4 ((undefined1 *)(albw_frame + 0xac))
  #define local_80 (*(int * *)(albw_frame + 0xe0))
  #define local_7c (*(int *)(albw_frame + 0xe4))
  #define local_78 (*(int *)(albw_frame + 0xe8))
  #define local_74 (*(char * *)(albw_frame + 0xec))
  #define local_70 (*(int *)(albw_frame + 0xf0))
  #define local_6c (*(int * *)(albw_frame + 0xf4))
  #define local_68 (*(int *)(albw_frame + 0xf8))
  #define local_64 (*(char * *)(albw_frame + 0xfc))
  #define local_60 (*(int *)(albw_frame + 0x100))
  #define local_5c (*(char * *)(albw_frame + 0x104))
  #define local_58 (*(int *)(albw_frame + 0x108))
  #define local_54 (*(char * *)(albw_frame + 0x10c))
  #define local_50 (*(int *)(albw_frame + 0x110))
  #define local_4c (*(char * *)(albw_frame + 0x114))
  #define local_48 (*(int *)(albw_frame + 0x118))
  #define local_44 (*(char * *)(albw_frame + 0x11c))
  #define iStack_34 (*(int *)(albw_frame + 0x12c))
  #define local_30 (*(int *)(albw_frame + 0x130))
  #define local_2c (*(int *)(albw_frame + 0x134))
  #define local_28 (*(int *)(albw_frame + 0x138))
  iStack_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  puVar4 = func_00689A2C(aiStack_c0,auStack_b4,0x20);
  uVar3 = DAT_004b5478;
  uVar2 = DAT_004b5474;
  *(undefined1 *)puVar4[1] = 0;
  *puVar4 = uVar3;
  func_00688CA0(local_2c,aiStack_c0);
  puVar4 = func_00689A2C(aiStack_12c,auStack_120,0x20);
  *(undefined1 *)puVar4[1] = 0;
  *puVar4 = uVar3;
  func_00688CA0(local_2c,aiStack_12c);
  uVar10 = 0;
  puVar4 = func_00689A2C(&iStack_158,auStack_14c,0x20);
  *(undefined1 *)puVar4[1] = 0;
  *puVar4 = uVar3;
  if (*(int *)(local_2c + 8) < *(int *)(local_28 + 8)) {
    func_00688CA0(local_2c,&iStack_158);
  }
  iVar6 = DAT_004b547c;
  if (*local_154 != '\0') {
    local_54 = s_Upper_004b5480;
    local_58 = DAT_004b547c;
    iVar5 = func_00691884(&iStack_158,&local_58);
    if (iVar5 == 0) {
      local_4c = s_UPPER_004b5488;
      local_50 = iVar6;
      iVar5 = func_00691884(&iStack_158,&local_50);
      if (iVar5 != 0) goto LAB_004b5130;
      local_5c = s_upper_004b5490;
      local_60 = iVar6;
      iVar5 = func_00691884(&iStack_158,&local_60);
      bVar1 = false;
      if (iVar5 != 0) goto LAB_004b5130;
    }
    else {
LAB_004b5130:
      bVar1 = true;
    }
    uVar10 = (uint)bVar1;
    if (!bVar1) {
      local_6c = (int *)s_Middle_004b5498;
      local_70 = iVar6;
      iVar5 = func_00691884(&iStack_158,&local_70);
      if (iVar5 == 0) {
        local_64 = s_MIDDLE_004b54a0;
        local_68 = iVar6;
        iVar5 = func_00691884(&iStack_158,&local_68);
        if (iVar5 != 0) goto LAB_004b51ac;
        local_44 = s_middle_004b54a8;
        local_48 = iVar6;
        iVar5 = func_00691884(&iStack_158,&local_48);
        bVar1 = false;
        if (iVar5 != 0) goto LAB_004b51ac;
      }
      else {
LAB_004b51ac:
        bVar1 = true;
      }
      if (bVar1) {
        uVar10 = 2;
      }
    }
  }
  local_7c = -1;
  puVar4 = func_00689A2C(&iStack_ec,auStack_e0,0x20);
  *(undefined1 *)puVar4[1] = 0;
  *puVar4 = uVar3;
  if (*(int *)(local_2c + 8) < *(int *)(local_28 + 8)) {
    func_00688CA0(local_2c,&iStack_ec);
  }
  local_80 = (int *)(local_30 + 0x19c34);
  if (param_5 == 0) {
    if (*local_e8 != '\0') {
      func_006875AC(&local_7c,&iStack_ec,-1);
    }
  }
  else if (*local_e8 != '\0') {
    func_006875AC(local_f4,&iStack_ec,-1);
    local_f4[0] = *local_80 + local_f4[0];
    if (*(int *)(param_1 + 0x24) == 0) {
      iVar5 = 1;
    }
    else {
      iVar5 = func_0010983C(*DAT_004b54b0,*(int *)(param_1 + 0x24));
    }
    piVar8 = (int *)(param_1 + 0x20c0);
    puVar4 = (undefined4 *)func_0010BAB4(0xc);
    if (puVar4 != (undefined4 *)0x0) {
      puVar4[1] = local_f4[0];
      puVar4[2] = 0x33;
      *puVar4 = DAT_004b54b4;
    }
    if (*piVar8 < *(int *)(param_1 + 0x20c4)) {
      *(undefined4 **)(*(int *)(param_1 + 0x20c8) + *piVar8 * 4) = puVar4;
      *piVar8 = *piVar8 + 1;
    }
    param_5 = 0;
    if (iVar5 != 1) {
      func_0010983C(*DAT_004b54b0,iVar5);
    }
  }
  local_74 = s_Zelda_004b54b8;
  local_78 = iVar6;
  iVar5 = func_006919D8(aiStack_12c,&local_78);
  uVar9 = (uint)(iVar5 != -1);
  if (iVar5 != -1) goto LAB_004b5420;
  local_6c = (int *)s_Hilda_004b54c0;
  local_70 = iVar6;
  iVar5 = func_006919D8(aiStack_12c,&local_70);
  if (iVar5 != -1) {
    uVar9 = 2;
    goto LAB_004b5420;
  }
  local_64 = s_Medium_004b54c8;
  local_68 = iVar6;
  iVar5 = func_006919D8(aiStack_12c,&local_68);
  if (iVar5 == -1) {
    local_5c = s_MGanon_004b54d0;
    local_60 = iVar6;
    iVar5 = func_006919D8(aiStack_12c,&local_60);
    if (iVar5 != -1) goto LAB_004b53b4;
    bVar1 = false;
  }
  else {
LAB_004b53b4:
    bVar1 = true;
  }
  if (bVar1) {
    uVar9 = 3;
  }
  else {
    local_54 = &DAT_004b54d8;
    local_58 = iVar6;
    iVar5 = func_006919D8(aiStack_12c,&local_58);
    if (iVar5 == -1) {
      local_4c = s_Sister_004b54e0;
      local_50 = iVar6;
      iVar6 = func_006919D8(aiStack_12c,&local_50);
      if (iVar6 != -1) {
        uVar9 = 0xe;
      }
    }
    else {
      uVar9 = 4;
    }
  }
LAB_004b5420:
  if (*(int *)(param_1 + 0x20) == 0) {
    iVar6 = 1;
  }
  else {
    iVar6 = func_0010983C(*DAT_004b54b0,*(int *)(param_1 + 0x20));
  }
  local_6c = (int *)(param_1 + 0x18b4);
  puVar7 = (undefined4 *)func_0010BAB4(0x74);
  puVar4 = (undefined4 *)0x0;
  if (puVar7 != (undefined4 *)0x0) {
    local_f8 = aiStack_c0;
    puVar7[1] = *local_80;
    puVar7[2] = 0x1b;
    *puVar7 = DAT_004b55a0;
    iVar5 = local_7c;
    puVar4 = func_00689A2C(puVar7 + 3,puVar7 + 6,0x20);
    *puVar4 = uVar2;
    func_00689894((int)puVar4,local_f8,0xffffffff);
    *puVar4 = uVar3;
    puVar7 = func_00689A2C(puVar4 + 0xb,puVar4 + 0xe,0x20);
    *puVar7 = uVar2;
    func_00689894((int)puVar7,aiStack_12c,0xffffffff);
    *puVar7 = uVar3;
    puVar7[0xb] = uVar10;
    puVar7[0xc] = iVar5;
    puVar7[0xd] = uVar9;
    puVar4 = puVar7 + -0xe;
    *(char *)(puVar7 + 0xe) = (char)param_5;
  }
  func_0048C378(local_6c,0,puVar4);
  if (iVar6 != 1) {
    func_0010983C(*DAT_004b54b0,iVar6);
  }
  return;
}

