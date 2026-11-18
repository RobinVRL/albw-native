#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_002AED68(int param_1,undefined2 param_2);
extern int func_002AF5FC(int param_1,undefined2 param_2,int param_3);
extern int func_004FAC70(int param_1,uint param_2,int *param_3);
extern int func_004FACA4(int param_1,uint param_2,int *param_3);
extern int func_004FACD4(int param_1,int *param_2,undefined4 param_3,int *param_4);
extern int func_004FB070(int param_1,float fparam_0);
extern int func_004FB0A4(int param_1,float fparam_0);
extern int func_004FB30C(int param_1,int param_2);
extern int func_004FB344(int param_1,int param_2);
extern void func_004FB408(int param_1);
extern int func_004FB468(int param_1);
extern int func_004FB4C4(int param_1,float fparam_0);
extern int func_004FC78C(int param_1,undefined2 param_2);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern int func_00564A78(int param_1,int *param_2);
extern int func_0065E630(undefined4 *param_1,undefined1 param_2);
extern uint *DAT_00223e48;
extern int DAT_00223e4c;
extern undefined4 DAT_00223e50;
extern int DAT_00223e54;
extern undefined4 DAT_00223e58;
extern int DAT_00223e5c;
extern float DAT_00223e60;
extern int *DAT_00223e64;
extern int DAT_00223e68;
extern undefined DAT_00223e6c;
extern uint DAT_00223e74;
extern int DAT_00223e78;
extern float DAT_00223e7c;
extern undefined *DAT_00223e80;
extern int DAT_00223e84;
extern float DAT_00223fa4;
extern undefined4 DAT_00223fa8;
extern undefined4 DAT_00223fac;
extern undefined4 DAT_00223fb0;
extern undefined4 DAT_00223fb4;
extern char s_cState_Die_00223f98[];
extern char s_cState_Jump_00223ea0[];
extern char s_cState_Reaction_00223eac[];
extern char s_cState_Wait_00223e88[];
extern char s_cState_Walk_00223e94[];

// USA 002239F8 <- EU 002239F8 (Ghidra, non-matching)
// GLOBAL DAT_00223e48 uint *
// GLOBAL DAT_00223e4c int
// GLOBAL DAT_00223e50 undefined4
// GLOBAL DAT_00223e54 int
// GLOBAL DAT_00223e58 undefined4
// GLOBAL DAT_00223e5c int
// GLOBAL DAT_00223e60 float
// GLOBAL DAT_00223e64 int *
// GLOBAL DAT_00223e68 int
// GLOBAL DAT_00223e6c undefined
// GLOBAL DAT_00223e74 uint
// GLOBAL DAT_00223e78 int
// GLOBAL DAT_00223e7c float
// GLOBAL DAT_00223e80 undefined *
// GLOBAL DAT_00223e84 int
// GLOBAL DAT_00223fa4 float
// GLOBAL DAT_00223fa8 undefined4
// GLOBAL DAT_00223fac undefined4
// GLOBAL DAT_00223fb0 undefined4
// GLOBAL DAT_00223fb4 undefined4
// GLOBAL s_cState_Die_00223f98 string
// GLOBAL s_cState_Jump_00223ea0 string
// GLOBAL s_cState_Reaction_00223eac string
// GLOBAL s_cState_Wait_00223e88 string
// GLOBAL s_cState_Walk_00223e94 string

undefined4 * func_002239F8(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(char * *)(albw_frame + 0xc))
  piVar2 = func_004FD464(param_1,param_2,DAT_00223e48);
  iVar10 = DAT_00223e4c;
  *piVar2 = DAT_00223e4c;
  piVar2[200] = iVar10 + 0x84;
  puVar3 = func_0010A794(piVar2 + 0x22f);
  puVar3[5] = 0;
  uVar15 = DAT_00223e50;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = uVar15;
  puVar3[10] = puVar3 + -0x22f;
  puVar3[0xb] = 0xffffffff;
  iVar10 = DAT_00223e54;
  puVar3[0xc] = 0;
  *(undefined1 *)(puVar3 + 0x10) = 2;
  puVar13 = puVar3 + -0x22f;
  piVar2 = *(int **)(iVar10 + 8);
  puVar3[0x13] = *(undefined4 *)(iVar10 + 4);
  puVar3[0x14] = piVar2;
  puVar3[0x11] = DAT_00223e58;
  puVar3[0x12] = puVar13;
  puVar3[0x1e] = 0;
  puVar3[-0x134] = puVar3 + 0x11;
  func_004FB344((int)puVar13,9);
  iVar17 = DAT_00223e5c;
  uVar14 = 0;
  do {
    func_004FACA4((int)puVar13,uVar14,(int *)(iVar17 + uVar14 * 8));
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 9);
  func_004FB468((int)puVar13);
  fVar18 = DAT_00223e60;
  func_004FB0A4((int)puVar13,DAT_00223e60);
  func_004FB30C((int)puVar13,1);
  piVar11 = DAT_00223e64;
  func_004FAC70((int)puVar13,0,DAT_00223e64);
  func_004FB408((int)puVar13);
  func_004FB070((int)puVar13,fVar18);
  func_004FB4C4((int)puVar13,fVar18);
  func_004FACD4((int)puVar13,(int *)0x0,piVar11,piVar2);
  iVar17 = DAT_00223e68;
  local_34 = &DAT_00223e6c;
  local_38 = DAT_00223e68;
  uVar4 = func_00564A78(puVar3[-300],&local_38);
  uVar14 = DAT_00223e74;
  if (uVar4 != DAT_00223e74) {
    puVar3[0xb] = uVar4;
    puVar5 = (uint *)(*(int *)(*(int *)(puVar3[-300] + 0x24) + 0xc) + uVar4 * 0x40);
    *puVar5 = *puVar5 | 0x10;
    *(undefined4 **)(puVar3[-300] + 0x16c) = puVar3 + 9;
  }
  if ((*(ushort *)((int)param_2 + 0x2a) & 0xff) == 0) {
    func_004FB070((int)puVar13,fVar18);
    func_004FACD4((int)puVar13,(int *)0x0,piVar11,piVar2);
  }
  else if ((*(ushort *)((int)param_2 + 0x2a) & 0xff) == 1) {
    func_004FC78C((int)puVar13,*(short *)(DAT_00223e78 + (int)puVar13) << 1);
    fVar18 = DAT_00223e7c;
    *(ushort *)(puVar3[-0x127] + 0x30) = (ushort)uVar14 & *(short *)(puVar3[-0x127] + 0x30) << 1;
    func_004FB070((int)puVar13,fVar18);
    func_004FACD4((int)puVar13,(int *)0x0,piVar11,piVar2);
  }
  func_002AF5FC((int)puVar13,7,-1);
  *(undefined1 *)((int)puVar3 + -0x13f) = 8;
  *(undefined1 *)((int)puVar3 + -0x13e) = 0xff;
  *(undefined1 *)((int)puVar3 + -0x13d) = 0;
  func_002AED68((int)puVar13,7);
  *(undefined1 *)((int)puVar3 + 6) = 5;
  puVar3[5] = puVar13;
  iVar6 = func_0010BA78(0x50);
  puVar3[6] = iVar6;
  puVar3[7] = iVar6 + (uint)*(byte *)((int)puVar3 + 6) * 8;
  iVar9 = 5;
  puVar7 = (undefined4 *)(iVar6 + -8);
  do {
    uVar15 = *(undefined4 *)(iVar10 + 0x68);
    iVar9 = iVar9 + -1;
    puVar7[2] = *(undefined4 *)(iVar10 + 100);
    puVar7[3] = uVar15;
    uVar15 = *(undefined4 *)(iVar10 + 0x68);
    puVar7[4] = *(undefined4 *)(iVar10 + 100);
    puVar7[5] = uVar15;
    puVar7 = puVar7 + 4;
  } while (iVar9 != 0);
  bVar1 = *(byte *)((int)puVar3 + 6);
  uVar14 = (uint)bVar1;
  puVar7 = (undefined4 *)func_0010BA78(uVar14 << 3);
  puVar3[8] = puVar7;
  if (uVar14 != 0) {
    puVar8 = puVar7 + -2;
    if ((bVar1 & 1) != 0) {
      uVar15 = *(undefined4 *)(iVar10 + 0x20);
      *puVar7 = *(undefined4 *)(iVar10 + 0x1c);
      puVar7[1] = uVar15;
      puVar8 = puVar7;
    }
    for (iVar6 = (int)uVar14 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      uVar15 = *(undefined4 *)(iVar10 + 0x20);
      puVar8[2] = *(undefined4 *)(iVar10 + 0x1c);
      puVar8[3] = uVar15;
      uVar15 = *(undefined4 *)(iVar10 + 0x20);
      puVar8[4] = *(undefined4 *)(iVar10 + 0x1c);
      puVar8[5] = uVar15;
      puVar8 = puVar8 + 4;
    }
  }
  puVar7 = (undefined4 *)func_0010CEE0(0xbc,(int *)0x0,4);
  iVar6 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0x24;
    puVar7[1] = 5;
    iVar6 = func_00100118((int)(puVar7 + 2),DAT_00223e80,0x24,5);
  }
  if (iVar6 != 0) {
    puVar3[3] = iVar6;
    puVar3[2] = 5;
  }
  iVar6 = DAT_00223e84;
  puVar3[-0x15a] = puVar3;
  *(undefined2 *)(iVar6 + (int)puVar13) = 5;
  local_34 = s_cState_Wait_00223e88;
  local_38 = iVar17;
  func_0010BEC4((int)puVar3,0,&local_38);
  puVar7 = (undefined4 *)puVar3[6];
  uVar12 = *(undefined4 *)(iVar10 + 0x10);
  uVar15 = *(undefined4 *)(iVar10 + 0x14);
  uVar16 = *(undefined4 *)(iVar10 + 0x18);
  uVar20 = *(undefined4 *)(iVar10 + 0x1c);
  uVar19 = *(undefined4 *)(iVar10 + 0x20);
  *puVar7 = *(undefined4 *)(iVar10 + 0xc);
  puVar7[1] = uVar12;
  puVar7 = (undefined4 *)puVar3[7];
  *puVar7 = uVar15;
  puVar7[1] = uVar16;
  puVar7 = (undefined4 *)puVar3[8];
  *puVar7 = uVar20;
  puVar7[1] = uVar19;
  local_34 = s_cState_Walk_00223e94;
  local_38 = iVar17;
  func_0010BEC4((int)puVar3,2,&local_38);
  iVar6 = puVar3[6];
  uVar15 = *(undefined4 *)(iVar10 + 0x28);
  uVar16 = *(undefined4 *)(iVar10 + 0x2c);
  uVar12 = *(undefined4 *)(iVar10 + 0x30);
  *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(iVar10 + 0x24);
  *(undefined4 *)(iVar6 + 0x14) = uVar15;
  iVar6 = puVar3[7];
  *(undefined4 *)(iVar6 + 0x10) = uVar16;
  *(undefined4 *)(iVar6 + 0x14) = uVar12;
  iVar6 = puVar3[8];
  *(undefined4 *)(iVar6 + 0x10) = uVar20;
  *(undefined4 *)(iVar6 + 0x14) = uVar19;
  local_34 = s_cState_Jump_00223ea0;
  local_38 = iVar17;
  func_0010BEC4((int)puVar3,1,&local_38);
  iVar6 = puVar3[6];
  uVar12 = *(undefined4 *)(iVar10 + 0x38);
  uVar15 = *(undefined4 *)(iVar10 + 0x3c);
  uVar16 = *(undefined4 *)(iVar10 + 0x40);
  *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(iVar10 + 0x34);
  *(undefined4 *)(iVar6 + 0xc) = uVar12;
  iVar6 = puVar3[7];
  *(undefined4 *)(iVar6 + 8) = uVar15;
  *(undefined4 *)(iVar6 + 0xc) = uVar16;
  iVar6 = puVar3[8];
  *(undefined4 *)(iVar6 + 8) = uVar20;
  *(undefined4 *)(iVar6 + 0xc) = uVar19;
  local_34 = s_cState_Reaction_00223eac;
  local_38 = iVar17;
  func_0010BEC4((int)puVar3,3,&local_38);
  iVar6 = puVar3[6];
  uVar15 = *(undefined4 *)(iVar10 + 0x50);
  uVar12 = *(undefined4 *)(iVar10 + 0x4c);
  uVar16 = *(undefined4 *)(iVar10 + 0x48);
  *(undefined4 *)(iVar6 + 0x18) = *(undefined4 *)(iVar10 + 0x44);
  *(undefined4 *)(iVar6 + 0x1c) = uVar16;
  iVar6 = puVar3[7];
  *(undefined4 *)(iVar6 + 0x18) = uVar12;
  *(undefined4 *)(iVar6 + 0x1c) = uVar15;
  iVar6 = puVar3[8];
  *(undefined4 *)(iVar6 + 0x18) = uVar20;
  *(undefined4 *)(iVar6 + 0x1c) = uVar19;
  local_34 = s_cState_Die_00223f98;
  local_38 = iVar17;
  func_0010BEC4((int)puVar3,4,&local_38);
  iVar17 = puVar3[6];
  uVar15 = *(undefined4 *)(iVar10 + 0x60);
  uVar12 = *(undefined4 *)(iVar10 + 0x58);
  uVar16 = *(undefined4 *)(iVar10 + 0x5c);
  *(undefined4 *)(iVar17 + 0x20) = *(undefined4 *)(iVar10 + 0x54);
  *(undefined4 *)(iVar17 + 0x24) = uVar12;
  iVar10 = puVar3[7];
  *(undefined4 *)(iVar10 + 0x20) = uVar16;
  *(undefined4 *)(iVar10 + 0x24) = uVar15;
  iVar10 = puVar3[8];
  *(undefined4 *)(iVar10 + 0x20) = uVar20;
  *(undefined4 *)(iVar10 + 0x24) = uVar19;
  func_0065E630(puVar3,0);
  puVar3[-0x115] = ALBW_AS_U32(ALBW_AS_F32(puVar3[-0x115]) - DAT_00223fa4);
  uVar12 = DAT_00223fac;
  uVar15 = DAT_00223fa8;
  if ((short)param_2[0xb] != 1) {
    uVar12 = DAT_00223fb4;
    uVar15 = DAT_00223fb0;
  }
  puVar3[-0x143] = uVar15;
  puVar3[-0x142] = uVar12;
  return puVar13;
}

