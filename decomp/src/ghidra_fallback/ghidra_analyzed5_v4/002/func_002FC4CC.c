#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_002AF5FC(int param_1,undefined2 param_2,int param_3);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F87F8(int param_1,int param_2);
extern int func_004FAB60(int param_1,undefined4 param_2,int param_3);
extern int func_004FAC70(int param_1,uint param_2,int *param_3);
extern int func_004FACA4(int param_1,uint param_2,int *param_3);
extern int func_004FB024(int param_1);
extern int func_004FB070(int param_1,float fparam_0);
extern int func_004FB30C(int param_1,int param_2);
extern int func_004FB344(int param_1,int param_2);
extern void func_004FB408(int param_1);
extern int func_004FB468(int param_1);
extern int func_004FBA18(int param_1,undefined1 param_2,undefined1 param_3,int param_4,int param_5, undefined1 param_6,ushort param_7,float fparam_0,float fparam_1);
extern int func_004FC168(int param_1,float fparam_0);
extern int func_004FC218(int param_1,char param_2,int param_3,ushort param_4);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern int func_00588BE4(int param_1);
extern int func_006644B8(undefined4 *param_1,undefined1 param_2);
extern uint *DAT_002fc878;
extern int DAT_002fc87c;
extern undefined4 DAT_002fc880;
extern undefined4 DAT_002fc884;
extern int DAT_002fc888;
extern int DAT_002fc88c;
extern undefined *DAT_002fc890;
extern int DAT_002fc894;
extern uint DAT_002fc8a4;
extern uint DAT_002fca58;
extern float DAT_002fca5c;
extern int *DAT_002fca60;
extern char s_Wizrobe_002fca64[];
extern char s_cState_Attack_002fc8b8[];
extern char s_cState_Die_002fc8f8[];
extern char s_cState_DisAppear_002fc8d4[];
extern char s_cState_Reaction_002fc8e8[];
extern char s_cState_Start_002fc8a8[];
extern char s_cState_Stop_002fc898[];
extern char s_cState_Wait_002fc8c8[];

// USA 002FC4CC <- EU 002FC4A8 (Ghidra, non-matching)
// GLOBAL DAT_002fc878 uint *
// GLOBAL DAT_002fc87c int
// GLOBAL DAT_002fc880 undefined4
// GLOBAL DAT_002fc884 undefined4
// GLOBAL DAT_002fc888 int
// GLOBAL DAT_002fc88c int
// GLOBAL DAT_002fc890 undefined *
// GLOBAL DAT_002fc894 int
// GLOBAL DAT_002fc8a4 uint
// GLOBAL DAT_002fca58 uint
// GLOBAL DAT_002fca5c float
// GLOBAL DAT_002fca60 int *
// GLOBAL s_Wizrobe_002fca64 string
// GLOBAL s_cState_Attack_002fc8b8 string
// GLOBAL s_cState_Die_002fc8f8 string
// GLOBAL s_cState_DisAppear_002fc8d4 string
// GLOBAL s_cState_Reaction_002fc8e8 string
// GLOBAL s_cState_Start_002fc8a8 string
// GLOBAL s_cState_Stop_002fc898 string
// GLOBAL s_cState_Wait_002fc8c8 string

/* WARNING: Variable defined which should be unmapped: objStack_50 */

undefined4 * func_002FC4CC(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  ushort uVar10;
  float *in_r3;
  undefined4 *puVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  float fparam_0;
  undefined4 uVar17;
  undefined4 uVar18;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define objStack_50 ((uint *)(albw_frame + 0x0))
  #define local_40 (*(uint *)(albw_frame + 0x10))
  #define local_3c (*(char * *)(albw_frame + 0x14))
  piVar3 = func_004FD464(param_1,param_2,DAT_002fc878);
  iVar9 = DAT_002fc87c;
  *piVar3 = DAT_002fc87c;
  piVar3[200] = iVar9 + 0x84;
  puVar4 = func_0010A794(piVar3 + 0x22f);
  puVar4[5] = 0;
  puVar4[6] = 0;
  uVar13 = DAT_002fc880;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = uVar13;
  puVar4[10] = uVar13;
  puVar4[0xb] = 0;
  uVar14 = DAT_002fc884;
  uVar16 = CONCAT44(DAT_002fc884,uVar13);
  puVar4[0xc] = 0;
  puVar4[0xd] = 0;
  puVar4[0xe] = uVar14;
  puVar4[0xf] = 0;
  puVar11 = puVar4 + -0x22f;
  puVar4[0x10] = 0;
  puVar4[0x11] = uVar14;
  puVar4[0x12] = 0xffffffff;
  puVar4[0x13] = 0xffffffff;
  *(bool *)(puVar4 + 0x14) = *(short *)((int)param_2 + 0x32) != 0;
  *(undefined1 *)((int)puVar4 + 0x51) = 0;
  func_004FB344((int)puVar11,8);
  iVar9 = DAT_002fc888;
  uVar12 = 0;
  do {
    func_004FACA4((int)puVar11,uVar12,(int *)(iVar9 + uVar12 * 8));
    uVar12 = uVar12 + 1;
  } while ((int)uVar12 < 8);
  func_004FB468((int)puVar11);
  func_004F5BD8((int)puVar11,(uint *)0x0,(int **)0x0,in_r3);
  puVar4[5] = puVar11;
  *(undefined1 *)((int)puVar4 + 6) = 7;
  iVar5 = func_0010BA78(0x70);
  iVar9 = DAT_002fc88c;
  puVar4[6] = iVar5;
  puVar4[7] = iVar5 + (uint)*(byte *)((int)puVar4 + 6) * 8;
  iVar8 = 7;
  puVar6 = (undefined4 *)(iVar5 + -8);
  do {
    uVar13 = *(undefined4 *)(iVar9 + 0x84);
    iVar8 = iVar8 + -1;
    puVar6[2] = *(undefined4 *)(iVar9 + 0x80);
    puVar6[3] = uVar13;
    uVar13 = *(undefined4 *)(iVar9 + 0x84);
    puVar6[4] = *(undefined4 *)(iVar9 + 0x80);
    puVar6[5] = uVar13;
    puVar6 = puVar6 + 4;
  } while (iVar8 != 0);
  bVar1 = *(byte *)((int)puVar4 + 6);
  uVar12 = (uint)bVar1;
  puVar6 = (undefined4 *)func_0010BA78(uVar12 << 3);
  puVar4[8] = puVar6;
  if (uVar12 != 0) {
    puVar7 = puVar6 + -2;
    if ((bVar1 & 1) != 0) {
      uVar13 = *(undefined4 *)(iVar9 + 0x1c);
      *puVar6 = *(undefined4 *)(iVar9 + 0x18);
      puVar6[1] = uVar13;
      puVar7 = puVar6;
    }
    for (iVar5 = (int)uVar12 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      uVar13 = *(undefined4 *)(iVar9 + 0x1c);
      puVar7[2] = *(undefined4 *)(iVar9 + 0x18);
      puVar7[3] = uVar13;
      uVar13 = *(undefined4 *)(iVar9 + 0x1c);
      puVar7[4] = *(undefined4 *)(iVar9 + 0x18);
      puVar7[5] = uVar13;
      puVar7 = puVar7 + 4;
    }
  }
  puVar6 = (undefined4 *)func_0010CEE0(0x104,(int *)0x0,4);
  iVar5 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 0x24;
    puVar6[1] = 7;
    iVar5 = func_00100118((int)(puVar6 + 2),DAT_002fc890,0x24,7);
  }
  if (iVar5 != 0) {
    puVar4[3] = iVar5;
    puVar4[2] = 7;
  }
  iVar5 = DAT_002fc894;
  puVar4[-0x15a] = puVar4;
  uVar12 = DAT_002fc8a4;
  *(undefined2 *)(iVar5 + (int)puVar11) = 7;
  local_3c = s_cState_Stop_002fc898;
  local_40 = uVar12;
  func_0010BEC4((int)puVar4,0,(int *)&local_40);
  puVar6 = (undefined4 *)puVar4[6];
  uVar18 = *(undefined4 *)(iVar9 + 0x18);
  uVar17 = *(undefined4 *)(iVar9 + 0x1c);
  uVar13 = *(undefined4 *)(iVar9 + 0xc);
  uVar14 = *(undefined4 *)(iVar9 + 0x10);
  uVar15 = *(undefined4 *)(iVar9 + 0x14);
  *puVar6 = *(undefined4 *)(iVar9 + 8);
  puVar6[1] = uVar13;
  puVar6 = (undefined4 *)puVar4[7];
  *puVar6 = uVar14;
  puVar6[1] = uVar15;
  puVar6 = (undefined4 *)puVar4[8];
  *puVar6 = uVar18;
  puVar6[1] = uVar17;
  local_3c = s_cState_Start_002fc8a8;
  local_40 = uVar12;
  func_0010BEC4((int)puVar4,1,(int *)&local_40);
  iVar5 = puVar4[6];
  uVar15 = *(undefined4 *)(iVar9 + 0x24);
  uVar13 = *(undefined4 *)(iVar9 + 0x28);
  uVar14 = *(undefined4 *)(iVar9 + 0x2c);
  *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(iVar9 + 0x20);
  *(undefined4 *)(iVar5 + 0xc) = uVar15;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 8) = uVar13;
  *(undefined4 *)(iVar5 + 0xc) = uVar14;
  iVar5 = puVar4[8];
  *(undefined4 *)(iVar5 + 8) = uVar18;
  *(undefined4 *)(iVar5 + 0xc) = uVar17;
  local_3c = s_cState_Attack_002fc8b8;
  local_40 = uVar12;
  func_0010BEC4((int)puVar4,2,(int *)&local_40);
  iVar5 = puVar4[6];
  uVar13 = *(undefined4 *)(iVar9 + 0x34);
  uVar14 = *(undefined4 *)(iVar9 + 0x38);
  uVar15 = *(undefined4 *)(iVar9 + 0x3c);
  *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(iVar9 + 0x30);
  *(undefined4 *)(iVar5 + 0x14) = uVar13;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 0x10) = uVar14;
  *(undefined4 *)(iVar5 + 0x14) = uVar15;
  iVar5 = puVar4[8];
  *(undefined4 *)(iVar5 + 0x10) = uVar18;
  *(undefined4 *)(iVar5 + 0x14) = uVar17;
  local_3c = s_cState_Wait_002fc8c8;
  local_40 = uVar12;
  func_0010BEC4((int)puVar4,3,(int *)&local_40);
  iVar5 = puVar4[6];
  uVar13 = *(undefined4 *)(iVar9 + 0x44);
  uVar14 = *(undefined4 *)(iVar9 + 0x48);
  uVar15 = *(undefined4 *)(iVar9 + 0x4c);
  *(undefined4 *)(iVar5 + 0x18) = *(undefined4 *)(iVar9 + 0x40);
  *(undefined4 *)(iVar5 + 0x1c) = uVar13;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 0x18) = uVar14;
  *(undefined4 *)(iVar5 + 0x1c) = uVar15;
  iVar5 = puVar4[8];
  *(undefined4 *)(iVar5 + 0x18) = uVar18;
  *(undefined4 *)(iVar5 + 0x1c) = uVar17;
  local_3c = s_cState_DisAppear_002fc8d4;
  local_40 = uVar12;
  func_0010BEC4((int)puVar4,4,(int *)&local_40);
  iVar5 = puVar4[6];
  uVar13 = *(undefined4 *)(iVar9 + 0x54);
  uVar14 = *(undefined4 *)(iVar9 + 0x58);
  uVar15 = *(undefined4 *)(iVar9 + 0x5c);
  *(undefined4 *)(iVar5 + 0x20) = *(undefined4 *)(iVar9 + 0x50);
  *(undefined4 *)(iVar5 + 0x24) = uVar13;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 0x20) = uVar14;
  *(undefined4 *)(iVar5 + 0x24) = uVar15;
  iVar5 = puVar4[8];
  *(undefined4 *)(iVar5 + 0x20) = uVar18;
  *(undefined4 *)(iVar5 + 0x24) = uVar17;
  local_3c = s_cState_Reaction_002fc8e8;
  local_40 = uVar12;
  func_0010BEC4((int)puVar4,5,(int *)&local_40);
  iVar5 = puVar4[6];
  uVar13 = *(undefined4 *)(iVar9 + 100);
  uVar14 = *(undefined4 *)(iVar9 + 0x68);
  uVar15 = *(undefined4 *)(iVar9 + 0x6c);
  *(undefined4 *)(iVar5 + 0x28) = *(undefined4 *)(iVar9 + 0x60);
  *(undefined4 *)(iVar5 + 0x2c) = uVar13;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 0x28) = uVar14;
  *(undefined4 *)(iVar5 + 0x2c) = uVar15;
  iVar5 = puVar4[8];
  *(undefined4 *)(iVar5 + 0x28) = uVar18;
  *(undefined4 *)(iVar5 + 0x2c) = uVar17;
  local_3c = s_cState_Die_002fc8f8;
  local_40 = uVar12;
  func_0010BEC4((int)puVar4,6,(int *)&local_40);
  uVar2 = DAT_002fca58;
  iVar5 = puVar4[6];
  uVar13 = *(undefined4 *)(iVar9 + 0x74);
  uVar14 = *(undefined4 *)(iVar9 + 0x78);
  uVar15 = *(undefined4 *)(iVar9 + 0x7c);
  *(undefined4 *)(iVar5 + 0x30) = *(undefined4 *)(iVar9 + 0x70);
  *(undefined4 *)(iVar5 + 0x34) = uVar13;
  iVar9 = puVar4[7];
  *(undefined4 *)(iVar9 + 0x30) = uVar14;
  *(undefined4 *)(iVar9 + 0x34) = uVar15;
  iVar9 = puVar4[8];
  *(undefined4 *)(iVar9 + 0x30) = uVar18;
  *(undefined4 *)(iVar9 + 0x34) = uVar17;
  *(undefined1 *)((int)puVar4 + -0x13f) = 6;
  *(undefined1 *)((int)puVar4 + -0x13e) = 0xff;
  *(undefined1 *)((int)puVar4 + -0x13d) = 0;
  uVar10 = (ushort)uVar2;
  func_004FC218((int)puVar11,'\x02',-1,uVar10);
  objStack_50[0] = 0xffffffff;
  objStack_50[1] = 0;
  objStack_50[2] = uVar2;
  func_004FBA18((int)puVar11,3,0xff,-1,-1,0,uVar10,DAT_002fca5c,DAT_002fca5c);
  puVar4[-200] = puVar4[-200] | 0x8000;
  func_002AF5FC((int)puVar11,5,-1);
  func_004FC168((int)puVar11,ALBW_AS_F32(uVar16));
  fparam_0 = ALBW_AS_F32(((ulonglong)uVar16 >> 0x20));
  func_004F87F8((int)puVar11,1);
  func_004FB024((int)puVar11);
  puVar4[0x12] = param_2[0xa7];
  iVar9 = func_00588BE4((int)puVar11);
  if (iVar9 == *DAT_002fca60) {
    func_004FB30C((int)puVar11,1);
    objStack_50[1] = (uint)s_Wizrobe_002fca64;
    objStack_50[0] = uVar12;
    func_004FAC70((int)puVar11,0,(int *)objStack_50);
    func_004FB408((int)puVar11);
    func_004FAB60((int)puVar11,0,0);
    func_004FB070((int)puVar11,fparam_0);
  }
  func_006644B8(puVar4,0);
  return puVar11;
}

