#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_003ABA3C(undefined4 *param_1,undefined4 param_2);
extern int func_004EDEA0(int param_1,uint *param_2);
extern int func_004EE484(undefined4 *param_1);
extern int func_00669498(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_003b0980;
extern undefined4 DAT_003b0984;
extern undefined4 DAT_003b0988;
extern undefined4 DAT_003b098c;
extern undefined4 DAT_003b0990;
extern undefined4 DAT_003b0994;
extern undefined4 *DAT_003b0998;
extern undefined *DAT_003b099c;
extern int DAT_003b09ac;
extern char s_cState_Attack_003b09b0[];
extern char s_cState_Wait_003b09a0[];

// USA 003B05CC <- EU 003B05A8 (Ghidra, non-matching)
// GLOBAL DAT_003b0980 undefined4
// GLOBAL DAT_003b0984 undefined4
// GLOBAL DAT_003b0988 undefined4
// GLOBAL DAT_003b098c undefined4
// GLOBAL DAT_003b0990 undefined4
// GLOBAL DAT_003b0994 undefined4
// GLOBAL DAT_003b0998 undefined4 *
// GLOBAL DAT_003b099c undefined *
// GLOBAL DAT_003b09ac int
// GLOBAL s_cState_Attack_003b09b0 string
// GLOBAL s_cState_Wait_003b09a0 string

int func_003B05CC(undefined4 *param_1,undefined4 param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
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
  uVar10 = DAT_003b0984;
  *puVar2 = DAT_003b0980;
  puVar2[4] = uVar10;
  puVar2[5] = puVar2;
  puVar2[6] = 0xffffffff;
  puVar2 = func_0010A794(puVar2 + 7);
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  *(undefined1 *)(puVar2 + 0xb) = 0;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  uVar10 = DAT_003b0988;
  puVar2[0xe] = 0;
  puVar2[0xf] = uVar10;
  puVar2[0x10] = uVar10;
  puVar2[0x11] = uVar10;
  puVar2[0x12] = uVar10;
  puVar2[0x13] = uVar10;
  puVar2[0x14] = uVar10;
  puVar2[0x15] = uVar10;
  puVar2[0x16] = uVar10;
  puVar2[0x17] = uVar10;
  puVar2[0x19] = uVar10;
  puVar2[0x1a] = uVar10;
  puVar2[0x1b] = uVar10;
  puVar2[0x1c] = uVar10;
  puVar2[0x1d] = uVar10;
  puVar2[0x1e] = uVar10;
  puVar2[0x1f] = uVar10;
  puVar2[0x20] = uVar10;
  puVar2[0x21] = uVar10;
  uVar11 = DAT_003b098c;
  *(undefined2 *)(puVar2 + 0x22) = 0;
  puVar2[0x23] = 0;
  *(undefined1 *)(puVar2 + 0x24) = 0;
  puVar2[0x25] = uVar11;
  puVar2[0x26] = uVar11;
  puVar2[0x27] = uVar11;
  uVar11 = DAT_003b0990;
  puVar2[0x28] = DAT_003b0990;
  puVar2[0x29] = uVar11;
  puVar2[0x2a] = uVar11;
  puVar2[0x2b] = 0;
  puVar2[0x2c] = 0;
  *(undefined2 *)(puVar2 + 0x2d) = 6;
  puVar2[0x18] = DAT_003b0994;
  puVar2[0x2e] = uVar10;
  iVar3 = func_004EE484(puVar2 + 0x2f);
  *(undefined1 *)(iVar3 + -0xb6) = 2;
  *(int *)(iVar3 + -0xa8) = iVar3 + -0xd8;
  iVar4 = func_0010BA78(0x20);
  *(int *)(iVar3 + -0xa4) = iVar4;
  puVar2 = DAT_003b0998;
  *(uint *)(iVar3 + -0xa0) = iVar4 + (uint)*(byte *)(iVar3 + -0xb6) * 8;
  iVar6 = 2;
  puVar5 = (undefined4 *)(iVar4 + -8);
  do {
    uVar10 = puVar2[0xd];
    iVar6 = iVar6 + -1;
    puVar5[2] = puVar2[0xc];
    puVar5[3] = uVar10;
    uVar10 = puVar2[0xd];
    puVar5[4] = puVar2[0xc];
    puVar5[5] = uVar10;
    puVar5 = puVar5 + 4;
  } while (iVar6 != 0);
  bVar1 = *(byte *)(iVar3 + -0xb6);
  uVar8 = (uint)bVar1;
  puVar5 = (undefined4 *)func_0010BA78(uVar8 << 3);
  *(undefined4 **)(iVar3 + -0x9c) = puVar5;
  if (uVar8 != 0) {
    puVar7 = puVar5 + -2;
    if ((bVar1 & 1) != 0) {
      uVar10 = puVar2[5];
      *puVar5 = puVar2[4];
      puVar5[1] = uVar10;
      puVar7 = puVar5;
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
  puVar5 = (undefined4 *)func_0010CEE0(0x50,(int *)0x0,4);
  iVar4 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0x24;
    puVar5[1] = 2;
    iVar4 = func_00100118((int)(puVar5 + 2),DAT_003b099c,0x24,2);
  }
  if (iVar4 != 0) {
    *(int *)(iVar3 + -0xb0) = iVar4;
    *(undefined4 *)(iVar3 + -0xb4) = 2;
  }
  iVar4 = DAT_003b09ac;
  local_34 = (uint *)s_cState_Wait_003b09a0;
  local_38 = DAT_003b09ac;
  iVar6 = *(int *)(iVar3 + -0xb0);
  puVar9 = *(uint **)(iVar6 + 4);
  (**(code **)(DAT_003b09ac + 8))(&local_38);
  uVar8 = 0;
  do {
    if (*(char *)((int)local_34 + uVar8) == '\0') {
      if ((int)uVar8 < 0x40001) goto LAB_003b0828;
      break;
    }
    uVar8 = uVar8 + 1;
  } while ((int)uVar8 < 0x40001);
  uVar8 = 0;
LAB_003b0828:
  iVar6 = *(int *)(iVar6 + 8);
  if (iVar6 <= (int)uVar8) {
    uVar8 = iVar6 - 1;
  }
  (**(code **)(local_38 + 8))(&local_38);
  func_0010E3C4(puVar9,local_34,uVar8);
  *(undefined1 *)((int)puVar9 + uVar8) = 0;
  puVar5 = *(undefined4 **)(iVar3 + -0xa4);
  uVar10 = puVar2[1];
  uVar11 = puVar2[2];
  uVar12 = puVar2[3];
  uVar13 = puVar2[4];
  uVar14 = puVar2[5];
  *puVar5 = *puVar2;
  puVar5[1] = uVar10;
  puVar5 = *(undefined4 **)(iVar3 + -0xa0);
  *puVar5 = uVar11;
  puVar5[1] = uVar12;
  puVar5 = *(undefined4 **)(iVar3 + -0x9c);
  *puVar5 = uVar13;
  puVar5[1] = uVar14;
  local_34 = (uint *)s_cState_Attack_003b09b0;
  local_38 = iVar4;
  if (*(uint *)(iVar3 + -0xb4) < 2) {
    iVar6 = *(int *)(iVar3 + -0xb0);
  }
  else {
    iVar6 = *(int *)(iVar3 + -0xb0) + 0x24;
  }
  puVar9 = *(uint **)(iVar6 + 4);
  (**(code **)(iVar4 + 8))(&local_38);
  uVar8 = 0;
  do {
    if (*(char *)((int)local_34 + uVar8) == '\0') {
      if ((int)uVar8 < 0x40001) goto LAB_003b08d8;
      break;
    }
    uVar8 = uVar8 + 1;
  } while ((int)uVar8 < 0x40001);
  uVar8 = 0;
LAB_003b08d8:
  if (*(int *)(iVar6 + 8) <= (int)uVar8) {
    uVar8 = *(int *)(iVar6 + 8) - 1;
  }
  (**(code **)(local_38 + 8))(&local_38);
  func_0010E3C4(puVar9,local_34,uVar8);
  *(undefined1 *)((int)puVar9 + uVar8) = 0;
  iVar4 = *(int *)(iVar3 + -0xa4);
  uVar14 = puVar2[7];
  uVar10 = puVar2[8];
  uVar13 = puVar2[9];
  uVar11 = puVar2[10];
  uVar12 = puVar2[0xb];
  *(undefined4 *)(iVar4 + 8) = puVar2[6];
  *(undefined4 *)(iVar4 + 0xc) = uVar14;
  iVar4 = *(int *)(iVar3 + -0xa0);
  *(undefined4 *)(iVar4 + 8) = uVar10;
  *(undefined4 *)(iVar4 + 0xc) = uVar13;
  iVar4 = *(int *)(iVar3 + -0x9c);
  *(undefined4 *)(iVar4 + 8) = uVar11;
  *(undefined4 *)(iVar4 + 0xc) = uVar12;
  func_00669498((undefined4 *)(iVar3 + -0xbc),0);
  *(uint *)(iVar3 + -0x30) = *(uint *)(iVar3 + -0x30) | 0x40000;
  *(int *)(iVar3 + 0x10) = iVar3 + -0x5c;
  local_3c = *(uint *)(*(int *)(iVar3 + -0xd4) + 0x2cc);
  func_004EDEA0(iVar3,&local_3c);
  return iVar3 + -0xd8;
}

