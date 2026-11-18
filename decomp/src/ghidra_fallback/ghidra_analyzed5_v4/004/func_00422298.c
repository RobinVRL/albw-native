#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_00168100(int *param_1,int *param_2,int *param_3);
extern int func_00168434(undefined4 *param_1);
extern int func_001B6E04(undefined4 *param_1);
extern int func_002313DC(int param_1);
extern int func_002C00A8(int param_1);
extern int func_002C00D4(undefined4 *param_1,undefined4 param_2,int *param_3);
extern int func_002C0294(undefined4 *param_1);
extern int func_0031B220(int param_1,int *param_2,int *param_3);
extern int func_0031BFA0(undefined4 *param_1);
extern undefined4 DAT_00422680;
extern int DAT_00422684;
extern undefined4 DAT_00422688;
extern undefined4 DAT_0042268c;
extern undefined4 DAT_00422690;
extern undefined4 DAT_00422694;
extern undefined DAT_00422698;
extern undefined DAT_0042269c;
extern undefined DAT_004226a4;
extern undefined DAT_004226b0;
extern int DAT_004226c8;
extern int DAT_004226cc;
extern int DAT_004226d0;
extern undefined *DAT_004226d4;
extern char s_Empty_004226b4[];
extern char s_L_Item_00_004226bc[];
extern char s_OnOff_004226a8[];
extern char s_cState_Hide_00422884[];
extern char s_cState_Idle_004226d8[];
extern char s_cState_Off_00422878[];
extern char s_cState_On_00422890[];
extern char s_cState_Push_0042286c[];

// USA 00422298 <- EU 00422278 (Ghidra, non-matching)
// GLOBAL DAT_00422680 undefined4
// GLOBAL DAT_00422684 int
// GLOBAL DAT_00422688 undefined4
// GLOBAL DAT_0042268c undefined4
// GLOBAL DAT_00422690 undefined4
// GLOBAL DAT_00422694 undefined4
// GLOBAL DAT_00422698 undefined
// GLOBAL DAT_0042269c undefined
// GLOBAL DAT_004226a4 undefined
// GLOBAL DAT_004226b0 undefined
// GLOBAL DAT_004226c8 int
// GLOBAL DAT_004226cc int
// GLOBAL DAT_004226d0 int
// GLOBAL DAT_004226d4 undefined *
// GLOBAL s_Empty_004226b4 string
// GLOBAL s_L_Item_00_004226bc string
// GLOBAL s_OnOff_004226a8 string
// GLOBAL s_cState_Hide_00422884 string
// GLOBAL s_cState_Idle_004226d8 string
// GLOBAL s_cState_Off_00422878 string
// GLOBAL s_cState_On_00422890 string
// GLOBAL s_cState_Push_0042286c string

int func_00422298(undefined4 *param_1,int *param_2,int *param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  ushort *puVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  int *piVar14;
  uint uVar15;
  undefined4 uVar16;
  int iVar17;
  uint *puVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  puVar5 = func_001B6E04(param_1);
  *puVar5 = DAT_00422680;
  puVar5 = func_0010A794(puVar5 + 0xe);
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[10] = puVar5 + 0xc;
  puVar5[0xb] = 0x10;
  iVar17 = DAT_00422684;
  *(undefined1 *)(puVar5[10] + 0xf) = 0;
  *(undefined1 *)puVar5[10] = 0;
  puVar5[9] = DAT_00422690;
  iVar6 = func_0031BFA0(puVar5 + 0x10);
  iVar13 = iVar6 + -0x78;
  *(undefined2 *)(iVar6 + 0x50) = 0;
  uVar19 = DAT_00422694;
  *(undefined2 *)(iVar6 + 0x52) = 0xffff;
  *(undefined4 *)(iVar6 + 0x54) = uVar19;
  *(undefined4 *)(iVar6 + 0x58) = 0;
  *(undefined2 *)(iVar6 + 0x5c) = 0;
  *(undefined2 *)(iVar6 + 0x5e) = 0xffff;
  *(undefined4 *)(iVar6 + 0x60) = uVar19;
  *(undefined4 *)(iVar6 + 100) = 0;
  *(undefined1 *)(iVar6 + 0x68) = 0xff;
  *(undefined1 *)(iVar6 + 0x69) = 0;
  *(undefined1 *)(iVar6 + 0x6a) = 0;
  *(undefined1 *)(iVar6 + 0x6b) = 0;
  puVar5 = (undefined4 *)func_0010BAB4(0x74);
  if (puVar5 == (undefined4 *)0x0) {
    piVar14 = (int *)0x0;
  }
  else {
    piVar14 = func_00168434(puVar5);
  }
  func_00168100(piVar14,param_2,param_3);
  *(int **)(iVar6 + -0x5c) = piVar14;
  *(uint *)(iVar6 + -0x60) = *(uint *)(iVar6 + -0x60) | 0x10;
  puVar18 = *(uint **)(iVar6 + -0x18);
  (**(code **)(*param_3 + 8))(param_3);
  uVar15 = 0;
  do {
    if (*(char *)(param_3[1] + uVar15) == '\0') {
      if ((int)uVar15 < 0x40001) goto LAB_004223b0;
      break;
    }
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 0x40001);
  uVar15 = 0;
LAB_004223b0:
  if (*(int *)(iVar6 + -0x14) <= (int)uVar15) {
    uVar15 = *(int *)(iVar6 + -0x14) - 1;
  }
  (**(code **)(*param_3 + 8))(param_3);
  func_0010E3C4(puVar18,(uint *)param_3[1],uVar15);
  *(undefined1 *)((int)puVar18 + uVar15) = 0;
  func_0016773C((int)piVar14,6);
  local_2c = &DAT_00422698;
  local_30 = iVar17;
  func_00166C20(piVar14,0,&local_30,0);
  local_2c = &DAT_0042269c;
  local_30 = iVar17;
  func_00166C20(piVar14,1,&local_30,0);
  local_2c = &DAT_004226a4;
  local_30 = iVar17;
  func_00166C20(piVar14,2,&local_30,0);
  local_2c = s_OnOff_004226a8;
  local_30 = iVar17;
  func_00166C20(piVar14,3,&local_30,0);
  local_2c = &DAT_004226b0;
  local_30 = iVar17;
  func_00166C20(piVar14,4,&local_30,0);
  local_2c = s_Empty_004226b4;
  local_30 = iVar17;
  func_00166C20(piVar14,5,&local_30,0);
  *(int **)(iVar6 + -0x50) = piVar14;
  *(undefined2 *)(iVar6 + -0x56) = 0;
  *(undefined2 *)(iVar6 + -0x58) = 0;
  func_002313DC(iVar6 + -0x58);
  *(int **)(iVar6 + -0x44) = piVar14;
  *(undefined2 *)(iVar6 + -0x4a) = 1;
  *(undefined2 *)(iVar6 + -0x4c) = 0;
  local_2c = s_L_Item_00_004226bc;
  local_30 = iVar17;
  func_0031B220(iVar6,piVar14,&local_30);
  puVar7 = (undefined4 *)func_0010BAB4(0x20);
  puVar5 = (undefined4 *)0x0;
  if (puVar7 != (undefined4 *)0x0) {
    puVar5 = func_002C0294(puVar7);
  }
  *(undefined4 **)(iVar6 + -100) = puVar5;
  func_002C00D4(puVar5,iVar13,*(int **)(iVar6 + -0x5c));
  func_002C00A8(*(int *)(iVar6 + -100));
  puVar8 = (ushort *)(*(int *)(iVar6 + -100) + 0x16);
  uVar2 = *puVar8;
  *puVar8 = uVar2 | 1;
  *(ushort *)(*(int *)(iVar6 + -100) + 0x16) = uVar2 & 0xffbf | 1;
  *(int *)(iVar6 + -0x2c) = iVar13;
  *(undefined1 *)(iVar6 + -0x3a) = 5;
  iVar9 = func_0010BA78(0x50);
  iVar3 = DAT_004226c8;
  *(int *)(iVar6 + -0x28) = iVar9;
  *(uint *)(iVar6 + -0x24) = iVar9 + (uint)*(byte *)(iVar6 + -0x3a) * 8;
  iVar10 = 5;
  puVar5 = (undefined4 *)(iVar9 + -8);
  do {
    uVar19 = *(undefined4 *)(DAT_004226cc + 0x3f4);
    iVar10 = iVar10 + -1;
    puVar5[2] = *(undefined4 *)(DAT_004226cc + 0x3f0);
    puVar5[3] = uVar19;
    uVar19 = *(undefined4 *)(iVar3 + 0xf4);
    puVar5[4] = *(undefined4 *)(iVar3 + 0xf0);
    puVar5[5] = uVar19;
    puVar5 = puVar5 + 4;
  } while (iVar10 != 0);
  bVar1 = *(byte *)(iVar6 + -0x3a);
  uVar15 = (uint)bVar1;
  puVar5 = (undefined4 *)func_0010BA78(uVar15 << 3);
  iVar3 = DAT_004226d0;
  *(undefined4 **)(iVar6 + -0x20) = puVar5;
  if (uVar15 != 0) {
    puVar7 = puVar5 + -2;
    if ((bVar1 & 1) != 0) {
      uVar19 = *(undefined4 *)(iVar3 + 0x1c);
      *puVar5 = *(undefined4 *)(iVar3 + 0x18);
      puVar5[1] = uVar19;
      puVar7 = puVar5;
    }
    for (iVar9 = (int)uVar15 >> 1; iVar9 != 0; iVar9 = iVar9 + -1) {
      uVar19 = *(undefined4 *)(DAT_004226cc + 0x11c);
      puVar7[2] = *(undefined4 *)(DAT_004226cc + 0x118);
      puVar7[3] = uVar19;
      uVar19 = *(undefined4 *)(iVar3 + 0x1c);
      puVar7[4] = *(undefined4 *)(iVar3 + 0x18);
      puVar7[5] = uVar19;
      puVar7 = puVar7 + 4;
    }
  }
  puVar5 = (undefined4 *)func_0010CEE0(0xbc,(int *)0x0,4);
  puVar4 = DAT_004226d4;
  iVar9 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar5[1] = 5;
    *puVar5 = 0x24;
    iVar9 = func_00100118((int)(puVar5 + 2),puVar4,0x24,5);
  }
  if (iVar9 != 0) {
    *(int *)(iVar6 + -0x34) = iVar9;
    *(undefined4 *)(iVar6 + -0x38) = 5;
  }
  local_2c = s_cState_Idle_004226d8;
  local_30 = iVar17;
  func_0010BEC4(iVar6 + -0x40,0,&local_30);
  puVar5 = *(undefined4 **)(iVar6 + -0x28);
  uVar11 = *(undefined4 *)(DAT_004226cc + 0x10c);
  uVar16 = *(undefined4 *)(iVar3 + 0x10);
  uVar19 = *(undefined4 *)(iVar3 + 0x14);
  uVar12 = *(undefined4 *)(iVar3 + 0x18);
  uVar20 = *(undefined4 *)(iVar3 + 0x1c);
  *puVar5 = *(undefined4 *)(DAT_004226cc + 0x108);
  puVar5[1] = uVar11;
  puVar5 = *(undefined4 **)(iVar6 + -0x24);
  puVar5[1] = uVar19;
  *puVar5 = uVar16;
  puVar5 = *(undefined4 **)(iVar6 + -0x20);
  *puVar5 = uVar12;
  puVar5[1] = uVar20;
  local_2c = s_cState_Push_0042286c;
  local_30 = iVar17;
  func_0010BEC4(iVar6 + -0x40,1,&local_30);
  iVar9 = *(int *)(iVar6 + -0x28);
  uVar19 = *(undefined4 *)(iVar3 + 0x24);
  uVar20 = *(undefined4 *)(iVar3 + 0x28);
  uVar11 = *(undefined4 *)(iVar3 + 0x18);
  uVar16 = *(undefined4 *)(iVar3 + 0x1c);
  uVar12 = *(undefined4 *)(iVar3 + 0x2c);
  *(undefined4 *)(iVar9 + 8) = *(undefined4 *)(iVar3 + 0x20);
  *(undefined4 *)(iVar9 + 0xc) = uVar19;
  iVar9 = *(int *)(iVar6 + -0x24);
  *(undefined4 *)(iVar9 + 8) = uVar20;
  *(undefined4 *)(iVar9 + 0xc) = uVar12;
  iVar9 = *(int *)(iVar6 + -0x20);
  *(undefined4 *)(iVar9 + 8) = uVar11;
  *(undefined4 *)(iVar9 + 0xc) = uVar16;
  local_2c = s_cState_Off_00422878;
  local_30 = iVar17;
  func_0010BEC4(iVar6 + -0x40,2,&local_30);
  iVar9 = *(int *)(iVar6 + -0x28);
  uVar19 = *(undefined4 *)(iVar3 + 0x38);
  uVar11 = *(undefined4 *)(iVar3 + 0x3c);
  uVar20 = *(undefined4 *)(iVar3 + 0x34);
  uVar12 = *(undefined4 *)(iVar3 + 0x18);
  uVar16 = *(undefined4 *)(iVar3 + 0x1c);
  *(undefined4 *)(iVar9 + 0x10) = *(undefined4 *)(iVar3 + 0x30);
  *(undefined4 *)(iVar9 + 0x14) = uVar20;
  iVar9 = *(int *)(iVar6 + -0x24);
  *(undefined4 *)(iVar9 + 0x10) = uVar19;
  *(undefined4 *)(iVar9 + 0x14) = uVar11;
  iVar9 = *(int *)(iVar6 + -0x20);
  *(undefined4 *)(iVar9 + 0x10) = uVar12;
  *(undefined4 *)(iVar9 + 0x14) = uVar16;
  local_2c = s_cState_Hide_00422884;
  local_30 = iVar17;
  func_0010BEC4(iVar6 + -0x40,3,&local_30);
  iVar9 = *(int *)(iVar6 + -0x28);
  uVar19 = *(undefined4 *)(iVar3 + 0x48);
  uVar16 = *(undefined4 *)(iVar3 + 0x4c);
  uVar11 = *(undefined4 *)(iVar3 + 0x44);
  uVar12 = *(undefined4 *)(iVar3 + 0x1c);
  uVar20 = *(undefined4 *)(iVar3 + 0x18);
  *(undefined4 *)(iVar9 + 0x18) = *(undefined4 *)(iVar3 + 0x40);
  *(undefined4 *)(iVar9 + 0x1c) = uVar11;
  iVar9 = *(int *)(iVar6 + -0x24);
  *(undefined4 *)(iVar9 + 0x18) = uVar19;
  *(undefined4 *)(iVar9 + 0x1c) = uVar16;
  iVar9 = *(int *)(iVar6 + -0x20);
  *(undefined4 *)(iVar9 + 0x18) = uVar20;
  *(undefined4 *)(iVar9 + 0x1c) = uVar12;
  local_2c = s_cState_On_00422890;
  local_30 = iVar17;
  func_0010BEC4(iVar6 + -0x40,4,&local_30);
  iVar17 = *(int *)(iVar6 + -0x28);
  uVar11 = *(undefined4 *)(iVar3 + 0x54);
  uVar16 = *(undefined4 *)(iVar3 + 0x58);
  uVar20 = *(undefined4 *)(iVar3 + 0x5c);
  uVar19 = *(undefined4 *)(iVar3 + 0x18);
  uVar12 = *(undefined4 *)(iVar3 + 0x1c);
  *(undefined4 *)(iVar17 + 0x20) = *(undefined4 *)(iVar3 + 0x50);
  *(undefined4 *)(iVar17 + 0x24) = uVar11;
  iVar17 = *(int *)(iVar6 + -0x24);
  *(undefined4 *)(iVar17 + 0x20) = uVar16;
  *(undefined4 *)(iVar17 + 0x24) = uVar20;
  iVar17 = *(int *)(iVar6 + -0x20);
  *(undefined4 *)(iVar17 + 0x20) = uVar19;
  *(undefined4 *)(iVar17 + 0x24) = uVar12;
  return iVar13;
}

