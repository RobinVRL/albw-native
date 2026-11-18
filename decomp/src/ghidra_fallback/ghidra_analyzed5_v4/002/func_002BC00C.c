#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F87F8(int param_1,int param_2);
extern int func_004FACA4(int param_1,uint param_2,int *param_3);
extern float func_004FAD90(int param_1);
extern int func_004FB344(int param_1,int param_2);
extern int func_004FB468(int param_1);
extern int func_004FBA18(int param_1,undefined1 param_2,undefined1 param_3,int param_4,int param_5, undefined1 param_6,ushort param_7,float fparam_0,float fparam_1);
extern int func_004FCDF4(int param_1,int param_2);
extern int func_004FD038(int param_1,undefined1 param_2);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern int func_006628D0(undefined4 *param_1,undefined1 param_2);
extern uint *DAT_002bc3d8;
extern int DAT_002bc3dc;
extern int DAT_002bc3e0;
extern undefined4 DAT_002bc3e4;
extern float DAT_002bc3e8;
extern undefined4 DAT_002bc3ec;
extern float DAT_002bc3f0;
extern int DAT_002bc3f4;
extern int DAT_002bc3f8;
extern undefined *DAT_002bc3fc;
extern int DAT_002bc400;
extern int DAT_002bc410;
extern undefined4 DAT_002bc53c;
extern float DAT_002bc540;
extern char s_cState_Awake_002bc414[];
extern char s_cState_Die_002bc440[];
extern char s_cState_Move_002bc424[];
extern char s_cState_Reaction_002bc430[];
extern char s_cState_Stop_002bc404[];

// USA 002BC00C <- EU 002BBFE8 (Ghidra, non-matching)
// GLOBAL DAT_002bc3d8 uint *
// GLOBAL DAT_002bc3dc int
// GLOBAL DAT_002bc3e0 int
// GLOBAL DAT_002bc3e4 undefined4
// GLOBAL DAT_002bc3e8 float
// GLOBAL DAT_002bc3ec undefined4
// GLOBAL DAT_002bc3f0 float
// GLOBAL DAT_002bc3f4 int
// GLOBAL DAT_002bc3f8 int
// GLOBAL DAT_002bc3fc undefined *
// GLOBAL DAT_002bc400 int
// GLOBAL DAT_002bc410 int
// GLOBAL DAT_002bc53c undefined4
// GLOBAL DAT_002bc540 float
// GLOBAL s_cState_Awake_002bc414 string
// GLOBAL s_cState_Die_002bc440 string
// GLOBAL s_cState_Move_002bc424 string
// GLOBAL s_cState_Reaction_002bc430 string
// GLOBAL s_cState_Stop_002bc404 string

undefined4 * func_002BC00C(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  float fVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  float *in_r3;
  undefined4 *puVar12;
  uint uVar13;
  undefined4 uVar14;
  uint in_fpscr;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(char * *)(albw_frame + 0xc))
  piVar3 = func_004FD464(param_1,param_2,DAT_002bc3d8);
  iVar8 = DAT_002bc3dc;
  *piVar3 = DAT_002bc3dc;
  piVar3[200] = iVar8 + 0x84;
  puVar4 = func_0010A794(piVar3 + 0x22f);
  iVar8 = DAT_002bc3e0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  uVar11 = *(undefined4 *)(iVar8 + 4);
  puVar4[0xc] = *(undefined4 *)(iVar8 + 8);
  uVar9 = DAT_002bc3ec;
  fVar16 = DAT_002bc3e8;
  puVar4[9] = DAT_002bc3e4;
  puVar4[10] = puVar4 + -0x22f;
  puVar4[0xb] = uVar11;
  puVar12 = puVar4 + -0x22f;
  puVar4[0xd] = ALBW_AS_U32(fVar16);
  puVar4[0xe] = ALBW_AS_U32(fVar16);
  puVar4[0xf] = 0;
  puVar4[0x10] = 0;
  puVar4[0x11] = 0;
  puVar4[0x12] = 0;
  puVar4[0x13] = uVar9;
  *(undefined1 *)(puVar4 + 0x14) = 0xff;
  fVar2 = DAT_002bc3f0;
  *(bool *)((int)puVar4 + 0x51) = *(short *)((int)param_2 + 0x32) != 0;
  *(undefined2 *)(puVar4 + 0x15) = 0;
  fVar15 = (float)VectorSignedToFloat((int)*(short *)((int)param_2 + 0x2a),
                                      (byte)(in_fpscr >> 0x15) & 3);
  if ((fVar16 <= fVar15) && (fVar16 = fVar15, fVar2 < fVar15)) {
    fVar16 = fVar2;
  }
  *(short *)((int)puVar4 + 0x52) = (short)(int)fVar16;
  func_004FB344((int)puVar12,7);
  iVar5 = DAT_002bc3f4;
  uVar13 = 0;
  do {
    func_004FACA4((int)puVar12,uVar13,(int *)(iVar5 + uVar13 * 8));
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 7);
  func_004FB468((int)puVar12);
  puVar4[-0xef] = *(undefined4 *)(DAT_002bc3f8 + 4);
  func_004F5BD8((int)puVar12,(uint *)0x0,(int **)0x0,in_r3);
  uVar9 = *(undefined4 *)(iVar8 + 0xc);
  uVar11 = *(undefined4 *)(iVar8 + 0x10);
  puVar4[10] = puVar12;
  puVar4[0xb] = uVar9;
  puVar4[0xc] = uVar11;
  puVar4[-0x134] = puVar4 + 9;
  *(undefined1 *)((int)puVar4 + 6) = 5;
  puVar4[5] = puVar12;
  iVar5 = func_0010BA78(0x50);
  puVar4[6] = iVar5;
  puVar4[7] = iVar5 + (uint)*(byte *)((int)puVar4 + 6) * 8;
  iVar10 = 5;
  puVar6 = (undefined4 *)(iVar5 + -8);
  do {
    uVar9 = *(undefined4 *)(iVar8 + 0x70);
    iVar10 = iVar10 + -1;
    puVar6[2] = *(undefined4 *)(iVar8 + 0x6c);
    puVar6[3] = uVar9;
    uVar9 = *(undefined4 *)(iVar8 + 0x70);
    puVar6[4] = *(undefined4 *)(iVar8 + 0x6c);
    puVar6[5] = uVar9;
    puVar6 = puVar6 + 4;
  } while (iVar10 != 0);
  bVar1 = *(byte *)((int)puVar4 + 6);
  uVar13 = (uint)bVar1;
  puVar6 = (undefined4 *)func_0010BA78(uVar13 << 3);
  puVar4[8] = puVar6;
  if (uVar13 != 0) {
    puVar7 = puVar6 + -2;
    if ((bVar1 & 1) != 0) {
      uVar9 = *(undefined4 *)(iVar8 + 0x28);
      *puVar6 = *(undefined4 *)(iVar8 + 0x24);
      puVar6[1] = uVar9;
      puVar7 = puVar6;
    }
    for (iVar5 = (int)uVar13 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      uVar9 = *(undefined4 *)(iVar8 + 0x28);
      puVar7[2] = *(undefined4 *)(iVar8 + 0x24);
      puVar7[3] = uVar9;
      uVar9 = *(undefined4 *)(iVar8 + 0x28);
      puVar7[4] = *(undefined4 *)(iVar8 + 0x24);
      puVar7[5] = uVar9;
      puVar7 = puVar7 + 4;
    }
  }
  puVar6 = (undefined4 *)func_0010CEE0(0xbc,(int *)0x0,4);
  iVar5 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 0x24;
    puVar6[1] = 5;
    iVar5 = func_00100118((int)(puVar6 + 2),DAT_002bc3fc,0x24,5);
  }
  if (iVar5 != 0) {
    puVar4[3] = iVar5;
    puVar4[2] = 5;
  }
  iVar5 = DAT_002bc400;
  puVar4[-0x15a] = puVar4;
  iVar10 = DAT_002bc410;
  *(undefined2 *)(iVar5 + (int)puVar12) = 5;
  local_34 = s_cState_Stop_002bc404;
  local_38 = iVar10;
  func_0010BEC4((int)puVar4,0,&local_38);
  puVar6 = (undefined4 *)puVar4[6];
  uVar11 = *(undefined4 *)(iVar8 + 0x18);
  uVar14 = *(undefined4 *)(iVar8 + 0x1c);
  uVar9 = *(undefined4 *)(iVar8 + 0x20);
  uVar18 = *(undefined4 *)(iVar8 + 0x24);
  uVar17 = *(undefined4 *)(iVar8 + 0x28);
  *puVar6 = *(undefined4 *)(iVar8 + 0x14);
  puVar6[1] = uVar11;
  puVar6 = (undefined4 *)puVar4[7];
  puVar6[1] = uVar9;
  *puVar6 = uVar14;
  puVar6 = (undefined4 *)puVar4[8];
  *puVar6 = uVar18;
  puVar6[1] = uVar17;
  local_34 = s_cState_Awake_002bc414;
  local_38 = iVar10;
  func_0010BEC4((int)puVar4,1,&local_38);
  iVar5 = puVar4[6];
  uVar11 = *(undefined4 *)(iVar8 + 0x30);
  uVar9 = *(undefined4 *)(iVar8 + 0x34);
  uVar14 = *(undefined4 *)(iVar8 + 0x38);
  *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(iVar8 + 0x2c);
  *(undefined4 *)(iVar5 + 0xc) = uVar11;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 8) = uVar9;
  *(undefined4 *)(iVar5 + 0xc) = uVar14;
  iVar5 = puVar4[8];
  *(undefined4 *)(iVar5 + 8) = uVar18;
  *(undefined4 *)(iVar5 + 0xc) = uVar17;
  local_34 = s_cState_Move_002bc424;
  local_38 = iVar10;
  func_0010BEC4((int)puVar4,2,&local_38);
  iVar5 = puVar4[6];
  uVar9 = *(undefined4 *)(iVar8 + 0x40);
  uVar14 = *(undefined4 *)(iVar8 + 0x44);
  uVar11 = *(undefined4 *)(iVar8 + 0x48);
  *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(iVar8 + 0x3c);
  *(undefined4 *)(iVar5 + 0x14) = uVar9;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 0x10) = uVar14;
  *(undefined4 *)(iVar5 + 0x14) = uVar11;
  iVar5 = puVar4[8];
  *(undefined4 *)(iVar5 + 0x10) = uVar18;
  *(undefined4 *)(iVar5 + 0x14) = uVar17;
  local_34 = s_cState_Reaction_002bc430;
  local_38 = iVar10;
  func_0010BEC4((int)puVar4,3,&local_38);
  iVar5 = puVar4[6];
  uVar9 = *(undefined4 *)(iVar8 + 0x54);
  uVar11 = *(undefined4 *)(iVar8 + 0x58);
  uVar14 = *(undefined4 *)(iVar8 + 0x50);
  *(undefined4 *)(iVar5 + 0x18) = *(undefined4 *)(iVar8 + 0x4c);
  *(undefined4 *)(iVar5 + 0x1c) = uVar14;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 0x18) = uVar9;
  *(undefined4 *)(iVar5 + 0x1c) = uVar11;
  iVar5 = puVar4[8];
  *(undefined4 *)(iVar5 + 0x18) = uVar18;
  *(undefined4 *)(iVar5 + 0x1c) = uVar17;
  local_34 = s_cState_Die_002bc440;
  local_38 = iVar10;
  func_0010BEC4((int)puVar4,4,&local_38);
  iVar5 = puVar4[6];
  uVar9 = *(undefined4 *)(iVar8 + 0x60);
  uVar11 = *(undefined4 *)(iVar8 + 100);
  uVar14 = *(undefined4 *)(iVar8 + 0x68);
  *(undefined4 *)(iVar5 + 0x20) = *(undefined4 *)(iVar8 + 0x5c);
  *(undefined4 *)(iVar5 + 0x24) = uVar9;
  fVar16 = DAT_002bc540;
  iVar8 = puVar4[7];
  *(undefined4 *)(iVar8 + 0x20) = uVar11;
  *(undefined4 *)(iVar8 + 0x24) = uVar14;
  iVar8 = puVar4[8];
  *(undefined4 *)(iVar8 + 0x20) = uVar18;
  *(undefined4 *)(iVar8 + 0x24) = uVar17;
  puVar4[-200] = puVar4[-200] | 0x60800;
  func_004FBA18((int)puVar12,6,0xff,-1,-1,0,(ushort)DAT_002bc53c,fVar16,fVar16);
  puVar4[-200] = puVar4[-200] & 0xffffffcf;
  func_004F87F8((int)puVar12,2);
  puVar4[-200] = puVar4[-200] & 0xffffff7b;
  func_004FD038((int)(puVar4 + -0xc5),0);
  func_004FAD90((int)puVar12);
  *(undefined2 *)(puVar4[-0x123] + 0x28) = 0xe0;
  puVar4[-200] = puVar4[-200] & 0xfffffffd;
  func_004FCDF4((int)(puVar4 + -0xc5),0);
  *(uint *)(puVar4[-0x126] + 0x2c) = *(uint *)(puVar4[-0x126] + 0x2c) | 0x100000;
  func_006628D0(puVar4,0);
  return puVar12;
}

