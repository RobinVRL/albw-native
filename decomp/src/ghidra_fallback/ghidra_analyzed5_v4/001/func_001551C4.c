#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_002B1FDC(int param_1,int param_2);
extern int func_002B1FF4(int param_1,int param_2);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F87F8(int param_1,int param_2);
extern int func_004FA890(int param_1);
extern int func_004FACA4(int param_1,uint param_2,int *param_3);
extern int func_004FB344(int param_1,int param_2);
extern int func_004FB468(int param_1);
extern int func_004FBA18(int param_1,undefined1 param_2,undefined1 param_3,int param_4,int param_5, undefined1 param_6,ushort param_7,float fparam_0,float fparam_1);
extern int func_004FC218(int param_1,char param_2,int param_3,ushort param_4);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern int func_00564A78(int param_1,int *param_2);
extern int func_00588BF0(int param_1,int param_2);
extern int func_00657D18(undefined4 *param_1,undefined1 param_2);
extern uint *DAT_001555a8;
extern int DAT_001555ac;
extern undefined4 DAT_001555b0;
extern undefined4 DAT_001555b4;
extern undefined4 DAT_001555b8;
extern float DAT_001555bc;
extern int DAT_001555c0;
extern undefined4 *DAT_001555c4;
extern float DAT_001555c8;
extern uint DAT_001555cc;
extern undefined DAT_001555d0;
extern int DAT_001555d8;
extern undefined *DAT_001555dc;
extern int DAT_001555e0;
extern uint DAT_00155920;
extern float DAT_00155924;
extern char s_cState_Appear_001555f0[];
extern char s_cState_BombEd_001558e4[];
extern char s_cState_BombSt_001558d4[];
extern char s_cState_Chase_001558c4[];
extern char s_cState_Die_00155914[];
extern char s_cState_GoHome_001558f4[];
extern char s_cState_Hide_001555e4[];
extern char s_cState_Reaction_00155904[];
extern char s_cState_Wait_00155600[];

// USA 001551C4 <- EU 001551C8 (Ghidra, non-matching)
// GLOBAL DAT_001555a8 uint *
// GLOBAL DAT_001555ac int
// GLOBAL DAT_001555b0 undefined4
// GLOBAL DAT_001555b4 undefined4
// GLOBAL DAT_001555b8 undefined4
// GLOBAL DAT_001555bc float
// GLOBAL DAT_001555c0 int
// GLOBAL DAT_001555c4 undefined4 *
// GLOBAL DAT_001555c8 float
// GLOBAL DAT_001555cc uint
// GLOBAL DAT_001555d0 undefined
// GLOBAL DAT_001555d8 int
// GLOBAL DAT_001555dc undefined *
// GLOBAL DAT_001555e0 int
// GLOBAL DAT_00155920 uint
// GLOBAL DAT_00155924 float
// GLOBAL s_cState_Appear_001555f0 string
// GLOBAL s_cState_BombEd_001558e4 string
// GLOBAL s_cState_BombSt_001558d4 string
// GLOBAL s_cState_Chase_001558c4 string
// GLOBAL s_cState_Die_00155914 string
// GLOBAL s_cState_GoHome_001558f4 string
// GLOBAL s_cState_Hide_001555e4 string
// GLOBAL s_cState_Reaction_00155904 string
// GLOBAL s_cState_Wait_00155600 string

/* WARNING: Variable defined which should be unmapped: objStack_48 */

undefined4 * func_001551C4(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  float fVar2;
  bool bVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  ushort uVar12;
  float *pfVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  uint uVar16;
  uint uVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined8 uVar23;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define objStack_48 ((uint *)(albw_frame + 0x8))
  #define local_38 (*(uint *)(albw_frame + 0x18))
  #define local_34 (*(char * *)(albw_frame + 0x1c))
  piVar4 = func_004FD464(param_1,param_2,DAT_001555a8);
  iVar10 = DAT_001555ac;
  *piVar4 = DAT_001555ac;
  piVar4[200] = iVar10 + 0x84;
  puVar5 = func_0010A794(piVar4 + 0x22f);
  puVar5[5] = 0;
  uVar15 = DAT_001555b0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[9] = uVar15;
  uVar15 = DAT_001555b4;
  pfVar13 = (float *)(puVar5 + 10);
  *pfVar13 = ALBW_AS_F32((puVar5 + -0x22f));
  puVar5[0xb] = 0xffffffff;
  puVar5[0xc] = uVar15;
  puVar5[0xd] = uVar15;
  puVar5[0xe] = uVar15;
  puVar5[0xf] = 0;
  puVar5[0x10] = 0;
  puVar5[0x11] = 0;
  puVar5[0x12] = 0;
  puVar5[0x14] = uVar15;
  uVar15 = DAT_001555b8;
  puVar5[0x16] = 0xffff;
  puVar5[0x17] = uVar15;
  puVar5[0x15] = 0;
  puVar5[0x19] = 0xffff;
  fVar2 = DAT_001555bc;
  puVar5[0x1a] = uVar15;
  puVar5[0x18] = 0;
  puVar5[0x1b] = 0xffffffff;
  *(undefined1 *)(puVar5 + 0x1c) = 0;
  fVar18 = ALBW_AS_F32(param_2[2]);
  uVar16 = param_2[1];
  uVar17 = param_2[3];
  puVar5[-0x155] = uVar16;
  puVar14 = puVar5 + -0x22f;
  puVar5[-0x154] = ALBW_AS_U32(fVar18 + fVar2);
  puVar5[-0x153] = uVar17;
  puVar5[-0x13b] = uVar16;
  puVar5[-0x13a] = ALBW_AS_U32(fVar18 + fVar2);
  puVar5[-0x139] = uVar17;
  func_004FB344((int)puVar14,6);
  iVar10 = DAT_001555c0;
  uVar16 = 0;
  do {
    func_004FACA4((int)puVar14,uVar16,(int *)(iVar10 + uVar16 * 8));
    uVar16 = uVar16 + 1;
  } while ((int)uVar16 < 6);
  func_004FB468((int)puVar14);
  func_004F5BD8((int)puVar14,(uint *)0x0,(int **)0x0,pfVar13);
  fVar2 = DAT_001555c8;
  puVar9 = DAT_001555c4;
  puVar5[-0x11c] = *DAT_001555c4;
  puVar5[-0x11b] = puVar9[1];
  puVar5[-0x11a] = puVar9[2];
  puVar5[-0x116] = *puVar9;
  puVar5[-0x115] = puVar9[1];
  puVar5[-0x114] = puVar9[2];
  uVar16 = DAT_001555cc;
  puVar5[0x14] = ALBW_AS_U32(ALBW_AS_F32(param_2[2]) + fVar2);
  objStack_48[1] = (uint)&DAT_001555d0;
  objStack_48[0] = uVar16;
  uVar17 = func_00564A78(puVar5[-300],(int *)objStack_48);
  if (uVar17 != 0xffff) {
    puVar5[0xb] = uVar17;
    puVar6 = (uint *)(*(int *)(*(int *)(puVar5[-300] + 0x24) + 0xc) + uVar17 * 0x40);
    *puVar6 = *puVar6 | 0x10;
    *(undefined4 **)(puVar5[-300] + 0x16c) = puVar5 + 9;
  }
  puVar5[5] = puVar14;
  *(undefined1 *)((int)puVar5 + 6) = 9;
  iVar7 = func_0010BA78(0x90);
  iVar10 = DAT_001555d8;
  puVar5[6] = iVar7;
  puVar5[7] = iVar7 + (uint)*(byte *)((int)puVar5 + 6) * 8;
  iVar8 = 9;
  puVar9 = (undefined4 *)(iVar7 + -8);
  do {
    uVar15 = *(undefined4 *)(iVar10 + 0xa8);
    iVar8 = iVar8 + -1;
    puVar9[2] = *(undefined4 *)(iVar10 + 0xa4);
    puVar9[3] = uVar15;
    uVar15 = *(undefined4 *)(iVar10 + 0xa8);
    puVar9[4] = *(undefined4 *)(iVar10 + 0xa4);
    puVar9[5] = uVar15;
    puVar9 = puVar9 + 4;
  } while (iVar8 != 0);
  bVar1 = *(byte *)((int)puVar5 + 6);
  uVar17 = (uint)bVar1;
  puVar9 = (undefined4 *)func_0010BA78(uVar17 << 3);
  puVar5[8] = puVar9;
  if (uVar17 != 0) {
    puVar11 = puVar9 + -2;
    if ((bVar1 & 1) != 0) {
      uVar15 = *(undefined4 *)(iVar10 + 0x18);
      *puVar9 = *(undefined4 *)(iVar10 + 0x14);
      puVar9[1] = uVar15;
      puVar11 = puVar9;
    }
    for (iVar7 = (int)uVar17 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
      uVar15 = *(undefined4 *)(iVar10 + 0x18);
      puVar11[2] = *(undefined4 *)(iVar10 + 0x14);
      puVar11[3] = uVar15;
      uVar15 = *(undefined4 *)(iVar10 + 0x18);
      puVar11[4] = *(undefined4 *)(iVar10 + 0x14);
      puVar11[5] = uVar15;
      puVar11 = puVar11 + 4;
    }
  }
  puVar9 = (undefined4 *)func_0010CEE0(0x14c,(int *)0x0,4);
  iVar7 = 0;
  if (puVar9 != (undefined4 *)0x0) {
    *puVar9 = 0x24;
    puVar9[1] = 9;
    iVar7 = func_00100118((int)(puVar9 + 2),DAT_001555dc,0x24,9);
  }
  if (iVar7 != 0) {
    puVar5[3] = iVar7;
    puVar5[2] = 9;
  }
  iVar7 = DAT_001555e0;
  puVar5[-0x15a] = puVar5;
  *(undefined2 *)(iVar7 + (int)puVar14) = 9;
  local_34 = s_cState_Hide_001555e4;
  local_38 = uVar16;
  func_0010BEC4((int)puVar5,0,(int *)&local_38);
  puVar9 = (undefined4 *)puVar5[6];
  uVar15 = *(undefined4 *)(iVar10 + 8);
  uVar19 = *(undefined4 *)(iVar10 + 0xc);
  uVar20 = *(undefined4 *)(iVar10 + 0x10);
  uVar21 = *(undefined4 *)(iVar10 + 0x14);
  uVar22 = *(undefined4 *)(iVar10 + 0x18);
  *puVar9 = *(undefined4 *)(iVar10 + 4);
  puVar9[1] = uVar15;
  puVar9 = (undefined4 *)puVar5[7];
  *puVar9 = uVar19;
  puVar9[1] = uVar20;
  puVar9 = (undefined4 *)puVar5[8];
  *puVar9 = uVar21;
  puVar9[1] = uVar22;
  local_34 = s_cState_Appear_001555f0;
  local_38 = uVar16;
  func_0010BEC4((int)puVar5,1,(int *)&local_38);
  iVar7 = puVar5[6];
  uVar15 = *(undefined4 *)(iVar10 + 0x20);
  uVar19 = *(undefined4 *)(iVar10 + 0x24);
  uVar20 = *(undefined4 *)(iVar10 + 0x28);
  uVar21 = *(undefined4 *)(iVar10 + 0x2c);
  uVar22 = *(undefined4 *)(iVar10 + 0x30);
  *(undefined4 *)(iVar7 + 8) = *(undefined4 *)(iVar10 + 0x1c);
  *(undefined4 *)(iVar7 + 0xc) = uVar15;
  iVar7 = puVar5[7];
  *(undefined4 *)(iVar7 + 8) = uVar19;
  *(undefined4 *)(iVar7 + 0xc) = uVar20;
  iVar7 = puVar5[8];
  *(undefined4 *)(iVar7 + 8) = uVar21;
  *(undefined4 *)(iVar7 + 0xc) = uVar22;
  local_34 = s_cState_Wait_00155600;
  local_38 = uVar16;
  func_0010BEC4((int)puVar5,2,(int *)&local_38);
  iVar7 = puVar5[6];
  uVar19 = *(undefined4 *)(iVar10 + 0x38);
  uVar15 = *(undefined4 *)(iVar10 + 0x3c);
  uVar20 = *(undefined4 *)(iVar10 + 0x40);
  uVar23 = *(undefined8 *)(iVar10 + 0x14);
  *(undefined4 *)(iVar7 + 0x10) = *(undefined4 *)(iVar10 + 0x34);
  *(undefined4 *)(iVar7 + 0x14) = uVar19;
  iVar7 = puVar5[7];
  *(undefined4 *)(iVar7 + 0x10) = uVar15;
  *(undefined4 *)(iVar7 + 0x14) = uVar20;
  iVar7 = puVar5[8];
  *(int *)(iVar7 + 0x10) = (int)uVar23;
  *(int *)(iVar7 + 0x14) = (int)((ulonglong)uVar23 >> 0x20);
  local_34 = s_cState_Chase_001558c4;
  local_38 = uVar16;
  func_0010BEC4((int)puVar5,3,(int *)&local_38);
  iVar7 = puVar5[6];
  uVar15 = *(undefined4 *)(iVar10 + 0x48);
  uVar19 = *(undefined4 *)(iVar10 + 0x4c);
  uVar20 = *(undefined4 *)(iVar10 + 0x50);
  *(undefined4 *)(iVar7 + 0x18) = *(undefined4 *)(iVar10 + 0x44);
  *(undefined4 *)(iVar7 + 0x1c) = uVar15;
  iVar7 = puVar5[7];
  *(undefined4 *)(iVar7 + 0x18) = uVar19;
  *(undefined4 *)(iVar7 + 0x1c) = uVar20;
  iVar7 = puVar5[8];
  *(int *)(iVar7 + 0x18) = (int)uVar23;
  *(int *)(iVar7 + 0x1c) = (int)((ulonglong)uVar23 >> 0x20);
  local_34 = s_cState_BombSt_001558d4;
  local_38 = uVar16;
  func_0010BEC4((int)puVar5,4,(int *)&local_38);
  iVar7 = puVar5[6];
  uVar19 = *(undefined4 *)(iVar10 + 0x58);
  uVar15 = *(undefined4 *)(iVar10 + 0x5c);
  uVar20 = *(undefined4 *)(iVar10 + 0x60);
  *(undefined4 *)(iVar7 + 0x20) = *(undefined4 *)(iVar10 + 0x54);
  *(undefined4 *)(iVar7 + 0x24) = uVar19;
  iVar7 = puVar5[7];
  *(undefined4 *)(iVar7 + 0x20) = uVar15;
  *(undefined4 *)(iVar7 + 0x24) = uVar20;
  iVar7 = puVar5[8];
  *(int *)(iVar7 + 0x20) = (int)uVar23;
  *(int *)(iVar7 + 0x24) = (int)((ulonglong)uVar23 >> 0x20);
  local_34 = s_cState_BombEd_001558e4;
  local_38 = uVar16;
  func_0010BEC4((int)puVar5,5,(int *)&local_38);
  iVar7 = puVar5[6];
  uVar20 = *(undefined4 *)(iVar10 + 0x70);
  uVar19 = *(undefined4 *)(iVar10 + 0x68);
  uVar15 = *(undefined4 *)(iVar10 + 0x6c);
  *(undefined4 *)(iVar7 + 0x28) = *(undefined4 *)(iVar10 + 100);
  *(undefined4 *)(iVar7 + 0x2c) = uVar19;
  iVar7 = puVar5[7];
  *(undefined4 *)(iVar7 + 0x28) = uVar15;
  *(undefined4 *)(iVar7 + 0x2c) = uVar20;
  iVar7 = puVar5[8];
  *(int *)(iVar7 + 0x28) = (int)uVar23;
  *(int *)(iVar7 + 0x2c) = (int)((ulonglong)uVar23 >> 0x20);
  local_34 = s_cState_GoHome_001558f4;
  local_38 = uVar16;
  func_0010BEC4((int)puVar5,6,(int *)&local_38);
  iVar7 = puVar5[6];
  uVar20 = *(undefined4 *)(iVar10 + 0x78);
  uVar15 = *(undefined4 *)(iVar10 + 0x7c);
  uVar19 = *(undefined4 *)(iVar10 + 0x80);
  *(undefined4 *)(iVar7 + 0x30) = *(undefined4 *)(iVar10 + 0x74);
  *(undefined4 *)(iVar7 + 0x34) = uVar20;
  iVar7 = puVar5[7];
  *(undefined4 *)(iVar7 + 0x30) = uVar15;
  *(undefined4 *)(iVar7 + 0x34) = uVar19;
  iVar7 = puVar5[8];
  *(int *)(iVar7 + 0x30) = (int)uVar23;
  *(int *)(iVar7 + 0x34) = (int)((ulonglong)uVar23 >> 0x20);
  local_34 = s_cState_Reaction_00155904;
  local_38 = uVar16;
  func_0010BEC4((int)puVar5,7,(int *)&local_38);
  iVar7 = puVar5[6];
  uVar19 = *(undefined4 *)(iVar10 + 0x88);
  uVar15 = *(undefined4 *)(iVar10 + 0x8c);
  uVar20 = *(undefined4 *)(iVar10 + 0x90);
  *(undefined4 *)(iVar7 + 0x38) = *(undefined4 *)(iVar10 + 0x84);
  *(undefined4 *)(iVar7 + 0x3c) = uVar19;
  iVar7 = puVar5[7];
  *(undefined4 *)(iVar7 + 0x38) = uVar15;
  *(undefined4 *)(iVar7 + 0x3c) = uVar20;
  iVar7 = puVar5[8];
  *(int *)(iVar7 + 0x38) = (int)uVar23;
  *(int *)(iVar7 + 0x3c) = (int)((ulonglong)uVar23 >> 0x20);
  local_34 = s_cState_Die_00155914;
  local_38 = uVar16;
  func_0010BEC4((int)puVar5,8,(int *)&local_38);
  iVar7 = puVar5[6];
  uVar15 = *(undefined4 *)(iVar10 + 0x98);
  uVar19 = *(undefined4 *)(iVar10 + 0x9c);
  uVar20 = *(undefined4 *)(iVar10 + 0xa0);
  *(undefined4 *)(iVar7 + 0x40) = *(undefined4 *)(iVar10 + 0x94);
  *(undefined4 *)(iVar7 + 0x44) = uVar15;
  iVar10 = puVar5[7];
  *(undefined4 *)(iVar10 + 0x40) = uVar19;
  *(undefined4 *)(iVar10 + 0x44) = uVar20;
  iVar10 = puVar5[8];
  *(int *)(iVar10 + 0x40) = (int)uVar23;
  *(int *)(iVar10 + 0x44) = (int)((ulonglong)uVar23 >> 0x20);
  if ((*(short *)((int)puVar5 + -0x886) == 0) || (bVar3 = func_00588BF0((int)puVar14,0), bVar3)) {
    func_00657D18(puVar5,2);
  }
  else {
    func_00657D18(puVar5,0);
  }
  func_004F87F8((int)puVar14,2);
  func_004FA890((int)puVar14);
  uVar16 = DAT_00155920;
  puVar5[-0xce] = puVar5[-0xce] | 0x800;
  uVar12 = (ushort)uVar16;
  func_004FC218((int)puVar14,'\x04',-1,uVar12);
  func_002B1FF4((int)puVar14,0);
  objStack_48[2] = uVar16;
  objStack_48[1] = 0;
  objStack_48[0] = 0xffffffff;
  func_004FBA18((int)puVar14,4,0xff,0,-1,0,uVar12,DAT_00155924,DAT_00155924);
  func_002B1FDC((int)puVar14,0);
  return puVar14;
}

