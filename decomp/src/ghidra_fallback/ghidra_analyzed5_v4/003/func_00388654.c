// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00100174(int *param_1);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0027033C(uint param_1,int *param_2,undefined4 *param_3,int param_4);
extern int func_002E1BB4(undefined4 *param_1,undefined2 param_2);
extern int func_00361604(int param_1,undefined1 param_2);
extern int func_0036720C(int param_1,int param_2,undefined2 param_3,int param_4,int param_5, undefined1 param_6,int param_7);
extern int func_003673F4(undefined4 *param_1,int param_2);
extern int func_004BC8D8(int param_1);
extern int func_004BE114(int * param_1,int param_2,int param_3,int param_4,undefined4 param_5);
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern int func_00556B2C(int param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int func_0062EC8C(int param_1,int param_2,undefined1 param_3);
extern int func_0062F910(undefined4 *param_1,uint *param_2,undefined4 param_3,undefined1 param_4, undefined4 *param_5);
extern int *piRam00388bc8;
extern undefined4 *puRam00388b30;
extern undefined4 *puRam00388b34;
extern undefined4 *puRam00388b38;
extern int DAT_00388ab8;
extern undefined4 DAT_00388abc;
extern undefined DAT_00388ac0;
extern uint DAT_00388ad4;
extern uint DAT_00388ad8;
extern undefined4 *DAT_00388adc;
extern undefined *DAT_00388ae0;
extern int DAT_00388ae4;
extern undefined4 *DAT_00388b2c;
extern char s_Environment_GlassFilter_bch_00388b3c[];
extern char s_cState_EventEnd_00388b10[];
extern char s_cState_Event_00388b00[];
extern char s_cState_Hide_00388b20[];
extern char s_cState_Wait_00388ae8[];
extern char s_cState_Walk_00388af4[];
extern char s_cf_00388b3c[];

// USA 00388654 <- EU 00388630 (Ghidra, non-matching)
// GLOBAL DAT_00388ab8 int
// GLOBAL DAT_00388abc undefined4
// GLOBAL DAT_00388ac0 undefined
// GLOBAL DAT_00388ad4 uint
// GLOBAL DAT_00388ad8 uint
// GLOBAL DAT_00388adc undefined4 *
// GLOBAL DAT_00388ae0 undefined *
// GLOBAL DAT_00388ae4 int
// GLOBAL DAT_00388b2c undefined4 *
// GLOBAL UNK_00388b30 uint *
// GLOBAL UNK_00388b34 undefined4 *
// GLOBAL UNK_00388b38 uint *
// GLOBAL UNK_00388bc8 int *
// GLOBAL s_cf_00388b3c string
// GLOBAL s_cState_EventEnd_00388b10 string
// GLOBAL s_cState_Event_00388b00 string
// GLOBAL s_cState_Hide_00388b20 string
// GLOBAL s_cState_Wait_00388ae8 string
// GLOBAL s_cState_Walk_00388af4 string

/* WARNING: Variable defined which should be unmapped: objStack_58 */

int * func_00388654(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  int *piVar3;
  bool bVar4;
  int *piVar5;
  undefined4 *puVar6;
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
  undefined8 uVar18;
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
  piVar5 = (int *)func_0062F910(param_1,param_2,0,0xff,(undefined4 *)objStack_58[0]);
  iVar8 = DAT_00388ab8;
  piVar5[200] = DAT_00388ab8 + 0xb8;
  *piVar5 = iVar8;
  piVar5[0x263] = 0;
  piVar5[0x264] = 0;
  piVar5[0x265] = 0;
  piVar5[0x266] = 0;
  piVar5[0x267] = 0;
  piVar5[0x268] = 0;
  piVar5[0x269] = 0;
  piVar5[0x26a] = 0;
  piVar5[0x26b] = 0;
  piVar5[0x26c] = 0;
  piVar5[0x26d] = 0;
  piVar5[0x26e] = 0;
  piVar5[0x26f] = 0;
  piVar5[0x270] = 0;
  puVar6 = (undefined4 *)func_003673F4(piVar5 + 0x263,3);
  *puVar6 = DAT_00388abc;
  puVar7 = func_002E1BB4(puVar6 + 0xe,0);
  piVar5 = puVar7 + -0x271;
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  puVar7[8] = 0;
  puVar7[9] = 0;
  puVar7[10] = 0;
  puVar7[0xb] = 0;
  puVar7[0xc] = 0;
  puVar7[0xd] = 0;
  puVar7[0xe] = 0;
  puVar7[0xf] = 0;
  *(undefined2 *)(puVar7 + 0x10) = 0;
  *(undefined1 *)((int)puVar7 + 0x42) = 0;
  puVar7[0x11] = 0;
  uVar2 = DAT_00388ad4;
  local_44 = &DAT_00388ac0;
  objStack_58[0] = DAT_00388ad8;
  local_48 = DAT_00388ad4;
  func_004BE114(piVar5,3,0,0,DAT_00388ad8);
  *(undefined1 *)((int)puVar7 + -0x5e) = 5;
  puVar7[-0x14] = piVar5;
  iVar8 = func_0010BA78(0x50);
  puVar7[-0x13] = iVar8;
  puVar6 = DAT_00388adc;
  puVar7[-0x12] = iVar8 + (uint)*(byte *)((int)puVar7 + -0x5e) * 8;
  iVar11 = 5;
  puVar9 = (undefined4 *)(iVar8 + -8);
  do {
    uVar14 = puVar6[0x1b];
    iVar11 = iVar11 + -1;
    puVar9[2] = puVar6[0x1a];
    puVar9[3] = uVar14;
    uVar14 = puVar6[0x1b];
    puVar9[4] = puVar6[0x1a];
    puVar9[5] = uVar14;
    puVar9 = puVar9 + 4;
  } while (iVar11 != 0);
  bVar1 = *(byte *)((int)puVar7 + -0x5e);
  uVar13 = (uint)bVar1;
  puVar9 = (undefined4 *)func_0010BA78(uVar13 << 3);
  puVar7[-0x11] = puVar9;
  if (uVar13 != 0) {
    puVar10 = puVar9 + -2;
    if ((bVar1 & 1) != 0) {
      uVar14 = puVar6[5];
      *puVar9 = puVar6[4];
      puVar9[1] = uVar14;
      puVar10 = puVar9;
    }
    for (iVar8 = (int)uVar13 >> 1; iVar8 != 0; iVar8 = iVar8 + -1) {
      uVar14 = puVar6[5];
      puVar10[2] = puVar6[4];
      puVar10[3] = uVar14;
      uVar14 = puVar6[5];
      puVar10[4] = puVar6[4];
      puVar10[5] = uVar14;
      puVar10 = puVar10 + 4;
    }
  }
  puVar9 = (undefined4 *)func_0010CEE0(0xbc,(int *)0x0,4);
  iVar8 = 0;
  if (puVar9 != (undefined4 *)0x0) {
    *puVar9 = 0x24;
    puVar9[1] = 5;
    iVar8 = func_00100118((int)(puVar9 + 2),DAT_00388ae0,0x24,5);
  }
  if (iVar8 != 0) {
    puVar7[-0x17] = 5;
    puVar7[-0x16] = iVar8;
  }
  iVar8 = DAT_00388ae4;
  puVar7[-0x19c] = puVar7 + -0x19;
  *(undefined2 *)(iVar8 + (int)piVar5) = 5;
  local_44 = s_cState_Wait_00388ae8;
  local_48 = uVar2;
  func_0010BEC4((int)(puVar7 + -0x19),0,(int *)&local_48);
  puVar9 = (undefined4 *)puVar7[-0x13];
  uVar15 = puVar6[2];
  uVar12 = *puVar6;
  uVar14 = puVar6[3];
  uVar18 = *(undefined8 *)(puVar6 + 4);
  puVar9[1] = puVar6[1];
  *puVar9 = uVar12;
  puVar9 = (undefined4 *)puVar7[-0x12];
  puVar9[1] = uVar14;
  *puVar9 = uVar15;
  puVar9 = (undefined4 *)puVar7[-0x11];
  *puVar9 = (int)uVar18;
  puVar9[1] = (int)((ulonglong)uVar18 >> 0x20);
  local_44 = s_cState_Walk_00388af4;
  local_48 = uVar2;
  func_0010BEC4((int)(puVar7 + -0x19),1,(int *)&local_48);
  iVar8 = puVar7[-0x13];
  uVar14 = puVar6[8];
  uVar12 = puVar6[9];
  uVar15 = puVar6[7];
  *(undefined4 *)(iVar8 + 8) = puVar6[6];
  *(undefined4 *)(iVar8 + 0xc) = uVar15;
  iVar8 = puVar7[-0x12];
  *(undefined4 *)(iVar8 + 8) = uVar14;
  *(undefined4 *)(iVar8 + 0xc) = uVar12;
  iVar8 = puVar7[-0x11];
  *(int *)(iVar8 + 8) = (int)uVar18;
  *(int *)(iVar8 + 0xc) = (int)((ulonglong)uVar18 >> 0x20);
  local_44 = s_cState_Event_00388b00;
  local_48 = uVar2;
  func_0010BEC4((int)(puVar7 + -0x19),2,(int *)&local_48);
  iVar8 = puVar7[-0x13];
  uVar15 = puVar6[0xb];
  uVar14 = puVar6[0xd];
  uVar12 = puVar6[0xc];
  *(undefined4 *)(iVar8 + 0x10) = puVar6[10];
  *(undefined4 *)(iVar8 + 0x14) = uVar15;
  iVar8 = puVar7[-0x12];
  *(undefined4 *)(iVar8 + 0x10) = uVar12;
  *(undefined4 *)(iVar8 + 0x14) = uVar14;
  iVar8 = puVar7[-0x11];
  *(int *)(iVar8 + 0x10) = (int)uVar18;
  *(int *)(iVar8 + 0x14) = (int)((ulonglong)uVar18 >> 0x20);
  local_44 = s_cState_EventEnd_00388b10;
  local_48 = uVar2;
  func_0010BEC4((int)(puVar7 + -0x19),3,(int *)&local_48);
  iVar8 = puVar7[-0x13];
  uVar14 = puVar6[0xf];
  uVar12 = puVar6[0x10];
  uVar15 = puVar6[0x11];
  uVar16 = puVar6[0x12];
  uVar17 = puVar6[0x13];
  *(undefined4 *)(iVar8 + 0x18) = puVar6[0xe];
  *(undefined4 *)(iVar8 + 0x1c) = uVar14;
  iVar8 = puVar7[-0x12];
  *(undefined4 *)(iVar8 + 0x18) = uVar12;
  *(undefined4 *)(iVar8 + 0x1c) = uVar15;
  iVar8 = puVar7[-0x11];
  *(undefined4 *)(iVar8 + 0x18) = uVar16;
  *(undefined4 *)(iVar8 + 0x1c) = uVar17;
  local_44 = s_cState_Hide_00388b20;
  local_48 = uVar2;
  func_0010BEC4((int)(puVar7 + -0x19),4,(int *)&local_48);
  iVar8 = puVar7[-0x13];
  uVar14 = puVar6[0x15];
  uVar12 = puVar6[0x16];
  uVar15 = puVar6[0x17];
  uVar16 = puVar6[0x18];
  uVar17 = puVar6[0x19];
  *(undefined4 *)(iVar8 + 0x20) = puVar6[0x14];
  *(undefined4 *)(iVar8 + 0x24) = uVar14;
  iVar8 = puVar7[-0x12];
  *(undefined4 *)(iVar8 + 0x20) = uVar12;
  *(undefined4 *)(iVar8 + 0x24) = uVar15;
  iVar8 = puVar7[-0x11];
  *(undefined4 *)(iVar8 + 0x20) = uVar16;
  *(undefined4 *)(iVar8 + 0x24) = uVar17;
  func_0062EC8C((int)piVar5,puVar7[-0x10],0);
  func_004C03B8((int)piVar5,DAT_00388b2c);
  func_004BC8D8((int)piVar5);
  bVar4 = func_00588BF0((int)piVar5,0);
  if ((bVar4) && (bVar4 = func_00588BF0((int)piVar5,1), !bVar4)) {
    if (((*puRam00388b30 & 1) == 0) &&
       (iVar8 = func_00100174((int *)puRam00388b30), puVar6 = puRam00388b34, iVar8 != 0)) {
      *(undefined1 *)puRam00388b34 = 0xff;
      *(undefined1 *)((int)puVar6 + 1) = 0xff;
      *(undefined1 *)((int)puVar6 + 2) = 0xff;
      *(undefined1 *)((int)puVar6 + 3) = 0xff;
    }
    if (*puRam00388b38 != 0) {
      objStack_58[1] = (uint)s_Environment_GlassFilter_bch_00388b3c;
      objStack_58[0] = uVar2;
      func_0027033C(*puRam00388b38,(int *)objStack_58,puRam00388b34,-1);
    }
    *(undefined2 *)(puVar7 + 0x10) = 0xaf;
    objStack_58[2] = 1;
    objStack_58[0] = 0;
    objStack_58[1] = 3;
    func_0036720C((int)(puVar7 + -0xe),1,0x15e,400,0,3,1);
  }
  piVar3 = piRam00388bc8;
  iVar8 = func_00556B2C(*piRam00388bc8);
  if (iVar8 != 0) {
    func_00361604(*piVar3,0);
    *(undefined1 *)((int)puVar7 + 0x42) = 1;
  }
  return piVar5;
}

