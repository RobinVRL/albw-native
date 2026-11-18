#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_003ABA3C(undefined4 *param_1,undefined4 param_2);
extern int func_004EDEA0(int param_1,uint *param_2);
extern int func_004EE484(undefined4 *param_1);
extern int func_00668568(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_003999c8;
extern undefined4 DAT_003999cc;
extern undefined4 DAT_003999d0;
extern undefined4 DAT_003999d4;
extern undefined4 DAT_003999d8;
extern undefined4 *DAT_003999dc;
extern undefined4 DAT_003999e0;
extern undefined *DAT_003999e4;
extern int DAT_003999f4;
extern char s_cState_Attack_003999f8[];
extern char s_cState_Wait_003999e8[];

// USA 00399620 <- EU 003995FC (Ghidra, non-matching)
// GLOBAL DAT_003999c8 undefined4
// GLOBAL DAT_003999cc undefined4
// GLOBAL DAT_003999d0 undefined4
// GLOBAL DAT_003999d4 undefined4
// GLOBAL DAT_003999d8 undefined4
// GLOBAL DAT_003999dc undefined4 *
// GLOBAL DAT_003999e0 undefined4
// GLOBAL DAT_003999e4 undefined *
// GLOBAL DAT_003999f4 int
// GLOBAL s_cState_Attack_003999f8 string
// GLOBAL s_cState_Wait_003999e8 string

int func_00399620(undefined4 *param_1,undefined4 param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_3c (*(uint *)(albw_frame + 0x4))
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(uint * *)(albw_frame + 0xc))
  puVar2 = func_003ABA3C(param_1,param_2);
  *puVar2 = DAT_003999c8;
  puVar2 = func_0010A794(puVar2 + 4);
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  *(undefined1 *)(puVar2 + 10) = 0;
  uVar12 = DAT_003999d0;
  uVar8 = DAT_003999cc;
  puVar2[0xc] = DAT_003999cc;
  puVar2[0xd] = uVar8;
  puVar2[0xe] = uVar8;
  puVar2[0xf] = uVar8;
  puVar2[0x10] = uVar8;
  puVar2[0x11] = uVar8;
  puVar2[0x12] = uVar8;
  puVar2[0x13] = uVar8;
  puVar2[0x14] = uVar8;
  *(undefined2 *)(puVar2 + 0x15) = 0;
  puVar2[0x16] = 0;
  *(undefined1 *)(puVar2 + 0x17) = 0;
  puVar2[0x18] = uVar12;
  puVar2[0x19] = uVar12;
  puVar2[0x1a] = uVar12;
  uVar12 = DAT_003999d4;
  puVar2[0x1b] = DAT_003999d4;
  puVar2[0x1c] = uVar12;
  puVar2[0x1d] = uVar12;
  puVar2[0x1e] = 0;
  puVar2[0x1f] = 0;
  *(undefined2 *)(puVar2 + 0x20) = 6;
  puVar2[0xb] = DAT_003999d8;
  puVar2[0x21] = uVar8;
  iVar3 = func_004EE484(puVar2 + 0x22);
  puVar2 = DAT_003999dc;
  iVar9 = iVar3 + -0x98;
  puVar5 = DAT_003999dc + 0x10;
  *(undefined4 *)(iVar3 + 0x68) = 0;
  uVar8 = puVar2[0x11];
  *(undefined4 *)(iVar3 + 0x6c) = *puVar5;
  *(undefined4 *)(iVar3 + 0x70) = uVar8;
  *(undefined4 *)(iVar3 + 100) = DAT_003999e0;
  *(undefined1 *)(iVar3 + -0x82) = 2;
  *(int *)(iVar3 + -0x74) = iVar9;
  iVar4 = func_0010BA78(0x20);
  *(int *)(iVar3 + -0x70) = iVar4;
  *(uint *)(iVar3 + -0x6c) = iVar4 + (uint)*(byte *)(iVar3 + -0x82) * 8;
  iVar7 = 2;
  puVar5 = (undefined4 *)(iVar4 + -8);
  do {
    uVar8 = puVar2[0xf];
    iVar7 = iVar7 + -1;
    puVar5[2] = puVar2[0xe];
    puVar5[3] = uVar8;
    uVar8 = puVar2[0xf];
    puVar5[4] = puVar2[0xe];
    puVar5[5] = uVar8;
    puVar5 = puVar5 + 4;
  } while (iVar7 != 0);
  bVar1 = *(byte *)(iVar3 + -0x82);
  uVar10 = (uint)bVar1;
  puVar5 = (undefined4 *)func_0010BA78(uVar10 << 3);
  *(undefined4 **)(iVar3 + -0x68) = puVar5;
  if (uVar10 != 0) {
    puVar6 = puVar5 + -2;
    if ((bVar1 & 1) != 0) {
      uVar8 = puVar2[5];
      *puVar5 = puVar2[4];
      puVar5[1] = uVar8;
      puVar6 = puVar5;
    }
    for (iVar4 = (int)uVar10 >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
      uVar8 = puVar2[5];
      puVar6[2] = puVar2[4];
      puVar6[3] = uVar8;
      uVar8 = puVar2[5];
      puVar6[4] = puVar2[4];
      puVar6[5] = uVar8;
      puVar6 = puVar6 + 4;
    }
  }
  puVar5 = (undefined4 *)func_0010CEE0(0x50,(int *)0x0,4);
  iVar4 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0x24;
    puVar5[1] = 2;
    iVar4 = func_00100118((int)(puVar5 + 2),DAT_003999e4,0x24,2);
  }
  if (iVar4 != 0) {
    *(int *)(iVar3 + -0x7c) = iVar4;
    *(undefined4 *)(iVar3 + -0x80) = 2;
  }
  iVar4 = DAT_003999f4;
  local_34 = (uint *)s_cState_Wait_003999e8;
  local_38 = DAT_003999f4;
  iVar7 = *(int *)(iVar3 + -0x7c);
  puVar11 = *(uint **)(iVar7 + 4);
  (**(code **)(DAT_003999f4 + 8))(&local_38);
  uVar10 = 0;
  do {
    if (*(char *)((int)local_34 + uVar10) == '\0') {
      if ((int)uVar10 < 0x40001) goto LAB_0039984c;
      break;
    }
    uVar10 = uVar10 + 1;
  } while ((int)uVar10 < 0x40001);
  uVar10 = 0;
LAB_0039984c:
  iVar7 = *(int *)(iVar7 + 8);
  if (iVar7 <= (int)uVar10) {
    uVar10 = iVar7 - 1;
  }
  (**(code **)(local_38 + 8))(&local_38);
  func_0010E3C4(puVar11,local_34,uVar10);
  *(undefined1 *)((int)puVar11 + uVar10) = 0;
  puVar5 = *(undefined4 **)(iVar3 + -0x70);
  uVar8 = puVar2[1];
  uVar12 = puVar2[2];
  uVar13 = puVar2[3];
  uVar14 = puVar2[4];
  uVar15 = puVar2[5];
  *puVar5 = *puVar2;
  puVar5[1] = uVar8;
  puVar5 = *(undefined4 **)(iVar3 + -0x6c);
  *puVar5 = uVar12;
  puVar5[1] = uVar13;
  puVar5 = *(undefined4 **)(iVar3 + -0x68);
  *puVar5 = uVar14;
  puVar5[1] = uVar15;
  local_34 = (uint *)s_cState_Attack_003999f8;
  local_38 = iVar4;
  if (*(uint *)(iVar3 + -0x80) < 2) {
    iVar7 = *(int *)(iVar3 + -0x7c);
  }
  else {
    iVar7 = *(int *)(iVar3 + -0x7c) + 0x24;
  }
  puVar11 = *(uint **)(iVar7 + 4);
  (**(code **)(iVar4 + 8))(&local_38);
  uVar10 = 0;
  do {
    if (*(char *)((int)local_34 + uVar10) == '\0') {
      if ((int)uVar10 < 0x40001) goto LAB_003998fc;
      break;
    }
    uVar10 = uVar10 + 1;
  } while ((int)uVar10 < 0x40001);
  uVar10 = 0;
LAB_003998fc:
  if (*(int *)(iVar7 + 8) <= (int)uVar10) {
    uVar10 = *(int *)(iVar7 + 8) - 1;
  }
  (**(code **)(local_38 + 8))(&local_38);
  func_0010E3C4(puVar11,local_34,uVar10);
  *(undefined1 *)((int)puVar11 + uVar10) = 0;
  iVar4 = *(int *)(iVar3 + -0x70);
  uVar14 = puVar2[7];
  uVar8 = puVar2[10];
  uVar15 = puVar2[0xb];
  uVar12 = puVar2[8];
  uVar13 = puVar2[9];
  *(undefined4 *)(iVar4 + 8) = puVar2[6];
  *(undefined4 *)(iVar4 + 0xc) = uVar14;
  iVar4 = *(int *)(iVar3 + -0x6c);
  *(undefined4 *)(iVar4 + 8) = uVar12;
  *(undefined4 *)(iVar4 + 0xc) = uVar13;
  iVar4 = *(int *)(iVar3 + -0x68);
  *(undefined4 *)(iVar4 + 8) = uVar8;
  *(undefined4 *)(iVar4 + 0xc) = uVar15;
  func_00668568((undefined4 *)(iVar3 + -0x88),0);
  *(uint *)(iVar3 + -0x30) = *(uint *)(iVar3 + -0x30) | 8;
  *(int *)(iVar3 + 0x10) = iVar3 + -0x5c;
  uVar8 = puVar2[0xc];
  uVar12 = puVar2[0xd];
  *(int *)(iVar3 + 0x68) = iVar9;
  *(undefined4 *)(iVar3 + 0x6c) = uVar8;
  *(undefined4 *)(iVar3 + 0x70) = uVar12;
  *(int *)(iVar3 + 0x1c) = iVar3 + 100;
  local_3c = *(uint *)(*(int *)(iVar3 + -0x94) + 0x2cc);
  func_004EDEA0(iVar3,&local_3c);
  return iVar9;
}

