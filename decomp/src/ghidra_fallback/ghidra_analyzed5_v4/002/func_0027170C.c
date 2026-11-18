#include "ghidra_types.h"

extern int func_0016B1B8(int param_1);
extern int func_002714A4(int param_1,int *param_2);
extern int func_002715F8(int param_1,uint param_2,int *param_3);
extern int func_00271968(int param_1,int param_2,int *param_3);
extern int func_0050419C(int param_1,uint param_2,int *param_3);
extern int func_005044B8(int param_1);
extern int func_00582260(int param_1,uint param_2,uint param_3);
extern int func_00689894(int param_1,int *param_2,uint param_3);
extern undefined8 func_00689928(int *param_1,int *param_2,uint param_3);
extern int *DAT_00271970;
extern int DAT_00271974;
extern int DAT_00271978;
extern int DAT_0027197c;
extern undefined DAT_00271980;
extern int *DAT_00271984;
extern int DAT_00271988;
extern int *DAT_0027198c;

// USA 0027170C <- EU 00271734 (Ghidra, non-matching)
// GLOBAL DAT_00271970 int *
// GLOBAL DAT_00271974 int
// GLOBAL DAT_00271978 int
// GLOBAL DAT_0027197c int
// GLOBAL DAT_00271980 undefined
// GLOBAL DAT_00271984 int *
// GLOBAL DAT_00271988 int
// GLOBAL DAT_0027198c int *

void func_0027170C(int param_1,char *param_2)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_70 (*(int *)(albw_frame + 0x0))
  #define local_6c (*(undefined1 * *)(albw_frame + 0x4))
  #define uStack_68 (*(undefined4 *)(albw_frame + 0x8))
  #define auStack_64 ((undefined1 *)(albw_frame + 0xc))
  #define uStack_25 (*(undefined1 *)(albw_frame + 0x4b))
  #define local_20 (*(int *)(albw_frame + 0x50))
  #define local_1c (*(undefined * *)(albw_frame + 0x54))
  *(undefined4 *)(param_1 + 0x7cb4) = 1;
  puVar2 = (uint *)(param_1 + 0x3d74);
  uVar11 = 0;
  uVar8 = *puVar2;
  uVar5 = 0;
  if (0 < (int)uVar8) {
    do {
      if (uVar5 < uVar8) {
        iVar9 = *(int *)(param_1 + 0x3d7c) + uVar5 * 0x620;
      }
      else {
        iVar9 = *(int *)(param_1 + 0x3d7c);
      }
      *(undefined1 *)(iVar9 + 0x584) = 0;
      uVar8 = *puVar2;
      if (uVar5 < uVar8) {
        iVar9 = *(int *)(param_1 + 0x3d7c) + uVar5 * 0x620;
      }
      else {
        iVar9 = *(int *)(param_1 + 0x3d7c);
      }
      if ('\x01' < *(char *)(iVar9 + 0x581)) break;
      uVar5 = uVar5 + 1;
      uVar11 = uVar11 + 1;
    } while ((int)uVar5 < (int)uVar8);
  }
  if (uVar11 <= *(uint *)(param_1 + 0x3d78)) {
    *puVar2 = uVar11;
  }
  iVar3 = func_00582260(*DAT_00271970,(int)*param_2,*(uint *)(param_2 + 4));
  iVar9 = DAT_00271974;
  local_6c = auStack_64;
  uStack_68 = 0x40;
  uStack_25 = 0;
  local_70 = DAT_00271978;
  func_00689894((int)&local_70,(int *)(iVar3 + 4),0xffffffff);
  local_70 = DAT_0027197c;
  local_1c = &DAT_00271980;
  local_20 = iVar9;
  func_00689928(&local_70,&local_20,0xffffffff);
  func_002715F8(param_1,2,(int *)(iVar3 + 4));
  func_00271968(param_1,2,&local_70);
  func_00271968(param_1,3,&local_70);
  func_0016B1B8(*DAT_00271984);
  *(undefined4 *)(DAT_00271988 + param_1) = 0;
  uVar5 = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  do {
    puVar6 = (undefined4 *)(param_1 + 0x10);
    if (uVar5 < 3) {
      puVar6 = puVar6 + uVar5;
    }
    puVar4 = (undefined4 *)(param_1 + 0x3d68);
    if (uVar5 < 3) {
      puVar4 = (undefined4 *)(param_1 + 0x3d68) + uVar5;
    }
    uVar5 = uVar5 + 1;
    *puVar4 = *puVar6;
  } while ((int)uVar5 < 3);
  func_002714A4(param_1,(int *)(iVar3 + 4));
  piVar1 = DAT_0027198c;
  func_005044B8(*DAT_0027198c);
  uVar5 = 0;
  piVar10 = (int *)(param_1 + 0x3d68);
  do {
    uVar8 = 2;
    do {
      piVar7 = piVar10;
      if (uVar8 < 3) {
        piVar7 = piVar10 + uVar8;
      }
      iVar9 = *piVar7 + 0x218;
      if (uVar5 < 2) {
        iVar9 = iVar9 + uVar5 * 0x4c;
      }
      if (**(char **)(iVar9 + 4) != '\0') {
        piVar7 = piVar10;
        if (uVar8 < 3) {
          piVar7 = piVar10 + uVar8;
        }
        piVar7 = (int *)(*piVar7 + 0x218);
        if (uVar5 < 2) {
          piVar7 = piVar7 + uVar5 * 0x13;
        }
        iVar9 = func_0050419C(*piVar1,uVar5 & 0xff,piVar7);
        if (iVar9 != 0) break;
      }
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
    uVar5 = uVar5 + 1;
    if (1 < (int)uVar5) {
      return;
    }
  } while( true );
}

