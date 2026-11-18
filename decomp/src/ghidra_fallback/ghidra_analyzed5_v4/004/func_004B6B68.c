#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0048C378(int *param_1,int param_2,undefined4 param_3);
extern int func_00688CA0(int param_1,int *param_2);
extern int func_00689A2C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int func_00691884(int *param_1,int *param_2);
extern undefined4 DAT_004b6e88;
extern undefined4 DAT_004b6e8c;
extern int DAT_004b6e98;
extern undefined DAT_004b6ec0;
extern undefined DAT_004b6ec4;
extern undefined DAT_004b6ec8;
extern undefined DAT_004b6ecc;
extern undefined DAT_004b6ed0;
extern undefined DAT_004b6ee8;
extern undefined4 *DAT_004b6ff4;
extern undefined4 DAT_004b6ff8;
extern char s_Boots_004b6eb8[];
extern char s_Bracelet_004b6ea4[];
extern char s_Cloth_004b6e90[];
extern char s_Glove_004b6eb0[];
extern char s_Master_004b6ee0[];
extern char s_Normal_004b6ed8[];
extern char s_Pegasus_004b6fec[];
extern char s_Power_004b6ef0[];
extern char s_Sheath_004b6e9c[];

// USA 004B6B68 <- EU 004B6B40 (Ghidra, non-matching)
// GLOBAL DAT_004b6e88 undefined4
// GLOBAL DAT_004b6e8c undefined4
// GLOBAL DAT_004b6e98 int
// GLOBAL DAT_004b6ec0 undefined
// GLOBAL DAT_004b6ec4 undefined
// GLOBAL DAT_004b6ec8 undefined
// GLOBAL DAT_004b6ecc undefined
// GLOBAL DAT_004b6ed0 undefined
// GLOBAL DAT_004b6ee8 undefined
// GLOBAL DAT_004b6ff4 undefined4 *
// GLOBAL DAT_004b6ff8 undefined4
// GLOBAL s_Boots_004b6eb8 string
// GLOBAL s_Bracelet_004b6ea4 string
// GLOBAL s_Cloth_004b6e90 string
// GLOBAL s_Glove_004b6eb0 string
// GLOBAL s_Master_004b6ee0 string
// GLOBAL s_Normal_004b6ed8 string
// GLOBAL s_Pegasus_004b6fec string
// GLOBAL s_Power_004b6ef0 string
// GLOBAL s_Sheath_004b6e9c string

/* WARNING: Removing unreachable block (ram,0x004b6fe8) */

void func_004B6B68(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define aiStack_a8 ((int *)(albw_frame + 0x8))
  #define auStack_9c ((undefined1 *)(albw_frame + 0x14))
  #define aiStack_7c ((int *)(albw_frame + 0x34))
  #define auStack_70 ((undefined1 *)(albw_frame + 0x40))
  #define local_50 (*(int *)(albw_frame + 0x60))
  #define local_4c (*(char * *)(albw_frame + 0x64))
  #define local_48 (*(int *)(albw_frame + 0x68))
  #define local_44 (*(char * *)(albw_frame + 0x6c))
  #define local_40 (*(int *)(albw_frame + 0x70))
  #define local_3c (*(char * *)(albw_frame + 0x74))
  #define local_38 (*(int *)(albw_frame + 0x78))
  #define local_34 (*(char * *)(albw_frame + 0x7c))
  #define local_30 (*(int *)(albw_frame + 0x80))
  #define local_2c (*(char * *)(albw_frame + 0x84))
  puVar2 = func_00689A2C(aiStack_7c,auStack_70,0x20);
  uVar1 = DAT_004b6e8c;
  *(undefined1 *)puVar2[1] = 0;
  *puVar2 = uVar1;
  func_00688CA0(param_3,aiStack_7c);
  iVar5 = DAT_004b6e98;
  local_4c = s_Cloth_004b6e90;
  local_50 = DAT_004b6e98;
  iVar3 = func_00691884(aiStack_7c,&local_50);
  if (iVar3 == 0) {
    local_44 = s_Sheath_004b6e9c;
    local_48 = iVar5;
    iVar3 = func_00691884(aiStack_7c,&local_48);
    if (iVar3 == 0) {
      local_3c = s_Bracelet_004b6ea4;
      local_40 = iVar5;
      iVar3 = func_00691884(aiStack_7c,&local_40);
      if (iVar3 == 0) {
        local_34 = s_Glove_004b6eb0;
        local_38 = iVar5;
        iVar3 = func_00691884(aiStack_7c,&local_38);
        if (iVar3 == 0) {
          local_2c = s_Boots_004b6eb8;
          local_30 = iVar5;
          iVar3 = func_00691884(aiStack_7c,&local_30);
          if (iVar3 == 0) {
            return;
          }
          uVar7 = 4;
        }
        else {
          uVar7 = 3;
        }
      }
      else {
        uVar7 = 2;
      }
    }
    else {
      uVar7 = 1;
    }
  }
  else {
    uVar7 = 0;
  }
  puVar2 = func_00689A2C(aiStack_a8,auStack_9c,0x20);
  *(undefined1 *)puVar2[1] = 0;
  *puVar2 = uVar1;
  func_00688CA0(param_3,aiStack_a8);
  switch(uVar7) {
  case 0:
    local_44 = &DAT_004b6ec0;
    local_48 = iVar5;
    iVar3 = func_00691884(aiStack_a8,&local_48);
    if (iVar3 != 0) {
LAB_004b6f1c:
      uVar6 = 0;
      goto LAB_004b6f4c;
    }
    local_3c = &DAT_004b6ec4;
    local_40 = iVar5;
    iVar3 = func_00691884(aiStack_a8,&local_40);
    if (iVar3 == 0) {
      local_34 = &DAT_004b6ec8;
      local_38 = iVar5;
      iVar3 = func_00691884(aiStack_a8,&local_38);
      if (iVar3 == 0) {
        local_2c = &DAT_004b6ecc;
        local_30 = iVar5;
        iVar5 = func_00691884(aiStack_a8,&local_30);
        if (iVar5 == 0) {
          return;
        }
        uVar6 = 3;
        goto LAB_004b6f4c;
      }
LAB_004b6e80:
      uVar6 = 2;
      goto LAB_004b6f4c;
    }
    break;
  case 1:
    local_44 = &DAT_004b6ed0;
    local_48 = iVar5;
    iVar3 = func_00691884(aiStack_a8,&local_48);
    if (iVar3 != 0) goto LAB_004b6f1c;
    local_3c = s_Normal_004b6ed8;
    local_40 = iVar5;
    iVar3 = func_00691884(aiStack_a8,&local_40);
    if (iVar3 == 0) {
      local_34 = s_Master_004b6ee0;
      local_38 = iVar5;
      iVar5 = func_00691884(aiStack_a8,&local_38);
      if (iVar5 == 0) {
        return;
      }
      goto LAB_004b6e80;
    }
    break;
  case 2:
    local_44 = &DAT_004b6ed0;
    local_48 = iVar5;
    iVar3 = func_00691884(aiStack_a8,&local_48);
    if (iVar3 != 0) goto LAB_004b6f1c;
    local_3c = s_Normal_004b6ed8;
    local_40 = iVar5;
    iVar3 = func_00691884(aiStack_a8,&local_40);
    if (iVar3 == 0) {
      local_34 = &DAT_004b6ee8;
      local_38 = iVar5;
      iVar5 = func_00691884(aiStack_a8,&local_38);
      if (iVar5 == 0) {
        return;
      }
      goto LAB_004b6e80;
    }
    break;
  case 3:
    local_44 = &DAT_004b6ed0;
    local_48 = iVar5;
    iVar3 = func_00691884(aiStack_a8,&local_48);
    if (iVar3 != 0) goto LAB_004b6f1c;
    local_3c = s_Normal_004b6ed8;
    local_40 = iVar5;
    iVar3 = func_00691884(aiStack_a8,&local_40);
    if (iVar3 == 0) {
      local_34 = s_Power_004b6ef0;
      local_38 = iVar5;
      iVar5 = func_00691884(aiStack_a8,&local_38);
      if (iVar5 == 0) {
        return;
      }
      goto LAB_004b6e80;
    }
    break;
  case 4:
    local_44 = s_Normal_004b6ed8;
    local_48 = iVar5;
    iVar3 = func_00691884(aiStack_a8,&local_48);
    if (iVar3 != 0) goto LAB_004b6f1c;
    local_3c = s_Pegasus_004b6fec;
    local_40 = iVar5;
    iVar5 = func_00691884(aiStack_a8,&local_40);
    if (iVar5 == 0) {
      return;
    }
    break;
  default:
    return;
  }
  uVar6 = 1;
LAB_004b6f4c:
  puVar2 = DAT_004b6ff4;
  if (*(int *)(param_1 + 0x20) == 0) {
    iVar5 = 1;
  }
  else {
    iVar5 = func_0010983C(*DAT_004b6ff4,*(int *)(param_1 + 0x20));
  }
  puVar4 = (undefined4 *)func_0010BAB4(0x10);
  if (puVar4 != (undefined4 *)0x0) {
    puVar4[1] = *(undefined4 *)(param_2 + 0x19c34);
    puVar4[2] = 0xd;
    *puVar4 = DAT_004b6ff8;
    *(undefined1 *)(puVar4 + 3) = uVar7;
    *(undefined1 *)((int)puVar4 + 0xd) = uVar6;
  }
  func_0048C378((int *)(param_1 + 0x18b4),0,puVar4);
  if (iVar5 != 1) {
    func_0010983C(*puVar2,iVar5);
  }
  return;
}

