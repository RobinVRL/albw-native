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
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_0035BCBC(int param_1);
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
extern int func_00666838(undefined4 *param_1,undefined1 param_2);
extern int DAT_0035c214;
extern undefined4 DAT_0035c218;
extern undefined4 DAT_0035c21c;
extern float DAT_0035c220;
extern int *DAT_0035c224;
extern uint *DAT_0035c228;
extern uint * * * *DAT_0035c22c;
extern undefined4 DAT_0035c230;
extern int *DAT_0035c240;
extern undefined DAT_0035c260;
extern undefined4 DAT_0035c268;
extern undefined4 DAT_0035c638;
extern int *DAT_0035c63c;
extern int DAT_0035c640;
extern undefined *DAT_0035c644;
extern int DAT_0035c648;
extern char s_Actor_QuicksandF3W_kcl_0035c284[];
extern char s_Actor_QuicksandFall_kcl_0035c26c[];
extern char s_QuicksandFlow_0035c244[];
extern char s_WaitFall_0035c234[];
extern char s_WaitFlow_0035c254[];
extern char s_cState_Appear_0035c658[];
extern char s_cState_Hide_0035c64c[];
extern char s_cState_Wait_0035c668[];
extern char s_cf_0035c26c[];
extern char s_cf_0035c284[];

// USA 0035BE50 <- EU 0035BE2C (Ghidra, non-matching)
// GLOBAL DAT_0035c214 int
// GLOBAL DAT_0035c218 undefined4
// GLOBAL DAT_0035c21c undefined4
// GLOBAL DAT_0035c220 float
// GLOBAL DAT_0035c224 int *
// GLOBAL DAT_0035c228 uint *
// GLOBAL DAT_0035c22c uint * * * *
// GLOBAL DAT_0035c230 undefined4
// GLOBAL DAT_0035c240 int *
// GLOBAL DAT_0035c260 undefined
// GLOBAL DAT_0035c268 undefined4
// GLOBAL DAT_0035c638 undefined4
// GLOBAL DAT_0035c63c int *
// GLOBAL DAT_0035c640 int
// GLOBAL DAT_0035c644 undefined *
// GLOBAL DAT_0035c648 int
// GLOBAL s_cf_0035c284 string
// GLOBAL s_cf_0035c26c string
// GLOBAL s_QuicksandFlow_0035c244 string
// GLOBAL s_WaitFall_0035c234 string
// GLOBAL s_WaitFlow_0035c254 string
// GLOBAL s_cState_Appear_0035c658 string
// GLOBAL s_cState_Hide_0035c64c string
// GLOBAL s_cState_Wait_0035c668 string

/* WARNING: Variable defined which should be unmapped: objStack_f0 */
/* WARNING: Variable defined which should be unmapped: objStack_e8 */

undefined4 * func_0035BE50(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  uint *puVar2;
  uint ****ppppuVar3;
  uint ***pppuVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  int *piVar15;
  char *pcVar16;
  undefined4 uVar17;
  bool bVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  undefined8 uVar22;
  _Alignas(8) unsigned char albw_frame[0xf0];
  #define objStack_f0 ((uint *)(albw_frame + 0x0))
  #define objStack_e8 ((uint *)(albw_frame + 0x8))
  #define local_e0 (*(uint *** *)(albw_frame + 0x10))
  #define local_dc (*(uint * *)(albw_frame + 0x14))
  #define local_d4 (*(float *)(albw_frame + 0x1c))
  #define local_d0 (*(undefined4 *)(albw_frame + 0x20))
  #define local_cc (*(undefined4 *)(albw_frame + 0x24))
  #define local_c8 (*(undefined4 *)(albw_frame + 0x28))
  #define local_c4 (*(float *)(albw_frame + 0x2c))
  #define local_c0 (*(undefined4 *)(albw_frame + 0x30))
  #define local_bc (*(undefined4 *)(albw_frame + 0x34))
  #define local_b8 (*(undefined4 *)(albw_frame + 0x38))
  #define local_b4 (*(float *)(albw_frame + 0x3c))
  #define local_8c (*(undefined4 *)(albw_frame + 0x64))
  #define local_88 (*(uint *** *)(albw_frame + 0x68))
  #define local_84 (*(char * *)(albw_frame + 0x6c))
  #define local_80 (*(uint *** *)(albw_frame + 0x70))
  #define local_7c (*(char * *)(albw_frame + 0x74))
  #define uStack_41 (*(undefined1 *)(albw_frame + 0xaf))
  #define local_40 (*(uint *** *)(albw_frame + 0xb0))
  #define local_3c (*(char * *)(albw_frame + 0xb4))
  #define puStack_2c (*(undefined4 * *)(albw_frame + 0xc4))
  #define local_28 (*(uint * *)(albw_frame + 0xc8))
  puStack_2c = param_1;
  local_28 = param_2;
  piVar5 = func_00150E40(param_1,param_2);
  iVar7 = DAT_0035c214;
  piVar5[200] = DAT_0035c214 + 0x54;
  *piVar5 = iVar7;
  piVar5[0x103] = 0;
  piVar5[0x104] = 0;
  piVar5[0x105] = 0;
  puVar6 = func_0010A794(piVar5 + 0x106);
  puVar6[5] = 0;
  puVar6[6] = 0;
  uVar17 = DAT_0035c218;
  puVar6[7] = 0;
  puVar6[8] = 0;
  uVar19 = DAT_0035c21c;
  puVar6[10] = uVar17;
  puVar6[0xb] = uVar19;
  puVar6[9] = 0;
  *(undefined1 *)(puVar6 + 0xc) = 1;
  puVar6[0xd] = 0;
  objStack_f0[0] = 1;
  objStack_f0[1] = 0;
  puVar14 = puVar6 + -0x106;
  objStack_e8[0] = 0;
  fVar21 = DAT_0035c220;
  piVar5 = (int *)func_0014E428((int)puVar14,1,0,0,1,0,0);
  puVar6[-3] = piVar5;
  (**(code **)(*piVar5 + 0x10))(piVar5,0x24);
  iVar7 = func_00588BE4((int)puVar14);
  ppppuVar3 = DAT_0035c22c;
  puVar2 = DAT_0035c228;
  piVar5 = DAT_0035c224;
  if (iVar7 == *DAT_0035c224) {
    puVar8 = (undefined4 *)func_0010BAB4(0xa8);
    puVar9 = (undefined4 *)0x0;
    if (puVar8 != (undefined4 *)0x0) {
      puVar9 = func_0016A2FC(puVar8,1,DAT_0035c230,1);
    }
    puVar6[-1] = puVar9;
    local_7c = s_WaitFall_0035c234;
    local_80 = (uint ***)ppppuVar3;
    func_00169608((uint *)puVar6[-1],0,(int *)&local_80,*(int *)(puVar6[-0x52] + 0x1c8));
    func_0016A02C(puVar6[-1],-1,(int *)0xffffffff,0);
    puVar10 = (uint *)func_002C11E8((int *)objStack_f0,0,10,0);
    func_0016898C(puVar6[-1],puVar10);
  }
  else {
    iVar7 = func_00588BE4((int)puVar14);
    if (iVar7 == *DAT_0035c240) {
      puVar8 = (undefined4 *)func_0010BAB4(0xa8);
      puVar9 = (undefined4 *)0x0;
      if (puVar8 != (undefined4 *)0x0) {
        puVar9 = func_0016A2FC(puVar8,1,DAT_0035c230,1);
      }
      puVar6[-2] = puVar9;
      objStack_e8[1] = (uint)s_QuicksandFlow_0035c244;
      objStack_e8[0] = (uint)ppppuVar3;
      func_00169688((uint *)puVar6[-2],0,(int *)objStack_e8,*(int *)(puVar6[-0x52] + 0x1c8));
      func_0016A02C(puVar6[-2],-1,(int *)0xffffffff,0);
      puVar8 = (undefined4 *)func_0010BAB4(0xa8);
      puVar9 = (undefined4 *)0x0;
      if (puVar8 != (undefined4 *)0x0) {
        puVar9 = func_0016A2FC(puVar8,1,DAT_0035c230,1);
      }
      puVar6[-1] = puVar9;
      local_84 = s_WaitFlow_0035c254;
      local_88 = (uint ***)ppppuVar3;
      func_00169608((uint *)puVar6[-1],0,(int *)&local_88,*(int *)(puVar6[-0x52] + 0x1c8));
      func_0016A02C(puVar6[-1],-1,(int *)0xffffffff,0);
      puVar10 = (uint *)func_002C11E8((int *)objStack_f0,0,10,0);
      func_0016898C(puVar6[-1],puVar10);
    }
    else {
      uVar11 = func_00588BE4((int)puVar14);
      if (uVar11 == *puVar2) {
        puVar8 = (undefined4 *)func_0010BAB4(0xa8);
        puVar9 = (undefined4 *)0x0;
        if (puVar8 != (undefined4 *)0x0) {
          puVar9 = func_0016A2FC(puVar8,1,DAT_0035c230,1);
        }
        puVar6[-1] = puVar9;
        local_84 = &DAT_0035c260;
        local_88 = (uint ***)ppppuVar3;
        func_00169608((uint *)puVar6[-1],0,(int *)&local_88,*(int *)(puVar6[-0x52] + 0x1c8));
        func_0016A02C(puVar6[-1],-1,(int *)0xffffffff,0);
        puVar10 = (uint *)func_002C11E8((int *)objStack_f0,0,10,0);
        func_0016898C(puVar6[-1],puVar10);
      }
    }
  }
  iVar7 = func_00588BE4((int)puVar14);
  if ((iVar7 != *piVar5) && (uVar11 = func_00588BE4((int)puVar14), uVar11 != *puVar2))
  goto LAB_0035c3c8;
  puVar8 = (undefined4 *)func_0010BAB4(0x48);
  puVar9 = (undefined4 *)0x0;
  if (puVar8 != (undefined4 *)0x0) {
    puVar9 = func_004EDC9C(puVar8);
  }
  piVar15 = puVar6 + 0xd;
  puVar6[0xd] = puVar9;
  if (puVar9 == (undefined4 *)0x0) goto LAB_0035c3c8;
  local_88 = (uint ***)&local_80;
  local_84 = (char *)0x40;
  uStack_41 = 0;
  local_80 = (uint ***)((uint)local_80 & 0xffffff00);
  local_8c = DAT_0035c268;
  iVar7 = func_00588BE4((int)puVar14);
  pppuVar4 = local_88;
  local_e0 = (uint ***)ppppuVar3;
  bVar18 = iVar7 != *piVar5;
  if (bVar18) {
    local_dc = (uint *)s_Actor_QuicksandF3W_kcl_0035c284;
  }
  else {
    local_dc = (uint *)s_Actor_QuicksandFall_kcl_0035c26c;
  }
  if (bVar18) {
    (*(code *)ppppuVar3[2])(&local_e0);
    pcVar16 = (char *)0x0;
    do {
      if (*(char *)((int)local_dc + (int)pcVar16) == '\0') {
        if ((int)pcVar16 < 0x40001) goto LAB_0035c2f4;
        break;
      }
      pcVar16 = pcVar16 + 1;
    } while ((int)pcVar16 < 0x40001);
    pcVar16 = (char *)0x0;
LAB_0035c2f4:
    if ((int)local_84 <= (int)pcVar16) goto LAB_0035c2b4;
  }
  else {
    (*(code *)ppppuVar3[2])();
    pcVar16 = (char *)0x0;
    do {
      if (*(char *)((int)local_dc + (int)pcVar16) == '\0') {
        if ((int)pcVar16 < 0x40001) goto LAB_0035c2a8;
        break;
      }
      pcVar16 = pcVar16 + 1;
    } while ((int)pcVar16 < 0x40001);
    pcVar16 = (char *)0x0;
LAB_0035c2a8:
    if ((int)local_84 <= (int)pcVar16) {
LAB_0035c2b4:
      pcVar16 = local_84 + -1;
    }
  }
  (*(code *)local_e0[2])(&local_e0);
  func_0010E3C4((uint *)pppuVar4,local_dc,(uint)pcVar16);
  *(char *)((int)pppuVar4 + (int)pcVar16) = '\0';
  func_004EDB28(puVar6[0xd],(int)&local_8c);
  local_d0 = DAT_0035c638;
  local_cc = DAT_0035c638;
  local_c8 = DAT_0035c638;
  local_c0 = DAT_0035c638;
  local_bc = DAT_0035c638;
  local_b8 = DAT_0035c638;
  local_d4 = fVar21;
  local_c4 = fVar21;
  local_b4 = fVar21;
  func_00435ED0(*(int *)(*piVar15 + 0x14),&local_d4);
  func_0043625C(*(int **)(*piVar15 + 0x14),puVar6 + -0x12);
  func_0043610C(*(int *)(*piVar15 + 0x14),(float *)(local_28 + 4));
  objStack_f0[0] = puVar6[-0x53];
  func_004EDAD0(*piVar15,objStack_f0);
  *(undefined2 *)(*piVar15 + 0x2c) = *(undefined2 *)(puVar6 + -0xf1);
  func_004ED9C8(*piVar15);
  func_004A7F00(*DAT_0035c63c,*piVar15,3);
LAB_0035c3c8:
  puVar6[5] = puVar14;
  *(undefined1 *)((int)puVar6 + 6) = 3;
  iVar12 = func_0010BA78(0x30);
  iVar7 = DAT_0035c640;
  iVar13 = 3;
  puVar6[6] = iVar12;
  puVar6[7] = iVar12 + (uint)*(byte *)((int)puVar6 + 6) * 8;
  puVar9 = (undefined4 *)(iVar12 + -8);
  do {
    uVar17 = *(undefined4 *)(iVar7 + 0x8c);
    iVar13 = iVar13 + -1;
    puVar9[2] = *(undefined4 *)(iVar7 + 0x88);
    puVar9[3] = uVar17;
    uVar17 = *(undefined4 *)(iVar7 + 0x8c);
    puVar9[4] = *(undefined4 *)(iVar7 + 0x88);
    puVar9[5] = uVar17;
    puVar9 = puVar9 + 4;
  } while (iVar13 != 0);
  bVar1 = *(byte *)((int)puVar6 + 6);
  uVar11 = (uint)bVar1;
  puVar9 = (undefined4 *)func_0010BA78(uVar11 << 3);
  puVar6[8] = puVar9;
  if (uVar11 != 0) {
    puVar8 = puVar9 + -2;
    if ((bVar1 & 1) != 0) {
      uVar17 = *(undefined4 *)(iVar7 + 0x5c);
      *puVar9 = *(undefined4 *)(iVar7 + 0x58);
      puVar9[1] = uVar17;
      puVar8 = puVar9;
    }
    for (iVar12 = (int)uVar11 >> 1; iVar12 != 0; iVar12 = iVar12 + -1) {
      uVar17 = *(undefined4 *)(iVar7 + 0x5c);
      puVar8[2] = *(undefined4 *)(iVar7 + 0x58);
      puVar8[3] = uVar17;
      uVar17 = *(undefined4 *)(iVar7 + 0x5c);
      puVar8[4] = *(undefined4 *)(iVar7 + 0x58);
      puVar8[5] = uVar17;
      puVar8 = puVar8 + 4;
    }
  }
  puVar9 = (undefined4 *)func_0010CEE0(0x74,(int *)0x0,4);
  iVar12 = 0;
  if (puVar9 != (undefined4 *)0x0) {
    *puVar9 = 0x24;
    puVar9[1] = 3;
    iVar12 = func_00100118((int)(puVar9 + 2),DAT_0035c644,0x24,3);
  }
  if (iVar12 != 0) {
    puVar6[3] = iVar12;
    puVar6[2] = 3;
  }
  iVar12 = DAT_0035c648;
  puVar6[-0x31] = puVar6;
  *(undefined2 *)(iVar12 + (int)puVar14) = 3;
  local_3c = s_cState_Hide_0035c64c;
  local_40 = (uint ***)ppppuVar3;
  func_0010BEC4((int)puVar6,0,(int *)&local_40);
  puVar9 = (undefined4 *)puVar6[6];
  uVar17 = *(undefined4 *)(iVar7 + 0x50);
  uVar20 = *(undefined4 *)(iVar7 + 0x54);
  uVar19 = *(undefined4 *)(iVar7 + 0x4c);
  uVar22 = *(undefined8 *)(iVar7 + 0x58);
  *puVar9 = *(undefined4 *)(iVar7 + 0x48);
  puVar9[1] = uVar19;
  puVar9 = (undefined4 *)puVar6[7];
  *puVar9 = uVar17;
  puVar9[1] = uVar20;
  puVar9 = (undefined4 *)puVar6[8];
  *puVar9 = (int)uVar22;
  puVar9[1] = (int)((ulonglong)uVar22 >> 0x20);
  local_3c = s_cState_Appear_0035c658;
  local_40 = (uint ***)ppppuVar3;
  func_0010BEC4((int)puVar6,1,(int *)&local_40);
  iVar12 = puVar6[6];
  uVar20 = *(undefined4 *)(iVar7 + 0x6c);
  uVar19 = *(undefined4 *)(iVar7 + 100);
  uVar17 = *(undefined4 *)(iVar7 + 0x68);
  *(undefined4 *)(iVar12 + 8) = *(undefined4 *)(iVar7 + 0x60);
  *(undefined4 *)(iVar12 + 0xc) = uVar19;
  iVar12 = puVar6[7];
  *(undefined4 *)(iVar12 + 8) = uVar17;
  *(undefined4 *)(iVar12 + 0xc) = uVar20;
  iVar12 = puVar6[8];
  *(int *)(iVar12 + 8) = (int)uVar22;
  *(int *)(iVar12 + 0xc) = (int)((ulonglong)uVar22 >> 0x20);
  local_3c = s_cState_Wait_0035c668;
  local_40 = (uint ***)ppppuVar3;
  func_0010BEC4((int)puVar6,2,(int *)&local_40);
  iVar12 = puVar6[6];
  uVar17 = *(undefined4 *)(iVar7 + 0x74);
  uVar19 = *(undefined4 *)(iVar7 + 0x78);
  uVar20 = *(undefined4 *)(iVar7 + 0x7c);
  *(undefined4 *)(iVar12 + 0x10) = *(undefined4 *)(iVar7 + 0x70);
  *(undefined4 *)(iVar12 + 0x14) = uVar17;
  iVar7 = puVar6[7];
  *(undefined4 *)(iVar7 + 0x10) = uVar19;
  *(undefined4 *)(iVar7 + 0x14) = uVar20;
  iVar7 = puVar6[8];
  *(int *)(iVar7 + 0x10) = (int)uVar22;
  *(int *)(iVar7 + 0x14) = (int)((ulonglong)uVar22 >> 0x20);
  uVar11 = func_00588BE4((int)puVar14);
  bVar18 = uVar11 == *puVar2;
  if (!bVar18) {
    uVar11 = (uint)*(ushort *)((int)puVar6 + -0x3e2);
  }
  if ((bVar18 || uVar11 == 0) || (bVar18 = func_00588BF0((int)puVar14,0), bVar18)) {
    func_00666838(puVar6,2);
  }
  else {
    func_00666838(puVar6,0);
  }
  func_0035BCBC((int)puVar14);
  return puVar14;
}

