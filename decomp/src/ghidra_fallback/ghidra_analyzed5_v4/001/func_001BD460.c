#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169688(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_004356B4(int *param_1);
extern int func_00491E80(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004A879C(int param_1,int param_2,uint param_3);
extern int func_004CEAF0(int param_1);
extern int func_004D8054(float *param_1,uint param_2,float fparam_0);
extern int func_004ED9C8(int param_1);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_0054D964(int param_1,uint param_2);
extern float func_0054DE3C(int param_1,uint param_2,int param_3);
extern int func_00588BF0(int param_1,int param_2);
extern int func_0065B3E0(undefined4 *param_1,undefined1 param_2);
extern int DAT_001bd83c;
extern undefined4 DAT_001bd840;
extern undefined4 *DAT_001bd844;
extern undefined4 DAT_001bd848;
extern int DAT_001bd84c;
extern undefined DAT_001bd850;
extern undefined4 DAT_001bd868;
extern undefined4 DAT_001bd86c;
extern undefined *DAT_001bd870;
extern int DAT_001bd874;
extern float *DAT_001bdcf8;
extern float DAT_001bdcfc;
extern int *DAT_001bdd64;
extern char s_ArrowWall_001bd85c[];
extern char s_cState_PrepareShot_001bdcbc[];
extern char s_cState_Vibration_001bdcd0[];
extern char s_cState_WaitShot_001bd878[];
extern char s_cState_WaitSwitchOn_001bdce4[];

// USA 001BD460 <- EU 001BD460 (Ghidra, non-matching)
// GLOBAL DAT_001bd83c int
// GLOBAL DAT_001bd840 undefined4
// GLOBAL DAT_001bd844 undefined4 *
// GLOBAL DAT_001bd848 undefined4
// GLOBAL DAT_001bd84c int
// GLOBAL DAT_001bd850 undefined
// GLOBAL DAT_001bd868 undefined4
// GLOBAL DAT_001bd86c undefined4
// GLOBAL DAT_001bd870 undefined *
// GLOBAL DAT_001bd874 int
// GLOBAL DAT_001bdcf8 float *
// GLOBAL DAT_001bdcfc float
// GLOBAL DAT_001bdd64 int *
// GLOBAL s_ArrowWall_001bd85c string
// GLOBAL s_cState_PrepareShot_001bdcbc string
// GLOBAL s_cState_Vibration_001bdcd0 string
// GLOBAL s_cState_WaitShot_001bd878 string
// GLOBAL s_cState_WaitSwitchOn_001bdce4 string

/* WARNING: Variable defined which should be unmapped: objStack_d0 */

undefined4 * func_001BD460(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  float *pfVar2;
  bool bVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  int *piVar14;
  undefined4 *puVar15;
  uint *puVar16;
  int *piVar17;
  uint uVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  _Alignas(8) unsigned char albw_frame[0xd0];
  #define objStack_d0 ((uint *)(albw_frame + 0x0))
  #define local_c4 ((uint *)(albw_frame + 0xc))
  #define local_bc (*(undefined4 * *)(albw_frame + 0x14))
  #define local_b8 (*(undefined4 *)(albw_frame + 0x18))
  #define local_b4 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_b0 (*(undefined4 *)(albw_frame + 0x20))
  #define local_ac (*(undefined4 *)(albw_frame + 0x24))
  #define local_a8 (*(undefined4 *)(albw_frame + 0x28))
  #define local_a4 (*(uint *)(albw_frame + 0x2c))
  #define local_70 (*(undefined4 *)(albw_frame + 0x60))
  #define local_6c (*(undefined1 *)(albw_frame + 0x64))
  #define local_68 (*(int *)(albw_frame + 0x68))
  #define local_64 (*(uint * *)(albw_frame + 0x6c))
  #define local_60 (*(undefined4 * *)(albw_frame + 0x70))
  #define local_5c (*(float *)(albw_frame + 0x74))
  #define local_58 (*(uint * *)(albw_frame + 0x78))
  #define fStack_54 (*(float *)(albw_frame + 0x7c))
  #define local_48 (*(int * *)(albw_frame + 0x88))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0x8c))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x90))
  #define local_3c ((uint *)(albw_frame + 0x94))
  #define puStack_2c (*(undefined4 * *)(albw_frame + 0xa4))
  #define local_28 (*(uint * *)(albw_frame + 0xa8))
  puStack_2c = param_1;
  local_28 = param_2;
  piVar4 = func_00150E40(param_1,param_2);
  iVar8 = DAT_001bd83c;
  *piVar4 = DAT_001bd83c;
  piVar4[200] = iVar8 + 0x54;
  puVar5 = func_0010A794(piVar4 + 0x103);
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[10] = 0;
  puVar5[0xb] = 0;
  uVar11 = DAT_001bd840;
  puVar5[0xc] = 0;
  puVar5[0xd] = uVar11;
  puVar5[0xe] = 0;
  puVar15 = puVar5 + -0x103;
  puVar5[0xf] = 0;
  puVar5[0x10] = uVar11;
  *(undefined1 *)(puVar5 + 0x11) = 0;
  *(undefined1 *)((int)puVar5 + 0x45) = 0;
  puVar6 = (undefined4 *)func_0010BAB4(0x48);
  puVar7 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar7 = func_004EDC9C(puVar6);
  }
  puVar5[0x12] = puVar7;
  piVar4 = puVar5 + 0x12;
  iVar8 = func_0054D964((int)puVar15,0);
  puVar5[0x13] = iVar8;
  piVar17 = puVar5 + 0x13;
  iVar8 = func_0054D964((int)puVar15,0);
  puVar6 = DAT_001bd844;
  local_48 = puVar5 + 0x14;
  puVar5[0x14] = iVar8;
  puVar5[0x16] = 0;
  uVar13 = puVar6[0x17];
  puVar5[0x17] = puVar6[0x16];
  puVar5[0x18] = uVar13;
  puVar5[0x15] = DAT_001bd848;
  objStack_d0[1] = 0;
  objStack_d0[0] = 1;
  objStack_d0[2] = 0;
  uVar13 = func_0014E428((int)puVar15,0,0,0,1,0,0);
  puVar5[9] = uVar13;
  puVar9 = (undefined4 *)func_0010BAB4(0xa8);
  iVar8 = DAT_001bd84c;
  puVar7 = (undefined4 *)0x0;
  if (puVar9 != (undefined4 *)0x0) {
    local_64 = (uint *)&DAT_001bd850;
    local_68 = DAT_001bd84c;
    puVar7 = func_0016A2FC(puVar9,1,&local_68,1);
  }
  puVar5[10] = puVar7;
  local_64 = (uint *)s_ArrowWall_001bd85c;
  local_68 = iVar8;
  func_00169688((uint *)puVar5[10],0,&local_68,*(int *)(puVar5[-0x4f] + 0x1c8));
  uVar18 = 0x1bd5e8;
  func_0016A02C(puVar5[10],-1,(int *)0xffffffff,0);
  local_c4[1] = 3;
  local_bc = &local_b8;
  local_70 = 0;
  local_6c = 0;
  local_b8 = 0;
  local_c4[0] = 1;
  local_b4 = DAT_001bd868;
  local_ac = DAT_001bd86c;
  local_a4 = uVar18 | 0xff;
  uVar13 = DAT_001bd868;
  local_b0 = uVar11;
  local_a8 = uVar11;
  func_0016898C(puVar5[10],local_c4);
  *(undefined4 *)(*(int *)(puVar5[10] + 0x14) + 0x10) = uVar13;
  iVar10 = puVar5[9];
  *(uint *)(iVar10 + 0x164) = *(uint *)(iVar10 + 0x164) | 0x40000000;
  uVar18 = puVar5[-9];
  piVar14 = (int *)0x0;
  func_00491E80((float *)(iVar10 + 0x80),0,uVar18,0);
  iVar10 = puVar5[9];
  *(uint *)(iVar10 + 0x164) = *(uint *)(iVar10 + 0x164) | 0x40000000;
  *(undefined4 *)(iVar10 + 0x8c) = puVar5[-0xf];
  *(undefined4 *)(iVar10 + 0x9c) = puVar5[-0xe];
  uVar11 = puVar5[-0xd];
  *(undefined4 *)(iVar10 + 0xac) = uVar11;
  func_00169A80((int *)puVar5[10],uVar11,uVar18,piVar14);
  func_00168E9C((int *)puVar5[10],puVar5[9],(int *)0x0);
  func_004CEAF0(puVar5[9]);
  *(bool *)(puVar5 + 0x11) = (short)local_28[10] != 0;
  *(undefined1 *)((int)puVar5 + 0x45) = 0;
  *(undefined1 *)((int)puVar5 + 6) = 4;
  puVar5[5] = puVar15;
  local_60 = puVar5;
  iVar10 = func_0010BA78(0x40);
  puVar5[6] = iVar10;
  puVar5[7] = iVar10 + (uint)*(byte *)((int)puVar5 + 6) * 8;
  iVar12 = 4;
  puVar7 = (undefined4 *)(iVar10 + -8);
  do {
    uVar11 = puVar6[0x15];
    iVar12 = iVar12 + -1;
    puVar7[2] = puVar6[0x14];
    puVar7[3] = uVar11;
    uVar11 = puVar6[0x15];
    puVar7[4] = puVar6[0x14];
    puVar7[5] = uVar11;
    puVar7 = puVar7 + 4;
  } while (iVar12 != 0);
  bVar1 = *(byte *)((int)puVar5 + 6);
  uVar18 = (uint)bVar1;
  puVar7 = (undefined4 *)func_0010BA78(uVar18 << 3);
  puVar5[8] = puVar7;
  if (uVar18 != 0) {
    puVar9 = puVar7 + -2;
    if ((bVar1 & 1) != 0) {
      uVar11 = puVar6[5];
      *puVar7 = puVar6[4];
      puVar7[1] = uVar11;
      puVar9 = puVar7;
    }
    for (iVar10 = (int)uVar18 >> 1; iVar10 != 0; iVar10 = iVar10 + -1) {
      uVar11 = puVar6[5];
      puVar9[2] = puVar6[4];
      puVar9[3] = uVar11;
      uVar11 = puVar6[5];
      puVar9[4] = puVar6[4];
      puVar9[5] = uVar11;
      puVar9 = puVar9 + 4;
    }
  }
  puVar7 = (undefined4 *)func_0010CEE0(0x98,(int *)0x0,4);
  iVar10 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0x24;
    puVar7[1] = 4;
    iVar10 = func_00100118((int)(puVar7 + 2),DAT_001bd870,0x24,4);
  }
  if (iVar10 != 0) {
    puVar5[2] = 4;
    puVar5[3] = iVar10;
  }
  iVar10 = DAT_001bd874;
  puVar5[-0x2e] = local_60;
  *(undefined2 *)(iVar10 + (int)puVar15) = 4;
  local_64 = (uint *)s_cState_WaitShot_001bd878;
  local_68 = iVar8;
  iVar10 = puVar5[3];
  local_58 = *(uint **)(iVar10 + 4);
  (**(code **)(iVar8 + 8))(&local_68);
  puVar16 = local_58;
  uVar18 = 0;
  do {
    if (*(char *)((int)local_64 + uVar18) == '\0') {
      if ((int)uVar18 < 0x40001) goto LAB_001bd8b4;
      break;
    }
    uVar18 = uVar18 + 1;
  } while ((int)uVar18 < 0x40001);
  uVar18 = 0;
LAB_001bd8b4:
  iVar10 = *(int *)(iVar10 + 8);
  if (iVar10 <= (int)uVar18) {
    uVar18 = iVar10 - 1;
  }
  (**(code **)(local_68 + 8))(&local_68);
  func_0010E3C4(puVar16,local_64,uVar18);
  *(undefined1 *)((int)local_58 + uVar18) = 0;
  puVar7 = (undefined4 *)puVar5[6];
  uVar13 = DAT_001bd844[1];
  uVar20 = DAT_001bd844[2];
  uVar21 = DAT_001bd844[3];
  uVar22 = DAT_001bd844[4];
  uVar11 = DAT_001bd844[5];
  *puVar7 = *DAT_001bd844;
  puVar7[1] = uVar13;
  puVar7 = (undefined4 *)puVar5[7];
  *puVar7 = uVar20;
  puVar7[1] = uVar21;
  puVar7 = (undefined4 *)puVar5[8];
  *puVar7 = uVar22;
  puVar7[1] = uVar11;
  local_64 = (uint *)s_cState_PrepareShot_001bdcbc;
  local_68 = iVar8;
  if ((uint)puVar5[2] < 2) {
    iVar10 = puVar5[3];
  }
  else {
    iVar10 = puVar5[3] + 0x24;
  }
  puVar16 = *(uint **)(iVar10 + 4);
  (**(code **)(iVar8 + 8))(&local_68);
  uVar18 = 0;
  do {
    if (*(char *)((int)local_64 + uVar18) == '\0') {
      if ((int)uVar18 < 0x40001) goto LAB_001bd97c;
      break;
    }
    uVar18 = uVar18 + 1;
  } while ((int)uVar18 < 0x40001);
  uVar18 = 0;
LAB_001bd97c:
  if (*(int *)(iVar10 + 8) <= (int)uVar18) {
    uVar18 = *(int *)(iVar10 + 8) - 1;
  }
  (**(code **)(local_68 + 8))(&local_68);
  func_0010E3C4(puVar16,local_64,uVar18);
  puVar7 = DAT_001bd844;
  *(undefined1 *)((int)puVar16 + uVar18) = 0;
  iVar10 = puVar5[6];
  uVar11 = puVar7[4];
  uVar13 = puVar7[8];
  uVar21 = puVar7[7];
  uVar22 = puVar7[9];
  uVar20 = puVar7[5];
  *(undefined4 *)(iVar10 + 8) = puVar7[6];
  *(undefined4 *)(iVar10 + 0xc) = uVar21;
  iVar10 = puVar5[7];
  *(undefined4 *)(iVar10 + 8) = uVar13;
  *(undefined4 *)(iVar10 + 0xc) = uVar22;
  iVar10 = puVar5[8];
  *(undefined4 *)(iVar10 + 8) = uVar11;
  *(undefined4 *)(iVar10 + 0xc) = uVar20;
  local_64 = (uint *)s_cState_Vibration_001bdcd0;
  local_68 = iVar8;
  if ((uint)puVar5[2] < 3) {
    iVar10 = puVar5[3];
  }
  else {
    iVar10 = puVar5[3] + 0x48;
  }
  puVar16 = *(uint **)(iVar10 + 4);
  (**(code **)(iVar8 + 8))(&local_68);
  uVar18 = 0;
  do {
    if (*(char *)((int)local_64 + uVar18) == '\0') {
      if ((int)uVar18 < 0x40001) goto LAB_001bda54;
      break;
    }
    uVar18 = uVar18 + 1;
  } while ((int)uVar18 < 0x40001);
  uVar18 = 0;
LAB_001bda54:
  if (*(int *)(iVar10 + 8) <= (int)uVar18) {
    uVar18 = *(int *)(iVar10 + 8) - 1;
  }
  (**(code **)(local_68 + 8))(&local_68);
  func_0010E3C4(puVar16,local_64,uVar18);
  *(undefined1 *)((int)puVar16 + uVar18) = 0;
  puVar7 = DAT_001bd844;
  iVar10 = puVar5[6];
  uVar11 = DAT_001bd844[0xc];
  uVar20 = DAT_001bd844[0xd];
  uVar13 = DAT_001bd844[4];
  uVar22 = DAT_001bd844[5];
  uVar21 = DAT_001bd844[0xb];
  *(undefined4 *)(iVar10 + 0x10) = DAT_001bd844[10];
  *(undefined4 *)(iVar10 + 0x14) = uVar21;
  iVar10 = puVar5[7];
  *(undefined4 *)(iVar10 + 0x10) = uVar11;
  *(undefined4 *)(iVar10 + 0x14) = uVar20;
  iVar10 = puVar5[8];
  *(undefined4 *)(iVar10 + 0x10) = uVar13;
  *(undefined4 *)(iVar10 + 0x14) = uVar22;
  local_64 = (uint *)s_cState_WaitSwitchOn_001bdce4;
  local_68 = iVar8;
  if ((uint)puVar5[2] < 4) {
    iVar10 = puVar5[3];
  }
  else {
    iVar10 = puVar5[3] + 0x6c;
  }
  puVar16 = *(uint **)(iVar10 + 4);
  (**(code **)(iVar8 + 8))(&local_68);
  uVar18 = 0;
  do {
    if (*(char *)((int)local_64 + uVar18) == '\0') {
      if ((int)uVar18 < 0x40001) goto LAB_001bdb2c;
      break;
    }
    uVar18 = uVar18 + 1;
  } while ((int)uVar18 < 0x40001);
  uVar18 = 0;
LAB_001bdb2c:
  if (*(int *)(iVar10 + 8) <= (int)uVar18) {
    uVar18 = *(int *)(iVar10 + 8) - 1;
  }
  (**(code **)(local_68 + 8))(&local_68);
  func_0010E3C4(puVar16,local_64,uVar18);
  *(undefined1 *)((int)puVar16 + uVar18) = 0;
  iVar8 = puVar5[6];
  uVar11 = puVar7[0x10];
  uVar13 = puVar7[4];
  uVar20 = puVar7[0xf];
  uVar22 = puVar7[0x11];
  uVar21 = puVar7[5];
  *(undefined4 *)(iVar8 + 0x18) = puVar7[0xe];
  *(undefined4 *)(iVar8 + 0x1c) = uVar20;
  iVar8 = puVar5[7];
  *(undefined4 *)(iVar8 + 0x18) = uVar11;
  *(undefined4 *)(iVar8 + 0x1c) = uVar22;
  iVar8 = puVar5[8];
  *(undefined4 *)(iVar8 + 0x18) = uVar13;
  *(undefined4 *)(iVar8 + 0x1c) = uVar21;
  if (*(char *)(puVar5 + 0x11) == '\0') {
    func_0065B3E0(local_60,0);
  }
  else {
    bVar3 = func_00588BF0((int)puVar15,0);
    *(bool *)((int)puVar5 + 0x45) = bVar3;
    func_0065B3E0(local_60,3);
  }
  objStack_d0[0] = puVar5[-0xf];
  objStack_d0[1] = puVar5[-0xe];
  objStack_d0[2] = puVar5[-0xd];
  fVar19 = func_0054DE3C(puVar15,0,1);
  objStack_d0[1] = (uint)ALBW_AS_U32((ALBW_AS_F32(objStack_d0[1]) - fVar19));
  local_60 = (undefined4 *)0xe4;
  *(undefined2 *)(puVar5[0x14] + 0x28) = 0xe4;
  iVar8 = *local_48;
  *(uint *)(iVar8 + 4) = objStack_d0[0];
  *(uint *)(iVar8 + 8) = objStack_d0[1];
  *(uint *)(iVar8 + 0xc) = objStack_d0[2];
  func_004356B4((int *)*local_48);
  uVar11 = puVar7[0x12];
  uVar13 = puVar7[0x13];
  puVar5[0x16] = puVar15;
  puVar5[0x17] = uVar11;
  puVar5[0x18] = uVar13;
  fVar19 = DAT_001bdcfc;
  pfVar2 = DAT_001bdcf8;
  local_60 = (undefined4 *)0x224;
  *(undefined2 *)(puVar5[0x13] + 0x28) = 0x224;
  local_5c = *pfVar2;
  local_58 = (uint *)ALBW_PTR_BITS(pfVar2[1]);
  fStack_54 = pfVar2[2];
  func_004D8054(&local_5c,puVar5[-9],fVar19);
  iVar8 = *piVar17;
  func_00115C54((float *)&local_48,(float *)objStack_d0,&local_5c);
  *(int **)(iVar8 + 4) = local_48;
  *(undefined4 *)(iVar8 + 8) = uStack_44;
  *(undefined4 *)(iVar8 + 0xc) = uStack_40;
  func_004356B4((int *)*piVar17);
  *(int *)(puVar5[0x12] + 0x18) = *piVar17;
  func_004ED9C8(*piVar4);
  local_3c[0] = puVar5[-0x50];
  func_004EDAD0(*piVar4,local_3c);
  *(undefined2 *)(*piVar4 + 0x2c) = *(undefined2 *)(puVar5 + -0xee);
  func_004A879C(*DAT_001bdd64,*piVar4,2);
  return puVar15;
}

