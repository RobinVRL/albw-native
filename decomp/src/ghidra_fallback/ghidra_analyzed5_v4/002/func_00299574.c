// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
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

// USA 00299574 <- EU 00299550 (Ghidra, non-matching)
// MAPFIX: tools/ghidra_name_fixes.json applied (do not apply again)
// GLOBAL DAT_002998e4 int
// GLOBAL DAT_002998e8 undefined4 *
// GLOBAL DAT_002998ec undefined4 *
// GLOBAL DAT_002998f0 undefined *
// GLOBAL DAT_002998f4 int
// GLOBAL DAT_00299904 int
// GLOBAL s_cState_Sparkle_00299908 string
// GLOBAL s_cState_Wait_002998f8 string

undefined4 * func_00299574(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
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
  piVar3 = func_00150E40(param_1,param_2);
  iVar5 = DAT_002998e4;
  *piVar3 = DAT_002998e4;
  piVar3[200] = iVar5 + 0x54;
  puVar4 = func_0010A794(piVar3 + 0x103);
  puVar2 = DAT_002998e8;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  uVar9 = puVar2[1];
  uVar13 = puVar2[2];
  puVar4[9] = *puVar2;
  puVar4[10] = uVar9;
  puVar4[0xb] = uVar13;
  puVar10 = puVar4 + -0x103;
  *(undefined1 *)(puVar4 + 0x18) = 0;
  *(undefined1 *)((int)puVar4 + 6) = 2;
  puVar4[5] = puVar10;
  iVar5 = func_0010BA78(0x20);
  puVar4[6] = iVar5;
  puVar2 = DAT_002998ec;
  puVar4[7] = iVar5 + (uint)*(byte *)((int)puVar4 + 6) * 8;
  iVar8 = 2;
  puVar6 = (undefined4 *)(iVar5 + -8);
  do {
    uVar9 = puVar2[1];
    puVar6[2] = *puVar2;
    puVar6[3] = uVar9;
    iVar8 = iVar8 + -1;
    uVar9 = puVar2[1];
    puVar6[4] = *puVar2;
    puVar6[5] = uVar9;
    puVar6 = puVar6 + 4;
  } while (iVar8 != 0);
  bVar1 = *(byte *)((int)puVar4 + 6);
  uVar11 = (uint)bVar1;
  puVar6 = (undefined4 *)func_0010BA78(uVar11 << 3);
  puVar4[8] = puVar6;
  if (uVar11 != 0) {
    puVar7 = puVar6 + -2;
    if ((bVar1 & 1) != 0) {
      uVar9 = puVar2[5];
      *puVar6 = puVar2[4];
      puVar6[1] = uVar9;
      puVar7 = puVar6;
    }
    for (iVar5 = (int)uVar11 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      uVar9 = puVar2[5];
      puVar7[2] = puVar2[4];
      puVar7[3] = uVar9;
      uVar9 = puVar2[5];
      puVar7[4] = puVar2[4];
      puVar7[5] = uVar9;
      puVar7 = puVar7 + 4;
    }
  }
  puVar6 = (undefined4 *)func_0010CEE0(0x50,(int *)0x0,4);
  iVar5 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 0x24;
    puVar6[1] = 2;
    iVar5 = func_00100118((int)(puVar6 + 2),DAT_002998f0,0x24,2);
  }
  if (iVar5 != 0) {
    puVar4[2] = 2;
    puVar4[3] = iVar5;
  }
  iVar5 = DAT_002998f4;
  puVar4[-0x2e] = puVar4;
  iVar8 = DAT_00299904;
  *(undefined2 *)(iVar5 + (int)puVar10) = 2;
  puStack_54 = (uint *)s_cState_Wait_002998f8;
  iStack_58 = iVar8;
  iVar5 = puVar4[3];
  puVar12 = *(uint **)(iVar5 + 4);
  puStack_2c = puVar4;
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
  iVar5 = *(int *)(iVar5 + 8);
  if (iVar5 <= (int)uVar11) {
    uVar11 = iVar5 - 1;
  }
  (**(code **)(iStack_58 + 8))(&iStack_58);
  func_0010E3C4(puVar12,puStack_54,uVar11);
  *(undefined1 *)((int)puVar12 + uVar11) = 0;
  puVar6 = (undefined4 *)puVar4[6];
  uVar9 = puVar2[1];
  uVar13 = puVar2[2];
  uVar14 = puVar2[3];
  uVar15 = puVar2[4];
  uVar16 = puVar2[5];
  *puVar6 = *puVar2;
  puVar6[1] = uVar9;
  puVar6 = (undefined4 *)puVar4[7];
  *puVar6 = uVar13;
  puVar6[1] = uVar14;
  puVar6 = (undefined4 *)puVar4[8];
  *puVar6 = uVar15;
  puVar6[1] = uVar16;
  puStack_54 = (uint *)s_cState_Sparkle_00299908;
  iStack_58 = iVar8;
  if ((uint)puVar4[2] < 2) {
    iVar5 = puVar4[3];
  }
  else {
    iVar5 = puVar4[3] + 0x24;
  }
  puVar12 = *(uint **)(iVar5 + 4);
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
  if (*(int *)(iVar5 + 8) <= (int)uVar11) {
    uVar11 = *(int *)(iVar5 + 8) - 1;
  }
  (**(code **)(iStack_58 + 8))(&iStack_58);
  func_0010E3C4(puVar12,puStack_54,uVar11);
  *(undefined1 *)((int)puVar12 + uVar11) = 0;
  uVar9 = puVar2[6];
  uVar16 = puVar2[7];
  uVar13 = puVar2[4];
  uVar15 = puVar2[5];
  iVar5 = puVar4[6];
  uVar14 = puVar2[1];
  *(undefined4 *)(iVar5 + 8) = *puVar2;
  *(undefined4 *)(iVar5 + 0xc) = uVar14;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 8) = uVar9;
  *(undefined4 *)(iVar5 + 0xc) = uVar16;
  iVar5 = puVar4[8];
  *(undefined4 *)(iVar5 + 8) = uVar13;
  *(undefined4 *)(iVar5 + 0xc) = uVar15;
  func_0066184C(puStack_2c,0);
  piVar3 = (int *)func_00521028((int)puVar10);
  (**(code **)(*piVar3 + 8))(piVar3);
  func_003529A0(auStack_50,piVar3[1],puVar4 + -0x3b);
  func_00491E80((float *)(puVar4 + 0xc),param_2[7],param_2[8],param_2[9]);
  puVar4[0xf] = puVar4[-0x101];
  puVar4[0x13] = puVar4[-0x100];
  puVar4[0x17] = puVar4[-0xff];
  pfStack_48 = (float *)(puVar4 + 0xc);
  func_002C41BC(puVar4 + -0x3b,auStack_50,0);
  return puVar10;
}

