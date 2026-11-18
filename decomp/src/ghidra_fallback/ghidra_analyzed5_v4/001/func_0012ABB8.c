#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00111A64(uint *param_1);
extern int func_002AED68(int param_1,undefined2 param_2);
extern int func_002AF5FC(int param_1,undefined2 param_2,int param_3);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004FAC70(int param_1,uint param_2,int *param_3);
extern int func_004FACA4(int param_1,uint param_2,int *param_3);
extern int func_004FACD4(int param_1,int *param_2,undefined4 param_3,int *param_4);
extern int func_004FB070(int param_1,float fparam_0);
extern int func_004FB30C(int param_1,int param_2);
extern int func_004FB344(int param_1,int param_2);
extern void func_004FB408(int param_1);
extern int func_004FB468(int param_1);
extern int func_004FB4C4(int param_1,float fparam_0);
extern int func_004FBA18(int param_1,undefined1 param_2,undefined1 param_3,int param_4,int param_5, undefined1 param_6,ushort param_7,float fparam_0,float fparam_1);
extern int func_004FC218(int param_1,char param_2,int param_3,ushort param_4);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern int func_00564A78(int param_1,int *param_2);
extern int func_00656A1C(undefined4 *param_1,undefined1 param_2);
extern uint *DAT_0012b008;
extern int DAT_0012b00c;
extern int DAT_0012b010;
extern undefined4 DAT_0012b014;
extern undefined4 DAT_0012b018;
extern undefined4 DAT_0012b01c;
extern undefined4 DAT_0012b020;
extern int DAT_0012b024;
extern undefined DAT_0012b028;
extern uint DAT_0012b030;
extern uint DAT_0012b034;
extern undefined4 *DAT_0012b048;
extern float DAT_0012b04c;
extern float DAT_0012b050;
extern float DAT_0012b054;
extern float DAT_0012b058;
extern undefined4 DAT_0012b05c;
extern undefined *DAT_0012b060;
extern float DAT_0012b418;
extern undefined DAT_0012b41c;
extern char s_Lynel_0012b040[];
extern char s_cState_Blaze_0012b3ec[];
extern char s_cState_Die_0012b40c[];
extern char s_cState_Find_0012b3c4[];
extern char s_cState_Fire_0012b3e0[];
extern char s_cState_Move_0012b3b8[];
extern char s_cState_Reaction_0012b3fc[];
extern char s_cState_Search_0012b3d0[];
extern char s_cState_Wait_0012b3ac[];
extern char s_chest_0012b038[];
extern char s_mouth_0012b424[];

// USA 0012ABB8 <- EU 0012ABB8 (Ghidra, non-matching)
// GLOBAL DAT_0012b008 uint *
// GLOBAL DAT_0012b00c int
// GLOBAL DAT_0012b010 int
// GLOBAL DAT_0012b014 undefined4
// GLOBAL DAT_0012b018 undefined4
// GLOBAL DAT_0012b01c undefined4
// GLOBAL DAT_0012b020 undefined4
// GLOBAL DAT_0012b024 int
// GLOBAL DAT_0012b028 undefined
// GLOBAL DAT_0012b030 uint
// GLOBAL DAT_0012b034 uint
// GLOBAL DAT_0012b048 undefined4 *
// GLOBAL DAT_0012b04c float
// GLOBAL DAT_0012b050 float
// GLOBAL DAT_0012b054 float
// GLOBAL DAT_0012b058 float
// GLOBAL DAT_0012b05c undefined4
// GLOBAL DAT_0012b060 undefined *
// GLOBAL DAT_0012b418 float
// GLOBAL DAT_0012b41c undefined
// GLOBAL s_Lynel_0012b040 string
// GLOBAL s_cState_Blaze_0012b3ec string
// GLOBAL s_cState_Die_0012b40c string
// GLOBAL s_cState_Find_0012b3c4 string
// GLOBAL s_cState_Fire_0012b3e0 string
// GLOBAL s_cState_Move_0012b3b8 string
// GLOBAL s_cState_Reaction_0012b3fc string
// GLOBAL s_cState_Search_0012b3d0 string
// GLOBAL s_cState_Wait_0012b3ac string
// GLOBAL s_chest_0012b038 string
// GLOBAL s_mouth_0012b424 string

/* WARNING: Variable defined which should be unmapped: objStack_50 */

undefined4 * func_0012ABB8(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  uint *puVar13;
  float *pfVar14;
  undefined4 *puVar15;
  uint uVar16;
  int *piVar17;
  uint in_fpscr;
  undefined4 uVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  undefined4 uVar22;
  undefined8 uVar23;
  float fparam_1;
  undefined4 uVar24;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define objStack_50 ((uint *)(albw_frame + 0x0))
  #define local_40 (*(uint *)(albw_frame + 0x10))
  #define local_3c (*(char * *)(albw_frame + 0x14))
  puVar13 = objStack_50;
  piVar2 = func_004FD464(param_1,param_2,DAT_0012b008);
  iVar10 = DAT_0012b00c;
  *piVar2 = DAT_0012b00c;
  piVar2[200] = iVar10 + 0x84;
  puVar3 = func_0010A794(piVar2 + 0x22f);
  iVar10 = DAT_0012b010;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  uVar18 = *(undefined4 *)(iVar10 + 4);
  uVar20 = *(undefined4 *)(iVar10 + 8);
  puVar3[10] = puVar3 + -0x22f;
  uVar12 = DAT_0012b014;
  puVar3[0xb] = uVar18;
  puVar3[0xc] = uVar20;
  puVar15 = puVar3 + -0x22f;
  puVar3[9] = uVar12;
  uVar12 = DAT_0012b018;
  puVar3[0xf] = 0xffffffff;
  puVar3[0x10] = 0xffffffff;
  puVar3[0x11] = 0xffffffff;
  puVar3[0xd] = uVar12;
  puVar3[0xe] = puVar15;
  puVar3[0x12] = 0;
  puVar3[0x13] = 0;
  uVar12 = DAT_0012b01c;
  puVar3[0x14] = puVar3[-0x13b];
  puVar3[0x15] = puVar3[-0x13a];
  puVar3[0x16] = puVar3[-0x139];
  pfVar14 = (float *)puVar3[-0x13a];
  puVar3[0x1a] = 0;
  puVar3[0x1b] = 0;
  puVar3[0x17] = puVar3[-0x13b];
  puVar3[0x18] = pfVar14;
  puVar3[0x19] = puVar3[-0x139];
  puVar3[0x1c] = uVar12;
  puVar3[0x1d] = 0;
  puVar3[0x1e] = 0;
  puVar3[0x1f] = 0;
  puVar3[0x20] = 0;
  puVar3[0x21] = 0;
  uVar18 = DAT_0012b020;
  uVar23 = CONCAT44(uVar12,DAT_0012b020);
  puVar3[0x22] = 0;
  puVar3[0x23] = 0;
  puVar3[0x24] = uVar18;
  puVar3[0x25] = 0;
  puVar3[0x26] = 0;
  puVar3[0x27] = uVar18;
  puVar3[0x28] = 0;
  puVar3[0x29] = 0;
  puVar3[0x2a] = uVar18;
  puVar3[0x2b] = 0;
  puVar3[0x2c] = 0;
  puVar3[0x2d] = uVar18;
  *(undefined1 *)(puVar3 + 0x2e) = 5;
  *(undefined1 *)((int)puVar3 + 0xb9) = 3;
  *(undefined1 *)((int)puVar3 + 0xba) = 0xff;
  *(undefined1 *)((int)puVar3 + 0xbb) = 0;
  *(undefined1 *)(puVar3 + 0x2f) = 0;
  *(undefined1 *)((int)puVar3 + 0xbd) = 0;
  *(undefined1 *)((int)puVar3 + 0xbe) = 0;
  *(undefined1 *)((int)puVar3 + 0xbf) = 0;
  *(bool *)(puVar3 + 0x30) = *(short *)((int)param_2 + 0x2a) != 0;
  func_004FB344((int)puVar15,0xe);
  iVar11 = DAT_0012b024;
  uVar16 = 0;
  do {
    func_004FACA4((int)puVar15,uVar16,(int *)(iVar11 + uVar16 * 8));
    uVar16 = uVar16 + 1;
  } while ((int)uVar16 < 0xe);
  func_004FB468((int)puVar15);
  func_004F5BD8((int)puVar15,(uint *)0x0,(int **)0x0,pfVar14);
  iVar11 = *(int *)(iVar10 + 0xc);
  uVar12 = *(undefined4 *)(iVar10 + 0x10);
  piVar2 = puVar3 + 0xb;
  puVar3[10] = puVar15;
  *piVar2 = iVar11;
  puVar3[0xc] = uVar12;
  uVar16 = DAT_0012b030;
  puVar3[-0x134] = puVar3 + 9;
  local_3c = &DAT_0012b028;
  local_40 = uVar16;
  piVar17 = puVar3 + -300;
  uVar4 = func_00564A78(puVar3[-300],(int *)&local_40);
  uVar6 = DAT_0012b034;
  if (uVar4 != DAT_0012b034) {
    puVar3[0xf] = uVar4;
    puVar5 = (uint *)(*(int *)(*(int *)(puVar3[-300] + 0x24) + 0xc) + uVar4 * 0x40);
    *puVar5 = *puVar5 | 0x10;
    *(undefined4 **)(*piVar17 + 0x16c) = puVar3 + 0xd;
  }
  local_3c = s_chest_0012b038;
  local_40 = uVar16;
  uVar4 = func_00564A78(puVar3[-300],(int *)&local_40);
  if (uVar4 != uVar6) {
    puVar3[0x10] = uVar4;
    puVar5 = (uint *)(*(int *)(*(int *)(puVar3[-300] + 0x24) + 0xc) + uVar4 * 0x40);
    *puVar5 = *puVar5 | 0x10;
    *(undefined4 **)(*piVar17 + 0x16c) = puVar3 + 0xd;
  }
  func_004FB30C((int)puVar15,1);
  objStack_50[1] = (uint)s_Lynel_0012b040;
  objStack_50[0] = uVar16;
  func_004FAC70((int)puVar15,0,(int *)objStack_50);
  func_004FB408((int)puVar15);
  func_004FB4C4((int)puVar15,ALBW_AS_F32(((ulonglong)uVar23 >> 0x20)));
  if (*(char *)(puVar3 + 0x30) != '\0') {
    func_004FB070((int)puVar15,ALBW_AS_F32(uVar23));
  }
  fparam_1 = ALBW_AS_F32(((ulonglong)uVar23 >> 0x20));
  func_004FACD4((int)puVar15,(int *)0x1,puVar13,piVar2);
  fVar21 = DAT_0012b04c;
  uVar6 = func_00111A64((uint *)*DAT_0012b048);
  fVar19 = (float)VectorUnsignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
  puVar3[-0x135] = (int)((fVar19 * DAT_0012b050 * fVar21 + DAT_0012b054) * DAT_0012b058);
  uVar12 = DAT_0012b05c;
  puVar3[0x26] = 5;
  puVar3[0x27] = uVar12;
  puVar3[0x25] = 0;
  *(undefined1 *)((int)puVar3 + 6) = 8;
  puVar3[5] = puVar15;
  iVar11 = func_0010BA78(0x80);
  puVar3[6] = iVar11;
  puVar3[7] = iVar11 + (uint)*(byte *)((int)puVar3 + 6) * 8;
  iVar7 = 8;
  puVar8 = (undefined4 *)(iVar11 + -8);
  do {
    uVar12 = *(undefined4 *)(iVar10 + 0xa0);
    iVar7 = iVar7 + -1;
    puVar8[2] = *(undefined4 *)(iVar10 + 0x9c);
    puVar8[3] = uVar12;
    uVar12 = *(undefined4 *)(iVar10 + 0xa0);
    puVar8[4] = *(undefined4 *)(iVar10 + 0x9c);
    puVar8[5] = uVar12;
    puVar8 = puVar8 + 4;
  } while (iVar7 != 0);
  bVar1 = *(byte *)((int)puVar3 + 6);
  uVar6 = (uint)bVar1;
  puVar8 = (undefined4 *)func_0010BA78(uVar6 << 3);
  puVar3[8] = puVar8;
  if (uVar6 != 0) {
    puVar9 = puVar8 + -2;
    if ((bVar1 & 1) != 0) {
      uVar12 = *(undefined4 *)(iVar10 + 0x28);
      *puVar8 = *(undefined4 *)(iVar10 + 0x24);
      puVar8[1] = uVar12;
      puVar9 = puVar8;
    }
    for (iVar11 = (int)uVar6 >> 1; iVar11 != 0; iVar11 = iVar11 + -1) {
      uVar12 = *(undefined4 *)(iVar10 + 0x28);
      puVar9[2] = *(undefined4 *)(iVar10 + 0x24);
      puVar9[3] = uVar12;
      uVar12 = *(undefined4 *)(iVar10 + 0x28);
      puVar9[4] = *(undefined4 *)(iVar10 + 0x24);
      puVar9[5] = uVar12;
      puVar9 = puVar9 + 4;
    }
  }
  puVar8 = (undefined4 *)func_0010CEE0(0x128,(int *)0x0,4);
  iVar11 = 0;
  if (puVar8 != (undefined4 *)0x0) {
    *puVar8 = 0x24;
    puVar8[1] = 8;
    iVar11 = func_00100118((int)(puVar8 + 2),DAT_0012b060,0x24,8);
  }
  if (iVar11 != 0) {
    puVar3[3] = iVar11;
    puVar3[2] = 8;
  }
  puVar3[-0x15a] = puVar3;
  *(undefined2 *)((int)puVar3 + -0x562) = 8;
  local_3c = s_cState_Wait_0012b3ac;
  local_40 = uVar16;
  func_0010BEC4((int)puVar3,0,(int *)&local_40);
  puVar8 = (undefined4 *)puVar3[6];
  uVar12 = *(undefined4 *)(iVar10 + 0x18);
  uVar18 = *(undefined4 *)(iVar10 + 0x1c);
  uVar24 = *(undefined4 *)(iVar10 + 0x24);
  uVar20 = *(undefined4 *)(iVar10 + 0x20);
  uVar22 = *(undefined4 *)(iVar10 + 0x28);
  *puVar8 = *(undefined4 *)(iVar10 + 0x14);
  puVar8[1] = uVar12;
  puVar8 = (undefined4 *)puVar3[7];
  *puVar8 = uVar18;
  puVar8[1] = uVar20;
  puVar8 = (undefined4 *)puVar3[8];
  *puVar8 = uVar24;
  puVar8[1] = uVar22;
  local_3c = s_cState_Move_0012b3b8;
  local_40 = uVar16;
  func_0010BEC4((int)puVar3,1,(int *)&local_40);
  iVar11 = puVar3[6];
  uVar20 = *(undefined4 *)(iVar10 + 0x30);
  uVar12 = *(undefined4 *)(iVar10 + 0x34);
  uVar18 = *(undefined4 *)(iVar10 + 0x38);
  *(undefined4 *)(iVar11 + 8) = *(undefined4 *)(iVar10 + 0x2c);
  *(undefined4 *)(iVar11 + 0xc) = uVar20;
  iVar11 = puVar3[7];
  *(undefined4 *)(iVar11 + 8) = uVar12;
  *(undefined4 *)(iVar11 + 0xc) = uVar18;
  iVar11 = puVar3[8];
  *(undefined4 *)(iVar11 + 8) = uVar24;
  *(undefined4 *)(iVar11 + 0xc) = uVar22;
  local_3c = s_cState_Find_0012b3c4;
  local_40 = uVar16;
  func_0010BEC4((int)puVar3,2,(int *)&local_40);
  iVar11 = puVar3[6];
  uVar12 = *(undefined4 *)(iVar10 + 0x40);
  uVar18 = *(undefined4 *)(iVar10 + 0x44);
  uVar20 = *(undefined4 *)(iVar10 + 0x48);
  *(undefined4 *)(iVar11 + 0x10) = *(undefined4 *)(iVar10 + 0x3c);
  *(undefined4 *)(iVar11 + 0x14) = uVar12;
  iVar11 = puVar3[7];
  *(undefined4 *)(iVar11 + 0x10) = uVar18;
  *(undefined4 *)(iVar11 + 0x14) = uVar20;
  iVar11 = puVar3[8];
  *(undefined4 *)(iVar11 + 0x10) = uVar24;
  *(undefined4 *)(iVar11 + 0x14) = uVar22;
  local_3c = s_cState_Search_0012b3d0;
  local_40 = uVar16;
  func_0010BEC4((int)puVar3,3,(int *)&local_40);
  iVar11 = puVar3[6];
  uVar12 = *(undefined4 *)(iVar10 + 0x50);
  uVar18 = *(undefined4 *)(iVar10 + 0x54);
  uVar20 = *(undefined4 *)(iVar10 + 0x58);
  *(undefined4 *)(iVar11 + 0x18) = *(undefined4 *)(iVar10 + 0x4c);
  *(undefined4 *)(iVar11 + 0x1c) = uVar12;
  iVar11 = puVar3[7];
  *(undefined4 *)(iVar11 + 0x18) = uVar18;
  *(undefined4 *)(iVar11 + 0x1c) = uVar20;
  iVar11 = puVar3[8];
  *(undefined4 *)(iVar11 + 0x18) = uVar24;
  *(undefined4 *)(iVar11 + 0x1c) = uVar22;
  local_3c = s_cState_Fire_0012b3e0;
  local_40 = uVar16;
  func_0010BEC4((int)puVar3,4,(int *)&local_40);
  iVar11 = puVar3[6];
  uVar12 = *(undefined4 *)(iVar10 + 0x60);
  uVar18 = *(undefined4 *)(iVar10 + 100);
  uVar20 = *(undefined4 *)(iVar10 + 0x68);
  *(undefined4 *)(iVar11 + 0x20) = *(undefined4 *)(iVar10 + 0x5c);
  *(undefined4 *)(iVar11 + 0x24) = uVar12;
  iVar11 = puVar3[7];
  *(undefined4 *)(iVar11 + 0x20) = uVar18;
  *(undefined4 *)(iVar11 + 0x24) = uVar20;
  iVar11 = puVar3[8];
  *(undefined4 *)(iVar11 + 0x20) = uVar24;
  *(undefined4 *)(iVar11 + 0x24) = uVar22;
  local_3c = s_cState_Blaze_0012b3ec;
  local_40 = uVar16;
  func_0010BEC4((int)puVar3,5,(int *)&local_40);
  iVar11 = puVar3[6];
  uVar20 = *(undefined4 *)(iVar10 + 0x70);
  uVar12 = *(undefined4 *)(iVar10 + 0x74);
  uVar18 = *(undefined4 *)(iVar10 + 0x78);
  *(undefined4 *)(iVar11 + 0x28) = *(undefined4 *)(iVar10 + 0x6c);
  *(undefined4 *)(iVar11 + 0x2c) = uVar20;
  iVar11 = puVar3[7];
  *(undefined4 *)(iVar11 + 0x28) = uVar12;
  *(undefined4 *)(iVar11 + 0x2c) = uVar18;
  iVar11 = puVar3[8];
  *(undefined4 *)(iVar11 + 0x28) = uVar24;
  *(undefined4 *)(iVar11 + 0x2c) = uVar22;
  local_3c = s_cState_Reaction_0012b3fc;
  local_40 = uVar16;
  func_0010BEC4((int)puVar3,6,(int *)&local_40);
  iVar11 = puVar3[6];
  uVar12 = *(undefined4 *)(iVar10 + 0x80);
  uVar18 = *(undefined4 *)(iVar10 + 0x84);
  uVar20 = *(undefined4 *)(iVar10 + 0x88);
  *(undefined4 *)(iVar11 + 0x30) = *(undefined4 *)(iVar10 + 0x7c);
  *(undefined4 *)(iVar11 + 0x34) = uVar12;
  iVar11 = puVar3[7];
  *(undefined4 *)(iVar11 + 0x30) = uVar18;
  *(undefined4 *)(iVar11 + 0x34) = uVar20;
  iVar11 = puVar3[8];
  *(undefined4 *)(iVar11 + 0x30) = uVar24;
  *(undefined4 *)(iVar11 + 0x34) = uVar22;
  local_3c = s_cState_Die_0012b40c;
  local_40 = uVar16;
  func_0010BEC4((int)puVar3,7,(int *)&local_40);
  iVar11 = puVar3[6];
  uVar12 = *(undefined4 *)(iVar10 + 0x90);
  uVar18 = *(undefined4 *)(iVar10 + 0x94);
  uVar20 = *(undefined4 *)(iVar10 + 0x98);
  *(undefined4 *)(iVar11 + 0x38) = *(undefined4 *)(iVar10 + 0x8c);
  *(undefined4 *)(iVar11 + 0x3c) = uVar12;
  iVar10 = puVar3[7];
  *(undefined4 *)(iVar10 + 0x38) = uVar18;
  *(undefined4 *)(iVar10 + 0x3c) = uVar20;
  iVar10 = puVar3[8];
  *(undefined4 *)(iVar10 + 0x38) = uVar24;
  *(undefined4 *)(iVar10 + 0x3c) = uVar22;
  *(undefined1 *)((int)puVar3 + -0x13f) = 10;
  *(undefined1 *)((int)puVar3 + -0x13e) = 0xff;
  *(undefined1 *)((int)puVar3 + -0x13d) = 0;
  func_004FC218((int)puVar15,'\v',-1,0x7fff);
  objStack_50[0] = 0x10;
  objStack_50[1] = 0;
  objStack_50[2] = 0x7fff;
  func_004FBA18((int)puVar15,0xd,0xff,-1,0x10,0,0x7fff,DAT_0012b418,fparam_1);
  puVar3[-200] = puVar3[-200] | 0x8000;
  func_002AF5FC((int)puVar15,9,-1);
  func_002AED68((int)puVar15,9);
  func_00656A1C(puVar3,0);
  local_3c = &DAT_0012b41c;
  local_40 = uVar16;
  uVar6 = func_00564A78(puVar3[-300],(int *)&local_40);
  puVar3[0x1a] = uVar6;
  local_3c = s_mouth_0012b424;
  local_40 = uVar16;
  uVar16 = func_00564A78(*piVar17,(int *)&local_40);
  puVar3[0x1b] = uVar16;
  puVar3[0x17] = puVar3[-0x22d];
  puVar3[0x18] = puVar3[-0x22c];
  puVar3[0x19] = puVar3[-0x22b];
  return puVar15;
}

