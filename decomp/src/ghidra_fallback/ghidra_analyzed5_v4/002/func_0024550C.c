#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_002E1BB4(undefined4 *param_1,undefined2 param_2);
extern int func_003673F4(undefined4 *param_1,int param_2);
extern int func_004356B4(int *param_1);
extern undefined4 func_004A7F00(int param_1,int param_2,uint param_3);
extern int func_004BC8D8(int param_1);
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern int func_004C173C(int *param_1,int param_2,undefined4 param_3);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_0054D964(int param_1,uint param_2);
extern int func_0061C0A4(int param_1,int param_2,undefined1 param_3);
extern int func_0061CDF8(undefined4 *param_1,uint *param_2,undefined4 param_3,undefined1 param_4, undefined4 *param_5);
extern undefined4 uRam00245b30;
extern int *piRam00245b34;
extern int DAT_00245994;
extern int *DAT_00245998;
extern undefined DAT_0024599c;
extern int DAT_002459ac;
extern undefined4 DAT_002459b0;
extern undefined4 *DAT_002459b4;
extern undefined *DAT_002459b8;
extern int DAT_002459bc;
extern undefined4 *DAT_00245b20;
extern undefined4 DAT_00245b24;
extern int DAT_00245b28;
extern int DAT_00245b2c;
extern char s_cState_EventEnd_002459e8[];
extern char s_cState_Event_002459d8[];
extern char s_cState_Hide_002459f8[];
extern char s_cState_LookAtPlayer_00245a18[];
extern char s_cState_SleepWait_00245a04[];
extern char s_cState_Wait_002459c0[];
extern char s_cState_Walk_002459cc[];

// USA 0024550C <- EU 0024550C (Ghidra, non-matching)
// GLOBAL DAT_00245994 int
// GLOBAL DAT_00245998 int *
// GLOBAL DAT_0024599c undefined
// GLOBAL DAT_002459ac int
// GLOBAL DAT_002459b0 undefined4
// GLOBAL DAT_002459b4 undefined4 *
// GLOBAL DAT_002459b8 undefined *
// GLOBAL DAT_002459bc int
// GLOBAL DAT_00245b20 undefined4 *
// GLOBAL DAT_00245b24 undefined4
// GLOBAL DAT_00245b28 int
// GLOBAL DAT_00245b2c int
// GLOBAL UNK_00245b30 undefined4
// GLOBAL UNK_00245b34 int *
// GLOBAL s_cState_EventEnd_002459e8 string
// GLOBAL s_cState_Event_002459d8 string
// GLOBAL s_cState_Hide_002459f8 string
// GLOBAL s_cState_LookAtPlayer_00245a18 string
// GLOBAL s_cState_SleepWait_00245a04 string
// GLOBAL s_cState_Wait_002459c0 string
// GLOBAL s_cState_Walk_002459cc string

int * func_0024550C(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  int *piVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar22;
  undefined8 uVar21;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define uStack_4c (*(uint *)(albw_frame + 0x4))
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
  piVar3 = (int *)func_0061CDF8(param_1,param_2,0,5,&local_40);
  iVar4 = DAT_00245994;
  piVar3[200] = DAT_00245994 + 0xb8;
  *piVar3 = iVar4;
  iVar4 = func_003673F4(piVar3 + 0x263,3);
  *(undefined4 *)(iVar4 + 0x38) = 3;
  *(undefined4 *)(iVar4 + 0x3c) = 0;
  *(undefined4 *)(iVar4 + 0x40) = 0;
  puVar5 = func_002E1BB4((undefined4 *)(iVar4 + 0x44),0);
  piVar3 = puVar5 + -0x274;
  *(undefined1 *)(puVar5 + 2) = 0;
  puVar6 = (undefined4 *)func_0010BAB4(0x48);
  puVar7 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar7 = func_004EDC9C(puVar6);
  }
  puVar5[3] = puVar7;
  piVar14 = puVar5 + 3;
  iVar4 = func_0054D964((int)piVar3,0);
  piVar2 = DAT_00245998;
  puVar5[4] = iVar4;
  iVar4 = DAT_002459ac;
  piVar15 = puVar5 + 4;
  if (*(char *)(*piVar2 + 0x25) == '\x02') {
    *(undefined1 *)((int)puVar5 + -0x6f9) = 1;
  }
  else {
    *(char *)((int)puVar5 + 9) = (char)*(undefined2 *)((int)puVar5 + -0x99e);
    local_44 = &DAT_0024599c;
    local_48 = iVar4;
    func_004C173C(piVar3,6,DAT_002459b0);
    *(undefined1 *)((int)puVar5 + -0x6a) = 7;
    puVar5[-0x17] = piVar3;
    iVar8 = func_0010BA78(0x70);
    puVar5[-0x16] = iVar8;
    puVar7 = DAT_002459b4;
    puVar5[-0x15] = iVar8 + (uint)*(byte *)((int)puVar5 + -0x6a) * 8;
    iVar10 = 7;
    puVar6 = (undefined4 *)(iVar8 + -8);
    do {
      uVar16 = puVar7[0x23];
      iVar10 = iVar10 + -1;
      puVar6[2] = puVar7[0x22];
      puVar6[3] = uVar16;
      uVar16 = puVar7[0x23];
      puVar6[4] = puVar7[0x22];
      puVar6[5] = uVar16;
      puVar6 = puVar6 + 4;
    } while (iVar10 != 0);
    bVar1 = *(byte *)((int)puVar5 + -0x6a);
    uVar13 = (uint)bVar1;
    puVar6 = (undefined4 *)func_0010BA78(uVar13 << 3);
    puVar5[-0x14] = puVar6;
    if (uVar13 != 0) {
      puVar9 = puVar6 + -2;
      if ((bVar1 & 1) != 0) {
        uVar16 = puVar7[5];
        *puVar6 = puVar7[4];
        puVar6[1] = uVar16;
        puVar9 = puVar6;
      }
      for (iVar8 = (int)uVar13 >> 1; iVar8 != 0; iVar8 = iVar8 + -1) {
        uVar16 = puVar7[5];
        puVar9[2] = puVar7[4];
        puVar9[3] = uVar16;
        uVar16 = puVar7[5];
        puVar9[4] = puVar7[4];
        puVar9[5] = uVar16;
        puVar9 = puVar9 + 4;
      }
    }
    puVar6 = (undefined4 *)func_0010CEE0(0x104,(int *)0x0,4);
    iVar8 = 0;
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = 0x24;
      puVar6[1] = 7;
      iVar8 = func_00100118((int)(puVar6 + 2),DAT_002459b8,0x24,7);
    }
    if (iVar8 != 0) {
      puVar5[-0x1a] = 7;
      puVar5[-0x19] = iVar8;
    }
    iVar8 = DAT_002459bc;
    puVar5[-0x19f] = puVar5 + -0x1c;
    *(undefined2 *)(iVar8 + (int)piVar3) = 7;
    local_44 = s_cState_Wait_002459c0;
    local_48 = iVar4;
    func_0010BEC4((int)(puVar5 + -0x1c),0,&local_48);
    puVar6 = (undefined4 *)puVar5[-0x16];
    uVar11 = puVar7[1];
    uVar16 = puVar7[2];
    uVar17 = puVar7[3];
    uVar22 = puVar7[4];
    uVar20 = puVar7[5];
    *puVar6 = *puVar7;
    puVar6[1] = uVar11;
    puVar6 = (undefined4 *)puVar5[-0x15];
    *puVar6 = uVar16;
    puVar6[1] = uVar17;
    puVar6 = (undefined4 *)puVar5[-0x14];
    *puVar6 = uVar22;
    puVar6[1] = uVar20;
    local_44 = s_cState_Walk_002459cc;
    local_48 = iVar4;
    func_0010BEC4((int)(puVar5 + -0x1c),1,&local_48);
    iVar8 = puVar5[-0x16];
    uVar17 = puVar7[7];
    uVar16 = puVar7[8];
    uVar11 = puVar7[9];
    *(undefined4 *)(iVar8 + 8) = puVar7[6];
    *(undefined4 *)(iVar8 + 0xc) = uVar17;
    iVar8 = puVar5[-0x15];
    *(undefined4 *)(iVar8 + 8) = uVar16;
    *(undefined4 *)(iVar8 + 0xc) = uVar11;
    iVar8 = puVar5[-0x14];
    *(undefined4 *)(iVar8 + 8) = uVar22;
    *(undefined4 *)(iVar8 + 0xc) = uVar20;
    local_44 = s_cState_Event_002459d8;
    local_48 = iVar4;
    func_0010BEC4((int)(puVar5 + -0x1c),2,&local_48);
    iVar8 = puVar5[-0x16];
    uVar16 = puVar7[0xb];
    uVar17 = puVar7[0xc];
    uVar11 = puVar7[0xd];
    *(undefined4 *)(iVar8 + 0x10) = puVar7[10];
    *(undefined4 *)(iVar8 + 0x14) = uVar16;
    iVar8 = puVar5[-0x15];
    *(undefined4 *)(iVar8 + 0x10) = uVar17;
    *(undefined4 *)(iVar8 + 0x14) = uVar11;
    iVar8 = puVar5[-0x14];
    *(undefined4 *)(iVar8 + 0x10) = uVar22;
    *(undefined4 *)(iVar8 + 0x14) = uVar20;
    local_44 = s_cState_EventEnd_002459e8;
    local_48 = iVar4;
    func_0010BEC4((int)(puVar5 + -0x1c),3,&local_48);
    iVar8 = puVar5[-0x16];
    uVar16 = puVar7[0xf];
    uVar20 = puVar7[0x10];
    uVar17 = puVar7[0x11];
    uVar22 = puVar7[0x12];
    uVar11 = puVar7[0x13];
    *(undefined4 *)(iVar8 + 0x18) = puVar7[0xe];
    *(undefined4 *)(iVar8 + 0x1c) = uVar16;
    iVar8 = puVar5[-0x15];
    *(undefined4 *)(iVar8 + 0x18) = uVar20;
    *(undefined4 *)(iVar8 + 0x1c) = uVar17;
    iVar8 = puVar5[-0x14];
    *(undefined4 *)(iVar8 + 0x18) = uVar22;
    *(undefined4 *)(iVar8 + 0x1c) = uVar11;
    local_44 = s_cState_Hide_002459f8;
    local_48 = iVar4;
    func_0010BEC4((int)(puVar5 + -0x1c),4,&local_48);
    iVar8 = puVar5[-0x16];
    uVar16 = puVar7[0x17];
    uVar11 = puVar7[0x16];
    uVar22 = puVar7[0x15];
    uVar17 = puVar7[0x18];
    uVar20 = puVar7[0x19];
    *(undefined4 *)(iVar8 + 0x20) = puVar7[0x14];
    *(undefined4 *)(iVar8 + 0x24) = uVar22;
    iVar8 = puVar5[-0x15];
    *(undefined4 *)(iVar8 + 0x20) = uVar11;
    *(undefined4 *)(iVar8 + 0x24) = uVar16;
    iVar8 = puVar5[-0x14];
    *(undefined4 *)(iVar8 + 0x20) = uVar17;
    *(undefined4 *)(iVar8 + 0x24) = uVar20;
    local_44 = s_cState_SleepWait_00245a04;
    local_48 = iVar4;
    func_0010BEC4((int)(puVar5 + -0x1c),5,&local_48);
    iVar8 = puVar5[-0x16];
    uVar16 = puVar7[0x1c];
    uVar11 = puVar7[0x1d];
    uVar17 = puVar7[0x1b];
    uVar21 = *(undefined8 *)(puVar7 + 4);
    *(undefined4 *)(iVar8 + 0x28) = puVar7[0x1a];
    *(undefined4 *)(iVar8 + 0x2c) = uVar17;
    iVar8 = puVar5[-0x15];
    *(undefined4 *)(iVar8 + 0x28) = uVar16;
    *(undefined4 *)(iVar8 + 0x2c) = uVar11;
    iVar8 = puVar5[-0x14];
    *(int *)(iVar8 + 0x28) = (int)uVar21;
    *(int *)(iVar8 + 0x2c) = (int)((ulonglong)uVar21 >> 0x20);
    local_44 = s_cState_LookAtPlayer_00245a18;
    local_48 = iVar4;
    func_0010BEC4((int)(puVar5 + -0x1c),6,&local_48);
    iVar4 = puVar5[-0x16];
    uVar16 = puVar7[0x1f];
    uVar17 = puVar7[0x20];
    uVar11 = puVar7[0x21];
    *(undefined4 *)(iVar4 + 0x30) = puVar7[0x1e];
    *(undefined4 *)(iVar4 + 0x34) = uVar16;
    iVar4 = puVar5[-0x15];
    *(undefined4 *)(iVar4 + 0x30) = uVar17;
    *(undefined4 *)(iVar4 + 0x34) = uVar11;
    iVar4 = puVar5[-0x14];
    *(int *)(iVar4 + 0x30) = (int)uVar21;
    *(int *)(iVar4 + 0x34) = (int)((ulonglong)uVar21 >> 0x20);
    if (*(char *)((int)puVar5 + 9) == '\x01') {
      func_0061C0A4((int)piVar3,5,0);
    }
    else {
      func_0061C0A4((int)piVar3,puVar5[-0x13],0);
    }
    func_004C03B8((int)piVar3,DAT_00245b20);
    iVar10 = DAT_00245b2c;
    iVar8 = DAT_00245b28;
    iVar4 = DAT_00245b28 << 2;
    iVar12 = DAT_00245b28 - DAT_00245b2c;
    puVar5[-0x46] = DAT_00245b24;
    puVar5[-0x26] = iVar8;
    puVar5[-0x25] = iVar4;
    puVar5[-0x24] = iVar10;
    puVar5[-0x23] = iVar12;
    func_004BC8D8((int)piVar3);
    fVar19 = ALBW_AS_F32(puVar5[-0x72]);
    fVar18 = ALBW_AS_F32(puVar5[-0x17f]);
    iVar4 = puVar5[4];
    uVar16 = puVar5[-0x17e];
    *(undefined4 *)(iVar4 + 4) = puVar5[-0x180];
    *(float *)(iVar4 + 8) = fVar18 + fVar19;
    *(undefined4 *)(iVar4 + 0xc) = uVar16;
    *(short *)(*piVar15 + 0x28) = (short)uRam00245b30;
    func_004356B4((int *)*piVar15);
    *(int *)(puVar5[3] + 0x18) = *piVar15;
    uStack_4c = puVar5[-0x1c1];
    func_004EDAD0(*piVar14,&uStack_4c);
    *(undefined2 *)(*piVar14 + 0x2c) = *(undefined2 *)(puVar5 + -0x25f);
    func_004A7F00(*piRam00245b34,*piVar14,3);
  }
  return piVar3;
}

