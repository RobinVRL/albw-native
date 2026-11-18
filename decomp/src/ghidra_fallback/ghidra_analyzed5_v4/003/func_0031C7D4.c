#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CE7C(undefined4 *param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_00168100(int *param_1,int *param_2,int *param_3);
extern int func_00168434(undefined4 *param_1);
extern int func_00232540(undefined4 *param_1);
extern int func_003FDF90(int param_1,int param_2);
extern int func_00502768(undefined4 *param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4);
extern int func_006653E8(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_0031cb78;
extern undefined DAT_0031cb7c;
extern int DAT_0031cb88;
extern undefined4 DAT_0031cb8c;
extern undefined4 DAT_0031cb90;
extern undefined8 *DAT_0031cb94;
extern undefined4 DAT_0031cb98;
extern undefined4 DAT_0031cb9c;
extern undefined DAT_0031cba0;
extern undefined *DAT_0031cfec;
extern char s_Caution_0031cc30[];
extern char s_ColorConsume_0031cbe0[];
extern char s_ColorConsume_Loop_0031cbcc[];
extern char s_ColorFarlire_0031cbf0[];
extern char s_Consume_0031cc10[];
extern char s_Consume_Loop_0031cc00[];
extern char s_Failure_0031cc18[];
extern char s_G_Bar_00_0031cbb0[];
extern char s_G_FollowInd_00_0031cbbc[];
extern char s_OnOffCaution_0031cc20[];
extern char s_Progress_0031cba4[];
extern char s_cState_DownLoop_0031cffc[];
extern char s_cState_DownOnce_0031d00c[];
extern char s_cState_EventStart_0031d02c[];
extern char s_cState_MaskWait_0031d040[];
extern char s_cState_Minus_0031d01c[];
extern char s_cState_Plus_0031cff0[];

// USA 0031C7D4 <- EU 0031C7B0 (Ghidra, non-matching)
// GLOBAL DAT_0031cb78 undefined4
// GLOBAL DAT_0031cb7c undefined
// GLOBAL DAT_0031cb88 int
// GLOBAL DAT_0031cb8c undefined4
// GLOBAL DAT_0031cb90 undefined4
// GLOBAL DAT_0031cb94 undefined8 *
// GLOBAL DAT_0031cb98 undefined4
// GLOBAL DAT_0031cb9c undefined4
// GLOBAL DAT_0031cba0 undefined
// GLOBAL DAT_0031cfec undefined *
// GLOBAL s_Caution_0031cc30 string
// GLOBAL s_ColorConsume_0031cbe0 string
// GLOBAL s_ColorConsume_Loop_0031cbcc string
// GLOBAL s_ColorFarlire_0031cbf0 string
// GLOBAL s_Consume_0031cc10 string
// GLOBAL s_Consume_Loop_0031cc00 string
// GLOBAL s_Failure_0031cc18 string
// GLOBAL s_G_Bar_00_0031cbb0 string
// GLOBAL s_G_FollowInd_00_0031cbbc string
// GLOBAL s_OnOffCaution_0031cc20 string
// GLOBAL s_Progress_0031cba4 string
// GLOBAL s_cState_DownLoop_0031cffc string
// GLOBAL s_cState_DownOnce_0031d00c string
// GLOBAL s_cState_EventStart_0031d02c string
// GLOBAL s_cState_MaskWait_0031d040 string
// GLOBAL s_cState_Minus_0031d01c string
// GLOBAL s_cState_Plus_0031cff0 string

undefined4 * func_0031C7D4(undefined4 *param_1,int *param_2,int *param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  undefined4 uVar14;
  bool bVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 (*(int *)(albw_frame + 0x8))
  #define local_54 (*(undefined * *)(albw_frame + 0xc))
  #define local_48 (*(int *)(albw_frame + 0x18))
  #define local_44 (*(char * *)(albw_frame + 0x1c))
  #define local_40 (*(int *)(albw_frame + 0x20))
  #define local_3c (*(char * *)(albw_frame + 0x24))
  puVar4 = func_00232540(param_1);
  iVar13 = DAT_0031cb88;
  *puVar4 = DAT_0031cb78;
  local_54 = &DAT_0031cb7c;
  local_58 = iVar13;
  puVar4 = func_00502768(puVar4 + 8,&local_58,0,1);
  *puVar4 = DAT_0031cb8c;
  puVar4 = func_0010A794(puVar4 + 0xc);
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  *(undefined2 *)(puVar4 + 9) = 0;
  uVar14 = DAT_0031cb90;
  *(undefined2 *)((int)puVar4 + 0x26) = 0xffff;
  puVar4[10] = uVar14;
  puVar4[0xb] = 0;
  *(undefined2 *)(puVar4 + 0xc) = 0;
  puVar2 = DAT_0031cb94;
  *(undefined2 *)((int)puVar4 + 0x32) = 0xffff;
  puVar4[0xd] = uVar14;
  puVar4[0xe] = 0;
  *(undefined2 *)(puVar4 + 0xf) = 0;
  *(undefined2 *)((int)puVar4 + 0x3e) = 0xffff;
  puVar4[0x10] = uVar14;
  puVar4[0x11] = 0;
  *(undefined2 *)(puVar4 + 0x12) = 0;
  *(undefined2 *)((int)puVar4 + 0x4a) = 0xffff;
  puVar4[0x13] = uVar14;
  puVar4[0x14] = 0;
  *(undefined2 *)(puVar4 + 0x15) = 0;
  *(undefined2 *)((int)puVar4 + 0x56) = 0xffff;
  puVar4[0x16] = uVar14;
  puVar4[0x17] = 0;
  *(undefined2 *)(puVar4 + 0x18) = 0;
  *(undefined2 *)((int)puVar4 + 0x62) = 0xffff;
  puVar4[0x19] = uVar14;
  puVar4[0x1a] = 0;
  *(undefined2 *)(puVar4 + 0x1b) = 0;
  *(undefined2 *)((int)puVar4 + 0x6e) = 0xffff;
  puVar4[0x1c] = uVar14;
  puVar4[0x1d] = 0;
  *(undefined2 *)(puVar4 + 0x1e) = 0;
  *(undefined2 *)((int)puVar4 + 0x7a) = 0xffff;
  puVar4[0x1f] = uVar14;
  puVar4[0x20] = 0;
  *(undefined2 *)(puVar4 + 0x21) = 0;
  *(undefined2 *)((int)puVar4 + 0x86) = 0xffff;
  puVar4[0x22] = uVar14;
  puVar4[0x23] = 0;
  puVar4[0x24] = uVar14;
  puVar4[0x25] = uVar14;
  *(undefined1 *)(puVar4 + 0x26) = 0;
  *(undefined1 *)((int)puVar4 + 0x99) = 0;
  *(undefined1 *)((int)puVar4 + 0x9a) = 0;
  puVar4[0x27] = 0xffffffff;
  puVar4[0x28] = uVar14;
  uVar17 = *puVar2;
  puVar5 = func_0010CE7C(puVar4 + 0x29);
  puVar9 = puVar5 + 9;
  bVar15 = puVar9 == (undefined4 *)0x0;
  if (bVar15) {
    puVar9 = (undefined4 *)0x0;
  }
  *puVar5 = DAT_0031cb98;
  puVar5[4] = 0;
  puVar5[5] = 0;
  puVar5[6] = puVar5;
  puVar5[7] = 0;
  puVar5[8] = 0;
  *(undefined1 *)(puVar5 + 0xe) = 0;
  if (!bVar15) {
    puVar9[1] = puVar4 + -0x14;
    uVar14 = DAT_0031cb9c;
    puVar9[2] = (int)uVar17;
    puVar9[3] = (int)((ulonglong)uVar17 >> 0x20);
    *puVar9 = uVar14;
  }
  puVar5[8] = puVar9;
  puVar4 = (undefined4 *)func_0010BAB4(0x74);
  if (puVar4 == (undefined4 *)0x0) {
    piVar11 = (int *)0x0;
  }
  else {
    piVar11 = func_00168434(puVar4);
  }
  func_00168100(piVar11,param_2,param_3);
  puVar5[-0x36] = piVar11;
  puVar5[-0x37] = puVar5[-0x37] | 0x10;
  func_0016773C((int)piVar11,0xb);
  local_3c = &DAT_0031cba0;
  local_40 = iVar13;
  func_00166C20(piVar11,0,&local_40,0);
  local_3c = s_Progress_0031cba4;
  local_40 = iVar13;
  local_44 = s_G_Bar_00_0031cbb0;
  local_48 = iVar13;
  (**(code **)(iVar13 + 8))(&local_48);
  iVar6 = func_003FDF90(*(int *)(*piVar11 + 0x14),(int)local_44);
  func_00166C20(piVar11,1,&local_40,iVar6);
  local_44 = s_Progress_0031cba4;
  local_48 = iVar13;
  local_3c = s_G_FollowInd_00_0031cbbc;
  local_40 = iVar13;
  (**(code **)(iVar13 + 8))(&local_40);
  iVar6 = func_003FDF90(*(int *)(*piVar11 + 0x14),(int)local_3c);
  func_00166C20(piVar11,2,&local_48,iVar6);
  local_44 = s_ColorConsume_Loop_0031cbcc;
  local_48 = iVar13;
  func_00166C20(piVar11,3,&local_48,0);
  local_44 = s_ColorConsume_0031cbe0;
  local_48 = iVar13;
  func_00166C20(piVar11,4,&local_48,0);
  local_44 = s_ColorFarlire_0031cbf0;
  local_48 = iVar13;
  func_00166C20(piVar11,5,&local_48,0);
  local_44 = s_Consume_Loop_0031cc00;
  local_48 = iVar13;
  func_00166C20(piVar11,6,&local_48,0);
  local_44 = s_Consume_0031cc10;
  local_48 = iVar13;
  func_00166C20(piVar11,7,&local_48,0);
  local_44 = s_Failure_0031cc18;
  local_48 = iVar13;
  func_00166C20(piVar11,8,&local_48,0);
  local_44 = s_OnOffCaution_0031cc20;
  local_48 = iVar13;
  func_00166C20(piVar11,9,&local_48,0);
  local_44 = s_Caution_0031cc30;
  local_48 = iVar13;
  func_00166C20(piVar11,10,&local_48,0);
  puVar5[-0x1e] = piVar11;
  *(undefined2 *)((int)puVar5 + -0x7e) = 0;
  *(undefined2 *)(puVar5 + -0x20) = 0;
  puVar5[-0x1b] = piVar11;
  *(undefined2 *)((int)puVar5 + -0x72) = 1;
  *(undefined2 *)(puVar5 + -0x1d) = 0;
  iVar6 = piVar11[3];
  if (1 < (uint)piVar11[2]) {
    iVar6 = iVar6 + 0x38;
  }
  *(undefined1 *)(iVar6 + 0x28) = 1;
  puVar5[-0x18] = piVar11;
  *(undefined2 *)((int)puVar5 + -0x66) = 2;
  *(undefined2 *)(puVar5 + -0x1a) = 0;
  iVar6 = piVar11[3];
  if (2 < (uint)piVar11[2]) {
    iVar6 = iVar6 + 0x70;
  }
  *(undefined1 *)(iVar6 + 0x28) = 1;
  if ((uint)(int)*(short *)((int)puVar5 + -0x72) < (uint)piVar11[2]) {
    iVar6 = piVar11[3] + *(short *)((int)puVar5 + -0x72) * 0x38;
  }
  else {
    iVar6 = piVar11[3];
  }
  puVar5[-1] = *(undefined4 *)(iVar6 + 0x20);
  puVar5[-0x15] = piVar11;
  *(undefined2 *)((int)puVar5 + -0x5a) = 3;
  *(undefined2 *)(puVar5 + -0x17) = 0;
  puVar5[-0x12] = piVar11;
  *(undefined2 *)((int)puVar5 + -0x4e) = 6;
  *(undefined2 *)(puVar5 + -0x14) = 0;
  puVar5[-0xf] = piVar11;
  *(undefined2 *)((int)puVar5 + -0x42) = 4;
  *(undefined2 *)(puVar5 + -0x11) = 0;
  puVar5[-0xc] = piVar11;
  *(undefined2 *)((int)puVar5 + -0x36) = 7;
  *(undefined2 *)(puVar5 + -0xe) = 0;
  puVar5[-9] = piVar11;
  *(undefined2 *)((int)puVar5 + -0x2a) = 9;
  *(undefined2 *)(puVar5 + -0xb) = 0;
  puVar5[-6] = piVar11;
  *(undefined2 *)((int)puVar5 + -0x1e) = 10;
  *(undefined2 *)(puVar5 + -8) = 0;
  *(undefined1 *)((int)puVar5 + -0x9e) = 6;
  puVar5[-0x24] = puVar5 + -0x3d;
  iVar6 = func_0010BA78(0x60);
  puVar5[-0x23] = iVar6;
  puVar5[-0x22] = iVar6 + (uint)*(byte *)((int)puVar5 + -0x9e) * 8;
  iVar7 = 6;
  puVar4 = (undefined4 *)(iVar6 + -8);
  do {
    uVar14 = *(undefined4 *)((int)puVar2 + 0x6c);
    iVar7 = iVar7 + -1;
    puVar4[2] = *(undefined4 *)(puVar2 + 0xd);
    puVar4[3] = uVar14;
    uVar14 = *(undefined4 *)((int)puVar2 + 0x6c);
    puVar4[4] = *(undefined4 *)(puVar2 + 0xd);
    puVar4[5] = uVar14;
    puVar4 = puVar4 + 4;
  } while (iVar7 != 0);
  bVar1 = *(byte *)((int)puVar5 + -0x9e);
  uVar12 = (uint)bVar1;
  puVar4 = (undefined4 *)func_0010BA78(uVar12 << 3);
  puVar5[-0x21] = puVar4;
  if (uVar12 != 0) {
    puVar9 = puVar4 + -2;
    if ((bVar1 & 1) != 0) {
      uVar14 = *(undefined4 *)((int)puVar2 + 0x1c);
      *puVar4 = *(undefined4 *)(puVar2 + 3);
      puVar4[1] = uVar14;
      puVar9 = puVar4;
    }
    for (iVar6 = (int)uVar12 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      uVar14 = *(undefined4 *)((int)puVar2 + 0x1c);
      puVar9[2] = *(undefined4 *)(puVar2 + 3);
      puVar9[3] = uVar14;
      uVar14 = *(undefined4 *)((int)puVar2 + 0x1c);
      puVar9[4] = *(undefined4 *)(puVar2 + 3);
      puVar9[5] = uVar14;
      puVar9 = puVar9 + 4;
    }
  }
  puVar4 = (undefined4 *)func_0010CEE0(0xe0,(int *)0x0,4);
  puVar3 = DAT_0031cfec;
  iVar6 = 0;
  if (puVar4 != (undefined4 *)0x0) {
    puVar4[1] = 6;
    *puVar4 = 0x24;
    iVar6 = func_00100118((int)(puVar4 + 2),puVar3,0x24,6);
  }
  if (iVar6 != 0) {
    puVar5[-0x26] = iVar6;
    puVar5[-0x27] = 6;
  }
  local_44 = s_cState_Plus_0031cff0;
  local_48 = iVar13;
  func_0010BEC4((int)(puVar5 + -0x29),0,&local_48);
  puVar4 = (undefined4 *)puVar5[-0x23];
  uVar14 = *(undefined4 *)(puVar2 + 2);
  uVar10 = *(undefined4 *)((int)puVar2 + 0xc);
  uVar8 = *(undefined4 *)((int)puVar2 + 0x14);
  uVar18 = *(undefined4 *)(puVar2 + 3);
  uVar16 = *(undefined4 *)((int)puVar2 + 0x1c);
  *puVar4 = *(undefined4 *)(puVar2 + 1);
  puVar4[1] = uVar10;
  puVar4 = (undefined4 *)puVar5[-0x22];
  *puVar4 = uVar14;
  puVar4[1] = uVar8;
  puVar4 = (undefined4 *)puVar5[-0x21];
  *puVar4 = uVar18;
  puVar4[1] = uVar16;
  local_44 = s_cState_DownLoop_0031cffc;
  local_48 = iVar13;
  func_0010BEC4((int)(puVar5 + -0x29),1,&local_48);
  iVar6 = puVar5[-0x23];
  uVar8 = *(undefined4 *)((int)puVar2 + 0x24);
  uVar10 = *(undefined4 *)(puVar2 + 5);
  uVar14 = *(undefined4 *)((int)puVar2 + 0x2c);
  *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(puVar2 + 4);
  *(undefined4 *)(iVar6 + 0xc) = uVar8;
  iVar6 = puVar5[-0x22];
  *(undefined4 *)(iVar6 + 8) = uVar10;
  *(undefined4 *)(iVar6 + 0xc) = uVar14;
  iVar6 = puVar5[-0x21];
  *(undefined4 *)(iVar6 + 8) = uVar18;
  *(undefined4 *)(iVar6 + 0xc) = uVar16;
  local_44 = s_cState_DownOnce_0031d00c;
  local_48 = iVar13;
  func_0010BEC4((int)(puVar5 + -0x29),2,&local_48);
  iVar6 = puVar5[-0x23];
  uVar10 = *(undefined4 *)((int)puVar2 + 0x34);
  uVar14 = *(undefined4 *)(puVar2 + 7);
  uVar8 = *(undefined4 *)((int)puVar2 + 0x3c);
  *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(puVar2 + 6);
  *(undefined4 *)(iVar6 + 0x14) = uVar10;
  iVar6 = puVar5[-0x22];
  *(undefined4 *)(iVar6 + 0x10) = uVar14;
  *(undefined4 *)(iVar6 + 0x14) = uVar8;
  iVar6 = puVar5[-0x21];
  *(undefined4 *)(iVar6 + 0x10) = uVar18;
  *(undefined4 *)(iVar6 + 0x14) = uVar16;
  local_44 = s_cState_Minus_0031d01c;
  local_48 = iVar13;
  func_0010BEC4((int)(puVar5 + -0x29),3,&local_48);
  iVar6 = puVar5[-0x23];
  uVar14 = *(undefined4 *)((int)puVar2 + 0x44);
  uVar10 = *(undefined4 *)(puVar2 + 9);
  uVar8 = *(undefined4 *)((int)puVar2 + 0x4c);
  *(undefined4 *)(iVar6 + 0x18) = *(undefined4 *)(puVar2 + 8);
  *(undefined4 *)(iVar6 + 0x1c) = uVar14;
  iVar6 = puVar5[-0x22];
  *(undefined4 *)(iVar6 + 0x18) = uVar10;
  *(undefined4 *)(iVar6 + 0x1c) = uVar8;
  iVar6 = puVar5[-0x21];
  *(undefined4 *)(iVar6 + 0x18) = uVar18;
  *(undefined4 *)(iVar6 + 0x1c) = uVar16;
  local_44 = s_cState_EventStart_0031d02c;
  local_48 = iVar13;
  func_0010BEC4((int)(puVar5 + -0x29),4,&local_48);
  iVar6 = puVar5[-0x23];
  uVar18 = *(undefined4 *)((int)puVar2 + 0x54);
  uVar14 = *(undefined4 *)(puVar2 + 0xc);
  uVar16 = *(undefined4 *)((int)puVar2 + 100);
  uVar8 = *(undefined4 *)(puVar2 + 0xb);
  uVar10 = *(undefined4 *)((int)puVar2 + 0x5c);
  *(undefined4 *)(iVar6 + 0x20) = *(undefined4 *)(puVar2 + 10);
  *(undefined4 *)(iVar6 + 0x24) = uVar18;
  iVar6 = puVar5[-0x22];
  *(undefined4 *)(iVar6 + 0x20) = uVar8;
  *(undefined4 *)(iVar6 + 0x24) = uVar10;
  iVar6 = puVar5[-0x21];
  *(undefined4 *)(iVar6 + 0x20) = uVar14;
  *(undefined4 *)(iVar6 + 0x24) = uVar16;
  local_44 = s_cState_MaskWait_0031d040;
  local_48 = iVar13;
  func_0010BEC4((int)(puVar5 + -0x29),5,&local_48);
  uVar14 = *(undefined4 *)((int)puVar2 + 0x74);
  uVar10 = *(undefined4 *)(puVar2 + 0xe);
  iVar13 = puVar5[-0x23];
  uVar16 = *(undefined4 *)((int)puVar2 + 0x6c);
  uVar8 = *(undefined4 *)(puVar2 + 3);
  uVar18 = *(undefined4 *)((int)puVar2 + 0x1c);
  *(undefined4 *)(iVar13 + 0x28) = *(undefined4 *)(puVar2 + 0xd);
  *(undefined4 *)(iVar13 + 0x2c) = uVar16;
  iVar13 = puVar5[-0x22];
  *(undefined4 *)(iVar13 + 0x28) = uVar10;
  *(undefined4 *)(iVar13 + 0x2c) = uVar14;
  iVar13 = puVar5[-0x21];
  *(undefined4 *)(iVar13 + 0x28) = uVar8;
  *(undefined4 *)(iVar13 + 0x2c) = uVar18;
  func_006653E8(puVar5 + -0x29,0);
  return puVar5 + -0x3d;
}

