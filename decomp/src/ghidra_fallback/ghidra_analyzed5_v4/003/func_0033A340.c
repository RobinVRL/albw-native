#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_004BC8D8(int param_1);
extern int func_004BD474(int param_1);
extern float func_004BDB2C(undefined4 param_1,int param_2,float fparam_0);
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern int func_004C173C(int *param_1,int param_2,undefined4 param_3);
extern int func_004CF478(int param_1,int param_2);
extern int func_00584B94(int param_1,int param_2);
extern int func_00628EF0(int param_1,int param_2,undefined1 param_3);
extern int func_00629B74(undefined4 *param_1,uint *param_2,undefined4 param_3,undefined1 param_4, undefined4 *param_5);
extern int DAT_0033a704;
extern undefined DAT_0033a708;
extern uint DAT_0033a718;
extern uint DAT_0033a71c;
extern undefined4 *DAT_0033a720;
extern undefined4 *DAT_0033a724;
extern int DAT_0033a728;
extern undefined *DAT_0033a72c;
extern int DAT_0033a730;
extern int *DAT_0033a784;
extern int *DAT_0033a92c;
extern undefined4 DAT_0033a930;
extern undefined4 DAT_0033a934;
extern undefined4 DAT_0033a938;
extern float DAT_0033a93c;
extern char s_Invalid_0033a924[];
extern char s_cState_EventEnd_0033a75c[];
extern char s_cState_Event_0033a74c[];
extern char s_cState_Hide_0033a76c[];
extern char s_cState_Idle_0033a778[];
extern char s_cState_Wait_0033a734[];
extern char s_cState_Walk_0033a740[];

// USA 0033A340 <- EU 0033A31C (Ghidra, non-matching)
// GLOBAL DAT_0033a704 int
// GLOBAL DAT_0033a708 undefined
// GLOBAL DAT_0033a718 uint
// GLOBAL DAT_0033a71c uint
// GLOBAL DAT_0033a720 undefined4 *
// GLOBAL DAT_0033a724 undefined4 *
// GLOBAL DAT_0033a728 int
// GLOBAL DAT_0033a72c undefined *
// GLOBAL DAT_0033a730 int
// GLOBAL DAT_0033a784 int *
// GLOBAL DAT_0033a92c int *
// GLOBAL DAT_0033a930 undefined4
// GLOBAL DAT_0033a934 undefined4
// GLOBAL DAT_0033a938 undefined4
// GLOBAL DAT_0033a93c float
// GLOBAL s_Invalid_0033a924 string
// GLOBAL s_cState_EventEnd_0033a75c string
// GLOBAL s_cState_Event_0033a74c string
// GLOBAL s_cState_Hide_0033a76c string
// GLOBAL s_cState_Idle_0033a778 string
// GLOBAL s_cState_Wait_0033a734 string
// GLOBAL s_cState_Walk_0033a740 string

/* WARNING: Variable defined which should be unmapped: objStack_58 */

int * func_0033A340(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  bool bVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define objStack_58 ((uint *)(albw_frame + 0x8))
  #define local_50 (*(uint *)(albw_frame + 0x10))
  #define local_4c (*(char * *)(albw_frame + 0x14))
  #define local_48 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x20))
  #define local_3c (*(undefined1 *)(albw_frame + 0x24))
  #define local_3b (*(undefined1 *)(albw_frame + 0x25))
  #define puStack_2c (*(undefined4 * *)(albw_frame + 0x34))
  #define local_28 (*(uint * *)(albw_frame + 0x38))
  objStack_58[0] = (uint)&local_48;
  local_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  local_3c = 0;
  local_3b = 1;
  puStack_2c = param_1;
  local_28 = param_2;
  piVar3 = (int *)func_00629B74(param_1,param_2,0,0xff,(undefined4 *)objStack_58[0]);
  iVar7 = DAT_0033a704 + 0xb8;
  *piVar3 = DAT_0033a704;
  piVar3[200] = iVar7;
  *(undefined1 *)((int)piVar3 + 0x989) = 1;
  *(undefined1 *)((int)piVar3 + 0x98a) = 0;
  uVar11 = DAT_0033a718;
  *(char *)((int)piVar3 + 0x98a) = (char)*(undefined2 *)((int)piVar3 + 0x32);
  local_4c = &DAT_0033a708;
  objStack_58[0] = DAT_0033a71c;
  local_50 = uVar11;
  func_004C173C(piVar3,4,DAT_0033a71c);
  func_004C03B8((int)piVar3,DAT_0033a720);
  *(undefined1 *)((int)piVar3 + 0x966) = 6;
  piVar3[0x25d] = (int)piVar3;
  iVar7 = func_0010BA78(0x60);
  piVar3[0x25e] = iVar7;
  puVar4 = DAT_0033a724;
  piVar3[0x25f] = iVar7 + (uint)*(byte *)((int)piVar3 + 0x966) * 8;
  iVar6 = 6;
  puVar5 = (undefined4 *)(iVar7 + -8);
  do {
    uVar12 = DAT_0033a724[1];
    iVar6 = iVar6 + -1;
    puVar5[2] = *DAT_0033a724;
    puVar5[3] = uVar12;
    uVar12 = puVar4[1];
    puVar5[4] = *puVar4;
    puVar5[5] = uVar12;
    puVar5 = puVar5 + 4;
  } while (iVar6 != 0);
  bVar1 = *(byte *)((int)piVar3 + 0x966);
  uVar10 = (uint)bVar1;
  puVar4 = (undefined4 *)func_0010BA78(uVar10 << 3);
  iVar7 = DAT_0033a728;
  piVar3[0x260] = (int)puVar4;
  if (uVar10 != 0) {
    puVar5 = puVar4 + -2;
    if ((bVar1 & 1) != 0) {
      uVar12 = *(undefined4 *)(iVar7 + 0x8c);
      *puVar4 = *(undefined4 *)(iVar7 + 0x88);
      puVar4[1] = uVar12;
      puVar5 = puVar4;
    }
    for (iVar6 = (int)uVar10 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      uVar12 = *(undefined4 *)(iVar7 + 0x8c);
      puVar5[2] = *(undefined4 *)(iVar7 + 0x88);
      puVar5[3] = uVar12;
      uVar12 = *(undefined4 *)(iVar7 + 0x8c);
      puVar5[4] = *(undefined4 *)(iVar7 + 0x88);
      puVar5[5] = uVar12;
      puVar5 = puVar5 + 4;
    }
  }
  puVar4 = (undefined4 *)func_0010CEE0(0xe0,(int *)0x0,4);
  iVar6 = 0;
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0x24;
    puVar4[1] = 6;
    iVar6 = func_00100118((int)(puVar4 + 2),DAT_0033a72c,0x24,6);
  }
  if (iVar6 != 0) {
    piVar3[0x25a] = 6;
    piVar3[0x25b] = iVar6;
  }
  iVar6 = DAT_0033a730;
  piVar3[0xd5] = (int)(piVar3 + 600);
  *(undefined2 *)(iVar6 + (int)piVar3) = 6;
  local_4c = s_cState_Wait_0033a734;
  local_50 = uVar11;
  func_0010BEC4((int)(piVar3 + 600),0,(int *)&local_50);
  puVar4 = (undefined4 *)piVar3[0x25e];
  uVar14 = *(undefined4 *)(iVar7 + 0x80);
  uVar15 = *(undefined4 *)(iVar7 + 0x7c);
  uVar12 = *(undefined4 *)(iVar7 + 0x84);
  uVar16 = *(undefined8 *)(iVar7 + 0x88);
  *puVar4 = *(undefined4 *)(iVar7 + 0x78);
  puVar4[1] = uVar15;
  puVar4 = (undefined4 *)piVar3[0x25f];
  *puVar4 = uVar14;
  puVar4[1] = uVar12;
  puVar4 = (undefined4 *)piVar3[0x260];
  *puVar4 = (int)uVar16;
  puVar4[1] = (int)((ulonglong)uVar16 >> 0x20);
  local_4c = s_cState_Walk_0033a740;
  local_50 = uVar11;
  func_0010BEC4((int)(piVar3 + 600),1,(int *)&local_50);
  iVar6 = piVar3[0x25e];
  uVar12 = *(undefined4 *)(iVar7 + 0x94);
  uVar14 = *(undefined4 *)(iVar7 + 0x98);
  uVar15 = *(undefined4 *)(iVar7 + 0x9c);
  *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(iVar7 + 0x90);
  *(undefined4 *)(iVar6 + 0xc) = uVar12;
  iVar6 = piVar3[0x25f];
  *(undefined4 *)(iVar6 + 8) = uVar14;
  *(undefined4 *)(iVar6 + 0xc) = uVar15;
  iVar6 = piVar3[0x260];
  *(int *)(iVar6 + 8) = (int)uVar16;
  *(int *)(iVar6 + 0xc) = (int)((ulonglong)uVar16 >> 0x20);
  local_4c = s_cState_Event_0033a74c;
  local_50 = uVar11;
  func_0010BEC4((int)(piVar3 + 600),2,(int *)&local_50);
  iVar6 = piVar3[0x25e];
  uVar12 = *(undefined4 *)(iVar7 + 0xa4);
  uVar14 = *(undefined4 *)(iVar7 + 0xa8);
  uVar15 = *(undefined4 *)(iVar7 + 0xac);
  *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(iVar7 + 0xa0);
  *(undefined4 *)(iVar6 + 0x14) = uVar12;
  iVar6 = piVar3[0x25f];
  *(undefined4 *)(iVar6 + 0x10) = uVar14;
  *(undefined4 *)(iVar6 + 0x14) = uVar15;
  iVar6 = piVar3[0x260];
  *(int *)(iVar6 + 0x10) = (int)uVar16;
  *(int *)(iVar6 + 0x14) = (int)((ulonglong)uVar16 >> 0x20);
  local_4c = s_cState_EventEnd_0033a75c;
  local_50 = uVar11;
  func_0010BEC4((int)(piVar3 + 600),3,(int *)&local_50);
  iVar6 = piVar3[0x25e];
  uVar12 = *(undefined4 *)(iVar7 + 0xb8);
  uVar14 = *(undefined4 *)(iVar7 + 0xbc);
  uVar13 = *(undefined4 *)(iVar7 + 0xc0);
  uVar15 = *(undefined4 *)(iVar7 + 0xc4);
  uVar8 = *(undefined4 *)(iVar7 + 0xb4);
  *(undefined4 *)(iVar6 + 0x18) = *(undefined4 *)(iVar7 + 0xb0);
  *(undefined4 *)(iVar6 + 0x1c) = uVar8;
  iVar6 = piVar3[0x25f];
  *(undefined4 *)(iVar6 + 0x18) = uVar12;
  *(undefined4 *)(iVar6 + 0x1c) = uVar14;
  iVar6 = piVar3[0x260];
  *(undefined4 *)(iVar6 + 0x18) = uVar13;
  *(undefined4 *)(iVar6 + 0x1c) = uVar15;
  local_4c = s_cState_Hide_0033a76c;
  local_50 = uVar11;
  func_0010BEC4((int)(piVar3 + 600),4,(int *)&local_50);
  iVar6 = piVar3[0x25e];
  uVar12 = *(undefined4 *)(iVar7 + 0xcc);
  uVar13 = *(undefined4 *)(iVar7 + 0xd0);
  uVar14 = *(undefined4 *)(iVar7 + 0xd4);
  uVar15 = *(undefined4 *)(iVar7 + 0xd8);
  uVar8 = *(undefined4 *)(iVar7 + 0xdc);
  *(undefined4 *)(iVar6 + 0x20) = *(undefined4 *)(iVar7 + 200);
  *(undefined4 *)(iVar6 + 0x24) = uVar12;
  iVar6 = piVar3[0x25f];
  *(undefined4 *)(iVar6 + 0x20) = uVar13;
  *(undefined4 *)(iVar6 + 0x24) = uVar14;
  iVar6 = piVar3[0x260];
  *(undefined4 *)(iVar6 + 0x20) = uVar15;
  *(undefined4 *)(iVar6 + 0x24) = uVar8;
  local_4c = s_cState_Idle_0033a778;
  local_50 = uVar11;
  func_0010BEC4((int)(piVar3 + 600),5,(int *)&local_50);
  iVar6 = piVar3[0x25e];
  uVar12 = *(undefined4 *)(iVar7 + 0xe4);
  uVar14 = *(undefined4 *)(iVar7 + 0xe8);
  uVar13 = *(undefined4 *)(iVar7 + 0x88);
  uVar8 = *(undefined4 *)(iVar7 + 0xec);
  uVar15 = *(undefined4 *)(iVar7 + 0x8c);
  *(undefined4 *)(iVar6 + 0x28) = *(undefined4 *)(iVar7 + 0xe0);
  *(undefined4 *)(iVar6 + 0x2c) = uVar12;
  iVar7 = piVar3[0x25f];
  *(undefined4 *)(iVar7 + 0x28) = uVar14;
  *(undefined4 *)(iVar7 + 0x2c) = uVar8;
  iVar7 = piVar3[0x260];
  *(undefined4 *)(iVar7 + 0x28) = uVar13;
  *(undefined4 *)(iVar7 + 0x2c) = uVar15;
  if (*(char *)((int)piVar3 + 0x98a) == '\n') {
    func_004BD474((int)piVar3);
    func_00628EF0((int)piVar3,0,0);
    piVar3[0x261] = 0;
    goto LAB_0033a8ec;
  }
  func_00628EF0((int)piVar3,5,0);
  bVar2 = func_00584B94(*DAT_0033a784,0x144);
  if (!bVar2) {
    func_004CF478(piVar3[0x1e8],0);
    *(undefined1 *)((int)piVar3 + 0x989) = 0;
  }
  piVar3[0x22b] = piVar3[0x22b] | 0x10;
  piVar9 = (int *)local_28[0xaf];
  if (piVar9 == (int *)0x0) {
LAB_0033a8a4:
    bVar2 = true;
  }
  else {
    objStack_58[1] = (uint)s_Invalid_0033a924;
    objStack_58[0] = uVar11;
    (**(code **)(*piVar9 + 8))(piVar9);
    (**(code **)(*piVar9 + 8))(piVar9);
    uVar11 = piVar9[1];
    (**(code **)(objStack_58[0] + 8))(objStack_58);
    if (uVar11 == objStack_58[1]) goto LAB_0033a8a4;
    iVar7 = 0;
    do {
      if (*(char *)(piVar9[1] + iVar7) != *(char *)(objStack_58[1] + iVar7)) break;
      if (*(char *)(piVar9[1] + iVar7) == '\0') goto LAB_0033a8a4;
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x40001);
    bVar2 = false;
  }
  uVar15 = DAT_0033a938;
  uVar14 = DAT_0033a934;
  uVar12 = DAT_0033a930;
  if (bVar2) {
    iVar7 = piVar3[0x1e8];
    if (*(char *)(*DAT_0033a92c + 0x18) == '\x04') {
      *(uint *)(iVar7 + 0x164) = *(uint *)(iVar7 + 0x164) | 0x40000000;
      *(undefined4 *)(iVar7 + 0x74) = uVar14;
      *(undefined4 *)(iVar7 + 0x78) = uVar14;
      *(undefined4 *)(iVar7 + 0x7c) = uVar14;
    }
    else {
      *(uint *)(iVar7 + 0x164) = *(uint *)(iVar7 + 0x164) | 0x40000000;
      *(undefined4 *)(iVar7 + 0x74) = uVar12;
      *(undefined4 *)(iVar7 + 0x78) = uVar12;
      *(undefined4 *)(iVar7 + 0x7c) = uVar12;
    }
  }
  else {
    iVar7 = piVar3[0x1e8];
    *(uint *)(iVar7 + 0x164) = *(uint *)(iVar7 + 0x164) | 0x40000000;
    *(undefined4 *)(iVar7 + 0x74) = uVar15;
    *(undefined4 *)(iVar7 + 0x78) = uVar15;
    *(undefined4 *)(iVar7 + 0x7c) = uVar15;
  }
LAB_0033a8ec:
  if (*(char *)((int)piVar3 + 0x98a) == '\n') {
    func_004BDB2C(piVar3,piVar3[0x103],DAT_0033a93c);
  }
  func_004BC8D8((int)piVar3);
  return piVar3;
}

