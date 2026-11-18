#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_001696F8(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_00522A28(int param_1,int *param_2,int param_3);
extern undefined1 DAT_0017bc44;
extern int DAT_0017bc48;
extern undefined4 DAT_0017bc4c;
extern int DAT_0017bc50;
extern int DAT_0017bc54;
extern int DAT_0017bda4;

// USA 0017B90C <- EU 0017B90C (Ghidra, non-matching)
// GLOBAL DAT_0017bc44 undefined1
// GLOBAL DAT_0017bc48 int
// GLOBAL DAT_0017bc4c undefined4
// GLOBAL DAT_0017bc50 int
// GLOBAL DAT_0017bc54 int
// GLOBAL DAT_0017bda4 int

undefined4 func_0017B90C(int param_1,int *param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint in_r12;
  _Alignas(8) unsigned char albw_frame[0x2c0];
  #define local_2b8 (*(int *)(albw_frame + 0x8))
  #define local_2b4 (*(undefined1 ** *)(albw_frame + 0xc))
  #define local_2b0 (*(int *)(albw_frame + 0x10))
  #define local_2ac ((undefined1 * *)(albw_frame + 0x14))
  #define uStack_1ad (*(undefined1 *)(albw_frame + 0x113))
  #define local_1ac (*(int *)(albw_frame + 0x114))
  #define local_1a8 (*(uint * *)(albw_frame + 0x118))
  #define local_1a4 (*(int *)(albw_frame + 0x11c))
  #define local_1a0 ((uint *)(albw_frame + 0x120))
  #define uStack_a1 (*(undefined1 *)(albw_frame + 0x21f))
  #define local_a0 (*(int *)(albw_frame + 0x220))
  #define local_9c (*(uint * *)(albw_frame + 0x224))
  #define local_98 (*(int *)(albw_frame + 0x228))
  #define local_94 (*(int *)(albw_frame + 0x22c))
  #define local_90 (*(int * *)(albw_frame + 0x230))
  #define local_8c (*(undefined4 *)(albw_frame + 0x234))
  #define local_88 (*(int *)(albw_frame + 0x238))
  #define local_84 (*(undefined1 * *)(albw_frame + 0x23c))
  #define aiStack_80 ((int *)(albw_frame + 0x240))
  iVar2 = DAT_0017bc48;
  local_84 = &DAT_0017bc44;
  local_88 = DAT_0017bc48;
  (**(code **)(*param_2 + 8))(param_2);
  local_2b8 = 0;
  do {
    if (*(char *)(param_2[1] + local_2b8) == '\0') {
      if (local_2b8 < 0x40001) goto LAB_0017b970;
      break;
    }
    local_2b8 = local_2b8 + 1;
  } while (local_2b8 < 0x40001);
  local_2b8 = 0;
LAB_0017b970:
  (**(code **)(local_88 + 8))(&local_88);
  iVar9 = 0;
  do {
    if (local_84[iVar9] == '\0') {
      if (iVar9 < 0x40001) goto LAB_0017b9b0;
      break;
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 < 0x40001);
  iVar9 = 0;
LAB_0017b9b0:
  local_2b8 = local_2b8 - iVar9;
  iVar8 = 0;
  if (-1 < local_2b8) {
    do {
      local_2b0 = iVar2;
      local_2ac[0] = (undefined1 *)(param_2[1] + iVar8);
      (**(code **)(iVar2 + 8))(&local_2b0);
      (**(code **)(local_2b0 + 8))(&local_2b0);
      puVar3 = local_2ac[0];
      (**(code **)(local_88 + 8))(&local_88);
      if (puVar3 != local_84) {
        if (iVar9 < 0x40001) {
          iVar5 = iVar9;
          if (iVar9 < 1) goto LAB_0017ba70;
        }
        else {
          iVar5 = 0x40000;
        }
        iVar4 = 0;
        do {
          uVar7 = (uint)(char)local_2ac[0][iVar4];
          if (uVar7 == 0) {
            in_r12 = (uint)(byte)local_84[iVar4];
          }
          if (uVar7 == 0 && in_r12 == 0) break;
          if (((uVar7 == 0) || (in_r12 = (uint)(char)local_84[iVar4], in_r12 == 0)) ||
             (uVar7 != in_r12)) {
            bVar1 = false;
            goto LAB_0017ba7c;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar5);
      }
LAB_0017ba70:
      bVar1 = true;
LAB_0017ba7c:
      if (bVar1) goto LAB_0017ba98;
      iVar8 = iVar8 + 1;
    } while (iVar8 <= local_2b8);
  }
  iVar8 = -1;
LAB_0017ba98:
  local_90 = (int *)(param_1 + 0x7b4);
  if (iVar8 == -1) {
    uVar7 = func_00522A28(*(int *)(param_1 + 0x7b4),param_2,0);
    *(uint *)(param_1 + 0x878) = uVar7;
  }
  else {
    (**(code **)(*param_2 + 8))(param_2);
    iVar9 = 0;
    do {
      if (*(char *)(param_2[1] + iVar9) == '\0') {
        if (iVar9 < 0x40001) goto LAB_0017baf0;
        break;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < 0x40001);
    iVar9 = 0;
LAB_0017baf0:
    local_2b0 = 0x100;
    local_8c = DAT_0017bc4c;
    uStack_1ad = 0;
    local_98 = DAT_0017bc50;
    local_2b8 = DAT_0017bc50;
    local_2b4 = local_2ac;
    (**(code **)(*param_2 + 8))(param_2);
    uVar7 = 0;
    do {
      if (*(char *)(param_2[1] + uVar7) == '\0') {
        if ((int)uVar7 < 0x40001) goto LAB_0017bb6c;
        break;
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < 0x40001);
    uVar7 = 0;
LAB_0017bb6c:
    if (local_2b0 <= (int)uVar7) {
      uVar7 = local_2b0 - 1;
    }
    (**(code **)(*param_2 + 8))(param_2);
    func_0010E3C4((uint *)local_2ac,(uint *)param_2[1],uVar7);
    *(undefined1 *)((int)local_2ac + uVar7) = 0;
    local_2b8 = DAT_0017bc54;
    local_94 = DAT_0017bc54;
    iVar9 = iVar9 - iVar8;
    (**(code **)(DAT_0017bc54 + 8))(&local_2b8);
    iVar5 = 0;
    do {
      if (*(char *)((int)local_2b4 + iVar5) == '\0') {
        if (iVar5 < 0x40001) goto LAB_0017bbf0;
        break;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x40001);
    iVar5 = 0;
LAB_0017bbf0:
    if (-1 < iVar9) {
      if (iVar5 < iVar9) {
        iVar9 = iVar5;
      }
      *(undefined1 *)((int)local_2b4 + (iVar5 - iVar9)) = 0;
    }
    iVar8 = iVar8 + 1;
    (**(code **)(*param_2 + 8))(param_2);
    iVar9 = 0;
    do {
      if (*(char *)(param_2[1] + iVar9) == '\0') {
        if (iVar9 < 0x40001) goto LAB_0017bc64;
        break;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < 0x40001);
    iVar9 = 0;
LAB_0017bc64:
    iVar5 = DAT_0017bda4;
    if (iVar8 >= 0 && iVar8 <= iVar9) {
      iVar5 = param_2[1];
    }
    local_a0 = iVar2;
    if (iVar8 < 0 || iVar9 < iVar8) {
      local_9c = *(uint **)(iVar5 + 4);
    }
    else {
      local_9c = (uint *)(iVar5 + iVar8);
    }
    local_1a4 = 0x100;
    uStack_a1 = 0;
    local_1ac = local_98;
    local_1a8 = local_1a0;
    (**(code **)(iVar2 + 8))(&local_a0);
    uVar7 = 0;
    do {
      if (*(char *)((int)local_9c + uVar7) == '\0') {
        if ((int)uVar7 < 0x40001) goto LAB_0017bcf4;
        break;
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < 0x40001);
    uVar7 = 0;
LAB_0017bcf4:
    if (local_1a4 <= (int)uVar7) {
      uVar7 = local_1a4 - 1;
    }
    (**(code **)(local_a0 + 8))(&local_a0);
    func_0010E3C4(local_1a0,local_9c,uVar7);
    *(undefined1 *)((int)local_1a0 + uVar7) = 0;
    local_1ac = local_94;
    uVar7 = func_00522A28(*(int *)(param_1 + 0x7b4),&local_2b8,0);
    *(uint *)(param_1 + 0x878) = uVar7;
    uVar7 = func_00522A28(*local_90,&local_1ac,0);
    *(uint *)(param_1 + 0x87c) = uVar7;
  }
  puVar6 = (uint *)func_002C11E8(aiStack_80,*(undefined4 *)(param_1 + 0x878),10,0);
  func_001696F8(*(int *)(param_1 + 0x7b4),puVar6);
  return 1;
}

