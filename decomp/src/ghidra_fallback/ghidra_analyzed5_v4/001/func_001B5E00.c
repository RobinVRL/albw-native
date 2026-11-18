#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010B3EC(undefined4 *param_1,int param_2,int param_3);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_002AF5FC(int param_1,undefined2 param_2,int param_3);
extern int func_002B1440(int param_1,int param_2,ushort param_3,undefined1 param_4);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F871C(int param_1,undefined4 param_2);
extern int func_004F8864(int param_1,undefined4 *param_2,uint param_3,float fparam_0);
extern int func_004FAC70(int param_1,uint param_2,int *param_3);
extern int func_004FACA4(int param_1,uint param_2,int *param_3);
extern int func_004FB30C(int param_1,int param_2);
extern int func_004FB344(int param_1,int param_2);
extern void func_004FB408(int param_1);
extern int func_004FB468(int param_1);
extern int func_004FB4C4(int param_1,float fparam_0);
extern int func_004FBA18(int param_1,undefined1 param_2,undefined1 param_3,int param_4,int param_5, undefined1 param_6,ushort param_7,float fparam_0,float fparam_1);
extern int func_004FC218(int param_1,char param_2,int param_3,ushort param_4);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern int func_00564A78(int param_1,int *param_2);
extern int func_00588BE4(int param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int func_0065B29C(undefined4 *param_1,undefined1 param_2);
extern undefined DAT_0000000f;
extern uint *DAT_001b6248;
extern int DAT_001b624c;
extern undefined4 DAT_001b6250;
extern undefined4 DAT_001b6254;
extern int DAT_001b6258;
extern undefined4 DAT_001b625c;
extern undefined4 DAT_001b6260;
extern undefined4 DAT_001b6264;
extern undefined4 DAT_001b6268;
extern undefined4 *DAT_001b626c;
extern int DAT_001b6270;
extern int *DAT_001b6274;
extern int *DAT_001b6278;
extern int DAT_001b6284;
extern uint DAT_001b6288;
extern undefined *DAT_001b666c;
extern int DAT_001b6670;
extern undefined4 *DAT_001b67e8;
extern float DAT_001b67ec;
extern undefined4 DAT_001b67f0;
extern float DAT_001b67f4;
extern float DAT_001b67f8;
extern undefined4 DAT_001b67fc;
extern undefined4 DAT_001b6800;
extern char s_cState_Appear_001b670c[];
extern char s_cState_CatchNpc_001b66d4[];
extern char s_cState_ChaseNpc_001b66c4[];
extern char s_cState_ChasePlayer_001b66a0[];
extern char s_cState_Die_001b66f4[];
extern char s_cState_FindNpc_001b66b4[];
extern char s_cState_FindPlayer_001b668c[];
extern char s_cState_Hide_001b6700[];
extern char s_cState_Reaction_001b66e4[];
extern char s_cState_Wait_001b6674[];
extern char s_cState_Walk_001b6680[];
extern char s_chest_001b628c[];
extern char s_head0_001b627c[];
extern char s_loc_catch_001b6294[];

// USA 001B5E00 <- EU 001B5E00 (Ghidra, non-matching)
// GLOBAL DAT_0000000f undefined
// GLOBAL DAT_001b6248 uint *
// GLOBAL DAT_001b624c int
// GLOBAL DAT_001b6250 undefined4
// GLOBAL DAT_001b6254 undefined4
// GLOBAL DAT_001b6258 int
// GLOBAL DAT_001b625c undefined4
// GLOBAL DAT_001b6260 undefined4
// GLOBAL DAT_001b6264 undefined4
// GLOBAL DAT_001b6268 undefined4
// GLOBAL DAT_001b626c undefined4 *
// GLOBAL DAT_001b6270 int
// GLOBAL DAT_001b6274 int *
// GLOBAL DAT_001b6278 int *
// GLOBAL DAT_001b6284 int
// GLOBAL DAT_001b6288 uint
// GLOBAL DAT_001b666c undefined *
// GLOBAL DAT_001b6670 int
// GLOBAL DAT_001b67e8 undefined4 *
// GLOBAL DAT_001b67ec float
// GLOBAL DAT_001b67f0 undefined4
// GLOBAL DAT_001b67f4 float
// GLOBAL DAT_001b67f8 float
// GLOBAL DAT_001b67fc undefined4
// GLOBAL DAT_001b6800 undefined4
// GLOBAL s_cState_Appear_001b670c string
// GLOBAL s_cState_CatchNpc_001b66d4 string
// GLOBAL s_cState_ChaseNpc_001b66c4 string
// GLOBAL s_cState_ChasePlayer_001b66a0 string
// GLOBAL s_cState_Die_001b66f4 string
// GLOBAL s_cState_FindNpc_001b66b4 string
// GLOBAL s_cState_FindPlayer_001b668c string
// GLOBAL s_cState_Hide_001b6700 string
// GLOBAL s_cState_Reaction_001b66e4 string
// GLOBAL s_cState_Wait_001b6674 string
// GLOBAL s_cState_Walk_001b6680 string
// GLOBAL s_chest_001b628c string
// GLOBAL s_head0_001b627c string
// GLOBAL s_loc_catch_001b6294 string

undefined4 * func_001B5E00(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  bool bVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  ushort uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float *pfVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined8 uVar22;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(char * *)(albw_frame + 0xc))
  piVar3 = func_004FD464(param_1,param_2,DAT_001b6248);
  iVar11 = DAT_001b624c;
  *piVar3 = DAT_001b624c;
  piVar3[200] = iVar11 + 0x84;
  puVar4 = func_0010A794(piVar3 + 0x22f);
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  uVar15 = DAT_001b6250;
  puVar5 = puVar4 + -0xc5;
  if (*(char *)(puVar4 + -0x9b) != '\0') {
    puVar5 = (undefined4 *)*puVar5;
  }
  puVar4[10] = puVar4 + -0x22f;
  if (*(char *)(puVar4 + -0x9b) == '\0') {
    puVar5 = (undefined4 *)0x0;
  }
  puVar4[9] = uVar15;
  puVar4[0xb] = puVar5;
  puVar4[0xc] = 0xffffffff;
  puVar4[0xe] = 0;
  puVar4[0xf] = 0;
  puVar4[0xd] = 0xffffffff;
  uVar15 = DAT_001b6254;
  puVar4[0x10] = 0;
  puVar4[0x11] = 0;
  iVar11 = DAT_001b6258;
  puVar4[0x12] = uVar15;
  puVar4[0x13] = 0;
  puVar4[0x14] = 0;
  uVar21 = DAT_001b6260;
  uVar12 = *(undefined4 *)(iVar11 + 8);
  uVar14 = *(undefined4 *)(iVar11 + 0xc);
  uVar22 = CONCAT44(DAT_001b6260,uVar15);
  puVar4[0x16] = puVar4 + -0x22f;
  puVar4[0x17] = uVar12;
  puVar4[0x18] = uVar14;
  uVar12 = DAT_001b625c;
  puVar4[0x15] = DAT_001b625c;
  uVar14 = *(undefined4 *)(iVar11 + 0x10);
  uVar20 = *(undefined4 *)(iVar11 + 0x14);
  puVar4[0x19] = uVar12;
  puVar4[0x1a] = puVar4 + -0x22f;
  puVar4[0x1b] = uVar14;
  puVar4[0x1c] = uVar20;
  puVar4[0x1d] = 0;
  puVar4[0x1e] = 0;
  puVar4[0x1f] = uVar15;
  puVar4[0x20] = 0;
  puVar4[0x21] = 0xffffffff;
  puVar4[0x22] = 0;
  puVar4[0x25] = uVar21;
  uVar12 = DAT_001b6268;
  puVar4[0x23] = DAT_001b6264;
  puVar4[0x24] = uVar12;
  puVar4[0x26] = 0;
  puVar4[0x29] = 0;
  puVar4[0x2a] = 0;
  puVar4[0x2b] = uVar15;
  puVar5 = DAT_001b626c;
  uVar15 = DAT_001b626c[1];
  uVar12 = DAT_001b626c[2];
  puVar4[0x2c] = *DAT_001b626c;
  puVar4[0x2d] = uVar15;
  puVar4[0x2e] = uVar12;
  uVar15 = *puVar5;
  pfVar16 = (float *)puVar5[1];
  puVar4[0x31] = puVar5[2];
  puVar4[0x2f] = uVar15;
  puVar4[0x30] = pfVar16;
  *(undefined1 *)(puVar4 + 0x32) = 0;
  *(undefined1 *)((int)puVar4 + 0xc9) = 0;
  *(undefined1 *)((int)puVar4 + 0xca) = 0;
  *(undefined1 *)((int)puVar4 + 0xcb) = 0;
  puVar4[0x33] = 0;
  puVar5 = puVar4 + 0x39;
  puVar4[0x34] = 0;
  puVar4[0x35] = 0;
  puVar4[0x36] = 0;
  puVar4[0x37] = 0;
  puVar4[0x38] = 0;
  if (puVar5 != (undefined4 *)0x0) {
    iVar17 = 0;
    iVar19 = 0xf;
    puVar4[0x37] = puVar5;
    do {
      iVar19 = iVar19 + -1;
      puVar5[iVar17] = puVar5 + iVar17 + 1;
      iVar17 = iVar17 + 1;
    } while (iVar19 != 0);
    pfVar16 = (float *)&DAT_0000000f;
    puVar4[0x48] = 0;
    puVar4[0x38] = puVar5;
    func_0010B3EC(puVar4 + 0x34,0x10,(int)(puVar4 + 0x49));
  }
  puVar5 = puVar4 + -0x22f;
  puVar4[-0x134] = puVar4 + 0x19;
  func_004F871C((int)puVar5,puVar4 + 0x15);
  func_004FB344((int)puVar5,0xc);
  iVar17 = DAT_001b6270;
  uVar18 = 0;
  do {
    func_004FACA4((int)puVar5,uVar18,(int *)(iVar17 + uVar18 * 8));
    uVar18 = uVar18 + 1;
  } while ((int)uVar18 < 0xc);
  func_004FB468((int)puVar5);
  func_004FB30C((int)puVar5,1);
  func_004FAC70((int)puVar5,0,DAT_001b6274);
  func_004FB408((int)puVar5);
  iVar17 = func_00588BE4((int)puVar5);
  if (iVar17 == *DAT_001b6278) {
    func_004FB4C4((int)puVar5,ALBW_AS_F32(((ulonglong)uVar22 >> 0x20)));
  }
  else {
    func_004FB4C4((int)puVar5,ALBW_AS_F32(uVar22));
  }
  iVar17 = DAT_001b6284;
  local_34 = s_head0_001b627c;
  local_38 = DAT_001b6284;
  uVar6 = func_00564A78(puVar4[-300],&local_38);
  uVar18 = DAT_001b6288;
  if (uVar6 != DAT_001b6288) {
    puVar4[0xc] = uVar6;
    puVar7 = (uint *)(*(int *)(*(int *)(puVar4[-300] + 0x24) + 0xc) + uVar6 * 0x40);
    *puVar7 = *puVar7 | 0x10;
    *(undefined4 **)(puVar4[-300] + 0x16c) = puVar4 + 9;
  }
  local_34 = s_chest_001b628c;
  local_38 = iVar17;
  uVar6 = func_00564A78(puVar4[-300],&local_38);
  if (uVar6 != uVar18) {
    puVar4[0xd] = uVar6;
    puVar7 = (uint *)(*(int *)(*(int *)(puVar4[-300] + 0x24) + 0xc) + uVar6 * 0x40);
    *puVar7 = *puVar7 | 0x10;
    *(undefined4 **)(puVar4[-300] + 0x16c) = puVar4 + 9;
  }
  local_34 = s_loc_catch_001b6294;
  local_38 = iVar17;
  uVar6 = func_00564A78(puVar4[-300],&local_38);
  if (uVar6 != uVar18) {
    puVar4[0x21] = uVar6;
  }
  func_004F5BD8((int)puVar5,(uint *)0x0,(int **)0x0,pfVar16);
  puVar4[5] = puVar5;
  *(undefined1 *)((int)puVar4 + 6) = 0xb;
  iVar19 = func_0010BA78(0xb0);
  puVar4[6] = iVar19;
  puVar4[7] = iVar19 + (uint)*(byte *)((int)puVar4 + 6) * 8;
  iVar10 = 0xb;
  puVar8 = (undefined4 *)(iVar19 + -8);
  do {
    uVar15 = *(undefined4 *)(iVar11 + 0xd4);
    iVar10 = iVar10 + -1;
    puVar8[2] = *(undefined4 *)(iVar11 + 0xd0);
    puVar8[3] = uVar15;
    uVar15 = *(undefined4 *)(iVar11 + 0xd4);
    puVar8[4] = *(undefined4 *)(iVar11 + 0xd0);
    puVar8[5] = uVar15;
    puVar8 = puVar8 + 4;
  } while (iVar10 != 0);
  bVar1 = *(byte *)((int)puVar4 + 6);
  uVar18 = (uint)bVar1;
  puVar8 = (undefined4 *)func_0010BA78(uVar18 << 3);
  puVar4[8] = puVar8;
  if (uVar18 != 0) {
    puVar9 = puVar8 + -2;
    if ((bVar1 & 1) != 0) {
      uVar15 = *(undefined4 *)(iVar11 + 0x2c);
      *puVar8 = *(undefined4 *)(iVar11 + 0x28);
      puVar8[1] = uVar15;
      puVar9 = puVar8;
    }
    for (iVar19 = (int)uVar18 >> 1; iVar19 != 0; iVar19 = iVar19 + -1) {
      uVar15 = *(undefined4 *)(iVar11 + 0x2c);
      puVar9[2] = *(undefined4 *)(iVar11 + 0x28);
      puVar9[3] = uVar15;
      uVar15 = *(undefined4 *)(iVar11 + 0x2c);
      puVar9[4] = *(undefined4 *)(iVar11 + 0x28);
      puVar9[5] = uVar15;
      puVar9 = puVar9 + 4;
    }
  }
  puVar8 = (undefined4 *)func_0010CEE0(0x194,(int *)0x0,4);
  iVar19 = 0;
  if (puVar8 != (undefined4 *)0x0) {
    *puVar8 = 0x24;
    puVar8[1] = 0xb;
    iVar19 = func_00100118((int)(puVar8 + 2),DAT_001b666c,0x24,0xb);
  }
  if (iVar19 != 0) {
    puVar4[3] = iVar19;
    puVar4[2] = 0xb;
  }
  iVar19 = DAT_001b6670;
  puVar4[-0x15a] = puVar4;
  *(undefined2 *)(iVar19 + (int)puVar5) = 0xb;
  local_34 = s_cState_Wait_001b6674;
  local_38 = iVar17;
  func_0010BEC4((int)puVar4,0,&local_38);
  puVar8 = (undefined4 *)puVar4[6];
  uVar15 = *(undefined4 *)(iVar11 + 0x1c);
  uVar12 = *(undefined4 *)(iVar11 + 0x20);
  uVar20 = *(undefined4 *)(iVar11 + 0x28);
  uVar21 = *(undefined4 *)(iVar11 + 0x24);
  uVar14 = *(undefined4 *)(iVar11 + 0x2c);
  *puVar8 = *(undefined4 *)(iVar11 + 0x18);
  puVar8[1] = uVar15;
  puVar8 = (undefined4 *)puVar4[7];
  *puVar8 = uVar12;
  puVar8[1] = uVar21;
  puVar8 = (undefined4 *)puVar4[8];
  *puVar8 = uVar20;
  puVar8[1] = uVar14;
  local_34 = s_cState_Walk_001b6680;
  local_38 = iVar17;
  func_0010BEC4((int)puVar4,1,&local_38);
  iVar19 = puVar4[6];
  uVar15 = *(undefined4 *)(iVar11 + 0x34);
  uVar12 = *(undefined4 *)(iVar11 + 0x38);
  uVar21 = *(undefined4 *)(iVar11 + 0x3c);
  *(undefined4 *)(iVar19 + 8) = *(undefined4 *)(iVar11 + 0x30);
  *(undefined4 *)(iVar19 + 0xc) = uVar15;
  iVar19 = puVar4[7];
  *(undefined4 *)(iVar19 + 8) = uVar12;
  *(undefined4 *)(iVar19 + 0xc) = uVar21;
  iVar19 = puVar4[8];
  *(undefined4 *)(iVar19 + 8) = uVar20;
  *(undefined4 *)(iVar19 + 0xc) = uVar14;
  local_34 = s_cState_FindPlayer_001b668c;
  local_38 = iVar17;
  func_0010BEC4((int)puVar4,2,&local_38);
  iVar19 = puVar4[6];
  uVar15 = *(undefined4 *)(iVar11 + 0x44);
  uVar12 = *(undefined4 *)(iVar11 + 0x48);
  uVar21 = *(undefined4 *)(iVar11 + 0x4c);
  *(undefined4 *)(iVar19 + 0x10) = *(undefined4 *)(iVar11 + 0x40);
  *(undefined4 *)(iVar19 + 0x14) = uVar15;
  iVar19 = puVar4[7];
  *(undefined4 *)(iVar19 + 0x10) = uVar12;
  *(undefined4 *)(iVar19 + 0x14) = uVar21;
  iVar19 = puVar4[8];
  *(undefined4 *)(iVar19 + 0x10) = uVar20;
  *(undefined4 *)(iVar19 + 0x14) = uVar14;
  local_34 = s_cState_ChasePlayer_001b66a0;
  local_38 = iVar17;
  func_0010BEC4((int)puVar4,3,&local_38);
  iVar19 = puVar4[6];
  uVar15 = *(undefined4 *)(iVar11 + 0x54);
  uVar12 = *(undefined4 *)(iVar11 + 0x58);
  uVar21 = *(undefined4 *)(iVar11 + 0x5c);
  *(undefined4 *)(iVar19 + 0x18) = *(undefined4 *)(iVar11 + 0x50);
  *(undefined4 *)(iVar19 + 0x1c) = uVar15;
  iVar19 = puVar4[7];
  *(undefined4 *)(iVar19 + 0x18) = uVar12;
  *(undefined4 *)(iVar19 + 0x1c) = uVar21;
  iVar19 = puVar4[8];
  *(undefined4 *)(iVar19 + 0x18) = uVar20;
  *(undefined4 *)(iVar19 + 0x1c) = uVar14;
  local_34 = s_cState_FindNpc_001b66b4;
  local_38 = iVar17;
  func_0010BEC4((int)puVar4,4,&local_38);
  iVar19 = puVar4[6];
  uVar15 = *(undefined4 *)(iVar11 + 100);
  uVar21 = *(undefined4 *)(iVar11 + 0x68);
  uVar12 = *(undefined4 *)(iVar11 + 0x6c);
  *(undefined4 *)(iVar19 + 0x20) = *(undefined4 *)(iVar11 + 0x60);
  *(undefined4 *)(iVar19 + 0x24) = uVar15;
  iVar19 = puVar4[7];
  *(undefined4 *)(iVar19 + 0x20) = uVar21;
  *(undefined4 *)(iVar19 + 0x24) = uVar12;
  iVar19 = puVar4[8];
  *(undefined4 *)(iVar19 + 0x20) = uVar20;
  *(undefined4 *)(iVar19 + 0x24) = uVar14;
  local_34 = s_cState_ChaseNpc_001b66c4;
  local_38 = iVar17;
  func_0010BEC4((int)puVar4,5,&local_38);
  iVar19 = puVar4[6];
  uVar12 = *(undefined4 *)(iVar11 + 0x74);
  uVar21 = *(undefined4 *)(iVar11 + 0x78);
  uVar15 = *(undefined4 *)(iVar11 + 0x7c);
  *(undefined4 *)(iVar19 + 0x28) = *(undefined4 *)(iVar11 + 0x70);
  *(undefined4 *)(iVar19 + 0x2c) = uVar12;
  iVar19 = puVar4[7];
  *(undefined4 *)(iVar19 + 0x28) = uVar21;
  *(undefined4 *)(iVar19 + 0x2c) = uVar15;
  iVar19 = puVar4[8];
  *(undefined4 *)(iVar19 + 0x28) = uVar20;
  *(undefined4 *)(iVar19 + 0x2c) = uVar14;
  local_34 = s_cState_CatchNpc_001b66d4;
  local_38 = iVar17;
  func_0010BEC4((int)puVar4,6,&local_38);
  iVar19 = puVar4[6];
  uVar15 = *(undefined4 *)(iVar11 + 0x84);
  uVar12 = *(undefined4 *)(iVar11 + 0x88);
  uVar21 = *(undefined4 *)(iVar11 + 0x8c);
  *(undefined4 *)(iVar19 + 0x30) = *(undefined4 *)(iVar11 + 0x80);
  *(undefined4 *)(iVar19 + 0x34) = uVar15;
  iVar19 = puVar4[7];
  *(undefined4 *)(iVar19 + 0x30) = uVar12;
  *(undefined4 *)(iVar19 + 0x34) = uVar21;
  iVar19 = puVar4[8];
  *(undefined4 *)(iVar19 + 0x30) = uVar20;
  *(undefined4 *)(iVar19 + 0x34) = uVar14;
  local_34 = s_cState_Reaction_001b66e4;
  local_38 = iVar17;
  func_0010BEC4((int)puVar4,7,&local_38);
  iVar19 = puVar4[6];
  uVar15 = *(undefined4 *)(iVar11 + 0x94);
  uVar12 = *(undefined4 *)(iVar11 + 0x98);
  uVar21 = *(undefined4 *)(iVar11 + 0x9c);
  *(undefined4 *)(iVar19 + 0x38) = *(undefined4 *)(iVar11 + 0x90);
  *(undefined4 *)(iVar19 + 0x3c) = uVar15;
  iVar19 = puVar4[7];
  *(undefined4 *)(iVar19 + 0x38) = uVar12;
  *(undefined4 *)(iVar19 + 0x3c) = uVar21;
  iVar19 = puVar4[8];
  *(undefined4 *)(iVar19 + 0x38) = uVar20;
  *(undefined4 *)(iVar19 + 0x3c) = uVar14;
  local_34 = s_cState_Die_001b66f4;
  local_38 = iVar17;
  func_0010BEC4((int)puVar4,8,&local_38);
  iVar19 = puVar4[6];
  uVar12 = *(undefined4 *)(iVar11 + 0xa4);
  uVar21 = *(undefined4 *)(iVar11 + 0xa8);
  uVar15 = *(undefined4 *)(iVar11 + 0xac);
  *(undefined4 *)(iVar19 + 0x40) = *(undefined4 *)(iVar11 + 0xa0);
  *(undefined4 *)(iVar19 + 0x44) = uVar12;
  iVar19 = puVar4[7];
  *(undefined4 *)(iVar19 + 0x40) = uVar21;
  *(undefined4 *)(iVar19 + 0x44) = uVar15;
  iVar19 = puVar4[8];
  *(undefined4 *)(iVar19 + 0x40) = uVar20;
  *(undefined4 *)(iVar19 + 0x44) = uVar14;
  local_34 = s_cState_Hide_001b6700;
  local_38 = iVar17;
  func_0010BEC4((int)puVar4,9,&local_38);
  iVar19 = puVar4[6];
  uVar21 = *(undefined4 *)(iVar11 + 0xb4);
  uVar15 = *(undefined4 *)(iVar11 + 0xb8);
  uVar12 = *(undefined4 *)(iVar11 + 0xbc);
  *(undefined4 *)(iVar19 + 0x48) = *(undefined4 *)(iVar11 + 0xb0);
  *(undefined4 *)(iVar19 + 0x4c) = uVar21;
  iVar19 = puVar4[7];
  *(undefined4 *)(iVar19 + 0x48) = uVar15;
  *(undefined4 *)(iVar19 + 0x4c) = uVar12;
  iVar19 = puVar4[8];
  *(undefined4 *)(iVar19 + 0x48) = uVar20;
  *(undefined4 *)(iVar19 + 0x4c) = uVar14;
  local_34 = s_cState_Appear_001b670c;
  local_38 = iVar17;
  func_0010BEC4((int)puVar4,10,&local_38);
  iVar17 = puVar4[6];
  uVar12 = *(undefined4 *)(iVar11 + 0xc4);
  uVar15 = *(undefined4 *)(iVar11 + 200);
  uVar21 = *(undefined4 *)(iVar11 + 0xcc);
  *(undefined4 *)(iVar17 + 0x50) = *(undefined4 *)(iVar11 + 0xc0);
  *(undefined4 *)(iVar17 + 0x54) = uVar12;
  iVar11 = puVar4[7];
  *(undefined4 *)(iVar11 + 0x50) = uVar15;
  *(undefined4 *)(iVar11 + 0x54) = uVar21;
  iVar11 = puVar4[8];
  *(undefined4 *)(iVar11 + 0x50) = uVar20;
  *(undefined4 *)(iVar11 + 0x54) = uVar14;
  if (*(short *)((int)puVar4 + -0x886) == 0) {
    puVar4[-200] = puVar4[-200] | 0x80000000;
    func_0065B29C(puVar4,0);
  }
  else {
    bVar2 = func_00588BF0((int)puVar5,0);
    if (bVar2) {
      *(undefined1 *)((int)puVar4 + -0x5e5) = 1;
      return puVar5;
    }
    func_0065B29C(puVar4,9);
  }
  puVar8 = DAT_001b67e8;
  puVar4[-200] = puVar4[-200] | 0x8000;
  func_004F8864((int)puVar5,puVar8,0,DAT_001b67ec);
  func_002AF5FC((int)puVar5,5,-1);
  uVar15 = DAT_001b67f0;
  *(undefined1 *)((int)puVar4 + -0x13f) = 6;
  *(undefined1 *)((int)puVar4 + -0x13e) = 0xff;
  *(undefined1 *)((int)puVar4 + -0x13d) = 0;
  uVar13 = (ushort)uVar15;
  func_004FC218((int)puVar5,'\a',-1,uVar13);
  func_004FBA18((int)puVar5,8,9,-1,0xc,0,uVar13,DAT_001b67f8,DAT_001b67f4);
  func_002B1440((int)puVar5,-1,uVar13,0);
  uVar15 = DAT_001b6800;
  puVar4[-0x143] = DAT_001b67fc;
  puVar4[-0x142] = uVar15;
  return puVar5;
}

