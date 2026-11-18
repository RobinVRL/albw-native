#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00100174(int *param_1);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F87F8(int param_1,int param_2);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FACA4(int param_1,uint param_2,int *param_3);
extern int func_004FB344(int param_1,int param_2);
extern int func_004FB468(int param_1);
extern int func_004FB4E0(int param_1,float fparam_0);
extern int func_004FBA18(int param_1,undefined1 param_2,undefined1 param_3,int param_4,int param_5, undefined1 param_6,ushort param_7,float fparam_0,float fparam_1);
extern int func_004FC218(int param_1,char param_2,int param_3,ushort param_4);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0066645C(undefined4 *param_1,undefined1 param_2);
extern float fRam00358f64;
extern float fRam00358f68;
extern int iRam00358b34;
extern int iRam00358b48;
extern undefined4 *puRam00358b30;
extern undefined4 *puRam00358b4c;
extern uint *DAT_00358b08;
extern int DAT_00358b0c;
extern int DAT_00358b10;
extern undefined4 DAT_00358b14;
extern uint DAT_00358b18;
extern undefined4 DAT_00358b1c;
extern undefined4 *DAT_00358b20;
extern undefined4 DAT_00358b24;
extern undefined4 DAT_00358b28;
extern int DAT_00358b2c;
extern undefined *PTR_00358f6c;
extern undefined *PTR_00358f70;
extern undefined *PTR_00358f74;
extern undefined *PTR_00358f78;
extern char s_cState_Die_00358f58[];
extern char s_cState_Launched_00358b38[];
extern char s_cState_Move_00358b50[];
extern char s_cState_Reaction_00358f48[];

// USA 00358760 <- EU 0035873C (Ghidra, non-matching)
// GLOBAL DAT_00358b08 uint *
// GLOBAL DAT_00358b0c int
// GLOBAL DAT_00358b10 int
// GLOBAL DAT_00358b14 undefined4
// GLOBAL DAT_00358b18 uint
// GLOBAL DAT_00358b1c undefined4
// GLOBAL DAT_00358b20 undefined4 *
// GLOBAL DAT_00358b24 undefined4
// GLOBAL DAT_00358b28 undefined4
// GLOBAL DAT_00358b2c int
// GLOBAL EXT_00000004 undefined
// GLOBAL PTR_00358f6c undefined *
// GLOBAL PTR_00358f70 undefined *
// GLOBAL PTR_00358f74 undefined *
// GLOBAL PTR_00358f78 undefined *
// GLOBAL UNK_00358b30 undefined *
// GLOBAL UNK_00358b34 int
// GLOBAL UNK_00358b48 int
// GLOBAL UNK_00358b4c undefined4 *
// GLOBAL UNK_00358f64 float
// GLOBAL UNK_00358f68 float
// GLOBAL s_cState_Die_00358f58 string
// GLOBAL s_cState_Launched_00358b38 string
// GLOBAL s_cState_Move_00358b50 string
// GLOBAL s_cState_Reaction_00358f48 string

undefined4 * func_00358760(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  float *pfVar13;
  undefined4 *puVar14;
  uint uVar15;
  uint *puVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  ulonglong uVar20;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define iStack_48 (*(int *)(albw_frame + 0x8))
  #define puStack_44 (*(uint * *)(albw_frame + 0xc))
  #define puStack_2c (*(undefined4 * *)(albw_frame + 0x24))
  #define local_28 (*(uint * *)(albw_frame + 0x28))
  puStack_2c = param_1;
  local_28 = param_2;
  piVar3 = func_004FD464(param_1,param_2,DAT_00358b08);
  iVar9 = DAT_00358b0c;
  *piVar3 = DAT_00358b0c;
  piVar3[200] = iVar9 + 0x84;
  puVar4 = func_0010A794(piVar3 + 0x22f);
  iVar9 = DAT_00358b10;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  uVar5 = *(undefined4 *)(iVar9 + 4);
  uVar10 = *(undefined4 *)(iVar9 + 8);
  puVar4[10] = puVar4 + -0x22f;
  uVar12 = DAT_00358b14;
  puVar4[0xb] = uVar5;
  puVar4[0xc] = uVar10;
  puVar14 = puVar4 + -0x22f;
  puVar4[9] = uVar12;
  uVar5 = *(undefined4 *)(iVar9 + 0x10);
  puVar4[0xf] = *(undefined4 *)(iVar9 + 0xc);
  puVar4[0x10] = uVar5;
  puVar4[0xd] = uVar12;
  puVar4[0xe] = puVar14;
  uVar15 = DAT_00358b18;
  uVar20 = (ulonglong)DAT_00358b18;
  puVar4[0x11] = DAT_00358b18;
  puVar4[0x12] = uVar15;
  puVar4[0x13] = uVar15;
  puVar4[0x14] = uVar15;
  puVar4[0x15] = uVar15;
  uVar12 = DAT_00358b1c;
  puVar4[0x16] = 0;
  puVar4[0x17] = 0;
  puVar4[0x18] = uVar12;
  puVar4[0x19] = 0;
  puVar4[0x1a] = 0;
  puVar4[0x1b] = uVar12;
  puVar4[0x1c] = uVar15;
  puVar4[0x1d] = uVar15;
  puVar7 = DAT_00358b20;
  puVar4[0x1e] = 0;
  uVar12 = DAT_00358b24;
  uVar5 = puVar7[1];
  uVar10 = puVar7[2];
  puVar4[0x1f] = *puVar7;
  puVar4[0x20] = uVar5;
  puVar4[0x21] = uVar10;
  puVar4[0x22] = uVar12;
  puVar4[0x23] = uVar12;
  puVar4[0x24] = uVar12;
  uVar12 = DAT_00358b28;
  puVar4[0x25] = DAT_00358b28;
  puVar4[0x26] = uVar12;
  puVar4[0x27] = uVar12;
  uVar12 = *puVar7;
  uVar5 = puVar7[1];
  puVar4[0x2a] = puVar7[2];
  puVar4[0x28] = uVar12;
  puVar4[0x29] = uVar5;
  *(undefined1 *)(puVar4 + 0x2b) = 0;
  *(undefined1 *)((int)puVar4 + 0xad) = 0;
  puVar4[-0x134] = puVar4 + 0xd;
  func_004FB344((int)puVar14,4);
  iVar6 = DAT_00358b2c;
  uVar15 = 0;
  do {
    func_004FACA4((int)puVar14,uVar15,(int *)(iVar6 + uVar15 * 8));
    fVar17 = ALBW_AS_F32(uVar20);
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 4);
  func_004FB468((int)puVar14);
  func_004FABDC((int)puVar14,0,0xffffffff,0);
  func_004FB4E0((int)puVar14,fVar17);
  puVar4[5] = puVar14;
  *(undefined1 *)((int)puVar4 + 6) = 4;
  iVar6 = func_0010BA78(0x40);
  puVar4[6] = iVar6;
  puVar4[7] = iVar6 + (uint)*(byte *)((int)puVar4 + 6) * 8;
  iVar11 = 4;
  puVar7 = (undefined4 *)(iVar6 + -8);
  do {
    uVar12 = *(undefined4 *)(iVar9 + 0x60);
    iVar11 = iVar11 + -1;
    puVar7[2] = *(undefined4 *)(iVar9 + 0x5c);
    puVar7[3] = uVar12;
    uVar12 = *(undefined4 *)(iVar9 + 0x60);
    puVar7[4] = *(undefined4 *)(iVar9 + 0x5c);
    puVar7[5] = uVar12;
    puVar7 = puVar7 + 4;
  } while (iVar11 != 0);
  bVar1 = *(byte *)((int)puVar4 + 6);
  uVar15 = (uint)bVar1;
  puVar7 = (undefined4 *)func_0010BA78(uVar15 << 3);
  puVar4[8] = puVar7;
  if (uVar15 != 0) {
    puVar8 = puVar7 + -2;
    if ((bVar1 & 1) != 0) {
      uVar12 = *(undefined4 *)(iVar9 + 0x28);
      *puVar7 = *(undefined4 *)(iVar9 + 0x24);
      puVar7[1] = uVar12;
      puVar8 = puVar7;
    }
    for (iVar6 = (int)uVar15 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      uVar12 = *(undefined4 *)(iVar9 + 0x28);
      puVar8[2] = *(undefined4 *)(iVar9 + 0x24);
      puVar8[3] = uVar12;
      uVar12 = *(undefined4 *)(iVar9 + 0x28);
      puVar8[4] = *(undefined4 *)(iVar9 + 0x24);
      puVar8[5] = uVar12;
      puVar8 = puVar8 + 4;
    }
  }
  pfVar13 = (float *)0x0;
  puVar7 = (undefined4 *)func_0010CEE0(0x98,(int *)0x0,4);
  puVar2 = puRam00358b30;
  iVar9 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    puVar7[1] = 4;
    pfVar13 = (float *)&UndefinedInstruction;
    *puVar7 = 0x24;
    iVar9 = func_00100118((int)(puVar7 + 2),puVar2,0x24,4);
  }
  if (iVar9 != 0) {
    puVar4[3] = iVar9;
    puVar4[2] = 4;
  }
  iVar9 = iRam00358b34;
  puVar4[-0x15a] = puVar4;
  iVar6 = iRam00358b48;
  *(undefined2 *)(iVar9 + (int)puVar14) = 4;
  puStack_44 = (uint *)s_cState_Launched_00358b38;
  iStack_48 = iVar6;
  iVar9 = puVar4[3];
  puVar16 = *(uint **)(iVar9 + 4);
  (**(code **)(iVar6 + 8))(&iStack_48);
  uVar15 = 0;
  do {
    if (*(char *)((int)puStack_44 + uVar15) == '\0') {
      if ((int)uVar15 < 0x40001) goto LAB_00358a5c;
      break;
    }
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 0x40001);
  uVar15 = 0;
LAB_00358a5c:
  iVar9 = *(int *)(iVar9 + 8);
  if (iVar9 <= (int)uVar15) {
    uVar15 = iVar9 - 1;
  }
  (**(code **)(iStack_48 + 8))(&iStack_48);
  func_0010E3C4(puVar16,puStack_44,uVar15);
  *(undefined1 *)((int)puVar16 + uVar15) = 0;
  puVar7 = (undefined4 *)puVar4[6];
  uVar12 = puRam00358b4c[1];
  uVar5 = puRam00358b4c[2];
  uVar10 = puRam00358b4c[3];
  uVar18 = puRam00358b4c[4];
  uVar19 = puRam00358b4c[5];
  *puVar7 = *puRam00358b4c;
  puVar7[1] = uVar12;
  puVar7 = (undefined4 *)puVar4[7];
  *puVar7 = uVar5;
  puVar7[1] = uVar10;
  puVar7 = (undefined4 *)puVar4[8];
  *puVar7 = uVar18;
  puVar7[1] = uVar19;
  puStack_44 = (uint *)s_cState_Move_00358b50;
  iStack_48 = iVar6;
  if ((uint)puVar4[2] < 2) {
    iVar9 = puVar4[3];
  }
  else {
    iVar9 = puVar4[3] + 0x24;
  }
  puVar16 = *(uint **)(iVar9 + 4);
  (**(code **)(iVar6 + 8))(&iStack_48);
  uVar15 = 0;
  do {
    if (*(char *)((int)puStack_44 + uVar15) == '\0') {
      if ((int)uVar15 < 0x40001) goto LAB_00358b68;
      break;
    }
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 0x40001);
  uVar15 = 0;
LAB_00358b68:
  if (*(int *)(iVar9 + 8) <= (int)uVar15) {
    uVar15 = *(int *)(iVar9 + 8) - 1;
  }
  (**(code **)(iStack_48 + 8))(&iStack_48);
  func_0010E3C4(puVar16,puStack_44,uVar15);
  iVar9 = DAT_00358b10;
  *(undefined1 *)((int)puVar16 + uVar15) = 0;
  iVar11 = puVar4[6];
  uVar12 = *(undefined4 *)(iVar9 + 0x38);
  uVar5 = *(undefined4 *)(iVar9 + 0x34);
  uVar10 = *(undefined4 *)(iVar9 + 0x24);
  uVar19 = *(undefined4 *)(iVar9 + 0x30);
  uVar18 = *(undefined4 *)(iVar9 + 0x28);
  *(undefined4 *)(iVar11 + 8) = *(undefined4 *)(iVar9 + 0x2c);
  *(undefined4 *)(iVar11 + 0xc) = uVar19;
  iVar9 = puVar4[7];
  *(undefined4 *)(iVar9 + 8) = uVar5;
  *(undefined4 *)(iVar9 + 0xc) = uVar12;
  iVar9 = puVar4[8];
  *(undefined4 *)(iVar9 + 8) = uVar10;
  *(undefined4 *)(iVar9 + 0xc) = uVar18;
  puStack_44 = (uint *)s_cState_Reaction_00358f48;
  iStack_48 = iVar6;
  if ((uint)puVar4[2] < 3) {
    iVar9 = puVar4[3];
  }
  else {
    iVar9 = puVar4[3] + 0x48;
  }
  puVar16 = *(uint **)(iVar9 + 4);
  (**(code **)(iVar6 + 8))(&iStack_48);
  uVar15 = 0;
  do {
    if (*(char *)((int)puStack_44 + uVar15) == '\0') {
      if ((int)uVar15 < 0x40001) goto LAB_00358c40;
      break;
    }
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 0x40001);
  uVar15 = 0;
LAB_00358c40:
  if (*(int *)(iVar9 + 8) <= (int)uVar15) {
    uVar15 = *(int *)(iVar9 + 8) - 1;
  }
  (**(code **)(iStack_48 + 8))(&iStack_48);
  func_0010E3C4(puVar16,puStack_44,uVar15);
  *(undefined1 *)((int)puVar16 + uVar15) = 0;
  iVar9 = DAT_00358b10;
  iVar11 = puVar4[6];
  uVar12 = *(undefined4 *)(DAT_00358b10 + 0x44);
  uVar5 = *(undefined4 *)(DAT_00358b10 + 0x24);
  uVar10 = *(undefined4 *)(DAT_00358b10 + 0x40);
  uVar18 = *(undefined4 *)(DAT_00358b10 + 0x48);
  uVar19 = *(undefined4 *)(DAT_00358b10 + 0x28);
  *(undefined4 *)(iVar11 + 0x10) = *(undefined4 *)(DAT_00358b10 + 0x3c);
  *(undefined4 *)(iVar11 + 0x14) = uVar10;
  iVar11 = puVar4[7];
  *(undefined4 *)(iVar11 + 0x10) = uVar12;
  *(undefined4 *)(iVar11 + 0x14) = uVar18;
  iVar11 = puVar4[8];
  *(undefined4 *)(iVar11 + 0x10) = uVar5;
  *(undefined4 *)(iVar11 + 0x14) = uVar19;
  puStack_44 = (uint *)s_cState_Die_00358f58;
  iStack_48 = iVar6;
  if ((uint)puVar4[2] < 4) {
    iVar11 = puVar4[3];
  }
  else {
    iVar11 = puVar4[3] + 0x6c;
  }
  puVar16 = *(uint **)(iVar11 + 4);
  (**(code **)(iVar6 + 8))(&iStack_48);
  uVar15 = 0;
  do {
    if (*(char *)((int)puStack_44 + uVar15) == '\0') {
      if ((int)uVar15 < 0x40001) goto LAB_00358d18;
      break;
    }
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 0x40001);
  uVar15 = 0;
LAB_00358d18:
  if (*(int *)(iVar11 + 8) <= (int)uVar15) {
    uVar15 = *(int *)(iVar11 + 8) - 1;
  }
  (**(code **)(iStack_48 + 8))(&iStack_48);
  func_0010E3C4(puVar16,puStack_44,uVar15);
  *(undefined1 *)((int)puVar16 + uVar15) = 0;
  iVar6 = puVar4[6];
  uVar12 = *(undefined4 *)(iVar9 + 0x54);
  uVar5 = *(undefined4 *)(iVar9 + 0x24);
  uVar10 = *(undefined4 *)(iVar9 + 0x50);
  uVar19 = *(undefined4 *)(iVar9 + 0x58);
  uVar18 = *(undefined4 *)(iVar9 + 0x28);
  *(undefined4 *)(iVar6 + 0x18) = *(undefined4 *)(iVar9 + 0x4c);
  *(undefined4 *)(iVar6 + 0x1c) = uVar10;
  iVar9 = puVar4[7];
  *(undefined4 *)(iVar9 + 0x18) = uVar12;
  *(undefined4 *)(iVar9 + 0x1c) = uVar19;
  iVar9 = puVar4[8];
  *(undefined4 *)(iVar9 + 0x18) = uVar5;
  *(undefined4 *)(iVar9 + 0x1c) = uVar18;
  func_0066645C(puVar4,0);
  func_004F5BD8((int)puVar14,(uint *)0x0,(int **)0x0,pfVar13);
  puVar4[-200] = puVar4[-200] & 0xffff7fff;
  puVar4[-0x11f] = puVar4 + 9;
  func_004F87F8((int)puVar14,1);
  *(undefined1 *)((int)puVar4 + -0x13f) = 3;
  *(undefined1 *)((int)puVar4 + -0x13e) = 0xff;
  *(undefined1 *)((int)puVar4 + -0x13d) = 1;
  func_004FC218((int)puVar14,'\x02',-1,0x7fff);
  func_004FBA18((int)puVar14,2,0xff,-1,-1,0,0x7fff,fRam00358f64,fRam00358f64);
  uVar12 = DAT_00358b20[2];
  fVar17 = ALBW_AS_F32(DAT_00358b20[1]) + fRam00358f68;
  puVar4[-0xd3] = *DAT_00358b20;
  puVar4[-0xd2] = ALBW_AS_U32(fVar17);
  puVar4[-0xd1] = uVar12;
  puVar7 = (undefined4 *)func_0052FBA0(*(int *)PTR_00358f6c + 0x3dbbc,local_28[0x13]);
  if (puVar7 == (undefined4 *)0x0) {
    *(undefined1 *)((int)puVar4 + -0x5e5) = 1;
  }
  else {
    if (((*(uint *)PTR_00358f70 & 1) == 0) &&
       (iVar9 = func_00100174((int *)PTR_00358f70), iVar9 != 0)) {
      *(undefined **)PTR_00358f74 = PTR_00358f78;
    }
    iVar9 = (**(code **)*puVar7)(puVar7,PTR_00358f74);
    if (iVar9 == 0) {
      puVar7 = (undefined4 *)0x0;
    }
    puVar4[0x1d] = puVar7[0x295];
    puVar4[0x22] = puVar7[0x2a3];
    puVar4[0x23] = puVar7[0x2a4];
    puVar4[0x24] = puVar7[0x2a5];
    puVar4[0x25] = puVar7[0x2a6];
    puVar4[0x26] = puVar7[0x2a7];
    puVar4[0x27] = puVar7[0x2a8];
    uVar15 = puVar7[0x280];
    iVar9 = *(int *)(uVar15 + 0x28);
    if (iVar9 != 0) {
      uVar15 = *(uint *)(uVar15 + 0x20);
    }
    if (iVar9 != 0 && 4 < uVar15) {
      iVar9 = *(int *)(iVar9 + 0x10);
    }
    else {
      iVar9 = 0;
    }
    uVar12 = *(undefined4 *)(iVar9 + 0x18);
    uVar5 = *(undefined4 *)(iVar9 + 0x1c);
    puVar4[0x2a] = *(undefined4 *)(iVar9 + 0x20);
    puVar4[0x28] = uVar12;
    puVar4[0x29] = uVar5;
  }
  return puVar14;
}

