#include "ghidra_types.h"

extern int func_0010A794(undefined4 *param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_00167E04(int param_1,int param_2,uint param_3);
extern int func_0017A520(undefined4 *param_1,undefined2 param_2,int *param_3,int param_4);
extern int func_00231340(short *param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_0028BE38(undefined4 *param_1,int *param_2,int *param_3);
extern int func_003FDF90(int param_1,int param_2);
extern int func_0047C084(undefined4 *param_1,int param_2,int param_3);
extern int func_004B948C(int param_1,int param_2);
extern int func_004B9A10(undefined4 *param_1,undefined1 param_2);
extern int func_005229AC(int *param_1,int *param_2);
extern int func_00573650(int param_1,int param_2);
extern int func_005826A4(int param_1,int *param_2,int *param_3,int *param_4);
extern int func_0066C424(undefined4 *param_1,undefined1 param_2);
extern int func_0066C5E0(int param_1,undefined4 param_2,byte *param_3);
extern int DAT_0043e650;
extern undefined4 DAT_0043e654;
extern undefined4 *DAT_0043e658;
extern undefined4 DAT_0043e65c;
extern undefined4 *DAT_0043e660;
extern int DAT_0043e664;
extern undefined DAT_0043e678;
extern undefined DAT_0043e688;
extern undefined DAT_0043eaf0;
extern int *DAT_0043ef38;
extern int *DAT_0043ef3c;
extern undefined DAT_0043ef74;
extern char s_G_Base_00_0043eaf8[];
extern char s_G_Bbtn_00_0043e67c[];
extern char s_G_Collect_00_0043eab8[];
extern char s_G_Item_00_0043ead8[];
extern char s_G_Item_01_0043eae4[];
extern char s_G_Rupee_00_0043e68c[];
extern char s_G_Warp_00_0043e698[];
extern char s_In2Btn_0043ead0[];
extern char s_InIcon_0043e668[];
extern char s_L_Collect_00_0043ef4c[];
extern char s_L_Item_00_0043ef5c[];
extern char s_L_Item_01_0043ef68[];
extern char s_L_Warp_00_0043ef40[];
extern char s_Out2Btn_0043eac8[];
extern char s_OutIcon_0043e670[];
extern char s_P_Bbtn_00_0043ef2c[];
extern char s_P_Swim_00_0043ef20[];
extern char s__cStep_Map_0043ef77[];
extern char s_cState_Collect_0043f480[];
extern char s_cState_ItemViewer_0043f590[];
extern char s_cState_Item_0043f584[];
extern char s_cState_Normal_0043f450[];
extern char s_cState_WarpPointAdd_0043f46c[];
extern char s_cState_Warp_0043f460[];
extern char s_cStep_BellGet_0043ef94[];
extern char s_cStep_BellOpen_0043efa4[];
extern char s_cStep_CollectClose_0043f43c[];
extern char s_cStep_CollectOpen_0043f414[];
extern char s_cStep_CollectWait_0043f428[];
extern char s_cStep_ItemClose_0043f3e4[];
extern char s_cStep_ItemOpen_0043efcc[];
extern char s_cStep_ItemSelect_0043f3d0[];
extern char s_cStep_TutorialKinsta_0043efb4[];
extern char s_cStep_Tutorial_0043ef84[];
extern char s_cStep_WarpClose_0043f404[];
extern char s_cStep_WarpOpen_0043f3f4[];
extern undefined4 _DAT_0043ef74;

// USA 0043E278 <- EU 0043E258 (Ghidra, non-matching)
// GLOBAL DAT_0043e650 int
// GLOBAL DAT_0043e654 undefined4
// GLOBAL DAT_0043e658 undefined4 *
// GLOBAL DAT_0043e65c undefined4
// GLOBAL DAT_0043e660 undefined4 *
// GLOBAL DAT_0043e664 int
// GLOBAL DAT_0043e678 undefined
// GLOBAL DAT_0043e688 undefined
// GLOBAL DAT_0043eaf0 undefined
// GLOBAL DAT_0043ef38 int *
// GLOBAL DAT_0043ef3c int *
// GLOBAL DAT_0043ef74 undefined
// GLOBAL s_G_Base_00_0043eaf8 string
// GLOBAL s_G_Bbtn_00_0043e67c string
// GLOBAL s_G_Collect_00_0043eab8 string
// GLOBAL s_G_Item_00_0043ead8 string
// GLOBAL s_G_Item_01_0043eae4 string
// GLOBAL s_G_Rupee_00_0043e68c string
// GLOBAL s_G_Warp_00_0043e698 string
// GLOBAL s_In2Btn_0043ead0 string
// GLOBAL s_InIcon_0043e668 string
// GLOBAL s_L_Collect_00_0043ef4c string
// GLOBAL s_L_Item_00_0043ef5c string
// GLOBAL s_L_Item_01_0043ef68 string
// GLOBAL s_L_Warp_00_0043ef40 string
// GLOBAL s_Out2Btn_0043eac8 string
// GLOBAL s_OutIcon_0043e670 string
// GLOBAL s_P_Bbtn_00_0043ef2c string
// GLOBAL s_P_Swim_00_0043ef20 string
// GLOBAL s_cState_Collect_0043f480 string
// GLOBAL s_cState_ItemViewer_0043f590 string
// GLOBAL s_cState_Item_0043f584 string
// GLOBAL s_cState_Normal_0043f450 string
// GLOBAL s_cState_WarpPointAdd_0043f46c string
// GLOBAL s_cState_Warp_0043f460 string
// GLOBAL s_cStep_BellGet_0043ef94 string
// GLOBAL s_cStep_BellOpen_0043efa4 string
// GLOBAL s_cStep_CollectClose_0043f43c string
// GLOBAL s_cStep_CollectOpen_0043f414 string
// GLOBAL s_cStep_CollectWait_0043f428 string
// GLOBAL s_cStep_ItemClose_0043f3e4 string
// GLOBAL s_cStep_ItemOpen_0043efcc string
// GLOBAL s_cStep_ItemSelect_0043f3d0 string
// GLOBAL s_cStep_TutorialKinsta_0043efb4 string
// GLOBAL s_cStep_Tutorial_0043ef84 string
// GLOBAL s_cStep_WarpClose_0043f404 string
// GLOBAL s_cStep_WarpOpen_0043f3f4 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * func_0043E278(undefined4 *param_1,int param_2)

{
  float fparam_0;
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_64 ((byte *)(albw_frame + 0xc))
  #define local_50 (*(int *)(albw_frame + 0x20))
  #define local_4c (*(char * *)(albw_frame + 0x24))
  #define local_44 (*(uint *)(albw_frame + 0x2c))
  #define local_38 (*(int *)(albw_frame + 0x38))
  #define local_34 (*(char * *)(albw_frame + 0x3c))
  piVar1 = func_004B9A10(param_1,0);
  iVar12 = DAT_0043e650;
  *piVar1 = DAT_0043e650;
  piVar1[0xe] = iVar12 + 0x54;
  puVar2 = func_0010A794(piVar1 + 0x1d);
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar3 = func_0010A794(puVar2 + 9);
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  *(undefined2 *)(puVar3 + 9) = 0;
  uVar7 = DAT_0043e654;
  *(undefined2 *)((int)puVar3 + 0x26) = 0xffff;
  puVar3[10] = uVar7;
  piVar1 = puVar3 + -0x26;
  puVar3[0xb] = 0;
  *(undefined2 *)(puVar3 + 0xc) = 0;
  *(undefined2 *)((int)puVar3 + 0x32) = 0xffff;
  puVar3[0xd] = uVar7;
  puVar3[0xe] = 0;
  puVar3[0xf] = 0;
  puVar3[0x10] = 0;
  puVar3[0x12] = 0xffffffff;
  puVar3[0x11] = 0;
  puVar4 = (undefined4 *)func_0010BAB4(0x78);
  puVar2 = (undefined4 *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    puVar2 = func_0017A520(puVar4,0x400,(int *)0x0,0);
  }
  puVar3[0x13] = puVar2;
  puVar3[0x14] = 0;
  *(undefined2 *)(puVar3 + 0x15) = 0;
  *(undefined2 *)((int)puVar3 + 0x56) = 0xffff;
  puVar3[0x16] = uVar7;
  puVar3[0x17] = 0;
  *(undefined2 *)(puVar3 + 0x18) = 0;
  *(undefined2 *)((int)puVar3 + 0x62) = 0xffff;
  puVar3[0x19] = uVar7;
  puVar3[0x1a] = 0;
  puVar3[0x1b] = 0;
  puVar3[0x1c] = 0;
  puVar3[0x1d] = 0;
  *(undefined1 *)(puVar3 + 0x1e) = 0;
  *(undefined2 *)(puVar3 + 0x1f) = 0;
  *(undefined2 *)((int)puVar3 + 0x7e) = 0xffff;
  puVar3[0x20] = uVar7;
  puVar3[0x21] = 0;
  puVar3[0x22] = 0;
  *(undefined2 *)(puVar3 + 0x23) = 0;
  *(undefined2 *)((int)puVar3 + 0x8e) = 0xffff;
  puVar3[0x24] = uVar7;
  puVar3[0x25] = 0;
  puVar3[0x26] = 0;
  *(undefined2 *)(puVar3 + 0x27) = 0;
  *(undefined2 *)((int)puVar3 + 0x9e) = 0xffff;
  puVar3[0x28] = uVar7;
  puVar3[0x29] = 0;
  puVar3[0x2a] = 0;
  puVar3[0x2c] = 0;
  puVar3[0x2d] = 0;
  puVar3[0x2e] = 0;
  puVar3[0x2f] = 0;
  puVar2 = (undefined4 *)func_0010BAB4(0x324);
  piVar5 = (int *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    piVar5 = func_0047C084(puVar2,0x14,param_2 + 0xf0);
  }
  puVar4 = DAT_0043e660;
  puVar3[0x30] = piVar5;
  puVar3[0x31] = 0;
  puVar3[0x32] = uVar7;
  puVar3[0x33] = uVar7;
  puVar3[0x34] = uVar7;
  *(undefined1 *)(puVar3 + 0x35) = 0;
  *(undefined1 *)((int)puVar3 + 0xd5) = 0;
  puVar3[0x36] = 0xffffffff;
  *(undefined1 *)((int)puVar3 + 0xde) = 0;
  puVar3[0x38] = 0;
  puVar3[0x39] = 0;
  puVar2 = DAT_0043e658;
  puVar3[0x3a] = 0;
  puVar3[0x3b] = 0;
  *(undefined1 *)(puVar3 + 0x3c) = 0;
  puVar3[0x3e] = 0;
  iVar12 = DAT_0043e664;
  uVar11 = puVar2[0x6d];
  puVar3[0x3f] = puVar2[0x6c];
  uVar7 = DAT_0043e65c;
  puVar3[0x40] = uVar11;
  puVar3[0x3d] = uVar7;
  *(undefined1 *)(puVar3 + 0x41) = 0;
  *(undefined1 *)((int)puVar3 + 0x105) = 0;
  *(undefined1 *)((int)puVar3 + 0x106) = 0;
  local_34 = (char *)*puVar4;
  local_38 = iVar12;
  (**(code **)(*piVar1 + 0x38))(piVar1,&local_38,0);
  piVar5 = (int *)puVar3[-0x1f];
  func_0016773C((int)piVar5,0x13);
  local_34 = s_InIcon_0043e668;
  local_38 = iVar12;
  func_00166C20(piVar5,0,&local_38,0);
  local_34 = s_OutIcon_0043e670;
  local_38 = iVar12;
  func_00166C20(piVar5,1,&local_38,0);
  local_44 = 2;
  local_38 = iVar12;
  local_34 = &DAT_0043e678;
  local_4c = s_G_Bbtn_00_0043e67c;
  local_50 = iVar12;
  (**(code **)(iVar12 + 8))(&local_50);
  iVar6 = func_003FDF90(*(int *)(*piVar5 + 0x14),(int)local_4c);
  func_00166C20(piVar5,local_44,&local_38,iVar6);
  local_44 = 3;
  local_4c = &DAT_0043e688;
  local_50 = iVar12;
  local_34 = s_G_Bbtn_00_0043e67c;
  local_38 = iVar12;
  (**(code **)(iVar12 + 8))(&local_38);
  iVar6 = func_003FDF90(*(int *)(*piVar5 + 0x14),(int)local_34);
  func_00166C20(piVar5,local_44,&local_50,iVar6);
  local_44 = 4;
  local_4c = &DAT_0043e678;
  local_50 = iVar12;
  local_34 = s_G_Rupee_00_0043e68c;
  local_38 = iVar12;
  (**(code **)(iVar12 + 8))(&local_38);
  iVar6 = func_003FDF90(*(int *)(*piVar5 + 0x14),(int)local_34);
  func_00166C20(piVar5,local_44,&local_50,iVar6);
  local_44 = 5;
  local_4c = &DAT_0043e688;
  local_50 = iVar12;
  local_34 = s_G_Rupee_00_0043e68c;
  local_38 = iVar12;
  (**(code **)(iVar12 + 8))(&local_38);
  iVar6 = func_003FDF90(*(int *)(*piVar5 + 0x14),(int)local_34);
  func_00166C20(piVar5,local_44,&local_50,iVar6);
  local_44 = 6;
  local_4c = &DAT_0043e678;
  local_50 = iVar12;
  local_34 = s_G_Warp_00_0043e698;
  local_38 = iVar12;
  (**(code **)(iVar12 + 8))(&local_38);
  iVar6 = func_003FDF90(*(int *)(*piVar5 + 0x14),(int)local_34);
  func_00166C20(piVar5,local_44,&local_50,iVar6);
  local_44 = 7;
  local_4c = &DAT_0043e688;
  local_50 = iVar12;
  local_34 = s_G_Warp_00_0043e698;
  local_38 = iVar12;
  (**(code **)(iVar12 + 8))(&local_38);
  iVar6 = func_003FDF90(*(int *)(*piVar5 + 0x14),(int)local_34);
  func_00166C20(piVar5,local_44,&local_50,iVar6);
  local_44 = 8;
  local_4c = &DAT_0043e678;
  local_50 = iVar12;
  local_34 = s_G_Collect_00_0043eab8;
  local_38 = iVar12;
  (**(code **)(iVar12 + 8))(&local_38);
  iVar6 = func_003FDF90(*(int *)(*piVar5 + 0x14),(int)local_34);
  func_00166C20(piVar5,local_44,&local_50,iVar6);
  local_44 = 9;
  local_4c = &DAT_0043e688;
  local_50 = iVar12;
  local_34 = s_G_Collect_00_0043eab8;
  local_38 = iVar12;
  (**(code **)(iVar12 + 8))(&local_38);
  iVar6 = func_003FDF90(*(int *)(*piVar5 + 0x14),(int)local_34);
  func_00166C20(piVar5,local_44,&local_50,iVar6);
  local_44 = 10;
  local_4c = s_Out2Btn_0043eac8;
  local_50 = iVar12;
  local_34 = s_G_Collect_00_0043eab8;
  local_38 = iVar12;
  (**(code **)(iVar12 + 8))(&local_38);
  iVar6 = func_003FDF90(*(int *)(*piVar5 + 0x14),(int)local_34);
  func_00166C20(piVar5,local_44,&local_50,iVar6);
  local_44 = 0xb;
  local_4c = s_In2Btn_0043ead0;
  local_50 = iVar12;
  local_34 = s_G_Collect_00_0043eab8;
  local_38 = iVar12;
  (**(code **)(iVar12 + 8))(&local_38);
  iVar6 = func_003FDF90(*(int *)(*piVar5 + 0x14),(int)local_34);
  func_00166C20(piVar5,local_44,&local_50,iVar6);
  local_44 = 0xc;
  local_4c = &DAT_0043e678;
  local_50 = iVar12;
  local_34 = s_G_Item_00_0043ead8;
  local_38 = iVar12;
  (**(code **)(iVar12 + 8))(&local_38);
  iVar6 = func_003FDF90(*(int *)(*piVar5 + 0x14),(int)local_34);
  func_00166C20(piVar5,local_44,&local_50,iVar6);
  local_44 = 0xd;
  local_4c = &DAT_0043e688;
  local_50 = iVar12;
  local_34 = s_G_Item_00_0043ead8;
  local_38 = iVar12;
  (**(code **)(iVar12 + 8))(&local_38);
  iVar6 = func_003FDF90(*(int *)(*piVar5 + 0x14),(int)local_34);
  func_00166C20(piVar5,local_44,&local_50,iVar6);
  local_44 = 0xe;
  local_4c = s_Out2Btn_0043eac8;
  local_50 = iVar12;
  local_34 = s_G_Item_00_0043ead8;
  local_38 = iVar12;
  (**(code **)(iVar12 + 8))(&local_38);
  iVar6 = func_003FDF90(*(int *)(*piVar5 + 0x14),(int)local_34);
  func_00166C20(piVar5,local_44,&local_50,iVar6);
  local_44 = 0xf;
  local_4c = s_In2Btn_0043ead0;
  local_50 = iVar12;
  local_34 = s_G_Item_00_0043ead8;
  local_38 = iVar12;
  (**(code **)(iVar12 + 8))(&local_38);
  iVar6 = func_003FDF90(*(int *)(*piVar5 + 0x14),(int)local_34);
  func_00166C20(piVar5,local_44,&local_50,iVar6);
  local_44 = 0x10;
  local_4c = &DAT_0043e678;
  local_50 = iVar12;
  local_34 = s_G_Item_01_0043eae4;
  local_38 = iVar12;
  (**(code **)(iVar12 + 8))(&local_38);
  iVar6 = func_003FDF90(*(int *)(*piVar5 + 0x14),(int)local_34);
  func_00166C20(piVar5,local_44,&local_50,iVar6);
  local_44 = 0x11;
  local_4c = &DAT_0043e688;
  local_50 = iVar12;
  local_34 = s_G_Item_01_0043eae4;
  local_38 = iVar12;
  (**(code **)(iVar12 + 8))(&local_38);
  iVar6 = func_003FDF90(*(int *)(*piVar5 + 0x14),(int)local_34);
  func_00166C20(piVar5,local_44,&local_50,iVar6);
  local_44 = 0x12;
  local_4c = &DAT_0043eaf0;
  local_50 = iVar12;
  local_34 = s_G_Base_00_0043eaf8;
  local_38 = iVar12;
  (**(code **)(iVar12 + 8))(&local_38);
  iVar6 = func_003FDF90(*(int *)(*piVar5 + 0x14),(int)local_34);
  func_00166C20(piVar5,local_44,&local_50,iVar6);
  iVar6 = func_00573650((int)piVar1,1);
  func_00167E04(puVar3[-0x1f],iVar6,0);
  iVar6 = func_00573650((int)piVar1,2);
  func_00167E04(puVar3[-0x1f],iVar6,0);
  iVar6 = func_00573650((int)piVar1,3);
  func_00167E04(puVar3[-0x1f],iVar6,0);
  iVar6 = func_00573650((int)piVar1,4);
  func_00167E04(puVar3[-0x1f],iVar6,0);
  local_4c = s_P_Swim_00_0043ef20;
  local_50 = iVar12;
  uVar7 = func_005229AC(piVar5,&local_50);
  puVar3[0x1c] = uVar7;
  local_4c = s_P_Bbtn_00_0043ef2c;
  local_50 = iVar12;
  uVar7 = func_005229AC(piVar5,&local_50);
  puVar3[0x1d] = uVar7;
  local_4c = (char *)puVar4[1];
  local_50 = iVar12;
  piVar8 = (int *)func_005229AC((int *)puVar3[-0x1f],&local_50);
  piVar5 = DAT_0043ef38;
  if (piVar8 != (int *)0x0) {
    piVar9 = (int *)(**(code **)(*piVar8 + 8))(piVar8);
    do {
      if (piVar9 == piVar5) goto LAB_0043ebf4;
      piVar9 = (int *)*piVar9;
    } while (piVar9 != (int *)0x0);
  }
  piVar8 = (int *)0x0;
LAB_0043ebf4:
  puVar3[0x14] = piVar8;
  local_34 = (char *)puVar4[1];
  local_38 = iVar12;
  local_4c = (char *)*puVar4;
  local_50 = iVar12;
  func_005826A4(*DAT_0043ef3c,puVar3 + 0xf,&local_50,&local_38);
  puVar10 = (undefined4 *)func_0010BAB4(0x70);
  puVar4 = (undefined4 *)0x0;
  if (puVar10 != (undefined4 *)0x0) {
    local_4c = s_L_Warp_00_0043ef40;
    local_50 = iVar12;
    puVar4 = func_0028BE38(puVar10,(int *)puVar3[-0x1f],&local_50);
  }
  puVar3[0x22] = puVar4;
  puVar10 = (undefined4 *)func_0010BAB4(0x70);
  puVar4 = (undefined4 *)0x0;
  if (puVar10 != (undefined4 *)0x0) {
    local_4c = s_L_Collect_00_0043ef4c;
    local_50 = iVar12;
    puVar4 = func_0028BE38(puVar10,(int *)puVar3[-0x1f],&local_50);
  }
  puVar3[0x26] = puVar4;
  puVar10 = (undefined4 *)func_0010BAB4(0x70);
  puVar4 = (undefined4 *)0x0;
  if (puVar10 != (undefined4 *)0x0) {
    local_4c = s_L_Item_00_0043ef5c;
    local_50 = iVar12;
    puVar4 = func_0028BE38(puVar10,(int *)puVar3[-0x1f],&local_50);
  }
  puVar3[0x2a] = puVar4;
  *(undefined1 *)(puVar4[5] + 0x14) = 0x7f;
  *(undefined4 *)(puVar3[0x2a] + 0x6c) = 0x1000;
  puVar10 = (undefined4 *)func_0010BAB4(0x70);
  puVar4 = (undefined4 *)0x0;
  if (puVar10 != (undefined4 *)0x0) {
    local_4c = s_L_Item_01_0043ef68;
    local_50 = iVar12;
    puVar4 = func_0028BE38(puVar10,(int *)puVar3[-0x1f],&local_50);
  }
  puVar3[0x2b] = puVar4;
  puVar4[0x1b] = 0x1000;
  func_004B948C((int)piVar1,puVar3[0x2b]);
  puVar3[0x29] = puVar3[-0x1f];
  *(undefined2 *)((int)puVar3 + 0x9e) = 0x10;
  fparam_0 = ALBW_AS_F32(_DAT_0043ef74);
  *(undefined2 *)(puVar3 + 0x27) = 0;
  func_002317C0((undefined2 *)(puVar3 + 0x27),fparam_0);
  func_00231340((short *)(puVar3 + 0x27));
  *(byte *)((int)puVar3 + 0xde) = *(byte *)((int)puVar3 + 0xde) | 0xc;
  local_64[0] = 0xd;
  func_0066C5E0((int)puVar3,piVar1,local_64);
  local_4c = s__cStep_Map_0043ef77 + 1;
  local_50 = iVar12;
  func_0010BEC4((int)puVar3,0,&local_50);
  puVar4 = DAT_0043e658;
  uVar7 = DAT_0043e658[1];
  uVar11 = DAT_0043e658[2];
  uVar13 = DAT_0043e658[3];
  uVar14 = DAT_0043e658[4];
  uVar15 = DAT_0043e658[5];
  local_64[0] = 0;
  puVar10 = (undefined4 *)puVar3[6];
  *puVar10 = *DAT_0043e658;
  puVar10[1] = uVar7;
  puVar10 = (undefined4 *)puVar3[7];
  *puVar10 = uVar11;
  puVar10[1] = uVar13;
  puVar10 = (undefined4 *)puVar3[8];
  *puVar10 = uVar14;
  puVar10[1] = uVar15;
  local_4c = s_cStep_Tutorial_0043ef84;
  local_50 = iVar12;
  func_0010BEC4((int)puVar3,1,&local_50);
  uVar7 = puVar4[7];
  uVar11 = puVar4[8];
  uVar13 = puVar4[9];
  uVar14 = puVar4[10];
  uVar15 = puVar4[0xb];
  local_64[0] = 1;
  iVar6 = puVar3[6];
  *(undefined4 *)(iVar6 + 8) = puVar4[6];
  *(undefined4 *)(iVar6 + 0xc) = uVar7;
  iVar6 = puVar3[7];
  *(undefined4 *)(iVar6 + 8) = uVar11;
  *(undefined4 *)(iVar6 + 0xc) = uVar13;
  iVar6 = puVar3[8];
  *(undefined4 *)(iVar6 + 8) = uVar14;
  *(undefined4 *)(iVar6 + 0xc) = uVar15;
  local_4c = s_cStep_BellGet_0043ef94;
  local_50 = iVar12;
  func_0010BEC4((int)puVar3,2,&local_50);
  uVar11 = puVar4[0xd];
  uVar13 = puVar4[0xe];
  uVar15 = puVar4[4];
  uVar7 = puVar4[0xf];
  uVar14 = puVar4[5];
  local_64[0] = 2;
  iVar6 = puVar3[6];
  *(undefined4 *)(iVar6 + 0x10) = puVar4[0xc];
  *(undefined4 *)(iVar6 + 0x14) = uVar11;
  iVar6 = puVar3[7];
  *(undefined4 *)(iVar6 + 0x10) = uVar13;
  *(undefined4 *)(iVar6 + 0x14) = uVar7;
  iVar6 = puVar3[8];
  *(undefined4 *)(iVar6 + 0x10) = uVar15;
  *(undefined4 *)(iVar6 + 0x14) = uVar14;
  local_4c = s_cStep_BellOpen_0043efa4;
  local_50 = iVar12;
  func_0010BEC4((int)puVar3,3,&local_50);
  uVar7 = puVar4[0x11];
  uVar11 = puVar4[0x12];
  uVar13 = puVar4[0x13];
  local_64[0] = 3;
  iVar6 = puVar3[6];
  *(undefined4 *)(iVar6 + 0x18) = puVar4[0x10];
  *(undefined4 *)(iVar6 + 0x1c) = uVar7;
  iVar6 = puVar3[7];
  *(undefined4 *)(iVar6 + 0x18) = uVar11;
  *(undefined4 *)(iVar6 + 0x1c) = uVar13;
  iVar6 = puVar3[8];
  *(undefined4 *)(iVar6 + 0x18) = uVar15;
  *(undefined4 *)(iVar6 + 0x1c) = uVar14;
  local_4c = s_cStep_TutorialKinsta_0043efb4;
  local_50 = iVar12;
  func_0010BEC4((int)puVar3,4,&local_50);
  uVar7 = puVar4[0x15];
  uVar11 = puVar4[0x16];
  uVar13 = puVar4[0x17];
  uVar14 = puVar4[0x18];
  uVar15 = puVar4[0x19];
  local_64[0] = 4;
  iVar6 = puVar3[6];
  *(undefined4 *)(iVar6 + 0x20) = puVar4[0x14];
  *(undefined4 *)(iVar6 + 0x24) = uVar7;
  iVar6 = puVar3[7];
  *(undefined4 *)(iVar6 + 0x20) = uVar11;
  *(undefined4 *)(iVar6 + 0x24) = uVar13;
  iVar6 = puVar3[8];
  *(undefined4 *)(iVar6 + 0x20) = uVar14;
  *(undefined4 *)(iVar6 + 0x24) = uVar15;
  local_4c = s_cStep_ItemOpen_0043efcc;
  local_50 = iVar12;
  func_0010BEC4((int)puVar3,5,&local_50);
  uVar11 = puVar4[0x1c];
  uVar13 = puVar4[0x1b];
  uVar7 = puVar4[4];
  uVar14 = puVar4[0x1d];
  uVar15 = puVar4[5];
  local_64[0] = 5;
  iVar6 = puVar3[6];
  *(undefined4 *)(iVar6 + 0x28) = puVar4[0x1a];
  *(undefined4 *)(iVar6 + 0x2c) = uVar13;
  iVar6 = puVar3[7];
  *(undefined4 *)(iVar6 + 0x28) = uVar11;
  *(undefined4 *)(iVar6 + 0x2c) = uVar14;
  iVar6 = puVar3[8];
  *(undefined4 *)(iVar6 + 0x28) = uVar7;
  *(undefined4 *)(iVar6 + 0x2c) = uVar15;
  local_4c = s_cStep_ItemSelect_0043f3d0;
  local_50 = iVar12;
  func_0010BEC4((int)puVar3,6,&local_50);
  uVar7 = puVar4[0x1f];
  uVar11 = puVar4[0x20];
  uVar13 = puVar4[0x21];
  uVar14 = puVar4[0x22];
  uVar15 = puVar4[0x23];
  local_64[0] = 6;
  iVar6 = puVar3[6];
  *(undefined4 *)(iVar6 + 0x30) = puVar4[0x1e];
  *(undefined4 *)(iVar6 + 0x34) = uVar7;
  iVar6 = puVar3[7];
  *(undefined4 *)(iVar6 + 0x30) = uVar11;
  *(undefined4 *)(iVar6 + 0x34) = uVar13;
  iVar6 = puVar3[8];
  *(undefined4 *)(iVar6 + 0x30) = uVar14;
  *(undefined4 *)(iVar6 + 0x34) = uVar15;
  local_4c = s_cStep_ItemClose_0043f3e4;
  local_50 = iVar12;
  func_0010BEC4((int)puVar3,7,&local_50);
  uVar7 = puVar4[0x25];
  uVar13 = puVar4[0x26];
  uVar11 = puVar4[0x27];
  uVar16 = *(undefined8 *)(puVar4 + 4);
  local_64[0] = 7;
  iVar6 = puVar3[6];
  *(undefined4 *)(iVar6 + 0x38) = puVar4[0x24];
  *(undefined4 *)(iVar6 + 0x3c) = uVar7;
  iVar6 = puVar3[7];
  *(undefined4 *)(iVar6 + 0x38) = uVar13;
  *(undefined4 *)(iVar6 + 0x3c) = uVar11;
  iVar6 = puVar3[8];
  *(int *)(iVar6 + 0x38) = (int)uVar16;
  *(int *)(iVar6 + 0x3c) = (int)((ulonglong)uVar16 >> 0x20);
  local_4c = s_cStep_WarpOpen_0043f3f4;
  local_50 = iVar12;
  func_0010BEC4((int)puVar3,8,&local_50);
  uVar7 = puVar4[0x29];
  uVar11 = puVar4[0x2a];
  uVar13 = puVar4[0x2b];
  local_64[0] = 8;
  iVar6 = puVar3[6];
  *(undefined4 *)(iVar6 + 0x40) = puVar4[0x28];
  *(undefined4 *)(iVar6 + 0x44) = uVar7;
  iVar6 = puVar3[7];
  *(undefined4 *)(iVar6 + 0x40) = uVar11;
  *(undefined4 *)(iVar6 + 0x44) = uVar13;
  iVar6 = puVar3[8];
  *(int *)(iVar6 + 0x40) = (int)uVar16;
  *(int *)(iVar6 + 0x44) = (int)((ulonglong)uVar16 >> 0x20);
  local_4c = s_cStep_WarpClose_0043f404;
  local_50 = iVar12;
  func_0010BEC4((int)puVar3,9,&local_50);
  uVar7 = puVar4[0x2d];
  uVar11 = puVar4[0x2e];
  uVar13 = puVar4[0x2f];
  local_64[0] = 9;
  iVar6 = puVar3[6];
  *(undefined4 *)(iVar6 + 0x48) = puVar4[0x2c];
  *(undefined4 *)(iVar6 + 0x4c) = uVar7;
  iVar6 = puVar3[7];
  *(undefined4 *)(iVar6 + 0x48) = uVar11;
  *(undefined4 *)(iVar6 + 0x4c) = uVar13;
  iVar6 = puVar3[8];
  *(int *)(iVar6 + 0x48) = (int)uVar16;
  *(int *)(iVar6 + 0x4c) = (int)((ulonglong)uVar16 >> 0x20);
  local_4c = s_cStep_CollectOpen_0043f414;
  local_50 = iVar12;
  func_0010BEC4((int)puVar3,10,&local_50);
  uVar7 = puVar4[0x31];
  uVar11 = puVar4[0x32];
  uVar13 = puVar4[0x33];
  local_64[0] = 10;
  iVar6 = puVar3[6];
  *(undefined4 *)(iVar6 + 0x50) = puVar4[0x30];
  *(undefined4 *)(iVar6 + 0x54) = uVar7;
  iVar6 = puVar3[7];
  *(undefined4 *)(iVar6 + 0x50) = uVar11;
  *(undefined4 *)(iVar6 + 0x54) = uVar13;
  iVar6 = puVar3[8];
  *(int *)(iVar6 + 0x50) = (int)uVar16;
  *(int *)(iVar6 + 0x54) = (int)((ulonglong)uVar16 >> 0x20);
  local_4c = s_cStep_CollectWait_0043f428;
  local_50 = iVar12;
  func_0010BEC4((int)puVar3,0xb,&local_50);
  uVar7 = puVar4[0x35];
  uVar11 = puVar4[0x36];
  uVar13 = puVar4[0x37];
  local_64[0] = 0xb;
  iVar6 = puVar3[6];
  *(undefined4 *)(iVar6 + 0x58) = puVar4[0x34];
  *(undefined4 *)(iVar6 + 0x5c) = uVar7;
  iVar6 = puVar3[7];
  *(undefined4 *)(iVar6 + 0x58) = uVar11;
  *(undefined4 *)(iVar6 + 0x5c) = uVar13;
  iVar6 = puVar3[8];
  *(int *)(iVar6 + 0x58) = (int)uVar16;
  *(int *)(iVar6 + 0x5c) = (int)((ulonglong)uVar16 >> 0x20);
  local_4c = s_cStep_CollectClose_0043f43c;
  local_50 = iVar12;
  func_0010BEC4((int)puVar3,0xc,&local_50);
  iVar6 = puVar3[6];
  uVar7 = puVar4[0x39];
  uVar11 = puVar4[0x3a];
  uVar13 = puVar4[0x3b];
  *(undefined4 *)(iVar6 + 0x60) = puVar4[0x38];
  *(undefined4 *)(iVar6 + 100) = uVar7;
  iVar6 = puVar3[7];
  *(undefined4 *)(iVar6 + 0x60) = uVar11;
  *(undefined4 *)(iVar6 + 100) = uVar13;
  iVar6 = puVar3[8];
  *(int *)(iVar6 + 0x60) = (int)uVar16;
  *(int *)(iVar6 + 100) = (int)((ulonglong)uVar16 >> 0x20);
  local_64[0] = 6;
  func_0066C5E0((int)(puVar3 + -9),piVar1,local_64);
  local_4c = s_cState_Normal_0043f450;
  local_50 = iVar12;
  func_0010BEC4((int)(puVar3 + -9),0,&local_50);
  uVar11 = puVar4[0x3e];
  uVar7 = puVar4[0x3d];
  uVar13 = puVar4[0x3f];
  local_64[0] = 0;
  puVar10 = (undefined4 *)puVar3[-3];
  *puVar10 = puVar4[0x3c];
  puVar10[1] = uVar7;
  puVar10 = (undefined4 *)puVar3[-2];
  *puVar10 = uVar11;
  puVar10[1] = uVar13;
  puVar10 = (undefined4 *)puVar3[-1];
  *puVar10 = (int)uVar16;
  puVar10[1] = (int)((ulonglong)uVar16 >> 0x20);
  local_4c = s_cState_Warp_0043f460;
  local_50 = iVar12;
  func_0010BEC4((int)(puVar3 + -9),1,&local_50);
  uVar15 = puVar4[0x41];
  uVar7 = puVar2[0x43];
  uVar11 = puVar2[0x42];
  uVar13 = puVar2[0x44];
  uVar14 = puVar2[0x45];
  local_64[0] = 1;
  iVar6 = puVar3[-3];
  *(undefined4 *)(iVar6 + 8) = puVar4[0x40];
  *(undefined4 *)(iVar6 + 0xc) = uVar15;
  iVar6 = puVar3[-2];
  *(undefined4 *)(iVar6 + 8) = uVar11;
  *(undefined4 *)(iVar6 + 0xc) = uVar7;
  iVar6 = puVar3[-1];
  *(undefined4 *)(iVar6 + 8) = uVar13;
  *(undefined4 *)(iVar6 + 0xc) = uVar14;
  local_4c = s_cState_WarpPointAdd_0043f46c;
  local_50 = iVar12;
  func_0010BEC4((int)(puVar3 + -9),2,&local_50);
  uVar7 = puVar2[0x4b];
  uVar13 = puVar2[0x48];
  uVar14 = puVar2[0x49];
  uVar11 = puVar2[0x4a];
  uVar15 = puVar2[0x47];
  local_64[0] = 2;
  iVar6 = puVar3[-3];
  *(undefined4 *)(iVar6 + 0x10) = puVar2[0x46];
  *(undefined4 *)(iVar6 + 0x14) = uVar15;
  iVar6 = puVar3[-2];
  *(undefined4 *)(iVar6 + 0x10) = uVar13;
  *(undefined4 *)(iVar6 + 0x14) = uVar14;
  iVar6 = puVar3[-1];
  *(undefined4 *)(iVar6 + 0x10) = uVar11;
  *(undefined4 *)(iVar6 + 0x14) = uVar7;
  local_4c = s_cState_Collect_0043f480;
  local_50 = iVar12;
  func_0010BEC4((int)(puVar3 + -9),3,&local_50);
  uVar7 = puVar2[0x4d];
  uVar11 = puVar2[0x4e];
  uVar13 = puVar2[0x4f];
  uVar15 = puVar2[0x50];
  uVar14 = puVar2[0x51];
  local_64[0] = 3;
  iVar6 = puVar3[-3];
  *(undefined4 *)(iVar6 + 0x18) = puVar2[0x4c];
  *(undefined4 *)(iVar6 + 0x1c) = uVar7;
  iVar6 = puVar3[-2];
  *(undefined4 *)(iVar6 + 0x18) = uVar11;
  *(undefined4 *)(iVar6 + 0x1c) = uVar13;
  iVar6 = puVar3[-1];
  *(undefined4 *)(iVar6 + 0x18) = uVar15;
  *(undefined4 *)(iVar6 + 0x1c) = uVar14;
  local_4c = s_cState_Item_0043f584;
  local_50 = iVar12;
  func_0010BEC4((int)(puVar3 + -9),4,&local_50);
  uVar14 = puVar2[0x53];
  uVar7 = puVar2[0x56];
  uVar11 = puVar2[0x57];
  uVar13 = puVar2[0x54];
  uVar15 = puVar2[0x55];
  local_64[0] = 4;
  iVar6 = puVar3[-3];
  *(undefined4 *)(iVar6 + 0x20) = puVar2[0x52];
  *(undefined4 *)(iVar6 + 0x24) = uVar14;
  iVar6 = puVar3[-2];
  *(undefined4 *)(iVar6 + 0x20) = uVar13;
  *(undefined4 *)(iVar6 + 0x24) = uVar15;
  iVar6 = puVar3[-1];
  *(undefined4 *)(iVar6 + 0x20) = uVar7;
  *(undefined4 *)(iVar6 + 0x24) = uVar11;
  local_4c = s_cState_ItemViewer_0043f590;
  local_50 = iVar12;
  func_0010BEC4((int)(puVar3 + -9),5,&local_50);
  uVar7 = puVar2[0x5c];
  uVar15 = puVar2[0x5d];
  uVar11 = puVar2[0x5a];
  uVar13 = puVar2[0x5b];
  uVar14 = puVar2[0x59];
  local_64[0] = 5;
  iVar12 = puVar3[-3];
  *(undefined4 *)(iVar12 + 0x28) = puVar2[0x58];
  *(undefined4 *)(iVar12 + 0x2c) = uVar14;
  iVar12 = puVar3[-2];
  *(undefined4 *)(iVar12 + 0x28) = uVar11;
  *(undefined4 *)(iVar12 + 0x2c) = uVar13;
  iVar12 = puVar3[-1];
  *(undefined4 *)(iVar12 + 0x28) = uVar7;
  *(undefined4 *)(iVar12 + 0x2c) = uVar15;
  func_0066C424(puVar3 + -9,0);
  return piVar1;
}

