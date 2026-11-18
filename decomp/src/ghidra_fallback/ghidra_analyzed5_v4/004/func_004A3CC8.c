#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_00168100(int *param_1,int *param_2,int *param_3);
extern int func_00168434(undefined4 *param_1);
extern int func_003FDF90(int param_1,int param_2);
extern int func_005229AC(int *param_1,int *param_2);
extern int func_0066F684(undefined4 *param_1,undefined1 param_2);
extern undefined4 *DAT_004a4130;
extern undefined *DAT_004a4134;
extern int DAT_004a4144;
extern int *DAT_004a4164;
extern int *DAT_004a4168;
extern int *DAT_004a416c;
extern int DAT_004a4170;
extern int DAT_004a4174;
extern char s_cState_Finish_004a4154[];
extern char s_cState_Open_004a4148[];
extern char s_cState_Wait_004a4138[];

// USA 004A3CC8 <- EU 004A3CA0 (Ghidra, non-matching)
// GLOBAL DAT_004a4130 undefined4 *
// GLOBAL DAT_004a4134 undefined *
// GLOBAL DAT_004a4144 int
// GLOBAL DAT_004a4164 int *
// GLOBAL DAT_004a4168 int *
// GLOBAL DAT_004a416c int *
// GLOBAL DAT_004a4170 int
// GLOBAL DAT_004a4174 int
// GLOBAL s_cState_Finish_004a4154 string
// GLOBAL s_cState_Open_004a4148 string
// GLOBAL s_cState_Wait_004a4138 string

undefined4 func_004A3CC8(int param_1,int *param_2,int *param_3)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(int *)(albw_frame + 0x0))
  #define local_3c (*(uint * *)(albw_frame + 0x4))
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(int *)(albw_frame + 0xc))
  #define iStack_30 (*(int *)(albw_frame + 0x10))
  #define local_2c (*(int * *)(albw_frame + 0x14))
  #define piStack_28 (*(int * *)(albw_frame + 0x18))
  *(int *)(param_1 + 0x34) = param_1;
  *(undefined1 *)(param_1 + 0x26) = 3;
  iStack_30 = param_1;
  local_2c = param_2;
  piStack_28 = param_3;
  iVar4 = func_0010BA78(0x30);
  puVar7 = DAT_004a4130;
  *(int *)(param_1 + 0x38) = iVar4;
  *(uint *)(param_1 + 0x3c) = iVar4 + (uint)*(byte *)(param_1 + 0x26) * 8;
  iVar12 = 3;
  puVar5 = (undefined4 *)(iVar4 + -8);
  do {
    uVar17 = puVar7[1];
    puVar5[2] = *puVar7;
    puVar5[3] = uVar17;
    iVar12 = iVar12 + -1;
    uVar17 = puVar7[1];
    puVar5[4] = *puVar7;
    puVar5[5] = uVar17;
    puVar5 = puVar5 + 4;
  } while (iVar12 != 0);
  bVar1 = *(byte *)(param_1 + 0x26);
  uVar15 = (uint)bVar1;
  puVar5 = (undefined4 *)func_0010BA78(uVar15 << 3);
  *(undefined4 **)(param_1 + 0x40) = puVar5;
  if (uVar15 != 0) {
    puVar6 = puVar5 + -2;
    if ((bVar1 & 1) != 0) {
      uVar17 = puVar7[5];
      *puVar5 = puVar7[4];
      puVar5[1] = uVar17;
      puVar6 = puVar5;
    }
    for (iVar4 = (int)uVar15 >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
      uVar17 = puVar7[5];
      puVar6[2] = puVar7[4];
      puVar6[3] = uVar17;
      uVar17 = puVar7[5];
      puVar6[4] = puVar7[4];
      puVar6[5] = uVar17;
      puVar6 = puVar6 + 4;
    }
  }
  puVar5 = (undefined4 *)func_0010CEE0(0x74,(int *)0x0,4);
  iVar4 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0x24;
    puVar5[1] = 3;
    iVar4 = func_00100118((int)(puVar5 + 2),DAT_004a4134,0x24,3);
  }
  if (iVar4 != 0) {
    *(int *)(param_1 + 0x2c) = iVar4;
    *(undefined4 *)(param_1 + 0x28) = 3;
  }
  iVar4 = DAT_004a4144;
  local_3c = (uint *)s_cState_Wait_004a4138;
  local_40 = DAT_004a4144;
  iVar12 = *(int *)(param_1 + 0x2c);
  puVar16 = *(uint **)(iVar12 + 4);
  (**(code **)(DAT_004a4144 + 8))(&local_40);
  uVar15 = 0;
  do {
    if (*(char *)((int)local_3c + uVar15) == '\0') {
      if ((int)uVar15 < 0x40001) goto LAB_004a3e1c;
      break;
    }
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 0x40001);
  uVar15 = 0;
LAB_004a3e1c:
  iVar12 = *(int *)(iVar12 + 8);
  if (iVar12 <= (int)uVar15) {
    uVar15 = iVar12 - 1;
  }
  (**(code **)(local_40 + 8))(&local_40);
  func_0010E3C4(puVar16,local_3c,uVar15);
  *(undefined1 *)((int)puVar16 + uVar15) = 0;
  puVar5 = *(undefined4 **)(param_1 + 0x38);
  uVar17 = puVar7[4];
  uVar14 = puVar7[5];
  uVar18 = puVar7[2];
  uVar19 = puVar7[1];
  uVar20 = puVar7[3];
  *puVar5 = *puVar7;
  puVar5[1] = uVar19;
  puVar5 = *(undefined4 **)(param_1 + 0x3c);
  *puVar5 = uVar18;
  puVar5[1] = uVar20;
  puVar5 = *(undefined4 **)(param_1 + 0x40);
  *puVar5 = uVar17;
  puVar5[1] = uVar14;
  local_3c = (uint *)s_cState_Open_004a4148;
  local_40 = iVar4;
  if (*(uint *)(param_1 + 0x28) < 2) {
    iVar12 = *(int *)(param_1 + 0x2c);
  }
  else {
    iVar12 = *(int *)(param_1 + 0x2c) + 0x24;
  }
  puVar16 = *(uint **)(iVar12 + 4);
  (**(code **)(iVar4 + 8))(&local_40);
  uVar15 = 0;
  do {
    if (*(char *)((int)local_3c + uVar15) == '\0') {
      if ((int)uVar15 < 0x40001) goto LAB_004a3ee8;
      break;
    }
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 0x40001);
  uVar15 = 0;
LAB_004a3ee8:
  if (*(int *)(iVar12 + 8) <= (int)uVar15) {
    uVar15 = *(int *)(iVar12 + 8) - 1;
  }
  (**(code **)(local_40 + 8))(&local_40);
  func_0010E3C4(puVar16,local_3c,uVar15);
  *(undefined1 *)((int)puVar16 + uVar15) = 0;
  iVar12 = *(int *)(param_1 + 0x38);
  uVar14 = puVar7[4];
  uVar17 = puVar7[9];
  uVar18 = puVar7[5];
  uVar19 = puVar7[8];
  uVar20 = puVar7[7];
  *(undefined4 *)(iVar12 + 8) = puVar7[6];
  *(undefined4 *)(iVar12 + 0xc) = uVar20;
  iVar12 = *(int *)(param_1 + 0x3c);
  *(undefined4 *)(iVar12 + 8) = uVar19;
  *(undefined4 *)(iVar12 + 0xc) = uVar17;
  iVar12 = *(int *)(param_1 + 0x40);
  *(undefined4 *)(iVar12 + 8) = uVar14;
  *(undefined4 *)(iVar12 + 0xc) = uVar18;
  local_3c = (uint *)s_cState_Finish_004a4154;
  local_40 = iVar4;
  if (*(uint *)(param_1 + 0x28) < 3) {
    iVar12 = *(int *)(param_1 + 0x2c);
  }
  else {
    iVar12 = *(int *)(param_1 + 0x2c) + 0x48;
  }
  puVar16 = *(uint **)(iVar12 + 4);
  (**(code **)(iVar4 + 8))(&local_40);
  uVar15 = 0;
  do {
    if (*(char *)((int)local_3c + uVar15) == '\0') {
      if ((int)uVar15 < 0x40001) goto LAB_004a3fb8;
      break;
    }
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 0x40001);
  uVar15 = 0;
LAB_004a3fb8:
  if (*(int *)(iVar12 + 8) <= (int)uVar15) {
    uVar15 = *(int *)(iVar12 + 8) - 1;
  }
  (**(code **)(local_40 + 8))(&local_40);
  func_0010E3C4(puVar16,local_3c,uVar15);
  *(undefined1 *)((int)puVar16 + uVar15) = 0;
  iVar12 = *(int *)(param_1 + 0x38);
  uVar17 = puVar7[1];
  uVar18 = puVar7[10];
  uVar14 = puVar7[4];
  uVar19 = puVar7[0xb];
  uVar20 = puVar7[5];
  *(undefined4 *)(iVar12 + 0x10) = *puVar7;
  *(undefined4 *)(iVar12 + 0x14) = uVar17;
  iVar12 = *(int *)(param_1 + 0x3c);
  *(undefined4 *)(iVar12 + 0x10) = uVar18;
  *(undefined4 *)(iVar12 + 0x14) = uVar19;
  iVar12 = *(int *)(param_1 + 0x40);
  *(undefined4 *)(iVar12 + 0x10) = uVar14;
  *(undefined4 *)(iVar12 + 0x14) = uVar20;
  puVar7 = (undefined4 *)func_0010BAB4(0x74);
  piVar8 = (int *)0x0;
  if (puVar7 != (undefined4 *)0x0) {
    piVar8 = func_00168434(puVar7);
  }
  func_00168100(piVar8,local_2c,piStack_28);
  *(int **)(param_1 + 0x1c) = piVar8;
  piVar11 = DAT_004a4164;
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x10;
  piVar9 = (int *)func_005229AC(piVar8,piVar11);
  piVar11 = DAT_004a4168;
  if (piVar9 != (int *)0x0) {
    piVar10 = (int *)(**(code **)(*piVar9 + 8))(piVar9);
    piVar2 = DAT_004a416c;
    do {
      if (piVar10 == piVar11) {
        if (piVar9 != (int *)0x0) {
          piVar11 = (int *)(**(code **)(*piVar9 + 8))(piVar9);
          goto LAB_004a40a8;
        }
        break;
      }
      piVar10 = (int *)*piVar10;
    } while (piVar10 != (int *)0x0);
  }
  goto LAB_004a40bc;
  while (piVar11 = (int *)*piVar11, piVar11 != (int *)0x0) {
LAB_004a40a8:
    if (piVar11 == piVar2) goto LAB_004a40c0;
  }
LAB_004a40bc:
  piVar9 = (int *)0x0;
LAB_004a40c0:
  *(int **)(param_1 + 0x80) = piVar9;
  func_0016773C((int)piVar8,5);
  iVar3 = DAT_004a4174;
  iVar12 = DAT_004a4170;
  uVar15 = 0;
  do {
    iVar13 = *(int *)(iVar12 + uVar15 * 4);
    if (iVar13 == 0) {
      func_00166C20(piVar8,uVar15,(int *)(iVar3 + uVar15 * 8),0);
    }
    else {
      local_38 = iVar4;
      local_34 = iVar13;
      (**(code **)(iVar4 + 8))(&local_38);
      iVar13 = func_003FDF90(*(int *)(*piVar8 + 0x14),local_34);
      func_00166C20(piVar8,uVar15,(int *)(iVar3 + uVar15 * 8),iVar13);
    }
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 5);
  *(int **)(param_1 + 0x4c) = piVar8;
  *(undefined2 *)(param_1 + 0x46) = 0;
  *(undefined2 *)(param_1 + 0x44) = 0;
  *(int **)(param_1 + 0x58) = piVar8;
  *(undefined2 *)(param_1 + 0x52) = 1;
  *(undefined2 *)(param_1 + 0x50) = 0;
  *(int **)(param_1 + 100) = piVar8;
  *(undefined2 *)(param_1 + 0x5e) = 2;
  *(undefined2 *)(param_1 + 0x5c) = 0;
  *(int **)(param_1 + 0x70) = piVar8;
  *(undefined2 *)(param_1 + 0x6a) = 3;
  *(undefined2 *)(param_1 + 0x68) = 0;
  *(int **)(param_1 + 0x7c) = piVar8;
  *(undefined2 *)(param_1 + 0x76) = 4;
  *(undefined2 *)(param_1 + 0x74) = 0;
  uVar17 = func_0066F684((undefined4 *)(param_1 + 0x20),0);
  return uVar17;
}

