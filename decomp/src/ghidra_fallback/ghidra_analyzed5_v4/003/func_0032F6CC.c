#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BEB4(int param_1,int *param_2);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern int func_0032F488(int param_1);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern uint *DAT_0032fa60;
extern int DAT_0032fa64;
extern undefined4 *DAT_0032fa68;
extern undefined4 DAT_0032fa6c;
extern undefined4 DAT_0032fa70;
extern int DAT_0032fa74;
extern undefined *DAT_0032fa78;
extern int DAT_0032fa7c;
extern int DAT_0032fa8c;
extern char s_cState_Move_0032fa80[];

// USA 0032F6CC <- EU 0032F6A8 (Ghidra, non-matching)
// GLOBAL DAT_0032fa60 uint *
// GLOBAL DAT_0032fa64 int
// GLOBAL DAT_0032fa68 undefined4 *
// GLOBAL DAT_0032fa6c undefined4
// GLOBAL DAT_0032fa70 undefined4
// GLOBAL DAT_0032fa74 int
// GLOBAL DAT_0032fa78 undefined *
// GLOBAL DAT_0032fa7c int
// GLOBAL DAT_0032fa8c int
// GLOBAL s_cState_Move_0032fa80 string

undefined4 * func_0032F6CC(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  code *pcVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(uint * *)(albw_frame + 0xc))
  #define local_30 (*(int *)(albw_frame + 0x10))
  #define local_2c (*(int *)(albw_frame + 0x14))
  piVar3 = func_004FD464(param_1,param_2,DAT_0032fa60);
  iVar8 = DAT_0032fa64;
  *piVar3 = DAT_0032fa64;
  piVar3[200] = iVar8 + 0x84;
  puVar4 = func_0010A794(piVar3 + 0x22f);
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = puVar4[-0x13b];
  puVar4[10] = puVar4[-0x13a];
  puVar4[0xb] = puVar4[-0x139];
  func_001119F4(puVar4 + 0xc,DAT_0032fa68);
  puVar11 = puVar4 + -0x22f;
  puVar4[0x18] = DAT_0032fa6c;
  puVar4[0x19] = 0;
  puVar4[0x1a] = 0;
  puVar4[0x1b] = 0;
  puVar4[0x1c] = 0;
  puVar4[0x1d] = 0;
  uVar14 = DAT_0032fa70;
  puVar4[0x1e] = 0;
  puVar4[0x1f] = 0;
  puVar4[0x20] = uVar14;
  puVar4[-200] = puVar4[-200] & 0xfffffbff;
  func_0032F488((int)puVar11);
  puVar4[5] = puVar11;
  *(undefined1 *)((int)puVar4 + 6) = 1;
  iVar5 = func_0010BA78(0x10);
  iVar8 = DAT_0032fa74;
  puVar4[6] = iVar5;
  puVar4[7] = iVar5 + (uint)*(byte *)((int)puVar4 + 6) * 8;
  iVar9 = 1;
  puVar6 = (undefined4 *)(iVar5 + -8);
  do {
    uVar14 = *(undefined4 *)(iVar8 + 0x20);
    iVar9 = iVar9 + -1;
    puVar6[2] = *(undefined4 *)(iVar8 + 0x1c);
    puVar6[3] = uVar14;
    uVar14 = *(undefined4 *)(iVar8 + 0x20);
    puVar6[4] = *(undefined4 *)(iVar8 + 0x1c);
    puVar6[5] = uVar14;
    puVar6 = puVar6 + 4;
  } while (iVar9 != 0);
  bVar1 = *(byte *)((int)puVar4 + 6);
  uVar12 = (uint)bVar1;
  puVar6 = (undefined4 *)func_0010BA78(uVar12 << 3);
  puVar4[8] = puVar6;
  if (uVar12 != 0) {
    puVar7 = puVar6 + -2;
    if ((bVar1 & 1) != 0) {
      uVar14 = *(undefined4 *)(iVar8 + 0x18);
      *puVar6 = *(undefined4 *)(iVar8 + 0x14);
      puVar6[1] = uVar14;
      puVar7 = puVar6;
    }
    for (iVar5 = (int)uVar12 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      uVar14 = *(undefined4 *)(iVar8 + 0x18);
      puVar7[2] = *(undefined4 *)(iVar8 + 0x14);
      puVar7[3] = uVar14;
      uVar14 = *(undefined4 *)(iVar8 + 0x18);
      puVar7[4] = *(undefined4 *)(iVar8 + 0x14);
      puVar7[5] = uVar14;
      puVar7 = puVar7 + 4;
    }
  }
  puVar6 = (undefined4 *)func_0010CEE0(0x2c,(int *)0x0,4);
  iVar5 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 0x24;
    puVar6[1] = 1;
    iVar5 = func_00100118((int)(puVar6 + 2),DAT_0032fa78,0x24,1);
  }
  if (iVar5 != 0) {
    puVar4[3] = iVar5;
    puVar4[2] = 1;
  }
  iVar5 = DAT_0032fa7c;
  puVar4[-0x15a] = puVar4;
  iVar9 = DAT_0032fa8c;
  *(undefined2 *)(iVar5 + (int)puVar11) = 1;
  local_34 = (uint *)s_cState_Move_0032fa80;
  local_38 = iVar9;
  iVar5 = puVar4[3];
  puVar13 = *(uint **)(iVar5 + 4);
  (**(code **)(iVar9 + 8))(&local_38);
  uVar12 = 0;
  do {
    if (*(char *)((int)local_34 + uVar12) == '\0') {
      if ((int)uVar12 < 0x40001) goto LAB_0032f8dc;
      break;
    }
    uVar12 = uVar12 + 1;
  } while ((int)uVar12 < 0x40001);
  uVar12 = 0;
LAB_0032f8dc:
  iVar5 = *(int *)(iVar5 + 8);
  if (iVar5 <= (int)uVar12) {
    uVar12 = iVar5 - 1;
  }
  (**(code **)(local_38 + 8))(&local_38);
  func_0010E3C4(puVar13,local_34,uVar12);
  *(undefined1 *)((int)puVar13 + uVar12) = 0;
  puVar6 = (undefined4 *)puVar4[6];
  uVar14 = *(undefined4 *)(iVar8 + 0x14);
  uVar15 = *(undefined4 *)(iVar8 + 0xc);
  uVar16 = *(undefined4 *)(iVar8 + 8);
  uVar17 = *(undefined4 *)(iVar8 + 0x10);
  uVar18 = *(undefined4 *)(iVar8 + 0x18);
  *puVar6 = *(undefined4 *)(iVar8 + 4);
  puVar6[1] = uVar16;
  puVar6 = (undefined4 *)puVar4[7];
  *puVar6 = uVar15;
  puVar6[1] = uVar17;
  puVar6 = (undefined4 *)puVar4[8];
  *puVar6 = uVar14;
  puVar6[1] = uVar18;
  iVar8 = (int)*(char *)(puVar4 + 1);
  if (iVar8 != -1) {
    iVar5 = puVar4[8];
    pcVar10 = *(code **)(iVar5 + iVar8 * 8);
    if ((pcVar10 != (code *)0x0) ||
       ((uVar12 = *(uint *)(iVar5 + iVar8 * 8 + 4), (uVar12 & 1) != 0 && (uVar12 != 0)))) {
      uVar12 = *(uint *)(iVar5 + iVar8 * 8 + 4);
      piVar3 = (int *)(puVar4[5] + ((int)uVar12 >> 1));
      if ((uVar12 & 1) != 0) {
        pcVar10 = *(code **)(pcVar10 + *piVar3);
      }
      (*pcVar10)(piVar3,0);
    }
  }
  uVar2 = *(undefined1 *)(puVar4 + 1);
  *(undefined1 *)(puVar4 + 1) = 0;
  *puVar4 = 0;
  *(undefined1 *)((int)puVar4 + 5) = uVar2;
  if (puVar4[4] != 0) {
    piVar3 = (int *)puVar4[3];
    (**(code **)(*piVar3 + 8))(piVar3);
    local_2c = piVar3[1];
    local_30 = iVar9;
    func_0010BEB4(puVar4[4],&local_30);
  }
  iVar8 = (int)*(char *)(puVar4 + 1);
  iVar5 = puVar4[6];
  pcVar10 = *(code **)(iVar5 + iVar8 * 8);
  if ((pcVar10 != (code *)0x0) ||
     ((uVar12 = *(uint *)(iVar5 + iVar8 * 8 + 4), (uVar12 & 1) != 0 && (uVar12 != 0)))) {
    uVar12 = *(uint *)(iVar5 + iVar8 * 8 + 4);
    if ((uVar12 & 1) != 0) {
      pcVar10 = *(code **)(pcVar10 + *(int *)(puVar4[5] + ((int)uVar12 >> 1)));
    }
    (*pcVar10)((int)(puVar4[5]) + ((int)uVar12 >> 1));
  }
  return puVar11;
}

