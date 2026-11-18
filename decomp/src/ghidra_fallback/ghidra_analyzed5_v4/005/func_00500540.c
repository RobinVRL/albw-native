#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_002AED68(int param_1,undefined2 param_2);
extern int func_002AF5FC(int param_1,undefined2 param_2,int param_3);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F8864(int param_1,undefined4 *param_2,uint param_3,float fparam_0);
extern int func_004FACA4(int param_1,uint param_2,int *param_3);
extern int func_004FB344(int param_1,int param_2);
extern int func_004FB468(int param_1);
extern int func_004FBA18(int param_1,undefined1 param_2,undefined1 param_3,int param_4,int param_5, undefined1 param_6,ushort param_7,float fparam_0,float fparam_1);
extern int func_004FC218(int param_1,char param_2,int param_3,ushort param_4);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern int func_00564A78(int param_1,int *param_2);
extern int func_0066B070(undefined4 *param_1,undefined1 param_2);
extern uint *DAT_005008ac;
extern int DAT_005008b0;
extern undefined4 DAT_005008b4;
extern undefined4 DAT_005008b8;
extern undefined4 DAT_005008c8;
extern undefined4 DAT_005008cc;
extern uint DAT_005008d0;
extern int DAT_005008d4;
extern int DAT_005008d8;
extern undefined *DAT_005008dc;
extern int DAT_005008e0;
extern undefined4 *DAT_005008f0;
extern undefined4 *DAT_00500bdc;
extern float DAT_00500be0;
extern uint DAT_00500be4;
extern float DAT_00500be8;
extern float DAT_00500bec;
extern char s_cState_Die_00500bd0[];
extern char s_cState_Jump_005008f4[];
extern char s_cState_Reaction_00500bc0[];
extern char s_cState_Wait_005008e4[];
extern char s_skl_root_005008bc[];

// USA 00500540 <- EU 00500518 (Ghidra, non-matching)
// GLOBAL DAT_005008ac uint *
// GLOBAL DAT_005008b0 int
// GLOBAL DAT_005008b4 undefined4
// GLOBAL DAT_005008b8 undefined4
// GLOBAL DAT_005008c8 undefined4
// GLOBAL DAT_005008cc undefined4
// GLOBAL DAT_005008d0 uint
// GLOBAL DAT_005008d4 int
// GLOBAL DAT_005008d8 int
// GLOBAL DAT_005008dc undefined *
// GLOBAL DAT_005008e0 int
// GLOBAL DAT_005008f0 undefined4 *
// GLOBAL DAT_00500bdc undefined4 *
// GLOBAL DAT_00500be0 float
// GLOBAL DAT_00500be4 uint
// GLOBAL DAT_00500be8 float
// GLOBAL DAT_00500bec float
// GLOBAL s_cState_Die_00500bd0 string
// GLOBAL s_cState_Jump_005008f4 string
// GLOBAL s_cState_Reaction_00500bc0 string
// GLOBAL s_cState_Wait_005008e4 string
// GLOBAL s_skl_root_005008bc string

/* WARNING: Variable defined which should be unmapped: objStack_48 */

undefined4 * func_00500540(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  ushort uVar11;
  char *pcVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint in_fpscr;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define objStack_48 ((uint *)(albw_frame + 0x8))
  #define local_38 (*(uint *)(albw_frame + 0x18))
  #define local_34 (*(uint * *)(albw_frame + 0x1c))
  piVar2 = func_004FD464(param_1,param_2,DAT_005008ac);
  iVar9 = DAT_005008b0;
  *piVar2 = DAT_005008b0;
  piVar2[200] = iVar9 + 0x84;
  puVar3 = func_0010A794(piVar2 + 0x22f);
  puVar3[5] = 0;
  puVar3[6] = 0;
  uVar16 = DAT_005008b8;
  puVar3[7] = 0;
  uVar15 = DAT_005008b4;
  puVar3[8] = 0;
  puVar3[9] = uVar16;
  puVar3[10] = uVar15;
  puVar3[0xb] = uVar15;
  puVar3[0xc] = 0;
  uVar15 = DAT_005008c8;
  puVar13 = puVar3 + -0x22f;
  puVar3[0xf] = puVar3[-300];
  puVar3[0xd] = uVar15;
  puVar3[0xe] = puVar13;
  puVar3[0x10] = 0;
  puVar3[0x11] = 0;
  puVar3[0x12] = 0;
  uVar15 = DAT_005008cc;
  puVar3[0x13] = 0;
  puVar3[0x14] = 0;
  puVar3[0x15] = uVar15;
  puVar3[0x16] = 0;
  uVar14 = DAT_005008d0;
  puVar3[0x18] = 0xffffffff;
  puVar3[0x17] = 0;
  pcVar12 = s_skl_root_005008bc;
  objStack_48[1] = (uint)s_skl_root_005008bc;
  objStack_48[0] = uVar14;
  uVar4 = func_00564A78(puVar3[0xf],(int *)objStack_48);
  puVar3[0x18] = uVar4;
  puVar5 = (uint *)(*(int *)(*(int *)(puVar3[0xf] + 0x24) + 0xc) + uVar4 * 0x40);
  *puVar5 = *puVar5 | 0x10;
  *(undefined4 **)(puVar3[0xf] + 0x16c) = puVar3 + 0xd;
  puVar3[0x1a] = 0;
  puVar3[0x1b] = 0;
  puVar3[0x1c] = uVar15;
  puVar3[0x1d] = 0;
  func_004FB344((int)puVar13,9);
  iVar9 = DAT_005008d4;
  uVar4 = 0;
  do {
    func_004FACA4((int)puVar13,uVar4,(int *)(iVar9 + uVar4 * 8));
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 9);
  func_004FB468((int)puVar13);
  func_004F5BD8((int)puVar13,(uint *)0x0,(int **)0x0,(float *)pcVar12);
  if (*(short *)((int)puVar3 + -0x88e) != 0) {
    uVar15 = ALBW_AS_U32(VectorSignedToFloat((int)*(short *)((int)puVar3 + -0x88e),(byte)(in_fpscr >> 0x15) & 3))
    ;
    puVar3[10] = uVar15;
    puVar3[0xb] = uVar15;
  }
  puVar3[5] = puVar13;
  *(undefined1 *)((int)puVar3 + 6) = 4;
  iVar6 = func_0010BA78(0x40);
  iVar9 = DAT_005008d8;
  puVar3[6] = iVar6;
  puVar3[7] = iVar6 + (uint)*(byte *)((int)puVar3 + 6) * 8;
  iVar10 = 4;
  puVar7 = (undefined4 *)(iVar6 + -8);
  do {
    uVar15 = *(undefined4 *)(iVar9 + 0x50);
    iVar10 = iVar10 + -1;
    puVar7[2] = *(undefined4 *)(iVar9 + 0x4c);
    puVar7[3] = uVar15;
    uVar15 = *(undefined4 *)(iVar9 + 0x50);
    puVar7[4] = *(undefined4 *)(iVar9 + 0x4c);
    puVar7[5] = uVar15;
    puVar7 = puVar7 + 4;
  } while (iVar10 != 0);
  bVar1 = *(byte *)((int)puVar3 + 6);
  uVar4 = (uint)bVar1;
  puVar7 = (undefined4 *)func_0010BA78(uVar4 << 3);
  puVar3[8] = puVar7;
  if (uVar4 != 0) {
    puVar8 = puVar7 + -2;
    if ((bVar1 & 1) != 0) {
      uVar15 = *(undefined4 *)(iVar9 + 0x18);
      *puVar7 = *(undefined4 *)(iVar9 + 0x14);
      puVar7[1] = uVar15;
      puVar8 = puVar7;
    }
    for (iVar6 = (int)uVar4 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      uVar15 = *(undefined4 *)(iVar9 + 0x18);
      puVar8[2] = *(undefined4 *)(iVar9 + 0x14);
      puVar8[3] = uVar15;
      uVar15 = *(undefined4 *)(iVar9 + 0x18);
      puVar8[4] = *(undefined4 *)(iVar9 + 0x14);
      puVar8[5] = uVar15;
      puVar8 = puVar8 + 4;
    }
  }
  puVar7 = (undefined4 *)func_0010CEE0(0x98,(int *)0x0,4);
  iVar9 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0x24;
    puVar7[1] = 4;
    iVar9 = func_00100118((int)(puVar7 + 2),DAT_005008dc,0x24,4);
  }
  if (iVar9 != 0) {
    puVar3[3] = iVar9;
    puVar3[2] = 4;
  }
  iVar9 = DAT_005008e0;
  puVar3[-0x15a] = puVar3;
  *(undefined2 *)(iVar9 + (int)puVar13) = 4;
  local_34 = (uint *)s_cState_Wait_005008e4;
  local_38 = uVar14;
  iVar9 = puVar3[3];
  puVar5 = *(uint **)(iVar9 + 4);
  (**(code **)(uVar14 + 8))(&local_38);
  uVar4 = 0;
  do {
    if (*(char *)((int)local_34 + uVar4) == '\0') {
      if ((int)uVar4 < 0x40001) goto LAB_00500800;
      break;
    }
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 0x40001);
  uVar4 = 0;
LAB_00500800:
  iVar9 = *(int *)(iVar9 + 8);
  if (iVar9 <= (int)uVar4) {
    uVar4 = iVar9 - 1;
  }
  (**(code **)(local_38 + 8))(&local_38);
  func_0010E3C4(puVar5,local_34,uVar4);
  *(undefined1 *)((int)puVar5 + uVar4) = 0;
  puVar7 = (undefined4 *)puVar3[6];
  uVar15 = DAT_005008f0[1];
  uVar16 = DAT_005008f0[2];
  uVar17 = DAT_005008f0[3];
  uVar18 = DAT_005008f0[4];
  uVar19 = DAT_005008f0[5];
  *puVar7 = *DAT_005008f0;
  puVar7[1] = uVar15;
  puVar7 = (undefined4 *)puVar3[7];
  *puVar7 = uVar16;
  puVar7[1] = uVar17;
  puVar7 = (undefined4 *)puVar3[8];
  *puVar7 = uVar18;
  puVar7[1] = uVar19;
  local_34 = (uint *)s_cState_Jump_005008f4;
  local_38 = uVar14;
  if ((uint)puVar3[2] < 2) {
    iVar9 = puVar3[3];
  }
  else {
    iVar9 = puVar3[3] + 0x24;
  }
  puVar5 = *(uint **)(iVar9 + 4);
  (**(code **)(uVar14 + 8))(&local_38);
  uVar4 = 0;
  do {
    if (*(char *)((int)local_34 + uVar4) == '\0') {
      if ((int)uVar4 < 0x40001) goto LAB_0050090c;
      break;
    }
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 0x40001);
  uVar4 = 0;
LAB_0050090c:
  if (*(int *)(iVar9 + 8) <= (int)uVar4) {
    uVar4 = *(int *)(iVar9 + 8) - 1;
  }
  (**(code **)(local_38 + 8))(&local_38);
  func_0010E3C4(puVar5,local_34,uVar4);
  iVar9 = DAT_005008d8;
  *(undefined1 *)((int)puVar5 + uVar4) = 0;
  iVar6 = puVar3[6];
  uVar18 = *(undefined4 *)(iVar9 + 0x14);
  uVar17 = *(undefined4 *)(iVar9 + 0x24);
  uVar16 = *(undefined4 *)(iVar9 + 0x28);
  uVar15 = *(undefined4 *)(iVar9 + 0x18);
  uVar19 = *(undefined4 *)(iVar9 + 0x20);
  *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(iVar9 + 0x1c);
  *(undefined4 *)(iVar6 + 0xc) = uVar19;
  iVar9 = puVar3[7];
  *(undefined4 *)(iVar9 + 8) = uVar17;
  *(undefined4 *)(iVar9 + 0xc) = uVar16;
  iVar9 = puVar3[8];
  *(undefined4 *)(iVar9 + 8) = uVar18;
  *(undefined4 *)(iVar9 + 0xc) = uVar15;
  local_34 = (uint *)s_cState_Reaction_00500bc0;
  local_38 = uVar14;
  if ((uint)puVar3[2] < 3) {
    iVar9 = puVar3[3];
  }
  else {
    iVar9 = puVar3[3] + 0x48;
  }
  puVar5 = *(uint **)(iVar9 + 4);
  (**(code **)(uVar14 + 8))(&local_38);
  uVar4 = 0;
  do {
    if (*(char *)((int)local_34 + uVar4) == '\0') {
      if ((int)uVar4 < 0x40001) goto LAB_005009e0;
      break;
    }
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 0x40001);
  uVar4 = 0;
LAB_005009e0:
  if (*(int *)(iVar9 + 8) <= (int)uVar4) {
    uVar4 = *(int *)(iVar9 + 8) - 1;
  }
  (**(code **)(local_38 + 8))(&local_38);
  func_0010E3C4(puVar5,local_34,uVar4);
  *(undefined1 *)((int)puVar5 + uVar4) = 0;
  iVar9 = DAT_005008d8;
  iVar6 = puVar3[6];
  uVar15 = *(undefined4 *)(DAT_005008d8 + 0x34);
  uVar16 = *(undefined4 *)(DAT_005008d8 + 0x14);
  uVar17 = *(undefined4 *)(DAT_005008d8 + 0x30);
  uVar18 = *(undefined4 *)(DAT_005008d8 + 0x38);
  uVar19 = *(undefined4 *)(DAT_005008d8 + 0x18);
  *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(DAT_005008d8 + 0x2c);
  *(undefined4 *)(iVar6 + 0x14) = uVar17;
  iVar6 = puVar3[7];
  *(undefined4 *)(iVar6 + 0x10) = uVar15;
  *(undefined4 *)(iVar6 + 0x14) = uVar18;
  iVar6 = puVar3[8];
  *(undefined4 *)(iVar6 + 0x10) = uVar16;
  *(undefined4 *)(iVar6 + 0x14) = uVar19;
  local_34 = (uint *)s_cState_Die_00500bd0;
  local_38 = uVar14;
  if ((uint)puVar3[2] < 4) {
    iVar6 = puVar3[3];
  }
  else {
    iVar6 = puVar3[3] + 0x6c;
  }
  puVar5 = *(uint **)(iVar6 + 4);
  (**(code **)(uVar14 + 8))(&local_38);
  uVar14 = 0;
  do {
    if (*(char *)((int)local_34 + uVar14) == '\0') {
      if ((int)uVar14 < 0x40001) goto LAB_00500ab8;
      break;
    }
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 0x40001);
  uVar14 = 0;
LAB_00500ab8:
  if (*(int *)(iVar6 + 8) <= (int)uVar14) {
    uVar14 = *(int *)(iVar6 + 8) - 1;
  }
  (**(code **)(local_38 + 8))(&local_38);
  func_0010E3C4(puVar5,local_34,uVar14);
  *(undefined1 *)((int)puVar5 + uVar14) = 0;
  iVar6 = puVar3[6];
  uVar18 = *(undefined4 *)(iVar9 + 0x18);
  uVar19 = *(undefined4 *)(iVar9 + 0x14);
  uVar15 = *(undefined4 *)(iVar9 + 0x44);
  uVar16 = *(undefined4 *)(iVar9 + 0x48);
  uVar17 = *(undefined4 *)(iVar9 + 0x40);
  *(undefined4 *)(iVar6 + 0x18) = *(undefined4 *)(iVar9 + 0x3c);
  *(undefined4 *)(iVar6 + 0x1c) = uVar17;
  iVar9 = puVar3[7];
  *(undefined4 *)(iVar9 + 0x18) = uVar15;
  *(undefined4 *)(iVar9 + 0x1c) = uVar16;
  iVar9 = puVar3[8];
  *(undefined4 *)(iVar9 + 0x18) = uVar19;
  *(undefined4 *)(iVar9 + 0x1c) = uVar18;
  func_0066B070(puVar3,0);
  puVar7 = DAT_00500bdc;
  puVar3[-200] = puVar3[-200] | 0x8000;
  func_004F8864((int)puVar13,puVar7,0,DAT_00500be0);
  uVar14 = DAT_00500be4;
  uVar11 = (ushort)DAT_00500be4;
  func_004FC218((int)puVar13,'\x04',-1,uVar11);
  objStack_48[2] = uVar14;
  objStack_48[0] = 0x1c;
  objStack_48[1] = 0;
  func_004FBA18((int)puVar13,5,6,-1,0x1c,0,uVar11,DAT_00500bec,DAT_00500be8);
  func_002AF5FC((int)puVar13,7,-1);
  *(undefined1 *)((int)puVar3 + -0x13f) = 8;
  *(undefined1 *)((int)puVar3 + -0x13d) = 0;
  *(undefined1 *)((int)puVar3 + -0x13e) = 0xff;
  func_002AED68((int)puVar13,7);
  return puVar13;
}

