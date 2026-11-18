#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00100174(int *param_1);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_002C8348(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_002C83FC(int param_1);
extern int func_00435714(undefined4 *param_1);
extern undefined4 func_004A7F00(int param_1,int param_2,uint param_3);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int func_00663434(undefined4 *param_1,undefined1 param_2);
extern int DAT_002c896c;
extern undefined4 DAT_002c8970;
extern undefined4 DAT_002c8974;
extern int *DAT_002c8978;
extern undefined4 DAT_002c897c;
extern undefined4 DAT_002c8980;
extern undefined4 *DAT_002c8984;
extern undefined *DAT_002c8988;
extern int DAT_002c898c;
extern int DAT_002c89a0;
extern uint *DAT_002c8bd8;
extern undefined4 *DAT_002c8bdc;
extern undefined4 DAT_002c8be0;
extern int *DAT_002c8be4;
extern undefined4 DAT_002c8be8;
extern char s_cState_Appear_002c8990[];
extern char s_cState_ChangeAppearWait_002c89cc[];
extern char s_cState_ChangeAppear_002c89b8[];
extern char s_cState_Disappear_002c89a4[];
extern char s_cState_Erase_002c89e4[];

// USA 002C8598 <- EU 002C8574 (Ghidra, non-matching)
// GLOBAL DAT_002c896c int
// GLOBAL DAT_002c8970 undefined4
// GLOBAL DAT_002c8974 undefined4
// GLOBAL DAT_002c8978 int *
// GLOBAL DAT_002c897c undefined4
// GLOBAL DAT_002c8980 undefined4
// GLOBAL DAT_002c8984 undefined4 *
// GLOBAL DAT_002c8988 undefined *
// GLOBAL DAT_002c898c int
// GLOBAL DAT_002c89a0 int
// GLOBAL DAT_002c8bd8 uint *
// GLOBAL DAT_002c8bdc undefined4 *
// GLOBAL DAT_002c8be0 undefined4
// GLOBAL DAT_002c8be4 int *
// GLOBAL DAT_002c8be8 undefined4
// GLOBAL s_cState_Appear_002c8990 string
// GLOBAL s_cState_ChangeAppearWait_002c89cc string
// GLOBAL s_cState_ChangeAppear_002c89b8 string
// GLOBAL s_cState_Disappear_002c89a4 string
// GLOBAL s_cState_Erase_002c89e4 string

/* WARNING: Variable defined which should be unmapped: objStack_bc */
/* WARNING: Variable defined which should be unmapped: objStack_b8 */

int func_002C8598(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  bool bVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 extraout_r1;
  int *piVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint unaff_r10;
  uint *puVar15;
  uint in_fpscr;
  int iVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  _Alignas(8) unsigned char albw_frame[0xc0];
  #define objStack_bc ((uint *)(albw_frame + 0x4))
  #define objStack_b8 ((uint *)(albw_frame + 0x8))
  #define local_a8 (*(int *)(albw_frame + 0x18))
  #define local_a4 (*(char * *)(albw_frame + 0x1c))
  #define local_a0 ((uint *)(albw_frame + 0x20))
  #define local_98 (*(undefined4 * *)(albw_frame + 0x28))
  #define local_94 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_90 (*(undefined4 *)(albw_frame + 0x30))
  #define uStack_8c (*(undefined4 *)(albw_frame + 0x34))
  #define local_88 (*(undefined4 *)(albw_frame + 0x38))
  #define local_84 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_80 (*(uint *)(albw_frame + 0x40))
  #define local_4c (*(undefined4 *)(albw_frame + 0x74))
  #define local_48 (*(undefined1 *)(albw_frame + 0x78))
  piVar3 = func_00150E40(param_1,param_2);
  iVar7 = DAT_002c896c;
  *piVar3 = DAT_002c896c;
  piVar3[200] = iVar7 + 0x54;
  puVar4 = func_0010A794(piVar3 + 0x103);
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  puVar4 = func_004EDC9C(puVar4 + 10);
  puVar4[0x12] = 0;
  uVar20 = DAT_002c8970;
  puVar4[0x13] = 0;
  puVar4[0x14] = 0;
  puVar4[0x15] = uVar20;
  puVar4[0x16] = 0;
  puVar12 = puVar4 + -0x10d;
  objStack_bc[0] = 0;
  objStack_b8[0] = 0;
  uVar5 = func_0014E428((int)puVar12,1,0,0,1,0,0);
  puVar4[-1] = uVar5;
  puVar6 = (undefined4 *)func_0010BAB4(0xa8);
  if (puVar6 == (undefined4 *)0x0) {
    puVar15 = (uint *)0x0;
  }
  else {
    puVar15 = func_0016A2FC(puVar6,1,DAT_002c8974,1);
  }
  puVar4[0x13] = puVar15;
  func_00169608(puVar15,0,DAT_002c8978,*(int *)(puVar4[-0x59] + 0x1c8));
  func_0016A02C(puVar4[0x13],-1,(int *)0xffffffff,0);
  local_a0[1] = 3;
  local_98 = &local_94;
  local_a0[0] = 1;
  local_4c = 10;
  local_48 = 0;
  local_94 = 0;
  local_88 = DAT_002c8980;
  local_80 = unaff_r10 | 0xff;
  local_90 = DAT_002c897c;
  uStack_8c = uVar20;
  local_84 = uVar20;
  uVar20 = DAT_002c897c;
  func_0016898C(puVar4[0x13],local_a0);
  puVar13 = puVar4 + -10;
  *(undefined4 *)(*(int *)(puVar4[0x13] + 0x14) + 0x10) = uVar20;
  puVar4[0x14] = (int)*(float *)(*(int *)(puVar4[0x13] + 0x14) + 0x14);
  *(undefined1 *)((int)puVar4 + -0x22) = 5;
  puVar4[-5] = puVar12;
  iVar7 = func_0010BA78(0x50);
  puVar4[-4] = iVar7;
  puVar6 = DAT_002c8984;
  puVar4[-3] = iVar7 + (uint)*(byte *)((int)puVar4 + -0x22) * 8;
  iVar8 = 5;
  puVar9 = (undefined4 *)(iVar7 + -8);
  do {
    uVar5 = puVar6[0x17];
    iVar8 = iVar8 + -1;
    puVar9[2] = puVar6[0x16];
    puVar9[3] = uVar5;
    uVar5 = puVar6[0x17];
    puVar9[4] = puVar6[0x16];
    puVar9[5] = uVar5;
    puVar9 = puVar9 + 4;
  } while (iVar8 != 0);
  bVar1 = *(byte *)((int)puVar4 + -0x22);
  uVar14 = (uint)bVar1;
  puVar9 = (undefined4 *)func_0010BA78(uVar14 << 3);
  puVar4[-2] = puVar9;
  if (uVar14 != 0) {
    puVar10 = puVar9 + -2;
    if ((bVar1 & 1) != 0) {
      uVar5 = puVar6[5];
      *puVar9 = puVar6[4];
      puVar9[1] = uVar5;
      puVar10 = puVar9;
    }
    for (iVar7 = (int)uVar14 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
      uVar5 = puVar6[5];
      puVar10[2] = puVar6[4];
      puVar10[3] = uVar5;
      uVar5 = puVar6[5];
      puVar10[4] = puVar6[4];
      puVar10[5] = uVar5;
      puVar10 = puVar10 + 4;
    }
  }
  puVar9 = (undefined4 *)func_0010CEE0(0xbc,(int *)0x0,4);
  iVar7 = 0;
  if (puVar9 != (undefined4 *)0x0) {
    *puVar9 = 0x24;
    puVar9[1] = 5;
    iVar7 = func_00100118((int)(puVar9 + 2),DAT_002c8988,0x24,5);
  }
  if (iVar7 != 0) {
    puVar4[-7] = iVar7;
    puVar4[-8] = 5;
  }
  iVar7 = DAT_002c898c;
  puVar4[-0x38] = puVar13;
  iVar8 = DAT_002c89a0;
  *(undefined2 *)(iVar7 + (int)puVar12) = 5;
  local_a4 = s_cState_Appear_002c8990;
  local_a8 = iVar8;
  func_0010BEC4((int)puVar13,0,&local_a8);
  puVar9 = (undefined4 *)puVar4[-4];
  uVar5 = puVar6[3];
  uVar18 = puVar6[2];
  uVar19 = puVar6[1];
  uVar21 = puVar6[4];
  uVar22 = puVar6[5];
  *puVar9 = *puVar6;
  puVar9[1] = uVar19;
  puVar9 = (undefined4 *)puVar4[-3];
  *puVar9 = uVar18;
  puVar9[1] = uVar5;
  puVar9 = (undefined4 *)puVar4[-2];
  *puVar9 = uVar21;
  puVar9[1] = uVar22;
  local_a4 = s_cState_Disappear_002c89a4;
  local_a8 = iVar8;
  func_0010BEC4((int)puVar13,1,&local_a8);
  iVar7 = puVar4[-4];
  uVar5 = puVar6[7];
  uVar18 = puVar6[8];
  uVar19 = puVar6[9];
  *(undefined4 *)(iVar7 + 8) = puVar6[6];
  *(undefined4 *)(iVar7 + 0xc) = uVar5;
  iVar7 = puVar4[-3];
  *(undefined4 *)(iVar7 + 8) = uVar18;
  *(undefined4 *)(iVar7 + 0xc) = uVar19;
  iVar7 = puVar4[-2];
  *(undefined4 *)(iVar7 + 8) = uVar21;
  *(undefined4 *)(iVar7 + 0xc) = uVar22;
  local_a4 = s_cState_ChangeAppear_002c89b8;
  local_a8 = iVar8;
  func_0010BEC4((int)puVar13,2,&local_a8);
  iVar7 = puVar4[-4];
  piVar11 = puVar6 + 0xb;
  iVar16 = *piVar11;
  uVar5 = puVar6[0xc];
  uVar18 = puVar6[0xd];
  *(undefined4 *)(iVar7 + 0x10) = puVar6[10];
  *(int *)(iVar7 + 0x14) = iVar16;
  iVar7 = puVar4[-3];
  *(undefined4 *)(iVar7 + 0x10) = uVar5;
  *(undefined4 *)(iVar7 + 0x14) = uVar18;
  iVar7 = puVar4[-2];
  *(undefined4 *)(iVar7 + 0x10) = uVar21;
  *(undefined4 *)(iVar7 + 0x14) = uVar22;
  local_a4 = s_cState_ChangeAppearWait_002c89cc;
  local_a8 = iVar8;
  func_0010BEC4((int)puVar13,3,&local_a8);
  iVar7 = puVar4[-4];
  uVar18 = puVar6[0xf];
  uVar19 = puVar6[0x10];
  uVar5 = puVar6[0x11];
  *(undefined4 *)(iVar7 + 0x18) = puVar6[0xe];
  *(undefined4 *)(iVar7 + 0x1c) = uVar18;
  iVar7 = puVar4[-3];
  *(undefined4 *)(iVar7 + 0x18) = uVar19;
  *(undefined4 *)(iVar7 + 0x1c) = uVar5;
  iVar7 = puVar4[-2];
  *(undefined4 *)(iVar7 + 0x18) = uVar21;
  *(undefined4 *)(iVar7 + 0x1c) = uVar22;
  local_a4 = s_cState_Erase_002c89e4;
  local_a8 = iVar8;
  func_0010BEC4((int)puVar13,4,&local_a8);
  iVar7 = puVar4[-4];
  uVar5 = puVar6[0x13];
  uVar18 = puVar6[0x14];
  uVar19 = puVar6[0x15];
  *(undefined4 *)(iVar7 + 0x20) = puVar6[0x12];
  *(undefined4 *)(iVar7 + 0x24) = uVar5;
  iVar7 = puVar4[-3];
  *(undefined4 *)(iVar7 + 0x20) = uVar18;
  *(undefined4 *)(iVar7 + 0x24) = uVar19;
  iVar7 = puVar4[-2];
  *(undefined4 *)(iVar7 + 0x20) = uVar21;
  *(undefined4 *)(iVar7 + 0x24) = uVar22;
  func_00663434(puVar13,0);
  objStack_bc[0] = 8;
  piVar3 = func_00435714(objStack_bc);
  if (((*DAT_002c8bd8 & 1) == 0) && (iVar7 = func_00100174((int *)DAT_002c8bd8), iVar7 != 0)) {
    *DAT_002c8bdc = DAT_002c8be0;
  }
  if ((piVar3 == (int *)0x0) || (iVar7 = (**(code **)*piVar3)(piVar3,DAT_002c8bdc), iVar7 == 0)) {
    piVar3 = (int *)0x0;
  }
  puVar4[0x12] = piVar3;
  (*(undefined2 *)((char *)&objStack_b8[1] + 0)) = 0x224;
  *(undefined2 *)(piVar3 + 10) = 0x224;
  func_002C83FC((int)puVar12);
  puVar4[6] = puVar4[0x12];
  objStack_b8[0] = puVar4[-0x5a];
  func_004EDAD0((int)puVar4,objStack_b8);
  *(undefined2 *)(puVar4 + 0xb) = *(undefined2 *)(puVar4 + -0xf8);
  piVar3 = DAT_002c8be4;
  *(undefined1 *)(puVar4 + 0x11) = 1;
  func_004A7F00(*piVar3,(int)puVar4,0);
  iVar7 = (int)(short)param_2[10];
  uVar5 = 0;
  if (iVar7 < 0) {
    iVar7 = 0;
  }
  else if ((int)puVar4[0x14] < iVar7) {
    iVar7 = puVar4[0x14];
  }
  iVar8 = *(int *)(puVar4[0x13] + 0x14);
  fVar17 = (float)VectorSignedToFloat(iVar7,(byte)(in_fpscr >> 0x15) & 3);
  if (*(float *)(iVar8 + 8) != fVar17) {
    *(float *)(iVar8 + 8) = fVar17;
    *(undefined1 *)(iVar8 + 0x26) = 1;
  }
  uVar18 = *(undefined4 *)(puVar4[0x13] + 0xc);
  *(undefined4 *)(*(int *)(puVar4[0x13] + 0x14) + 0x10) = uVar20;
  if (*(short *)(puVar4 + -0xff) != 0) {
    func_00663434(puVar13,1);
    puVar4[0x15] = DAT_002c8be8;
    uVar18 = extraout_r1;
  }
  func_002C8348((int)puVar12,uVar18,uVar5,piVar11);
  if ((*(short *)((int)param_2 + 0x32) != 0) && (bVar2 = func_00588BF0((int)puVar12,0), bVar2)) {
    *(undefined1 *)((int)puVar4 + -0x15d) = 1;
  }
  if (*(short *)(puVar4 + -0xff) != 0) {
    puVar4[-0x55] = puVar4[-0x55] | 2;
  }
  return (int)puVar12;
}

