#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00111A64(uint *param_1);
extern int func_002AED68(int param_1,undefined2 param_2);
extern int func_002AF5FC(int param_1,undefined2 param_2,int param_3);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004FACA4(int param_1,uint param_2,int *param_3);
extern int func_004FB344(int param_1,int param_2);
extern int func_004FB468(int param_1);
extern int func_004FBA18(int param_1,undefined1 param_2,undefined1 param_3,int param_4,int param_5, undefined1 param_6,ushort param_7,float fparam_0,float fparam_1);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern int func_0058A7D4(void);
extern int func_0066085C(undefined4 *param_1,undefined1 param_2);
extern uint *DAT_0026cc2c;
extern int DAT_0026cc30;
extern int DAT_0026cc34;
extern undefined4 DAT_0026cc38;
extern undefined4 DAT_0026cc3c;
extern undefined4 DAT_0026cc40;
extern float DAT_0026cc44;
extern undefined4 DAT_0026cc48;
extern float DAT_0026cc4c;
extern float DAT_0026cc50;
extern float DAT_0026cc54;
extern int DAT_0026cc58;
extern undefined4 DAT_0026cc5c;
extern undefined *DAT_0026cc60;
extern int DAT_0026cc64;
extern int DAT_0026cc74;
extern undefined4 *DAT_0026cc78;
extern float DAT_0026ce6c;
extern char s_cState_Die_0026ce60[];
extern char s_cState_Move_0026cc68[];
extern char s_cState_Reaction_0026cc7c[];

// USA 0026C850 <- EU 0026C878 (Ghidra, non-matching)
// GLOBAL DAT_0026cc2c uint *
// GLOBAL DAT_0026cc30 int
// GLOBAL DAT_0026cc34 int
// GLOBAL DAT_0026cc38 undefined4
// GLOBAL DAT_0026cc3c undefined4
// GLOBAL DAT_0026cc40 undefined4
// GLOBAL DAT_0026cc44 float
// GLOBAL DAT_0026cc48 undefined4
// GLOBAL DAT_0026cc4c float
// GLOBAL DAT_0026cc50 float
// GLOBAL DAT_0026cc54 float
// GLOBAL DAT_0026cc58 int
// GLOBAL DAT_0026cc5c undefined4
// GLOBAL DAT_0026cc60 undefined *
// GLOBAL DAT_0026cc64 int
// GLOBAL DAT_0026cc74 int
// GLOBAL DAT_0026cc78 undefined4 *
// GLOBAL DAT_0026ce6c float
// GLOBAL s_cState_Die_0026ce60 string
// GLOBAL s_cState_Move_0026cc68 string
// GLOBAL s_cState_Reaction_0026cc7c string

undefined4 * func_0026C850(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float *pfVar13;
  undefined4 *puVar14;
  uint in_fpscr;
  float fVar15;
  int iVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar20;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(uint * *)(albw_frame + 0xc))
  piVar3 = func_004FD464(param_1,param_2,DAT_0026cc2c);
  iVar9 = DAT_0026cc30;
  *piVar3 = DAT_0026cc30;
  piVar3[200] = iVar9 + 0x84;
  puVar4 = func_0010A794(piVar3 + 0x22f);
  puVar4[5] = 0;
  iVar9 = DAT_0026cc34;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  uVar11 = *(undefined4 *)(iVar9 + 8);
  pfVar13 = *(float **)(iVar9 + 0xc);
  puVar4[10] = puVar4 + -0x22f;
  puVar4[0xb] = uVar11;
  puVar4[0xc] = pfVar13;
  uVar12 = DAT_0026cc48;
  uVar11 = DAT_0026cc40;
  puVar4[9] = DAT_0026cc38;
  fVar20 = DAT_0026cc44;
  puVar4[0xe] = DAT_0026cc3c;
  puVar4[0xf] = uVar11;
  puVar4[0xd] = 0;
  *(undefined2 *)(puVar4 + 0x10) = 0;
  puVar4[0x11] = 0;
  puVar14 = puVar4 + -0x22f;
  puVar4[0x12] = 0;
  puVar4[0x13] = uVar12;
  *(undefined1 *)(puVar4 + 0x14) = 0;
  puVar5 = (uint *)func_0058A7D4();
  uVar6 = func_00111A64(puVar5);
  puVar4[0x11] = (int)((ulonglong)uVar6 * 4 >> 0x20) << 0x1e;
  puVar5 = (uint *)func_0058A7D4();
  uVar6 = func_00111A64(puVar5);
  fVar15 = (float)VectorUnsignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
  iVar16 = VectorFloatToUnsigned(DAT_0026cc54 + fVar15 * DAT_0026cc4c * fVar20 * DAT_0026cc50,3);
  puVar4[0xe] = iVar16;
  if (iVar16 == 0) {
    puVar4[0xf] = uVar12;
  }
  else {
    fVar15 = (float)VectorUnsignedToFloat(iVar16,(byte)(in_fpscr >> 0x15) & 3);
    puVar4[0xf] = ALBW_AS_U32(fVar20 / fVar15);
  }
  puVar4[0xd] = 0;
  func_004FB344((int)puVar14,7);
  iVar16 = DAT_0026cc58;
  uVar6 = 0;
  do {
    func_004FACA4((int)puVar14,uVar6,(int *)(iVar16 + uVar6 * 8));
    uVar6 = uVar6 + 1;
  } while ((int)uVar6 < 7);
  func_004FB468((int)puVar14);
  puVar4[-0xef] = DAT_0026cc5c;
  func_004F5BD8((int)puVar14,(uint *)0x0,(int **)0x0,pfVar13);
  uVar11 = *(undefined4 *)(iVar9 + 0x14);
  uVar12 = *(undefined4 *)(iVar9 + 0x10);
  puVar4[10] = puVar14;
  puVar4[-0x134] = puVar4 + 9;
  puVar4[0xc] = uVar11;
  puVar4[0xb] = uVar12;
  *(undefined1 *)((int)puVar4 + 6) = 3;
  puVar4[5] = puVar14;
  iVar16 = func_0010BA78(0x30);
  puVar4[6] = iVar16;
  puVar4[7] = iVar16 + (uint)*(byte *)((int)puVar4 + 6) * 8;
  iVar10 = 3;
  puVar7 = (undefined4 *)(iVar16 + -8);
  do {
    uVar11 = *(undefined4 *)(iVar9 + 0x54);
    iVar10 = iVar10 + -1;
    puVar7[2] = *(undefined4 *)(iVar9 + 0x50);
    puVar7[3] = uVar11;
    uVar11 = *(undefined4 *)(iVar9 + 0x54);
    puVar7[4] = *(undefined4 *)(iVar9 + 0x50);
    puVar7[5] = uVar11;
    puVar7 = puVar7 + 4;
  } while (iVar10 != 0);
  bVar1 = *(byte *)((int)puVar4 + 6);
  uVar6 = (uint)bVar1;
  puVar7 = (undefined4 *)func_0010BA78(uVar6 << 3);
  puVar4[8] = puVar7;
  if (uVar6 != 0) {
    puVar8 = puVar7 + -2;
    if ((bVar1 & 1) != 0) {
      uVar11 = *(undefined4 *)(iVar9 + 0x2c);
      *puVar7 = *(undefined4 *)(iVar9 + 0x28);
      puVar7[1] = uVar11;
      puVar8 = puVar7;
    }
    for (iVar16 = (int)uVar6 >> 1; iVar16 != 0; iVar16 = iVar16 + -1) {
      uVar11 = *(undefined4 *)(iVar9 + 0x2c);
      puVar8[2] = *(undefined4 *)(iVar9 + 0x28);
      puVar8[3] = uVar11;
      uVar11 = *(undefined4 *)(iVar9 + 0x2c);
      puVar8[4] = *(undefined4 *)(iVar9 + 0x28);
      puVar8[5] = uVar11;
      puVar8 = puVar8 + 4;
    }
  }
  puVar7 = (undefined4 *)func_0010CEE0(0x74,(int *)0x0,4);
  puVar2 = DAT_0026cc60;
  iVar9 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    puVar7[1] = 3;
    *puVar7 = 0x24;
    iVar9 = func_00100118((int)(puVar7 + 2),puVar2,0x24,3);
  }
  if (iVar9 != 0) {
    puVar4[3] = iVar9;
    puVar4[2] = 3;
  }
  iVar9 = DAT_0026cc64;
  puVar4[-0x15a] = puVar4;
  iVar16 = DAT_0026cc74;
  *(undefined2 *)(iVar9 + (int)puVar14) = 3;
  local_34 = (uint *)s_cState_Move_0026cc68;
  local_38 = iVar16;
  iVar9 = puVar4[3];
  puVar5 = *(uint **)(iVar9 + 4);
  (**(code **)(iVar16 + 8))(&local_38);
  uVar6 = 0;
  do {
    if (*(char *)((int)local_34 + uVar6) == '\0') {
      if ((int)uVar6 < 0x40001) goto LAB_0026cb80;
      break;
    }
    uVar6 = uVar6 + 1;
  } while ((int)uVar6 < 0x40001);
  uVar6 = 0;
LAB_0026cb80:
  iVar9 = *(int *)(iVar9 + 8);
  if (iVar9 <= (int)uVar6) {
    uVar6 = iVar9 - 1;
  }
  (**(code **)(local_38 + 8))(&local_38);
  func_0010E3C4(puVar5,local_34,uVar6);
  *(undefined1 *)((int)puVar5 + uVar6) = 0;
  puVar7 = (undefined4 *)puVar4[6];
  uVar11 = DAT_0026cc78[1];
  uVar12 = DAT_0026cc78[2];
  uVar17 = DAT_0026cc78[3];
  uVar18 = DAT_0026cc78[4];
  uVar19 = DAT_0026cc78[5];
  *puVar7 = *DAT_0026cc78;
  puVar7[1] = uVar11;
  puVar7 = (undefined4 *)puVar4[7];
  *puVar7 = uVar12;
  puVar7[1] = uVar17;
  puVar7 = (undefined4 *)puVar4[8];
  *puVar7 = uVar18;
  puVar7[1] = uVar19;
  local_34 = (uint *)s_cState_Reaction_0026cc7c;
  local_38 = iVar16;
  if ((uint)puVar4[2] < 2) {
    iVar9 = puVar4[3];
  }
  else {
    iVar9 = puVar4[3] + 0x24;
  }
  puVar5 = *(uint **)(iVar9 + 4);
  (**(code **)(iVar16 + 8))(&local_38);
  uVar6 = 0;
  do {
    if (*(char *)((int)local_34 + uVar6) == '\0') {
      if ((int)uVar6 < 0x40001) goto LAB_0026cc98;
      break;
    }
    uVar6 = uVar6 + 1;
  } while ((int)uVar6 < 0x40001);
  uVar6 = 0;
LAB_0026cc98:
  if (*(int *)(iVar9 + 8) <= (int)uVar6) {
    uVar6 = *(int *)(iVar9 + 8) - 1;
  }
  (**(code **)(local_38 + 8))(&local_38);
  func_0010E3C4(puVar5,local_34,uVar6);
  iVar9 = DAT_0026cc34;
  *(undefined1 *)((int)puVar5 + uVar6) = 0;
  iVar10 = puVar4[6];
  uVar12 = *(undefined4 *)(iVar9 + 0x28);
  uVar17 = *(undefined4 *)(iVar9 + 0x38);
  uVar18 = *(undefined4 *)(iVar9 + 0x34);
  uVar19 = *(undefined4 *)(iVar9 + 0x3c);
  uVar11 = *(undefined4 *)(iVar9 + 0x2c);
  *(undefined4 *)(iVar10 + 8) = *(undefined4 *)(iVar9 + 0x30);
  *(undefined4 *)(iVar10 + 0xc) = uVar18;
  iVar9 = puVar4[7];
  *(undefined4 *)(iVar9 + 8) = uVar17;
  *(undefined4 *)(iVar9 + 0xc) = uVar19;
  iVar9 = puVar4[8];
  *(undefined4 *)(iVar9 + 8) = uVar12;
  *(undefined4 *)(iVar9 + 0xc) = uVar11;
  local_34 = (uint *)s_cState_Die_0026ce60;
  local_38 = iVar16;
  if ((uint)puVar4[2] < 3) {
    iVar9 = puVar4[3];
  }
  else {
    iVar9 = puVar4[3] + 0x48;
  }
  puVar5 = *(uint **)(iVar9 + 4);
  (**(code **)(iVar16 + 8))(&local_38);
  uVar6 = 0;
  do {
    if (*(char *)((int)local_34 + uVar6) == '\0') {
      if ((int)uVar6 < 0x40001) goto LAB_0026cd70;
      break;
    }
    uVar6 = uVar6 + 1;
  } while ((int)uVar6 < 0x40001);
  uVar6 = 0;
LAB_0026cd70:
  if (*(int *)(iVar9 + 8) <= (int)uVar6) {
    uVar6 = *(int *)(iVar9 + 8) - 1;
  }
  (**(code **)(local_38 + 8))(&local_38);
  func_0010E3C4(puVar5,local_34,uVar6);
  iVar9 = DAT_0026cc34;
  *(undefined1 *)((int)puVar5 + uVar6) = 0;
  iVar16 = puVar4[6];
  uVar12 = *(undefined4 *)(iVar9 + 0x4c);
  uVar17 = *(undefined4 *)(iVar9 + 0x48);
  uVar18 = *(undefined4 *)(iVar9 + 0x28);
  uVar19 = *(undefined4 *)(iVar9 + 0x44);
  uVar11 = *(undefined4 *)(iVar9 + 0x2c);
  *(undefined4 *)(iVar16 + 0x10) = *(undefined4 *)(iVar9 + 0x40);
  *(undefined4 *)(iVar16 + 0x14) = uVar19;
  iVar9 = puVar4[7];
  *(undefined4 *)(iVar9 + 0x10) = uVar17;
  *(undefined4 *)(iVar9 + 0x14) = uVar12;
  iVar9 = puVar4[8];
  *(undefined4 *)(iVar9 + 0x10) = uVar18;
  *(undefined4 *)(iVar9 + 0x14) = uVar11;
  func_0066085C(puVar4,0);
  *(undefined1 *)((int)puVar4 + -0x13f) = 5;
  fVar20 = DAT_0026ce6c;
  *(undefined1 *)((int)puVar4 + -0x13e) = 0xff;
  *(undefined1 *)((int)puVar4 + -0x13d) = 0;
  func_004FBA18((int)puVar14,6,0xff,0,-1,0,0x7fff,fVar20,fVar20);
  puVar4[-200] = puVar4[-200] | 0x8800;
  func_002AF5FC((int)puVar14,4,-1);
  func_002AED68((int)puVar14,4);
  return puVar14;
}

