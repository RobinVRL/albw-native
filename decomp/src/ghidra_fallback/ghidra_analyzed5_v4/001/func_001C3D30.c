#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_001C3230(int param_1);
extern int func_001E6AF8(int param_1);
extern int func_001E6CEC(undefined4 *param_1,uint *param_2,undefined4 param_3);
extern int func_00324964(int param_1);
extern int func_003249E0(int param_1,uint param_2);
extern int func_0034CAA0(undefined4 *param_1);
extern int func_004A879C(int param_1,int param_2,uint param_3);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_005330BC(int param_1,int *param_2);
extern int func_0054D89C(int param_1,uint param_2);
extern int func_0054D964(int param_1,uint param_2);
extern int func_0065BB78(undefined4 *param_1,undefined1 param_2);
extern int DAT_001c4190;
extern undefined4 *DAT_001c4194;
extern undefined4 DAT_001c4198;
extern undefined4 DAT_001c419c;
extern undefined4 DAT_001c41a0;
extern undefined4 DAT_001c41a4;
extern undefined4 DAT_001c41a8;
extern int DAT_001c41ac;
extern undefined *DAT_001c41b0;
extern undefined *DAT_001c41b4;
extern int DAT_001c41b8;
extern int *DAT_001c41bc;
extern undefined *DAT_001c41c0;
extern int DAT_001c41c4;
extern int DAT_001c41d8;
extern char s_cState_Broken_001c431c[];
extern char s_cState_Cut_001c41dc[];
extern char s_cState_Delete_001c432c[];
extern char s_cState_Fire_001c4310[];
extern char s_cState_Normal_001c41c8[];

// USA 001C3D30 <- EU 001C3D30 (Ghidra, non-matching)
// GLOBAL DAT_001c4190 int
// GLOBAL DAT_001c4194 undefined4 *
// GLOBAL DAT_001c4198 undefined4
// GLOBAL DAT_001c419c undefined4
// GLOBAL DAT_001c41a0 undefined4
// GLOBAL DAT_001c41a4 undefined4
// GLOBAL DAT_001c41a8 undefined4
// GLOBAL DAT_001c41ac int
// GLOBAL DAT_001c41b0 undefined *
// GLOBAL DAT_001c41b4 undefined *
// GLOBAL DAT_001c41b8 int
// GLOBAL DAT_001c41bc int *
// GLOBAL DAT_001c41c0 undefined *
// GLOBAL DAT_001c41c4 int
// GLOBAL DAT_001c41d8 int
// GLOBAL s_cState_Broken_001c431c string
// GLOBAL s_cState_Cut_001c41dc string
// GLOBAL s_cState_Delete_001c432c string
// GLOBAL s_cState_Fire_001c4310 string
// GLOBAL s_cState_Normal_001c41c8 string

/* WARNING: Variable defined which should be unmapped: objStack_40 */

int func_001C3D30(undefined4 *param_1,uint *param_2)

{
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  undefined8 uVar18;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define objStack_40 ((uint *)(albw_frame + 0x0))
  #define local_30 (*(int *)(albw_frame + 0x10))
  #define local_2c (*(char * *)(albw_frame + 0x14))
  piVar5 = (int *)func_001E6CEC(param_1,param_2,0xc);
  iVar7 = DAT_001c4190;
  *piVar5 = DAT_001c4190;
  piVar5[200] = iVar7 + 0x98;
  puVar6 = func_0010A794(piVar5 + 0x1e2);
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  puVar6[10] = 0;
  puVar13 = puVar6 + -0x1e2;
  puVar6[0xb] = 0;
  iVar7 = func_0054D964((int)puVar13,1);
  puVar6[0xc] = iVar7;
  puVar8 = (undefined4 *)func_0010BAB4(0x48);
  puVar9 = (undefined4 *)0x0;
  if (puVar8 != (undefined4 *)0x0) {
    puVar9 = func_004EDC9C(puVar8);
  }
  puVar6[0xd] = puVar9;
  iVar7 = func_0054D89C((int)puVar13,0);
  puVar6[0xe] = iVar7;
  puVar8 = (undefined4 *)func_0010BAB4(0x48);
  puVar9 = (undefined4 *)0x0;
  if (puVar8 != (undefined4 *)0x0) {
    puVar9 = func_0034CAA0(puVar8);
  }
  puVar8 = DAT_001c4194;
  puVar6[0xf] = puVar9;
  uVar15 = DAT_001c41a4;
  uVar12 = DAT_001c419c;
  uVar14 = puVar8[1];
  puVar6[0x12] = *puVar8;
  puVar6[0x13] = uVar14;
  uVar3 = DAT_001c41a8;
  puVar6[0x10] = DAT_001c4198;
  puVar6[0x11] = puVar13;
  iVar7 = DAT_001c41ac;
  puVar6[0x14] = uVar12;
  puVar6[0x15] = uVar12;
  puVar6[0x16] = uVar12;
  uVar14 = DAT_001c41a0;
  puVar6[0x17] = uVar15;
  puVar6[0x18] = uVar3;
  *(undefined2 *)(iVar7 + (int)puVar13) = 0;
  puVar6[0x1a] = uVar14;
  puVar6[0x1b] = uVar14;
  puVar6[0x1c] = uVar12;
  puVar6[0x1d] = uVar12;
  puVar6[0x1e] = uVar12;
  puVar6[0x1f] = 0;
  puVar4 = DAT_001c41b0;
  puVar6[0x20] = 0;
  iVar7 = func_00100118((int)(puVar6 + 0x21),puVar4,4,2);
  iVar7 = func_00100118(iVar7 + 8,DAT_001c41b0,4,2);
  iVar7 = func_00100118(iVar7 + 8,DAT_001c41b0,4,2);
  iVar7 = func_00100118(iVar7 + 8,DAT_001c41b0,4,2);
  iVar7 = func_00100118(iVar7 + 8,DAT_001c41b0,4,2);
  iVar7 = func_00100118(iVar7 + 8,DAT_001c41b4,0xc,2);
  *(undefined2 *)(iVar7 + 0x18) = 0;
  *(undefined1 *)(iVar7 + 0x1a) = 0;
  *(undefined1 *)(iVar7 + 0x1b) = 0;
  *(undefined1 *)(iVar7 + 0x1c) = 0;
  *(undefined1 *)(iVar7 + 0x1d) = 0;
  *(undefined4 *)(iVar7 + 0x20) = 0;
  iVar16 = iVar7 + -0x834;
  *(undefined4 *)(iVar7 + 0x28) = 0;
  iVar10 = func_001E6AF8(iVar16);
  if (iVar10 == 0) {
    *(undefined4 *)(iVar7 + -0x44c) = 0;
    func_003249E0(iVar16,0);
    iVar10 = DAT_001c41b8;
    iVar17 = 0;
    *(undefined4 *)(iVar7 + -0x88) = *(undefined4 *)(*(int *)(iVar7 + -0x564) + 0x1c8);
    do {
      uVar11 = func_005330BC(*(int *)(iVar7 + -0x88),(int *)(iVar10 + iVar17 * 8));
      objStack_40[0] = (uint)(iVar17 == 0);
      objStack_40[1] = 0;
      objStack_40[2] = 0;
      uVar12 = func_0014E428(iVar16,0,0,uVar11,objStack_40[0],0,0);
      iVar1 = iVar17 * 4;
      iVar17 = iVar17 + 1;
      *(undefined4 *)(iVar16 + iVar1 + 0x7b0) = uVar12;
    } while (iVar17 < 2);
    func_001C3230(iVar16);
    iVar10 = *(int *)(iVar7 + -0x7c);
    iVar17 = *(int *)(iVar7 + -0x78);
    *(int *)(iVar17 + 0x18) = iVar10;
    objStack_40[1] = 100;
    *(undefined2 *)(iVar10 + 0x28) = 100;
    objStack_40[0] = *(uint *)(iVar7 + -0x568);
    func_004EDAD0(iVar17,objStack_40);
    *(undefined2 *)(iVar17 + 0x2c) = *(undefined2 *)(iVar7 + -0x7e0);
    func_004A879C(*DAT_001c41bc,iVar17,2);
    func_00324964(iVar16);
    *(undefined1 *)(iVar7 + -0xa6) = 5;
    puVar6 = (undefined4 *)(iVar7 + -0xac);
    *(int *)(iVar7 + -0x98) = iVar16;
    iVar10 = func_0010BA78(0x50);
    *(int *)(iVar7 + -0x94) = iVar10;
    *(uint *)(iVar7 + -0x90) = iVar10 + (uint)*(byte *)(iVar7 + -0xa6) * 8;
    iVar17 = 5;
    puVar9 = (undefined4 *)(iVar10 + -8);
    do {
      uVar12 = puVar8[0x19];
      iVar17 = iVar17 + -1;
      puVar9[2] = puVar8[0x18];
      puVar9[3] = uVar12;
      uVar12 = puVar8[0x19];
      puVar9[4] = puVar8[0x18];
      puVar9[5] = uVar12;
      puVar9 = puVar9 + 4;
    } while (iVar17 != 0);
    bVar2 = *(byte *)(iVar7 + -0xa6);
    uVar11 = (uint)bVar2;
    puVar9 = (undefined4 *)func_0010BA78(uVar11 << 3);
    *(undefined4 **)(iVar7 + -0x8c) = puVar9;
    if (uVar11 != 0) {
      puVar13 = puVar9 + -2;
      if ((bVar2 & 1) != 0) {
        uVar12 = puVar8[7];
        *puVar9 = puVar8[6];
        puVar9[1] = uVar12;
        puVar13 = puVar9;
      }
      for (iVar10 = (int)uVar11 >> 1; iVar10 != 0; iVar10 = iVar10 + -1) {
        uVar12 = puVar8[7];
        puVar13[2] = puVar8[6];
        puVar13[3] = uVar12;
        uVar12 = puVar8[7];
        puVar13[4] = puVar8[6];
        puVar13[5] = uVar12;
        puVar13 = puVar13 + 4;
      }
    }
    puVar9 = (undefined4 *)func_0010CEE0(0xbc,(int *)0x0,4);
    puVar4 = DAT_001c41c0;
    iVar10 = 0;
    if (puVar9 != (undefined4 *)0x0) {
      puVar9[1] = 5;
      *puVar9 = 0x24;
      iVar10 = func_00100118((int)(puVar9 + 2),puVar4,0x24,5);
    }
    if (iVar10 != 0) {
      *(int *)(iVar7 + -0xa0) = iVar10;
      *(undefined4 *)(iVar7 + -0xa4) = 5;
    }
    iVar10 = DAT_001c41c4;
    *(undefined4 **)(iVar7 + -0x4e0) = puVar6;
    iVar17 = DAT_001c41d8;
    *(undefined2 *)(iVar10 + iVar16) = 5;
    local_2c = s_cState_Normal_001c41c8;
    local_30 = iVar17;
    func_0010BEC4((int)puVar6,0,&local_30);
    puVar9 = *(undefined4 **)(iVar7 + -0x94);
    uVar15 = puVar8[4];
    uVar14 = puVar8[2];
    uVar12 = puVar8[5];
    uVar18 = *(undefined8 *)(puVar8 + 6);
    puVar9[1] = puVar8[3];
    *puVar9 = uVar14;
    puVar9 = *(undefined4 **)(iVar7 + -0x90);
    puVar9[1] = uVar12;
    *puVar9 = uVar15;
    puVar9 = *(undefined4 **)(iVar7 + -0x8c);
    *puVar9 = (int)uVar18;
    puVar9[1] = (int)((ulonglong)uVar18 >> 0x20);
    local_2c = s_cState_Cut_001c41dc;
    local_30 = iVar17;
    func_0010BEC4((int)puVar6,1,&local_30);
    uVar15 = puVar8[9];
    uVar12 = puVar8[10];
    uVar14 = puVar8[0xb];
    iVar10 = *(int *)(iVar7 + -0x94);
    *(undefined4 *)(iVar10 + 8) = puVar8[8];
    *(undefined4 *)(iVar10 + 0xc) = uVar15;
    iVar10 = *(int *)(iVar7 + -0x90);
    *(undefined4 *)(iVar10 + 8) = uVar12;
    *(undefined4 *)(iVar10 + 0xc) = uVar14;
    iVar10 = *(int *)(iVar7 + -0x8c);
    *(int *)(iVar10 + 8) = (int)uVar18;
    *(int *)(iVar10 + 0xc) = (int)((ulonglong)uVar18 >> 0x20);
    local_2c = s_cState_Fire_001c4310;
    local_30 = iVar17;
    func_0010BEC4((int)puVar6,2,&local_30);
    iVar10 = *(int *)(iVar7 + -0x94);
    uVar12 = puVar8[0xd];
    uVar14 = puVar8[0xe];
    uVar15 = puVar8[0xf];
    *(undefined4 *)(iVar10 + 0x10) = puVar8[0xc];
    *(undefined4 *)(iVar10 + 0x14) = uVar12;
    iVar10 = *(int *)(iVar7 + -0x90);
    *(undefined4 *)(iVar10 + 0x10) = uVar14;
    *(undefined4 *)(iVar10 + 0x14) = uVar15;
    iVar10 = *(int *)(iVar7 + -0x8c);
    *(int *)(iVar10 + 0x10) = (int)uVar18;
    *(int *)(iVar10 + 0x14) = (int)((ulonglong)uVar18 >> 0x20);
    local_2c = s_cState_Broken_001c431c;
    local_30 = iVar17;
    func_0010BEC4((int)puVar6,3,&local_30);
    iVar10 = *(int *)(iVar7 + -0x94);
    uVar12 = puVar8[0x11];
    uVar14 = puVar8[0x12];
    uVar15 = puVar8[0x13];
    *(undefined4 *)(iVar10 + 0x18) = puVar8[0x10];
    *(undefined4 *)(iVar10 + 0x1c) = uVar12;
    iVar10 = *(int *)(iVar7 + -0x90);
    *(undefined4 *)(iVar10 + 0x18) = uVar14;
    *(undefined4 *)(iVar10 + 0x1c) = uVar15;
    iVar10 = *(int *)(iVar7 + -0x8c);
    *(int *)(iVar10 + 0x18) = (int)uVar18;
    *(int *)(iVar10 + 0x1c) = (int)((ulonglong)uVar18 >> 0x20);
    local_2c = s_cState_Delete_001c432c;
    local_30 = iVar17;
    func_0010BEC4((int)puVar6,4,&local_30);
    iVar10 = *(int *)(iVar7 + -0x94);
    uVar14 = puVar8[0x15];
    uVar12 = puVar8[0x16];
    uVar15 = puVar8[0x17];
    *(undefined4 *)(iVar10 + 0x20) = puVar8[0x14];
    *(undefined4 *)(iVar10 + 0x24) = uVar14;
    iVar10 = *(int *)(iVar7 + -0x90);
    *(undefined4 *)(iVar10 + 0x20) = uVar12;
    *(undefined4 *)(iVar10 + 0x24) = uVar15;
    iVar10 = *(int *)(iVar7 + -0x8c);
    *(int *)(iVar10 + 0x20) = (int)uVar18;
    *(int *)(iVar10 + 0x24) = (int)((ulonglong)uVar18 >> 0x20);
    func_0065BB78(puVar6,0);
    iVar10 = *(int *)(iVar7 + -0x74);
    uVar12 = *(undefined4 *)(iVar10 + 0x10);
    uVar14 = *(undefined4 *)(iVar10 + 0x14);
    *(undefined4 *)(iVar7 + -0x54) = *(undefined4 *)(iVar10 + 0x18);
    *(undefined4 *)(iVar7 + -0x5c) = uVar12;
    *(undefined4 *)(iVar7 + -0x58) = uVar14;
  }
  return iVar16;
}

