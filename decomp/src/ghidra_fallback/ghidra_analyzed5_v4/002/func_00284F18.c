#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_0015137C(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
extern int func_00283DD8(int param_1);
extern int func_00284B24(int param_1,uint param_2,int param_3);
extern int func_004BC8D8(int param_1);
extern int func_004BD474(int param_1);
extern float func_004BDB2C(undefined4 param_1,int param_2,float fparam_0);
extern int func_004BE114(int * param_1,int param_2,int param_3,int param_4,undefined4 param_5);
extern int func_004BFF4C(int param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_004C00F4(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern int func_004C0684(int param_1,int *param_2,int param_3);
extern int func_004C081C(int param_1,int param_2,int param_3,int *param_4,int param_5,undefined4 param_6);
extern int func_004CF478(int param_1,int param_2);
extern int func_00519D4C(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern int func_0051B6E4(int param_1);
extern int func_00564A78(int param_1,int *param_2);
extern int func_00584B94(int param_1,int param_2);
extern int func_00620A58(int param_1,int param_2,undefined1 param_3);
extern int func_006216DC(undefined4 *param_1,uint *param_2,undefined4 param_3,undefined1 param_4, undefined4 *param_5);
extern int iRam00285684;
extern int *piRam00285680;
extern undefined4 *DAT_00285358;
extern int DAT_0028535c;
extern int DAT_00285360;
extern float DAT_00285364;
extern int DAT_00285368;
extern int *DAT_0028536c;
extern int DAT_00285378;
extern undefined DAT_00285384;
extern undefined4 DAT_00285394;
extern undefined4 *DAT_00285398;
extern undefined4 *DAT_0028539c;
extern undefined *DAT_002853a0;
extern int DAT_002853a4;
extern int DAT_0028566c;
extern int *DAT_00285670;
extern int DAT_00285674;
extern int *DAT_00285678;
extern int *DAT_0028567c;
extern float DAT_00285688;
extern char s_HandL_00285370[];
extern char s_HandR_0028537c[];
extern char s_cState_EventEnd_002853d0[];
extern char s_cState_Event_002853c0[];
extern char s_cState_Hide_002853e0[];
extern char s_cState_Sample_002853ec[];
extern char s_cState_Wait_002853a8[];
extern char s_cState_Walk_002853b4[];

// USA 00284F18 <- EU 00284F40 (Ghidra, non-matching)
// GLOBAL DAT_00285358 undefined4 *
// GLOBAL DAT_0028535c int
// GLOBAL DAT_00285360 int
// GLOBAL DAT_00285364 float
// GLOBAL DAT_00285368 int
// GLOBAL DAT_0028536c int *
// GLOBAL DAT_00285378 int
// GLOBAL DAT_00285384 undefined
// GLOBAL DAT_00285394 undefined4
// GLOBAL DAT_00285398 undefined4 *
// GLOBAL DAT_0028539c undefined4 *
// GLOBAL DAT_002853a0 undefined *
// GLOBAL DAT_002853a4 int
// GLOBAL DAT_0028566c int
// GLOBAL DAT_00285670 int *
// GLOBAL DAT_00285674 int
// GLOBAL DAT_00285678 int *
// GLOBAL DAT_0028567c int *
// GLOBAL DAT_00285688 float
// GLOBAL UNK_00285680 int *
// GLOBAL UNK_00285684 int
// GLOBAL s_HandL_00285370 string
// GLOBAL s_HandR_0028537c string
// GLOBAL s_cState_EventEnd_002853d0 string
// GLOBAL s_cState_Event_002853c0 string
// GLOBAL s_cState_Hide_002853e0 string
// GLOBAL s_cState_Sample_002853ec string
// GLOBAL s_cState_Wait_002853a8 string
// GLOBAL s_cState_Walk_002853b4 string

int * func_00284F18(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  bool bVar4;
  undefined1 uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar13;
  int *piVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  bool bVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(char * *)(albw_frame + 0xc))
  piVar6 = (int *)func_006216DC(param_1,param_2,0,0xff,DAT_00285358);
  iVar15 = DAT_0028535c;
  piVar6[200] = DAT_0028535c + 0xb8;
  *piVar6 = iVar15;
  piVar6[0x263] = 0;
  piVar6[0x264] = 0;
  piVar6[0x26b] = 0;
  iVar15 = DAT_00285360;
  piVar6[0x26d] = 0;
  piVar6[0x26e] = 0;
  piVar6[0x277] = iVar15;
  piVar6[0x278] = iVar15;
  piVar6[0x279] = 0;
  piVar6[0x27a] = 0;
  *(undefined1 *)(piVar6 + 0x27b) = 3;
  *(undefined1 *)((int)piVar6 + 0x9ed) = 0;
  *(undefined1 *)((int)piVar6 + 0x9ef) = 0;
  *(undefined1 *)(piVar6 + 0x27c) = 0;
  *(undefined1 *)((int)piVar6 + 0x9f1) = 0;
  iVar15 = DAT_00285368;
  *(char *)((int)piVar6 + 0x9ee) = (char)*(undefined2 *)((int)piVar6 + 0x32);
  func_004BFF4C((int)piVar6,4,iVar15,1,DAT_00285364);
  if (*(short *)((int)piVar6 + 0x2e) == 0) {
    func_004C081C((int)piVar6,0,0,DAT_0028536c,1,0);
  }
  *(undefined1 *)((int)piVar6 + 0x919) = 1;
  if (piVar6[0x1e9] != 0) {
    func_004CF478(piVar6[0x1e9],0);
  }
  iVar15 = DAT_00285378;
  local_34 = s_HandL_00285370;
  local_38 = DAT_00285378;
  uVar7 = func_00564A78(piVar6[0x1e8],&local_38);
  piVar6[0x277] = uVar7;
  local_34 = s_HandR_0028537c;
  local_38 = iVar15;
  uVar7 = func_00564A78(piVar6[0x1e8],&local_38);
  piVar6[0x278] = uVar7;
  local_34 = &DAT_00285384;
  local_38 = iVar15;
  func_004BE114(piVar6,0xb,0,0,DAT_00285394);
  func_004C03B8((int)piVar6,DAT_00285398);
  *(undefined1 *)((int)piVar6 + 0x966) = 6;
  piVar6[0x25d] = (int)piVar6;
  iVar8 = func_0010BA78(0x60);
  piVar6[0x25e] = iVar8;
  puVar11 = DAT_0028539c;
  piVar6[0x25f] = iVar8 + (uint)*(byte *)((int)piVar6 + 0x966) * 8;
  iVar12 = 6;
  puVar9 = (undefined4 *)(iVar8 + -8);
  do {
    uVar16 = puVar11[0x1f];
    iVar12 = iVar12 + -1;
    puVar9[2] = puVar11[0x1e];
    puVar9[3] = uVar16;
    uVar16 = puVar11[0x1f];
    puVar9[4] = puVar11[0x1e];
    puVar9[5] = uVar16;
    puVar9 = puVar9 + 4;
  } while (iVar12 != 0);
  bVar1 = *(byte *)((int)piVar6 + 0x966);
  uVar7 = (uint)bVar1;
  puVar9 = (undefined4 *)func_0010BA78(uVar7 << 3);
  piVar6[0x260] = (int)puVar9;
  if (uVar7 != 0) {
    puVar10 = puVar9 + -2;
    if ((bVar1 & 1) != 0) {
      uVar16 = puVar11[5];
      *puVar9 = puVar11[4];
      puVar9[1] = uVar16;
      puVar10 = puVar9;
    }
    for (iVar8 = (int)uVar7 >> 1; iVar8 != 0; iVar8 = iVar8 + -1) {
      uVar16 = puVar11[5];
      puVar10[2] = puVar11[4];
      puVar10[3] = uVar16;
      uVar16 = puVar11[5];
      puVar10[4] = puVar11[4];
      puVar10[5] = uVar16;
      puVar10 = puVar10 + 4;
    }
  }
  puVar9 = (undefined4 *)func_0010CEE0(0xe0,(int *)0x0,4);
  iVar8 = 0;
  if (puVar9 != (undefined4 *)0x0) {
    *puVar9 = 0x24;
    puVar9[1] = 6;
    iVar8 = func_00100118((int)(puVar9 + 2),DAT_002853a0,0x24,6);
  }
  if (iVar8 != 0) {
    piVar6[0x25a] = 6;
    piVar6[0x25b] = iVar8;
  }
  iVar8 = DAT_002853a4;
  piVar6[0xd5] = (int)(piVar6 + 600);
  *(undefined2 *)(iVar8 + (int)piVar6) = 6;
  local_34 = s_cState_Wait_002853a8;
  local_38 = iVar15;
  func_0010BEC4((int)(piVar6 + 600),0,&local_38);
  puVar9 = (undefined4 *)piVar6[0x25e];
  uVar13 = puVar11[1];
  uVar16 = puVar11[2];
  uVar17 = puVar11[3];
  uVar20 = puVar11[4];
  uVar19 = puVar11[5];
  *puVar9 = *puVar11;
  puVar9[1] = uVar13;
  puVar9 = (undefined4 *)piVar6[0x25f];
  *puVar9 = uVar16;
  puVar9[1] = uVar17;
  puVar9 = (undefined4 *)piVar6[0x260];
  *puVar9 = uVar20;
  puVar9[1] = uVar19;
  local_34 = s_cState_Walk_002853b4;
  local_38 = iVar15;
  func_0010BEC4((int)(piVar6 + 600),1,&local_38);
  iVar8 = piVar6[0x25e];
  uVar16 = puVar11[7];
  uVar17 = puVar11[8];
  uVar13 = puVar11[9];
  *(undefined4 *)(iVar8 + 8) = puVar11[6];
  *(undefined4 *)(iVar8 + 0xc) = uVar16;
  iVar8 = piVar6[0x25f];
  *(undefined4 *)(iVar8 + 8) = uVar17;
  *(undefined4 *)(iVar8 + 0xc) = uVar13;
  iVar8 = piVar6[0x260];
  *(undefined4 *)(iVar8 + 8) = uVar20;
  *(undefined4 *)(iVar8 + 0xc) = uVar19;
  local_34 = s_cState_Event_002853c0;
  local_38 = iVar15;
  func_0010BEC4((int)(piVar6 + 600),2,&local_38);
  iVar8 = piVar6[0x25e];
  uVar16 = puVar11[0xd];
  uVar13 = puVar11[0xc];
  uVar17 = puVar11[0xb];
  *(undefined4 *)(iVar8 + 0x10) = puVar11[10];
  *(undefined4 *)(iVar8 + 0x14) = uVar17;
  iVar8 = piVar6[0x25f];
  *(undefined4 *)(iVar8 + 0x10) = uVar13;
  *(undefined4 *)(iVar8 + 0x14) = uVar16;
  iVar8 = piVar6[0x260];
  *(undefined4 *)(iVar8 + 0x10) = uVar20;
  *(undefined4 *)(iVar8 + 0x14) = uVar19;
  local_34 = s_cState_EventEnd_002853d0;
  local_38 = iVar15;
  func_0010BEC4((int)(piVar6 + 600),3,&local_38);
  iVar8 = piVar6[0x25e];
  uVar16 = puVar11[0xf];
  uVar13 = puVar11[0x10];
  uVar17 = puVar11[0x11];
  uVar19 = puVar11[0x12];
  uVar20 = puVar11[0x13];
  *(undefined4 *)(iVar8 + 0x18) = puVar11[0xe];
  *(undefined4 *)(iVar8 + 0x1c) = uVar16;
  iVar8 = piVar6[0x25f];
  *(undefined4 *)(iVar8 + 0x18) = uVar13;
  *(undefined4 *)(iVar8 + 0x1c) = uVar17;
  iVar8 = piVar6[0x260];
  *(undefined4 *)(iVar8 + 0x18) = uVar19;
  *(undefined4 *)(iVar8 + 0x1c) = uVar20;
  local_34 = s_cState_Hide_002853e0;
  local_38 = iVar15;
  func_0010BEC4((int)(piVar6 + 600),4,&local_38);
  iVar8 = piVar6[0x25e];
  uVar19 = puVar11[0x15];
  uVar16 = puVar11[0x17];
  uVar20 = puVar11[0x18];
  uVar13 = puVar11[0x19];
  uVar17 = puVar11[0x16];
  *(undefined4 *)(iVar8 + 0x20) = puVar11[0x14];
  *(undefined4 *)(iVar8 + 0x24) = uVar19;
  iVar8 = piVar6[0x25f];
  *(undefined4 *)(iVar8 + 0x20) = uVar17;
  *(undefined4 *)(iVar8 + 0x24) = uVar16;
  iVar8 = piVar6[0x260];
  *(undefined4 *)(iVar8 + 0x20) = uVar20;
  *(undefined4 *)(iVar8 + 0x24) = uVar13;
  local_34 = s_cState_Sample_002853ec;
  local_38 = iVar15;
  func_0010BEC4((int)(piVar6 + 600),5,&local_38);
  iVar15 = piVar6[0x25e];
  piVar14 = (int *)puVar11[5];
  uVar19 = puVar11[4];
  uVar16 = puVar11[0x1c];
  uVar13 = puVar11[0x1d];
  uVar17 = puVar11[0x1b];
  *(undefined4 *)(iVar15 + 0x28) = puVar11[0x1a];
  *(undefined4 *)(iVar15 + 0x2c) = uVar17;
  iVar15 = piVar6[0x25f];
  *(undefined4 *)(iVar15 + 0x28) = uVar16;
  *(undefined4 *)(iVar15 + 0x2c) = uVar13;
  piVar3 = DAT_00285670;
  iVar15 = DAT_0028566c;
  iVar8 = piVar6[0x260];
  *(undefined4 *)(iVar8 + 0x28) = uVar19;
  *(int **)(iVar8 + 0x2c) = piVar14;
  bVar4 = func_00584B94(*piVar3,iVar15);
  if (bVar4) {
LAB_0028546c:
    uVar5 = 1;
  }
  else {
    bVar4 = func_00584B94(*piVar3,DAT_00285674);
    uVar5 = 0;
    if (bVar4) goto LAB_0028546c;
  }
  *(undefined1 *)((int)piVar6 + 0x9f1) = uVar5;
  if (*(short *)((int)piVar6 + 0x2e) != 0) {
    *(undefined1 *)((int)piVar6 + 0x9f1) = 0;
  }
  cVar2 = *(char *)((int)piVar6 + 0x9f1);
  bVar4 = cVar2 == '\0';
  if (bVar4) {
    cVar2 = *(char *)((int)piVar6 + 0x9ee);
  }
  if (bVar4 && cVar2 == '\n') {
    func_004BD474((int)piVar6);
    uVar16 = 0;
    func_00620A58((int)piVar6,0,0);
    piVar6[0x261] = 0;
    goto LAB_002855bc;
  }
  uVar16 = 0;
  func_00620A58((int)piVar6,piVar6[0x261],0);
  if (*(short *)((int)piVar6 + 0x2e) != 0) goto LAB_002855bc;
  if ((short)piVar6[0xb] == 0) {
LAB_00285508:
    if (*(char *)((int)piVar6 + 0x9f1) != '\x01') goto LAB_002855bc;
  }
  else {
    iVar15 = (int)*(char *)(*DAT_00285678 + 0x18);
    uVar7 = iVar15 - 2;
    bVar18 = 2 < uVar7;
    bVar4 = uVar7 == 3;
    if (3 < uVar7) {
      bVar18 = iVar15 != 0x16;
      bVar4 = iVar15 == 0x17;
    }
    if (bVar18 && !bVar4) goto LAB_00285508;
  }
  *(undefined1 *)((int)piVar6 + 0x919) = 0;
  if (piVar6[0x1e9] != 0) {
    uVar16 = 0;
    func_004CF478(piVar6[0x1e9],1);
  }
  piVar3 = DAT_0028567c;
  *(ushort *)(*DAT_0028567c + 0x33e) = *(ushort *)(*DAT_0028567c + 0x33e) | 9;
  func_0051B6E4(*piVar3);
  func_00519D4C(*piVar3,extraout_r1,uVar16,(int)piVar14);
  puVar9 = (undefined4 *)func_0010BAB4(0x20);
  puVar11 = (undefined4 *)0x0;
  if (puVar9 != (undefined4 *)0x0) {
    puVar11 = func_0015137C(puVar9,piVar6,0);
  }
  piVar6[0x263] = (int)puVar11;
  func_00151148((int)puVar11,1);
  if (*(char *)((int)piVar6 + 0x9f1) == '\x01') {
    func_004C0684((int)piVar6,piRam00285680,1);
    puVar9 = (undefined4 *)func_0010BAB4(0x20);
    puVar11 = (undefined4 *)0x0;
    if (puVar9 != (undefined4 *)0x0) {
      puVar11 = func_0015137C(puVar9,piVar6,0);
    }
    piVar6[0x264] = (int)puVar11;
    func_00151148((int)puVar11,1);
    uVar16 = 0;
    func_00284B24((int)piVar6,10,0);
    piVar6[0x22d] = iRam00285684;
  }
  else {
    uVar16 = 0;
    func_00284B24((int)piVar6,5,0);
  }
LAB_002855bc:
  if (*(char *)((int)piVar6 + 0x9ee) == '\n') {
    func_004BDB2C(piVar6,piVar6[0x103],DAT_00285688);
  }
  func_004BC8D8((int)piVar6);
  func_004C00F4((int)piVar6,extraout_r1_00,uVar16,piVar14);
  func_00283DD8((int)piVar6);
  return piVar6;
}

