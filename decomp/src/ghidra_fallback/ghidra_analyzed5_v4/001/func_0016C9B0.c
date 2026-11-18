#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00100174(int *param_1);
extern int func_0010B3EC(undefined4 *param_1,int param_2,int param_3);
extern int func_0010B954(int param_1,int param_2,int *param_3,int param_4,int param_5);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern int func_0026F2F4(int *param_1,int param_2,int *param_3,undefined4 param_4);
extern int func_0026FCE8(undefined4 *param_1);
extern int func_003F9B70(int *param_1,undefined4 *param_2,ushort *param_3);
extern int func_003FA02C(ushort *param_1);
extern int func_003FA6B0(int *param_1);
extern int func_00504D48(int param_1,int param_2);
extern int func_0058FAAC(undefined4 param_1,undefined4 param_2);
extern undefined4 DAT_0016cd7c;
extern undefined4 DAT_0016cd80;
extern uint *DAT_0016cd84;
extern undefined4 *DAT_0016cd88;
extern undefined4 DAT_0016cd8c;
extern undefined4 DAT_0016cd90;
extern undefined *DAT_0016cd94;
extern undefined4 DAT_0016cd98;
extern undefined4 DAT_0016cd9c;
extern undefined4 DAT_0016cda0;
extern int *DAT_0016cda4;
extern undefined4 DAT_0016cda8;
extern undefined4 DAT_0016cdc8;
extern undefined4 DAT_0016cdcc;
extern int *DAT_0016cdec;
extern char s_LightHeap_0016cdac[];
extern char s_World_Environment_LightSet_0016cdd0[];
extern char s_cf_0016cdb8[];
extern char s_cf_0016cdd0[];
extern char s_cmn_eflight_bch_0016cdb8[];

// USA 0016C9B0 <- EU 0016C9B0 (Ghidra, non-matching)
// GLOBAL DAT_0016cd7c undefined4
// GLOBAL DAT_0016cd80 undefined4
// GLOBAL DAT_0016cd84 uint *
// GLOBAL DAT_0016cd88 undefined4 *
// GLOBAL DAT_0016cd8c undefined4
// GLOBAL DAT_0016cd90 undefined4
// GLOBAL DAT_0016cd94 undefined *
// GLOBAL DAT_0016cd98 undefined4
// GLOBAL DAT_0016cd9c undefined4
// GLOBAL DAT_0016cda0 undefined4
// GLOBAL DAT_0016cda4 int *
// GLOBAL DAT_0016cda8 undefined4
// GLOBAL DAT_0016cdc8 undefined4
// GLOBAL DAT_0016cdcc undefined4
// GLOBAL DAT_0016cdec int *
// GLOBAL s_LightHeap_0016cdac string
// GLOBAL s_cf_0016cdd0 string
// GLOBAL s_cf_0016cdb8 string

int func_0016C9B0(int param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define local_a0 (*(undefined4 *)(albw_frame + 0x0))
  #define local_9c (*(undefined4 *)(albw_frame + 0x4))
  #define local_98 (*(undefined4 *)(albw_frame + 0x8))
  #define local_94 (*(undefined4 *)(albw_frame + 0xc))
  #define local_90 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_8c (*(undefined4 *)(albw_frame + 0x14))
  #define local_88 (*(undefined4 *)(albw_frame + 0x18))
  #define local_84 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_80 (*(undefined4 *)(albw_frame + 0x20))
  #define local_7c (*(undefined4 *)(albw_frame + 0x24))
  #define local_78 (*(undefined4 *)(albw_frame + 0x28))
  #define local_74 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_70 (*(char * *)(albw_frame + 0x30))
  #define local_6c (*(undefined1 *)(albw_frame + 0x34))
  #define local_6b (*(undefined1 *)(albw_frame + 0x35))
  #define local_6a (*(undefined1 *)(albw_frame + 0x36))
  #define local_69 (*(undefined1 *)(albw_frame + 0x37))
  #define local_68 (*(undefined1 *)(albw_frame + 0x38))
  #define local_64 (*(undefined4 *)(albw_frame + 0x3c))
  #define pcStack_60 (*(char * *)(albw_frame + 0x40))
  #define uStack_5c (*(undefined4 *)(albw_frame + 0x44))
  #define local_58 (*(undefined4 *)(albw_frame + 0x48))
  #define local_54 (*(undefined1 *)(albw_frame + 0x4c))
  #define local_48 (*(undefined4 *)(albw_frame + 0x58))
  #define local_44 (*(char * *)(albw_frame + 0x5c))
  #define local_40 ((ushort *)(albw_frame + 0x60))
  #define local_38 (*(undefined1 *)(albw_frame + 0x68))
  #define local_37 (*(undefined1 *)(albw_frame + 0x69))
  #define local_36 (*(undefined1 *)(albw_frame + 0x6a))
  #define local_35 (*(undefined1 *)(albw_frame + 0x6b))
  puVar1 = DAT_0016cd84;
  *(undefined4 *)(param_1 + 0x10) = 0;
  uVar13 = DAT_0016cd7c;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  uVar14 = DAT_0016cd80;
  if (((*puVar1 & 1) == 0) &&
     (iVar4 = func_00100174((int *)DAT_0016cd84), puVar6 = DAT_0016cd88, iVar4 != 0)) {
    puVar7 = DAT_0016cd88 + 4;
    *DAT_0016cd88 = uVar14;
    puVar6[1] = uVar13;
    puVar6[2] = uVar13;
    puVar6[3] = uVar13;
    *puVar7 = uVar13;
    puVar6[5] = uVar14;
    puVar6[6] = uVar13;
    puVar6[7] = uVar13;
    puVar6[8] = uVar13;
    puVar6[9] = uVar13;
    puVar6[10] = uVar14;
    puVar6[0xb] = uVar13;
  }
  func_001119F4((undefined4 *)(param_1 + 0x20),DAT_0016cd88);
  *(undefined4 *)(param_1 + 0x50) = 0;
  uVar3 = DAT_0016cd90;
  uVar2 = DAT_0016cd8c;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  *(undefined4 *)(param_1 + 0x60) = 0x18000000;
  *(undefined4 *)(param_1 + 0x68) = uVar13;
  *(undefined4 *)(param_1 + 0x6c) = uVar14;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  iVar4 = param_1 + 0xa4;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (iVar4 != 0) {
    iVar12 = 0;
    iVar10 = 7;
    *(int *)(param_1 + 0x9c) = iVar4;
    do {
      iVar10 = iVar10 + -1;
      *(int *)(iVar4 + iVar12 * 4) = iVar4 + (iVar12 + 0xe) * 4;
      iVar12 = iVar12 + 0xe;
    } while (iVar10 != 0);
    *(undefined4 *)(param_1 + 0x22c) = 0;
    *(int *)(param_1 + 0xa0) = iVar4;
    func_0010B3EC((undefined4 *)(param_1 + 0x90),8,param_1 + 0x264);
  }
  iVar4 = func_00100118(param_1 + 0x284,DAT_0016cd94,0x38,0x33);
  iVar4 = func_00100118(iVar4 + 0xb28,DAT_0016cd94,0x38,6);
  uVar2 = DAT_0016cd9c;
  uVar13 = DAT_0016cd98;
  *(undefined4 *)(iVar4 + 0x150) = DAT_0016cd98;
  *(undefined2 *)(iVar4 + 0x154) = 0xffff;
  *(undefined2 *)(iVar4 + 0x156) = 0xffff;
  *(undefined4 *)(iVar4 + 0x170) = 0;
  *(undefined4 *)(iVar4 + 0x174) = 0;
  *(undefined4 *)(iVar4 + 0x178) = 0;
  *(undefined4 *)(iVar4 + 0x17c) = 0;
  *(undefined4 *)(iVar4 + 0x180) = uVar14;
  *(undefined1 *)(iVar4 + 0x184) = 0;
  *(undefined1 *)(iVar4 + 0x185) = 0;
  *(undefined4 *)(iVar4 + 0x158) = 0;
  *(undefined4 *)(iVar4 + 0x15c) = 0;
  *(undefined4 *)(iVar4 + 0x160) = 0;
  *(undefined4 *)(iVar4 + 0x164) = 0;
  *(undefined4 *)(iVar4 + 0x168) = 0;
  *(undefined4 *)(iVar4 + 0x16c) = 0;
  *(undefined4 *)(iVar4 + 0x188) = uVar13;
  *(undefined2 *)(iVar4 + 0x18c) = 0xffff;
  *(undefined2 *)(iVar4 + 0x18e) = 0xffff;
  *(undefined4 *)(iVar4 + 0x1a8) = 0;
  *(undefined4 *)(iVar4 + 0x1ac) = 0;
  *(undefined4 *)(iVar4 + 0x1b0) = 0;
  *(undefined4 *)(iVar4 + 0x1b4) = 0;
  *(undefined4 *)(iVar4 + 0x1b8) = uVar14;
  *(undefined1 *)(iVar4 + 0x1bc) = 0;
  *(undefined1 *)(iVar4 + 0x1bd) = 0;
  *(undefined4 *)(iVar4 + 400) = 0;
  *(undefined4 *)(iVar4 + 0x194) = 0;
  *(undefined4 *)(iVar4 + 0x198) = 0;
  *(undefined4 *)(iVar4 + 0x19c) = 0;
  *(undefined4 *)(iVar4 + 0x1a0) = 0;
  *(undefined4 *)(iVar4 + 0x1a4) = 0;
  *(undefined4 *)(iVar4 + 0x1c8) = 0;
  *(undefined4 *)(iVar4 + 0x1cc) = 0;
  *(undefined4 *)(iVar4 + 0x1d0) = uVar14;
  *(undefined4 *)(iVar4 + 0x1d4) = uVar2;
  *(undefined4 *)(iVar4 + 0x1d8) = uVar14;
  *(undefined4 *)(iVar4 + 0x1dc) = DAT_0016cda0;
  *(undefined1 *)(iVar4 + 0x1e9) = 0xff;
  *(undefined4 *)(iVar4 + 0x1ec) = 0;
  *(undefined1 *)(iVar4 + 0x1f8) = 1;
  *(undefined1 *)(iVar4 + 0x1f9) = 0xff;
  *(undefined1 *)(iVar4 + 0x1fa) = 0;
  uVar13 = DAT_0016cda8;
  piVar11 = DAT_0016cda4;
  *(undefined1 *)(iVar4 + 0x1fb) = 1;
  *(undefined1 *)(iVar4 + 0x1fc) = 1;
  iVar10 = 0;
  *(undefined1 *)(iVar4 + 0x1ff) = 0;
  do {
    local_44 = s_LightHeap_0016cdac;
    local_48 = uVar13;
    piVar5 = func_0010B954(0x2800,(int)&local_48,*(int **)(*piVar11 + 0x1fa8),1,0);
    iVar12 = iVar10 * 4;
    iVar10 = iVar10 + 1;
    *(int **)(iVar4 + -0xdac + iVar12 + 0xf8c) = piVar5;
  } while (iVar10 < 2);
  *(undefined1 *)(iVar4 + 0x1e8) = 1;
  local_38 = 0;
  local_40[0] = 2;
  local_37 = 0;
  local_40[2] = 4;
  local_35 = 0;
  local_40[1] = 0x33;
  local_40[3] = 0;
  local_36 = 1;
  iVar10 = func_003FA02C(local_40);
  puVar6 = (undefined4 *)func_0058FAAC(iVar10,0x10);
  func_003F9B70((int *)(iVar4 + -0xd9c),puVar6,local_40);
  func_003FA6B0(*(int **)(iVar4 + -0xd38));
  local_a0 = uVar13;
  local_9c = DAT_0016cdc8;
  local_98 = 0;
  local_94 = 0;
  local_90 = 0x20;
  uStack_8c = 0;
  local_80 = 0;
  local_6c = 7;
  local_88 = 0;
  local_78 = 0;
  local_84 = 0;
  local_7c = 0;
  local_74 = uVar13;
  local_6b = 4;
  local_64 = uVar13;
  pcStack_60 = s_cmn_eflight_bch_0016cdb8;
  uStack_5c = 0;
  local_70 = s_World_Environment_LightSet_0016cdd0;
  local_58 = 0;
  local_69 = 1;
  local_6a = 0xf;
  local_54 = 0;
  local_68 = 1;
  puVar6 = func_00504D48(*DAT_0016cdec,(int)&local_a0);
  uVar9 = 0;
  piVar11 = (int *)(iVar4 + 0x1f0);
  do {
    puVar7 = (undefined4 *)func_0010BAB4(0x74);
    iVar10 = 0;
    if (puVar7 != (undefined4 *)0x0) {
      iVar10 = func_0026FCE8(puVar7);
    }
    piVar5 = piVar11;
    if (uVar9 < 2) {
      piVar5 = piVar11 + uVar9;
    }
    *piVar5 = iVar10;
    piVar5 = piVar11;
    if (uVar9 < 2) {
      piVar5 = piVar11 + uVar9;
    }
    func_0026F2F4((int *)*piVar5,(int)puVar6,(int *)0x0,0);
    uVar9 = uVar9 + 1;
  } while ((int)uVar9 < 2);
  iVar10 = func_0010CEE0(0xb00,(int *)0x0,4);
  if (iVar10 != 0) {
    iVar12 = 0;
    iVar8 = 0x1f;
    *(int *)(iVar4 + -0xd24) = iVar10;
    do {
      iVar8 = iVar8 + -1;
      *(int *)(iVar10 + iVar12 * 4) = iVar10 + (iVar12 + 0x15) * 4;
      iVar12 = iVar12 + 0x15;
    } while (iVar8 != 0);
    *(undefined4 *)(iVar10 + 0xa2c) = 0;
    *(int *)(iVar4 + -0xd20) = iVar10;
    func_0010B3EC((undefined4 *)(iVar4 + -0xd30),0x20,iVar10 + 0xa80);
  }
  return iVar4 + -0xdac;
}

