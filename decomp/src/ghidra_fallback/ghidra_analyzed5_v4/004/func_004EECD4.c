#include "ghidra_types.h"

extern int func_00120024(undefined4 *param_1,int param_2);
extern int func_001E06D0(int param_1,int param_2,int *param_3);
extern int func_002722F8(int param_1,char *param_2);
extern int func_002E3494(int param_1,int param_2);
extern int func_004A107C(int param_1,int param_2,int *param_3,int param_4,int param_5);
extern int func_004AC000(int param_1);
extern int func_004ADFE4(int param_1,int *param_2);
extern int func_004C4708(int param_1,int param_2);
extern int func_004EA08C(int param_1,char *param_2);
extern int func_004ED394(int param_1);
extern int func_004EE86C(char *param_1);
extern int func_005183A4(int param_1);
extern int func_0051A350(int param_1);
extern int func_00582260(int param_1,uint param_2,uint param_3);
extern int func_00689650(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int *DAT_004eef24;
extern int DAT_004eef28;
extern int *DAT_004eef2c;
extern int *DAT_004eef30;
extern int DAT_004eef34;
extern int DAT_004eef48;
extern int *DAT_004eef54;
extern int *DAT_004eef58;
extern int *DAT_004eef5c;
extern int *DAT_004eef60;
extern int *DAT_004eef64;
extern int *DAT_004eef68;
extern int *DAT_004eef6c;
extern int *DAT_004eef70;
extern int *DAT_004eef74;
extern char s_CaptureDungeon_004eef38[];
extern char s__s_szs_004eef4c[];
extern char s_cf_004eef4c[];

// USA 004EECD4 <- EU 004EECAC (Ghidra, non-matching)
// GLOBAL DAT_004eef24 int *
// GLOBAL DAT_004eef28 int
// GLOBAL DAT_004eef2c int *
// GLOBAL DAT_004eef30 int *
// GLOBAL DAT_004eef34 int
// GLOBAL DAT_004eef48 int
// GLOBAL DAT_004eef54 int *
// GLOBAL DAT_004eef58 int *
// GLOBAL DAT_004eef5c int *
// GLOBAL DAT_004eef60 int *
// GLOBAL DAT_004eef64 int *
// GLOBAL DAT_004eef68 int *
// GLOBAL DAT_004eef6c int *
// GLOBAL DAT_004eef70 int *
// GLOBAL DAT_004eef74 int *
// GLOBAL s_cf_004eef4c string
// GLOBAL s_CaptureDungeon_004eef38 string

void func_004EECD4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  bool bVar11;
  bool bVar12;
  _Alignas(8) unsigned char albw_frame[0x150];
  #define aiStack_144 ((int *)(albw_frame + 0xc))
  #define local_38 (*(int *)(albw_frame + 0x118))
  #define local_34 (*(uint *)(albw_frame + 0x11c))
  #define local_30 (*(int *)(albw_frame + 0x120))
  #define local_2c (*(char * *)(albw_frame + 0x124))
  #define local_28 (*(int *)(albw_frame + 0x128))
  #define local_24 (*(uint *)(albw_frame + 0x12c))
  piVar2 = DAT_004eef24;
  *(undefined1 *)(param_1 + 0x61) = 1;
  *(undefined1 *)(param_1 + 0x60) = 1;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  iVar5 = DAT_004eef28;
  iVar4 = *piVar2;
  if (*(char *)(param_1 + 0x62) != '\0') {
    puVar8 = (undefined4 *)(iVar4 + DAT_004eef28);
    param_4 = *puVar8;
    uVar9 = puVar8[1];
    uVar10 = puVar8[2];
    *(undefined4 *)(param_1 + 0x48) = param_4;
    *(undefined4 *)(param_1 + 0x4c) = uVar9;
    *(undefined4 *)(param_1 + 0x50) = uVar10;
    *(undefined1 *)(iVar5 + iVar4) = 0xff;
  }
  if (*(char *)(iVar4 + 0x25) == '\x02') {
    iVar5 = *(int *)(param_1 + 0x14);
    uVar9 = *(undefined4 *)(iVar5 + 0xe0);
    param_4 = *(undefined4 *)(iVar5 + 0xe4);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar5 + 0xe8);
    *(undefined4 *)(param_1 + 0x48) = uVar9;
    *(undefined4 *)(param_1 + 0x4c) = param_4;
  }
  else if (*(char *)(iVar4 + 0x25) == '\x03') {
    iVar5 = *(int *)(param_1 + 0x14);
    uVar9 = *(undefined4 *)(iVar5 + 0xbc);
    param_4 = *(undefined4 *)(iVar5 + 0xc0);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar5 + 0xc4);
    *(undefined4 *)(param_1 + 0x48) = uVar9;
    *(undefined4 *)(param_1 + 0x4c) = param_4;
  }
  piVar2 = DAT_004eef2c;
  *(undefined1 *)(param_1 + 0x62) = 0;
  if (*(char *)(param_1 + 0x48) != -1) {
    param_4 = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x48);
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0x20) = param_4;
    *(undefined1 *)(param_1 + 0x48) = 0xff;
    func_00582260(*piVar2,(int)*(char *)(param_1 + 0x18),*(uint *)(param_1 + 0x4c));
  }
  *(undefined4 *)(param_1 + 0x74) = 0;
  iVar5 = DAT_004eef34;
  piVar3 = DAT_004eef30;
  uVar7 = (int)*(char *)(param_1 + 0x18) - 9;
  bVar12 = 0xb < uVar7;
  bVar11 = uVar7 == 0xc;
  if (0xc < uVar7) {
    uVar7 = (int)*(char *)(param_1 + 0x18) - 0x18;
    bVar12 = 1 < uVar7;
    bVar11 = uVar7 == 2;
  }
  if (!bVar12 || bVar11) {
    local_2c = s_CaptureDungeon_004eef38;
    local_30 = DAT_004eef34;
    param_4 = 1;
    piVar6 = func_004A107C(DAT_004eef48,(int)&local_30,*(int **)(*DAT_004eef30 + 0x1fa8),1,0);
    *(int **)(param_1 + 0x74) = piVar6;
  }
  func_00120024(&local_38,(int)*(char *)(param_1 + 0x18));
  (**(code **)(local_38 + 8))(&local_38);
  func_00689650(aiStack_144,s__s_szs_004eef4c,local_34,param_4);
  func_001E06D0(*piVar3,3,aiStack_144);
  func_002E3494(*DAT_004eef54,(int)*(char *)(param_1 + 0x18));
  func_002722F8(*DAT_004eef58,(char *)(param_1 + 0x18));
  iVar4 = func_004EE86C((char *)(param_1 + 0x18));
  if ((((iVar4 == 0) && (cVar1 = *(char *)(param_1 + 0x18), cVar1 != '\a')) && (cVar1 != '%')) &&
     (cVar1 < '$')) {
    iVar4 = 0;
  }
  else {
    iVar4 = 1;
  }
  func_004C4708(*DAT_004eef5c,iVar4);
  func_004AC000(*piVar2);
  func_005183A4(*DAT_004eef60);
  func_004ED394(*DAT_004eef64);
  func_00120024(&local_38,(int)*(char *)(param_1 + 0x18));
  (**(code **)(local_38 + 8))(&local_38);
  local_28 = iVar5;
  local_24 = local_34;
  func_004ADFE4(*DAT_004eef68,&local_28);
  func_0051A350(*DAT_004eef6c);
  func_004EA08C(*DAT_004eef70,(char *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x20);
  *(undefined1 *)(*DAT_004eef74 + 0x2c1a) = 1;
  *(undefined1 *)(param_1 + 0x61) = 0;
  return;
}

