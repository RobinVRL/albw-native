#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0016A2A4(uint *param_1,uint param_2,int *param_3);
extern int func_002C2D00(int *param_1);
extern int func_0036D0C8(int *param_1,int param_2);
extern int func_004356B4(int *param_1);
extern int func_004BC8D8(int param_1);
extern int func_004BDCE0(int *param_1);
extern int func_004BDCE8(int param_1,int param_2,int param_3,undefined4 param_4);
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern int func_004C081C(int param_1,int param_2,int param_3,int *param_4,int param_5,undefined4 param_6);
extern int func_004C6760(int param_1);
extern int func_004D7F70(float *param_1,uint param_2);
extern int func_004F042C(void);
extern int func_00584B94(int param_1,int param_2);
extern int func_0061DE9C(int param_1,int param_2,undefined1 param_3);
extern int func_0061EB20(undefined4 *param_1,uint *param_2,undefined4 param_3,undefined1 param_4, undefined4 *param_5);
extern int iRam0028255c;
extern undefined4 *puRam00282554;
extern undefined4 *puRam00282558;
extern undefined4 *puRam002826e8;
extern undefined4 *DAT_00282520;
extern int DAT_00282524;
extern int *DAT_00282528;
extern int DAT_0028252c;
extern int *DAT_00282530;
extern int DAT_00282534;
extern float DAT_00282538;
extern undefined4 DAT_0028253c;
extern undefined4 DAT_00282540;
extern int DAT_00282544;
extern int *DAT_00282548;
extern undefined4 *DAT_0028254c;
extern int *DAT_00282550;
extern char s_cState_EventEnd_002826b8[];
extern char s_cState_Event_00282578[];
extern char s_cState_Hide_002826c8[];
extern char s_cState_WaitFight_002826d4[];
extern char s_cState_Wait_00282560[];
extern char s_cState_Walk_0028256c[];

// USA 00282040 <- EU 00282068 (Ghidra, non-matching)
// GLOBAL DAT_00282520 undefined4 *
// GLOBAL DAT_00282524 int
// GLOBAL DAT_00282528 int *
// GLOBAL DAT_0028252c int
// GLOBAL DAT_00282530 int *
// GLOBAL DAT_00282534 int
// GLOBAL DAT_00282538 float
// GLOBAL DAT_0028253c undefined4
// GLOBAL DAT_00282540 undefined4
// GLOBAL DAT_00282544 int
// GLOBAL DAT_00282548 int *
// GLOBAL DAT_0028254c undefined4 *
// GLOBAL DAT_00282550 int *
// GLOBAL UNK_00282554 undefined4 *
// GLOBAL UNK_00282558 undefined *
// GLOBAL UNK_0028255c int
// GLOBAL UNK_002826e8 undefined4 *
// GLOBAL s_cState_EventEnd_002826b8 string
// GLOBAL s_cState_Event_00282578 string
// GLOBAL s_cState_Hide_002826c8 string
// GLOBAL s_cState_WaitFight_002826d4 string
// GLOBAL s_cState_Wait_00282560 string
// GLOBAL s_cState_Walk_0028256c string

int * func_00282040(undefined4 *param_1,uint *param_2)

{
  _Alignas(8) unsigned char albw_frame[0x80]; /* entry_sp - 0x80 .. entry_sp + 0x0 */
#define stack0xffffff88 (*(undefined4 *)(albw_frame + 0x8))
  byte bVar1;
  int *piVar2;
  undefined4 *puVar3;
  bool bVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  #define local_6c (*(int *)(albw_frame + 0x14))
  #define uStack_68 (*(undefined4 *)(albw_frame + 0x18))
  #define iStack_64 (*(int *)(albw_frame + 0x1c))
  #define local_60 (*(undefined4 *)(albw_frame + 0x20))
  #define local_5c (*(int *)(albw_frame + 0x24))
  #define uStack_58 (*(undefined4 *)(albw_frame + 0x28))
  #define local_54 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_50 (*(undefined1 *)(albw_frame + 0x30))
  #define local_4f (*(undefined1 *)(albw_frame + 0x31))
  #define local_4c (*(undefined4 *)(albw_frame + 0x34))
  #define local_48 (*(undefined4 *)(albw_frame + 0x38))
  #define local_44 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x40))
  #define local_3c (*(undefined4 *)(albw_frame + 0x44))
  #define local_38 (*(undefined4 *)(albw_frame + 0x48))
  #define local_34 (*(undefined1 *)(albw_frame + 0x4c))
  #define local_33 (*(undefined1 *)(albw_frame + 0x4d))
  #define iStack_30 (*(int *)(albw_frame + 0x50))
  #define pcStack_2c (*(char * *)(albw_frame + 0x54))
  piVar5 = (int *)func_0061EB20(param_1,param_2,0,0xff,DAT_00282520);
  iVar9 = DAT_00282524;
  iVar14 = 1;
  piVar5[200] = DAT_00282524 + 0xb8;
  *piVar5 = iVar9;
  *(undefined1 *)((int)piVar5 + 0x989) = 0;
  piVar5[0x263] = 0;
  *(undefined1 *)(piVar5 + 0x264) = 0;
  *(undefined1 *)((int)piVar5 + 0x991) = 0;
  *(undefined1 *)((int)piVar5 + 0x992) = 0;
  *(undefined1 *)((int)piVar5 + 0x993) = 0;
  *(undefined1 *)(piVar5 + 0x265) = 1;
  *(undefined1 *)((int)piVar5 + 0x995) = 0;
  *(undefined1 *)(piVar5 + 0x266) = 0;
  piVar5[0x267] = 0;
  piVar5[0x268] = 0;
  piVar5[0x269] = 0;
  piVar5[0x26a] = 0;
  piVar5[0x26b] = 0;
  piVar5[0x26c] = 0;
  piVar5[0x26d] = 0;
  piVar5[0x26e] = 0;
  piVar5[0x26f] = 0;
  piVar5[0x270] = 0;
  piVar5[0x271] = 0;
  piVar5[0x272] = 0;
  piVar5[0x273] = 0;
  piVar5[0x274] = 0;
  piVar5[0x275] = 0;
  iVar10 = piVar5[0x1e2];
  iVar9 = *(int *)(iVar10 + 8);
  iVar11 = *(int *)(iVar10 + 0xc);
  piVar5[0x276] = *(int *)(iVar10 + 4);
  piVar5[0x277] = iVar9;
  piVar5[0x278] = iVar11;
  iVar9 = func_004F042C();
  piVar2 = DAT_00282528;
  if (iVar9 == 0) {
    *(undefined1 *)((int)piVar5 + 0x2d7) = 1;
  }
  else {
    if ((*DAT_00282528 != 0) && (func_004C6760(*DAT_00282528), *(char *)(*piVar2 + 0x5ac) != '\0'))
    {
      *(undefined1 *)((int)piVar5 + 0x991) = 1;
    }
    piVar2 = DAT_00282530;
    bVar4 = func_00584B94(*DAT_00282530,DAT_0028252c);
    if ((bVar4) || (bVar4 = func_00584B94(*piVar2,DAT_00282534), !bVar4)) {
      *(undefined1 *)(piVar5 + 0x265) = 0;
    }
    uVar16 = DAT_0028253c;
    fVar19 = DAT_00282538;
    piVar5[0x22b] = piVar5[0x22b] | 0x81;
    fVar20 = fVar19;
    func_004D7F70((float *)&stack0xffffff88,piVar5[0xfa]);
    func_00115C54((float *)&stack0xffffff88,(float *)&stack0xffffff88,(float *)(piVar5 + 0x276));
    iVar9 = piVar5[0x1e2];
    *(float *)(iVar9 + 4) = fVar19;
    *(float *)(iVar9 + 8) = fVar20;
    *(undefined4 *)(iVar9 + 0xc) = uVar16;
    func_004356B4((int *)piVar5[0x1e2]);
    iVar9 = DAT_00282544;
    local_5c = *(int *)(piVar5[0xb4] + 0x1c8);
    bVar4 = *(int *)(local_5c + 200) != 0;
    if (bVar4) {
      local_5c = **(int **)(local_5c + 0xd0);
    }
    local_6c = DAT_00282544;
    uStack_68 = DAT_00282540;
    iStack_64 = DAT_00282544;
    if (!bVar4) {
      local_5c = 0;
    }
    local_60 = DAT_00282540;
    uStack_58 = 0;
    local_34 = 1;
    local_4f = 0;
    local_48 = 0;
    local_54 = 0;
    local_3c = 0;
    local_38 = 0;
    local_33 = 0xc4;
    local_4c = 0;
    local_40 = 0;
    local_44 = 0;
    local_50 = 1;
    piVar6 = func_002C2D00(&local_6c);
    piVar5[0x1e8] = (int)piVar6;
    piVar2 = DAT_00282548;
    piVar5[0xd3] = (int)piVar6;
    func_004C081C((int)piVar5,3,(int)(piVar2 + 0xe),piVar2,1,0);
    func_0036D0C8(piVar5 + 0x263,0);
    puVar3 = DAT_0028254c;
    if (piVar5[0x263] != 0) {
      iVar14 = func_0010983C(*DAT_0028254c,piVar5[0x263]);
    }
    func_004BDCE8((int)piVar5,3,2,0);
    iVar10 = *(int *)(*DAT_00282550 + 0x10);
    func_0016A2A4((uint *)piVar5[0x1eb],3,*(int **)(iVar10 + 0x11c));
    func_0016A2A4((uint *)piVar5[0x1eb],4,*(int **)(iVar10 + 0x120));
    func_004BDCE0(piVar5);
    if (iVar14 != 1) {
      func_0010983C(*puVar3,iVar14);
    }
    func_004BC8D8((int)piVar5);
    piVar5[0x25d] = (int)piVar5;
    *(undefined1 *)((int)piVar5 + 0x966) = 6;
    iVar14 = func_0010BA78(0x60);
    puVar3 = puRam00282554;
    piVar5[0x25e] = iVar14;
    piVar5[0x25f] = iVar14 + (uint)*(byte *)((int)piVar5 + 0x966) * 8;
    iVar10 = 6;
    puVar7 = (undefined4 *)(iVar14 + -8);
    do {
      uVar16 = puVar3[0x1f];
      iVar10 = iVar10 + -1;
      puVar7[2] = puVar3[0x1e];
      puVar7[3] = uVar16;
      uVar16 = puVar3[0x1f];
      puVar7[4] = puVar3[0x1e];
      puVar7[5] = uVar16;
      puVar7 = puVar7 + 4;
    } while (iVar10 != 0);
    bVar1 = *(byte *)((int)piVar5 + 0x966);
    uVar15 = (uint)bVar1;
    puVar7 = (undefined4 *)func_0010BA78(uVar15 << 3);
    piVar5[0x260] = (int)puVar7;
    if (uVar15 != 0) {
      puVar8 = puVar7 + -2;
      if ((bVar1 & 1) != 0) {
        uVar16 = puVar3[5];
        *puVar7 = puVar3[4];
        puVar7[1] = uVar16;
        puVar8 = puVar7;
      }
      for (iVar14 = (int)uVar15 >> 1; iVar14 != 0; iVar14 = iVar14 + -1) {
        uVar16 = puVar3[5];
        puVar8[2] = puVar3[4];
        puVar8[3] = uVar16;
        uVar16 = puVar3[5];
        puVar8[4] = puVar3[4];
        puVar8[5] = uVar16;
        puVar8 = puVar8 + 4;
      }
    }
    puVar7 = (undefined4 *)func_0010CEE0(0xe0,(int *)0x0,4);
    iVar14 = 0;
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = 0x24;
      puVar7[1] = 6;
      iVar14 = func_00100118((int)(puVar7 + 2),puRam00282558,0x24,6);
    }
    if (iVar14 != 0) {
      piVar5[0x25a] = 6;
      piVar5[0x25b] = iVar14;
    }
    iVar14 = iRam0028255c;
    piVar5[0xd5] = (int)(piVar5 + 600);
    *(undefined2 *)(iVar14 + (int)piVar5) = 6;
    pcStack_2c = s_cState_Wait_00282560;
    iStack_30 = iVar9;
    func_0010BEC4((int)(piVar5 + 600),0,&iStack_30);
    puVar7 = (undefined4 *)piVar5[0x25e];
    uVar16 = puVar3[1];
    uVar12 = puVar3[2];
    uVar13 = puVar3[3];
    uVar18 = puVar3[4];
    uVar17 = puVar3[5];
    *puVar7 = *puVar3;
    puVar7[1] = uVar16;
    puVar7 = (undefined4 *)piVar5[0x25f];
    *puVar7 = uVar12;
    puVar7[1] = uVar13;
    puVar7 = (undefined4 *)piVar5[0x260];
    *puVar7 = uVar18;
    puVar7[1] = uVar17;
    pcStack_2c = s_cState_Walk_0028256c;
    iStack_30 = iVar9;
    func_0010BEC4((int)(piVar5 + 600),1,&iStack_30);
    iVar14 = piVar5[0x25e];
    uVar13 = puVar3[7];
    uVar16 = puVar3[8];
    uVar12 = puVar3[9];
    *(undefined4 *)(iVar14 + 8) = puVar3[6];
    *(undefined4 *)(iVar14 + 0xc) = uVar13;
    iVar14 = piVar5[0x25f];
    *(undefined4 *)(iVar14 + 8) = uVar16;
    *(undefined4 *)(iVar14 + 0xc) = uVar12;
    iVar14 = piVar5[0x260];
    *(undefined4 *)(iVar14 + 8) = uVar18;
    *(undefined4 *)(iVar14 + 0xc) = uVar17;
    pcStack_2c = s_cState_Event_00282578;
    iStack_30 = iVar9;
    func_0010BEC4((int)(piVar5 + 600),2,&iStack_30);
    iVar14 = piVar5[0x25e];
    uVar16 = puVar3[0xd];
    uVar12 = puVar3[0xc];
    uVar13 = puVar3[0xb];
    *(undefined4 *)(iVar14 + 0x10) = puVar3[10];
    *(undefined4 *)(iVar14 + 0x14) = uVar13;
    iVar14 = piVar5[0x25f];
    *(undefined4 *)(iVar14 + 0x10) = uVar12;
    *(undefined4 *)(iVar14 + 0x14) = uVar16;
    iVar14 = piVar5[0x260];
    *(undefined4 *)(iVar14 + 0x10) = uVar18;
    *(undefined4 *)(iVar14 + 0x14) = uVar17;
    pcStack_2c = s_cState_EventEnd_002826b8;
    iStack_30 = iVar9;
    func_0010BEC4((int)(piVar5 + 600),3,&iStack_30);
    iVar14 = piVar5[0x25e];
    uVar16 = puVar3[0xf];
    uVar12 = puVar3[0x10];
    uVar13 = puVar3[0x11];
    uVar17 = puVar3[0x12];
    uVar18 = puVar3[0x13];
    *(undefined4 *)(iVar14 + 0x18) = puVar3[0xe];
    *(undefined4 *)(iVar14 + 0x1c) = uVar16;
    iVar14 = piVar5[0x25f];
    *(undefined4 *)(iVar14 + 0x18) = uVar12;
    *(undefined4 *)(iVar14 + 0x1c) = uVar13;
    iVar14 = piVar5[0x260];
    *(undefined4 *)(iVar14 + 0x18) = uVar17;
    *(undefined4 *)(iVar14 + 0x1c) = uVar18;
    pcStack_2c = s_cState_Hide_002826c8;
    iStack_30 = iVar9;
    func_0010BEC4((int)(piVar5 + 600),4,&iStack_30);
    iVar14 = piVar5[0x25e];
    uVar12 = puVar3[0x15];
    uVar17 = puVar3[0x16];
    uVar16 = puVar3[0x17];
    uVar13 = puVar3[0x18];
    uVar18 = puVar3[0x19];
    *(undefined4 *)(iVar14 + 0x20) = puVar3[0x14];
    *(undefined4 *)(iVar14 + 0x24) = uVar12;
    iVar14 = piVar5[0x25f];
    *(undefined4 *)(iVar14 + 0x20) = uVar17;
    *(undefined4 *)(iVar14 + 0x24) = uVar16;
    iVar14 = piVar5[0x260];
    *(undefined4 *)(iVar14 + 0x20) = uVar13;
    *(undefined4 *)(iVar14 + 0x24) = uVar18;
    pcStack_2c = s_cState_WaitFight_002826d4;
    iStack_30 = iVar9;
    func_0010BEC4((int)(piVar5 + 600),5,&iStack_30);
    uVar13 = puVar3[0x1d];
    iVar9 = piVar5[0x25e];
    uVar16 = puVar3[0x1b];
    uVar17 = puVar3[0x1c];
    uVar12 = puVar3[4];
    uVar18 = puVar3[5];
    *(undefined4 *)(iVar9 + 0x28) = puVar3[0x1a];
    *(undefined4 *)(iVar9 + 0x2c) = uVar16;
    iVar9 = piVar5[0x25f];
    *(undefined4 *)(iVar9 + 0x28) = uVar17;
    *(undefined4 *)(iVar9 + 0x2c) = uVar13;
    iVar9 = piVar5[0x260];
    *(undefined4 *)(iVar9 + 0x28) = uVar12;
    *(undefined4 *)(iVar9 + 0x2c) = uVar18;
    func_0061DE9C((int)piVar5,piVar5[0x261],0);
    func_004C03B8((int)piVar5,puRam002826e8);
  }
  return piVar5;
}

