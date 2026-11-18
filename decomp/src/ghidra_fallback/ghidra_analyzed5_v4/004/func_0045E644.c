#include "ghidra_types.h"

extern int func_0010A794(undefined4 *param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_0017A520(undefined4 *param_1,undefined2 param_2,int *param_3,int param_4);
extern int func_003FDF90(int param_1,int param_2);
extern int func_004B9A10(undefined4 *param_1,undefined1 param_2);
extern int func_005229AC(int *param_1,int *param_2);
extern int func_0066D78C(undefined4 *param_1,undefined1 param_2);
extern int func_0066D8D0(int param_1,undefined4 param_2,byte *param_3);
extern int DAT_0045ea1c;
extern undefined4 DAT_0045ea20;
extern undefined4 DAT_0045ea24;
extern undefined DAT_0045ea28;
extern int DAT_0045ea2c;
extern undefined DAT_0045ea3c;
extern int *DAT_0045efc0;
extern int *DAT_0045efc4;
extern int *DAT_0045efc8;
extern int *DAT_0045efcc;
extern int *DAT_0045efd0;
extern int *DAT_0045efd4;
extern int *DAT_0045efd8;
extern int *DAT_0045efdc;
extern undefined4 *DAT_0045efec;
extern char s_ChangeFile_0045ea30[];
extern char s_G_AttentionBase_00_0045ea9c[];
extern char s_G_AttentionText_00_0045eab0[];
extern char s_G_Clothes_00_0045ea60[];
extern char s_G_Shield_00_0045ea70[];
extern char s_G_Sword_00_0045ea54[];
extern char s_InAttention_0045ea90[];
extern char s_SetEquipmentIcon_0045ea40[];
extern char s_SetSavePointIcon_0045ea7c[];
extern char s_cInOutState_InWait_0045f03c[];
extern char s_cInOutState_In_0045f02c[];
extern char s_cInOutState_OutWait_0045f018[];
extern char s_cInOutState_Out_0045f050[];
extern char s_cState_ChangeEnd_0045f004[];
extern char s_cState_ChangeStart_0045eff0[];
extern char s_cState_Wait_0045efe0[];
extern char s_cTelopState_ScrollNone_0045f0a4[];
extern char s_cTelopState_ScrollOut_0045f08c[];
extern char s_cTelopState_ScrollWait_0045f060[];
extern char s_cTelopState_Scroll_0045f078[];

// USA 0045E644 <- EU 0045E61C (Ghidra, non-matching)
// GLOBAL DAT_0045ea1c int
// GLOBAL DAT_0045ea20 undefined4
// GLOBAL DAT_0045ea24 undefined4
// GLOBAL DAT_0045ea28 undefined
// GLOBAL DAT_0045ea2c int
// GLOBAL DAT_0045ea3c undefined
// GLOBAL DAT_0045efc0 int *
// GLOBAL DAT_0045efc4 int *
// GLOBAL DAT_0045efc8 int *
// GLOBAL DAT_0045efcc int *
// GLOBAL DAT_0045efd0 int *
// GLOBAL DAT_0045efd4 int *
// GLOBAL DAT_0045efd8 int *
// GLOBAL DAT_0045efdc int *
// GLOBAL DAT_0045efec undefined4 *
// GLOBAL s_ChangeFile_0045ea30 string
// GLOBAL s_G_AttentionBase_00_0045ea9c string
// GLOBAL s_G_AttentionText_00_0045eab0 string
// GLOBAL s_G_Clothes_00_0045ea60 string
// GLOBAL s_G_Shield_00_0045ea70 string
// GLOBAL s_G_Sword_00_0045ea54 string
// GLOBAL s_InAttention_0045ea90 string
// GLOBAL s_SetEquipmentIcon_0045ea40 string
// GLOBAL s_SetSavePointIcon_0045ea7c string
// GLOBAL s_cInOutState_InWait_0045f03c string
// GLOBAL s_cInOutState_In_0045f02c string
// GLOBAL s_cInOutState_OutWait_0045f018 string
// GLOBAL s_cInOutState_Out_0045f050 string
// GLOBAL s_cState_ChangeEnd_0045f004 string
// GLOBAL s_cState_ChangeStart_0045eff0 string
// GLOBAL s_cState_Wait_0045efe0 string
// GLOBAL s_cTelopState_ScrollNone_0045f0a4 string
// GLOBAL s_cTelopState_ScrollOut_0045f08c string
// GLOBAL s_cTelopState_ScrollWait_0045f060 string
// GLOBAL s_cTelopState_Scroll_0045f078 string

int * func_0045E644(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  int *piVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_5c ((byte *)(albw_frame + 0x4))
  #define local_48 (*(int *)(albw_frame + 0x18))
  #define local_44 (*(char * *)(albw_frame + 0x1c))
  #define local_38 (*(int *)(albw_frame + 0x28))
  #define local_34 (*(char * *)(albw_frame + 0x2c))
  piVar1 = func_004B9A10(param_1,0);
  iVar10 = DAT_0045ea1c;
  *piVar1 = DAT_0045ea1c;
  piVar1[0xe] = iVar10 + 0x54;
  puVar2 = func_0010A794(piVar1 + 0x1d);
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2 = func_0010A794(puVar2 + 9);
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
  uVar8 = DAT_0045ea20;
  *(undefined2 *)((int)puVar3 + 0x26) = 0xffff;
  puVar3[10] = uVar8;
  piVar1 = puVar3 + -0x2f;
  puVar3[0xb] = 0;
  *(undefined2 *)(puVar3 + 0xc) = 0;
  *(undefined2 *)((int)puVar3 + 0x32) = 0xffff;
  puVar3[0xd] = uVar8;
  puVar3[0xe] = 0;
  *(undefined2 *)(puVar3 + 0xf) = 0;
  *(undefined2 *)((int)puVar3 + 0x3e) = 0xffff;
  puVar3[0x10] = uVar8;
  puVar3[0x11] = 0;
  *(undefined2 *)(puVar3 + 0x12) = 0;
  *(undefined2 *)((int)puVar3 + 0x4a) = 0xffff;
  puVar3[0x13] = uVar8;
  puVar3[0x14] = 0;
  *(undefined2 *)(puVar3 + 0x15) = 0;
  *(undefined2 *)((int)puVar3 + 0x56) = 0xffff;
  puVar3[0x16] = uVar8;
  puVar3[0x17] = 0;
  *(undefined2 *)(puVar3 + 0x18) = 0;
  *(undefined2 *)((int)puVar3 + 0x62) = 0xffff;
  puVar3[0x19] = uVar8;
  puVar3[0x1a] = 0;
  *(undefined2 *)(puVar3 + 0x1b) = 0;
  *(undefined2 *)((int)puVar3 + 0x6e) = 0xffff;
  puVar3[0x1c] = uVar8;
  puVar3[0x1d] = 0;
  *(undefined2 *)(puVar3 + 0x1e) = 0;
  *(undefined2 *)((int)puVar3 + 0x7a) = 0xffff;
  puVar3[0x1f] = uVar8;
  puVar3[0x20] = 0;
  puVar4 = (undefined4 *)func_0010BAB4(0x78);
  puVar2 = (undefined4 *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    puVar2 = func_0017A520(puVar4,0x400,(int *)0x0,0);
  }
  puVar3[0x21] = puVar2;
  puVar3[0x22] = 0;
  puVar3[0x23] = 0;
  puVar3[0x24] = 0;
  puVar3[0x25] = 0;
  puVar3[0x26] = 0;
  puVar3[0x27] = 0;
  puVar3[0x28] = 0;
  puVar3[0x29] = uVar8;
  puVar3[0x2a] = uVar8;
  *(undefined1 *)(puVar3 + 0x2b) = 0;
  (**(code **)(*piVar1 + 0x38))(piVar1,DAT_0045ea24,0);
  piVar9 = (int *)puVar3[-0x28];
  func_0016773C((int)piVar9,9);
  iVar10 = DAT_0045ea2c;
  local_34 = &DAT_0045ea28;
  local_38 = DAT_0045ea2c;
  func_00166C20(piVar9,0,&local_38,0);
  local_34 = s_ChangeFile_0045ea30;
  local_38 = iVar10;
  func_00166C20(piVar9,1,&local_38,0);
  local_34 = &DAT_0045ea3c;
  local_38 = iVar10;
  func_00166C20(piVar9,2,&local_38,0);
  local_34 = s_SetEquipmentIcon_0045ea40;
  local_38 = iVar10;
  local_44 = s_G_Sword_00_0045ea54;
  local_48 = iVar10;
  (**(code **)(iVar10 + 8))(&local_48);
  iVar5 = func_003FDF90(*(int *)(*piVar9 + 0x14),(int)local_44);
  func_00166C20(piVar9,3,&local_38,iVar5);
  local_48 = iVar10;
  local_44 = s_SetEquipmentIcon_0045ea40;
  local_34 = s_G_Clothes_00_0045ea60;
  local_38 = iVar10;
  (**(code **)(iVar10 + 8))(&local_38);
  iVar5 = func_003FDF90(*(int *)(*piVar9 + 0x14),(int)local_34);
  func_00166C20(piVar9,4,&local_48,iVar5);
  local_48 = iVar10;
  local_44 = s_SetEquipmentIcon_0045ea40;
  local_34 = s_G_Shield_00_0045ea70;
  local_38 = iVar10;
  (**(code **)(iVar10 + 8))(&local_38);
  iVar5 = func_003FDF90(*(int *)(*piVar9 + 0x14),(int)local_34);
  func_00166C20(piVar9,5,&local_48,iVar5);
  local_44 = s_SetSavePointIcon_0045ea7c;
  local_48 = iVar10;
  func_00166C20(piVar9,6,&local_48,0);
  local_48 = iVar10;
  local_44 = s_InAttention_0045ea90;
  local_34 = s_G_AttentionBase_00_0045ea9c;
  local_38 = iVar10;
  (**(code **)(iVar10 + 8))(&local_38);
  iVar5 = func_003FDF90(*(int *)(*piVar9 + 0x14),(int)local_34);
  func_00166C20(piVar9,7,&local_48,iVar5);
  local_48 = iVar10;
  local_44 = s_InAttention_0045ea90;
  local_34 = s_G_AttentionText_00_0045eab0;
  local_38 = iVar10;
  (**(code **)(iVar10 + 8))(&local_38);
  iVar5 = func_003FDF90(*(int *)(*piVar9 + 0x14),(int)local_34);
  func_00166C20(piVar9,8,&local_48,iVar5);
  puVar3[0x17] = piVar9;
  *(undefined2 *)((int)puVar3 + 0x56) = 1;
  *(undefined2 *)(puVar3 + 0x15) = 0;
  puVar3[0xe] = piVar9;
  *(undefined2 *)((int)puVar3 + 0x32) = 3;
  *(undefined2 *)(puVar3 + 0xc) = 5;
  puVar3[0x11] = piVar9;
  *(undefined2 *)((int)puVar3 + 0x3e) = 4;
  *(undefined2 *)(puVar3 + 0xf) = 5;
  puVar3[0x14] = piVar9;
  *(undefined2 *)((int)puVar3 + 0x4a) = 5;
  *(undefined2 *)(puVar3 + 0x12) = 5;
  puVar3[0x1a] = piVar9;
  *(undefined2 *)((int)puVar3 + 0x62) = 6;
  *(undefined2 *)(puVar3 + 0x18) = 5;
  puVar3[0x1d] = piVar9;
  *(undefined2 *)((int)puVar3 + 0x6e) = 7;
  *(undefined2 *)(puVar3 + 0x1b) = 0;
  puVar3[0x20] = piVar9;
  *(undefined2 *)((int)puVar3 + 0x7a) = 8;
  *(undefined2 *)(puVar3 + 0x1e) = 0;
  piVar6 = (int *)func_005229AC((int *)puVar3[-0x28],DAT_0045efc0);
  piVar9 = DAT_0045efc4;
  if (piVar6 != (int *)0x0) {
    piVar7 = (int *)(**(code **)(*piVar6 + 8))(piVar6);
    do {
      if (piVar7 == piVar9) goto LAB_0045eb28;
      piVar7 = (int *)*piVar7;
    } while (piVar7 != (int *)0x0);
  }
  piVar6 = (int *)0x0;
LAB_0045eb28:
  puVar3[0x22] = piVar6;
  piVar6 = (int *)func_005229AC((int *)puVar3[-0x28],DAT_0045efc8);
  piVar9 = DAT_0045efc4;
  if (piVar6 != (int *)0x0) {
    piVar7 = (int *)(**(code **)(*piVar6 + 8))(piVar6);
    do {
      if (piVar7 == piVar9) goto LAB_0045eb6c;
      piVar7 = (int *)*piVar7;
    } while (piVar7 != (int *)0x0);
  }
  piVar6 = (int *)0x0;
LAB_0045eb6c:
  puVar3[0x23] = piVar6;
  piVar6 = (int *)func_005229AC((int *)puVar3[-0x28],DAT_0045efcc);
  piVar9 = DAT_0045efc4;
  if (piVar6 != (int *)0x0) {
    piVar7 = (int *)(**(code **)(*piVar6 + 8))(piVar6);
    do {
      if (piVar7 == piVar9) goto LAB_0045ebb0;
      piVar7 = (int *)*piVar7;
    } while (piVar7 != (int *)0x0);
  }
  piVar6 = (int *)0x0;
LAB_0045ebb0:
  puVar3[0x24] = piVar6;
  uVar8 = func_005229AC((int *)puVar3[-0x28],DAT_0045efd0);
  puVar3[0x25] = uVar8;
  piVar6 = (int *)func_005229AC((int *)puVar3[-0x28],DAT_0045efd4);
  piVar9 = DAT_0045efc4;
  if (piVar6 != (int *)0x0) {
    piVar7 = (int *)(**(code **)(*piVar6 + 8))(piVar6);
    do {
      if (piVar7 == piVar9) goto LAB_0045ec04;
      piVar7 = (int *)*piVar7;
    } while (piVar7 != (int *)0x0);
  }
  piVar6 = (int *)0x0;
LAB_0045ec04:
  puVar3[0x26] = piVar6;
  uVar8 = func_005229AC((int *)puVar3[-0x28],DAT_0045efd8);
  puVar3[0x28] = uVar8;
  uVar8 = func_005229AC((int *)puVar3[-0x28],DAT_0045efdc);
  puVar3[0x27] = uVar8;
  local_5c[0] = 3;
  func_0066D8D0((int)(puVar3 + -0x12),piVar1,local_5c);
  local_44 = s_cState_Wait_0045efe0;
  local_48 = iVar10;
  func_0010BEC4((int)(puVar3 + -0x12),0,&local_48);
  puVar2 = DAT_0045efec;
  uVar12 = DAT_0045efec[1];
  uVar8 = DAT_0045efec[2];
  uVar11 = DAT_0045efec[3];
  uVar13 = *(undefined8 *)(DAT_0045efec + 4);
  local_5c[0] = 0;
  puVar4 = (undefined4 *)puVar3[-0xc];
  *puVar4 = *DAT_0045efec;
  puVar4[1] = uVar12;
  puVar4 = (undefined4 *)puVar3[-0xb];
  *puVar4 = uVar8;
  puVar4[1] = uVar11;
  puVar4 = (undefined4 *)puVar3[-10];
  *puVar4 = (int)uVar13;
  puVar4[1] = (int)((ulonglong)uVar13 >> 0x20);
  local_44 = s_cState_ChangeStart_0045eff0;
  local_48 = iVar10;
  func_0010BEC4((int)(puVar3 + -0x12),1,&local_48);
  uVar8 = puVar2[7];
  uVar11 = puVar2[8];
  uVar12 = puVar2[9];
  local_5c[0] = 1;
  iVar5 = puVar3[-0xc];
  *(undefined4 *)(iVar5 + 8) = puVar2[6];
  *(undefined4 *)(iVar5 + 0xc) = uVar8;
  iVar5 = puVar3[-0xb];
  *(undefined4 *)(iVar5 + 8) = uVar11;
  *(undefined4 *)(iVar5 + 0xc) = uVar12;
  iVar5 = puVar3[-10];
  *(int *)(iVar5 + 8) = (int)uVar13;
  *(int *)(iVar5 + 0xc) = (int)((ulonglong)uVar13 >> 0x20);
  local_44 = s_cState_ChangeEnd_0045f004;
  local_48 = iVar10;
  func_0010BEC4((int)(puVar3 + -0x12),2,&local_48);
  uVar8 = puVar2[0xb];
  uVar11 = puVar2[0xc];
  uVar12 = puVar2[0xd];
  local_5c[0] = 2;
  iVar5 = puVar3[-0xc];
  *(undefined4 *)(iVar5 + 0x10) = puVar2[10];
  *(undefined4 *)(iVar5 + 0x14) = uVar8;
  iVar5 = puVar3[-0xb];
  *(undefined4 *)(iVar5 + 0x10) = uVar11;
  *(undefined4 *)(iVar5 + 0x14) = uVar12;
  iVar5 = puVar3[-10];
  *(int *)(iVar5 + 0x10) = (int)uVar13;
  *(int *)(iVar5 + 0x14) = (int)((ulonglong)uVar13 >> 0x20);
  func_0066D78C(puVar3 + -0x12,0);
  local_5c[0] = 4;
  func_0066D8D0((int)(puVar3 + -9),piVar1,local_5c);
  local_44 = s_cInOutState_OutWait_0045f018;
  local_48 = iVar10;
  func_0010BEC4((int)(puVar3 + -9),0,&local_48);
  uVar8 = puVar2[0x11];
  uVar11 = puVar2[0xf];
  uVar12 = puVar2[0x10];
  local_5c[0] = 0;
  puVar4 = (undefined4 *)puVar3[-3];
  *puVar4 = puVar2[0xe];
  puVar4[1] = uVar11;
  puVar4 = (undefined4 *)puVar3[-2];
  *puVar4 = uVar12;
  puVar4[1] = uVar8;
  puVar4 = (undefined4 *)puVar3[-1];
  *puVar4 = (int)uVar13;
  puVar4[1] = (int)((ulonglong)uVar13 >> 0x20);
  local_44 = s_cInOutState_In_0045f02c;
  local_48 = iVar10;
  func_0010BEC4((int)(puVar3 + -9),1,&local_48);
  uVar8 = puVar2[0x13];
  uVar11 = puVar2[0x14];
  uVar12 = puVar2[0x15];
  local_5c[0] = 1;
  iVar5 = puVar3[-3];
  *(undefined4 *)(iVar5 + 8) = puVar2[0x12];
  *(undefined4 *)(iVar5 + 0xc) = uVar8;
  iVar5 = puVar3[-2];
  *(undefined4 *)(iVar5 + 8) = uVar11;
  *(undefined4 *)(iVar5 + 0xc) = uVar12;
  iVar5 = puVar3[-1];
  *(int *)(iVar5 + 8) = (int)uVar13;
  *(int *)(iVar5 + 0xc) = (int)((ulonglong)uVar13 >> 0x20);
  local_44 = s_cInOutState_InWait_0045f03c;
  local_48 = iVar10;
  func_0010BEC4((int)(puVar3 + -9),2,&local_48);
  uVar8 = puVar2[0x17];
  uVar11 = puVar2[0x18];
  uVar12 = puVar2[0x19];
  local_5c[0] = 2;
  iVar5 = puVar3[-3];
  *(undefined4 *)(iVar5 + 0x10) = puVar2[0x16];
  *(undefined4 *)(iVar5 + 0x14) = uVar8;
  iVar5 = puVar3[-2];
  *(undefined4 *)(iVar5 + 0x10) = uVar11;
  *(undefined4 *)(iVar5 + 0x14) = uVar12;
  iVar5 = puVar3[-1];
  *(int *)(iVar5 + 0x10) = (int)uVar13;
  *(int *)(iVar5 + 0x14) = (int)((ulonglong)uVar13 >> 0x20);
  local_44 = s_cInOutState_Out_0045f050;
  local_48 = iVar10;
  func_0010BEC4((int)(puVar3 + -9),3,&local_48);
  uVar8 = puVar2[0x1b];
  uVar11 = puVar2[0x1c];
  uVar12 = puVar2[0x1d];
  local_5c[0] = 3;
  iVar5 = puVar3[-3];
  *(undefined4 *)(iVar5 + 0x18) = puVar2[0x1a];
  *(undefined4 *)(iVar5 + 0x1c) = uVar8;
  iVar5 = puVar3[-2];
  *(undefined4 *)(iVar5 + 0x18) = uVar11;
  *(undefined4 *)(iVar5 + 0x1c) = uVar12;
  iVar5 = puVar3[-1];
  *(int *)(iVar5 + 0x18) = (int)uVar13;
  *(int *)(iVar5 + 0x1c) = (int)((ulonglong)uVar13 >> 0x20);
  func_0066D78C(puVar3 + -9,0);
  local_5c[0] = 4;
  func_0066D8D0((int)puVar3,piVar1,local_5c);
  local_44 = s_cTelopState_ScrollWait_0045f060;
  local_48 = iVar10;
  func_0010BEC4((int)puVar3,0,&local_48);
  uVar8 = puVar2[0x1f];
  uVar11 = puVar2[0x20];
  uVar12 = puVar2[0x21];
  local_5c[0] = 0;
  puVar4 = (undefined4 *)puVar3[6];
  *puVar4 = puVar2[0x1e];
  puVar4[1] = uVar8;
  puVar4 = (undefined4 *)puVar3[7];
  *puVar4 = uVar11;
  puVar4[1] = uVar12;
  puVar4 = (undefined4 *)puVar3[8];
  *puVar4 = (int)uVar13;
  puVar4[1] = (int)((ulonglong)uVar13 >> 0x20);
  local_44 = s_cTelopState_Scroll_0045f078;
  local_48 = iVar10;
  func_0010BEC4((int)puVar3,1,&local_48);
  uVar8 = puVar2[0x23];
  uVar11 = puVar2[0x24];
  uVar12 = puVar2[0x25];
  local_5c[0] = 1;
  iVar5 = puVar3[6];
  *(undefined4 *)(iVar5 + 8) = puVar2[0x22];
  *(undefined4 *)(iVar5 + 0xc) = uVar8;
  iVar5 = puVar3[7];
  *(undefined4 *)(iVar5 + 8) = uVar11;
  *(undefined4 *)(iVar5 + 0xc) = uVar12;
  iVar5 = puVar3[8];
  *(int *)(iVar5 + 8) = (int)uVar13;
  *(int *)(iVar5 + 0xc) = (int)((ulonglong)uVar13 >> 0x20);
  local_44 = s_cTelopState_ScrollOut_0045f08c;
  local_48 = iVar10;
  func_0010BEC4((int)puVar3,2,&local_48);
  uVar8 = puVar2[0x29];
  uVar11 = puVar2[0x28];
  uVar12 = puVar2[0x27];
  local_5c[0] = 2;
  iVar5 = puVar3[6];
  *(undefined4 *)(iVar5 + 0x10) = puVar2[0x26];
  *(undefined4 *)(iVar5 + 0x14) = uVar12;
  iVar5 = puVar3[7];
  *(undefined4 *)(iVar5 + 0x10) = uVar11;
  *(undefined4 *)(iVar5 + 0x14) = uVar8;
  iVar5 = puVar3[8];
  *(int *)(iVar5 + 0x10) = (int)uVar13;
  *(int *)(iVar5 + 0x14) = (int)((ulonglong)uVar13 >> 0x20);
  local_44 = s_cTelopState_ScrollNone_0045f0a4;
  local_48 = iVar10;
  func_0010BEC4((int)puVar3,3,&local_48);
  uVar8 = puVar2[0x2b];
  uVar11 = puVar2[0x2c];
  uVar12 = puVar2[0x2d];
  local_5c[0] = 3;
  iVar10 = puVar3[6];
  *(undefined4 *)(iVar10 + 0x18) = puVar2[0x2a];
  *(undefined4 *)(iVar10 + 0x1c) = uVar8;
  iVar10 = puVar3[7];
  *(undefined4 *)(iVar10 + 0x18) = uVar11;
  *(undefined4 *)(iVar10 + 0x1c) = uVar12;
  iVar10 = puVar3[8];
  *(int *)(iVar10 + 0x18) = (int)uVar13;
  *(int *)(iVar10 + 0x1c) = (int)((ulonglong)uVar13 >> 0x20);
  func_0066D78C(puVar3,3);
  return piVar1;
}

