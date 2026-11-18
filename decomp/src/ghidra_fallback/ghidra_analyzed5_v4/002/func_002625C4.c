#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00111A64(uint *param_1);
extern int func_002AED68(int param_1,undefined2 param_2);
extern int func_002AF5FC(int param_1,undefined2 param_2,int param_3);
extern int func_0032427C(int param_1,float fparam_0,float fparam_1);
extern int func_0036CF6C(undefined4 *param_1,int param_2);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FACA4(int param_1,uint param_2,int *param_3);
extern int func_004FB148(int param_1,undefined1 param_2,undefined1 param_3);
extern int func_004FB344(int param_1,int param_2);
extern int func_004FB468(int param_1);
extern int func_004FB4E0(int param_1,float fparam_0);
extern int func_004FBA18(int param_1,undefined1 param_2,undefined1 param_3,int param_4,int param_5, undefined1 param_6,ushort param_7,float fparam_0,float fparam_1);
extern int func_004FC218(int param_1,char param_2,int param_3,ushort param_4);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern int func_0066034C(undefined4 *param_1,undefined1 param_2);
extern float fRam00262cc0;
extern float fRam00262cc4;
extern float fRam00262cc8;
extern int iRam00262994;
extern int iRam0026299c;
extern int iRam002629ac;
extern undefined4 *puRam00262990;
extern undefined4 *puRam00262998;
extern undefined4 *puRam00262ca0;
extern uint *DAT_00262978;
extern int DAT_0026297c;
extern uint DAT_00262980;
extern undefined *DAT_00262984;
extern undefined4 DAT_00262988;
extern int DAT_0026298c;
extern char s_cState_Die_00262cb4[];
extern char s_cState_Reaction_00262ca4[];
extern char s_cState_Wait_002629b0[];
extern char s_cState_Walk_002629a0[];

// USA 002625C4 <- EU 002625EC (Ghidra, non-matching)
// GLOBAL DAT_00262978 uint *
// GLOBAL DAT_0026297c int
// GLOBAL DAT_00262980 uint
// GLOBAL DAT_00262984 undefined *
// GLOBAL DAT_00262988 undefined4
// GLOBAL DAT_0026298c int
// GLOBAL UNK_00262990 undefined4 *
// GLOBAL UNK_00262994 int
// GLOBAL UNK_00262998 undefined *
// GLOBAL UNK_0026299c int
// GLOBAL UNK_002629ac int
// GLOBAL UNK_00262ca0 undefined4 *
// GLOBAL UNK_00262cc0 float
// GLOBAL UNK_00262cc4 float
// GLOBAL UNK_00262cc8 float
// GLOBAL s_cState_Die_00262cb4 string
// GLOBAL s_cState_Reaction_00262ca4 string
// GLOBAL s_cState_Wait_002629b0 string
// GLOBAL s_cState_Walk_002629a0 string

int func_002625C4(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined4 uVar14;
  uint *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint in_fpscr;
  uint uVar18;
  float fVar19;
  ulonglong uVar20;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define iStack_38 (*(int *)(albw_frame + 0x8))
  #define puStack_34 (*(uint * *)(albw_frame + 0xc))
  piVar3 = func_004FD464(param_1,param_2,DAT_00262978);
  iVar5 = DAT_0026297c;
  *piVar3 = DAT_0026297c;
  piVar3[200] = iVar5 + 0x84;
  puVar4 = func_0010A794(piVar3 + 0x22f);
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  *(undefined1 *)(puVar4 + 9) = 0;
  puVar4[10] = 0;
  uVar12 = DAT_00262980;
  uVar20 = (ulonglong)DAT_00262980;
  puVar4[0xb] = 0;
  puVar4[0xc] = uVar12;
  iVar5 = func_00100118((int)(puVar4 + 0xd),DAT_00262984,0x10,8);
  *(int *)(iVar5 + 0x80) = 0;
  *(undefined4 *)(iVar5 + 0x84) = 0;
  *(undefined4 *)(iVar5 + 0x88) = 0;
  uVar16 = DAT_00262988;
  *(undefined4 *)(iVar5 + 0x8c) = 0;
  if (iVar5 + 0x90 != 0) {
    *(int *)(iVar5 + 0x80) = iVar5 + 0x90;
    *(undefined4 *)(iVar5 + 0x84) = 10;
  }
  *(undefined4 *)(iVar5 + 0x108) = uVar16;
  *(undefined4 *)(iVar5 + 0x10c) = uVar16;
  iVar11 = iVar5 + -0x8f0;
  *(undefined1 *)(iVar5 + 0x110) = 0;
  *(undefined4 *)(iVar5 + 0x114) = 0;
  *(undefined4 *)(iVar5 + 0x118) = uVar16;
  *(undefined4 *)(iVar5 + -0x514) = uVar16;
  *(undefined4 *)(iVar5 + -0x510) = uVar16;
  *(undefined4 *)(iVar5 + -0x50c) = uVar16;
  func_004FB344(iVar11,9);
  iVar13 = DAT_0026298c;
  uVar12 = 0;
  do {
    func_004FACA4(iVar11,uVar12,(int *)(iVar13 + uVar12 * 8));
    fVar19 = ALBW_AS_F32(uVar20);
    uVar12 = uVar12 + 1;
  } while ((int)uVar12 < 9);
  func_004FB468(iVar11);
  func_004FABDC(iVar11,1,0xffffffff,0);
  func_004FB4E0(iVar11,fVar19);
  iVar13 = *(int *)(iVar5 + -0x4e0);
  uVar18 = VectorFloatToUnsigned(ALBW_AS_F32(*(undefined4 *)(*(int *)(iVar13 + 0x14) + 0x14)),3);
  uVar12 = func_00111A64((uint *)*puRam00262990);
  iVar13 = *(int *)(iVar13 + 0x14);
  fVar19 = (float)VectorUnsignedToFloat
                            ((int)((ulonglong)uVar18 * (ulonglong)uVar12 >> 0x20),
                             (byte)(in_fpscr >> 0x15) & 3);
  if (*(float *)(iVar13 + 8) != fVar19) {
    *(float *)(iVar13 + 8) = fVar19;
    *(undefined1 *)(iVar13 + 0x26) = 1;
  }
  *(int *)(iVar5 + -0x20) = iVar11;
  *(undefined1 *)(iVar5 + -0x2e) = 4;
  iVar6 = func_0010BA78(0x40);
  iVar13 = iRam00262994;
  *(int *)(iVar5 + -0x1c) = iVar6;
  *(uint *)(iVar5 + -0x18) = iVar6 + (uint)*(byte *)(iVar5 + -0x2e) * 8;
  iVar8 = 4;
  puVar4 = (undefined4 *)(iVar6 + -8);
  do {
    uVar16 = *(undefined4 *)(iVar13 + 0x54);
    iVar8 = iVar8 + -1;
    puVar4[2] = *(undefined4 *)(iVar13 + 0x50);
    puVar4[3] = uVar16;
    uVar16 = *(undefined4 *)(iVar13 + 0x54);
    puVar4[4] = *(undefined4 *)(iVar13 + 0x50);
    puVar4[5] = uVar16;
    puVar4 = puVar4 + 4;
  } while (iVar8 != 0);
  bVar1 = *(byte *)(iVar5 + -0x2e);
  uVar12 = (uint)bVar1;
  puVar4 = (undefined4 *)func_0010BA78(uVar12 << 3);
  *(undefined4 **)(iVar5 + -0x14) = puVar4;
  if (uVar12 != 0) {
    puVar7 = puVar4 + -2;
    if ((bVar1 & 1) != 0) {
      uVar16 = *(undefined4 *)(iVar13 + 0x1c);
      *puVar4 = *(undefined4 *)(iVar13 + 0x18);
      puVar4[1] = uVar16;
      puVar7 = puVar4;
    }
    for (iVar6 = (int)uVar12 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      uVar16 = *(undefined4 *)(iVar13 + 0x1c);
      puVar7[2] = *(undefined4 *)(iVar13 + 0x18);
      puVar7[3] = uVar16;
      uVar16 = *(undefined4 *)(iVar13 + 0x1c);
      puVar7[4] = *(undefined4 *)(iVar13 + 0x18);
      puVar7[5] = uVar16;
      puVar7 = puVar7 + 4;
    }
  }
  puVar4 = (undefined4 *)func_0010CEE0(0x98,(int *)0x0,4);
  puVar2 = puRam00262998;
  iVar13 = 0;
  if (puVar4 != (undefined4 *)0x0) {
    puVar4[1] = 4;
    *puVar4 = 0x24;
    iVar13 = func_00100118((int)(puVar4 + 2),puVar2,0x24,4);
  }
  if (iVar13 != 0) {
    *(int *)(iVar5 + -0x28) = iVar13;
    *(undefined4 *)(iVar5 + -0x2c) = 4;
  }
  iVar13 = iRam0026299c;
  *(undefined4 **)(iVar5 + -0x59c) = (undefined4 *)(iVar5 + -0x34);
  iVar6 = iRam002629ac;
  *(undefined2 *)(iVar13 + iVar11) = 4;
  puStack_34 = (uint *)s_cState_Walk_002629a0;
  iStack_38 = iVar6;
  iVar13 = *(int *)(iVar5 + -0x28);
  puVar15 = *(uint **)(iVar13 + 4);
  (**(code **)(iVar6 + 8))(&iStack_38);
  uVar12 = 0;
  do {
    if (*(char *)((int)puStack_34 + uVar12) == '\0') {
      if ((int)uVar12 < 0x40001) goto LAB_002628c0;
      break;
    }
    uVar12 = uVar12 + 1;
  } while ((int)uVar12 < 0x40001);
  uVar12 = 0;
LAB_002628c0:
  iVar13 = *(int *)(iVar13 + 8);
  if (iVar13 <= (int)uVar12) {
    uVar12 = iVar13 - 1;
  }
  (**(code **)(iStack_38 + 8))(&iStack_38);
  func_0010E3C4(puVar15,puStack_34,uVar12);
  *(undefined1 *)((int)puVar15 + uVar12) = 0;
  puVar4 = *(undefined4 **)(iVar5 + -0x1c);
  uVar16 = *(undefined4 *)(iRam00262994 + 0x1c);
  uVar9 = *(undefined4 *)(iRam00262994 + 0xc);
  uVar10 = *(undefined4 *)(iRam00262994 + 0x10);
  uVar14 = *(undefined4 *)(iRam00262994 + 0x14);
  uVar17 = *(undefined4 *)(iRam00262994 + 0x18);
  *puVar4 = *(undefined4 *)(iRam00262994 + 8);
  puVar4[1] = uVar9;
  puVar4 = *(undefined4 **)(iVar5 + -0x18);
  *puVar4 = uVar10;
  puVar4[1] = uVar14;
  puVar4 = *(undefined4 **)(iVar5 + -0x14);
  puVar4[1] = uVar16;
  *puVar4 = uVar17;
  puStack_34 = (uint *)s_cState_Wait_002629b0;
  iStack_38 = iVar6;
  if (*(uint *)(iVar5 + -0x2c) < 2) {
    iVar13 = *(int *)(iVar5 + -0x28);
  }
  else {
    iVar13 = *(int *)(iVar5 + -0x28) + 0x24;
  }
  puVar15 = *(uint **)(iVar13 + 4);
  (**(code **)(iVar6 + 8))(&iStack_38);
  uVar12 = 0;
  do {
    if (*(char *)((int)puStack_34 + uVar12) == '\0') {
      if ((int)uVar12 < 0x40001) goto LAB_002629c8;
      break;
    }
    uVar12 = uVar12 + 1;
  } while ((int)uVar12 < 0x40001);
  uVar12 = 0;
LAB_002629c8:
  if (*(int *)(iVar13 + 8) <= (int)uVar12) {
    uVar12 = *(int *)(iVar13 + 8) - 1;
  }
  (**(code **)(iStack_38 + 8))(&iStack_38);
  func_0010E3C4(puVar15,puStack_34,uVar12);
  *(undefined1 *)((int)puVar15 + uVar12) = 0;
  iVar13 = *(int *)(iVar5 + -0x1c);
  uVar16 = *puRam00262ca0;
  uVar9 = puRam00262ca0[1];
  uVar10 = puRam00262ca0[3];
  uVar14 = puRam00262ca0[4];
  uVar17 = puRam00262ca0[5];
  *(undefined4 *)(iVar13 + 8) = puRam00262ca0[2];
  *(undefined4 *)(iVar13 + 0xc) = uVar10;
  iVar13 = *(int *)(iVar5 + -0x18);
  *(undefined4 *)(iVar13 + 8) = uVar14;
  *(undefined4 *)(iVar13 + 0xc) = uVar17;
  iVar13 = *(int *)(iVar5 + -0x14);
  *(undefined4 *)(iVar13 + 8) = uVar16;
  *(undefined4 *)(iVar13 + 0xc) = uVar9;
  puStack_34 = (uint *)s_cState_Reaction_00262ca4;
  iStack_38 = iVar6;
  if (*(uint *)(iVar5 + -0x2c) < 3) {
    iVar13 = *(int *)(iVar5 + -0x28);
  }
  else {
    iVar13 = *(int *)(iVar5 + -0x28) + 0x48;
  }
  puVar15 = *(uint **)(iVar13 + 4);
  (**(code **)(iVar6 + 8))(&iStack_38);
  uVar12 = 0;
  do {
    if (*(char *)((int)puStack_34 + uVar12) == '\0') {
      if ((int)uVar12 < 0x40001) goto LAB_00262a8c;
      break;
    }
    uVar12 = uVar12 + 1;
  } while ((int)uVar12 < 0x40001);
  uVar12 = 0;
LAB_00262a8c:
  if (*(int *)(iVar13 + 8) <= (int)uVar12) {
    uVar12 = *(int *)(iVar13 + 8) - 1;
  }
  (**(code **)(iStack_38 + 8))(&iStack_38);
  func_0010E3C4(puVar15,puStack_34,uVar12);
  *(undefined1 *)((int)puVar15 + uVar12) = 0;
  iVar13 = iRam00262994;
  iVar8 = *(int *)(iVar5 + -0x1c);
  uVar9 = *(undefined4 *)(iRam00262994 + 0x38);
  uVar10 = *(undefined4 *)(iRam00262994 + 0x18);
  uVar14 = *(undefined4 *)(iRam00262994 + 0x34);
  uVar17 = *(undefined4 *)(iRam00262994 + 0x3c);
  uVar16 = *(undefined4 *)(iRam00262994 + 0x1c);
  *(undefined4 *)(iVar8 + 0x10) = *(undefined4 *)(iRam00262994 + 0x30);
  *(undefined4 *)(iVar8 + 0x14) = uVar14;
  iVar8 = *(int *)(iVar5 + -0x18);
  *(undefined4 *)(iVar8 + 0x10) = uVar9;
  *(undefined4 *)(iVar8 + 0x14) = uVar17;
  iVar8 = *(int *)(iVar5 + -0x14);
  *(undefined4 *)(iVar8 + 0x10) = uVar10;
  *(undefined4 *)(iVar8 + 0x14) = uVar16;
  puStack_34 = (uint *)s_cState_Die_00262cb4;
  iStack_38 = iVar6;
  uVar12 = *(uint *)(iVar5 + -0x2c);
  if (uVar12 < 4) {
    iVar8 = *(int *)(iVar5 + -0x28);
    uVar18 = uVar12;
  }
  else {
    iVar8 = iVar6;
    uVar18 = *(uint *)(iVar5 + -0x28);
  }
  if (3 < uVar12) {
    iVar8 = uVar18 + 0x6c;
  }
  puVar15 = *(uint **)(iVar8 + 4);
  (**(code **)(iVar6 + 8))(&iStack_38);
  uVar12 = 0;
  do {
    if (*(char *)((int)puStack_34 + uVar12) == '\0') {
      if ((int)uVar12 < 0x40001) goto LAB_00262b64;
      break;
    }
    uVar12 = uVar12 + 1;
  } while ((int)uVar12 < 0x40001);
  uVar12 = 0;
LAB_00262b64:
  if (*(int *)(iVar8 + 8) <= (int)uVar12) {
    uVar12 = *(int *)(iVar8 + 8) - 1;
  }
  (**(code **)(iStack_38 + 8))(&iStack_38);
  func_0010E3C4(puVar15,puStack_34,uVar12);
  *(undefined1 *)((int)puVar15 + uVar12) = 0;
  iVar6 = *(int *)(iVar5 + -0x1c);
  uVar16 = *(undefined4 *)(iVar13 + 0x44);
  uVar10 = *(undefined4 *)(iVar13 + 0x48);
  uVar9 = *(undefined4 *)(iVar13 + 0x4c);
  uVar14 = *(undefined4 *)(iVar13 + 0x1c);
  uVar17 = *(undefined4 *)(iVar13 + 0x18);
  *(undefined4 *)(iVar6 + 0x18) = *(undefined4 *)(iVar13 + 0x40);
  *(undefined4 *)(iVar6 + 0x1c) = uVar16;
  iVar13 = *(int *)(iVar5 + -0x18);
  *(undefined4 *)(iVar13 + 0x18) = uVar10;
  *(undefined4 *)(iVar13 + 0x1c) = uVar9;
  iVar13 = *(int *)(iVar5 + -0x14);
  *(undefined4 *)(iVar13 + 0x18) = uVar17;
  *(undefined4 *)(iVar13 + 0x1c) = uVar14;
  func_0066034C((undefined4 *)(iVar5 + -0x34),0);
  func_0032427C(iVar5,*(float *)(iVar5 + -0x42c),fRam00262cc0);
  puVar7 = (undefined4 *)func_0010BAB4(0x18);
  puVar4 = (undefined4 *)0x0;
  if (puVar7 != (undefined4 *)0x0) {
    puVar4 = func_0036CF6C(puVar7,4);
  }
  *(undefined4 **)(iVar5 + 0x114) = puVar4;
  func_002AF5FC(iVar11,3,-1);
  *(undefined1 *)(iVar5 + -0x173) = 4;
  *(undefined1 *)(iVar5 + -0x172) = 0xff;
  *(undefined1 *)(iVar5 + -0x171) = 0;
  func_004FC218(iVar11,'\x02',-1,0x7fff);
  func_004FBA18(iVar11,6,7,-1,0x16,0,0x7fff,fRam00262cc8,fRam00262cc4);
  func_002AED68(iVar11,3);
  func_004FB148(iVar11,8,0);
  return iVar11;
}

