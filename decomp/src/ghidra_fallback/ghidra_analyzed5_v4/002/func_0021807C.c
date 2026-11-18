#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00151358(int *param_1);
extern int func_0015137C(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
extern int func_002758CC(undefined4 *param_1,int *param_2);
extern int func_004F88A0(int *param_1,undefined2 *param_2);
extern int func_004FC8D8(int param_1,int param_2);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern int func_0054DDF4(int param_1,uint param_2);
extern int func_0065DB40(undefined4 *param_1,undefined1 param_2);
extern uint *DAT_0021841c;
extern int DAT_00218420;
extern undefined4 DAT_00218424;
extern undefined4 DAT_00218428;
extern undefined4 DAT_0021842c;
extern undefined4 DAT_00218430;
extern int DAT_00218434;
extern undefined4 DAT_00218438;
extern undefined4 DAT_0021843c;
extern int DAT_00218440;
extern undefined DAT_00218444;
extern int DAT_00218448;
extern int DAT_0021844c;
extern undefined *DAT_00218450;
extern int DAT_00218454;
extern float DAT_00218670;
extern char s_cState_Erase_00218660[];
extern char s_cState_RailTrail_00218464[];
extern char s_cState_Wait_00218458[];

// USA 0021807C <- EU 0021807C (Ghidra, non-matching)
// GLOBAL DAT_0021841c uint *
// GLOBAL DAT_00218420 int
// GLOBAL DAT_00218424 undefined4
// GLOBAL DAT_00218428 undefined4
// GLOBAL DAT_0021842c undefined4
// GLOBAL DAT_00218430 undefined4
// GLOBAL DAT_00218434 int
// GLOBAL DAT_00218438 undefined4
// GLOBAL DAT_0021843c undefined4
// GLOBAL DAT_00218440 int
// GLOBAL DAT_00218444 undefined
// GLOBAL DAT_00218448 int
// GLOBAL DAT_0021844c int
// GLOBAL DAT_00218450 undefined *
// GLOBAL DAT_00218454 int
// GLOBAL DAT_00218670 float
// GLOBAL s_cState_Erase_00218660 string
// GLOBAL s_cState_RailTrail_00218464 string
// GLOBAL s_cState_Wait_00218458 string

int * func_0021807C(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined2 *puVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int *piVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined4 uVar17;
  int iVar18;
  uint *puVar19;
  undefined4 uVar20;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(uint * *)(albw_frame + 0x4))
  piVar5 = func_004FD464(param_1,param_2,DAT_0021841c);
  iVar18 = DAT_00218420;
  *piVar5 = DAT_00218420;
  piVar5[200] = iVar18 + 0x84;
  piVar5[0x22f] = 0;
  puVar6 = func_0010A794(piVar5 + 0x230);
  puVar6[5] = 0;
  puVar6[6] = 0;
  uVar20 = DAT_00218424;
  puVar6[7] = 0;
  puVar6[8] = 0;
  uVar12 = DAT_00218428;
  puVar6[10] = uVar20;
  puVar6[0xb] = uVar12;
  puVar6[9] = 0;
  uVar20 = DAT_0021842c;
  piVar14 = puVar6 + -0x230;
  puVar6[0xc] = DAT_0021842c;
  uVar12 = DAT_00218430;
  puVar6[0xd] = 0;
  *(undefined1 *)(puVar6 + 0x11) = 1;
  puVar6[-0x145] = uVar12;
  *(undefined1 *)((int)puVar6 + -0x52f) = 1;
  puVar6[-0xf7] = uVar20;
  puVar6[-0xf6] = uVar20;
  puVar6[-0xf5] = uVar20;
  piVar5 = (int *)puVar6[-0x12d];
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 0x10))(piVar5,0x74);
  }
  puVar6[-0xc9] = puVar6[-0xc9] | 0x800;
  puVar7 = (undefined4 *)func_0010BAB4(0x20);
  puVar8 = (undefined4 *)0x0;
  if (puVar7 != (undefined4 *)0x0) {
    puVar8 = func_0015137C(puVar7,piVar14,0);
  }
  puVar6[-0x129] = puVar8;
  uVar12 = DAT_0021843c;
  uVar20 = DAT_00218438;
  if (puVar8 != (undefined4 *)0x0) {
    puVar8[1] = DAT_00218438;
    iVar18 = DAT_00218434;
    puVar8[2] = uVar12;
    puVar8[3] = uVar20;
    iVar3 = DAT_00218440;
    piVar5 = (int *)puVar6[-0x129];
    piVar5[4] = iVar18;
    piVar5[5] = iVar3;
    piVar5[6] = iVar18;
    func_00151358(piVar5);
    func_004FC8D8((int)(puVar6 + -0xc6),puVar6[-0x129]);
  }
  iVar18 = DAT_00218448;
  local_2c = (uint *)&DAT_00218444;
  local_30 = DAT_00218448;
  puVar8 = (undefined4 *)func_0010BAB4(0x88);
  piVar5 = (int *)0x0;
  if (puVar8 != (undefined4 *)0x0) {
    piVar5 = func_002758CC(puVar8,(int *)param_2);
  }
  puVar6[-1] = piVar5;
  *(undefined1 *)((int)puVar6 + 6) = 3;
  puVar6[5] = piVar14;
  iVar9 = func_0010BA78(0x30);
  puVar6[6] = iVar9;
  iVar3 = DAT_0021844c;
  puVar6[7] = iVar9 + (uint)*(byte *)((int)puVar6 + 6) * 8;
  iVar11 = 3;
  puVar8 = (undefined4 *)(iVar9 + -8);
  do {
    uVar20 = *(undefined4 *)(iVar3 + 0x40);
    iVar11 = iVar11 + -1;
    puVar8[2] = *(undefined4 *)(iVar3 + 0x3c);
    puVar8[3] = uVar20;
    uVar20 = *(undefined4 *)(iVar3 + 0x40);
    puVar8[4] = *(undefined4 *)(iVar3 + 0x3c);
    puVar8[5] = uVar20;
    puVar8 = puVar8 + 4;
  } while (iVar11 != 0);
  bVar1 = *(byte *)((int)puVar6 + 6);
  uVar16 = (uint)bVar1;
  puVar8 = (undefined4 *)func_0010BA78(uVar16 << 3);
  puVar6[8] = puVar8;
  if (uVar16 != 0) {
    puVar7 = puVar8 + -2;
    if ((bVar1 & 1) != 0) {
      uVar20 = *(undefined4 *)(iVar3 + 0x18);
      *puVar8 = *(undefined4 *)(iVar3 + 0x14);
      puVar8[1] = uVar20;
      puVar7 = puVar8;
    }
    for (iVar9 = (int)uVar16 >> 1; iVar9 != 0; iVar9 = iVar9 + -1) {
      uVar20 = *(undefined4 *)(iVar3 + 0x18);
      puVar7[2] = *(undefined4 *)(iVar3 + 0x14);
      puVar7[3] = uVar20;
      uVar20 = *(undefined4 *)(iVar3 + 0x18);
      puVar7[4] = *(undefined4 *)(iVar3 + 0x14);
      puVar7[5] = uVar20;
      puVar7 = puVar7 + 4;
    }
  }
  puVar8 = (undefined4 *)func_0010CEE0(0x74,(int *)0x0,4);
  iVar9 = 0;
  if (puVar8 != (undefined4 *)0x0) {
    *puVar8 = 0x24;
    puVar8[1] = 3;
    iVar9 = func_00100118((int)(puVar8 + 2),DAT_00218450,0x24,3);
  }
  if (iVar9 != 0) {
    puVar6[2] = 3;
    puVar6[3] = iVar9;
  }
  iVar9 = DAT_00218454;
  puVar6[-0x15b] = puVar6;
  *(undefined2 *)(iVar9 + (int)piVar14) = 3;
  local_2c = (uint *)s_cState_Wait_00218458;
  local_30 = iVar18;
  iVar9 = puVar6[3];
  puVar19 = *(uint **)(iVar9 + 4);
  (**(code **)(iVar18 + 8))(&local_30);
  uVar16 = 0;
  do {
    if (*(char *)((int)local_2c + uVar16) == '\0') {
      if ((int)uVar16 < 0x40001) goto LAB_0021836c;
      break;
    }
    uVar16 = uVar16 + 1;
  } while ((int)uVar16 < 0x40001);
  uVar16 = 0;
LAB_0021836c:
  iVar9 = *(int *)(iVar9 + 8);
  if (iVar9 <= (int)uVar16) {
    uVar16 = iVar9 - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar19,local_2c,uVar16);
  *(undefined1 *)((int)puVar19 + uVar16) = 0;
  puVar8 = (undefined4 *)puVar6[6];
  uVar20 = *(undefined4 *)(iVar3 + 8);
  uVar12 = *(undefined4 *)(iVar3 + 0xc);
  uVar15 = *(undefined4 *)(iVar3 + 0x10);
  uVar13 = *(undefined4 *)(iVar3 + 0x14);
  uVar17 = *(undefined4 *)(iVar3 + 0x18);
  *puVar8 = *(undefined4 *)(iVar3 + 4);
  puVar8[1] = uVar20;
  puVar8 = (undefined4 *)puVar6[7];
  *puVar8 = uVar12;
  puVar8[1] = uVar15;
  puVar8 = (undefined4 *)puVar6[8];
  *puVar8 = uVar13;
  puVar8[1] = uVar17;
  local_2c = (uint *)s_cState_RailTrail_00218464;
  local_30 = iVar18;
  if ((uint)puVar6[2] < 2) {
    iVar9 = puVar6[3];
  }
  else {
    iVar9 = puVar6[3] + 0x24;
  }
  puVar19 = *(uint **)(iVar9 + 4);
  (**(code **)(iVar18 + 8))(&local_30);
  uVar16 = 0;
  do {
    if (*(char *)((int)local_2c + uVar16) == '\0') {
      if ((int)uVar16 < 0x40001) goto LAB_00218484;
      break;
    }
    uVar16 = uVar16 + 1;
  } while ((int)uVar16 < 0x40001);
  uVar16 = 0;
LAB_00218484:
  if (*(int *)(iVar9 + 8) <= (int)uVar16) {
    uVar16 = *(int *)(iVar9 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar19,local_2c,uVar16);
  *(undefined1 *)((int)puVar19 + uVar16) = 0;
  iVar9 = puVar6[6];
  uVar20 = *(undefined4 *)(iVar3 + 0x14);
  uVar12 = *(undefined4 *)(iVar3 + 0x18);
  uVar13 = *(undefined4 *)(iVar3 + 0x20);
  uVar15 = *(undefined4 *)(iVar3 + 0x24);
  uVar17 = *(undefined4 *)(iVar3 + 0x28);
  *(undefined4 *)(iVar9 + 8) = *(undefined4 *)(iVar3 + 0x1c);
  *(undefined4 *)(iVar9 + 0xc) = uVar13;
  iVar9 = puVar6[7];
  *(undefined4 *)(iVar9 + 8) = uVar15;
  *(undefined4 *)(iVar9 + 0xc) = uVar17;
  iVar9 = puVar6[8];
  *(undefined4 *)(iVar9 + 8) = uVar20;
  *(undefined4 *)(iVar9 + 0xc) = uVar12;
  local_2c = (uint *)s_cState_Erase_00218660;
  local_30 = iVar18;
  uVar16 = puVar6[2];
  if (uVar16 < 3) {
    iVar9 = puVar6[3];
    uVar2 = uVar16;
  }
  else {
    iVar9 = iVar18;
    uVar2 = puVar6[3];
  }
  if (2 < uVar16) {
    iVar9 = uVar2 + 0x48;
  }
  puVar19 = *(uint **)(iVar9 + 4);
  (**(code **)(iVar18 + 8))(&local_30);
  uVar16 = 0;
  do {
    if (*(char *)((int)local_2c + uVar16) == '\0') {
      if ((int)uVar16 < 0x40001) goto LAB_00218548;
      break;
    }
    uVar16 = uVar16 + 1;
  } while ((int)uVar16 < 0x40001);
  uVar16 = 0;
LAB_00218548:
  if (*(int *)(iVar9 + 8) <= (int)uVar16) {
    uVar16 = *(int *)(iVar9 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar19,local_2c,uVar16);
  *(undefined1 *)((int)puVar19 + uVar16) = 0;
  iVar18 = puVar6[6];
  uVar12 = *(undefined4 *)(iVar3 + 0x30);
  uVar20 = *(undefined4 *)(iVar3 + 0x34);
  uVar13 = *(undefined4 *)(iVar3 + 0x38);
  uVar15 = *(undefined4 *)(iVar3 + 0x14);
  uVar17 = *(undefined4 *)(iVar3 + 0x18);
  *(undefined4 *)(iVar18 + 0x10) = *(undefined4 *)(iVar3 + 0x2c);
  *(undefined4 *)(iVar18 + 0x14) = uVar12;
  fVar4 = DAT_00218670;
  iVar18 = puVar6[7];
  *(undefined4 *)(iVar18 + 0x10) = uVar20;
  *(undefined4 *)(iVar18 + 0x14) = uVar13;
  iVar18 = puVar6[8];
  *(undefined4 *)(iVar18 + 0x10) = uVar15;
  *(undefined4 *)(iVar18 + 0x14) = uVar17;
  puVar6[-0xc9] = puVar6[-0xc9] & 0xffffffcf;
  puVar6[-0x11c] = ALBW_AS_U32(ALBW_AS_F32(puVar6[-0x11c]) - ALBW_AS_F32(puVar6[-0x11a]) * fVar4);
  puVar6[-0x116] = ALBW_AS_U32(ALBW_AS_F32(puVar6[-0x116]) - ALBW_AS_F32(puVar6[-0x114]) * fVar4);
  if (*(int *)puVar6[-1] == 0) {
    func_0065DB40(puVar6,0);
  }
  else {
    func_0065DB40(puVar6,1);
  }
  if ((int)puVar6[-0x11a] < 0x40000000) {
    puVar10 = (undefined2 *)func_0054DDF4((int)piVar14,1);
    func_004F88A0(piVar14,puVar10);
  }
  *(undefined1 *)((int)puVar6 + -0x2a) = 0;
  *(uint *)(puVar6[-0x127] + 0x2c) = *(uint *)(puVar6[-0x127] + 0x2c) | 0x100000;
  return piVar14;
}

