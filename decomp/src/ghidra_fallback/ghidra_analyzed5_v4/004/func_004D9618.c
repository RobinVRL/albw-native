#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_0014E904(int param_1,int param_2,int param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00169688(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_001E6AF8(int param_1);
extern int func_001E6CEC(undefined4 *param_1,uint *param_2,undefined4 param_3);
extern int func_00324964(int param_1);
extern int func_003249E0(int param_1,uint param_2);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_0052E410(undefined4 param_1);
extern int func_0066A50C(undefined4 *param_1,undefined1 param_2);
extern int DAT_004d9a70;
extern undefined4 *DAT_004d9a74;
extern int DAT_004d9a78;
extern undefined4 DAT_004d9a7c;
extern undefined4 DAT_004d9a80;
extern undefined4 DAT_004d9a84;
extern undefined4 *DAT_004d9a88;
extern undefined *DAT_004d9a8c;
extern int DAT_004d9a90;
extern int DAT_004d9aa4;
extern undefined4 *DAT_004d9ab4;
extern char s_cState_CloseWait_004d9ab8[];
extern char s_cState_Close_004d9c7c[];
extern char s_cState_OpenWait_004d9a94[];
extern char s_cState_Open_004d9aa8[];

// USA 004D9618 <- EU 004D95F0 (Ghidra, non-matching)
// GLOBAL DAT_004d9a70 int
// GLOBAL DAT_004d9a74 undefined4 *
// GLOBAL DAT_004d9a78 int
// GLOBAL DAT_004d9a7c undefined4
// GLOBAL DAT_004d9a80 undefined4
// GLOBAL DAT_004d9a84 undefined4
// GLOBAL DAT_004d9a88 undefined4 *
// GLOBAL DAT_004d9a8c undefined *
// GLOBAL DAT_004d9a90 int
// GLOBAL DAT_004d9aa4 int
// GLOBAL DAT_004d9ab4 undefined4 *
// GLOBAL s_cState_CloseWait_004d9ab8 string
// GLOBAL s_cState_Close_004d9c7c string
// GLOBAL s_cState_OpenWait_004d9a94 string
// GLOBAL s_cState_Open_004d9aa8 string

undefined4 * func_004D9618(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined *puVar2;
  char cVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  uint uVar15;
  undefined4 uVar16;
  uint *puVar17;
  undefined4 uVar18;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_88 (*(int *)(albw_frame + 0x8))
  #define local_84 (*(uint * *)(albw_frame + 0xc))
  #define local_80 ((uint *)(albw_frame + 0x10))
  #define local_78 (*(undefined4 * *)(albw_frame + 0x18))
  #define local_74 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_70 (*(undefined4 *)(albw_frame + 0x20))
  #define local_6c (*(undefined4 *)(albw_frame + 0x24))
  #define local_68 (*(undefined4 *)(albw_frame + 0x28))
  #define local_64 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_60 (*(uint *)(albw_frame + 0x30))
  #define local_2c (*(undefined4 *)(albw_frame + 0x64))
  #define local_28 (*(undefined1 *)(albw_frame + 0x68))
  piVar4 = (int *)func_001E6CEC(param_1,param_2,0xc);
  iVar6 = DAT_004d9a70;
  *piVar4 = DAT_004d9a70;
  piVar4[200] = iVar6 + 0x98;
  puVar5 = func_0010A794(piVar4 + 0x1e2);
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[10] = 0;
  puVar14 = puVar5 + -0x1e2;
  puVar5[0xb] = 0;
  iVar6 = func_001E6AF8((int)puVar14);
  if (iVar6 == 0) {
    cVar3 = func_0052E410(*DAT_004d9a74);
    if (cVar3 == '\0') {
      *(undefined1 *)((int)puVar5 + -0x4b1) = 1;
    }
    else {
      func_003249E0((int)puVar14,0);
      puVar5[9] = *(undefined4 *)(puVar5[-0x12e] + 0x1c8);
      uVar7 = func_0014E428((int)puVar14,0,0,0,1,0,0);
      piVar4 = puVar5 + 10;
      puVar5[10] = uVar7;
      uVar7 = func_0014E904((int)puVar14,2,1);
      iVar6 = DAT_004d9a78;
      uVar15 = 0;
      puVar5[0xb] = uVar7;
      do {
        func_00169688((uint *)puVar5[0xb],uVar15,(int *)(iVar6 + uVar15 * 8),puVar5[9]);
        uVar15 = uVar15 + 1;
      } while ((int)uVar15 < 2);
      uVar15 = 0;
      func_0016A02C(puVar5[0xb],-1,(int *)0xffffffff,0);
      local_78 = &local_74;
      local_80[1] = 3;
      local_2c = 10;
      local_28 = 0;
      local_74 = 0;
      local_80[0] = 1;
      local_70 = DAT_004d9a80;
      local_6c = DAT_004d9a7c;
      local_68 = DAT_004d9a84;
      local_60 = uVar15 | 0xff;
      local_64 = DAT_004d9a7c;
      func_0016898C(puVar5[0xb],local_80);
      func_00324964((int)puVar14);
      *(undefined1 *)((int)puVar5 + 6) = 4;
      puVar5[5] = puVar14;
      iVar6 = func_0010BA78(0x40);
      puVar5[6] = iVar6;
      puVar11 = DAT_004d9a88;
      puVar5[7] = iVar6 + (uint)*(byte *)((int)puVar5 + 6) * 8;
      iVar8 = 4;
      puVar9 = (undefined4 *)(iVar6 + -8);
      do {
        uVar7 = puVar11[0x13];
        iVar8 = iVar8 + -1;
        puVar9[2] = puVar11[0x12];
        puVar9[3] = uVar7;
        uVar7 = puVar11[0x13];
        puVar9[4] = puVar11[0x12];
        puVar9[5] = uVar7;
        puVar9 = puVar9 + 4;
      } while (iVar8 != 0);
      bVar1 = *(byte *)((int)puVar5 + 6);
      uVar15 = (uint)bVar1;
      puVar9 = (undefined4 *)func_0010BA78(uVar15 << 3);
      puVar5[8] = puVar9;
      if (uVar15 != 0) {
        puVar10 = puVar9 + -2;
        if ((bVar1 & 1) != 0) {
          uVar7 = puVar11[5];
          *puVar9 = puVar11[4];
          puVar9[1] = uVar7;
          puVar10 = puVar9;
        }
        for (iVar6 = (int)uVar15 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
          uVar7 = puVar11[5];
          puVar10[2] = puVar11[4];
          puVar10[3] = uVar7;
          uVar7 = puVar11[5];
          puVar10[4] = puVar11[4];
          puVar10[5] = uVar7;
          puVar10 = puVar10 + 4;
        }
      }
      puVar11 = (undefined4 *)func_0010CEE0(0x98,(int *)0x0,4);
      puVar2 = DAT_004d9a8c;
      iVar6 = 0;
      if (puVar11 != (undefined4 *)0x0) {
        puVar11[1] = 4;
        *puVar11 = 0x24;
        iVar6 = func_00100118((int)(puVar11 + 2),puVar2,0x24,4);
      }
      if (iVar6 != 0) {
        puVar5[3] = iVar6;
        puVar5[2] = 4;
      }
      iVar6 = DAT_004d9a90;
      puVar5[-0x10d] = puVar5;
      iVar8 = DAT_004d9aa4;
      *(undefined2 *)(iVar6 + (int)puVar14) = 4;
      local_84 = (uint *)s_cState_OpenWait_004d9a94;
      local_88 = iVar8;
      iVar6 = puVar5[3];
      puVar17 = *(uint **)(iVar6 + 4);
      (**(code **)(iVar8 + 8))(&local_88);
      uVar15 = 0;
      do {
        if (*(char *)((int)local_84 + uVar15) == '\0') {
          if ((int)uVar15 < 0x40001) goto LAB_004d98ec;
          break;
        }
        uVar15 = uVar15 + 1;
      } while ((int)uVar15 < 0x40001);
      uVar15 = 0;
LAB_004d98ec:
      iVar6 = *(int *)(iVar6 + 8);
      if (iVar6 <= (int)uVar15) {
        uVar15 = iVar6 - 1;
      }
      (**(code **)(local_88 + 8))(&local_88);
      func_0010E3C4(puVar17,local_84,uVar15);
      *(undefined1 *)((int)puVar17 + uVar15) = 0;
      puVar11 = (undefined4 *)puVar5[6];
      uVar18 = DAT_004d9a88[1];
      uVar12 = DAT_004d9a88[4];
      uVar13 = DAT_004d9a88[2];
      uVar16 = DAT_004d9a88[3];
      uVar7 = DAT_004d9a88[5];
      *puVar11 = *DAT_004d9a88;
      puVar11[1] = uVar18;
      puVar11 = (undefined4 *)puVar5[7];
      *puVar11 = uVar13;
      puVar11[1] = uVar16;
      puVar11 = (undefined4 *)puVar5[8];
      puVar11[1] = uVar7;
      *puVar11 = uVar12;
      local_84 = (uint *)s_cState_Open_004d9aa8;
      local_88 = iVar8;
      if ((uint)puVar5[2] < 2) {
        iVar6 = puVar5[3];
      }
      else {
        iVar6 = puVar5[3] + 0x24;
      }
      puVar17 = *(uint **)(iVar6 + 4);
      (**(code **)(iVar8 + 8))(&local_88);
      uVar15 = 0;
      do {
        if (*(char *)((int)local_84 + uVar15) == '\0') {
          if ((int)uVar15 < 0x40001) goto LAB_004d99b8;
          break;
        }
        uVar15 = uVar15 + 1;
      } while ((int)uVar15 < 0x40001);
      uVar15 = 0;
LAB_004d99b8:
      if (*(int *)(iVar6 + 8) <= (int)uVar15) {
        uVar15 = *(int *)(iVar6 + 8) - 1;
      }
      (**(code **)(local_88 + 8))(&local_88);
      func_0010E3C4(puVar17,local_84,uVar15);
      *(undefined1 *)((int)puVar17 + uVar15) = 0;
      iVar6 = puVar5[6];
      uVar7 = *DAT_004d9ab4;
      uVar12 = DAT_004d9ab4[1];
      uVar13 = DAT_004d9ab4[3];
      uVar16 = DAT_004d9ab4[4];
      uVar18 = DAT_004d9ab4[5];
      *(undefined4 *)(iVar6 + 8) = DAT_004d9ab4[2];
      *(undefined4 *)(iVar6 + 0xc) = uVar13;
      iVar6 = puVar5[7];
      *(undefined4 *)(iVar6 + 8) = uVar16;
      *(undefined4 *)(iVar6 + 0xc) = uVar18;
      iVar6 = puVar5[8];
      *(undefined4 *)(iVar6 + 8) = uVar7;
      *(undefined4 *)(iVar6 + 0xc) = uVar12;
      local_84 = (uint *)s_cState_CloseWait_004d9ab8;
      local_88 = iVar8;
      if ((uint)puVar5[2] < 3) {
        iVar6 = puVar5[3];
      }
      else {
        iVar6 = puVar5[3] + 0x48;
      }
      puVar17 = *(uint **)(iVar6 + 4);
      (**(code **)(iVar8 + 8))(&local_88);
      uVar15 = 0;
      do {
        if (*(char *)((int)local_84 + uVar15) == '\0') {
          if ((int)uVar15 < 0x40001) goto LAB_004d9ad8;
          break;
        }
        uVar15 = uVar15 + 1;
      } while ((int)uVar15 < 0x40001);
      uVar15 = 0;
LAB_004d9ad8:
      if (*(int *)(iVar6 + 8) <= (int)uVar15) {
        uVar15 = *(int *)(iVar6 + 8) - 1;
      }
      (**(code **)(local_88 + 8))(&local_88);
      func_0010E3C4(puVar17,local_84,uVar15);
      *(undefined1 *)((int)puVar17 + uVar15) = 0;
      puVar11 = DAT_004d9a88;
      iVar6 = puVar5[6];
      uVar13 = DAT_004d9a88[4];
      uVar7 = DAT_004d9a88[0xb];
      uVar12 = DAT_004d9a88[5];
      uVar16 = DAT_004d9a88[0xc];
      uVar18 = DAT_004d9a88[0xd];
      *(undefined4 *)(iVar6 + 0x10) = DAT_004d9a88[10];
      *(undefined4 *)(iVar6 + 0x14) = uVar7;
      iVar6 = puVar5[7];
      *(undefined4 *)(iVar6 + 0x10) = uVar16;
      *(undefined4 *)(iVar6 + 0x14) = uVar18;
      iVar6 = puVar5[8];
      *(undefined4 *)(iVar6 + 0x10) = uVar13;
      *(undefined4 *)(iVar6 + 0x14) = uVar12;
      local_84 = (uint *)s_cState_Close_004d9c7c;
      local_88 = iVar8;
      if ((uint)puVar5[2] < 4) {
        iVar6 = puVar5[3];
      }
      else {
        iVar6 = puVar5[3] + 0x6c;
      }
      puVar17 = *(uint **)(iVar6 + 4);
      (**(code **)(iVar8 + 8))(&local_88);
      uVar15 = 0;
      do {
        if (*(char *)((int)local_84 + uVar15) == '\0') {
          if ((int)uVar15 < 0x40001) goto LAB_004d9bb0;
          break;
        }
        uVar15 = uVar15 + 1;
      } while ((int)uVar15 < 0x40001);
      uVar15 = 0;
LAB_004d9bb0:
      if (*(int *)(iVar6 + 8) <= (int)uVar15) {
        uVar15 = *(int *)(iVar6 + 8) - 1;
      }
      (**(code **)(local_88 + 8))(&local_88);
      func_0010E3C4(puVar17,local_84,uVar15);
      *(undefined1 *)((int)puVar17 + uVar15) = 0;
      iVar6 = puVar5[6];
      uVar18 = puVar11[0xf];
      uVar7 = puVar11[5];
      uVar12 = puVar11[0x11];
      uVar13 = puVar11[0x10];
      uVar16 = puVar11[4];
      *(undefined4 *)(iVar6 + 0x18) = puVar11[0xe];
      *(undefined4 *)(iVar6 + 0x1c) = uVar18;
      iVar6 = puVar5[7];
      *(undefined4 *)(iVar6 + 0x18) = uVar13;
      *(undefined4 *)(iVar6 + 0x1c) = uVar12;
      iVar6 = puVar5[8];
      *(undefined4 *)(iVar6 + 0x18) = uVar16;
      *(undefined4 *)(iVar6 + 0x1c) = uVar7;
      func_0066A50C(puVar5,0);
      iVar6 = puVar5[10];
      *(uint *)(iVar6 + 0x164) = *(uint *)(iVar6 + 0x164) | 0x40000000;
      func_004D8AEC((float *)(iVar6 + 0x80),puVar5[-0xe8],(float *)(puVar5 + -0xee));
      func_004CEAF0(*piVar4);
      iVar6 = puVar5[-0xdf];
      *(undefined4 *)(iVar6 + 4) = puVar5[-0xee];
      *(undefined4 *)(iVar6 + 8) = puVar5[-0xed];
      *(undefined4 *)(iVar6 + 0xc) = puVar5[-0xec];
    }
  }
  return puVar14;
}

