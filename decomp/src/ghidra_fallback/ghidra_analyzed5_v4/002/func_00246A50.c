#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_004CEAF0(int param_1);
extern int func_004CF478(int param_1,int param_2);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_0065F41C(undefined4 *param_1,undefined1 param_2);
extern int DAT_00246e08;
extern undefined4 *DAT_00246e0c;
extern undefined *DAT_00246e10;
extern int DAT_00246e14;
extern int DAT_00246e24;
extern char s_cState_Appear_00246e28[];
extern char s_cState_Wait_00246e18[];

// USA 00246A50 <- EU 00246A50 (Ghidra, non-matching)
// GLOBAL DAT_00246e08 int
// GLOBAL DAT_00246e0c undefined4 *
// GLOBAL DAT_00246e10 undefined *
// GLOBAL DAT_00246e14 int
// GLOBAL DAT_00246e24 int
// GLOBAL s_cState_Appear_00246e28 string
// GLOBAL s_cState_Wait_00246e18 string

undefined4 * func_00246A50(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 uVar14;
  uint *puVar15;
  undefined4 *puVar16;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(uint * *)(albw_frame + 0xc))
  #define local_30 (*(float *)(albw_frame + 0x10))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x18))
  piVar3 = func_00150E40(param_1,param_2);
  iVar6 = DAT_00246e08;
  piVar3[200] = DAT_00246e08 + 0x54;
  *piVar3 = iVar6;
  piVar3[0x103] = 0;
  piVar3[0x104] = 0;
  puVar4 = func_0010A794(piVar3 + 0x105);
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  *(undefined2 *)(puVar4 + 9) = 0;
  puVar4[10] = 0;
  puVar4[0xb] = 0;
  puVar4[0xc] = 0;
  puVar11 = puVar4 + -0x105;
  puVar4[-2] = *(undefined4 *)(puVar4[-0x51] + 0x1c8);
  uVar5 = func_0014E428((int)puVar11,0,0,0,1,0,0);
  puVar4[-1] = uVar5;
  local_30 = ALBW_AS_F32(puVar4[-0x11]);
  uStack_2c = puVar4[-0x10];
  uStack_28 = puVar4[-0xf];
  iVar6 = puVar4[-1];
  *(uint *)(iVar6 + 0x164) = *(uint *)(iVar6 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar6 + 0x80),puVar4[-0xb],&local_30);
  func_004CEAF0(puVar4[-1]);
  *(undefined1 *)((int)puVar4 + 6) = 2;
  puVar4[5] = puVar11;
  iVar6 = func_0010BA78(0x20);
  puVar4[6] = iVar6;
  puVar2 = DAT_00246e0c;
  puVar4[7] = iVar6 + (uint)*(byte *)((int)puVar4 + 6) * 8;
  iVar7 = 2;
  puVar8 = (undefined4 *)(iVar6 + -8);
  do {
    uVar5 = puVar2[0xb];
    iVar7 = iVar7 + -1;
    puVar8[2] = puVar2[10];
    puVar8[3] = uVar5;
    uVar5 = puVar2[0xb];
    puVar8[4] = puVar2[10];
    puVar8[5] = uVar5;
    puVar8 = puVar8 + 4;
  } while (iVar7 != 0);
  bVar1 = *(byte *)((int)puVar4 + 6);
  uVar13 = (uint)bVar1;
  puVar8 = (undefined4 *)func_0010BA78(uVar13 << 3);
  puVar4[8] = puVar8;
  if (uVar13 != 0) {
    puVar16 = puVar8 + -2;
    if ((bVar1 & 1) != 0) {
      uVar5 = puVar2[5];
      *puVar8 = puVar2[4];
      puVar8[1] = uVar5;
      puVar16 = puVar8;
    }
    for (iVar6 = (int)uVar13 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      uVar5 = puVar2[5];
      puVar16[2] = puVar2[4];
      puVar16[3] = uVar5;
      uVar5 = puVar2[5];
      puVar16[4] = puVar2[4];
      puVar16[5] = uVar5;
      puVar16 = puVar16 + 4;
    }
  }
  puVar8 = (undefined4 *)func_0010CEE0(0x50,(int *)0x0,4);
  iVar6 = 0;
  if (puVar8 != (undefined4 *)0x0) {
    *puVar8 = 0x24;
    puVar8[1] = 2;
    iVar6 = func_00100118((int)(puVar8 + 2),DAT_00246e10,0x24,2);
  }
  if (iVar6 != 0) {
    puVar4[2] = 2;
    puVar4[3] = iVar6;
  }
  iVar6 = DAT_00246e14;
  puVar4[-0x30] = puVar4;
  iVar7 = DAT_00246e24;
  *(undefined2 *)(iVar6 + (int)puVar11) = 2;
  local_34 = (uint *)s_cState_Wait_00246e18;
  local_38 = iVar7;
  iVar6 = puVar4[3];
  puVar15 = *(uint **)(iVar6 + 4);
  puVar8 = puVar4;
  (**(code **)(iVar7 + 8))(&local_38);
  uVar13 = 0;
  do {
    if (*(char *)((int)local_34 + uVar13) == '\0') {
      if ((int)uVar13 < 0x40001) goto LAB_00246ca8;
      break;
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0x40001);
  uVar13 = 0;
LAB_00246ca8:
  iVar6 = *(int *)(iVar6 + 8);
  if (iVar6 <= (int)uVar13) {
    uVar13 = iVar6 - 1;
  }
  (**(code **)(local_38 + 8))(&local_38);
  func_0010E3C4(puVar15,local_34,uVar13);
  *(undefined1 *)((int)puVar15 + uVar13) = 0;
  puVar16 = (undefined4 *)puVar4[6];
  uVar9 = puVar2[2];
  uVar12 = puVar2[3];
  uVar5 = *puVar2;
  uVar10 = puVar2[4];
  uVar14 = puVar2[5];
  puVar16[1] = puVar2[1];
  *puVar16 = uVar5;
  puVar16 = (undefined4 *)puVar4[7];
  *puVar16 = uVar9;
  puVar16[1] = uVar12;
  puVar16 = (undefined4 *)puVar4[8];
  *puVar16 = uVar10;
  puVar16[1] = uVar14;
  local_34 = (uint *)s_cState_Appear_00246e28;
  local_38 = iVar7;
  if ((uint)puVar4[2] < 2) {
    iVar6 = puVar4[3];
  }
  else {
    iVar6 = puVar4[3] + 0x24;
  }
  puVar15 = *(uint **)(iVar6 + 4);
  (**(code **)(iVar7 + 8))(&local_38);
  uVar13 = 0;
  do {
    if (*(char *)((int)local_34 + uVar13) == '\0') {
      if ((int)uVar13 < 0x40001) goto LAB_00246d6c;
      break;
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0x40001);
  uVar13 = 0;
LAB_00246d6c:
  if (*(int *)(iVar6 + 8) <= (int)uVar13) {
    uVar13 = *(int *)(iVar6 + 8) - 1;
  }
  (**(code **)(local_38 + 8))(&local_38);
  func_0010E3C4(puVar15,local_34,uVar13);
  *(undefined1 *)((int)puVar15 + uVar13) = 0;
  uVar5 = puVar2[9];
  iVar6 = puVar4[6];
  uVar12 = puVar2[4];
  uVar14 = puVar2[5];
  uVar9 = puVar2[7];
  uVar10 = puVar2[8];
  *(undefined4 *)(iVar6 + 8) = puVar2[6];
  *(undefined4 *)(iVar6 + 0xc) = uVar9;
  iVar6 = puVar4[7];
  *(undefined4 *)(iVar6 + 8) = uVar10;
  *(undefined4 *)(iVar6 + 0xc) = uVar5;
  iVar6 = puVar4[8];
  *(undefined4 *)(iVar6 + 8) = uVar12;
  *(undefined4 *)(iVar6 + 0xc) = uVar14;
  func_0065F41C(puVar8,0);
  puVar4[-0x4d] = puVar4[-0x4d] | 2;
  func_004CF478(puVar4[-1],0);
  return puVar11;
}

