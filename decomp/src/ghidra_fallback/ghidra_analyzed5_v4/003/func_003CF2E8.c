#include "ghidra_types.h"

extern int func_0010BAF0(undefined4 *param_1,undefined4 *param_2);
extern int func_0010BB00(undefined4 *param_1,undefined4 *param_2);
extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);
extern undefined8 func_0011638C(byte *param_1,byte *param_2);
extern undefined8 func_001163A0(uint *param_1,uint *param_2,uint param_3);
extern int func_003CF1FC(int *param_1,int param_2,undefined4 param_3);
extern int func_003D0040(int *param_1);
extern int func_003D0BA4(int *param_1);
extern int func_003D225C(int param_1);
extern int func_003D2288(undefined4 *param_1,int param_2,undefined4 *param_3);
extern int func_003D22F4(undefined4 *param_1,undefined4 *param_2);
extern int func_003D231C(undefined4 *param_1);
extern int func_003D2330(undefined4 param_1,undefined4 param_2);
extern int func_003D35F8(undefined4 *param_1);
extern int func_00563C54(int param_1,int param_2,uint param_3);
extern int func_00563D24(int param_1,int param_2,uint *param_3);
extern int func_00564148(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4);
extern undefined8 func_005641C4(uint *param_1,uint *param_2);
extern int func_0056427C(int param_1);
extern int func_00564398(int *param_1,uint *param_2);
extern int *DAT_003cf87c;
extern uint DAT_003cf880;
extern uint DAT_003cf884;
extern uint DAT_003cf888;
extern uint DAT_003cf88c;
extern uint DAT_003cf890;
extern uint DAT_003cf894;
extern uint DAT_003cf898;
extern uint DAT_003cf89c;

// USA 003CF2E8 <- EU 003CF2C4 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// GLOBAL DAT_003cf87c int *
// GLOBAL DAT_003cf880 uint
// GLOBAL DAT_003cf884 uint
// GLOBAL DAT_003cf888 uint
// GLOBAL DAT_003cf88c uint
// GLOBAL DAT_003cf890 uint
// GLOBAL DAT_003cf894 uint
// GLOBAL DAT_003cf898 uint
// GLOBAL DAT_003cf89c uint

uint func_003CF2E8(int *param_1,uint *param_2,int param_3,undefined4 *param_4,int param_5)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  _Alignas(8) unsigned char albw_frame[0x100];
  #define local_f8 (*(int *)(albw_frame + 0x8))
  #define puStack_f4 (*(uint * *)(albw_frame + 0xc))
  #define puStack_f0 (*(uint * *)(albw_frame + 0x10))
  #define piStack_ec (*(int * *)(albw_frame + 0x14))
  #define auStack_e0 ((uint *)(albw_frame + 0x20))
  #define local_80 (*(int *)(albw_frame + 0x80))
  #define uStack_7c (*(undefined4 *)(albw_frame + 0x84))
  #define puStack_78 (*(uint * *)(albw_frame + 0x88))
  #define auStack_70 ((uint *)(albw_frame + 0x90))
  #define local_68 (*(undefined4 *)(albw_frame + 0x98))
  #define local_64 (*(undefined4 *)(albw_frame + 0x9c))
  #define local_60 (*(int *)(albw_frame + 0xa0))
  #define local_5c (*(uint *)(albw_frame + 0xa4))
  #define local_58 (*(undefined4 *)(albw_frame + 0xa8))
  #define local_54 (*(int * *)(albw_frame + 0xac))
  #define local_50 (*(int * *)(albw_frame + 0xb0))
  #define local_4c (*(uint * *)(albw_frame + 0xb4))
  #define local_48 (*(int * *)(albw_frame + 0xb8))
  #define local_44 (*(int * *)(albw_frame + 0xbc))
  #define local_3c (*(int *)(albw_frame + 0xc4))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0xc8))
  #define piStack_34 (*(int * *)(albw_frame + 0xcc))
  #define puStack_30 (*(uint * *)(albw_frame + 0xd0))
  #define iStack_2c (*(int *)(albw_frame + 0xd4))
  #define local_28 (*(undefined4 * *)(albw_frame + 0xd8))
  piVar1 = DAT_003cf87c;
  piStack_34 = param_1;
  puStack_30 = param_2;
  iStack_2c = param_3;
  local_28 = param_4;
  func_0010C0C0(DAT_003cf87c);
  bVar13 = false;
  func_003D231C(auStack_70);
  local_5c = 0;
  local_60 = 0;
  if ((*(char *)((int)param_1 + 9) == '\0') && (uVar3 = func_003D0BA4(param_1), (int)uVar3 < 0))
  goto LAB_003cf4c4;
  uVar10 = DAT_003cf884;
  uVar3 = DAT_003cf880;
  if (param_1[1] == 0) {
    func_0010C160(piVar1);
    return uVar10;
  }
  if (param_2[3] == 0) {
LAB_003cf35c:
    func_0010C160(piVar1);
    return uVar3;
  }
  local_58 = 0;
  iVar4 = func_00564148((int)param_2,2,&uStack_38,&local_58);
  uVar10 = DAT_003cf888;
  if (iVar4 < 0) goto LAB_003cf35c;
  if (param_1[1] != param_2[4]) {
    func_0010C160(piVar1);
    return uVar10;
  }
  func_003D2288(&local_f8,(int)param_2,auStack_70);
  func_0011638C((byte *)param_2,(byte *)auStack_e0);
  iVar4 = func_0056427C((int)auStack_70);
  if (iVar4 == 0) {
    puVar9 = auStack_70;
    uVar3 = func_00563D24((int)param_1,(uint)(param_3 != 0),puVar9);
    bVar13 = uVar3 != 0xffffffff;
  }
  else {
    func_003D35F8(&local_48);
    local_50 = local_48;
    local_4c = (uint *)local_44;
    func_00564398(&local_f8,(uint *)&local_50);
    local_80 = local_f8;
    uStack_7c = puStack_f4;
    puStack_78 = puStack_f0;
    puVar9 = puStack_f0;
  }
  uVar3 = DAT_003cf88c;
  bVar2 = (byte)param_2[0x1b];
  if (1 < bVar2) {
    bVar2 = *(byte *)((int)param_2 + 0x6d);
  }
  if (1 < bVar2) {
    func_0010C160(piVar1);
    return uVar3;
  }
  local_54 = param_1 + 0x224;
  local_48 = param_1 + 0x222;
  local_44 = param_1 + 0x22c;
  local_50 = param_1 + 0x22a;
  uVar3 = DAT_003cf890;
  if (param_3 == 0) {
    if (*(char *)((int)param_1 + 10) == '\0') {
      puVar8 = (uint *)(param_1 + 0x81);
      local_3c = param_1[0x84];
    }
    else {
      puVar8 = (uint *)(param_1 + 0x221);
      local_3c = param_1[0x224];
    }
    uVar10 = *puVar8;
    uVar11 = puVar8[1];
    uVar12 = puVar8[2];
    puVar8 = (uint *)param_1[0x86];
    bVar14 = puVar8 == (uint *)0x0;
    if (!bVar14) {
      puVar9 = (uint *)param_2[1];
    }
    if ((bVar14 || puVar8 <= puVar9) && (!bVar14 && puVar9 != puVar8)) goto LAB_003cf4c4;
  }
  else {
    if (*(char *)((int)param_1 + 0xb) == '\0') {
      puVar8 = (uint *)(param_1 + 0xed);
      local_3c = param_1[0xf0];
    }
    else {
      puVar8 = (uint *)(param_1 + 0x229);
      local_3c = param_1[0x22c];
    }
    uVar10 = *puVar8;
    uVar11 = puVar8[1];
    uVar12 = puVar8[2];
    puVar8 = (uint *)param_1[0xf2];
    if (puVar8 != (uint *)0x0) {
      puVar9 = (uint *)param_2[1];
    }
    if (puVar8 != (uint *)0x0 && puVar8 < puVar9) {
LAB_003cf4c4:
      func_0010C160(piVar1);
      return uVar3;
    }
  }
  if (bVar13) {
    uVar3 = func_00563D24((int)param_1,param_3,auStack_70);
    if (uVar3 != 0xffffffff) {
      iVar5 = func_00563C54((int)param_1,param_3,uVar3);
      iVar4 = 0;
      if (iVar5 != 0) {
        iVar4 = *(int *)(iVar5 + 4);
      }
      if ((uVar10 != 0) && (uVar10 < param_2[1] + (uVar11 - iVar4))) goto LAB_003cf56c;
      local_5c = param_2[1] - iVar4;
    }
  }
  else {
    if ((uVar10 != 0) && (uVar10 < param_2[1] + uVar11)) {
LAB_003cf56c:
      uVar3 = DAT_003cf894;
      func_0010C160(piVar1);
      return uVar3;
    }
    local_5c = param_2[1];
  }
  uVar3 = DAT_003cf898;
  if (uVar12 == 0) {
    if (!bVar13) goto LAB_003cf5f0;
  }
  else if (!bVar13) {
    if (uVar12 < local_3c + 1U) {
      func_0010C160(piVar1);
      return uVar3;
    }
LAB_003cf5f0:
    local_60 = 1;
  }
  local_4c = (uint *)func_003D2330(param_2[1],4);
  uVar3 = DAT_003cf89c;
  if (local_4c == (uint *)0x0) {
    func_0010C160(piVar1);
    return uVar3;
  }
  func_005641C4(param_2,local_4c);
  func_001163A0(local_4c,auStack_e0,0x70);
  local_68 = 0;
  local_64 = 0;
  iVar4 = func_0056427C((int)auStack_70);
  if (iVar4 == 0) {
    func_0010BAF0(auStack_70,&local_68);
  }
  puStack_f0 = (uint *)param_2[1];
  piStack_ec = param_1 + 0x6b;
  local_f8 = 8;
  puStack_f4 = local_4c;
  uVar3 = (**(code **)(*param_1 + 0x20))(param_1,param_1[1],param_3,&local_68);
  if (param_5 == 0) {
    if (param_3 == 1) {
      if (*(char *)((int)param_1 + 0xb) == '\0') {
        param_1[0x227] = param_1[0xeb];
        param_1[0x228] = param_1[0xec];
        param_1[0x229] = param_1[0xed];
        param_1[0x22a] = param_1[0xee];
        param_1[0x22b] = param_1[0xef];
        param_1[0x22c] = param_1[0xf0];
        param_1[0x22d] = param_1[0xf1];
        param_1[0x22e] = param_1[0xf2];
      }
      *(undefined1 *)((int)param_1 + 0xb) = 1;
      if ((int)uVar3 < 0) goto LAB_003cf85c;
      *local_50 = param_1[0x22a] + local_5c;
      iVar4 = param_1[0x22c];
      piVar6 = local_44;
    }
    else {
      if (*(char *)((int)param_1 + 10) == '\0') {
        param_1[0x21f] = param_1[0x7f];
        param_1[0x220] = param_1[0x80];
        param_1[0x221] = param_1[0x81];
        param_1[0x222] = param_1[0x82];
        param_1[0x223] = param_1[0x83];
        param_1[0x224] = param_1[0x84];
        param_1[0x225] = param_1[0x85];
        param_1[0x226] = param_1[0x86];
      }
      *(undefined1 *)((int)param_1 + 10) = 1;
      if ((int)uVar3 < 0) goto LAB_003cf85c;
      *local_48 = param_1[0x222] + local_5c;
      iVar4 = param_1[0x224];
      piVar6 = local_54;
    }
    *piVar6 = iVar4 + local_60;
  }
  else {
    if (param_3 == 1) {
      uVar10 = func_003CF1FC(param_1,1,param_1 + 0xeb);
    }
    else {
      uVar10 = func_003CF1FC(param_1,0,param_1 + 0x7f);
    }
    if ((int)uVar10 < 0) {
      func_003D225C((int)local_4c);
      func_0010C160(piVar1);
      return uVar10;
    }
    if ((int)uVar3 < 0) goto LAB_003cf85c;
  }
  iVar4 = func_0056427C((int)auStack_70);
  if (iVar4 != 0) {
    puVar7 = func_003D22F4(&local_f8,&local_68);
    func_0010BB00(auStack_70,puVar7);
    func_0010BB00(local_28,auStack_70);
  }
  if (param_3 == 1 && !bVar13) {
    local_f8 = 2;
    uVar10 = (**(code **)(*param_1 + 0x28))(param_1,param_1[1],auStack_70,8);
    if ((uVar10 & 0x80000000) == 0) {
      func_003D0040(param_1);
    }
  }
LAB_003cf85c:
  func_003D225C((int)local_4c);
  func_0010C160(piVar1);
  return uVar3;
}

