#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_004BC8D8(int param_1);
extern int func_004BDEE8(int param_1);
extern int func_004BE114(int * param_1,int param_2,int param_3,int param_4,undefined4 param_5);
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern int func_0055696C(int param_1,int param_2);
extern int func_00588BF0(int param_1,int param_2);
extern int func_006356F4(int param_1,int param_2,undefined1 param_3);
extern int func_00636378(undefined4 *param_1,uint *param_2,undefined4 param_3,undefined1 param_4, undefined4 *param_5);
extern int iRam004dd7f8;
extern int iRam004ddb28;
extern int *piRam004ddb20;
extern undefined4 *puRam004dd7f0;
extern undefined4 *puRam004dd7f4;
extern undefined4 *puRam004ddb24;
extern int DAT_004dd7d8;
extern int DAT_004dd7dc;
extern undefined DAT_004dd7e0;
extern int DAT_004dd7e8;
extern undefined4 DAT_004dd7ec;
extern char s_cState_EscapeHide_004ddb0c[];
extern char s_cState_EscapeSurprise_004ddaf4[];
extern char s_cState_EscapeWait_004ddac0[];
extern char s_cState_Escape_004ddae4[];
extern char s_cState_EventEnd_004dd824[];
extern char s_cState_Event_004dd814[];
extern char s_cState_GoRail_004ddad4[];
extern char s_cState_Hide_004ddab4[];
extern char s_cState_Wait_004dd7fc[];
extern char s_cState_Walk_004dd808[];

// USA 004DD410 <- EU 004DD3E8 (Ghidra, non-matching)
// GLOBAL DAT_004dd7d8 int
// GLOBAL DAT_004dd7dc int
// GLOBAL DAT_004dd7e0 undefined
// GLOBAL DAT_004dd7e8 int
// GLOBAL DAT_004dd7ec undefined4
// GLOBAL UNK_004dd7f0 undefined4 *
// GLOBAL UNK_004dd7f4 undefined *
// GLOBAL UNK_004dd7f8 int
// GLOBAL UNK_004ddb20 int *
// GLOBAL UNK_004ddb24 undefined4 *
// GLOBAL UNK_004ddb28 int
// GLOBAL s_cState_EscapeHide_004ddb0c string
// GLOBAL s_cState_EscapeSurprise_004ddaf4 string
// GLOBAL s_cState_EscapeWait_004ddac0 string
// GLOBAL s_cState_Escape_004ddae4 string
// GLOBAL s_cState_EventEnd_004dd824 string
// GLOBAL s_cState_Event_004dd814 string
// GLOBAL s_cState_GoRail_004ddad4 string
// GLOBAL s_cState_Hide_004ddab4 string
// GLOBAL s_cState_Wait_004dd7fc string
// GLOBAL s_cState_Walk_004dd808 string

int * func_004DD410(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  bool bVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  ushort uVar10;
  int *piVar11;
  int iVar12;
  undefined4 uVar13;
  int *piVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(int *)(albw_frame + 0x8))
  #define local_44 (*(char * *)(albw_frame + 0xc))
  #define local_40 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x18))
  #define local_34 (*(undefined1 *)(albw_frame + 0x1c))
  #define local_33 (*(undefined1 *)(albw_frame + 0x1d))
  local_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  local_34 = 0;
  local_33 = 1;
  piVar4 = (int *)func_00636378(param_1,param_2,0,5,&local_40);
  iVar9 = DAT_004dd7d8;
  *piVar4 = DAT_004dd7d8;
  piVar4[200] = iVar9 + 0xb8;
  iVar9 = DAT_004dd7dc;
  piVar4[0x263] = 0;
  piVar4[0x264] = iVar9;
  piVar4[0x265] = iVar9;
  piVar4[0x266] = iVar9;
  piVar4[0x267] = iVar9;
  piVar4[0x268] = iVar9;
  piVar4[0x269] = iVar9;
  piVar4[0x26a] = 0;
  piVar4[0x26b] = 0;
  piVar4[0x26c] = iVar9;
  piVar4[0x26d] = iVar9;
  *(undefined2 *)(piVar4 + 0x26e) = 0;
  *(undefined2 *)((int)piVar4 + 0x9ba) = 0;
  *(undefined1 *)((int)piVar4 + 0x9bd) = 0;
  *(undefined1 *)((int)piVar4 + 0x9be) = 0;
  *(undefined1 *)((int)piVar4 + 0x9bf) = 0;
  *(undefined1 *)(piVar4 + 0x270) = 0xff;
  *(undefined1 *)((int)piVar4 + 0x9c1) = 0;
  *(undefined1 *)((int)piVar4 + 0x9c2) = 0;
  *(undefined1 *)((int)piVar4 + 0x9c3) = 0;
  uVar10 = *(ushort *)((int)piVar4 + 0x32) & 0xff;
  *(char *)(piVar4 + 0x26f) = (char)*(ushort *)((int)piVar4 + 0x32);
  if (uVar10 < 3) {
    if (uVar10 == 1 || uVar10 == 2) {
      piVar4[0x22b] = piVar4[0x22b] | 0x200;
    }
    if (uVar10 == 1) {
      *(undefined1 *)((int)piVar4 + 0x857) = 0;
      uVar5 = 0;
      piVar4[0xf4] = piVar4[2];
      piVar4[0xf5] = piVar4[3];
      piVar4[0xf6] = piVar4[4];
      piVar11 = piVar4 + 0x271;
      do {
        piVar14 = piVar11;
        if (uVar5 < 3) {
          piVar14 = (int *)((int)piVar11 + uVar5 * 2);
        }
        *(short *)piVar14 = (short)param_2[uVar5 * 2 + 0xa7];
        piVar14 = piVar11;
        if (uVar5 < 3) {
          piVar14 = (int *)((int)piVar11 + uVar5 * 2);
        }
        uVar5 = uVar5 + 1;
        if ((short)*piVar14 < 0) {
          *(undefined1 *)(piVar4 + 0x26f) = 0;
        }
      } while ((int)uVar5 < 3);
    }
  }
  else {
    *(undefined1 *)(piVar4 + 0x26f) = 0;
  }
  iVar9 = DAT_004dd7e8;
  local_44 = &DAT_004dd7e0;
  local_48 = DAT_004dd7e8;
  func_004BE114(piVar4,0xb,0,0,DAT_004dd7ec);
  func_004BDEE8((int)piVar4);
  func_004BC8D8((int)piVar4);
  piVar4[0x25d] = (int)piVar4;
  *(undefined1 *)((int)piVar4 + 0x966) = 10;
  iVar6 = func_0010BA78(0xa0);
  puVar2 = puRam004dd7f0;
  piVar4[0x25e] = iVar6;
  piVar4[0x25f] = iVar6 + (uint)*(byte *)((int)piVar4 + 0x966) * 8;
  iVar12 = 10;
  puVar7 = (undefined4 *)(iVar6 + -8);
  do {
    uVar15 = puVar2[0x31];
    iVar12 = iVar12 + -1;
    puVar7[2] = puVar2[0x30];
    puVar7[3] = uVar15;
    uVar15 = puVar2[0x31];
    puVar7[4] = puVar2[0x30];
    puVar7[5] = uVar15;
    puVar7 = puVar7 + 4;
  } while (iVar12 != 0);
  bVar1 = *(byte *)((int)piVar4 + 0x966);
  uVar5 = (uint)bVar1;
  puVar7 = (undefined4 *)func_0010BA78(uVar5 << 3);
  piVar4[0x260] = (int)puVar7;
  if (uVar5 != 0) {
    puVar8 = puVar7 + -2;
    if ((bVar1 & 1) != 0) {
      uVar15 = puVar2[5];
      *puVar7 = puVar2[4];
      puVar7[1] = uVar15;
      puVar8 = puVar7;
    }
    for (iVar6 = (int)uVar5 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      uVar15 = puVar2[5];
      puVar8[2] = puVar2[4];
      puVar8[3] = uVar15;
      uVar15 = puVar2[5];
      puVar8[4] = puVar2[4];
      puVar8[5] = uVar15;
      puVar8 = puVar8 + 4;
    }
  }
  puVar7 = (undefined4 *)func_0010CEE0(0x170,(int *)0x0,4);
  iVar6 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0x24;
    puVar7[1] = 10;
    iVar6 = func_00100118((int)(puVar7 + 2),puRam004dd7f4,0x24,10);
  }
  if (iVar6 != 0) {
    piVar4[0x25a] = 10;
    piVar4[0x25b] = iVar6;
  }
  iVar6 = iRam004dd7f8;
  piVar4[0xd5] = (int)(piVar4 + 600);
  *(undefined2 *)(iVar6 + (int)piVar4) = 10;
  local_44 = s_cState_Wait_004dd7fc;
  local_48 = iVar9;
  func_0010BEC4((int)(piVar4 + 600),0,&local_48);
  puVar7 = (undefined4 *)piVar4[0x25e];
  uVar15 = puVar2[1];
  uVar13 = puVar2[2];
  uVar16 = puVar2[3];
  uVar19 = *(undefined8 *)(puVar2 + 4);
  *puVar7 = *puVar2;
  puVar7[1] = uVar15;
  puVar7 = (undefined4 *)piVar4[0x25f];
  *puVar7 = uVar13;
  puVar7[1] = uVar16;
  puVar7 = (undefined4 *)piVar4[0x260];
  *puVar7 = (int)uVar19;
  puVar7[1] = (int)((ulonglong)uVar19 >> 0x20);
  local_44 = s_cState_Walk_004dd808;
  local_48 = iVar9;
  func_0010BEC4((int)(piVar4 + 600),1,&local_48);
  iVar6 = piVar4[0x25e];
  uVar13 = puVar2[7];
  uVar15 = puVar2[8];
  uVar16 = puVar2[9];
  *(undefined4 *)(iVar6 + 8) = puVar2[6];
  *(undefined4 *)(iVar6 + 0xc) = uVar13;
  iVar6 = piVar4[0x25f];
  *(undefined4 *)(iVar6 + 8) = uVar15;
  *(undefined4 *)(iVar6 + 0xc) = uVar16;
  iVar6 = piVar4[0x260];
  *(int *)(iVar6 + 8) = (int)uVar19;
  *(int *)(iVar6 + 0xc) = (int)((ulonglong)uVar19 >> 0x20);
  local_44 = s_cState_Event_004dd814;
  local_48 = iVar9;
  func_0010BEC4((int)(piVar4 + 600),2,&local_48);
  iVar6 = piVar4[0x25e];
  uVar16 = puVar2[0xb];
  uVar15 = puVar2[0xc];
  uVar13 = puVar2[0xd];
  *(undefined4 *)(iVar6 + 0x10) = puVar2[10];
  *(undefined4 *)(iVar6 + 0x14) = uVar16;
  iVar6 = piVar4[0x25f];
  *(undefined4 *)(iVar6 + 0x10) = uVar15;
  *(undefined4 *)(iVar6 + 0x14) = uVar13;
  iVar6 = piVar4[0x260];
  *(int *)(iVar6 + 0x10) = (int)uVar19;
  *(int *)(iVar6 + 0x14) = (int)((ulonglong)uVar19 >> 0x20);
  local_44 = s_cState_EventEnd_004dd824;
  local_48 = iVar9;
  func_0010BEC4((int)(piVar4 + 600),3,&local_48);
  iVar6 = piVar4[0x25e];
  uVar15 = puVar2[0xf];
  uVar13 = puVar2[0x10];
  uVar16 = puVar2[0x11];
  uVar17 = puVar2[0x12];
  uVar18 = puVar2[0x13];
  *(undefined4 *)(iVar6 + 0x18) = puVar2[0xe];
  *(undefined4 *)(iVar6 + 0x1c) = uVar15;
  iVar6 = piVar4[0x25f];
  *(undefined4 *)(iVar6 + 0x18) = uVar13;
  *(undefined4 *)(iVar6 + 0x1c) = uVar16;
  iVar6 = piVar4[0x260];
  *(undefined4 *)(iVar6 + 0x18) = uVar17;
  *(undefined4 *)(iVar6 + 0x1c) = uVar18;
  local_44 = s_cState_Hide_004ddab4;
  local_48 = iVar9;
  func_0010BEC4((int)(piVar4 + 600),4,&local_48);
  iVar6 = piVar4[0x25e];
  uVar15 = puVar2[0x15];
  uVar13 = puVar2[0x16];
  uVar16 = puVar2[0x17];
  uVar17 = puVar2[0x18];
  uVar18 = puVar2[0x19];
  *(undefined4 *)(iVar6 + 0x20) = puVar2[0x14];
  *(undefined4 *)(iVar6 + 0x24) = uVar15;
  iVar6 = piVar4[0x25f];
  *(undefined4 *)(iVar6 + 0x20) = uVar13;
  *(undefined4 *)(iVar6 + 0x24) = uVar16;
  iVar6 = piVar4[0x260];
  *(undefined4 *)(iVar6 + 0x20) = uVar17;
  *(undefined4 *)(iVar6 + 0x24) = uVar18;
  local_44 = s_cState_EscapeWait_004ddac0;
  local_48 = iVar9;
  func_0010BEC4((int)(piVar4 + 600),5,&local_48);
  iVar6 = piVar4[0x25e];
  uVar15 = puVar2[0x1c];
  uVar13 = puVar2[0x1d];
  uVar16 = puVar2[0x1b];
  uVar19 = *(undefined8 *)(puVar2 + 4);
  *(undefined4 *)(iVar6 + 0x28) = puVar2[0x1a];
  *(undefined4 *)(iVar6 + 0x2c) = uVar16;
  iVar6 = piVar4[0x25f];
  *(undefined4 *)(iVar6 + 0x28) = uVar15;
  *(undefined4 *)(iVar6 + 0x2c) = uVar13;
  iVar6 = piVar4[0x260];
  *(int *)(iVar6 + 0x28) = (int)uVar19;
  *(int *)(iVar6 + 0x2c) = (int)((ulonglong)uVar19 >> 0x20);
  local_44 = s_cState_GoRail_004ddad4;
  local_48 = iVar9;
  func_0010BEC4((int)(piVar4 + 600),6,&local_48);
  iVar6 = piVar4[0x25e];
  uVar15 = puVar2[0x1f];
  uVar13 = puVar2[0x20];
  uVar16 = puVar2[0x21];
  *(undefined4 *)(iVar6 + 0x30) = puVar2[0x1e];
  *(undefined4 *)(iVar6 + 0x34) = uVar15;
  iVar6 = piVar4[0x25f];
  *(undefined4 *)(iVar6 + 0x30) = uVar13;
  *(undefined4 *)(iVar6 + 0x34) = uVar16;
  iVar6 = piVar4[0x260];
  *(int *)(iVar6 + 0x30) = (int)uVar19;
  *(int *)(iVar6 + 0x34) = (int)((ulonglong)uVar19 >> 0x20);
  local_44 = s_cState_Escape_004ddae4;
  local_48 = iVar9;
  func_0010BEC4((int)(piVar4 + 600),7,&local_48);
  iVar6 = piVar4[0x25e];
  uVar15 = puVar2[0x24];
  uVar13 = puVar2[0x25];
  uVar16 = puVar2[0x23];
  *(undefined4 *)(iVar6 + 0x38) = puVar2[0x22];
  *(undefined4 *)(iVar6 + 0x3c) = uVar16;
  iVar6 = piVar4[0x25f];
  *(undefined4 *)(iVar6 + 0x38) = uVar15;
  *(undefined4 *)(iVar6 + 0x3c) = uVar13;
  iVar6 = piVar4[0x260];
  *(int *)(iVar6 + 0x38) = (int)uVar19;
  *(int *)(iVar6 + 0x3c) = (int)((ulonglong)uVar19 >> 0x20);
  local_44 = s_cState_EscapeSurprise_004ddaf4;
  local_48 = iVar9;
  func_0010BEC4((int)(piVar4 + 600),8,&local_48);
  iVar6 = piVar4[0x25e];
  uVar15 = puVar2[0x27];
  uVar13 = puVar2[0x28];
  uVar16 = puVar2[0x29];
  uVar17 = puVar2[0x2a];
  uVar18 = puVar2[0x2b];
  *(undefined4 *)(iVar6 + 0x40) = puVar2[0x26];
  *(undefined4 *)(iVar6 + 0x44) = uVar15;
  iVar6 = piVar4[0x25f];
  *(undefined4 *)(iVar6 + 0x40) = uVar13;
  *(undefined4 *)(iVar6 + 0x44) = uVar16;
  iVar6 = piVar4[0x260];
  *(undefined4 *)(iVar6 + 0x40) = uVar17;
  *(undefined4 *)(iVar6 + 0x44) = uVar18;
  local_44 = s_cState_EscapeHide_004ddb0c;
  local_48 = iVar9;
  func_0010BEC4((int)(piVar4 + 600),9,&local_48);
  iVar9 = piVar4[0x25e];
  uVar16 = puVar2[0x2d];
  uVar13 = puVar2[0x2e];
  uVar15 = puVar2[4];
  uVar18 = puVar2[0x2f];
  uVar17 = puVar2[5];
  *(undefined4 *)(iVar9 + 0x48) = puVar2[0x2c];
  *(undefined4 *)(iVar9 + 0x4c) = uVar16;
  iVar9 = piVar4[0x25f];
  *(undefined4 *)(iVar9 + 0x48) = uVar13;
  *(undefined4 *)(iVar9 + 0x4c) = uVar18;
  iVar9 = piVar4[0x260];
  *(undefined4 *)(iVar9 + 0x48) = uVar15;
  *(undefined4 *)(iVar9 + 0x4c) = uVar17;
  if (((char)piVar4[0x26f] == '\x01') && (uVar5 = func_0055696C(*piRam004ddb20,0x20), uVar5 < 2)) {
    bVar3 = func_00588BF0((int)piVar4,0);
    if (bVar3) {
      *(undefined1 *)((int)piVar4 + 0x9c3) = 1;
    }
    piVar4[0x22b] = piVar4[0x22b] & 0xfffffff7;
    piVar4[0x261] = 5;
    func_006356F4((int)piVar4,5,0);
  }
  else {
    func_006356F4((int)piVar4,piVar4[0x261],0);
  }
  func_004C03B8((int)piVar4,puRam004ddb24);
  piVar4[0x22e] = iRam004ddb28;
  piVar4[0x22b] = piVar4[0x22b] | 0x100;
  return piVar4;
}

