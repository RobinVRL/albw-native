#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0014DF18(int param_1,undefined4 param_2,int param_3,uint param_4,undefined1 param_5, undefined1 param_6);
extern int func_0014E904(int param_1,int param_2,int param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_00194684(int param_1,undefined4 *param_2,uint *param_3,undefined4 *param_4, undefined4 *param_5);
extern int func_00194C14(int param_1);
extern int func_00324964(int param_1);
extern int func_003249E0(int param_1,uint param_2);
extern int func_00324A30(undefined4 *param_1,uint *param_2);
extern int func_004A879C(int param_1,int param_2,uint param_3);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_0054D964(int param_1,uint param_2);
extern int func_00659910(undefined4 *param_1,undefined1 param_2);
extern int DAT_00195344;
extern undefined4 *DAT_00195348;
extern undefined4 DAT_0019534c;
extern undefined4 *DAT_00195350;
extern int DAT_00195354;
extern int DAT_00195358;
extern int *DAT_00195368;
extern undefined4 *DAT_0019536c;
extern undefined *DAT_00195690;
extern int DAT_00195694;
extern char s_RentedOut_0019535c[];
extern char s_cState_None_001956a4[];
extern char s_cState_Sale_00195698[];
extern char s_cState_SoldOut_001956b0[];

// USA 00194EF8 <- EU 00194EF8 (Ghidra, non-matching)
// GLOBAL DAT_00195344 int
// GLOBAL DAT_00195348 undefined4 *
// GLOBAL DAT_0019534c undefined4
// GLOBAL DAT_00195350 undefined4 *
// GLOBAL DAT_00195354 int
// GLOBAL DAT_00195358 int
// GLOBAL DAT_00195368 int *
// GLOBAL DAT_0019536c undefined4 *
// GLOBAL DAT_00195690 undefined *
// GLOBAL DAT_00195694 int
// GLOBAL s_RentedOut_0019535c string
// GLOBAL s_cState_None_001956a4 string
// GLOBAL s_cState_Sale_00195698 string
// GLOBAL s_cState_SoldOut_001956b0 string

/* WARNING: Variable defined which should be unmapped: objStack_d8 */

undefined4 * func_00194EF8(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  uint *puVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 *puVar14;
  uint uVar15;
  uint unaff_r8;
  undefined4 uVar16;
  uint in_fpscr;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  _Alignas(8) unsigned char albw_frame[0xe0];
  #define objStack_d8 ((uint *)(albw_frame + 0x8))
  #define local_d0 (*(undefined4 * *)(albw_frame + 0x10))
  #define local_cc (*(undefined4 *)(albw_frame + 0x14))
  #define local_c8 (*(undefined4 * *)(albw_frame + 0x18))
  #define local_c4 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_c0 (*(undefined4 * *)(albw_frame + 0x20))
  #define local_bc (*(undefined4 *)(albw_frame + 0x24))
  #define local_b8 (*(undefined4 * *)(albw_frame + 0x28))
  #define local_b4 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_b0 (*(uint *)(albw_frame + 0x30))
  #define local_84 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_80 (*(undefined1 *)(albw_frame + 0x60))
  #define local_7c (*(undefined4 *)(albw_frame + 0x64))
  #define local_78 (*(undefined1 *)(albw_frame + 0x68))
  #define local_70 (*(int *)(albw_frame + 0x70))
  #define local_6c (*(uint * *)(albw_frame + 0x74))
  #define local_64 (*(undefined4 *)(albw_frame + 0x7c))
  #define local_60 (*(int *)(albw_frame + 0x80))
  #define local_5c (*(int *)(albw_frame + 0x84))
  #define local_58 (*(uint *)(albw_frame + 0x88))
  #define local_54 ((uint *)(albw_frame + 0x8c))
  #define local_48 (*(int *)(albw_frame + 0x98))
  #define local_44 (*(char * *)(albw_frame + 0x9c))
  piVar3 = (int *)func_00324A30(param_1,param_2);
  iVar5 = DAT_00195344;
  piVar3[200] = DAT_00195344 + 0x5c;
  *piVar3 = iVar5;
  piVar3[0x11e] = 0;
  piVar3[0x11f] = 0;
  piVar3[0x120] = 0;
  piVar3[0x121] = 0;
  piVar3[0x122] = 0;
  piVar3[0x123] = 0;
  puVar4 = func_0010A794(piVar3 + 0x124);
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  puVar14 = puVar4 + -0x124;
  puVar4[10] = 0;
  iVar5 = func_0054D964((int)puVar14,0);
  puVar4[0xb] = iVar5;
  puVar6 = (undefined4 *)func_0010BAB4(0x48);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = func_004EDC9C(puVar6);
  }
  puVar11 = DAT_00195348;
  puVar4[0xc] = puVar6;
  puVar4[0xd] = puVar11;
  *(undefined2 *)(puVar4 + 0xe) = 0;
  *(undefined1 *)((int)puVar4 + 0x3a) = 0;
  *(undefined1 *)((int)puVar4 + 0x3b) = 0;
  *(undefined1 *)(puVar4 + 0xf) = 0;
  *(undefined1 *)((int)puVar4 + 0x3d) = 0;
  *(undefined1 *)((int)puVar4 + 0x3e) = 0xff;
  objStack_d8[0] = (uint)&local_5c;
  local_60 = -1;
  local_64 = 0;
  local_5c = -1;
  local_58 = 0;
  piVar3 = puVar4 + 0xc;
  func_00194684((int)puVar14,&local_64,&local_58,&local_60,(undefined4 *)objStack_d8[0]);
  func_003249E0((int)puVar14,0);
  puVar6 = DAT_00195350;
  uVar16 = DAT_0019534c;
  if (local_58 != 0xffffffff) {
    puVar4[-6] = *(undefined4 *)(puVar4[-0x70] + 0x1c8 + local_58 * 4);
    objStack_d8[0] = 0;
    objStack_d8[1] = 0;
    piVar7 = func_0014DF18(puVar4[-0x70],((int)*(char *)((int)puVar4 + 0x3e) >> 0x1f) + 1,local_58,0
                           ,0,0);
    puVar4[-4] = piVar7;
    if (-1 < *(char *)((int)puVar4 + 0x3e)) {
      puVar8 = (uint *)func_0014E904((int)puVar14,1,0);
      puVar4[9] = puVar8;
      func_00169608(puVar8,0,(int *)(DAT_00195354 + (uint)*(byte *)(puVar4 + 0xf) * 8),puVar4[-6]);
      func_0016A02C(puVar4[9],-1,(int *)0xffffffff,0);
      local_d0 = &local_cc;
      objStack_d8[1] = 3;
      local_84 = 10;
      local_80 = 0;
      objStack_d8[0] = 1;
      local_cc = 0;
      local_b8 = (undefined4 *)(unaff_r8 | 0xff);
      local_c8 = puVar11;
      local_c4 = uVar16;
      local_c0 = puVar6;
      local_bc = uVar16;
      func_0016898C(puVar4[9],objStack_d8);
      iVar5 = *(int *)(puVar4[9] + 0x14);
      fVar17 = (float)VectorSignedToFloat((int)*(char *)((int)puVar4 + 0x3e),
                                          (byte)(in_fpscr >> 0x15) & 3);
      in_fpscr = in_fpscr & 0xfffffff | (uint)(*(float *)(iVar5 + 8) == fVar17) << 0x1e;
      if (!SUB41(in_fpscr >> 0x1e,0)) {
        *(float *)(iVar5 + 8) = fVar17;
        *(undefined1 *)(iVar5 + 0x26) = 1;
      }
      func_00168E9C((int *)puVar4[9],puVar4[-4],(int *)0x0);
    }
  }
  if (local_60 != -1) {
    puVar4[-5] = *(undefined4 *)(puVar4[-0x70] + 0x1c8 + local_60 * 4);
    objStack_d8[0] = 0;
    objStack_d8[1] = 0;
    piVar7 = func_0014DF18(puVar4[-0x70],1,local_60,0,0,0);
    puVar4[-3] = piVar7;
  }
  iVar5 = DAT_00195358;
  if (local_5c != -1) {
    puVar4[-2] = *(undefined4 *)(puVar4[-0x70] + 0x1c8 + local_5c * 4);
    objStack_d8[0] = 0;
    objStack_d8[1] = 0;
    piVar7 = func_0014DF18(puVar4[-0x70],1,local_5c,0,0,0);
    puVar4[-1] = piVar7;
    uVar9 = func_0014E904((int)puVar14,10,0);
    puVar4[10] = uVar9;
    local_44 = s_RentedOut_0019535c;
    local_48 = iVar5;
    func_00169608((uint *)puVar4[10],0,&local_48,puVar4[-2]);
    func_0016A02C(puVar4[10],-1,(int *)0xffffffff,0);
    local_c8 = &local_c4;
    local_cc = 3;
    local_7c = 10;
    local_78 = 0;
    local_d0 = (undefined4 *)0x1;
    local_c4 = 0;
    local_b0 = (uint)(puVar4 + -2) | 0xff;
    local_c0 = puVar11;
    local_bc = uVar16;
    local_b8 = puVar6;
    local_b4 = uVar16;
    func_0016898C(puVar4[10],(uint *)&local_d0);
    iVar10 = *(int *)(puVar4[10] + 0x14);
    fVar17 = (float)VectorUnsignedToFloat
                              ((uint)*(byte *)((int)puVar4 + 0x3a),(byte)(in_fpscr >> 0x15) & 3);
    if (*(float *)(iVar10 + 8) != fVar17) {
      *(float *)(iVar10 + 8) = fVar17;
      *(undefined1 *)(iVar10 + 0x26) = 1;
    }
    func_00168E9C((int *)puVar4[10],puVar4[-1],(int *)0x0);
  }
  *(undefined4 *)(puVar4[0xc] + 0x18) = puVar4[0xb];
  local_54[0] = puVar4[-0x71];
  func_004EDAD0(*piVar3,local_54);
  *(undefined2 *)(*piVar3 + 0x2c) = *(undefined2 *)(puVar4 + -0x10f);
  func_00194C14((int)puVar14);
  func_00324964((int)puVar14);
  func_004A879C(*DAT_00195368,*piVar3,2);
  *(undefined1 *)((int)puVar4 + 6) = 3;
  puVar4[5] = puVar14;
  iVar10 = func_0010BA78(0x30);
  puVar4[6] = iVar10;
  puVar6 = DAT_0019536c;
  puVar4[7] = iVar10 + (uint)*(byte *)((int)puVar4 + 6) * 8;
  iVar13 = 3;
  puVar11 = (undefined4 *)(iVar10 + -8);
  do {
    uVar16 = puVar6[0xf];
    iVar13 = iVar13 + -1;
    puVar11[2] = puVar6[0xe];
    puVar11[3] = uVar16;
    uVar16 = puVar6[0xf];
    puVar11[4] = puVar6[0xe];
    puVar11[5] = uVar16;
    puVar11 = puVar11 + 4;
  } while (iVar13 != 0);
  bVar1 = *(byte *)((int)puVar4 + 6);
  uVar15 = (uint)bVar1;
  puVar11 = (undefined4 *)func_0010BA78(uVar15 << 3);
  puVar4[8] = puVar11;
  if (uVar15 != 0) {
    puVar12 = puVar11 + -2;
    if ((bVar1 & 1) != 0) {
      uVar16 = puVar6[5];
      *puVar11 = puVar6[4];
      puVar11[1] = uVar16;
      puVar12 = puVar11;
    }
    for (iVar10 = (int)uVar15 >> 1; iVar10 != 0; iVar10 = iVar10 + -1) {
      uVar16 = puVar6[5];
      puVar12[2] = puVar6[4];
      puVar12[3] = uVar16;
      uVar16 = puVar6[5];
      puVar12[4] = puVar6[4];
      puVar12[5] = uVar16;
      puVar12 = puVar12 + 4;
    }
  }
  puVar11 = (undefined4 *)func_0010CEE0(0x74,(int *)0x0,4);
  iVar10 = 0;
  if (puVar11 != (undefined4 *)0x0) {
    *puVar11 = 0x24;
    puVar11[1] = 3;
    iVar10 = func_00100118((int)(puVar11 + 2),DAT_00195690,0x24,3);
  }
  if (iVar10 != 0) {
    puVar4[2] = 3;
    puVar4[3] = iVar10;
  }
  iVar10 = DAT_00195694;
  puVar4[-0x4f] = puVar4;
  *(undefined2 *)(iVar10 + (int)puVar14) = 3;
  local_6c = (uint *)s_cState_Sale_00195698;
  local_70 = iVar5;
  iVar10 = puVar4[3];
  puVar8 = *(uint **)(iVar10 + 4);
  (**(code **)(iVar5 + 8))(&local_70);
  uVar15 = 0;
  do {
    if (*(char *)((int)local_6c + uVar15) == '\0') {
      if ((int)uVar15 < 0x40001) goto LAB_00195484;
      break;
    }
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 0x40001);
  uVar15 = 0;
LAB_00195484:
  iVar10 = *(int *)(iVar10 + 8);
  if (iVar10 <= (int)uVar15) {
    uVar15 = iVar10 - 1;
  }
  (**(code **)(local_70 + 8))(&local_70);
  func_0010E3C4(puVar8,local_6c,uVar15);
  *(undefined1 *)((int)puVar8 + uVar15) = 0;
  puVar11 = (undefined4 *)puVar4[6];
  uVar16 = puVar6[1];
  uVar9 = puVar6[2];
  uVar18 = puVar6[3];
  uVar19 = puVar6[4];
  uVar20 = puVar6[5];
  *puVar11 = *puVar6;
  puVar11[1] = uVar16;
  puVar11 = (undefined4 *)puVar4[7];
  *puVar11 = uVar9;
  puVar11[1] = uVar18;
  puVar11 = (undefined4 *)puVar4[8];
  *puVar11 = uVar19;
  puVar11[1] = uVar20;
  local_6c = (uint *)s_cState_None_001956a4;
  local_70 = iVar5;
  if ((uint)puVar4[2] < 2) {
    iVar10 = puVar4[3];
  }
  else {
    iVar10 = puVar4[3] + 0x24;
  }
  puVar8 = *(uint **)(iVar10 + 4);
  (**(code **)(iVar5 + 8))(&local_70);
  uVar15 = 0;
  do {
    if (*(char *)((int)local_6c + uVar15) == '\0') {
      if ((int)uVar15 < 0x40001) goto LAB_00195534;
      break;
    }
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 0x40001);
  uVar15 = 0;
LAB_00195534:
  if (*(int *)(iVar10 + 8) <= (int)uVar15) {
    uVar15 = *(int *)(iVar10 + 8) - 1;
  }
  (**(code **)(local_70 + 8))(&local_70);
  func_0010E3C4(puVar8,local_6c,uVar15);
  *(undefined1 *)((int)puVar8 + uVar15) = 0;
  iVar10 = puVar4[6];
  uVar9 = puVar6[8];
  uVar18 = puVar6[4];
  uVar20 = puVar6[9];
  uVar19 = puVar6[7];
  uVar16 = puVar6[5];
  *(undefined4 *)(iVar10 + 8) = puVar6[6];
  *(undefined4 *)(iVar10 + 0xc) = uVar19;
  iVar10 = puVar4[7];
  *(undefined4 *)(iVar10 + 8) = uVar9;
  *(undefined4 *)(iVar10 + 0xc) = uVar20;
  iVar10 = puVar4[8];
  *(undefined4 *)(iVar10 + 8) = uVar18;
  *(undefined4 *)(iVar10 + 0xc) = uVar16;
  local_6c = (uint *)s_cState_SoldOut_001956b0;
  local_70 = iVar5;
  uVar15 = puVar4[2];
  if (uVar15 < 3) {
    iVar10 = puVar4[3];
    uVar2 = uVar15;
  }
  else {
    iVar10 = iVar5;
    uVar2 = puVar4[3];
  }
  if (2 < uVar15) {
    iVar10 = uVar2 + 0x48;
  }
  puVar8 = *(uint **)(iVar10 + 4);
  (**(code **)(iVar5 + 8))(&local_70);
  uVar15 = 0;
  do {
    if (*(char *)((int)local_6c + uVar15) == '\0') {
      if ((int)uVar15 < 0x40001) goto LAB_00195608;
      break;
    }
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 0x40001);
  uVar15 = 0;
LAB_00195608:
  if (*(int *)(iVar10 + 8) <= (int)uVar15) {
    uVar15 = *(int *)(iVar10 + 8) - 1;
  }
  (**(code **)(local_70 + 8))(&local_70);
  func_0010E3C4(puVar8,local_6c,uVar15);
  *(undefined1 *)((int)puVar8 + uVar15) = 0;
  iVar5 = puVar4[6];
  uVar20 = puVar6[0xb];
  uVar16 = puVar6[0xc];
  uVar9 = puVar6[0xd];
  uVar18 = puVar6[5];
  uVar19 = puVar6[4];
  *(undefined4 *)(iVar5 + 0x10) = puVar6[10];
  *(undefined4 *)(iVar5 + 0x14) = uVar20;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 0x10) = uVar16;
  *(undefined4 *)(iVar5 + 0x14) = uVar9;
  iVar5 = puVar4[8];
  *(undefined4 *)(iVar5 + 0x10) = uVar19;
  *(undefined4 *)(iVar5 + 0x14) = uVar18;
  func_00659910(puVar4,(char)local_64);
  return puVar14;
}

