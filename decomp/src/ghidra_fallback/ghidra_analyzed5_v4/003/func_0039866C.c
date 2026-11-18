#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_003ABA3C(undefined4 *param_1,undefined4 param_2);
extern int func_004EDEA0(int param_1,uint *param_2);
extern int func_004EE484(undefined4 *param_1);
extern int func_006682E0(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_003989e8;
extern undefined4 DAT_003989ec;
extern undefined4 DAT_003989f0;
extern undefined4 DAT_003989f4;
extern undefined4 DAT_003989f8;
extern undefined4 *DAT_003989fc;
extern undefined *DAT_00398a00;
extern int DAT_00398a10;
extern char s_cState_Attack_00398a14[];
extern char s_cState_Wait_00398a04[];

// USA 0039866C <- EU 00398648 (Ghidra, non-matching)
// GLOBAL DAT_003989e8 undefined4
// GLOBAL DAT_003989ec undefined4
// GLOBAL DAT_003989f0 undefined4
// GLOBAL DAT_003989f4 undefined4
// GLOBAL DAT_003989f8 undefined4
// GLOBAL DAT_003989fc undefined4 *
// GLOBAL DAT_00398a00 undefined *
// GLOBAL DAT_00398a10 int
// GLOBAL s_cState_Attack_00398a14 string
// GLOBAL s_cState_Wait_00398a04 string

int func_0039866C(undefined4 *param_1,undefined4 param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_3c (*(uint *)(albw_frame + 0x4))
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(uint * *)(albw_frame + 0xc))
  puVar2 = func_003ABA3C(param_1,param_2);
  *puVar2 = DAT_003989e8;
  puVar2 = func_0010A794(puVar2 + 4);
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  uVar11 = DAT_003989f0;
  uVar10 = DAT_003989ec;
  puVar2[0xb] = DAT_003989ec;
  puVar2[0xc] = uVar10;
  puVar2[0xd] = uVar10;
  puVar2[0xe] = uVar10;
  puVar2[0xf] = uVar10;
  puVar2[0x10] = uVar10;
  puVar2[0x11] = uVar10;
  puVar2[0x12] = uVar10;
  puVar2[0x13] = uVar10;
  *(undefined2 *)(puVar2 + 0x14) = 0;
  puVar2[0x15] = 0;
  *(undefined1 *)(puVar2 + 0x16) = 0;
  puVar2[0x17] = uVar11;
  puVar2[0x18] = uVar11;
  puVar2[0x19] = uVar11;
  uVar11 = DAT_003989f4;
  puVar2[0x1a] = DAT_003989f4;
  puVar2[0x1b] = uVar11;
  puVar2[0x1c] = uVar11;
  puVar2[0x1d] = 0;
  puVar2[0x1e] = 0;
  *(undefined2 *)(puVar2 + 0x1f) = 6;
  puVar2[10] = DAT_003989f8;
  puVar2[0x20] = uVar10;
  iVar3 = func_004EE484(puVar2 + 0x21);
  *(undefined1 *)(iVar3 + 100) = 0;
  *(undefined1 *)(iVar3 + 0x65) = 0;
  *(undefined1 *)(iVar3 + 0x66) = 0;
  *(undefined1 *)(iVar3 + -0x7e) = 2;
  *(int *)(iVar3 + -0x70) = iVar3 + -0x94;
  iVar4 = func_0010BA78(0x20);
  *(int *)(iVar3 + -0x6c) = iVar4;
  puVar2 = DAT_003989fc;
  *(uint *)(iVar3 + -0x68) = iVar4 + (uint)*(byte *)(iVar3 + -0x7e) * 8;
  iVar5 = 2;
  puVar6 = (undefined4 *)(iVar4 + -8);
  do {
    uVar10 = puVar2[0xd];
    iVar5 = iVar5 + -1;
    puVar6[2] = puVar2[0xc];
    puVar6[3] = uVar10;
    uVar10 = puVar2[0xd];
    puVar6[4] = puVar2[0xc];
    puVar6[5] = uVar10;
    puVar6 = puVar6 + 4;
  } while (iVar5 != 0);
  bVar1 = *(byte *)(iVar3 + -0x7e);
  uVar8 = (uint)bVar1;
  puVar6 = (undefined4 *)func_0010BA78(uVar8 << 3);
  *(undefined4 **)(iVar3 + -100) = puVar6;
  if (uVar8 != 0) {
    puVar7 = puVar6 + -2;
    if ((bVar1 & 1) != 0) {
      uVar10 = puVar2[5];
      *puVar6 = puVar2[4];
      puVar6[1] = uVar10;
      puVar7 = puVar6;
    }
    for (iVar4 = (int)uVar8 >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
      uVar10 = puVar2[5];
      puVar7[2] = puVar2[4];
      puVar7[3] = uVar10;
      uVar10 = puVar2[5];
      puVar7[4] = puVar2[4];
      puVar7[5] = uVar10;
      puVar7 = puVar7 + 4;
    }
  }
  puVar6 = (undefined4 *)func_0010CEE0(0x50,(int *)0x0,4);
  iVar4 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 0x24;
    puVar6[1] = 2;
    iVar4 = func_00100118((int)(puVar6 + 2),DAT_00398a00,0x24,2);
  }
  if (iVar4 != 0) {
    *(int *)(iVar3 + -0x78) = iVar4;
    *(undefined4 *)(iVar3 + -0x7c) = 2;
  }
  iVar4 = DAT_00398a10;
  local_34 = (uint *)s_cState_Wait_00398a04;
  local_38 = DAT_00398a10;
  iVar5 = *(int *)(iVar3 + -0x78);
  puVar9 = *(uint **)(iVar5 + 4);
  (**(code **)(DAT_00398a10 + 8))(&local_38);
  uVar8 = 0;
  do {
    if (*(char *)((int)local_34 + uVar8) == '\0') {
      if ((int)uVar8 < 0x40001) goto LAB_00398880;
      break;
    }
    uVar8 = uVar8 + 1;
  } while ((int)uVar8 < 0x40001);
  uVar8 = 0;
LAB_00398880:
  iVar5 = *(int *)(iVar5 + 8);
  if (iVar5 <= (int)uVar8) {
    uVar8 = iVar5 - 1;
  }
  (**(code **)(local_38 + 8))(&local_38);
  func_0010E3C4(puVar9,local_34,uVar8);
  *(undefined1 *)((int)puVar9 + uVar8) = 0;
  puVar6 = *(undefined4 **)(iVar3 + -0x6c);
  uVar10 = puVar2[5];
  uVar11 = puVar2[1];
  uVar12 = puVar2[2];
  uVar13 = puVar2[3];
  uVar14 = puVar2[4];
  *puVar6 = *puVar2;
  puVar6[1] = uVar11;
  puVar6 = *(undefined4 **)(iVar3 + -0x68);
  *puVar6 = uVar12;
  puVar6[1] = uVar13;
  puVar6 = *(undefined4 **)(iVar3 + -100);
  *puVar6 = uVar14;
  puVar6[1] = uVar10;
  local_34 = (uint *)s_cState_Attack_00398a14;
  local_38 = iVar4;
  if (*(uint *)(iVar3 + -0x7c) < 2) {
    iVar5 = *(int *)(iVar3 + -0x78);
  }
  else {
    iVar5 = *(int *)(iVar3 + -0x78) + 0x24;
  }
  puVar9 = *(uint **)(iVar5 + 4);
  (**(code **)(iVar4 + 8))(&local_38);
  uVar8 = 0;
  do {
    if (*(char *)((int)local_34 + uVar8) == '\0') {
      if ((int)uVar8 < 0x40001) goto LAB_00398938;
      break;
    }
    uVar8 = uVar8 + 1;
  } while ((int)uVar8 < 0x40001);
  uVar8 = 0;
LAB_00398938:
  if (*(int *)(iVar5 + 8) <= (int)uVar8) {
    uVar8 = *(int *)(iVar5 + 8) - 1;
  }
  (**(code **)(local_38 + 8))(&local_38);
  func_0010E3C4(puVar9,local_34,uVar8);
  *(undefined1 *)((int)puVar9 + uVar8) = 0;
  iVar4 = *(int *)(iVar3 + -0x6c);
  uVar12 = puVar2[7];
  uVar10 = puVar2[8];
  uVar14 = puVar2[9];
  uVar11 = puVar2[10];
  uVar13 = puVar2[0xb];
  *(undefined4 *)(iVar4 + 8) = puVar2[6];
  *(undefined4 *)(iVar4 + 0xc) = uVar12;
  iVar4 = *(int *)(iVar3 + -0x68);
  *(undefined4 *)(iVar4 + 8) = uVar10;
  *(undefined4 *)(iVar4 + 0xc) = uVar14;
  iVar4 = *(int *)(iVar3 + -100);
  *(undefined4 *)(iVar4 + 8) = uVar11;
  *(undefined4 *)(iVar4 + 0xc) = uVar13;
  func_006682E0((undefined4 *)(iVar3 + -0x84),0);
  *(uint *)(iVar3 + -0x30) = *(uint *)(iVar3 + -0x30) | 8;
  *(int *)(iVar3 + 0x10) = iVar3 + -0x5c;
  local_3c = *(uint *)(*(int *)(iVar3 + -0x90) + 0x2cc);
  func_004EDEA0(iVar3,&local_3c);
  return iVar3 + -0x94;
}

