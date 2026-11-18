#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0014D9B4(undefined4 *param_1,float fparam_0);
extern int func_003ABA3C(undefined4 *param_1,undefined4 param_2);
extern int func_004356B4(int *param_1);
extern int func_0054DDF4(int param_1,uint param_2);
extern int func_006686AC(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_0039a784;
extern float DAT_0039a788;
extern undefined4 DAT_0039a78c;
extern undefined4 DAT_0039a790;
extern undefined4 DAT_0039a794;
extern undefined4 DAT_0039a798;
extern undefined4 *DAT_0039a79c;
extern undefined4 DAT_0039a7a0;
extern undefined *DAT_0039a7a4;
extern int DAT_0039a7b4;
extern char s_cState_Defense_0039a7b8[];
extern char s_cState_Wait_0039a7a8[];

// USA 0039A45C <- EU 0039A438 (Ghidra, non-matching)
// GLOBAL DAT_0039a784 undefined4
// GLOBAL DAT_0039a788 float
// GLOBAL DAT_0039a78c undefined4
// GLOBAL DAT_0039a790 undefined4
// GLOBAL DAT_0039a794 undefined4
// GLOBAL DAT_0039a798 undefined4
// GLOBAL DAT_0039a79c undefined4 *
// GLOBAL DAT_0039a7a0 undefined4
// GLOBAL DAT_0039a7a4 undefined *
// GLOBAL DAT_0039a7b4 int
// GLOBAL s_cState_Defense_0039a7b8 string
// GLOBAL s_cState_Wait_0039a7a8 string

int func_0039A45C(undefined4 *param_1,undefined4 param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(uint * *)(albw_frame + 0xc))
  puVar2 = func_003ABA3C(param_1,param_2);
  *puVar2 = DAT_0039a784;
  puVar2 = func_0010A794(puVar2 + 4);
  fparam_0 = DAT_0039a788;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar3 = func_0014D9B4(puVar2 + 10,fparam_0);
  puVar11 = puVar3 + -0xe;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(undefined1 *)(puVar3 + 4) = 0xd;
  *(undefined1 *)((int)puVar3 + 0x11) = 0;
  *(undefined1 *)((int)puVar3 + 0x12) = 1;
  uVar8 = DAT_0039a78c;
  puVar3[5] = 0;
  puVar3[7] = uVar8;
  puVar3[8] = uVar8;
  puVar3[9] = uVar8;
  puVar3[10] = uVar8;
  puVar3[0xb] = uVar8;
  puVar3[0xc] = uVar8;
  puVar3[0xd] = uVar8;
  puVar3[0xe] = uVar8;
  puVar3[0xf] = uVar8;
  uVar8 = DAT_0039a790;
  *(undefined2 *)(puVar3 + 0x10) = 0;
  puVar3[0x11] = 0;
  *(undefined1 *)(puVar3 + 0x12) = 0;
  puVar3[0x13] = uVar8;
  puVar3[0x14] = uVar8;
  uVar9 = DAT_0039a794;
  puVar3[0x15] = uVar8;
  puVar3[0x16] = uVar9;
  puVar3[0x17] = uVar9;
  puVar3[0x18] = uVar9;
  puVar3[0x19] = 0;
  puVar3[0x1a] = 0;
  *(undefined2 *)(puVar3 + 0x1b) = 7;
  puVar2 = DAT_0039a79c;
  puVar3[6] = DAT_0039a798;
  puVar3[0x1f] = ALBW_AS_U32(fparam_0);
  puVar3[0x20] = ALBW_AS_U32(fparam_0);
  puVar3[0x22] = 0;
  uVar8 = puVar2[0x13];
  puVar3[0x23] = puVar2[0x12];
  puVar3[0x24] = uVar8;
  uVar8 = DAT_0039a7a0;
  puVar3[0x21] = DAT_0039a7a0;
  puVar3[0x26] = 0;
  uVar9 = puVar2[0x12];
  uVar10 = puVar2[0x13];
  puVar3[0x25] = uVar8;
  puVar3[0x27] = uVar9;
  puVar3[0x28] = uVar10;
  *(undefined1 *)((int)puVar3 + -0x22) = 2;
  puVar3[-5] = puVar11;
  iVar4 = func_0010BA78(0x20);
  puVar3[-4] = iVar4;
  puVar3[-3] = iVar4 + (uint)*(byte *)((int)puVar3 + -0x22) * 8;
  iVar5 = 2;
  puVar6 = (undefined4 *)(iVar4 + -8);
  do {
    uVar8 = puVar2[0x11];
    iVar5 = iVar5 + -1;
    puVar6[2] = puVar2[0x10];
    puVar6[3] = uVar8;
    uVar8 = puVar2[0x11];
    puVar6[4] = puVar2[0x10];
    puVar6[5] = uVar8;
    puVar6 = puVar6 + 4;
  } while (iVar5 != 0);
  bVar1 = *(byte *)((int)puVar3 + -0x22);
  uVar12 = (uint)bVar1;
  puVar6 = (undefined4 *)func_0010BA78(uVar12 << 3);
  puVar3[-2] = puVar6;
  if (uVar12 != 0) {
    puVar7 = puVar6 + -2;
    if ((bVar1 & 1) != 0) {
      uVar8 = puVar2[5];
      *puVar6 = puVar2[4];
      puVar6[1] = uVar8;
      puVar7 = puVar6;
    }
    for (iVar4 = (int)uVar12 >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
      uVar8 = puVar2[5];
      puVar7[2] = puVar2[4];
      puVar7[3] = uVar8;
      uVar8 = puVar2[5];
      puVar7[4] = puVar2[4];
      puVar7[5] = uVar8;
      puVar7 = puVar7 + 4;
    }
  }
  puVar6 = (undefined4 *)func_0010CEE0(0x50,(int *)0x0,4);
  iVar4 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 0x24;
    puVar6[1] = 2;
    iVar4 = func_00100118((int)(puVar6 + 2),DAT_0039a7a4,0x24,2);
  }
  if (iVar4 != 0) {
    puVar3[-7] = iVar4;
    puVar3[-8] = 2;
  }
  iVar4 = DAT_0039a7b4;
  local_34 = (uint *)s_cState_Wait_0039a7a8;
  local_38 = DAT_0039a7b4;
  iVar5 = puVar3[-7];
  puVar13 = *(uint **)(iVar5 + 4);
  (**(code **)(DAT_0039a7b4 + 8))(&local_38);
  uVar12 = 0;
  do {
    if (*(char *)((int)local_34 + uVar12) == '\0') {
      if ((int)uVar12 < 0x40001) goto LAB_0039a6c4;
      break;
    }
    uVar12 = uVar12 + 1;
  } while ((int)uVar12 < 0x40001);
  uVar12 = 0;
LAB_0039a6c4:
  iVar5 = *(int *)(iVar5 + 8);
  if (iVar5 <= (int)uVar12) {
    uVar12 = iVar5 - 1;
  }
  (**(code **)(local_38 + 8))(&local_38);
  func_0010E3C4(puVar13,local_34,uVar12);
  *(undefined1 *)((int)puVar13 + uVar12) = 0;
  puVar6 = (undefined4 *)puVar3[-4];
  uVar8 = puVar2[4];
  uVar9 = puVar2[5];
  uVar10 = puVar2[2];
  uVar14 = puVar2[1];
  uVar15 = puVar2[3];
  *puVar6 = *puVar2;
  puVar6[1] = uVar14;
  puVar6 = (undefined4 *)puVar3[-3];
  *puVar6 = uVar10;
  puVar6[1] = uVar15;
  puVar6 = (undefined4 *)puVar3[-2];
  *puVar6 = uVar8;
  puVar6[1] = uVar9;
  local_34 = (uint *)s_cState_Defense_0039a7b8;
  local_38 = iVar4;
  if ((uint)puVar3[-8] < 2) {
    iVar5 = puVar3[-7];
  }
  else {
    iVar5 = puVar3[-7] + 0x24;
  }
  puVar13 = *(uint **)(iVar5 + 4);
  (**(code **)(iVar4 + 8))(&local_38);
  uVar12 = 0;
  do {
    if (*(char *)((int)local_34 + uVar12) == '\0') {
      if ((int)uVar12 < 0x40001) goto LAB_0039a7d4;
      break;
    }
    uVar12 = uVar12 + 1;
  } while ((int)uVar12 < 0x40001);
  uVar12 = 0;
LAB_0039a7d4:
  if (*(int *)(iVar5 + 8) <= (int)uVar12) {
    uVar12 = *(int *)(iVar5 + 8) - 1;
  }
  (**(code **)(local_38 + 8))(&local_38);
  func_0010E3C4(puVar13,local_34,uVar12);
  *(undefined1 *)((int)puVar13 + uVar12) = 0;
  iVar4 = puVar3[-4];
  uVar8 = puVar2[8];
  uVar14 = puVar2[9];
  uVar10 = puVar2[10];
  uVar15 = puVar2[0xb];
  uVar9 = puVar2[7];
  *(undefined4 *)(iVar4 + 8) = puVar2[6];
  *(undefined4 *)(iVar4 + 0xc) = uVar9;
  iVar4 = puVar3[-3];
  *(undefined4 *)(iVar4 + 8) = uVar8;
  *(undefined4 *)(iVar4 + 0xc) = uVar14;
  iVar4 = puVar3[-2];
  *(undefined4 *)(iVar4 + 8) = uVar10;
  *(undefined4 *)(iVar4 + 0xc) = uVar15;
  func_006686AC(puVar3 + -10,0);
  *(undefined2 *)(puVar3 + 0x10) = 0xe0;
  func_004356B4(puVar3 + 6);
  iVar4 = func_0054DDF4(puVar3[-0xd],1);
  puVar3[3] = iVar4;
  uVar8 = puVar2[0xc];
  uVar9 = puVar2[0xd];
  puVar3[0x22] = puVar11;
  puVar3[0x23] = uVar8;
  puVar3[0x24] = uVar9;
  uVar8 = puVar2[0xe];
  uVar9 = puVar2[0xf];
  puVar3[0x26] = puVar11;
  puVar3[0x27] = uVar8;
  puVar3[0x28] = uVar9;
  return (int)puVar11;
}

