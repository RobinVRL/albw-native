#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_00169688(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_001C2080(int param_1);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_00435ED0(int param_1,float *param_2);
extern int func_0043610C(int param_1,float *param_2);
extern int func_0043625C(int *param_1,undefined4 *param_2);
extern undefined4 func_004A7F00(int param_1,int param_2,uint param_3);
extern int func_004ED9C8(int param_1);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDB28(int param_1,int param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_00588BE4(int param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int func_0065BA34(undefined4 *param_1,undefined1 param_2);
extern int DAT_001c267c;
extern undefined4 DAT_001c2680;
extern undefined4 DAT_001c2684;
extern float DAT_001c2688;
extern undefined4 DAT_001c268c;
extern int *DAT_001c2690;
extern int *DAT_001c2694;
extern int *DAT_001c2698;
extern uint *DAT_001c269c;
extern undefined DAT_001c26cc;
extern uint DAT_001c26dc;
extern uint *DAT_001c2b04;
extern int *DAT_001c2b08;
extern undefined4 *DAT_001c2b0c;
extern undefined *DAT_001c2b10;
extern int DAT_001c2b14;
extern char s_Actor_QuicksandF3S_kcl_001c2aec[];
extern char s_Actor_Quicksand_kcl_001c26e0[];
extern char s_QuicksandBoss_001c26bc[];
extern char s_QuicksandF3S_001c26ac[];
extern char s_Quicksand_001c26a0[];
extern char s_Start_001c26d4[];
extern char s_cState_Appear_001c2b38[];
extern char s_cState_Hide_001c2b18[];
extern char s_cState_PreAppear_001c2b24[];
extern char s_cState_Wait_001c2b48[];
extern char s_cf_001c26e0[];
extern char s_cf_001c2aec[];

// USA 001C2280 <- EU 001C2280 (Ghidra, non-matching)
// GLOBAL DAT_001c267c int
// GLOBAL DAT_001c2680 undefined4
// GLOBAL DAT_001c2684 undefined4
// GLOBAL DAT_001c2688 float
// GLOBAL DAT_001c268c undefined4
// GLOBAL DAT_001c2690 int *
// GLOBAL DAT_001c2694 int *
// GLOBAL DAT_001c2698 int *
// GLOBAL DAT_001c269c uint *
// GLOBAL DAT_001c26cc undefined
// GLOBAL DAT_001c26dc uint
// GLOBAL DAT_001c2b04 uint *
// GLOBAL DAT_001c2b08 int *
// GLOBAL DAT_001c2b0c undefined4 *
// GLOBAL DAT_001c2b10 undefined *
// GLOBAL DAT_001c2b14 int
// GLOBAL s_cf_001c26e0 string
// GLOBAL s_cf_001c2aec string
// GLOBAL s_QuicksandBoss_001c26bc string
// GLOBAL s_QuicksandF3S_001c26ac string
// GLOBAL s_Quicksand_001c26a0 string
// GLOBAL s_Start_001c26d4 string
// GLOBAL s_cState_Appear_001c2b38 string
// GLOBAL s_cState_Hide_001c2b18 string
// GLOBAL s_cState_PreAppear_001c2b24 string
// GLOBAL s_cState_Wait_001c2b48 string

/* WARNING: Variable defined which should be unmapped: objStack_f0 */
/* WARNING: Variable defined which should be unmapped: objStack_e8 */

undefined4 * func_001C2280(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  int *piVar2;
  uint *puVar3;
  undefined *puVar4;
  bool bVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  uint *puVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  int *piVar17;
  uint uVar18;
  undefined4 uVar19;
  float fVar20;
  undefined8 uVar21;
  _Alignas(8) unsigned char albw_frame[0xf0];
  #define objStack_f0 ((uint *)(albw_frame + 0x0))
  #define objStack_e8 ((uint *)(albw_frame + 0x8))
  #define local_e4 (*(char * *)(albw_frame + 0xc))
  #define local_e0 (*(uint * *)(albw_frame + 0x10))
  #define local_dc (*(char * *)(albw_frame + 0x14))
  #define uStack_a5 (*(undefined1 *)(albw_frame + 0x4b))
  #define local_a4 ((uint *)(albw_frame + 0x4c))
  #define local_98 (*(uint * *)(albw_frame + 0x58))
  #define local_94 (*(char * *)(albw_frame + 0x5c))
  #define local_90 (*(float *)(albw_frame + 0x60))
  #define local_8c (*(uint * *)(albw_frame + 0x64))
  #define local_88 (*(uint * *)(albw_frame + 0x68))
  #define local_84 (*(uint * *)(albw_frame + 0x6c))
  #define local_80 (*(float *)(albw_frame + 0x70))
  #define local_7c (*(uint * *)(albw_frame + 0x74))
  #define local_78 (*(uint * *)(albw_frame + 0x78))
  #define local_74 (*(uint * *)(albw_frame + 0x7c))
  #define local_70 (*(float *)(albw_frame + 0x80))
  #define puStack_2c (*(undefined4 * *)(albw_frame + 0xc4))
  #define local_28 (*(uint * *)(albw_frame + 0xc8))
  puStack_2c = param_1;
  local_28 = param_2;
  piVar6 = func_00150E40(param_1,param_2);
  iVar10 = DAT_001c267c;
  piVar6[200] = DAT_001c267c + 0x54;
  *piVar6 = iVar10;
  piVar6[0x103] = 0;
  piVar6[0x104] = 0;
  piVar6[0x105] = 0;
  piVar6[0x106] = 0;
  puVar7 = func_0010A794(piVar6 + 0x107);
  puVar7[5] = 0;
  puVar7[6] = 0;
  uVar19 = DAT_001c2680;
  puVar7[7] = 0;
  puVar7[8] = 0;
  uVar14 = DAT_001c2684;
  puVar7[10] = uVar19;
  puVar7[0xb] = uVar14;
  puVar7[9] = 0;
  *(undefined1 *)(puVar7 + 0xc) = 1;
  puVar7[0xd] = 0;
  objStack_f0[0] = 1;
  objStack_f0[1] = 0;
  puVar16 = puVar7 + -0x107;
  objStack_e8[0] = 0;
  fVar20 = DAT_001c2688;
  piVar6 = (int *)func_0014E428((int)puVar16,1,0,0,1,0,0);
  puVar7[-4] = piVar6;
  (**(code **)(*piVar6 + 0x10))(piVar6,0x24);
  puVar8 = (undefined4 *)func_0010BAB4(0xa8);
  puVar9 = (undefined4 *)0x0;
  if (puVar8 != (undefined4 *)0x0) {
    puVar9 = func_0016A2FC(puVar8,1,DAT_001c268c,1);
  }
  puVar7[-3] = puVar9;
  iVar10 = func_00588BE4((int)puVar16);
  puVar3 = DAT_001c269c;
  piVar17 = DAT_001c2698;
  piVar2 = DAT_001c2694;
  piVar6 = DAT_001c2690;
  if (iVar10 == *DAT_001c2690) {
    local_e4 = s_Quicksand_001c26a0;
    objStack_e8[0] = (uint)DAT_001c269c;
    func_00169688((uint *)puVar7[-3],0,(int *)objStack_e8,*(int *)(puVar7[-0x53] + 0x1c8));
  }
  else {
    iVar10 = func_00588BE4((int)puVar16);
    if (iVar10 == *piVar2) {
      local_e4 = s_QuicksandF3S_001c26ac;
      objStack_e8[0] = (uint)puVar3;
      func_00169688((uint *)puVar7[-3],0,(int *)objStack_e8,*(int *)(puVar7[-0x53] + 0x1c8));
    }
    else {
      iVar10 = func_00588BE4((int)puVar16);
      if (iVar10 == *piVar17) {
        local_e4 = s_QuicksandBoss_001c26bc;
        objStack_e8[0] = (uint)puVar3;
        func_00169688((uint *)puVar7[-3],0,(int *)objStack_e8,*(int *)(puVar7[-0x53] + 0x1c8));
      }
    }
  }
  func_0016A02C(puVar7[-3],-1,(int *)0xffffffff,0);
  iVar10 = func_00588BE4((int)puVar16);
  if (iVar10 == *piVar17) {
    puVar8 = (undefined4 *)func_0010BAB4(0xa8);
    puVar9 = (undefined4 *)0x0;
    if (puVar8 != (undefined4 *)0x0) {
      puVar9 = func_0016A2FC(puVar8,1,DAT_001c268c,1);
    }
    puVar7[-1] = puVar9;
    local_dc = s_QuicksandBoss_001c26bc;
    local_e0 = puVar3;
    func_00169608((uint *)puVar7[-1],0,(int *)&local_e0,*(int *)(puVar7[-0x53] + 0x1c8));
    func_0016A02C(puVar7[-1],-1,(int *)0xffffffff,0);
  }
  else {
    puVar8 = (undefined4 *)func_0010BAB4(0xa8);
    puVar9 = (undefined4 *)0x0;
    if (puVar8 != (undefined4 *)0x0) {
      puVar9 = func_0016A2FC(puVar8,1,DAT_001c268c,1);
    }
    puVar7[-2] = puVar9;
    local_e4 = &DAT_001c26cc;
    objStack_e8[0] = (uint)puVar3;
    func_00169608((uint *)puVar7[-2],0,(int *)objStack_e8,*(int *)(puVar7[-0x53] + 0x1c8));
    func_0016A02C(puVar7[-2],-1,(int *)0xffffffff,0);
    puVar11 = (uint *)func_002C11E8((int *)&local_90,0,10,0);
    func_0016898C(puVar7[-2],puVar11);
    puVar8 = (undefined4 *)func_0010BAB4(0xa8);
    puVar9 = (undefined4 *)0x0;
    if (puVar8 != (undefined4 *)0x0) {
      puVar9 = func_0016A2FC(puVar8,1,DAT_001c268c,1);
    }
    puVar7[-1] = puVar9;
    local_e4 = s_Start_001c26d4;
    objStack_e8[0] = (uint)puVar3;
    func_00169608((uint *)puVar7[-1],0,(int *)objStack_e8,*(int *)(puVar7[-0x53] + 0x1c8));
    func_0016A02C(puVar7[-1],-1,(int *)0xffffffff,0);
  }
  iVar10 = func_00588BE4((int)puVar16);
  if (iVar10 == *piVar17) goto LAB_001c284c;
  puVar8 = (undefined4 *)func_0010BAB4(0x48);
  puVar9 = (undefined4 *)0x0;
  if (puVar8 != (undefined4 *)0x0) {
    puVar9 = func_004EDC9C(puVar8);
  }
  piVar17 = puVar7 + 0xd;
  puVar7[0xd] = puVar9;
  if (puVar9 == (undefined4 *)0x0) goto LAB_001c284c;
  *(undefined2 *)(puVar9 + 0xb) = *(undefined2 *)(puVar7 + -0xf2);
  objStack_f0[1] = (uint)&local_e4;
  objStack_e8[0] = 0x40;
  uStack_a5 = 0;
  local_e4 = (char *)((uint)local_e4 & 0xffffff00);
  objStack_f0[0] = DAT_001c26dc;
  iVar10 = func_00588BE4((int)puVar16);
  puVar11 = (uint *)objStack_f0[1];
  if (iVar10 == *piVar6) {
    local_84 = (uint *)s_Actor_Quicksand_kcl_001c26e0;
    local_88 = puVar3;
    (*(code *)puVar3[2])(&local_88);
    uVar18 = 0;
    do {
      if (*(char *)((int)local_84 + uVar18) == '\0') {
        if ((int)uVar18 < 0x40001) goto LAB_001c2700;
        break;
      }
      uVar18 = uVar18 + 1;
    } while ((int)uVar18 < 0x40001);
    uVar18 = 0;
LAB_001c2700:
    if ((int)objStack_e8[0] <= (int)uVar18) {
LAB_001c270c:
      uVar18 = objStack_e8[0] - 1;
    }
LAB_001c2784:
    (*(code *)local_88[2])(&local_88);
    func_0010E3C4(puVar11,local_84,uVar18);
    *(undefined1 *)((int)puVar11 + uVar18) = 0;
  }
  else {
    iVar10 = func_00588BE4((int)puVar16);
    puVar11 = (uint *)objStack_f0[1];
    if (iVar10 == *piVar2) {
      local_84 = (uint *)s_Actor_QuicksandF3S_kcl_001c2aec;
      local_88 = puVar3;
      (*(code *)puVar3[2])(&local_88);
      uVar18 = 0;
      do {
        if (*(char *)((int)local_84 + uVar18) == '\0') {
          if ((int)uVar18 < 0x40001) goto LAB_001c2778;
          break;
        }
        uVar18 = uVar18 + 1;
      } while ((int)uVar18 < 0x40001);
      uVar18 = 0;
LAB_001c2778:
      if ((int)objStack_e8[0] <= (int)uVar18) goto LAB_001c270c;
      goto LAB_001c2784;
    }
  }
  func_004EDB28(puVar7[0xd],(int)objStack_f0);
  local_8c = DAT_001c2b04;
  local_88 = DAT_001c2b04;
  local_84 = DAT_001c2b04;
  local_7c = DAT_001c2b04;
  local_78 = DAT_001c2b04;
  local_74 = DAT_001c2b04;
  local_90 = fVar20;
  local_80 = fVar20;
  local_70 = fVar20;
  func_00435ED0(*(int *)(*piVar17 + 0x14),&local_90);
  func_0043625C(*(int **)(*piVar17 + 0x14),puVar7 + -0x13);
  func_0043610C(*(int *)(*piVar17 + 0x14),(float *)(local_28 + 4));
  local_a4[0] = puVar7[-0x54];
  func_004EDAD0(*piVar17,local_a4);
  *(undefined2 *)(*piVar17 + 0x2c) = *(undefined2 *)(puVar7 + -0xf2);
  func_004ED9C8(*piVar17);
  func_004A7F00(*DAT_001c2b08,*piVar17,3);
LAB_001c284c:
  puVar7[5] = puVar16;
  *(undefined1 *)((int)puVar7 + 6) = 4;
  iVar10 = func_0010BA78(0x40);
  puVar9 = DAT_001c2b0c;
  puVar7[6] = iVar10;
  puVar7[7] = iVar10 + (uint)*(byte *)((int)puVar7 + 6) * 8;
  iVar13 = 4;
  puVar8 = (undefined4 *)(iVar10 + -8);
  do {
    uVar19 = puVar9[0x21];
    iVar13 = iVar13 + -1;
    puVar8[2] = puVar9[0x20];
    puVar8[3] = uVar19;
    uVar19 = puVar9[0x21];
    puVar8[4] = puVar9[0x20];
    puVar8[5] = uVar19;
    puVar8 = puVar8 + 4;
  } while (iVar13 != 0);
  bVar1 = *(byte *)((int)puVar7 + 6);
  uVar18 = (uint)bVar1;
  puVar8 = (undefined4 *)func_0010BA78(uVar18 << 3);
  puVar7[8] = puVar8;
  if (uVar18 != 0) {
    puVar12 = puVar8 + -2;
    if ((bVar1 & 1) != 0) {
      uVar19 = puVar9[5];
      *puVar8 = puVar9[4];
      puVar8[1] = uVar19;
      puVar12 = puVar8;
    }
    for (iVar10 = (int)uVar18 >> 1; iVar10 != 0; iVar10 = iVar10 + -1) {
      uVar19 = puVar9[5];
      puVar12[2] = puVar9[4];
      puVar12[3] = uVar19;
      uVar19 = puVar9[5];
      puVar12[4] = puVar9[4];
      puVar12[5] = uVar19;
      puVar12 = puVar12 + 4;
    }
  }
  puVar8 = (undefined4 *)func_0010CEE0(0x98,(int *)0x0,4);
  puVar4 = DAT_001c2b10;
  iVar10 = 0;
  if (puVar8 != (undefined4 *)0x0) {
    puVar8[1] = 4;
    *puVar8 = 0x24;
    iVar10 = func_00100118((int)(puVar8 + 2),puVar4,0x24,4);
  }
  if (iVar10 != 0) {
    puVar7[3] = iVar10;
    puVar7[2] = 4;
  }
  iVar10 = DAT_001c2b14;
  puVar7[-0x32] = puVar7;
  *(undefined2 *)(iVar10 + (int)puVar16) = 4;
  local_94 = s_cState_Hide_001c2b18;
  local_98 = puVar3;
  func_0010BEC4((int)puVar7,0,(int *)&local_98);
  puVar8 = (undefined4 *)puVar7[6];
  uVar15 = puVar9[2];
  uVar14 = *puVar9;
  uVar19 = puVar9[3];
  uVar21 = *(undefined8 *)(puVar9 + 4);
  puVar8[1] = puVar9[1];
  *puVar8 = uVar14;
  puVar8 = (undefined4 *)puVar7[7];
  puVar8[1] = uVar19;
  *puVar8 = uVar15;
  puVar8 = (undefined4 *)puVar7[8];
  *puVar8 = (int)uVar21;
  puVar8[1] = (int)((ulonglong)uVar21 >> 0x20);
  local_94 = s_cState_PreAppear_001c2b24;
  local_98 = puVar3;
  func_0010BEC4((int)puVar7,1,(int *)&local_98);
  iVar10 = puVar7[6];
  uVar15 = puVar9[7];
  uVar19 = puVar9[9];
  uVar14 = puVar9[8];
  *(undefined4 *)(iVar10 + 8) = puVar9[6];
  *(undefined4 *)(iVar10 + 0xc) = uVar15;
  iVar10 = puVar7[7];
  *(undefined4 *)(iVar10 + 8) = uVar14;
  *(undefined4 *)(iVar10 + 0xc) = uVar19;
  iVar10 = puVar7[8];
  *(int *)(iVar10 + 8) = (int)uVar21;
  *(int *)(iVar10 + 0xc) = (int)((ulonglong)uVar21 >> 0x20);
  local_94 = s_cState_Appear_001c2b38;
  local_98 = puVar3;
  func_0010BEC4((int)puVar7,2,(int *)&local_98);
  iVar10 = puVar7[6];
  uVar15 = puVar9[0xb];
  uVar19 = puVar9[0xc];
  uVar14 = puVar9[0xd];
  *(undefined4 *)(iVar10 + 0x10) = puVar9[10];
  *(undefined4 *)(iVar10 + 0x14) = uVar15;
  iVar10 = puVar7[7];
  *(undefined4 *)(iVar10 + 0x10) = uVar19;
  *(undefined4 *)(iVar10 + 0x14) = uVar14;
  iVar10 = puVar7[8];
  *(int *)(iVar10 + 0x10) = (int)uVar21;
  *(int *)(iVar10 + 0x14) = (int)((ulonglong)uVar21 >> 0x20);
  local_94 = s_cState_Wait_001c2b48;
  local_98 = puVar3;
  func_0010BEC4((int)puVar7,3,(int *)&local_98);
  uVar19 = puVar9[0x11];
  iVar10 = puVar7[6];
  uVar14 = puVar9[0xf];
  uVar15 = puVar9[0x10];
  *(undefined4 *)(iVar10 + 0x18) = puVar9[0xe];
  *(undefined4 *)(iVar10 + 0x1c) = uVar14;
  iVar10 = puVar7[7];
  *(undefined4 *)(iVar10 + 0x18) = uVar15;
  *(undefined4 *)(iVar10 + 0x1c) = uVar19;
  iVar10 = puVar7[8];
  *(int *)(iVar10 + 0x18) = (int)uVar21;
  *(int *)(iVar10 + 0x1c) = (int)((ulonglong)uVar21 >> 0x20);
  if ((*(short *)((int)puVar7 + -0x3e6) == 0) || (bVar5 = func_00588BF0((int)puVar16,0), bVar5)) {
    func_0065BA34(puVar7,3);
  }
  else {
    func_0065BA34(puVar7,0);
  }
  func_001C2080((int)puVar16);
  return puVar16;
}

