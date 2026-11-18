#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00100174(int *param_1);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0027033C(uint param_1,int *param_2,undefined4 *param_3,int param_4);
extern int func_002E1BB4(undefined4 *param_1,undefined2 param_2);
extern int func_0036720C(int param_1,int param_2,undefined2 param_3,int param_4,int param_5, undefined1 param_6,int param_7);
extern int func_003673F4(undefined4 *param_1,int param_2);
extern int func_004BC8D8(int param_1);
extern int func_004BD474(int param_1);
extern float func_004BDB2C(undefined4 param_1,int param_2,float fparam_0);
extern int func_004BE114(int * param_1,int param_2,int param_3,int param_4,undefined4 param_5);
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern int func_00588BF0(int param_1,int param_2);
extern int func_00613D54(int param_1,int param_2,undefined1 param_3);
extern int func_006149EC(undefined4 *param_1,uint *param_2,undefined4 param_3,undefined1 param_4, undefined4 *param_5);
extern int DAT_00187134;
extern undefined4 DAT_00187138;
extern undefined4 DAT_0018713c;
extern uint DAT_00187140;
extern uint *DAT_00187144;
extern undefined4 *DAT_00187148;
extern uint *DAT_0018714c;
extern int DAT_0018716c;
extern float DAT_00187170;
extern undefined4 DAT_00187174;
extern undefined DAT_00187178;
extern uint DAT_00187188;
extern undefined4 *DAT_0018718c;
extern undefined *DAT_00187190;
extern int DAT_00187194;
extern undefined4 *DAT_00187394;
extern float DAT_00187398;
extern float DAT_0018739c;
extern undefined4 DAT_001873a0;
extern undefined4 DAT_001873a4;
extern char s_Environment_GlassFilter_bch_00187150[];
extern char s_cState_EventEnd_001871c0[];
extern char s_cState_Event_001871b0[];
extern char s_cState_Hide_00187378[];
extern char s_cState_Surprise_00187384[];
extern char s_cState_Wait_00187198[];
extern char s_cState_Walk_001871a4[];
extern char s_cf_00187150[];

// USA 00186CB4 <- EU 00186CB4 (Ghidra, non-matching)
// GLOBAL DAT_00187134 int
// GLOBAL DAT_00187138 undefined4
// GLOBAL DAT_0018713c undefined4
// GLOBAL DAT_00187140 uint
// GLOBAL DAT_00187144 uint *
// GLOBAL DAT_00187148 undefined4 *
// GLOBAL DAT_0018714c uint *
// GLOBAL DAT_0018716c int
// GLOBAL DAT_00187170 float
// GLOBAL DAT_00187174 undefined4
// GLOBAL DAT_00187178 undefined
// GLOBAL DAT_00187188 uint
// GLOBAL DAT_0018718c undefined4 *
// GLOBAL DAT_00187190 undefined *
// GLOBAL DAT_00187194 int
// GLOBAL DAT_00187394 undefined4 *
// GLOBAL DAT_00187398 float
// GLOBAL DAT_0018739c float
// GLOBAL DAT_001873a0 undefined4
// GLOBAL DAT_001873a4 undefined4
// GLOBAL s_cf_00187150 string
// GLOBAL s_cState_EventEnd_001871c0 string
// GLOBAL s_cState_Event_001871b0 string
// GLOBAL s_cState_Hide_00187378 string
// GLOBAL s_cState_Surprise_00187384 string
// GLOBAL s_cState_Wait_00187198 string
// GLOBAL s_cState_Walk_001871a4 string

/* WARNING: Variable defined which should be unmapped: objStack_58 */

int * func_00186CB4(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined4 *puVar3;
  bool bVar4;
  ushort uVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define objStack_58 ((uint *)(albw_frame + 0x8))
  #define local_48 (*(uint *)(albw_frame + 0x18))
  #define local_44 (*(char * *)(albw_frame + 0x1c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x28))
  #define local_34 (*(undefined1 *)(albw_frame + 0x2c))
  #define local_33 (*(undefined1 *)(albw_frame + 0x2d))
  objStack_58[0] = (uint)&local_40;
  local_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  local_34 = 0;
  local_33 = 1;
  piVar6 = (int *)func_006149EC(param_1,param_2,0,6,(undefined4 *)objStack_58[0]);
  iVar8 = DAT_00187134;
  piVar6[200] = DAT_00187134 + 0xb8;
  *piVar6 = iVar8;
  piVar6[0x263] = 0;
  piVar6[0x264] = 0;
  piVar6[0x265] = 0;
  piVar6[0x266] = 0;
  piVar6[0x267] = 0;
  piVar6[0x268] = 0;
  piVar6[0x269] = 0;
  piVar6[0x26a] = 0;
  piVar6[0x26b] = 0;
  piVar6[0x26c] = 0;
  piVar6[0x26d] = 0;
  piVar6[0x26e] = 0;
  piVar6[0x26f] = 0;
  piVar6[0x270] = 0;
  puVar7 = (undefined4 *)func_003673F4(piVar6 + 0x263,3);
  *puVar7 = DAT_00187138;
  *(undefined2 *)(puVar7 + 0xe) = 0;
  *(undefined1 *)((int)puVar7 + 0x3a) = 0;
  *(undefined1 *)((int)puVar7 + 0x3b) = 0;
  puVar7 = func_002E1BB4(puVar7 + 0xf,0);
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  puVar7[8] = 0;
  puVar7[9] = 0;
  puVar7[10] = 0;
  puVar7[0xb] = 0;
  puVar7[0xc] = 0;
  puVar7[0xd] = 0;
  uVar14 = DAT_0018713c;
  puVar7[0xe] = 0;
  puVar7[0xf] = 0;
  puVar7[0x10] = uVar14;
  puVar7[0x11] = uVar14;
  uVar2 = DAT_00187140;
  piVar6 = puVar7 + -0x272;
  uVar5 = *(ushort *)((int)puVar7 + -0x996) & 0xff;
  *(char *)((int)puVar7 + -2) = (char)*(ushort *)((int)puVar7 + -0x996);
  uVar14 = DAT_00187174;
  if (uVar5 == 1) {
    bVar4 = func_00588BF0((int)piVar6,0);
    if ((bVar4) && (bVar4 = func_00588BF0((int)piVar6,1), !bVar4)) {
      if (((*DAT_00187144 & 1) == 0) &&
         (iVar8 = func_00100174((int *)DAT_00187144), puVar3 = DAT_00187148, iVar8 != 0)) {
        *(undefined1 *)DAT_00187148 = 0xff;
        *(undefined1 *)((int)puVar3 + 1) = 0xff;
        *(undefined1 *)((int)puVar3 + 2) = 0xff;
        *(undefined1 *)((int)puVar3 + 3) = 0xff;
      }
      if (*DAT_0018714c != 0) {
        objStack_58[1] = (uint)s_Environment_GlassFilter_bch_00187150;
        objStack_58[0] = uVar2;
        func_0027033C(*DAT_0018714c,(int *)objStack_58,DAT_00187148,-1);
      }
      *(undefined2 *)(DAT_0018716c + (int)piVar6) = 0xaf;
      objStack_58[2] = 1;
      objStack_58[0] = 0;
      objStack_58[1] = 3;
      func_0036720C((int)(puVar7 + -0xf),1,0x15e,400,0,3,1);
    }
  }
  else if (uVar5 == 2) {
    puVar7[-0x17d] = ALBW_AS_U32(ALBW_AS_F32(puVar7[-0x17d]) + DAT_00187170);
    puVar7[-0x73] = uVar14;
    *(undefined1 *)((int)puVar7 + -0x173) = 5;
    *(undefined1 *)((int)puVar7 + -0x175) = 4;
    puVar7[-0x47] = puVar7[-0x47] | 0x10;
  }
  local_44 = &DAT_00187178;
  objStack_58[0] = DAT_00187188;
  local_48 = uVar2;
  func_004BE114(piVar6,7,0,0,DAT_00187188);
  puVar7[-0x15] = piVar6;
  *(undefined1 *)((int)puVar7 + -0x62) = 6;
  iVar8 = func_0010BA78(0x60);
  puVar3 = DAT_0018718c;
  puVar7[-0x14] = iVar8;
  puVar7[-0x13] = iVar8 + (uint)*(byte *)((int)puVar7 + -0x62) * 8;
  iVar11 = 6;
  puVar9 = (undefined4 *)(iVar8 + -8);
  do {
    uVar14 = puVar3[0x1f];
    iVar11 = iVar11 + -1;
    puVar9[2] = puVar3[0x1e];
    puVar9[3] = uVar14;
    uVar14 = puVar3[0x1f];
    puVar9[4] = puVar3[0x1e];
    puVar9[5] = uVar14;
    puVar9 = puVar9 + 4;
  } while (iVar11 != 0);
  bVar1 = *(byte *)((int)puVar7 + -0x62);
  uVar13 = (uint)bVar1;
  puVar9 = (undefined4 *)func_0010BA78(uVar13 << 3);
  puVar7[-0x12] = puVar9;
  if (uVar13 != 0) {
    puVar10 = puVar9 + -2;
    if ((bVar1 & 1) != 0) {
      uVar14 = puVar3[5];
      *puVar9 = puVar3[4];
      puVar9[1] = uVar14;
      puVar10 = puVar9;
    }
    for (iVar8 = (int)uVar13 >> 1; iVar8 != 0; iVar8 = iVar8 + -1) {
      uVar14 = puVar3[5];
      puVar10[2] = puVar3[4];
      puVar10[3] = uVar14;
      uVar14 = puVar3[5];
      puVar10[4] = puVar3[4];
      puVar10[5] = uVar14;
      puVar10 = puVar10 + 4;
    }
  }
  puVar9 = (undefined4 *)func_0010CEE0(0xe0,(int *)0x0,4);
  iVar8 = 0;
  if (puVar9 != (undefined4 *)0x0) {
    *puVar9 = 0x24;
    puVar9[1] = 6;
    iVar8 = func_00100118((int)(puVar9 + 2),DAT_00187190,0x24,6);
  }
  if (iVar8 != 0) {
    puVar7[-0x18] = 6;
    puVar7[-0x17] = iVar8;
  }
  iVar8 = DAT_00187194;
  puVar7[-0x19d] = puVar7 + -0x1a;
  *(undefined2 *)(iVar8 + (int)piVar6) = 6;
  local_44 = s_cState_Wait_00187198;
  local_48 = uVar2;
  func_0010BEC4((int)(puVar7 + -0x1a),0,(int *)&local_48);
  puVar9 = (undefined4 *)puVar7[-0x14];
  uVar12 = puVar3[1];
  uVar14 = puVar3[2];
  uVar15 = puVar3[3];
  uVar17 = puVar3[4];
  uVar16 = puVar3[5];
  *puVar9 = *puVar3;
  puVar9[1] = uVar12;
  puVar9 = (undefined4 *)puVar7[-0x13];
  *puVar9 = uVar14;
  puVar9[1] = uVar15;
  puVar9 = (undefined4 *)puVar7[-0x12];
  *puVar9 = uVar17;
  puVar9[1] = uVar16;
  local_44 = s_cState_Walk_001871a4;
  local_48 = uVar2;
  func_0010BEC4((int)(puVar7 + -0x1a),1,(int *)&local_48);
  iVar8 = puVar7[-0x14];
  uVar14 = puVar3[8];
  uVar12 = puVar3[9];
  uVar15 = puVar3[7];
  *(undefined4 *)(iVar8 + 8) = puVar3[6];
  *(undefined4 *)(iVar8 + 0xc) = uVar15;
  iVar8 = puVar7[-0x13];
  *(undefined4 *)(iVar8 + 8) = uVar14;
  *(undefined4 *)(iVar8 + 0xc) = uVar12;
  iVar8 = puVar7[-0x12];
  *(undefined4 *)(iVar8 + 8) = uVar17;
  *(undefined4 *)(iVar8 + 0xc) = uVar16;
  local_44 = s_cState_Event_001871b0;
  local_48 = uVar2;
  func_0010BEC4((int)(puVar7 + -0x1a),2,(int *)&local_48);
  iVar8 = puVar7[-0x14];
  uVar14 = puVar3[0xb];
  uVar15 = puVar3[0xc];
  uVar12 = puVar3[0xd];
  *(undefined4 *)(iVar8 + 0x10) = puVar3[10];
  *(undefined4 *)(iVar8 + 0x14) = uVar14;
  iVar8 = puVar7[-0x13];
  *(undefined4 *)(iVar8 + 0x10) = uVar15;
  *(undefined4 *)(iVar8 + 0x14) = uVar12;
  iVar8 = puVar7[-0x12];
  *(undefined4 *)(iVar8 + 0x10) = uVar17;
  *(undefined4 *)(iVar8 + 0x14) = uVar16;
  local_44 = s_cState_EventEnd_001871c0;
  local_48 = uVar2;
  func_0010BEC4((int)(puVar7 + -0x1a),3,(int *)&local_48);
  iVar8 = puVar7[-0x14];
  uVar12 = puVar3[0xf];
  uVar14 = puVar3[0x11];
  uVar17 = puVar3[0x10];
  uVar15 = puVar3[0x12];
  uVar16 = puVar3[0x13];
  *(undefined4 *)(iVar8 + 0x18) = puVar3[0xe];
  *(undefined4 *)(iVar8 + 0x1c) = uVar12;
  iVar8 = puVar7[-0x13];
  *(undefined4 *)(iVar8 + 0x18) = uVar17;
  *(undefined4 *)(iVar8 + 0x1c) = uVar14;
  iVar8 = puVar7[-0x12];
  *(undefined4 *)(iVar8 + 0x18) = uVar15;
  *(undefined4 *)(iVar8 + 0x1c) = uVar16;
  local_44 = s_cState_Hide_00187378;
  local_48 = uVar2;
  func_0010BEC4((int)(puVar7 + -0x1a),4,(int *)&local_48);
  iVar8 = puVar7[-0x14];
  uVar14 = puVar3[0x15];
  uVar12 = puVar3[0x16];
  uVar15 = puVar3[0x17];
  uVar16 = puVar3[0x18];
  uVar17 = puVar3[0x19];
  *(undefined4 *)(iVar8 + 0x20) = puVar3[0x14];
  *(undefined4 *)(iVar8 + 0x24) = uVar14;
  iVar8 = puVar7[-0x13];
  *(undefined4 *)(iVar8 + 0x20) = uVar12;
  *(undefined4 *)(iVar8 + 0x24) = uVar15;
  iVar8 = puVar7[-0x12];
  *(undefined4 *)(iVar8 + 0x20) = uVar16;
  *(undefined4 *)(iVar8 + 0x24) = uVar17;
  local_44 = s_cState_Surprise_00187384;
  local_48 = uVar2;
  func_0010BEC4((int)(puVar7 + -0x1a),5,(int *)&local_48);
  iVar8 = puVar7[-0x14];
  uVar16 = puVar3[0x1b];
  uVar14 = puVar3[0x1c];
  uVar12 = puVar3[4];
  uVar15 = puVar3[0x1d];
  uVar17 = puVar3[5];
  *(undefined4 *)(iVar8 + 0x28) = puVar3[0x1a];
  *(undefined4 *)(iVar8 + 0x2c) = uVar16;
  iVar8 = puVar7[-0x13];
  *(undefined4 *)(iVar8 + 0x28) = uVar14;
  *(undefined4 *)(iVar8 + 0x2c) = uVar15;
  iVar8 = puVar7[-0x12];
  *(undefined4 *)(iVar8 + 0x28) = uVar12;
  *(undefined4 *)(iVar8 + 0x2c) = uVar17;
  if (*(char *)((int)puVar7 + -2) == '\n') {
    func_004BD474((int)piVar6);
    func_00613D54((int)piVar6,0,0);
    puVar7[-0x11] = 0;
  }
  else {
    func_00613D54((int)piVar6,puVar7[-0x11],0);
  }
  func_004C03B8((int)piVar6,DAT_00187394);
  if (*(char *)((int)puVar7 + -2) == '\x02') {
    func_004BDB2C(piVar6,puVar7[-0x16f],DAT_00187398);
  }
  else if (*(char *)((int)puVar7 + -2) == '\n') {
    func_004BDB2C(piVar6,puVar7[-0x16f],DAT_0018739c);
  }
  uVar14 = DAT_001873a0;
  if (*(char *)((int)puVar7 + -2) != '\x03') {
    uVar14 = DAT_001873a4;
  }
  puVar7[-0x44] = uVar14;
  func_004BC8D8((int)piVar6);
  return piVar6;
}

