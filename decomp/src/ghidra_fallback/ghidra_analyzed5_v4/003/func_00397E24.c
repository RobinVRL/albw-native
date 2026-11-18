#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0014D9B4(undefined4 *param_1,float fparam_0);
extern int func_003ABA3C(undefined4 *param_1,undefined4 param_2);
extern int func_0066819C(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_00398110;
extern float DAT_00398114;
extern undefined4 *DAT_00398118;
extern undefined *DAT_0039811c;
extern int DAT_0039812c;
extern char s_cState_Attack_00398130[];
extern char s_cState_Wait_00398120[];

// USA 00397E24 <- EU 00397E00 (Ghidra, non-matching)
// GLOBAL DAT_00398110 undefined4
// GLOBAL DAT_00398114 float
// GLOBAL DAT_00398118 undefined4 *
// GLOBAL DAT_0039811c undefined *
// GLOBAL DAT_0039812c int
// GLOBAL s_cState_Attack_00398130 string
// GLOBAL s_cState_Wait_00398120 string

int func_00397E24(undefined4 *param_1,undefined4 param_2)

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
  uint uVar10;
  uint *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(uint * *)(albw_frame + 0x4))
  puVar2 = func_003ABA3C(param_1,param_2);
  *puVar2 = DAT_00398110;
  puVar2 = func_0010A794(puVar2 + 4);
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  *(undefined1 *)(puVar2 + 0xd) = 1;
  puVar3 = func_0014D9B4(puVar2 + 0xe,DAT_00398114);
  *(undefined1 *)((int)puVar3 + -0x32) = 2;
  puVar3[-9] = puVar3 + -0x12;
  iVar4 = func_0010BA78(0x20);
  puVar3[-8] = iVar4;
  puVar2 = DAT_00398118;
  puVar3[-7] = iVar4 + (uint)*(byte *)((int)puVar3 + -0x32) * 8;
  iVar5 = 2;
  puVar6 = (undefined4 *)(iVar4 + -8);
  do {
    uVar12 = puVar2[0xd];
    iVar5 = iVar5 + -1;
    puVar6[2] = puVar2[0xc];
    puVar6[3] = uVar12;
    uVar12 = puVar2[0xd];
    puVar6[4] = puVar2[0xc];
    puVar6[5] = uVar12;
    puVar6 = puVar6 + 4;
  } while (iVar5 != 0);
  bVar1 = *(byte *)((int)puVar3 + -0x32);
  uVar10 = (uint)bVar1;
  puVar6 = (undefined4 *)func_0010BA78(uVar10 << 3);
  puVar3[-6] = puVar6;
  if (uVar10 != 0) {
    puVar7 = puVar6 + -2;
    if ((bVar1 & 1) != 0) {
      uVar12 = puVar2[5];
      *puVar6 = puVar2[4];
      puVar6[1] = uVar12;
      puVar7 = puVar6;
    }
    for (iVar4 = (int)uVar10 >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
      uVar12 = puVar2[5];
      puVar7[2] = puVar2[4];
      puVar7[3] = uVar12;
      uVar12 = puVar2[5];
      puVar7[4] = puVar2[4];
      puVar7[5] = uVar12;
      puVar7 = puVar7 + 4;
    }
  }
  puVar6 = (undefined4 *)func_0010CEE0(0x50,(int *)0x0,4);
  iVar4 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 0x24;
    puVar6[1] = 2;
    iVar4 = func_00100118((int)(puVar6 + 2),DAT_0039811c,0x24,2);
  }
  if (iVar4 != 0) {
    puVar3[-0xb] = iVar4;
    puVar3[-0xc] = 2;
  }
  iVar4 = DAT_0039812c;
  local_2c = (uint *)s_cState_Wait_00398120;
  local_30 = DAT_0039812c;
  iVar5 = puVar3[-0xb];
  puVar11 = *(uint **)(iVar5 + 4);
  (**(code **)(DAT_0039812c + 8))(&local_30);
  uVar10 = 0;
  do {
    if (*(char *)((int)local_2c + uVar10) == '\0') {
      if ((int)uVar10 < 0x40001) goto LAB_00397fc8;
      break;
    }
    uVar10 = uVar10 + 1;
  } while ((int)uVar10 < 0x40001);
  uVar10 = 0;
LAB_00397fc8:
  iVar5 = *(int *)(iVar5 + 8);
  if (iVar5 <= (int)uVar10) {
    uVar10 = iVar5 - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar11,local_2c,uVar10);
  *(undefined1 *)((int)puVar11 + uVar10) = 0;
  puVar6 = (undefined4 *)puVar3[-8];
  uVar12 = puVar2[2];
  uVar9 = puVar2[4];
  uVar8 = puVar2[3];
  uVar14 = puVar2[1];
  uVar13 = puVar2[5];
  *puVar6 = *puVar2;
  puVar6[1] = uVar14;
  puVar6 = (undefined4 *)puVar3[-7];
  *puVar6 = uVar12;
  puVar6[1] = uVar8;
  puVar6 = (undefined4 *)puVar3[-6];
  *puVar6 = uVar9;
  puVar6[1] = uVar13;
  local_2c = (uint *)s_cState_Attack_00398130;
  local_30 = iVar4;
  if ((uint)puVar3[-0xc] < 2) {
    iVar5 = puVar3[-0xb];
  }
  else {
    iVar5 = puVar3[-0xb] + 0x24;
  }
  puVar11 = *(uint **)(iVar5 + 4);
  (**(code **)(iVar4 + 8))(&local_30);
  uVar10 = 0;
  do {
    if (*(char *)((int)local_2c + uVar10) == '\0') {
      if ((int)uVar10 < 0x40001) goto LAB_00398090;
      break;
    }
    uVar10 = uVar10 + 1;
  } while ((int)uVar10 < 0x40001);
  uVar10 = 0;
LAB_00398090:
  if (*(int *)(iVar5 + 8) <= (int)uVar10) {
    uVar10 = *(int *)(iVar5 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar11,local_2c,uVar10);
  *(undefined1 *)((int)puVar11 + uVar10) = 0;
  iVar4 = puVar3[-8];
  uVar12 = puVar2[9];
  uVar8 = puVar2[10];
  uVar13 = puVar2[0xb];
  uVar9 = puVar2[8];
  uVar14 = puVar2[7];
  *(undefined4 *)(iVar4 + 8) = puVar2[6];
  *(undefined4 *)(iVar4 + 0xc) = uVar14;
  iVar4 = puVar3[-7];
  *(undefined4 *)(iVar4 + 8) = uVar9;
  *(undefined4 *)(iVar4 + 0xc) = uVar12;
  iVar4 = puVar3[-6];
  *(undefined4 *)(iVar4 + 8) = uVar8;
  *(undefined4 *)(iVar4 + 0xc) = uVar13;
  func_0066819C(puVar3 + -0xe,0);
  return (int)(puVar3 + -0x12);
}

