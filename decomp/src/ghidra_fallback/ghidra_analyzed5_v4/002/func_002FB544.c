#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0014DF18(int param_1,undefined4 param_2,int param_3,uint param_4,undefined1 param_5, undefined1 param_6);
extern int func_0014E4B0(int param_1,uint param_2);
extern int func_0019B04C(uint param_1);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004F87F8(int param_1,int param_2);
extern int func_004FD038(int param_1,undefined1 param_2);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern int func_005330BC(int param_1,int *param_2);
extern int func_00664374(undefined4 *param_1,undefined1 param_2);
extern uint *DAT_002fb8d8;
extern int DAT_002fb8dc;
extern int DAT_002fb8e0;
extern undefined4 DAT_002fb8e4;
extern undefined4 DAT_002fb8e8;
extern uint *DAT_002fb8ec;
extern int DAT_002fb900;
extern float DAT_002fb904;
extern undefined4 DAT_002fb908;
extern int DAT_002fb90c;
extern undefined4 *DAT_002fb910;
extern undefined *DAT_002fb914;
extern int DAT_002fb918;
extern undefined4 DAT_002fb940;
extern char s_Stalfos_bone_002fb8f0[];
extern char s_cState_Die_002fb934[];
extern char s_cState_Free_002fb928[];
extern char s_cState_Move_002fb91c[];

// USA 002FB544 <- EU 002FB520 (Ghidra, non-matching)
// GLOBAL DAT_002fb8d8 uint *
// GLOBAL DAT_002fb8dc int
// GLOBAL DAT_002fb8e0 int
// GLOBAL DAT_002fb8e4 undefined4
// GLOBAL DAT_002fb8e8 undefined4
// GLOBAL DAT_002fb8ec uint *
// GLOBAL DAT_002fb900 int
// GLOBAL DAT_002fb904 float
// GLOBAL DAT_002fb908 undefined4
// GLOBAL DAT_002fb90c int
// GLOBAL DAT_002fb910 undefined4 *
// GLOBAL DAT_002fb914 undefined *
// GLOBAL DAT_002fb918 int
// GLOBAL DAT_002fb940 undefined4
// GLOBAL s_Stalfos_bone_002fb8f0 string
// GLOBAL s_cState_Die_002fb934 string
// GLOBAL s_cState_Free_002fb928 string
// GLOBAL s_cState_Move_002fb91c string

undefined4 * func_002FB544(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  uint *puVar2;
  float fparam_0;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  int iVar16;
  undefined4 uVar17;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(char * *)(albw_frame + 0xc))
  piVar3 = func_004FD464(param_1,param_2,DAT_002fb8d8);
  iVar16 = DAT_002fb8dc;
  *piVar3 = DAT_002fb8dc;
  piVar3[200] = iVar16 + 0x84;
  puVar4 = func_0010A794(piVar3 + 0x22f);
  iVar16 = DAT_002fb8e0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  uVar12 = *(undefined4 *)(iVar16 + 0xe8);
  puVar4[0xc] = *(undefined4 *)(iVar16 + 0xec);
  puVar4[10] = puVar4 + -0x22f;
  puVar4[0xb] = uVar12;
  uVar11 = DAT_002fb8e8;
  uVar12 = DAT_002fb8e4;
  puVar14 = puVar4 + -0x22f;
  puVar4[9] = DAT_002fb8e4;
  uVar13 = *(undefined4 *)(iVar16 + 0xf0);
  puVar4[0x10] = *(undefined4 *)(iVar16 + 0xf4);
  puVar4[0xf] = uVar13;
  puVar4[0xd] = uVar12;
  puVar4[0xe] = puVar14;
  puVar2 = DAT_002fb8ec;
  puVar4[0x14] = uVar11;
  *(undefined1 *)(puVar4 + 0x15) = 0;
  iVar5 = func_0019B04C(*puVar2);
  iVar16 = DAT_002fb900;
  puVar4[-0xf7] = *(undefined4 *)(iVar5 + 0x1c8);
  local_34 = s_Stalfos_bone_002fb8f0;
  local_38 = iVar16;
  uVar6 = func_005330BC(puVar4[-0xf7],&local_38);
  piVar3 = func_0014DF18(iVar5,0,0,uVar6,0,0);
  puVar4[-300] = piVar3;
  puVar4[-0x15c] = piVar3;
  fparam_0 = DAT_002fb904;
  puVar4[-200] = puVar4[-200] | 0x400;
  puVar4[-0x134] = puVar4 + 9;
  *(undefined4 **)(puVar4[-0x127] + 0x1c) = puVar4 + 0xd;
  *(undefined1 *)(puVar4[-0x127] + 0x21) = 0;
  iVar5 = puVar4[-0x127];
  func_004D80A4((float *)(iVar5 + 0x24),param_2[8],fparam_0);
  uVar12 = DAT_002fb908;
  *(undefined4 *)(iVar5 + 0x28) = uVar11;
  puVar4[-0xcc] = uVar12;
  *(undefined1 *)((int)puVar4 + 6) = 3;
  puVar4[5] = puVar14;
  iVar7 = func_0010BA78(0x30);
  puVar4[6] = iVar7;
  iVar5 = DAT_002fb90c;
  puVar4[7] = iVar7 + (uint)*(byte *)((int)puVar4 + 6) * 8;
  iVar10 = 3;
  puVar8 = (undefined4 *)(iVar7 + -8);
  do {
    uVar12 = *(undefined4 *)(DAT_002fb8e0 + 0x13c);
    iVar10 = iVar10 + -1;
    puVar8[2] = *(undefined4 *)(DAT_002fb8e0 + 0x138);
    puVar8[3] = uVar12;
    uVar12 = *(undefined4 *)(iVar5 + 0x3c);
    puVar8[4] = *(undefined4 *)(iVar5 + 0x38);
    puVar8[5] = uVar12;
    puVar8 = puVar8 + 4;
  } while (iVar10 != 0);
  bVar1 = *(byte *)((int)puVar4 + 6);
  uVar6 = (uint)bVar1;
  puVar8 = (undefined4 *)func_0010BA78(uVar6 << 3);
  puVar4[8] = puVar8;
  if (uVar6 != 0) {
    puVar9 = puVar8 + -2;
    if ((bVar1 & 1) != 0) {
      uVar12 = DAT_002fb910[1];
      *puVar8 = *DAT_002fb910;
      puVar8[1] = uVar12;
      puVar9 = puVar8;
    }
    for (iVar7 = (int)uVar6 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
      uVar12 = *(undefined4 *)(DAT_002fb8e0 + 0x10c);
      puVar9[2] = *(undefined4 *)(DAT_002fb8e0 + 0x108);
      puVar9[3] = uVar12;
      uVar12 = *(undefined4 *)(iVar5 + 0xc);
      puVar9[4] = *(undefined4 *)(iVar5 + 8);
      puVar9[5] = uVar12;
      puVar9 = puVar9 + 4;
    }
  }
  puVar8 = (undefined4 *)func_0010CEE0(0x74,(int *)0x0,4);
  iVar7 = 0;
  if (puVar8 != (undefined4 *)0x0) {
    *puVar8 = 0x24;
    puVar8[1] = 3;
    iVar7 = func_00100118((int)(puVar8 + 2),DAT_002fb914,0x24,3);
  }
  if (iVar7 != 0) {
    puVar4[3] = iVar7;
    puVar4[2] = 3;
  }
  iVar7 = DAT_002fb918;
  puVar4[-0x15a] = puVar4;
  *(undefined2 *)(iVar7 + (int)puVar14) = 3;
  local_34 = s_cState_Move_002fb91c;
  local_38 = iVar16;
  func_0010BEC4((int)puVar4,0,&local_38);
  puVar8 = (undefined4 *)puVar4[6];
  uVar15 = *(undefined4 *)(DAT_002fb8e0 + 0xfc);
  uVar12 = *(undefined4 *)(DAT_002fb8e0 + 0x100);
  uVar11 = *(undefined4 *)(iVar5 + 8);
  uVar17 = *(undefined4 *)(iVar5 + 0xc);
  uVar13 = *(undefined4 *)(DAT_002fb8e0 + 0x104);
  *puVar8 = *(undefined4 *)(DAT_002fb8e0 + 0xf8);
  puVar8[1] = uVar15;
  puVar8 = (undefined4 *)puVar4[7];
  *puVar8 = uVar12;
  puVar8[1] = uVar13;
  puVar8 = (undefined4 *)puVar4[8];
  *puVar8 = uVar11;
  puVar8[1] = uVar17;
  local_34 = s_cState_Free_002fb928;
  local_38 = iVar16;
  func_0010BEC4((int)puVar4,1,&local_38);
  iVar7 = puVar4[6];
  uVar12 = *(undefined4 *)(iVar5 + 8);
  uVar11 = *(undefined4 *)(iVar5 + 0xc);
  uVar13 = *(undefined4 *)(iVar5 + 0x14);
  uVar15 = *(undefined4 *)(iVar5 + 0x18);
  uVar17 = *(undefined4 *)(iVar5 + 0x1c);
  *(undefined4 *)(iVar7 + 8) = *(undefined4 *)(iVar5 + 0x10);
  *(undefined4 *)(iVar7 + 0xc) = uVar13;
  iVar7 = puVar4[7];
  *(undefined4 *)(iVar7 + 8) = uVar15;
  *(undefined4 *)(iVar7 + 0xc) = uVar17;
  iVar7 = puVar4[8];
  *(undefined4 *)(iVar7 + 8) = uVar12;
  *(undefined4 *)(iVar7 + 0xc) = uVar11;
  local_34 = s_cState_Die_002fb934;
  local_38 = iVar16;
  func_0010BEC4((int)puVar4,2,&local_38);
  iVar16 = puVar4[6];
  uVar12 = *(undefined4 *)(iVar5 + 0x28);
  uVar15 = *(undefined4 *)(iVar5 + 0x2c);
  uVar11 = *(undefined4 *)(iVar5 + 0x24);
  uVar13 = *(undefined4 *)(iVar5 + 0xc);
  uVar17 = *(undefined4 *)(iVar5 + 8);
  *(undefined4 *)(iVar16 + 0x10) = *(undefined4 *)(iVar5 + 0x20);
  *(undefined4 *)(iVar16 + 0x14) = uVar11;
  iVar16 = puVar4[7];
  *(undefined4 *)(iVar16 + 0x10) = uVar12;
  *(undefined4 *)(iVar16 + 0x14) = uVar15;
  iVar16 = puVar4[8];
  *(undefined4 *)(iVar16 + 0x10) = uVar17;
  *(undefined4 *)(iVar16 + 0x14) = uVar13;
  func_0014E4B0((int)puVar14,param_2[8]);
  puVar4[-200] = puVar4[-200] & 0xffffffcb;
  func_004FD038((int)(puVar4 + -0xc5),0);
  func_004F87F8((int)puVar14,2);
  puVar4[-0xce] = DAT_002fb940;
  func_00664374(puVar4,0);
  return puVar14;
}

