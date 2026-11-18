#include "ghidra_types.h"

extern int func_0010A794(undefined4 *param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_004BC8D8(int param_1);
extern int func_004BE114(int * param_1,int param_2,int param_3,int param_4,undefined4 param_5);
extern int func_004C170C(int param_1);
extern int func_00502768(undefined4 *param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4);
extern int func_0062BEDC(int param_1,int param_2,undefined1 param_3);
extern int func_0062CD54(undefined4 *param_1,uint *param_2,undefined4 param_3,undefined1 param_4, undefined4 *param_5);
extern int func_00667258(undefined4 *param_1,undefined1 param_2);
extern int func_0066739C(int param_1,undefined4 param_2,byte *param_3);
extern int DAT_0037390c;
extern undefined4 DAT_00373910;
extern int DAT_00373914;
extern undefined4 DAT_00373918;
extern undefined4 DAT_0037391c;
extern undefined DAT_00373920;
extern uint DAT_00373928;
extern int DAT_0037392c;
extern int DAT_0037393c;
extern int *DAT_00373a38;
extern char s_cState_CountFinish_00373998[];
extern char s_cState_EmptyEvent_003739ac[];
extern char s_cState_EventEnd_0037395c[];
extern char s_cState_Event_0037394c[];
extern char s_cState_FinishEvent_003739c0[];
extern char s_cState_Hide_0037396c[];
extern char s_cState_Idle_00373978[];
extern char s_cState_WaitCounting_00373984[];
extern char s_cState_Wait_00373930[];
extern char s_cState_Walk_00373940[];

// USA 003734F8 <- EU 003734D4 (Ghidra, non-matching)
// GLOBAL DAT_0037390c int
// GLOBAL DAT_00373910 undefined4
// GLOBAL DAT_00373914 int
// GLOBAL DAT_00373918 undefined4
// GLOBAL DAT_0037391c undefined4
// GLOBAL DAT_00373920 undefined
// GLOBAL DAT_00373928 uint
// GLOBAL DAT_0037392c int
// GLOBAL DAT_0037393c int
// GLOBAL DAT_00373a38 int *
// GLOBAL s_cState_CountFinish_00373998 string
// GLOBAL s_cState_EmptyEvent_003739ac string
// GLOBAL s_cState_EventEnd_0037395c string
// GLOBAL s_cState_Event_0037394c string
// GLOBAL s_cState_FinishEvent_003739c0 string
// GLOBAL s_cState_Hide_0037396c string
// GLOBAL s_cState_Idle_00373978 string
// GLOBAL s_cState_WaitCounting_00373984 string
// GLOBAL s_cState_Wait_00373930 string
// GLOBAL s_cState_Walk_00373940 string

/* WARNING: Variable defined which should be unmapped: objStack_70 */

int * func_003734F8(undefined4 *param_1,uint *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define objStack_70 ((uint *)(albw_frame + 0x0))
  #define local_6c ((byte *)(albw_frame + 0x4))
  #define local_68 (*(int *)(albw_frame + 0x8))
  #define local_64 (*(undefined4 *)(albw_frame + 0xc))
  #define local_58 (*(int *)(albw_frame + 0x18))
  #define local_54 (*(char * *)(albw_frame + 0x1c))
  #define local_50 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x28))
  #define local_44 (*(undefined1 *)(albw_frame + 0x2c))
  #define local_43 (*(undefined1 *)(albw_frame + 0x2d))
  objStack_70[0] = (uint)&local_50;
  local_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  local_44 = 0;
  local_43 = 1;
  piVar2 = (int *)func_0062CD54(param_1,param_2,0,0xff,(undefined4 *)objStack_70[0]);
  iVar7 = DAT_0037390c;
  *piVar2 = DAT_0037390c;
  piVar2[200] = iVar7 + 200;
  puVar3 = func_0010A794(piVar2 + 0x263);
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  local_64 = DAT_00373910;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  iVar7 = DAT_00373914;
  local_68 = DAT_00373914;
  puVar3 = func_00502768(puVar3 + 0xc,&local_68,0,1);
  uVar8 = DAT_0037391c;
  *puVar3 = DAT_00373918;
  puVar3[0xc] = 0;
  puVar3[0xd] = 0;
  piVar2 = puVar3 + -0x26f;
  puVar3[0xe] = 0;
  puVar3[0xf] = uVar8;
  local_54 = &DAT_00373920;
  objStack_70[0] = DAT_00373928;
  local_58 = iVar7;
  func_004BE114(piVar2,3,0,0,DAT_00373928);
  *(undefined1 *)((int)puVar3 + -0x165) = 0;
  (*(undefined1 *)((char *)&objStack_70[0] + 0)) = 5;
  func_0066739C((int)(puVar3 + -0x17),piVar2,(byte *)objStack_70);
  iVar1 = DAT_0037392c;
  puVar3[-0x19a] = puVar3 + -0x17;
  *(undefined2 *)(iVar1 + (int)piVar2) = 5;
  local_54 = s_cState_Wait_00373930;
  local_58 = iVar7;
  func_0010BEC4((int)(puVar3 + -0x17),0,&local_58);
  iVar1 = DAT_0037393c;
  uVar8 = *(undefined4 *)(DAT_0037393c + 0xc);
  uVar10 = *(undefined4 *)(DAT_0037393c + 0x10);
  uVar9 = *(undefined4 *)(DAT_0037393c + 8);
  uVar13 = *(undefined8 *)(DAT_0037393c + 0x14);
  local_6c[0] = 0;
  puVar4 = (undefined4 *)puVar3[-0x11];
  *puVar4 = *(undefined4 *)(DAT_0037393c + 4);
  puVar4[1] = uVar9;
  puVar4 = (undefined4 *)puVar3[-0x10];
  *puVar4 = uVar8;
  puVar4[1] = uVar10;
  puVar4 = (undefined4 *)puVar3[-0xf];
  *puVar4 = (int)uVar13;
  puVar4[1] = (int)((ulonglong)uVar13 >> 0x20);
  local_54 = s_cState_Walk_00373940;
  local_58 = iVar7;
  func_0010BEC4((int)(puVar3 + -0x17),1,&local_58);
  uVar10 = *(undefined4 *)(iVar1 + 0x20);
  uVar8 = *(undefined4 *)(iVar1 + 0x24);
  uVar9 = *(undefined4 *)(iVar1 + 0x28);
  local_6c[0] = 1;
  iVar6 = puVar3[-0x11];
  *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(iVar1 + 0x1c);
  *(undefined4 *)(iVar6 + 0xc) = uVar10;
  iVar6 = puVar3[-0x10];
  *(undefined4 *)(iVar6 + 8) = uVar8;
  *(undefined4 *)(iVar6 + 0xc) = uVar9;
  iVar6 = puVar3[-0xf];
  *(int *)(iVar6 + 8) = (int)uVar13;
  *(int *)(iVar6 + 0xc) = (int)((ulonglong)uVar13 >> 0x20);
  local_54 = s_cState_Event_0037394c;
  local_58 = iVar7;
  func_0010BEC4((int)(puVar3 + -0x17),2,&local_58);
  uVar8 = *(undefined4 *)(iVar1 + 0x30);
  uVar9 = *(undefined4 *)(iVar1 + 0x34);
  uVar10 = *(undefined4 *)(iVar1 + 0x38);
  local_6c[0] = 2;
  iVar6 = puVar3[-0x11];
  *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(iVar1 + 0x2c);
  *(undefined4 *)(iVar6 + 0x14) = uVar8;
  iVar6 = puVar3[-0x10];
  *(undefined4 *)(iVar6 + 0x10) = uVar9;
  *(undefined4 *)(iVar6 + 0x14) = uVar10;
  iVar6 = puVar3[-0xf];
  *(int *)(iVar6 + 0x10) = (int)uVar13;
  *(int *)(iVar6 + 0x14) = (int)((ulonglong)uVar13 >> 0x20);
  local_54 = s_cState_EventEnd_0037395c;
  local_58 = iVar7;
  func_0010BEC4((int)(puVar3 + -0x17),3,&local_58);
  uVar8 = *(undefined4 *)(iVar1 + 0x40);
  uVar9 = *(undefined4 *)(iVar1 + 0x44);
  uVar10 = *(undefined4 *)(iVar1 + 0x48);
  uVar11 = *(undefined4 *)(iVar1 + 0x4c);
  uVar12 = *(undefined4 *)(iVar1 + 0x50);
  local_6c[0] = 3;
  iVar6 = puVar3[-0x11];
  *(undefined4 *)(iVar6 + 0x18) = *(undefined4 *)(iVar1 + 0x3c);
  *(undefined4 *)(iVar6 + 0x1c) = uVar8;
  iVar6 = puVar3[-0x10];
  *(undefined4 *)(iVar6 + 0x18) = uVar9;
  *(undefined4 *)(iVar6 + 0x1c) = uVar10;
  iVar6 = puVar3[-0xf];
  *(undefined4 *)(iVar6 + 0x18) = uVar11;
  *(undefined4 *)(iVar6 + 0x1c) = uVar12;
  local_54 = s_cState_Hide_0037396c;
  local_58 = iVar7;
  func_0010BEC4((int)(puVar3 + -0x17),4,&local_58);
  uVar8 = *(undefined4 *)(iVar1 + 0x58);
  uVar9 = *(undefined4 *)(iVar1 + 0x5c);
  uVar10 = *(undefined4 *)(iVar1 + 0x60);
  uVar11 = *(undefined4 *)(iVar1 + 100);
  uVar12 = *(undefined4 *)(iVar1 + 0x68);
  local_6c[0] = 4;
  iVar6 = puVar3[-0x11];
  *(undefined4 *)(iVar6 + 0x20) = *(undefined4 *)(iVar1 + 0x54);
  *(undefined4 *)(iVar6 + 0x24) = uVar8;
  iVar6 = puVar3[-0x10];
  *(undefined4 *)(iVar6 + 0x20) = uVar9;
  *(undefined4 *)(iVar6 + 0x24) = uVar10;
  iVar6 = puVar3[-0xf];
  *(undefined4 *)(iVar6 + 0x20) = uVar11;
  *(undefined4 *)(iVar6 + 0x24) = uVar12;
  func_0062BEDC((int)piVar2,puVar3[-0xe],0);
  puVar4 = puVar3 + -0xc;
  local_6c[0] = 5;
  func_0066739C((int)puVar4,piVar2,local_6c);
  local_54 = s_cState_Idle_00373978;
  local_58 = iVar7;
  func_0010BEC4((int)puVar4,0,&local_58);
  uVar9 = *(undefined4 *)(iVar1 + 0x70);
  uVar8 = *(undefined4 *)(iVar1 + 0x74);
  uVar10 = *(undefined4 *)(iVar1 + 0x78);
  uVar13 = *(undefined8 *)(iVar1 + 0x14);
  local_6c[0] = 0;
  puVar5 = (undefined4 *)puVar3[-6];
  *puVar5 = *(undefined4 *)(iVar1 + 0x6c);
  puVar5[1] = uVar9;
  puVar5 = (undefined4 *)puVar3[-5];
  *puVar5 = uVar8;
  puVar5[1] = uVar10;
  puVar5 = (undefined4 *)puVar3[-4];
  *puVar5 = (int)uVar13;
  puVar5[1] = (int)((ulonglong)uVar13 >> 0x20);
  local_54 = s_cState_WaitCounting_00373984;
  local_58 = iVar7;
  func_0010BEC4((int)puVar4,1,&local_58);
  uVar8 = *(undefined4 *)(iVar1 + 0x80);
  uVar9 = *(undefined4 *)(iVar1 + 0x84);
  uVar10 = *(undefined4 *)(iVar1 + 0x88);
  local_6c[0] = 1;
  iVar6 = puVar3[-6];
  *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(iVar1 + 0x7c);
  *(undefined4 *)(iVar6 + 0xc) = uVar8;
  iVar6 = puVar3[-5];
  *(undefined4 *)(iVar6 + 8) = uVar9;
  *(undefined4 *)(iVar6 + 0xc) = uVar10;
  iVar6 = puVar3[-4];
  *(int *)(iVar6 + 8) = (int)uVar13;
  *(int *)(iVar6 + 0xc) = (int)((ulonglong)uVar13 >> 0x20);
  local_54 = s_cState_CountFinish_00373998;
  local_58 = iVar7;
  func_0010BEC4((int)puVar4,2,&local_58);
  uVar14 = *(undefined8 *)(iVar1 + 0x6c);
  uVar8 = *(undefined4 *)(iVar1 + 0x8c);
  uVar9 = *(undefined4 *)(iVar1 + 0x90);
  local_6c[0] = 2;
  iVar6 = puVar3[-6];
  *(int *)(iVar6 + 0x10) = (int)uVar14;
  *(int *)(iVar6 + 0x14) = (int)((ulonglong)uVar14 >> 0x20);
  iVar6 = puVar3[-5];
  *(undefined4 *)(iVar6 + 0x10) = uVar8;
  *(undefined4 *)(iVar6 + 0x14) = uVar9;
  iVar6 = puVar3[-4];
  *(int *)(iVar6 + 0x10) = (int)uVar13;
  *(int *)(iVar6 + 0x14) = (int)((ulonglong)uVar13 >> 0x20);
  local_54 = s_cState_EmptyEvent_003739ac;
  local_58 = iVar7;
  func_0010BEC4((int)puVar4,3,&local_58);
  uVar8 = *(undefined4 *)(iVar1 + 0x94);
  uVar9 = *(undefined4 *)(iVar1 + 0x98);
  local_6c[0] = 3;
  iVar6 = puVar3[-6];
  *(int *)(iVar6 + 0x18) = (int)uVar14;
  *(int *)(iVar6 + 0x1c) = (int)((ulonglong)uVar14 >> 0x20);
  iVar6 = puVar3[-5];
  *(undefined4 *)(iVar6 + 0x18) = uVar8;
  *(undefined4 *)(iVar6 + 0x1c) = uVar9;
  iVar6 = puVar3[-4];
  *(int *)(iVar6 + 0x18) = (int)uVar13;
  *(int *)(iVar6 + 0x1c) = (int)((ulonglong)uVar13 >> 0x20);
  local_54 = s_cState_FinishEvent_003739c0;
  local_58 = iVar7;
  func_0010BEC4((int)puVar4,4,&local_58);
  uVar10 = *(undefined4 *)(iVar1 + 0xa4);
  uVar8 = *(undefined4 *)(iVar1 + 0xa8);
  uVar9 = *(undefined4 *)(iVar1 + 0xac);
  uVar11 = *(undefined4 *)(iVar1 + 0xb0);
  uVar12 = *(undefined4 *)(iVar1 + 0xa0);
  local_6c[0] = 4;
  iVar7 = puVar3[-6];
  *(undefined4 *)(iVar7 + 0x20) = *(undefined4 *)(iVar1 + 0x9c);
  *(undefined4 *)(iVar7 + 0x24) = uVar12;
  iVar7 = puVar3[-5];
  *(undefined4 *)(iVar7 + 0x20) = uVar10;
  *(undefined4 *)(iVar7 + 0x24) = uVar8;
  iVar7 = puVar3[-4];
  *(undefined4 *)(iVar7 + 0x20) = uVar9;
  *(undefined4 *)(iVar7 + 0x24) = uVar11;
  func_00667258(puVar4,0);
  *(uint *)(*DAT_00373a38 + 0x2b4) = *(uint *)(*DAT_00373a38 + 0x2b4) | 8;
  func_004C170C((int)piVar2);
  func_004BC8D8((int)piVar2);
  return piVar2;
}

