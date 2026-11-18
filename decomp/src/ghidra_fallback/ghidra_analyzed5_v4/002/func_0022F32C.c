#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00111A64(uint *param_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F87F8(int param_1,int param_2);
extern int func_004FCDF4(int param_1,int param_2);
extern int func_00564A78(int param_1,int *param_2);
extern int func_00582250(int param_1);
extern int func_0058A7D4(void);
extern int func_0065E9FC(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0022f594;
extern int DAT_0022f59c;
extern undefined *DAT_0022f5a0;
extern int DAT_0022f5a4;
extern int DAT_0022f5b8;
extern int *DAT_0022f9f0;
extern float DAT_0022f9f4;
extern undefined4 DAT_0022f9f8;
extern char s_cState_Appear_0022f5c8[];
extern char s_cState_AttackWait_0022f9ac[];
extern char s_cState_Attack_0022f99c[];
extern char s_cState_Die_0022f9e4[];
extern char s_cState_Disappear_0022f9c0[];
extern char s_cState_PreWait_0022f5a8[];
extern char s_cState_ReRotate_0022f98c[];
extern char s_cState_Reaction_0022f9d4[];
extern char s_cState_Rotate_0022f97c[];
extern char s_cState_Wait_0022f5bc[];

// GLOBAL DAT_0022f594 int *
// GLOBAL DAT_0022f59c int
// GLOBAL DAT_0022f5a0 undefined *
// GLOBAL DAT_0022f5a4 int
// GLOBAL DAT_0022f5b8 int
// GLOBAL DAT_0022f9f0 int *
// GLOBAL DAT_0022f9f4 float
// GLOBAL DAT_0022f9f8 undefined4
// GLOBAL s_cState_Appear_0022f5c8 string
// GLOBAL s_cState_AttackWait_0022f9ac string
// GLOBAL s_cState_Attack_0022f99c string
// GLOBAL s_cState_Die_0022f9e4 string
// GLOBAL s_cState_Disappear_0022f9c0 string
// GLOBAL s_cState_PreWait_0022f5a8 string
// GLOBAL s_cState_ReRotate_0022f98c string
// GLOBAL s_cState_Reaction_0022f9d4 string
// GLOBAL s_cState_Rotate_0022f97c string
// GLOBAL s_cState_Wait_0022f5bc string
// USA 0022F32C <- EU 0022F32C (Ghidra, function missing from the decomp table)

/* WARNING: Unknown calling convention */

int func_0022F32C(undefined4 param_1,int *param_2,int *param_3,float fparam_0,float fparam_1,
                 float fparam_2,float fparam_3)

{
  _Alignas(8) unsigned char albw_frame[0x40]; /* entry_sp - 0x0 .. entry_sp + 0x40 */
#define stack0x00000000 (*(undefined4 *)(albw_frame + 0x0))
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint *puVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  float *pfVar10;
  int unaff_r4;
  undefined4 *unaff_r5;
  undefined4 *puVar11;
  int unaff_r7;
  uint uVar12;
  undefined1 unaff_r11;
  int *in_r12;
  bool bVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  int iStack00000000;
  char *pcStack00000004;
  int *piStack00000008;
  
  do {
    iVar9 = *param_2;
    uVar12 = *(uint *)(unaff_r4 + 0x8c4);
    param_2 = param_2 + 1;
    pfVar10 = (float *)(iVar9 + 0x1c);
    fVar14 = *pfVar10;
    uVar15 = *(undefined4 *)(iVar9 + 0x20);
    puVar3 = unaff_r5;
    if (uVar12 < 0x20) {
      pfVar10 = (float *)(uVar12 * 3);
      puVar3 = unaff_r5 + uVar12 * 3;
    }
    *puVar3 = *(undefined4 *)(iVar9 + 0x18);
    puVar3[1] = ALBW_AS_U32(fVar14 + fparam_3);
    puVar3[2] = uVar15;
    *in_r12 = *(int *)(unaff_r4 + 0x8c4) + 1;
  } while (param_2 != param_3);
  *(uint *)(unaff_r4 + 0x59c) = *(uint *)(unaff_r4 + 0x59c) & 0xfffffffd;
  piStack00000008 = (int *)(unaff_r4 + 0x5a8);
  func_004FCDF4((int)piStack00000008,0);
  func_004F5BD8(unaff_r4,(uint *)0x0,(int **)0x0,pfVar10);
  *(int *)(unaff_r4 + 0xa90) = unaff_r4;
  puVar11 = (undefined4 *)(unaff_r4 + 0xa7c);
  *(undefined1 *)(unaff_r4 + 0xa82) = 10;
  iVar2 = func_0010BA78(0xa0);
  iVar9 = DAT_0022f59c;
  *(int *)(unaff_r4 + 0xa94) = iVar2;
  *(uint *)(unaff_r4 + 0xa98) = iVar2 + (uint)*(byte *)(unaff_r4 + 0xa82) * 8;
  iVar7 = 10;
  puVar3 = (undefined4 *)(iVar2 + -8);
  do {
    uVar15 = *(undefined4 *)(iVar9 + 0xb4);
    iVar7 = iVar7 + -1;
    puVar3[2] = *(undefined4 *)(iVar9 + 0xb0);
    puVar3[3] = uVar15;
    uVar15 = *(undefined4 *)(iVar9 + 0xb4);
    puVar3[4] = *(undefined4 *)(iVar9 + 0xb0);
    puVar3[5] = uVar15;
    puVar3 = puVar3 + 4;
  } while (iVar7 != 0);
  bVar1 = *(byte *)(unaff_r4 + 0xa82);
  uVar12 = (uint)bVar1;
  puVar3 = (undefined4 *)func_0010BA78(uVar12 << 3);
  *(undefined4 **)(unaff_r4 + 0xa9c) = puVar3;
  if (uVar12 != 0) {
    puVar4 = puVar3 + -2;
    if ((bVar1 & 1) != 0) {
      uVar15 = *(undefined4 *)(iVar9 + 0x1c);
      *puVar3 = *(undefined4 *)(iVar9 + 0x18);
      puVar3[1] = uVar15;
      puVar4 = puVar3;
    }
    for (iVar2 = (int)uVar12 >> 1; iVar2 != 0; iVar2 = iVar2 + -1) {
      uVar15 = *(undefined4 *)(iVar9 + 0x1c);
      puVar4[2] = *(undefined4 *)(iVar9 + 0x18);
      puVar4[3] = uVar15;
      uVar15 = *(undefined4 *)(iVar9 + 0x1c);
      puVar4[4] = *(undefined4 *)(iVar9 + 0x18);
      puVar4[5] = uVar15;
      puVar4 = puVar4 + 4;
    }
  }
  puVar3 = (undefined4 *)func_0010CEE0(0x170,(int *)0x0,4);
  iVar2 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = 0x24;
    puVar3[1] = 10;
    iVar2 = func_00100118((int)(puVar3 + 2),DAT_0022f5a0,0x24,10);
  }
  if (iVar2 != 0) {
    *(int *)(unaff_r4 + 0xa88) = iVar2;
    *(undefined4 *)(unaff_r4 + 0xa84) = 10;
  }
  iVar2 = DAT_0022f5a4;
  *(undefined4 **)(unaff_r4 + 0x354) = puVar11;
  iVar7 = DAT_0022f5b8;
  *(undefined2 *)(iVar2 + unaff_r4) = 10;
  pcStack00000004 = s_cState_PreWait_0022f5a8;
  iStack00000000 = iVar7;
  func_0010BEC4((int)puVar11,0,&stack0x00000000);
  puVar3 = *(undefined4 **)(unaff_r4 + 0xa94);
  uVar15 = *(undefined4 *)(iVar9 + 0x10);
  uVar16 = *(undefined4 *)(iVar9 + 0x14);
  uVar17 = *(undefined4 *)(iVar9 + 0xc);
  uVar18 = *(undefined8 *)(iVar9 + 0x18);
  *puVar3 = *(undefined4 *)(iVar9 + 8);
  puVar3[1] = uVar17;
  puVar3 = *(undefined4 **)(unaff_r4 + 0xa98);
  *puVar3 = uVar15;
  puVar3[1] = uVar16;
  puVar3 = *(undefined4 **)(unaff_r4 + 0xa9c);
  *puVar3 = (int)uVar18;
  puVar3[1] = (int)((ulonglong)uVar18 >> 0x20);
  pcStack00000004 = s_cState_Wait_0022f5bc;
  iStack00000000 = iVar7;
  func_0010BEC4((int)puVar11,1,&stack0x00000000);
  iVar2 = *(int *)(unaff_r4 + 0xa94);
  uVar15 = *(undefined4 *)(iVar9 + 0x24);
  uVar16 = *(undefined4 *)(iVar9 + 0x28);
  uVar17 = *(undefined4 *)(iVar9 + 0x2c);
  *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar9 + 0x20);
  *(undefined4 *)(iVar2 + 0xc) = uVar15;
  iVar2 = *(int *)(unaff_r4 + 0xa98);
  *(undefined4 *)(iVar2 + 8) = uVar16;
  *(undefined4 *)(iVar2 + 0xc) = uVar17;
  iVar2 = *(int *)(unaff_r4 + 0xa9c);
  *(int *)(iVar2 + 8) = (int)uVar18;
  *(int *)(iVar2 + 0xc) = (int)((ulonglong)uVar18 >> 0x20);
  pcStack00000004 = s_cState_Appear_0022f5c8;
  iStack00000000 = iVar7;
  func_0010BEC4((int)puVar11,2,&stack0x00000000);
  iVar2 = *(int *)(unaff_r4 + 0xa94);
  uVar15 = *(undefined4 *)(iVar9 + 0x34);
  uVar16 = *(undefined4 *)(iVar9 + 0x38);
  uVar17 = *(undefined4 *)(iVar9 + 0x3c);
  *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar9 + 0x30);
  *(undefined4 *)(iVar2 + 0x14) = uVar15;
  iVar2 = *(int *)(unaff_r4 + 0xa98);
  *(undefined4 *)(iVar2 + 0x10) = uVar16;
  *(undefined4 *)(iVar2 + 0x14) = uVar17;
  iVar2 = *(int *)(unaff_r4 + 0xa9c);
  *(int *)(iVar2 + 0x10) = (int)uVar18;
  *(int *)(iVar2 + 0x14) = (int)((ulonglong)uVar18 >> 0x20);
  pcStack00000004 = s_cState_Rotate_0022f97c;
  iStack00000000 = iVar7;
  func_0010BEC4((int)puVar11,3,&stack0x00000000);
  iVar2 = *(int *)(unaff_r4 + 0xa94);
  uVar15 = *(undefined4 *)(iVar9 + 0x44);
  uVar16 = *(undefined4 *)(iVar9 + 0x48);
  uVar17 = *(undefined4 *)(iVar9 + 0x4c);
  *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(iVar9 + 0x40);
  *(undefined4 *)(iVar2 + 0x1c) = uVar15;
  iVar2 = *(int *)(unaff_r4 + 0xa98);
  *(undefined4 *)(iVar2 + 0x18) = uVar16;
  *(undefined4 *)(iVar2 + 0x1c) = uVar17;
  iVar2 = *(int *)(unaff_r4 + 0xa9c);
  *(int *)(iVar2 + 0x18) = (int)uVar18;
  *(int *)(iVar2 + 0x1c) = (int)((ulonglong)uVar18 >> 0x20);
  pcStack00000004 = s_cState_ReRotate_0022f98c;
  iStack00000000 = iVar7;
  func_0010BEC4((int)puVar11,4,&stack0x00000000);
  iVar2 = *(int *)(unaff_r4 + 0xa94);
  uVar15 = *(undefined4 *)(iVar9 + 0x54);
  uVar16 = *(undefined4 *)(iVar9 + 0x58);
  uVar17 = *(undefined4 *)(iVar9 + 0x5c);
  *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(iVar9 + 0x50);
  *(undefined4 *)(iVar2 + 0x24) = uVar15;
  iVar2 = *(int *)(unaff_r4 + 0xa98);
  *(undefined4 *)(iVar2 + 0x20) = uVar16;
  *(undefined4 *)(iVar2 + 0x24) = uVar17;
  iVar2 = *(int *)(unaff_r4 + 0xa9c);
  *(int *)(iVar2 + 0x20) = (int)uVar18;
  *(int *)(iVar2 + 0x24) = (int)((ulonglong)uVar18 >> 0x20);
  pcStack00000004 = s_cState_Attack_0022f99c;
  iStack00000000 = iVar7;
  func_0010BEC4((int)puVar11,5,&stack0x00000000);
  iVar2 = *(int *)(unaff_r4 + 0xa94);
  uVar15 = *(undefined4 *)(iVar9 + 100);
  uVar16 = *(undefined4 *)(iVar9 + 0x68);
  uVar17 = *(undefined4 *)(iVar9 + 0x6c);
  *(undefined4 *)(iVar2 + 0x28) = *(undefined4 *)(iVar9 + 0x60);
  *(undefined4 *)(iVar2 + 0x2c) = uVar15;
  iVar2 = *(int *)(unaff_r4 + 0xa98);
  *(undefined4 *)(iVar2 + 0x28) = uVar16;
  *(undefined4 *)(iVar2 + 0x2c) = uVar17;
  iVar2 = *(int *)(unaff_r4 + 0xa9c);
  *(int *)(iVar2 + 0x28) = (int)uVar18;
  *(int *)(iVar2 + 0x2c) = (int)((ulonglong)uVar18 >> 0x20);
  pcStack00000004 = s_cState_AttackWait_0022f9ac;
  iStack00000000 = iVar7;
  func_0010BEC4((int)puVar11,6,&stack0x00000000);
  iVar2 = *(int *)(unaff_r4 + 0xa94);
  uVar15 = *(undefined4 *)(iVar9 + 0x74);
  uVar16 = *(undefined4 *)(iVar9 + 0x78);
  uVar17 = *(undefined4 *)(iVar9 + 0x7c);
  *(undefined4 *)(iVar2 + 0x30) = *(undefined4 *)(iVar9 + 0x70);
  *(undefined4 *)(iVar2 + 0x34) = uVar15;
  iVar2 = *(int *)(unaff_r4 + 0xa98);
  *(undefined4 *)(iVar2 + 0x30) = uVar16;
  *(undefined4 *)(iVar2 + 0x34) = uVar17;
  iVar2 = *(int *)(unaff_r4 + 0xa9c);
  *(int *)(iVar2 + 0x30) = (int)uVar18;
  *(int *)(iVar2 + 0x34) = (int)((ulonglong)uVar18 >> 0x20);
  pcStack00000004 = s_cState_Disappear_0022f9c0;
  iStack00000000 = iVar7;
  func_0010BEC4((int)puVar11,7,&stack0x00000000);
  iVar2 = *(int *)(unaff_r4 + 0xa94);
  uVar15 = *(undefined4 *)(iVar9 + 0x84);
  uVar17 = *(undefined4 *)(iVar9 + 0x88);
  uVar16 = *(undefined4 *)(iVar9 + 0x8c);
  *(undefined4 *)(iVar2 + 0x38) = *(undefined4 *)(iVar9 + 0x80);
  *(undefined4 *)(iVar2 + 0x3c) = uVar15;
  iVar2 = *(int *)(unaff_r4 + 0xa98);
  *(undefined4 *)(iVar2 + 0x38) = uVar17;
  *(undefined4 *)(iVar2 + 0x3c) = uVar16;
  iVar2 = *(int *)(unaff_r4 + 0xa9c);
  *(int *)(iVar2 + 0x38) = (int)uVar18;
  *(int *)(iVar2 + 0x3c) = (int)((ulonglong)uVar18 >> 0x20);
  pcStack00000004 = s_cState_Reaction_0022f9d4;
  iStack00000000 = iVar7;
  func_0010BEC4((int)puVar11,8,&stack0x00000000);
  iVar2 = *(int *)(unaff_r4 + 0xa94);
  uVar15 = *(undefined4 *)(iVar9 + 0x94);
  uVar16 = *(undefined4 *)(iVar9 + 0x98);
  uVar17 = *(undefined4 *)(iVar9 + 0x9c);
  *(undefined4 *)(iVar2 + 0x40) = *(undefined4 *)(iVar9 + 0x90);
  *(undefined4 *)(iVar2 + 0x44) = uVar15;
  iVar2 = *(int *)(unaff_r4 + 0xa98);
  *(undefined4 *)(iVar2 + 0x40) = uVar16;
  *(undefined4 *)(iVar2 + 0x44) = uVar17;
  iVar2 = *(int *)(unaff_r4 + 0xa9c);
  *(int *)(iVar2 + 0x40) = (int)uVar18;
  *(int *)(iVar2 + 0x44) = (int)((ulonglong)uVar18 >> 0x20);
  pcStack00000004 = s_cState_Die_0022f9e4;
  iStack00000000 = iVar7;
  func_0010BEC4((int)puVar11,9,&stack0x00000000);
  iVar2 = *(int *)(unaff_r4 + 0xa94);
  uVar15 = *(undefined4 *)(iVar9 + 0xa4);
  uVar16 = *(undefined4 *)(iVar9 + 0xa8);
  uVar17 = *(undefined4 *)(iVar9 + 0xac);
  *(undefined4 *)(iVar2 + 0x48) = *(undefined4 *)(iVar9 + 0xa0);
  *(undefined4 *)(iVar2 + 0x4c) = uVar15;
  iVar9 = *(int *)(unaff_r4 + 0xa98);
  *(undefined4 *)(iVar9 + 0x48) = uVar16;
  *(undefined4 *)(iVar9 + 0x4c) = uVar17;
  iVar9 = *(int *)(unaff_r4 + 0xa9c);
  *(int *)(iVar9 + 0x48) = (int)uVar18;
  *(int *)(iVar9 + 0x4c) = (int)((ulonglong)uVar18 >> 0x20);
  func_0065E9FC(puVar11,0);
  piVar6 = DAT_0022f9f0;
  *(uint *)(unaff_r4 + 0x59c) = *(uint *)(unaff_r4 + 0x59c) | 0x8000;
  uVar12 = func_00564A78(*(int *)(unaff_r4 + 0x40c),piVar6);
  *(uint *)(unaff_r4 + 0xa4c) = uVar12;
  fVar14 = DAT_0022f9f4;
  *(undefined4 *)(unaff_r4 + 0x3d0) = *(undefined4 *)(unaff_r4 + 0x8c8);
  *(undefined4 *)(unaff_r4 + 0x3d4) = *(undefined4 *)(unaff_r4 + 0x8cc);
  *(undefined4 *)(unaff_r4 + 0x3d8) = *(undefined4 *)(unaff_r4 + 0x8d0);
  *(float *)(unaff_r4 + 0x3d4) = *(float *)(unaff_r4 + 0x3d4) + fVar14;
  puVar5 = (uint *)func_0058A7D4();
  uVar12 = func_00111A64(puVar5);
  *(int *)(unaff_r4 + 0xa54) = (int)((ulonglong)uVar12 * 0xaa >> 0x20) + 10;
  *(uint *)(unaff_r4 + 0x59c) = *(uint *)(unaff_r4 + 0x59c) & 0xffffff7b;
  func_004F87F8(unaff_r4,3);
  *(uint *)(unaff_r4 + 0x59c) = *(uint *)(unaff_r4 + 0x59c) | 0x40000000;
  piVar6 = DAT_0022f594;
  iVar9 = *(int *)(unaff_r7 + 0x2a4);
  bVar13 = -1 < iVar9;
  if (bVar13) {
    iVar9 = *(int *)(unaff_r7 + 0x2a8);
  }
  if (bVar13 && -1 < iVar9) {
    *(undefined1 *)(unaff_r4 + 0xa6c) = unaff_r11;
    puVar5 = (uint *)func_00582250(*piVar6);
    if (*(uint *)(unaff_r7 + 0x2a4) < *puVar5) {
      iVar9 = *(int *)(puVar5[2] + *(uint *)(unaff_r7 + 0x2a4) * 4);
    }
    else {
      iVar9 = 0;
    }
    piVar6 = *(int **)(iVar9 + 0x28);
    piVar8 = piVar6 + *(int *)(iVar9 + 0x20);
    for (; piVar6 != piVar8; piVar6 = piVar6 + 1) {
      iVar9 = *piVar6;
      uVar15 = *(undefined4 *)(iVar9 + 0x1c);
      uVar16 = *(undefined4 *)(iVar9 + 0x20);
      *(undefined4 *)(unaff_r4 + 0xa70) = *(undefined4 *)(iVar9 + 0x18);
      *(undefined4 *)(unaff_r4 + 0xa74) = uVar15;
      *(undefined4 *)(unaff_r4 + 0xa78) = uVar16;
    }
  }
  else {
    *(undefined1 *)(unaff_r4 + 0xa6c) = 0;
  }
  *(undefined1 *)(unaff_r4 + 0x77d) = 10;
  *(undefined1 *)(unaff_r4 + 0x77e) = 0xff;
  *(undefined1 *)(unaff_r4 + 0x77f) = 0;
  if ((char)piStack00000008[0x2a] == '\0') {
    iVar9 = 0;
  }
  else {
    iVar9 = *piStack00000008;
  }
  *(undefined4 *)(iVar9 + 0x14c) = DAT_0022f9f8;
  return unaff_r4;
}

