#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern int func_001512E8(int *param_1);
extern int func_002AFEC4(int param_1,int param_2,int param_3);
extern int func_004356B4(int *param_1);
extern int func_004EE484(undefined4 *param_1);
extern int func_004F87F8(int param_1,int param_2);
extern int func_004FACA4(int param_1,uint param_2,int *param_3);
extern int func_004FB024(int param_1);
extern int func_004FB344(int param_1,int param_2);
extern int func_004FB468(int param_1);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern int func_0054D89C(int param_1,uint param_2);
extern int func_0054D964(int param_1,uint param_2);
extern int func_0054DDF4(int param_1,uint param_2);
extern int func_00564A78(int param_1,int *param_2);
extern int func_00661FE4(undefined4 *param_1,undefined1 param_2);
extern uint *DAT_002a1d7c;
extern int DAT_002a1d80;
extern int DAT_002a1d84;
extern int DAT_002a1d88;
extern int DAT_002a1d8c;
extern int DAT_002a1d90;
extern uint DAT_002a1d94;
extern int DAT_002a1d98;
extern int DAT_002a1d9c;
extern undefined4 *DAT_002a1da0;
extern undefined DAT_002a1da4;
extern uint DAT_002a1db0;
extern undefined DAT_002a1dcc;
extern undefined *DAT_002a21dc;
extern int DAT_002a21e0;
extern char s__chase_002a1da7[];
extern char s_cState_AirWait_002a220c[];
extern char s_cState_Appear_002a21f0[];
extern char s_cState_AttackEnd_002a2270[];
extern char s_cState_Attack_002a2260[];
extern char s_cState_Die_002a2284[];
extern char s_cState_Disappear_002a224c[];
extern char s_cState_Fall_002a222c[];
extern char s_cState_Hide_002a21e4[];
extern char s_cState_LookAround_002a2238[];
extern char s_cState_Reaction_002a221c[];
extern char s_cState_Wait_002a2200[];
extern char s_catch_002a1dc4[];
extern char s_center_002a1ddc[];
extern char s_return_002a1dd4[];
extern char s_slap_ed_002a1dbc[];
extern char s_slap_st_002a1db4[];
extern undefined4 _DAT_002a1da4;

// USA 002A19B0 <- EU 002A198C (Ghidra, non-matching)
// GLOBAL DAT_002a1d7c uint *
// GLOBAL DAT_002a1d80 int
// GLOBAL DAT_002a1d84 int
// GLOBAL DAT_002a1d88 int
// GLOBAL DAT_002a1d8c int
// GLOBAL DAT_002a1d90 int
// GLOBAL DAT_002a1d94 uint
// GLOBAL DAT_002a1d98 int
// GLOBAL DAT_002a1d9c int
// GLOBAL DAT_002a1da0 undefined4 *
// GLOBAL DAT_002a1da4 undefined
// GLOBAL DAT_002a1db0 uint
// GLOBAL DAT_002a1dcc undefined
// GLOBAL DAT_002a21dc undefined *
// GLOBAL DAT_002a21e0 int
// GLOBAL s_cState_AirWait_002a220c string
// GLOBAL s_cState_Appear_002a21f0 string
// GLOBAL s_cState_AttackEnd_002a2270 string
// GLOBAL s_cState_Attack_002a2260 string
// GLOBAL s_cState_Die_002a2284 string
// GLOBAL s_cState_Disappear_002a224c string
// GLOBAL s_cState_Fall_002a222c string
// GLOBAL s_cState_Hide_002a21e4 string
// GLOBAL s_cState_LookAround_002a2238 string
// GLOBAL s_cState_Reaction_002a221c string
// GLOBAL s_cState_Wait_002a2200 string
// GLOBAL s_catch_002a1dc4 string
// GLOBAL s_center_002a1ddc string
// GLOBAL s_return_002a1dd4 string
// GLOBAL s_slap_ed_002a1dbc string
// GLOBAL s_slap_st_002a1db4 string

/* WARNING: Variable defined which should be unmapped: objStack_48 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * func_002A19B0(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define objStack_48 ((uint *)(albw_frame + 0x8))
  #define local_3c (*(uint *)(albw_frame + 0x14))
  #define local_38 (*(uint *)(albw_frame + 0x18))
  #define local_34 (*(char * *)(albw_frame + 0x1c))
  piVar5 = func_004FD464(param_1,param_2,DAT_002a1d7c);
  iVar11 = DAT_002a1d84;
  iVar9 = DAT_002a1d80 + 0x84;
  *piVar5 = DAT_002a1d80;
  piVar5[200] = iVar9;
  piVar5[0x22f] = 0;
  piVar5[0x230] = 0;
  iVar9 = DAT_002a1d88;
  piVar5[0x231] = iVar11;
  piVar5[0x232] = iVar9;
  piVar5[0x233] = iVar9;
  piVar5[0x234] = iVar9;
  iVar11 = DAT_002a1d8c;
  piVar5[0x235] = 0;
  piVar5[0x236] = 0;
  piVar5[0x237] = 0;
  iVar12 = *(int *)(iVar11 + 4);
  iVar13 = *(int *)(iVar11 + 8);
  piVar5[0x239] = (int)piVar5;
  piVar5[0x23a] = iVar12;
  piVar5[0x23b] = iVar13;
  iVar13 = DAT_002a1d98;
  uVar2 = DAT_002a1d94;
  iVar12 = DAT_002a1d90;
  piVar5[0x238] = DAT_002a1d90;
  piVar5[0x23d] = iVar9;
  piVar5[0x23e] = iVar9;
  piVar5[0x240] = iVar9;
  iVar3 = DAT_002a1d9c;
  piVar5[0x241] = piVar5[3];
  *(undefined2 *)(iVar13 + (int)piVar5) = 0;
  piVar5[0x243] = uVar2;
  piVar5[0x245] = uVar2;
  piVar5[0x246] = iVar3;
  piVar5[0x244] = 0;
  piVar5[0x248] = uVar2;
  piVar5[0x249] = iVar3;
  piVar5[0x247] = 0;
  piVar5[0x24b] = uVar2;
  piVar5[0x24c] = iVar3;
  piVar5[0x24a] = 0;
  piVar5[0x24d] = 0;
  puVar6 = func_0010A794(piVar5 + 0x24e);
  puVar6[5] = 0;
  puVar14 = DAT_002a1da0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  uVar15 = puVar14[1];
  uVar16 = puVar14[2];
  puVar6[10] = *puVar14;
  puVar6[0xb] = uVar15;
  puVar6[0xc] = uVar16;
  uVar15 = puVar14[1];
  uVar16 = *puVar14;
  puVar6[0xf] = puVar14[2];
  puVar6[0xe] = uVar15;
  puVar6[0xd] = uVar16;
  uVar15 = *(undefined4 *)(iVar11 + 0xc);
  uVar16 = *(undefined4 *)(iVar11 + 0x10);
  puVar6[0x10] = iVar12;
  puVar6[0x11] = puVar6 + -0x24e;
  puVar6[0x12] = uVar15;
  puVar6[0x13] = uVar16;
  *(undefined1 *)(puVar6 + 0x14) = 0;
  *(undefined1 *)((int)puVar6 + 0x51) = 0;
  puVar14 = puVar6 + -0x24e;
  puVar6[-0x153] = puVar6 + 0x10;
  piVar5 = (int *)func_0054D89C((int)puVar14,0);
  puVar6[9] = piVar5;
  if (piVar5 != (int *)0x0) {
    func_001512E8(piVar5);
  }
  *(uint *)(puVar6[-0x145] + 0x2c) = *(uint *)(puVar6[-0x145] + 0x2c) | 2;
  puVar7 = (undefined4 *)func_0010BAB4(100);
  uVar15 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    uVar15 = func_004EE484(puVar7);
  }
  puVar6[-0x19] = uVar15;
  iVar12 = func_0054D964((int)puVar14,1);
  puVar6[-0x18] = iVar12;
  piVar5 = puVar6 + -0x18;
  iVar12 = func_0054DDF4((int)puVar14,1);
  puVar6[-0x17] = iVar12;
  uVar15 = _DAT_002a1da4;
  puVar6[-0x1c] = iVar9;
  puVar6[-0x1b] = uVar15;
  puVar6[-0x1a] = iVar9;
  func_004356B4((int *)*piVar5);
  local_3c = puVar6[-0x19b];
  objStack_48[1] = (uint)(puVar6 + -0x16);
  objStack_48[0] = (uint)*(short *)(puVar6 + -0x239);
  objStack_48[2] = uVar2;
  (*(undefined2 *)((char *)&objStack_48[2] + 0)) = (undefined2)uVar2;
  uVar4 = (undefined2)objStack_48[2];
  objStack_48[2] = uVar2;
  func_0014EB8C(puVar6[-0x19],*piVar5,(undefined2 *)puVar6[-0x17],&local_3c,
                *(short *)(puVar6 + -0x239),objStack_48[1],uVar4);
  *(uint *)(*piVar5 + 0x2c) = *(uint *)(*piVar5 + 0x2c) | 8;
  *(undefined1 *)(puVar6[-0x19] + 0x61) = 0;
  func_004FB024((int)puVar14);
  func_004FB344((int)puVar14,6);
  uVar2 = DAT_002a1db0;
  objStack_48[1] = (int)s__chase_002a1da7 + 1;
  objStack_48[0] = DAT_002a1db0;
  func_004FACA4((int)puVar14,0,(int *)objStack_48);
  objStack_48[1] = (uint)s_slap_st_002a1db4;
  objStack_48[0] = uVar2;
  func_004FACA4((int)puVar14,1,(int *)objStack_48);
  objStack_48[1] = (uint)s_slap_ed_002a1dbc;
  objStack_48[0] = uVar2;
  func_004FACA4((int)puVar14,2,(int *)objStack_48);
  objStack_48[1] = (uint)s_catch_002a1dc4;
  objStack_48[0] = uVar2;
  func_004FACA4((int)puVar14,3,(int *)objStack_48);
  objStack_48[1] = (uint)&DAT_002a1dcc;
  objStack_48[0] = uVar2;
  func_004FACA4((int)puVar14,4,(int *)objStack_48);
  objStack_48[1] = (uint)s_return_002a1dd4;
  objStack_48[0] = uVar2;
  func_004FACA4((int)puVar14,5,(int *)objStack_48);
  func_004FB468((int)puVar14);
  local_34 = s_center_002a1ddc;
  local_38 = uVar2;
  uVar8 = func_00564A78(puVar6[-0x14b],(int *)&local_38);
  puVar6[-0xb] = uVar8;
  *(undefined1 *)((int)puVar6 + 6) = 0xb;
  puVar6[5] = puVar14;
  iVar9 = func_0010BA78(0xb0);
  puVar6[6] = iVar9;
  puVar6[7] = iVar9 + (uint)*(byte *)((int)puVar6 + 6) * 8;
  iVar12 = 0xb;
  puVar7 = (undefined4 *)(iVar9 + -8);
  do {
    uVar15 = *(undefined4 *)(iVar11 + 0xd8);
    iVar12 = iVar12 + -1;
    puVar7[2] = *(undefined4 *)(iVar11 + 0xd4);
    puVar7[3] = uVar15;
    uVar15 = *(undefined4 *)(iVar11 + 0xd8);
    puVar7[4] = *(undefined4 *)(iVar11 + 0xd4);
    puVar7[5] = uVar15;
    puVar7 = puVar7 + 4;
  } while (iVar12 != 0);
  bVar1 = *(byte *)((int)puVar6 + 6);
  uVar8 = (uint)bVar1;
  puVar7 = (undefined4 *)func_0010BA78(uVar8 << 3);
  puVar6[8] = puVar7;
  if (uVar8 != 0) {
    puVar10 = puVar7 + -2;
    if ((bVar1 & 1) != 0) {
      uVar15 = *(undefined4 *)(iVar11 + 0x28);
      *puVar7 = *(undefined4 *)(iVar11 + 0x24);
      puVar7[1] = uVar15;
      puVar10 = puVar7;
    }
    for (iVar9 = (int)uVar8 >> 1; iVar9 != 0; iVar9 = iVar9 + -1) {
      uVar15 = *(undefined4 *)(iVar11 + 0x28);
      puVar10[2] = *(undefined4 *)(iVar11 + 0x24);
      puVar10[3] = uVar15;
      uVar15 = *(undefined4 *)(iVar11 + 0x28);
      puVar10[4] = *(undefined4 *)(iVar11 + 0x24);
      puVar10[5] = uVar15;
      puVar10 = puVar10 + 4;
    }
  }
  puVar7 = (undefined4 *)func_0010CEE0(0x194,(int *)0x0,4);
  iVar9 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0x24;
    puVar7[1] = 0xb;
    iVar9 = func_00100118((int)(puVar7 + 2),DAT_002a21dc,0x24,0xb);
  }
  if (iVar9 != 0) {
    puVar6[3] = iVar9;
    puVar6[2] = 0xb;
  }
  iVar9 = DAT_002a21e0;
  puVar6[-0x179] = puVar6;
  *(undefined2 *)(iVar9 + (int)puVar14) = 0xb;
  local_34 = s_cState_Hide_002a21e4;
  local_38 = uVar2;
  func_0010BEC4((int)puVar6,0,(int *)&local_38);
  puVar7 = (undefined4 *)puVar6[6];
  uVar16 = *(undefined4 *)(iVar11 + 0x18);
  uVar15 = *(undefined4 *)(iVar11 + 0x1c);
  uVar17 = *(undefined4 *)(iVar11 + 0x20);
  uVar20 = *(undefined8 *)(iVar11 + 0x24);
  *puVar7 = *(undefined4 *)(iVar11 + 0x14);
  puVar7[1] = uVar16;
  puVar7 = (undefined4 *)puVar6[7];
  *puVar7 = uVar15;
  puVar7[1] = uVar17;
  puVar7 = (undefined4 *)puVar6[8];
  *puVar7 = (int)uVar20;
  puVar7[1] = (int)((ulonglong)uVar20 >> 0x20);
  local_34 = s_cState_Appear_002a21f0;
  local_38 = uVar2;
  func_0010BEC4((int)puVar6,1,(int *)&local_38);
  iVar9 = puVar6[6];
  uVar15 = *(undefined4 *)(iVar11 + 0x30);
  uVar16 = *(undefined4 *)(iVar11 + 0x34);
  uVar17 = *(undefined4 *)(iVar11 + 0x38);
  *(undefined4 *)(iVar9 + 8) = *(undefined4 *)(iVar11 + 0x2c);
  *(undefined4 *)(iVar9 + 0xc) = uVar15;
  iVar9 = puVar6[7];
  *(undefined4 *)(iVar9 + 8) = uVar16;
  *(undefined4 *)(iVar9 + 0xc) = uVar17;
  iVar9 = puVar6[8];
  *(int *)(iVar9 + 8) = (int)uVar20;
  *(int *)(iVar9 + 0xc) = (int)((ulonglong)uVar20 >> 0x20);
  local_34 = s_cState_Wait_002a2200;
  local_38 = uVar2;
  func_0010BEC4((int)puVar6,2,(int *)&local_38);
  iVar9 = puVar6[6];
  uVar17 = *(undefined4 *)(iVar11 + 0x40);
  uVar15 = *(undefined4 *)(iVar11 + 0x44);
  uVar16 = *(undefined4 *)(iVar11 + 0x48);
  *(undefined4 *)(iVar9 + 0x10) = *(undefined4 *)(iVar11 + 0x3c);
  *(undefined4 *)(iVar9 + 0x14) = uVar17;
  iVar9 = puVar6[7];
  *(undefined4 *)(iVar9 + 0x10) = uVar15;
  *(undefined4 *)(iVar9 + 0x14) = uVar16;
  iVar9 = puVar6[8];
  *(int *)(iVar9 + 0x10) = (int)uVar20;
  *(int *)(iVar9 + 0x14) = (int)((ulonglong)uVar20 >> 0x20);
  local_34 = s_cState_AirWait_002a220c;
  local_38 = uVar2;
  func_0010BEC4((int)puVar6,3,(int *)&local_38);
  iVar9 = puVar6[6];
  uVar15 = *(undefined4 *)(iVar11 + 0x54);
  uVar17 = *(undefined4 *)(iVar11 + 0x58);
  uVar16 = *(undefined4 *)(iVar11 + 0x50);
  *(undefined4 *)(iVar9 + 0x18) = *(undefined4 *)(iVar11 + 0x4c);
  *(undefined4 *)(iVar9 + 0x1c) = uVar16;
  iVar9 = puVar6[7];
  *(undefined4 *)(iVar9 + 0x18) = uVar15;
  *(undefined4 *)(iVar9 + 0x1c) = uVar17;
  iVar9 = puVar6[8];
  *(int *)(iVar9 + 0x18) = (int)uVar20;
  *(int *)(iVar9 + 0x1c) = (int)((ulonglong)uVar20 >> 0x20);
  local_34 = s_cState_Reaction_002a221c;
  local_38 = uVar2;
  func_0010BEC4((int)puVar6,4,(int *)&local_38);
  iVar9 = puVar6[6];
  uVar15 = *(undefined4 *)(iVar11 + 0x60);
  uVar16 = *(undefined4 *)(iVar11 + 100);
  uVar17 = *(undefined4 *)(iVar11 + 0x68);
  *(undefined4 *)(iVar9 + 0x20) = *(undefined4 *)(iVar11 + 0x5c);
  *(undefined4 *)(iVar9 + 0x24) = uVar15;
  iVar9 = puVar6[7];
  *(undefined4 *)(iVar9 + 0x20) = uVar16;
  *(undefined4 *)(iVar9 + 0x24) = uVar17;
  iVar9 = puVar6[8];
  *(int *)(iVar9 + 0x20) = (int)uVar20;
  *(int *)(iVar9 + 0x24) = (int)((ulonglong)uVar20 >> 0x20);
  local_34 = s_cState_Fall_002a222c;
  local_38 = uVar2;
  func_0010BEC4((int)puVar6,5,(int *)&local_38);
  iVar9 = puVar6[6];
  uVar15 = *(undefined4 *)(iVar11 + 0x70);
  uVar16 = *(undefined4 *)(iVar11 + 0x74);
  uVar17 = *(undefined4 *)(iVar11 + 0x78);
  *(undefined4 *)(iVar9 + 0x28) = *(undefined4 *)(iVar11 + 0x6c);
  *(undefined4 *)(iVar9 + 0x2c) = uVar15;
  iVar9 = puVar6[7];
  *(undefined4 *)(iVar9 + 0x28) = uVar16;
  *(undefined4 *)(iVar9 + 0x2c) = uVar17;
  iVar9 = puVar6[8];
  *(int *)(iVar9 + 0x28) = (int)uVar20;
  *(int *)(iVar9 + 0x2c) = (int)((ulonglong)uVar20 >> 0x20);
  local_34 = s_cState_LookAround_002a2238;
  local_38 = uVar2;
  func_0010BEC4((int)puVar6,6,(int *)&local_38);
  iVar9 = puVar6[6];
  uVar17 = *(undefined4 *)(iVar11 + 0x80);
  uVar15 = *(undefined4 *)(iVar11 + 0x88);
  uVar16 = *(undefined4 *)(iVar11 + 0x84);
  *(undefined4 *)(iVar9 + 0x30) = *(undefined4 *)(iVar11 + 0x7c);
  *(undefined4 *)(iVar9 + 0x34) = uVar17;
  iVar9 = puVar6[7];
  *(undefined4 *)(iVar9 + 0x30) = uVar16;
  *(undefined4 *)(iVar9 + 0x34) = uVar15;
  iVar9 = puVar6[8];
  *(int *)(iVar9 + 0x30) = (int)uVar20;
  *(int *)(iVar9 + 0x34) = (int)((ulonglong)uVar20 >> 0x20);
  local_34 = s_cState_Disappear_002a224c;
  local_38 = uVar2;
  func_0010BEC4((int)puVar6,7,(int *)&local_38);
  iVar9 = puVar6[6];
  uVar15 = *(undefined4 *)(iVar11 + 0x94);
  uVar17 = *(undefined4 *)(iVar11 + 0x98);
  uVar16 = *(undefined4 *)(iVar11 + 0x90);
  *(undefined4 *)(iVar9 + 0x38) = *(undefined4 *)(iVar11 + 0x8c);
  *(undefined4 *)(iVar9 + 0x3c) = uVar16;
  iVar9 = puVar6[7];
  *(undefined4 *)(iVar9 + 0x38) = uVar15;
  *(undefined4 *)(iVar9 + 0x3c) = uVar17;
  iVar9 = puVar6[8];
  *(int *)(iVar9 + 0x38) = (int)uVar20;
  *(int *)(iVar9 + 0x3c) = (int)((ulonglong)uVar20 >> 0x20);
  local_34 = s_cState_Attack_002a2260;
  local_38 = uVar2;
  func_0010BEC4((int)puVar6,8,(int *)&local_38);
  iVar9 = puVar6[6];
  uVar15 = *(undefined4 *)(iVar11 + 0xa0);
  uVar16 = *(undefined4 *)(iVar11 + 0xa4);
  uVar17 = *(undefined4 *)(iVar11 + 0xa8);
  uVar18 = *(undefined4 *)(iVar11 + 0xac);
  uVar19 = *(undefined4 *)(iVar11 + 0xb0);
  *(undefined4 *)(iVar9 + 0x40) = *(undefined4 *)(iVar11 + 0x9c);
  *(undefined4 *)(iVar9 + 0x44) = uVar15;
  iVar9 = puVar6[7];
  *(undefined4 *)(iVar9 + 0x40) = uVar16;
  *(undefined4 *)(iVar9 + 0x44) = uVar17;
  iVar9 = puVar6[8];
  *(undefined4 *)(iVar9 + 0x40) = uVar18;
  *(undefined4 *)(iVar9 + 0x44) = uVar19;
  local_34 = s_cState_AttackEnd_002a2270;
  local_38 = uVar2;
  func_0010BEC4((int)puVar6,9,(int *)&local_38);
  iVar9 = puVar6[6];
  uVar15 = *(undefined4 *)(iVar11 + 0xbc);
  uVar16 = *(undefined4 *)(iVar11 + 0xc0);
  uVar17 = *(undefined4 *)(iVar11 + 0xb8);
  uVar20 = *(undefined8 *)(iVar11 + 0x24);
  *(undefined4 *)(iVar9 + 0x48) = *(undefined4 *)(iVar11 + 0xb4);
  *(undefined4 *)(iVar9 + 0x4c) = uVar17;
  iVar9 = puVar6[7];
  *(undefined4 *)(iVar9 + 0x48) = uVar15;
  *(undefined4 *)(iVar9 + 0x4c) = uVar16;
  iVar9 = puVar6[8];
  *(int *)(iVar9 + 0x48) = (int)uVar20;
  *(int *)(iVar9 + 0x4c) = (int)((ulonglong)uVar20 >> 0x20);
  local_34 = s_cState_Die_002a2284;
  local_38 = uVar2;
  func_0010BEC4((int)puVar6,10,(int *)&local_38);
  uVar16 = *(undefined4 *)(iVar11 + 0xcc);
  uVar15 = *(undefined4 *)(iVar11 + 0xd0);
  iVar9 = puVar6[6];
  uVar17 = *(undefined4 *)(iVar11 + 200);
  *(undefined4 *)(iVar9 + 0x50) = *(undefined4 *)(iVar11 + 0xc4);
  *(undefined4 *)(iVar9 + 0x54) = uVar17;
  iVar11 = puVar6[7];
  *(undefined4 *)(iVar11 + 0x50) = uVar16;
  *(undefined4 *)(iVar11 + 0x54) = uVar15;
  iVar11 = puVar6[8];
  *(int *)(iVar11 + 0x50) = (int)uVar20;
  *(int *)(iVar11 + 0x54) = (int)((ulonglong)uVar20 >> 0x20);
  puVar6[-0xe7] = puVar6[-0xe7] | 0x8000;
  func_004F87F8((int)puVar14,1);
  puVar6[-0xe7] = puVar6[-0xe7] | 0x60000;
  *(undefined1 *)((int)puVar6 + -0xa3) = 0;
  func_002AFEC4((int)puVar14,-1,-1);
  func_00661FE4(puVar6,0);
  return puVar14;
}

