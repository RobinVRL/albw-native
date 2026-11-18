#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_002C41BC(int *param_1,undefined4 *param_2,int param_3);
extern int func_003529A0(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
extern int func_00491E80(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_00521028(int param_1);
extern int func_0066184C(undefined4 *param_1,undefined1 param_2);
extern int DAT_002998e4;
extern undefined4 *DAT_002998e8;
extern undefined4 *DAT_002998ec;
extern undefined *DAT_002998f0;
extern int DAT_002998f4;
extern int DAT_00299904;
extern char s_cState_Sparkle_00299908[];
extern char s_cState_Wait_002998f8[];

// USA 0060658C <- EU 00606564 (Ghidra, non-matching)
// GLOBAL DAT_002998e4 int
// GLOBAL DAT_002998e8 undefined4 *
// GLOBAL DAT_002998ec undefined4 *
// GLOBAL DAT_002998f0 undefined *
// GLOBAL DAT_002998f4 int
// GLOBAL DAT_00299904 int
// GLOBAL s_cState_Sparkle_00299908 string
// GLOBAL s_cState_Wait_002998f8 string

int func_0060658C(uint *param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define iStack_58 (*(int *)(albw_frame + 0x8))
  #define puStack_54 (*(uint * *)(albw_frame + 0xc))
  #define auStack_50 ((undefined4 *)(albw_frame + 0x10))
  #define pfStack_48 (*(float * *)(albw_frame + 0x18))
  #define puStack_2c (*(undefined4 * *)(albw_frame + 0x34))
  puVar7 = (undefined4 *)func_0010BAB4(0x470);
  if (puVar7 == (undefined4 *)0x0) {
    return 0;
  }
  piVar2 = func_00150E40(puVar7,param_1);
  iVar4 = DAT_002998e4;
  *piVar2 = DAT_002998e4;
  piVar2[200] = iVar4 + 0x54;
  puVar3 = func_0010A794(piVar2 + 0x103);
  puVar7 = DAT_002998e8;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  uVar9 = puVar7[1];
  uVar13 = puVar7[2];
  puVar3[9] = *puVar7;
  puVar3[10] = uVar9;
  puVar3[0xb] = uVar13;
  puVar10 = puVar3 + -0x103;
  *(undefined1 *)(puVar3 + 0x18) = 0;
  *(undefined1 *)((int)puVar3 + 6) = 2;
  puVar3[5] = puVar10;
  iVar4 = func_0010BA78(0x20);
  puVar3[6] = iVar4;
  puVar7 = DAT_002998ec;
  puVar3[7] = iVar4 + (uint)*(byte *)((int)puVar3 + 6) * 8;
  iVar8 = 2;
  puVar5 = (undefined4 *)(iVar4 + -8);
  do {
    uVar9 = puVar7[1];
    puVar5[2] = *puVar7;
    puVar5[3] = uVar9;
    iVar8 = iVar8 + -1;
    uVar9 = puVar7[1];
    puVar5[4] = *puVar7;
    puVar5[5] = uVar9;
    puVar5 = puVar5 + 4;
  } while (iVar8 != 0);
  bVar1 = *(byte *)((int)puVar3 + 6);
  uVar11 = (uint)bVar1;
  puVar5 = (undefined4 *)func_0010BA78(uVar11 << 3);
  puVar3[8] = puVar5;
  if (uVar11 != 0) {
    puVar6 = puVar5 + -2;
    if ((bVar1 & 1) != 0) {
      uVar9 = puVar7[5];
      *puVar5 = puVar7[4];
      puVar5[1] = uVar9;
      puVar6 = puVar5;
    }
    for (iVar4 = (int)uVar11 >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
      uVar9 = puVar7[5];
      puVar6[2] = puVar7[4];
      puVar6[3] = uVar9;
      uVar9 = puVar7[5];
      puVar6[4] = puVar7[4];
      puVar6[5] = uVar9;
      puVar6 = puVar6 + 4;
    }
  }
  puVar5 = (undefined4 *)func_0010CEE0(0x50,(int *)0x0,4);
  iVar4 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0x24;
    puVar5[1] = 2;
    iVar4 = func_00100118((int)(puVar5 + 2),DAT_002998f0,0x24,2);
  }
  if (iVar4 != 0) {
    puVar3[2] = 2;
    puVar3[3] = iVar4;
  }
  iVar4 = DAT_002998f4;
  puVar3[-0x2e] = puVar3;
  iVar8 = DAT_00299904;
  *(undefined2 *)(iVar4 + (int)puVar10) = 2;
  puStack_54 = (uint *)s_cState_Wait_002998f8;
  iStack_58 = iVar8;
  iVar4 = puVar3[3];
  puVar12 = *(uint **)(iVar4 + 4);
  puStack_2c = puVar3;
  (**(code **)(iVar8 + 8))(&iStack_58);
  uVar11 = 0;
  do {
    if (*(char *)((int)puStack_54 + uVar11) == '\0') {
      if ((int)uVar11 < 0x40001) goto LAB_00299730;
      break;
    }
    uVar11 = uVar11 + 1;
  } while ((int)uVar11 < 0x40001);
  uVar11 = 0;
LAB_00299730:
  iVar4 = *(int *)(iVar4 + 8);
  if (iVar4 <= (int)uVar11) {
    uVar11 = iVar4 - 1;
  }
  (**(code **)(iStack_58 + 8))(&iStack_58);
  func_0010E3C4(puVar12,puStack_54,uVar11);
  *(undefined1 *)((int)puVar12 + uVar11) = 0;
  puVar5 = (undefined4 *)puVar3[6];
  uVar9 = puVar7[1];
  uVar13 = puVar7[2];
  uVar14 = puVar7[3];
  uVar15 = puVar7[4];
  uVar16 = puVar7[5];
  *puVar5 = *puVar7;
  puVar5[1] = uVar9;
  puVar5 = (undefined4 *)puVar3[7];
  *puVar5 = uVar13;
  puVar5[1] = uVar14;
  puVar5 = (undefined4 *)puVar3[8];
  *puVar5 = uVar15;
  puVar5[1] = uVar16;
  puStack_54 = (uint *)s_cState_Sparkle_00299908;
  iStack_58 = iVar8;
  if ((uint)puVar3[2] < 2) {
    iVar4 = puVar3[3];
  }
  else {
    iVar4 = puVar3[3] + 0x24;
  }
  puVar12 = *(uint **)(iVar4 + 4);
  (**(code **)(iVar8 + 8))(&iStack_58);
  uVar11 = 0;
  do {
    if (*(char *)((int)puStack_54 + uVar11) == '\0') {
      if ((int)uVar11 < 0x40001) goto LAB_002997f0;
      break;
    }
    uVar11 = uVar11 + 1;
  } while ((int)uVar11 < 0x40001);
  uVar11 = 0;
LAB_002997f0:
  if (*(int *)(iVar4 + 8) <= (int)uVar11) {
    uVar11 = *(int *)(iVar4 + 8) - 1;
  }
  (**(code **)(iStack_58 + 8))(&iStack_58);
  func_0010E3C4(puVar12,puStack_54,uVar11);
  *(undefined1 *)((int)puVar12 + uVar11) = 0;
  uVar9 = puVar7[6];
  uVar16 = puVar7[7];
  uVar13 = puVar7[4];
  uVar15 = puVar7[5];
  iVar4 = puVar3[6];
  uVar14 = puVar7[1];
  *(undefined4 *)(iVar4 + 8) = *puVar7;
  *(undefined4 *)(iVar4 + 0xc) = uVar14;
  iVar4 = puVar3[7];
  *(undefined4 *)(iVar4 + 8) = uVar9;
  *(undefined4 *)(iVar4 + 0xc) = uVar16;
  iVar4 = puVar3[8];
  *(undefined4 *)(iVar4 + 8) = uVar13;
  *(undefined4 *)(iVar4 + 0xc) = uVar15;
  func_0066184C(puStack_2c,0);
  piVar2 = (int *)func_00521028((int)puVar10);
  (**(code **)(*piVar2 + 8))(piVar2);
  func_003529A0(auStack_50,piVar2[1],puVar3 + -0x3b);
  func_00491E80((float *)(puVar3 + 0xc),param_1[7],param_1[8],param_1[9]);
  puVar3[0xf] = puVar3[-0x101];
  puVar3[0x13] = puVar3[-0x100];
  puVar3[0x17] = puVar3[-0xff];
  pfStack_48 = (float *)(puVar3 + 0xc);
  func_002C41BC(puVar3 + -0x3b,auStack_50,0);
  return (int)puVar10;
}

