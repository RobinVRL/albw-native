#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_00169688(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_0019B04C(uint param_1);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_00324964(int param_1);
extern int func_003249E0(int param_1,uint param_2);
extern int func_00324A30(undefined4 *param_1,uint *param_2);
extern int func_0034CAA0(undefined4 *param_1);
extern int func_004C43E0(int param_1,int *param_2);
extern int func_004E4388(int param_1);
extern int func_004E51AC(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_004EE484(undefined4 *param_1);
extern int func_0052FCA4(int param_1,undefined4 *param_2,int *param_3);
extern int func_0054D89C(int param_1,uint param_2);
extern int func_0054D964(int param_1,uint param_2);
extern int func_0054DDF4(int param_1,uint param_2);
extern float func_0054DE3C(int param_1,uint param_2,int param_3);
extern int func_0066A8D8(undefined4 *param_1,undefined1 param_2);
extern int iRam004e6014;
extern int iRam004e6024;
extern undefined4 uRam004e609c;
extern undefined4 uRam004e60a0;
extern undefined4 uRam004e6218;
extern int *piRam004e621c;
extern undefined4 *puRam004e6010;
extern undefined4 *puRam004e6220;
extern int DAT_004e5ae4;
extern undefined4 DAT_004e5ae8;
extern uint DAT_004e5aec;
extern undefined4 DAT_004e5af0;
extern undefined4 *DAT_004e5af4;
extern uint DAT_004e5af8;
extern undefined4 DAT_004e5afc;
extern int DAT_004e5b00;
extern undefined4 DAT_004e5b04;
extern int *DAT_004e5b08;
extern undefined4 DAT_004e5b0c;
extern int DAT_004e5b10;
extern int DAT_004e5b14;
extern char s_cState_Birth_004e6038[];
extern char s_cState_Explose_004e608c[];
extern char s_cState_Fixed_004e6028[];
extern char s_cState_Follow_004e6054[];
extern char s_cState_Hide_004e6018[];
extern char s_cState_PreExplose_004e6078[];
extern char s_cState_Wait_004e6048[];
extern char s_cState_WaterDrop_004e6064[];

// USA 004E5710 <- EU 004E56E8 (Ghidra, non-matching)
// GLOBAL DAT_004e5ae4 int
// GLOBAL DAT_004e5ae8 undefined4
// GLOBAL DAT_004e5aec uint
// GLOBAL DAT_004e5af0 undefined4
// GLOBAL DAT_004e5af4 undefined4 *
// GLOBAL DAT_004e5af8 uint
// GLOBAL DAT_004e5afc undefined4
// GLOBAL DAT_004e5b00 int
// GLOBAL DAT_004e5b04 undefined4
// GLOBAL DAT_004e5b08 int *
// GLOBAL DAT_004e5b0c undefined4
// GLOBAL DAT_004e5b10 int
// GLOBAL DAT_004e5b14 int
// GLOBAL UNK_004e6010 undefined *
// GLOBAL UNK_004e6014 int
// GLOBAL UNK_004e6024 int
// GLOBAL UNK_004e609c undefined4
// GLOBAL UNK_004e60a0 undefined4
// GLOBAL UNK_004e6218 uint
// GLOBAL UNK_004e621c int *
// GLOBAL UNK_004e6220 uint *
// GLOBAL s_cState_Birth_004e6038 string
// GLOBAL s_cState_Explose_004e608c string
// GLOBAL s_cState_Fixed_004e6028 string
// GLOBAL s_cState_Follow_004e6054 string
// GLOBAL s_cState_Hide_004e6018 string
// GLOBAL s_cState_PreExplose_004e6078 string
// GLOBAL s_cState_Wait_004e6048 string
// GLOBAL s_cState_WaterDrop_004e6064 string

/* WARNING: Variable defined which should be unmapped: objStack_300 */

uint func_004E5710(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  char cVar2;
  undefined2 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined2 *puVar12;
  int *piVar13;
  undefined4 extraout_r1;
  int iVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 *puVar18;
  uint uVar19;
  undefined4 uVar20;
  float fVar21;
  undefined4 uVar22;
  ulonglong uVar23;
  undefined4 uVar25;
  undefined8 uVar24;
  _Alignas(8) unsigned char albw_frame[0x300];
  #define objStack_300 ((uint *)(albw_frame + 0x0))
  #define auStack_2f4 ((uint *)(albw_frame + 0xc))
  #define uStack_2e4 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_2e0 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_2dc (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_2d8 (*(undefined2 *)(albw_frame + 0x28))
  #define uStack_2d0 (*(undefined2 *)(albw_frame + 0x30))
  #define uStack_2ce (*(undefined4 *)(albw_frame + 0x32))
  #define uStack_2b8 (*(undefined4 *)(albw_frame + 0x48))
  #define uStack_2b4 (*(undefined4 *)(albw_frame + 0x4c))
  #define uStack_2b0 (*(undefined2 *)(albw_frame + 0x50))
  #define local_2a4 (*(undefined4 * *)(albw_frame + 0x5c))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x2c0))
  #define iStack_38 (*(int *)(albw_frame + 0x2c8))
  #define pcStack_34 (*(char * *)(albw_frame + 0x2cc))
  piVar4 = (int *)func_00324A30(param_1,param_2);
  iVar6 = DAT_004e5ae4;
  piVar4[200] = DAT_004e5ae4 + 0x5c;
  *piVar4 = iVar6;
  piVar4[0x11e] = 0;
  piVar4[0x120] = 0;
  puVar5 = func_0010A794(piVar4 + 0x121);
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  uVar17 = DAT_004e5ae8;
  puVar5[10] = 0;
  puVar5[0xb] = uVar17;
  uVar17 = DAT_004e5af0;
  puVar5[0xd] = DAT_004e5aec;
  puVar5[0xe] = uVar17;
  puVar5[0xc] = 0;
  puVar5[0x10] = DAT_004e5aec;
  puVar5[0x11] = uVar17;
  puVar5[0xf] = 0;
  iVar6 = func_0054D89C((int)(puVar5 + -0x121),0);
  puVar5[0x12] = iVar6;
  puVar5[0x13] = 0;
  uVar15 = param_2[2];
  uVar19 = param_2[3];
  puVar5[0x14] = param_2[1];
  puVar5[0x15] = uVar15;
  puVar5[0x16] = uVar19;
  uVar17 = DAT_004e5afc;
  puVar7 = DAT_004e5af4;
  uVar15 = param_2[5];
  uVar19 = param_2[6];
  puVar5[0x17] = param_2[4];
  puVar5[0x18] = uVar15;
  puVar5[0x19] = uVar19;
  uVar15 = DAT_004e5af8;
  uVar16 = puVar7[1];
  uVar20 = puVar7[2];
  uVar23 = (ulonglong)DAT_004e5af8;
  puVar5[0x1a] = *puVar7;
  puVar5[0x1b] = uVar16;
  puVar5[0x1c] = uVar20;
  uVar16 = *puVar7;
  uVar20 = puVar7[1];
  puVar5[0x1f] = puVar7[2];
  puVar5[0x1d] = uVar16;
  puVar5[0x1e] = uVar20;
  puVar5[0x23] = uVar17;
  puVar5[0x24] = uVar15;
  puVar5[0x25] = uVar15;
  puVar5[0x27] = uVar15;
  puVar5[0x28] = puVar5[-0x11e];
  puVar5[0x2a] = puVar5 + -0x121;
  puVar5[0x2c] = puVar5 + -0x2a;
  puVar5[0x2b] = puVar5 + 0x17;
  *(undefined1 *)(puVar5 + 0x2d) = 0;
  *(undefined1 *)((int)puVar5 + 0xb5) = 1;
  *(undefined1 *)((int)puVar5 + 0xb6) = 0;
  *(undefined1 *)((int)puVar5 + 0xb7) = 0;
  *(undefined1 *)(puVar5 + 0x2e) = 1;
  puVar5[0x2f] = 0;
  puVar5[0x30] = 0;
  iVar6 = func_004EE484(puVar5 + 0x31);
  iVar6 = func_004EE484((undefined4 *)(iVar6 + 100));
  iVar6 = func_004EE484((undefined4 *)(iVar6 + 100));
  uVar15 = iVar6 - 0x610;
  puVar5 = (undefined4 *)func_0010BAB4(0x48);
  puVar7 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar7 = func_0034CAA0(puVar5);
  }
  iVar8 = DAT_004e5b00;
  *(undefined4 **)(iVar6 + 100) = puVar7;
  uVar17 = *(undefined4 *)(iVar8 + 8);
  puVar18 = (undefined4 *)(iVar6 + 0x98);
  *(undefined4 *)(iVar6 + 0x70) = *(undefined4 *)(iVar8 + 4);
  *(undefined4 *)(iVar6 + 0x74) = uVar17;
  uVar17 = DAT_004e5b04;
  *(undefined4 *)(iVar6 + 0x68) = DAT_004e5b04;
  *(uint *)(iVar6 + 0x6c) = uVar15;
  uVar16 = *(undefined4 *)(iVar8 + 0xc);
  uVar20 = *(undefined4 *)(iVar8 + 0x10);
  *(undefined4 *)(iVar6 + 0x78) = uVar17;
  *(uint *)(iVar6 + 0x7c) = uVar15;
  *(undefined4 *)(iVar6 + 0x80) = uVar16;
  *(undefined4 *)(iVar6 + 0x84) = uVar20;
  uVar16 = *(undefined4 *)(iVar8 + 0x14);
  uVar20 = *(undefined4 *)(iVar8 + 0x18);
  *(undefined4 *)(iVar6 + 0x88) = uVar17;
  *(uint *)(iVar6 + 0x8c) = uVar15;
  *(undefined4 *)(iVar6 + 0x90) = uVar16;
  *(undefined4 *)(iVar6 + 0x94) = uVar20;
  uVar16 = *(undefined4 *)(iVar8 + 0x1c);
  uVar20 = *(undefined4 *)(iVar8 + 0x20);
  *puVar18 = uVar17;
  *(uint *)(iVar6 + 0x9c) = uVar15;
  *(undefined4 *)(iVar6 + 0xa0) = uVar16;
  *(undefined4 *)(iVar6 + 0xa4) = uVar20;
  uVar16 = *(undefined4 *)(iVar8 + 0x24);
  local_2a4 = (undefined4 *)(iVar6 + 0xa8);
  *(undefined4 *)(iVar6 + 0xb4) = *(undefined4 *)(iVar8 + 0x28);
  *local_2a4 = uVar17;
  *(uint *)(iVar6 + 0xac) = uVar15;
  *(undefined4 *)(iVar6 + 0xb0) = uVar16;
  iVar8 = *DAT_004e5b08;
  *(bool *)(iVar6 + 0xb9) = (int)*(char *)(iVar8 + 0x18) - 9U < 0xd;
  cVar2 = *(char *)(iVar8 + 0x18);
  *(bool *)(iVar6 + 0xba) = cVar2 == '\a' || cVar2 == '%';
  *(undefined1 *)(iVar6 + 0xbb) = 0;
  *(undefined4 **)(iVar6 + -0x224) = (undefined4 *)(iVar6 + 0x88);
  objStack_300[1] = 0;
  objStack_300[2] = 0;
  objStack_300[0] = 1;
  uVar17 = func_0014E428(uVar15,1,0,0,1,0,0);
  *(undefined4 *)(iVar6 + -0x198) = uVar17;
  puVar5 = (undefined4 *)func_0010BAB4(0xa8);
  puVar7 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar7 = func_0016A2FC(puVar5,4,DAT_004e5b0c,1);
  }
  iVar8 = DAT_004e5b10;
  uVar19 = 0;
  *(undefined4 **)(iVar6 + -0x194) = puVar7;
  do {
    func_00169688(*(uint **)(iVar6 + -0x194),uVar19,(int *)(iVar8 + uVar19 * 8),
                  *(int *)(*(int *)(iVar6 + -0x340) + 0x1c8));
    uVar19 = uVar19 + 1;
  } while ((int)uVar19 < 4);
  func_0016A02C(*(int *)(iVar6 + -0x194),-1,(int *)0xffffffff,0);
  puVar9 = (uint *)func_002C11E8((int *)objStack_300,1,10,0);
  func_0016898C(*(int *)(iVar6 + -0x194),puVar9);
  *(int *)(*(int *)(*(int *)(iVar6 + -0x194) + 0x14) + 0x10) = (int)uVar23;
  puVar5 = (undefined4 *)func_0010BAB4(0xa8);
  puVar7 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar7 = func_0016A2FC(puVar5,2,DAT_004e5b0c,1);
  }
  iVar8 = DAT_004e5b14;
  uVar19 = 0;
  *(undefined4 **)(iVar6 + -400) = puVar7;
  do {
    func_00169608(*(uint **)(iVar6 + -400),uVar19,(int *)(iVar8 + uVar19 * 8),
                  *(int *)(*(int *)(iVar6 + -0x340) + 0x1c8));
    uVar17 = (undefined4)uVar23;
    uVar19 = uVar19 + 1;
  } while ((int)uVar19 < 2);
  func_0016A02C(*(int *)(iVar6 + -400),-1,(int *)0xffffffff,0);
  piVar4 = (int *)0x0;
  puVar9 = (uint *)func_002C11E8((int *)objStack_300,0,10,0);
  iVar8 = *(int *)(iVar6 + -400);
  func_0016898C(iVar8,puVar9);
  *(undefined4 *)(*(int *)(*(int *)(iVar6 + -400) + 0x14) + 0x10) = uVar17;
  func_00151148(*(int *)(iVar6 + -0x144),1);
  func_004E51AC(uVar15,extraout_r1,iVar8,piVar4);
  func_003249E0(uVar15,0);
  iVar8 = func_0054D964(uVar15,0);
  *(int *)(iVar6 + -0xd0) = iVar8;
  fVar21 = func_0054DE3C(uVar15,0,1);
  *(float *)(iVar6 + -0xfc) = fVar21;
  func_00324964(uVar15);
  iVar8 = func_0054D964(uVar15,3);
  *(int *)(iVar6 + -0xcc) = iVar8;
  puVar5 = (undefined4 *)(iVar6 + -0x18c);
  *(undefined1 *)(iVar6 + -0x186) = 8;
  *(uint *)(iVar6 + -0x178) = uVar15;
  iVar10 = func_0010BA78(0x80);
  *(int *)(iVar6 + -0x174) = iVar10;
  iVar8 = DAT_004e5b00;
  *(uint *)(iVar6 + -0x170) = iVar10 + (uint)*(byte *)(iVar6 + -0x186) * 8;
  iVar14 = 8;
  puVar7 = (undefined4 *)(iVar10 + -8);
  do {
    uVar17 = *(undefined4 *)(iVar8 + 0xc0);
    iVar14 = iVar14 + -1;
    puVar7[2] = *(undefined4 *)(iVar8 + 0xbc);
    puVar7[3] = uVar17;
    uVar17 = *(undefined4 *)(iVar8 + 0xc0);
    puVar7[4] = *(undefined4 *)(iVar8 + 0xbc);
    puVar7[5] = uVar17;
    puVar7 = puVar7 + 4;
  } while (iVar14 != 0);
  bVar1 = *(byte *)(iVar6 + -0x186);
  uVar19 = (uint)bVar1;
  puVar7 = (undefined4 *)func_0010BA78(uVar19 << 3);
  *(undefined4 **)(iVar6 + -0x16c) = puVar7;
  if (uVar19 != 0) {
    puVar11 = puVar7 + -2;
    if ((bVar1 & 1) != 0) {
      uVar17 = *(undefined4 *)(iVar8 + 0x40);
      *puVar7 = *(undefined4 *)(iVar8 + 0x3c);
      puVar7[1] = uVar17;
      puVar11 = puVar7;
    }
    for (iVar10 = (int)uVar19 >> 1; iVar10 != 0; iVar10 = iVar10 + -1) {
      uVar17 = *(undefined4 *)(iVar8 + 0x40);
      puVar11[2] = *(undefined4 *)(iVar8 + 0x3c);
      puVar11[3] = uVar17;
      uVar17 = *(undefined4 *)(iVar8 + 0x40);
      puVar11[4] = *(undefined4 *)(iVar8 + 0x3c);
      puVar11[5] = uVar17;
      puVar11 = puVar11 + 4;
    }
  }
  puVar7 = (undefined4 *)func_0010CEE0(0x128,(int *)0x0,4);
  iVar10 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0x24;
    puVar7[1] = 8;
    iVar10 = func_00100118((int)(puVar7 + 2),puRam004e6010,0x24,8);
  }
  if (iVar10 != 0) {
    *(undefined4 *)(iVar6 + -0x184) = 8;
    *(int *)(iVar6 + -0x180) = iVar10;
  }
  iVar10 = iRam004e6014;
  *(undefined4 **)(iVar6 + -700) = puVar5;
  iVar14 = iRam004e6024;
  *(undefined2 *)(iVar10 + uVar15) = 8;
  pcStack_34 = s_cState_Hide_004e6018;
  iStack_38 = iVar14;
  func_0010BEC4((int)puVar5,0,&iStack_38);
  puVar7 = *(undefined4 **)(iVar6 + -0x174);
  uVar16 = *(undefined4 *)(iVar8 + 0x30);
  uVar17 = *(undefined4 *)(iVar8 + 0x38);
  uVar20 = *(undefined4 *)(iVar8 + 0x34);
  uVar25 = *(undefined4 *)(iVar8 + 0x3c);
  uVar22 = *(undefined4 *)(iVar8 + 0x40);
  *puVar7 = *(undefined4 *)(iVar8 + 0x2c);
  puVar7[1] = uVar16;
  puVar7 = *(undefined4 **)(iVar6 + -0x170);
  *puVar7 = uVar20;
  puVar7[1] = uVar17;
  puVar7 = *(undefined4 **)(iVar6 + -0x16c);
  *puVar7 = uVar25;
  puVar7[1] = uVar22;
  pcStack_34 = s_cState_Fixed_004e6028;
  iStack_38 = iVar14;
  func_0010BEC4((int)puVar5,1,&iStack_38);
  iVar10 = *(int *)(iVar6 + -0x174);
  uVar17 = *(undefined4 *)(iVar8 + 0x48);
  uVar16 = *(undefined4 *)(iVar8 + 0x4c);
  uVar20 = *(undefined4 *)(iVar8 + 0x50);
  *(undefined4 *)(iVar10 + 8) = *(undefined4 *)(iVar8 + 0x44);
  *(undefined4 *)(iVar10 + 0xc) = uVar17;
  iVar10 = *(int *)(iVar6 + -0x170);
  *(undefined4 *)(iVar10 + 8) = uVar16;
  *(undefined4 *)(iVar10 + 0xc) = uVar20;
  iVar10 = *(int *)(iVar6 + -0x16c);
  *(undefined4 *)(iVar10 + 8) = uVar25;
  *(undefined4 *)(iVar10 + 0xc) = uVar22;
  pcStack_34 = s_cState_Birth_004e6038;
  iStack_38 = iVar14;
  func_0010BEC4((int)puVar5,2,&iStack_38);
  iVar10 = *(int *)(iVar6 + -0x174);
  uVar17 = *(undefined4 *)(iVar8 + 0x58);
  uVar20 = *(undefined4 *)(iVar8 + 0x5c);
  uVar16 = *(undefined4 *)(iVar8 + 0x60);
  *(undefined4 *)(iVar10 + 0x10) = *(undefined4 *)(iVar8 + 0x54);
  *(undefined4 *)(iVar10 + 0x14) = uVar17;
  iVar10 = *(int *)(iVar6 + -0x170);
  *(undefined4 *)(iVar10 + 0x10) = uVar20;
  *(undefined4 *)(iVar10 + 0x14) = uVar16;
  iVar10 = *(int *)(iVar6 + -0x16c);
  *(undefined4 *)(iVar10 + 0x10) = uVar25;
  *(undefined4 *)(iVar10 + 0x14) = uVar22;
  pcStack_34 = s_cState_Wait_004e6048;
  iStack_38 = iVar14;
  func_0010BEC4((int)puVar5,3,&iStack_38);
  iVar10 = *(int *)(iVar6 + -0x174);
  uVar16 = *(undefined4 *)(iVar8 + 0x68);
  uVar20 = *(undefined4 *)(iVar8 + 0x6c);
  uVar17 = *(undefined4 *)(iVar8 + 0x70);
  *(undefined4 *)(iVar10 + 0x18) = *(undefined4 *)(iVar8 + 100);
  *(undefined4 *)(iVar10 + 0x1c) = uVar16;
  iVar10 = *(int *)(iVar6 + -0x170);
  *(undefined4 *)(iVar10 + 0x18) = uVar20;
  *(undefined4 *)(iVar10 + 0x1c) = uVar17;
  iVar10 = *(int *)(iVar6 + -0x16c);
  *(undefined4 *)(iVar10 + 0x18) = uVar25;
  *(undefined4 *)(iVar10 + 0x1c) = uVar22;
  pcStack_34 = s_cState_Follow_004e6054;
  iStack_38 = iVar14;
  func_0010BEC4((int)puVar5,4,&iStack_38);
  iVar10 = *(int *)(iVar6 + -0x174);
  uVar17 = *(undefined4 *)(iVar8 + 0x78);
  uVar16 = *(undefined4 *)(iVar8 + 0x7c);
  uVar20 = *(undefined4 *)(iVar8 + 0x80);
  uVar22 = *(undefined4 *)(iVar8 + 0x84);
  uVar25 = *(undefined4 *)(iVar8 + 0x88);
  *(undefined4 *)(iVar10 + 0x20) = *(undefined4 *)(iVar8 + 0x74);
  *(undefined4 *)(iVar10 + 0x24) = uVar17;
  iVar10 = *(int *)(iVar6 + -0x170);
  *(undefined4 *)(iVar10 + 0x20) = uVar16;
  *(undefined4 *)(iVar10 + 0x24) = uVar20;
  iVar10 = *(int *)(iVar6 + -0x16c);
  *(undefined4 *)(iVar10 + 0x20) = uVar22;
  *(undefined4 *)(iVar10 + 0x24) = uVar25;
  pcStack_34 = s_cState_WaterDrop_004e6064;
  iStack_38 = iVar14;
  func_0010BEC4((int)puVar5,5,&iStack_38);
  iVar10 = *(int *)(iVar6 + -0x174);
  uVar17 = *(undefined4 *)(iVar8 + 0x90);
  uVar16 = *(undefined4 *)(iVar8 + 0x98);
  uVar20 = *(undefined4 *)(iVar8 + 0x94);
  uVar24 = *(undefined8 *)(iVar8 + 0x3c);
  *(undefined4 *)(iVar10 + 0x28) = *(undefined4 *)(iVar8 + 0x8c);
  *(undefined4 *)(iVar10 + 0x2c) = uVar17;
  iVar10 = *(int *)(iVar6 + -0x170);
  *(undefined4 *)(iVar10 + 0x28) = uVar20;
  *(undefined4 *)(iVar10 + 0x2c) = uVar16;
  iVar10 = *(int *)(iVar6 + -0x16c);
  *(int *)(iVar10 + 0x28) = (int)uVar24;
  *(int *)(iVar10 + 0x2c) = (int)((ulonglong)uVar24 >> 0x20);
  pcStack_34 = s_cState_PreExplose_004e6078;
  iStack_38 = iVar14;
  func_0010BEC4((int)puVar5,6,&iStack_38);
  iVar10 = *(int *)(iVar6 + -0x174);
  uVar17 = *(undefined4 *)(iVar8 + 0xa0);
  uVar16 = *(undefined4 *)(iVar8 + 0xa4);
  uVar20 = *(undefined4 *)(iVar8 + 0xa8);
  *(undefined4 *)(iVar10 + 0x30) = *(undefined4 *)(iVar8 + 0x9c);
  *(undefined4 *)(iVar10 + 0x34) = uVar17;
  iVar10 = *(int *)(iVar6 + -0x170);
  *(undefined4 *)(iVar10 + 0x30) = uVar16;
  *(undefined4 *)(iVar10 + 0x34) = uVar20;
  iVar10 = *(int *)(iVar6 + -0x16c);
  *(int *)(iVar10 + 0x30) = (int)uVar24;
  *(int *)(iVar10 + 0x34) = (int)((ulonglong)uVar24 >> 0x20);
  pcStack_34 = s_cState_Explose_004e608c;
  iStack_38 = iVar14;
  func_0010BEC4((int)puVar5,7,&iStack_38);
  iVar10 = *(int *)(iVar6 + -0x174);
  uVar17 = *(undefined4 *)(iVar8 + 0xb0);
  uVar20 = *(undefined4 *)(iVar8 + 0xb4);
  uVar22 = *(undefined4 *)(iVar8 + 0xb8);
  *(undefined4 *)(iVar10 + 0x38) = *(undefined4 *)(iVar8 + 0xac);
  *(undefined4 *)(iVar10 + 0x3c) = uVar17;
  uVar16 = uRam004e60a0;
  uVar17 = uRam004e609c;
  iVar8 = *(int *)(iVar6 + -0x170);
  *(undefined4 *)(iVar8 + 0x38) = uVar20;
  *(undefined4 *)(iVar8 + 0x3c) = uVar22;
  iVar8 = *(int *)(iVar6 + -0x16c);
  *(int *)(iVar8 + 0x38) = (int)uVar24;
  *(int *)(iVar8 + 0x3c) = (int)((ulonglong)uVar24 >> 0x20);
  *(undefined4 *)(iVar6 + -0x158) = uVar17;
  *(undefined4 *)(iVar6 + -0x154) = uVar16;
  *(undefined4 *)(iVar6 + -0x15c) = 0;
  iVar8 = func_0054D964(uVar15,1);
  fVar21 = func_0054DE3C(uVar15,1,1);
  *(float *)(iVar6 + -0xf8) = fVar21;
  func_0054DDF4(uVar15,0);
  uVar19 = DAT_004e5aec;
  auStack_2f4[0] = *(uint *)(iVar6 + -0x344);
  objStack_300[0] = (uint)*(short *)(iVar6 + -0x5bc);
  objStack_300[2] = DAT_004e5aec;
  (*(undefined2 *)((char *)&objStack_300[2] + 0)) = (undefined2)DAT_004e5aec;
  uVar3 = (undefined2)objStack_300[2];
  objStack_300[1] = (uint)puVar18;
  objStack_300[2] = uVar19;
  func_0014EB8C(iVar6 + -200,iVar8,*(undefined2 **)(iVar6 + -0x270),auStack_2f4,
                *(short *)(iVar6 + -0x5bc),puVar18,uVar3);
  *(undefined1 *)(iVar6 + -0x67) = 0;
  puVar12 = (undefined2 *)func_0054DDF4(uVar15,2);
  auStack_2f4[0] = *(uint *)(iVar6 + -0x344);
  objStack_300[0] = (uint)*(short *)(iVar6 + -0x5bc);
  objStack_300[2] = uVar19;
  objStack_300[1] = (uint)puVar18;
  func_0014EB8C(iVar6 + -100,iVar8,puVar12,auStack_2f4,*(short *)(iVar6 + -0x5bc),puVar18,uVar3);
  *(undefined1 *)(iVar6 + -3) = 0;
  if (*(char *)(iVar6 + 0xba) != '\0') {
    *(undefined2 *)(iVar6 + -0x98) = 0x10;
    *(undefined2 *)(iVar6 + -0x34) = 0x10;
  }
  puVar12 = (undefined2 *)func_0054DDF4(uVar15,1);
  iVar8 = func_0054D964(uVar15,2);
  *(uint *)(iVar8 + 0x2c) = *(uint *)(iVar8 + 0x2c) | 0x10000;
  *(undefined4 *)(iVar6 + -0xe8) = *(undefined4 *)(iVar8 + 100);
  fVar21 = func_0054DE3C(uVar15,2,1);
  *(float *)(iVar6 + -0xf4) = fVar21;
  auStack_2f4[0] = *(uint *)(iVar6 + -0x344);
  objStack_300[0] = (uint)*(short *)(iVar6 + -0x5bc);
  objStack_300[1] = (uint)local_2a4;
  objStack_300[2] = uVar19;
  func_0014EB8C(iVar6,iVar8,puVar12,auStack_2f4,*(short *)(iVar6 + -0x5bc),local_2a4,uVar3);
  *(undefined1 *)(iVar6 + 0x61) = 0;
  func_004E4388(uVar15);
  if (*(short *)(iVar6 + -0x5b6) < 0) {
    if (*(short *)(iVar6 + -0x5e4) == 0) {
      func_0066A8D8(puVar5,2);
    }
    else {
      func_0066A8D8(puVar5,1);
    }
  }
  else {
    func_0066A8D8(puVar5,0);
    piVar4 = piRam004e621c;
    objStack_300[0] = uRam004e6218;
    objStack_300[2] = 0;
    objStack_300[1] = uVar15;
    piVar13 = func_0052FCA4(*piRam004e621c + 0x3dbbc,objStack_300,
                            *(int **)(*piRam004e621c + 0x3dbc0));
    if (piVar13 == *(int **)(*piVar4 + 0x3dbc8) || piVar13 == (int *)0x0) {
      uVar17 = *(undefined4 *)(iVar6 + -0x228);
      uStack_2e0 = 0;
      uStack_2dc = 0;
      uStack_2e4 = 0;
      uStack_2b8 = 0;
      uStack_2b4 = 0;
      uStack_40 = 0;
      func_002DFF7C(objStack_300);
      objStack_300[0] = func_0019B04C(*puRam004e6220);
      uStack_2b0 = 0xffff;
      objStack_300[1] = *(uint *)(iVar6 + -0x240);
      objStack_300[2] = *(uint *)(iVar6 + -0x23c);
      auStack_2f4[0] = *(uint *)(iVar6 + -0x238);
      uStack_2b4 = *(undefined4 *)(iVar6 + -0x344);
      uStack_2d0 = *(undefined2 *)(iVar6 + -0x5dc);
      uStack_2ce = *(undefined4 *)(iVar6 + -0x5da);
      uStack_2d8 = 1;
      uStack_2e0 = uVar17;
      func_004C43E0(*piVar4,(int *)objStack_300);
    }
  }
  return uVar15;
}

