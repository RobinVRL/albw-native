#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010BEB4(int param_1,int *param_2);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_0014E904(int param_1,int param_2,int param_3);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_004356B4(int *param_1);
extern int func_004A879C(int param_1,int param_2,uint param_3);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_0054D964(int param_1,uint param_2);
extern int DAT_00194474;
extern undefined DAT_00194478;
extern uint DAT_0019447c;
extern float DAT_00194480;
extern undefined4 DAT_00194484;
extern undefined4 DAT_00194488;
extern float DAT_0019448c;
extern int *DAT_00194490;
extern undefined4 *DAT_00194494;
extern undefined *DAT_00194498;
extern int DAT_0019449c;
extern char s_cState_Wait_001944a0[];

// USA 001940B4 <- EU 001940B4 (Ghidra, non-matching)
// GLOBAL DAT_00194474 int
// GLOBAL DAT_00194478 undefined
// GLOBAL DAT_0019447c uint
// GLOBAL DAT_00194480 float
// GLOBAL DAT_00194484 undefined4
// GLOBAL DAT_00194488 undefined4
// GLOBAL DAT_0019448c float
// GLOBAL DAT_00194490 int *
// GLOBAL DAT_00194494 undefined4 *
// GLOBAL DAT_00194498 undefined *
// GLOBAL DAT_0019449c int
// GLOBAL s_cState_Wait_001944a0 string

/* WARNING: Variable defined which should be unmapped: objStack_a0 */

undefined4 * func_001940B4(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int *piVar10;
  int iVar11;
  code *pcVar12;
  uint uVar13;
  undefined4 *puVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define objStack_a0 ((uint *)(albw_frame + 0x0))
  #define local_94 ((uint *)(albw_frame + 0xc))
  #define local_8c (*(undefined4 * *)(albw_frame + 0x14))
  #define local_88 (*(undefined4 *)(albw_frame + 0x18))
  #define local_84 (*(float *)(albw_frame + 0x1c))
  #define uStack_80 (*(undefined4 *)(albw_frame + 0x20))
  #define local_7c (*(undefined4 *)(albw_frame + 0x24))
  #define local_78 (*(undefined4 *)(albw_frame + 0x28))
  #define local_74 (*(uint *)(albw_frame + 0x2c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x60))
  #define local_3c (*(undefined1 *)(albw_frame + 0x64))
  #define local_38 (*(uint *)(albw_frame + 0x68))
  #define local_34 (*(uint * *)(albw_frame + 0x6c))
  #define local_30 ((uint *)(albw_frame + 0x70))
  piVar3 = func_00150E40(param_1,param_2);
  iVar5 = DAT_00194474;
  *piVar3 = DAT_00194474;
  piVar3[200] = iVar5 + 0x54;
  puVar4 = func_0010A794(piVar3 + 0x103);
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  puVar4[10] = 0;
  puVar14 = puVar4 + -0x103;
  puVar4[0xb] = 0;
  iVar5 = func_0054D964((int)puVar14,0);
  puVar4[0xc] = iVar5;
  puVar6 = (undefined4 *)func_0010BAB4(0x48);
  puVar7 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar7 = func_004EDC9C(puVar6);
  }
  puVar4[0xd] = puVar7;
  *(undefined1 *)(puVar4 + 0xe) = 0;
  piVar3 = puVar4 + 0xd;
  puVar4[9] = *(undefined4 *)(puVar4[-0x4f] + 0x1c8);
  objStack_a0[0] = 1;
  objStack_a0[1] = 0;
  objStack_a0[2] = 0;
  uVar8 = func_0014E428((int)puVar14,1,0,0,1,0,0);
  puVar4[10] = uVar8;
  uVar8 = func_0014E904((int)puVar14,1,0);
  uVar13 = DAT_0019447c;
  puVar4[0xb] = uVar8;
  local_34 = (uint *)&DAT_00194478;
  local_38 = uVar13;
  func_00169608((uint *)puVar4[0xb],0,(int *)&local_38,puVar4[9]);
  local_74 = func_0016A02C(puVar4[0xb],-1,(int *)0xffffffff,0);
  local_8c = &local_88;
  local_94[1] = 3;
  local_40 = 10;
  local_3c = 0;
  local_94[0] = 1;
  local_88 = 0;
  local_7c = DAT_00194488;
  local_78 = DAT_00194484;
  local_74 = local_74 | 0xff;
  local_84 = DAT_00194480;
  uStack_80 = DAT_00194484;
  fVar21 = DAT_00194480;
  func_0016898C(puVar4[0xb],local_94);
  iVar5 = *(int *)(puVar4[0xb] + 0x14);
  if (*(float *)(iVar5 + 8) != fVar21) {
    *(float *)(iVar5 + 8) = fVar21;
    *(undefined1 *)(iVar5 + 0x26) = 1;
  }
  func_00168E9C((int *)puVar4[0xb],puVar4[10],(int *)0x0);
  *(undefined4 *)(puVar4[0xd] + 0x18) = puVar4[0xc];
  local_30[0] = puVar4[-0x50];
  func_004EDAD0(*piVar3,local_30);
  *(undefined2 *)(*piVar3 + 0x2c) = *(undefined2 *)(puVar4 + -0xee);
  objStack_a0[0] = puVar4[-0xf];
  objStack_a0[1] = puVar4[-0xe];
  objStack_a0[2] = puVar4[-0xd];
  iVar5 = puVar4[10];
  *(uint *)(iVar5 + 0x164) = *(uint *)(iVar5 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar5 + 0x80),puVar4[-9],(float *)objStack_a0);
  func_004CEAF0(puVar4[10]);
  piVar10 = (int *)puVar4[0xc];
  objStack_a0[1] = (uint)ALBW_AS_U32((ALBW_AS_F32(objStack_a0[1]) + DAT_0019448c));
  piVar10[1] = objStack_a0[0];
  piVar10[2] = objStack_a0[1];
  piVar10[3] = objStack_a0[2];
  func_004356B4(piVar10);
  func_004A879C(*DAT_00194490,*piVar3,2);
  *(undefined1 *)((int)puVar4 + 6) = 1;
  puVar4[5] = puVar14;
  iVar5 = func_0010BA78(0x10);
  puVar4[6] = iVar5;
  puVar7 = DAT_00194494;
  puVar4[7] = iVar5 + (uint)*(byte *)((int)puVar4 + 6) * 8;
  iVar11 = 1;
  puVar6 = (undefined4 *)(iVar5 + -8);
  do {
    uVar8 = puVar7[7];
    iVar11 = iVar11 + -1;
    puVar6[2] = puVar7[6];
    puVar6[3] = uVar8;
    uVar8 = puVar7[7];
    puVar6[4] = puVar7[6];
    puVar6[5] = uVar8;
    puVar6 = puVar6 + 4;
  } while (iVar11 != 0);
  bVar1 = *(byte *)((int)puVar4 + 6);
  uVar15 = (uint)bVar1;
  puVar6 = (undefined4 *)func_0010BA78(uVar15 << 3);
  puVar4[8] = puVar6;
  if (uVar15 != 0) {
    puVar9 = puVar6 + -2;
    if ((bVar1 & 1) != 0) {
      uVar8 = puVar7[5];
      *puVar6 = puVar7[4];
      puVar6[1] = uVar8;
      puVar9 = puVar6;
    }
    for (iVar5 = (int)uVar15 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      uVar8 = puVar7[5];
      puVar9[2] = puVar7[4];
      puVar9[3] = uVar8;
      uVar8 = puVar7[5];
      puVar9[4] = puVar7[4];
      puVar9[5] = uVar8;
      puVar9 = puVar9 + 4;
    }
  }
  puVar6 = (undefined4 *)func_0010CEE0(0x2c,(int *)0x0,4);
  iVar5 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 0x24;
    puVar6[1] = 1;
    iVar5 = func_00100118((int)(puVar6 + 2),DAT_00194498,0x24,1);
  }
  if (iVar5 != 0) {
    puVar4[2] = 1;
    puVar4[3] = iVar5;
  }
  iVar5 = DAT_0019449c;
  puVar4[-0x2e] = puVar4;
  *(undefined2 *)(iVar5 + (int)puVar14) = 1;
  local_34 = (uint *)s_cState_Wait_001944a0;
  local_38 = uVar13;
  iVar5 = puVar4[3];
  puVar16 = *(uint **)(iVar5 + 4);
  (**(code **)(uVar13 + 8))(&local_38);
  uVar15 = 0;
  do {
    if (*(char *)((int)local_34 + uVar15) == '\0') {
      if ((int)uVar15 < 0x40001) goto LAB_001944b8;
      break;
    }
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 0x40001);
  uVar15 = 0;
LAB_001944b8:
  iVar5 = *(int *)(iVar5 + 8);
  if (iVar5 <= (int)uVar15) {
    uVar15 = iVar5 - 1;
  }
  (**(code **)(local_38 + 8))(&local_38);
  func_0010E3C4(puVar16,local_34,uVar15);
  *(undefined1 *)((int)puVar16 + uVar15) = 0;
  puVar6 = (undefined4 *)puVar4[6];
  uVar8 = puVar7[1];
  uVar17 = puVar7[2];
  uVar18 = puVar7[3];
  uVar19 = puVar7[4];
  uVar20 = puVar7[5];
  *puVar6 = *puVar7;
  puVar6[1] = uVar8;
  puVar7 = (undefined4 *)puVar4[7];
  *puVar7 = uVar17;
  puVar7[1] = uVar18;
  puVar7 = (undefined4 *)puVar4[8];
  *puVar7 = uVar19;
  puVar7[1] = uVar20;
  iVar5 = (int)*(char *)(puVar4 + 1);
  if (iVar5 != -1) {
    iVar11 = puVar4[8];
    pcVar12 = *(code **)(iVar11 + iVar5 * 8);
    if ((pcVar12 != (code *)0x0) ||
       ((uVar15 = *(uint *)(iVar11 + iVar5 * 8 + 4), (uVar15 & 1) != 0 && (uVar15 != 0)))) {
      uVar15 = *(uint *)(iVar11 + iVar5 * 8 + 4);
      piVar3 = (int *)(puVar4[5] + ((int)uVar15 >> 1));
      if ((uVar15 & 1) != 0) {
        pcVar12 = *(code **)(pcVar12 + *piVar3);
      }
      (*pcVar12)(piVar3,0);
    }
  }
  uVar2 = *(undefined1 *)(puVar4 + 1);
  *(undefined1 *)(puVar4 + 1) = 0;
  *puVar4 = 0;
  *(undefined1 *)((int)puVar4 + 5) = uVar2;
  if (puVar4[4] != 0) {
    piVar3 = (int *)puVar4[3];
    (**(code **)(*piVar3 + 8))(piVar3);
    objStack_a0[1] = piVar3[1];
    objStack_a0[0] = uVar13;
    func_0010BEB4(puVar4[4],(int *)objStack_a0);
  }
  iVar5 = (int)*(char *)(puVar4 + 1);
  iVar11 = puVar4[6];
  pcVar12 = *(code **)(iVar11 + iVar5 * 8);
  if ((pcVar12 != (code *)0x0) ||
     ((uVar13 = *(uint *)(iVar11 + iVar5 * 8 + 4), (uVar13 & 1) != 0 && (uVar13 != 0)))) {
    uVar13 = *(uint *)(iVar11 + iVar5 * 8 + 4);
    if ((uVar13 & 1) != 0) {
      pcVar12 = *(code **)(pcVar12 + *(int *)(puVar4[5] + ((int)uVar13 >> 1)));
    }
    (*pcVar12)((int)(puVar4[5]) + ((int)uVar13 >> 1));
  }
  puVar4[-0x4b] = puVar4[-0x4b] | 2;
  return puVar14;
}

