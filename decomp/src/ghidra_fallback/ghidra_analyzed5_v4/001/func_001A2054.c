#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00111A64(uint *param_1);
extern int func_00133870(int param_1,uint param_2,int param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_0019EF74(int param_1);
extern int func_001A13F8(int param_1);
extern int func_001DDCC4(int param_1,undefined1 param_2);
extern int func_002AFEC4(int param_1,int param_2,int param_3);
extern int func_002C41BC(int *param_1,undefined4 *param_2,int param_3);
extern int func_003529A0(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
extern int func_0036C884(undefined4 *param_1,undefined4 *param_2,undefined1 param_3);
extern int func_004FAC70(int param_1,uint param_2,int *param_3);
extern int func_004FACA4(int param_1,uint param_2,int *param_3);
extern int func_004FB30C(int param_1,int param_2);
extern int func_004FB344(int param_1,int param_2);
extern void func_004FB408(int param_1);
extern int func_004FB468(int param_1);
extern int func_004FC78C(int param_1,undefined2 param_2);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern int func_00521028(int param_1);
extern int func_00588BE4(int param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int func_0058A7D4(void);
extern int func_0065A330(undefined4 *param_1,undefined1 param_2);
extern uint *DAT_001a2538;
extern int DAT_001a253c;
extern int DAT_001a2540;
extern undefined4 DAT_001a2544;
extern undefined4 DAT_001a2548;
extern undefined *DAT_001a254c;
extern undefined *DAT_001a2550;
extern undefined *DAT_001a2554;
extern int DAT_001a2558;
extern undefined4 DAT_001a255c;
extern undefined4 DAT_001a2560;
extern undefined4 DAT_001a2564;
extern undefined4 DAT_001a2568;
extern undefined4 DAT_001a256c;
extern undefined4 DAT_001a2570;
extern undefined4 DAT_001a2574;
extern int DAT_001a2578;
extern int *DAT_001a257c;
extern undefined4 DAT_001a2580;
extern int *DAT_001a2584;
extern int DAT_001a2588;
extern int DAT_001a258c;
extern undefined4 DAT_001a2590;
extern int DAT_001a259c;
extern undefined4 DAT_001a25a0;
extern float DAT_001a25a4;
extern float DAT_001a25a8;
extern float DAT_001a25ac;
extern undefined *DAT_001a2a24;
extern int DAT_001a2a28;
extern int *DAT_001a2a8c;
extern int DAT_001a2a90;
extern char s_cState_Die_001a2a80[];
extern char s_cState_EventEnd_001a2a3c[];
extern char s_cState_Event_001a2a2c[];
extern char s_cState_Move_001a2a4c[];
extern char s_cState_Reaction_001a2a58[];
extern char s_cState_Roll_001a2a68[];
extern char s_cState_Stun_001a2a74[];
extern char s_eye01_001a2594[];

// USA 001A2054 <- EU 001A2054 (Ghidra, non-matching)
// GLOBAL DAT_001a2538 uint *
// GLOBAL DAT_001a253c int
// GLOBAL DAT_001a2540 int
// GLOBAL DAT_001a2544 undefined4
// GLOBAL DAT_001a2548 undefined4
// GLOBAL DAT_001a254c undefined *
// GLOBAL DAT_001a2550 undefined *
// GLOBAL DAT_001a2554 undefined *
// GLOBAL DAT_001a2558 int
// GLOBAL DAT_001a255c undefined4
// GLOBAL DAT_001a2560 undefined4
// GLOBAL DAT_001a2564 undefined4
// GLOBAL DAT_001a2568 undefined4
// GLOBAL DAT_001a256c undefined4
// GLOBAL DAT_001a2570 undefined4
// GLOBAL DAT_001a2574 undefined4
// GLOBAL DAT_001a2578 int
// GLOBAL DAT_001a257c int *
// GLOBAL DAT_001a2580 undefined4
// GLOBAL DAT_001a2584 int *
// GLOBAL DAT_001a2588 int
// GLOBAL DAT_001a258c int
// GLOBAL DAT_001a2590 undefined4
// GLOBAL DAT_001a259c int
// GLOBAL DAT_001a25a0 undefined4
// GLOBAL DAT_001a25a4 float
// GLOBAL DAT_001a25a8 float
// GLOBAL DAT_001a25ac float
// GLOBAL DAT_001a2a24 undefined *
// GLOBAL DAT_001a2a28 int
// GLOBAL DAT_001a2a8c int *
// GLOBAL DAT_001a2a90 int
// GLOBAL s_cState_Die_001a2a80 string
// GLOBAL s_cState_EventEnd_001a2a3c string
// GLOBAL s_cState_Event_001a2a2c string
// GLOBAL s_cState_Move_001a2a4c string
// GLOBAL s_cState_Reaction_001a2a58 string
// GLOBAL s_cState_Roll_001a2a68 string
// GLOBAL s_cState_Stun_001a2a74 string
// GLOBAL s_eye01_001a2594 string

undefined4 * func_001A2054(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  bool bVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  uint uVar15;
  undefined4 uVar16;
  uint uVar17;
  uint in_fpscr;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined8 uVar21;
  undefined4 uVar22;
  _Alignas(8) unsigned char albw_frame[0xf0];
  #define local_e8 ((uint *)(albw_frame + 0x8))
  #define local_e0 (*(undefined4 * *)(albw_frame + 0x10))
  #define local_dc (*(undefined4 *)(albw_frame + 0x14))
  #define local_d8 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_d4 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_d0 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_cc (*(undefined4 *)(albw_frame + 0x24))
  #define local_c8 (*(uint *)(albw_frame + 0x28))
  #define local_94 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_90 (*(undefined1 *)(albw_frame + 0x60))
  #define local_80 (*(int *)(albw_frame + 0x70))
  #define local_7c (*(char * *)(albw_frame + 0x74))
  #define auStack_78 ((undefined4 *)(albw_frame + 0x78))
  #define local_60 (*(undefined4 *)(albw_frame + 0x90))
  #define local_50 (*(int *)(albw_frame + 0xa0))
  #define local_4c (*(char * *)(albw_frame + 0xa4))
  piVar5 = func_004FD464(param_1,param_2,DAT_001a2538);
  iVar2 = DAT_001a2540;
  iVar7 = DAT_001a253c;
  piVar5[200] = DAT_001a253c + 0x84;
  *piVar5 = iVar7;
  piVar5[0x22f] = 0;
  piVar5[0x230] = 0;
  piVar5[0x231] = 0;
  uVar13 = *(undefined4 *)(iVar2 + 8);
  uVar16 = *(undefined4 *)(iVar2 + 0xc);
  puVar6 = func_0036C884(piVar5 + 0x232,piVar5,1);
  *puVar6 = DAT_001a2544;
  puVar6[0x40] = uVar13;
  puVar6[0x41] = uVar16;
  puVar6 = func_0010A794(puVar6 + 0x42);
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  uVar13 = *(undefined4 *)(iVar2 + 0x14);
  puVar6[0xb] = *(undefined4 *)(iVar2 + 0x10);
  puVar6[0xc] = uVar13;
  puVar6[9] = DAT_001a2548;
  puVar6[10] = puVar6 + -0x274;
  puVar3 = DAT_001a254c;
  *(undefined1 *)(puVar6 + 0xd) = 0;
  *(undefined1 *)((int)puVar6 + 0x35) = 0;
  puVar6[0xf] = 0;
  iVar7 = func_00100118((int)(puVar6 + 0x10),puVar3,0x48,4);
  *(undefined4 *)(iVar7 + 0x120) = 0xffffffff;
  iVar7 = func_00100118(iVar7 + 0x124,DAT_001a2550,0x10,100);
  *(undefined4 *)(iVar7 + 0x640) = 0;
  puVar6 = (undefined4 *)func_00100118(iVar7 + 0x644,DAT_001a2554,0xc,4);
  puVar6[0xf] = 0;
  puVar6[0x10] = 0;
  puVar6[0xc] = puVar6[-0x36a];
  puVar6[0xd] = puVar6[-0x369];
  puVar6[0xe] = puVar6[-0x368];
  uVar20 = DAT_001a2570;
  uVar16 = DAT_001a2564;
  uVar13 = DAT_001a255c;
  *(undefined4 *)((int)puVar6 + DAT_001a2558 + -0x1178) = 0;
  uVar19 = DAT_001a256c;
  puVar6[0x12] = uVar13;
  uVar21 = CONCAT44(uVar19,DAT_001a2568);
  puVar6[0x13] = puVar6[-0x364];
  uVar13 = DAT_001a2560;
  puVar6[0x15] = DAT_001a2560;
  puVar6[0x16] = uVar16;
  puVar6[0x14] = 0;
  puVar6[0x18] = uVar13;
  puVar6[0x19] = uVar16;
  puVar6[0x17] = 0;
  puVar6[0x1b] = uVar13;
  puVar6[0x1c] = uVar16;
  puVar6[0x1a] = 0;
  puVar6[0x1e] = uVar13;
  puVar6[0x1f] = uVar16;
  puVar6[0x1d] = 0;
  puVar6[0x21] = uVar13;
  puVar6[0x22] = uVar16;
  puVar6[0x20] = 0;
  puVar6[0x24] = uVar13;
  puVar6[0x25] = uVar16;
  puVar6[0x23] = 0;
  uVar13 = DAT_001a2574;
  puVar6[0x26] = uVar20;
  puVar6[0x27] = uVar19;
  puVar6[0x28] = uVar13;
  *(undefined1 *)(puVar6 + 0x29) = 0;
  *(undefined1 *)((int)puVar6 + 0xa5) = 0;
  *(undefined1 *)((int)puVar6 + 0xa6) = 0;
  *(undefined1 *)((int)puVar6 + 0xa7) = 0;
  *(undefined1 *)(puVar6 + 0x2a) = 0;
  *(undefined1 *)((int)puVar6 + 0xa9) = 0;
  *(undefined1 *)((int)puVar6 + 0xaa) = 0;
  puVar14 = puVar6 + -0x45e;
  *(bool *)((int)puVar6 + 0xab) = *(short *)((int)param_2 + 0x32) != 0;
  *(bool *)(puVar6 + 0x2b) = (short)param_2[0xd] != 0;
  *(bool *)((int)puVar6 + 0xad) = *(short *)((int)param_2 + 0x2a) != 0;
  iVar7 = DAT_001a2578;
  *(undefined1 *)((int)puVar6 + 0xae) = 1;
  puVar6[0x2c] = 0;
  puVar6[0x2d] = 0;
  *(undefined4 *)(iVar7 + (int)puVar14) = 0;
  *(undefined4 *)(iVar7 + 8 + (int)puVar14) = 0;
  piVar5 = DAT_001a257c;
  *(undefined1 *)(puVar6 + -0x1ef) = 1;
  func_001DDCC4(*piVar5,1);
  uVar13 = DAT_001a2580;
  puVar6[-0x325] = DAT_001a2580;
  puVar6[-0x324] = uVar13;
  puVar6[-0x323] = uVar13;
  iVar7 = func_00588BE4((int)puVar14);
  if (iVar7 == *DAT_001a2584) {
    puVar6[-0x325] = uVar13;
    puVar6[-0x324] = uVar13;
    puVar6[-0x323] = uVar13;
  }
  uVar13 = *(undefined4 *)(iVar2 + 0x18);
  uVar16 = *(undefined4 *)(iVar2 + 0x1c);
  puVar6[-0x1e0] = puVar14;
  puVar6[-0x1df] = uVar13;
  puVar6[-0x1de] = uVar16;
  puVar6[-0x363] = puVar6 + -0x1e1;
  func_004FB344((int)puVar14,7);
  iVar7 = DAT_001a2588;
  uVar15 = 0;
  do {
    func_004FACA4((int)puVar14,uVar15,(int *)(iVar7 + uVar15 * 8));
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 7);
  func_004FB468((int)puVar14);
  func_004FB30C((int)puVar14,2);
  iVar7 = DAT_001a258c;
  uVar15 = 0;
  do {
    func_004FAC70((int)puVar14,uVar15,(int *)(iVar7 + uVar15 * 8));
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 2);
  func_004FB408((int)puVar14);
  iVar7 = *(int *)(puVar6[-0x358] + 0x14);
  fVar18 = ALBW_AS_F32(((ulonglong)uVar21 >> 0x20));
  uVar15 = in_fpscr & 0xfffffff | (uint)(*(float *)(iVar7 + 8) == fVar18) << 0x1e;
  if (!SUB41(uVar15 >> 0x1e,0)) {
    *(float *)(iVar7 + 8) = fVar18;
    *(undefined1 *)(iVar7 + 0x26) = 1;
  }
  *(float *)(*(int *)(puVar6[-0x358] + 0x14) + 0x10) = fVar18;
  puVar8 = (undefined4 *)func_0010BAB4(0xa8);
  puVar9 = (undefined4 *)0x0;
  if (puVar8 != (undefined4 *)0x0) {
    puVar9 = func_0016A2FC(puVar8,1,DAT_001a2590,1);
  }
  iVar7 = DAT_001a259c;
  puVar6[-0x1db] = puVar9;
  local_4c = s_eye01_001a2594;
  local_50 = iVar7;
  piVar5 = puVar6 + -0x1db;
  func_00169608((uint *)puVar6[-0x1db],0,&local_50,puVar6[-0x326]);
  func_00133870(*piVar5,0,puVar6[-0x35b]);
  uVar17 = 0x1a2438;
  func_0016A02C(*piVar5,-1,(int *)0xffffffff,0);
  local_e8[1] = 3;
  uStack_d4 = (undefined4)uVar21;
  local_e0 = &local_dc;
  local_d8 = (undefined4)((ulonglong)uVar21 >> 0x20);
  local_94 = 10;
  local_90 = 0;
  local_dc = 0;
  local_e8[0] = 1;
  local_c8 = uVar17 | 0xff;
  uStack_d0 = DAT_001a25a0;
  uStack_cc = uStack_d4;
  func_0016898C(puVar6[-0x1db],local_e8);
  iVar10 = *(int *)(*piVar5 + 0x14);
  fVar18 = ALBW_AS_F32(((ulonglong)uVar21 >> 0x20));
  uVar15 = uVar15 & 0xfffffff | (uint)(*(float *)(iVar10 + 8) == fVar18) << 0x1e;
  if (!SUB41(uVar15 >> 0x1e,0)) {
    *(float *)(iVar10 + 8) = fVar18;
    *(undefined1 *)(iVar10 + 0x26) = 1;
  }
  *(int *)(*(int *)(puVar6[-0x1db] + 0x14) + 0x10) = (int)uVar21;
  puVar6[0x17] = 0;
  puVar11 = (uint *)func_0058A7D4();
  uVar17 = func_00111A64(puVar11);
  fVar18 = (float)VectorUnsignedToFloat(uVar17,(byte)(uVar15 >> 0x15) & 3);
  iVar10 = VectorFloatToUnsigned
                     (DAT_001a25ac + fVar18 * DAT_001a25a4 * ALBW_AS_F32(uVar21) * DAT_001a25a8,3);
  puVar6[0x1b] = iVar10;
  if (iVar10 == 0) {
    puVar6[0x1c] = (int)((ulonglong)uVar21 >> 0x20);
  }
  else {
    fVar18 = (float)VectorUnsignedToFloat(iVar10,(byte)(uVar15 >> 0x15) & 3);
    puVar6[0x1c] = ALBW_AS_U32(ALBW_AS_F32(uVar21) / fVar18);
  }
  puVar6[0x1a] = 0;
  puVar6[0x1d] = 0;
  puVar6[0x20] = 0;
  puVar6[0x23] = 0;
  puVar6[-0x2f7] = puVar6[-0x2f7] & 0xfdfff7ff;
  *(undefined1 *)((int)puVar6 + -0x8e3) = 5;
  func_002AFEC4((int)puVar14,-1,-1);
  func_0019EF74((int)puVar14);
  *(undefined1 *)((int)puVar6 + -0x7a2) = 7;
  puVar6[-0x1e5] = puVar14;
  iVar10 = func_0010BA78(0x70);
  puVar6[-0x1e4] = iVar10;
  puVar6[-0x1e3] = iVar10 + (uint)*(byte *)((int)puVar6 + -0x7a2) * 8;
  iVar12 = 7;
  puVar9 = (undefined4 *)(iVar10 + -8);
  do {
    uVar13 = *(undefined4 *)(iVar2 + 0xb4);
    iVar12 = iVar12 + -1;
    puVar9[2] = *(undefined4 *)(iVar2 + 0xb0);
    puVar9[3] = uVar13;
    uVar13 = *(undefined4 *)(iVar2 + 0xb4);
    puVar9[4] = *(undefined4 *)(iVar2 + 0xb0);
    puVar9[5] = uVar13;
    puVar9 = puVar9 + 4;
  } while (iVar12 != 0);
  bVar1 = *(byte *)((int)puVar6 + -0x7a2);
  uVar15 = (uint)bVar1;
  puVar9 = (undefined4 *)func_0010BA78(uVar15 << 3);
  puVar6[-0x1e2] = puVar9;
  if (uVar15 != 0) {
    puVar8 = puVar9 + -2;
    if ((bVar1 & 1) != 0) {
      uVar13 = *(undefined4 *)(iVar2 + 0x34);
      *puVar9 = *(undefined4 *)(iVar2 + 0x30);
      puVar9[1] = uVar13;
      puVar8 = puVar9;
    }
    for (iVar10 = (int)uVar15 >> 1; iVar10 != 0; iVar10 = iVar10 + -1) {
      uVar13 = *(undefined4 *)(iVar2 + 0x34);
      puVar8[2] = *(undefined4 *)(iVar2 + 0x30);
      puVar8[3] = uVar13;
      uVar13 = *(undefined4 *)(iVar2 + 0x34);
      puVar8[4] = *(undefined4 *)(iVar2 + 0x30);
      puVar8[5] = uVar13;
      puVar8 = puVar8 + 4;
    }
  }
  puVar9 = (undefined4 *)func_0010CEE0(0x104,(int *)0x0,4);
  iVar10 = 0;
  if (puVar9 != (undefined4 *)0x0) {
    *puVar9 = 0x24;
    puVar9[1] = 7;
    iVar10 = func_00100118((int)(puVar9 + 2),DAT_001a2a24,0x24,7);
  }
  if (iVar10 != 0) {
    puVar6[-0x1e8] = 7;
    puVar6[-0x1e7] = iVar10;
  }
  iVar10 = DAT_001a2a28;
  puVar6[-0x389] = puVar6 + -0x1ea;
  *(undefined2 *)(iVar10 + (int)puVar14) = 7;
  local_7c = s_cState_Event_001a2a2c;
  local_80 = iVar7;
  func_0010BEC4((int)(puVar6 + -0x1ea),0,&local_80);
  puVar9 = (undefined4 *)puVar6[-0x1e4];
  uVar22 = *(undefined4 *)(iVar2 + 0x30);
  uVar19 = *(undefined4 *)(iVar2 + 0x2c);
  uVar20 = *(undefined4 *)(iVar2 + 0x34);
  uVar13 = *(undefined4 *)(iVar2 + 0x24);
  uVar16 = *(undefined4 *)(iVar2 + 0x28);
  *puVar9 = *(undefined4 *)(iVar2 + 0x20);
  puVar9[1] = uVar13;
  puVar9 = (undefined4 *)puVar6[-0x1e3];
  *puVar9 = uVar16;
  puVar9[1] = uVar19;
  puVar9 = (undefined4 *)puVar6[-0x1e2];
  *puVar9 = uVar22;
  puVar9[1] = uVar20;
  local_7c = s_cState_EventEnd_001a2a3c;
  local_80 = iVar7;
  func_0010BEC4((int)(puVar6 + -0x1ea),1,&local_80);
  iVar10 = puVar6[-0x1e4];
  uVar13 = *(undefined4 *)(iVar2 + 0x3c);
  uVar16 = *(undefined4 *)(iVar2 + 0x40);
  uVar19 = *(undefined4 *)(iVar2 + 0x44);
  *(undefined4 *)(iVar10 + 8) = *(undefined4 *)(iVar2 + 0x38);
  *(undefined4 *)(iVar10 + 0xc) = uVar13;
  iVar10 = puVar6[-0x1e3];
  *(undefined4 *)(iVar10 + 8) = uVar16;
  *(undefined4 *)(iVar10 + 0xc) = uVar19;
  iVar10 = puVar6[-0x1e2];
  *(undefined4 *)(iVar10 + 8) = uVar22;
  *(undefined4 *)(iVar10 + 0xc) = uVar20;
  local_7c = s_cState_Move_001a2a4c;
  local_80 = iVar7;
  func_0010BEC4((int)(puVar6 + -0x1ea),2,&local_80);
  iVar10 = puVar6[-0x1e4];
  uVar19 = *(undefined4 *)(iVar2 + 0x4c);
  uVar13 = *(undefined4 *)(iVar2 + 0x50);
  uVar16 = *(undefined4 *)(iVar2 + 0x54);
  *(undefined4 *)(iVar10 + 0x10) = *(undefined4 *)(iVar2 + 0x48);
  *(undefined4 *)(iVar10 + 0x14) = uVar19;
  iVar10 = puVar6[-0x1e3];
  *(undefined4 *)(iVar10 + 0x10) = uVar13;
  *(undefined4 *)(iVar10 + 0x14) = uVar16;
  iVar10 = puVar6[-0x1e2];
  *(undefined4 *)(iVar10 + 0x10) = uVar22;
  *(undefined4 *)(iVar10 + 0x14) = uVar20;
  local_7c = s_cState_Reaction_001a2a58;
  local_80 = iVar7;
  func_0010BEC4((int)(puVar6 + -0x1ea),3,&local_80);
  iVar10 = puVar6[-0x1e4];
  uVar13 = *(undefined4 *)(iVar2 + 0x5c);
  uVar16 = *(undefined4 *)(iVar2 + 0x60);
  uVar19 = *(undefined4 *)(iVar2 + 100);
  *(undefined4 *)(iVar10 + 0x18) = *(undefined4 *)(iVar2 + 0x58);
  *(undefined4 *)(iVar10 + 0x1c) = uVar13;
  iVar10 = puVar6[-0x1e3];
  *(undefined4 *)(iVar10 + 0x18) = uVar16;
  *(undefined4 *)(iVar10 + 0x1c) = uVar19;
  iVar10 = puVar6[-0x1e2];
  *(undefined4 *)(iVar10 + 0x18) = uVar22;
  *(undefined4 *)(iVar10 + 0x1c) = uVar20;
  local_7c = s_cState_Roll_001a2a68;
  local_80 = iVar7;
  func_0010BEC4((int)(puVar6 + -0x1ea),4,&local_80);
  iVar10 = puVar6[-0x1e4];
  uVar13 = *(undefined4 *)(iVar2 + 0x6c);
  uVar16 = *(undefined4 *)(iVar2 + 0x70);
  uVar19 = *(undefined4 *)(iVar2 + 0x74);
  *(undefined4 *)(iVar10 + 0x20) = *(undefined4 *)(iVar2 + 0x68);
  *(undefined4 *)(iVar10 + 0x24) = uVar13;
  iVar10 = puVar6[-0x1e3];
  *(undefined4 *)(iVar10 + 0x20) = uVar16;
  *(undefined4 *)(iVar10 + 0x24) = uVar19;
  iVar10 = puVar6[-0x1e2];
  *(undefined4 *)(iVar10 + 0x20) = uVar22;
  *(undefined4 *)(iVar10 + 0x24) = uVar20;
  local_7c = s_cState_Stun_001a2a74;
  local_80 = iVar7;
  func_0010BEC4((int)(puVar6 + -0x1ea),5,&local_80);
  iVar10 = puVar6[-0x1e4];
  uVar13 = *(undefined4 *)(iVar2 + 0x7c);
  uVar16 = *(undefined4 *)(iVar2 + 0x80);
  uVar19 = *(undefined4 *)(iVar2 + 0x84);
  *(undefined4 *)(iVar10 + 0x28) = *(undefined4 *)(iVar2 + 0x78);
  *(undefined4 *)(iVar10 + 0x2c) = uVar13;
  iVar10 = puVar6[-0x1e3];
  *(undefined4 *)(iVar10 + 0x28) = uVar16;
  *(undefined4 *)(iVar10 + 0x2c) = uVar19;
  iVar10 = puVar6[-0x1e2];
  *(undefined4 *)(iVar10 + 0x28) = uVar22;
  *(undefined4 *)(iVar10 + 0x2c) = uVar20;
  local_7c = s_cState_Die_001a2a80;
  local_80 = iVar7;
  func_0010BEC4((int)(puVar6 + -0x1ea),6,&local_80);
  iVar7 = puVar6[-0x1e4];
  uVar16 = *(undefined4 *)(iVar2 + 0x8c);
  uVar13 = *(undefined4 *)(iVar2 + 0x90);
  uVar19 = *(undefined4 *)(iVar2 + 0x94);
  *(undefined4 *)(iVar7 + 0x30) = *(undefined4 *)(iVar2 + 0x88);
  *(undefined4 *)(iVar7 + 0x34) = uVar16;
  iVar7 = puVar6[-0x1e3];
  *(undefined4 *)(iVar7 + 0x30) = uVar13;
  *(undefined4 *)(iVar7 + 0x34) = uVar19;
  iVar7 = puVar6[-0x1e2];
  *(undefined4 *)(iVar7 + 0x30) = uVar22;
  *(undefined4 *)(iVar7 + 0x34) = uVar20;
  piVar5 = (int *)func_00521028((int)puVar14);
  (**(code **)(*piVar5 + 8))(piVar5);
  func_003529A0(auStack_78,piVar5[1],puVar6 + -0x396);
  local_60 = 0;
  func_002C41BC(puVar6 + -0x396,auStack_78,(int)puVar14);
  puVar9 = puVar6 + -0x36a;
  *puVar6 = *puVar9;
  puVar6[1] = puVar6[-0x369];
  puVar6[2] = puVar6[-0x368];
  puVar6[3] = *puVar9;
  puVar6[4] = puVar6[-0x369];
  puVar6[5] = puVar6[-0x368];
  puVar6[6] = *puVar9;
  puVar6[7] = puVar6[-0x369];
  puVar6[8] = puVar6[-0x368];
  puVar6[0xb] = puVar6[-0x368];
  puVar6[9] = *puVar9;
  puVar6[10] = puVar6[-0x369];
  *(undefined1 *)(puVar6 + -0x24c) = 1;
  puVar6[-0x2f7] = puVar6[-0x2f7] & 0xfff7ffdf;
  func_004FC78C((int)puVar14,(short)**(undefined4 **)(*DAT_001a2a8c + 0x3dbe8));
  if (*(short *)(DAT_001a2a90 + (int)puVar14) < 1) {
    func_004FC78C((int)puVar14,*(undefined2 *)(puVar6[-0x376] + 2));
  }
  else {
    func_001A13F8((int)puVar14);
  }
  *(undefined2 *)(puVar6[-0x352] + 0x28) = 0xe0;
  if ((*(char *)((int)puVar6 + 0xab) == '\0') || (bVar4 = func_00588BF0((int)puVar14,0), bVar4)) {
    func_0065A330(puVar6 + -0x1ea,2);
  }
  else {
    func_0065A330(puVar6 + -0x1ea,0);
  }
  iVar7 = puVar6[-0x355];
  if (iVar7 != 0) {
    *(uint *)(iVar7 + 0x2c) = *(uint *)(iVar7 + 0x2c) | 0x140000;
  }
  return puVar14;
}

