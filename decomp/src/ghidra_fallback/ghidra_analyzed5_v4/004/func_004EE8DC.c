#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010B954(int param_1,int param_2,int *param_3,int param_4,int param_5);
extern int func_0010DB90(void);
extern int func_0014AC28(int param_1,int param_2);
extern int func_001DB8D8(int param_1,undefined4 *param_2);
extern int func_001DCD9C(int param_1);
extern int func_001E06D0(int param_1,int param_2,int *param_3);
extern int func_0027170C(int param_1,char *param_2);
extern int func_003280C4(int param_1);
extern int func_00394794(int param_1);
extern int func_004ABA98(int param_1);
extern int func_004B083C(void);
extern int func_004B0A0C(int param_1);
extern int func_004B1A6C(int *param_1);
extern undefined8 func_004C40E8(int param_1);
extern int func_004C457C(int param_1);
extern int func_004C65B8(int param_1);
extern int func_004C6838(int param_1);
extern int func_004C8DE8(int param_1,int param_2);
extern int func_004CCFF0(int param_1);
extern int func_004E9C00(int param_1,char *param_2);
extern int func_004ED2F4(int param_1);
extern int func_004EE86C(char *param_1);
extern int func_00519594(int param_1);
extern int func_00582260(int param_1,uint param_2,uint param_3);
extern int func_00584B94(int param_1,int param_2);
extern int func_00689650(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int *DAT_004eec38;
extern undefined4 *DAT_004eec3c;
extern undefined4 DAT_004eec40;
extern int DAT_004eec44;
extern int DAT_004eec54;
extern int *DAT_004eec58;
extern int *DAT_004eec5c;
extern undefined4 DAT_004eec60;
extern int *DAT_004eec64;
extern int *DAT_004eec70;
extern int *DAT_004eec74;
extern int *DAT_004eec78;
extern int *DAT_004eec7c;
extern int *DAT_004eec80;
extern int *DAT_004eec84;
extern int *DAT_004eec88;
extern int *DAT_004eec8c;
extern int *DAT_004eec90;
extern int *DAT_004eec94;
extern int *DAT_004eec98;
extern int *DAT_004eec9c;
extern int *DAT_004eeca0;
extern int *DAT_004eeca4;
extern int *DAT_004eeca8;
extern char s_TaskStage01_004eec48[];
extern char s__s_szs_004eec68[];
extern char s_cf_004eec68[];

// USA 004EE8DC <- EU 004EE8B4 (Ghidra, non-matching)
// GLOBAL DAT_004eec38 int *
// GLOBAL DAT_004eec3c undefined4 *
// GLOBAL DAT_004eec40 undefined4
// GLOBAL DAT_004eec44 int
// GLOBAL DAT_004eec54 int
// GLOBAL DAT_004eec58 int *
// GLOBAL DAT_004eec5c int *
// GLOBAL DAT_004eec60 undefined4
// GLOBAL DAT_004eec64 int *
// GLOBAL DAT_004eec70 int *
// GLOBAL DAT_004eec74 int *
// GLOBAL DAT_004eec78 int *
// GLOBAL DAT_004eec7c int *
// GLOBAL DAT_004eec80 int *
// GLOBAL DAT_004eec84 int *
// GLOBAL DAT_004eec88 int *
// GLOBAL DAT_004eec8c int *
// GLOBAL DAT_004eec90 int *
// GLOBAL DAT_004eec94 int *
// GLOBAL DAT_004eec98 int *
// GLOBAL DAT_004eec9c int *
// GLOBAL DAT_004eeca0 int *
// GLOBAL DAT_004eeca4 int *
// GLOBAL DAT_004eeca8 int *
// GLOBAL s_cf_004eec68 string
// GLOBAL s_TaskStage01_004eec48 string

void func_004EE8DC(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  bool bVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int *piVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  _Alignas(8) unsigned char albw_frame[0x140];
  #define aiStack_13c ((int *)(albw_frame + 0x4))
  #define local_30 (*(undefined4 *)(albw_frame + 0x110))
  #define local_2c (*(char * *)(albw_frame + 0x114))
  *(undefined1 *)(param_1 + 0x60) = 1;
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(char *)(param_1 + 0x48) != -1) {
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x48);
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x50);
    *(undefined1 *)(param_1 + 0x48) = 0xff;
    func_00582260(*DAT_004eec38,(int)*(char *)(param_1 + 0x18),*(uint *)(param_1 + 0x4c));
  }
  iVar6 = func_004EE86C((char *)(param_1 + 0x18));
  uVar3 = DAT_004eec40;
  puVar2 = DAT_004eec3c;
  if (iVar6 == 0) {
    piVar7 = (int *)func_0010DB90();
    iVar6 = (**(code **)(*piVar7 + 0x3c))(piVar7,0x80);
    local_2c = s_TaskStage01_004eec48;
    uVar12 = 1;
    local_30 = uVar3;
    piVar7 = func_0010B954(iVar6 + -0x40,(int)&local_30,piVar7,1,0);
    *(int **)(param_1 + 0x6c) = piVar7;
    *(int **)(param_1 + 0x70) = piVar7;
  }
  else {
    piVar7 = (int *)func_0010DB90();
    uVar8 = (**(code **)(*piVar7 + 0x3c))(piVar7,0x80);
    iVar6 = DAT_004eec44;
    uVar13 = 0;
    do {
      local_2c = *(char **)(iVar6 + uVar13 * 4);
      uVar12 = 1;
      local_30 = uVar3;
      piVar9 = func_0010B954((uVar8 >> 1) - 0x40,(int)&local_30,piVar7,1,0);
      puVar10 = (undefined4 *)(param_1 + 0x6c);
      if (uVar13 < 2) {
        puVar10 = puVar10 + uVar13;
      }
      uVar13 = uVar13 + 1;
      *puVar10 = piVar9;
    } while ((int)uVar13 < 2);
  }
  cVar1 = *(char *)(param_1 + 0x18);
  bVar5 = true;
  if (cVar1 != '\x04') {
    if (cVar1 < '\x05') {
      if (cVar1 != '\0' && cVar1 != '\x02') goto LAB_004eea24;
    }
    else if (cVar1 != '\b' && cVar1 != '&') goto LAB_004eea24;
  }
  bVar5 = func_00584B94(*DAT_004eec58,DAT_004eec54);
LAB_004eea24:
  if (*(char *)(*DAT_004eec5c + 0x25) == '\x03') {
    bVar5 = false;
  }
  *(bool *)DAT_004eec60 = bVar5;
  *(undefined2 *)(param_1 + 0x6a) = 0;
  if (*(int *)(param_1 + 0x6c) == 0) {
    iVar6 = 1;
  }
  else {
    iVar6 = func_0010983C(*puVar2,*(int *)(param_1 + 0x6c));
  }
  piVar9 = DAT_004eec64;
  func_001DCD9C(*DAT_004eec64);
  piVar7 = DAT_004eec38;
  iVar11 = func_00582260(*DAT_004eec38,(int)*(char *)(param_1 + 0x18),*(uint *)(param_1 + 0x1c));
  (**(code **)(*(int *)(iVar11 + 4) + 8))(iVar11 + 4);
  func_00689650(aiStack_13c,s__s_szs_004eec68,*(uint *)(iVar11 + 8),uVar12);
  func_001E06D0(*DAT_004eec70,4,aiStack_13c);
  func_0027170C(*DAT_004eec74,(char *)(param_1 + 0x18));
  piVar4 = DAT_004eec78;
  if (*DAT_004eec78 != 0) {
    func_004C65B8(*DAT_004eec78);
  }
  func_004C457C(*DAT_004eec7c);
  func_00394794(*DAT_004eec80);
  func_003280C4(*DAT_004eec84);
  func_004ABA98(*piVar7);
  func_001DB8D8(*piVar9,(undefined4 *)(*piVar7 + 0x10));
  func_004ED2F4(*DAT_004eec88);
  if (*piVar4 != 0) {
    func_004C6838(*piVar4);
  }
  iVar11 = func_004B083C();
  if (iVar11 != 0) {
    func_004B1A6C((int *)0x0);
    func_004B0A0C(*DAT_004eec8c);
  }
  func_004CCFF0(*DAT_004eec90);
  func_00519594(*DAT_004eec94);
  piVar7 = DAT_004eec98;
  iVar11 = (int)*(char *)(param_1 + 0x18);
  bVar5 = iVar11 == 8;
  if (bVar5) {
    iVar11 = *(int *)(param_1 + 0x1c);
  }
  if (bVar5 && iVar11 == 8) {
    func_004C40E8(*DAT_004eec9c);
  }
  func_004C8DE8(*piVar7,0);
  func_004E9C00(*DAT_004eeca0,(char *)(param_1 + 0x18));
  uVar8 = (uint)*(byte *)(param_1 + 0x18);
  bVar5 = uVar8 == 0;
  if (bVar5) {
    uVar8 = *(uint *)(param_1 + 0x1c);
  }
  if (bVar5 && uVar8 == 0x2a) {
    *(undefined1 *)(*DAT_004eeca4 + 0x211) = 1;
    func_0014AC28(*DAT_004eec5c,1);
  }
  uVar8 = (uint)*(byte *)(param_1 + 0x18);
  bVar5 = uVar8 == 5;
  if (bVar5) {
    uVar8 = *(uint *)(param_1 + 0x1c);
  }
  if (bVar5 && uVar8 == 9) {
    *(undefined1 *)(*DAT_004eeca8 + 0x151) = 1;
  }
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(undefined1 *)(param_1 + 0x65) = 1;
  if (iVar6 != 1) {
    func_0010983C(*puVar2,iVar6);
  }
  return;
}

