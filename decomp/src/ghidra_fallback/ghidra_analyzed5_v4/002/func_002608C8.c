#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00260520(int param_1,int *param_2,undefined4 param_3,undefined4 param_4);
extern int func_0034C74C(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
extern undefined4 DAT_00260c6c;
extern float DAT_00260c70;
extern undefined4 *DAT_00260c74;
extern undefined *DAT_00260c78;
extern int DAT_00260c8c;
extern undefined DAT_00260c9c;
extern char s_cState_Counting_00260c7c[];
extern char s_cState_Hold_00260c90[];

// USA 002608C8 <- EU 002608F0 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4
// GLOBAL DAT_00260c6c undefined4
// GLOBAL DAT_00260c70 float
// GLOBAL DAT_00260c74 undefined4 *
// GLOBAL DAT_00260c78 undefined *
// GLOBAL DAT_00260c8c int
// GLOBAL DAT_00260c9c undefined
// GLOBAL s_cState_Counting_00260c7c string
// GLOBAL s_cState_Hold_00260c90 string

int func_002608C8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  byte bVar1;
  float fVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 *puVar12;
  uint uVar13;
  undefined4 uVar14;
  uint *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint in_fpscr;
  float fVar18;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(uint * *)(albw_frame + 0x4))
  *param_1 = DAT_00260c6c;
  param_1[1] = param_2;
  param_1[2] = param_2;
  puVar3 = func_0010A794(param_1 + 3);
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar12 = puVar3 + -3;
  puVar3[8] = 0;
  puVar4 = (undefined4 *)func_0010BAB4(0x5c);
  puVar5 = (undefined4 *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = func_0034C74C(puVar4,param_2,param_3);
  }
  fVar2 = DAT_00260c70;
  puVar3[9] = puVar5;
  puVar3[10] = 0xffffffff;
  *(undefined1 *)(puVar3 + 0xb) = 0;
  puVar3[0xc] = 0;
  fVar18 = (float)VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x15) & 3);
  puVar3[0xd] = 0;
  *(undefined1 *)(puVar3 + 0xe) = 1;
  puVar3[0xf] = param_4;
  puVar3[0x10] = param_5;
  puVar3[0x11] = ALBW_AS_U32(fVar2 / fVar18);
  *(undefined1 *)((int)puVar3 + 6) = 2;
  puVar3[5] = puVar12;
  iVar6 = func_0010BA78(0x20);
  puVar3[6] = iVar6;
  puVar5 = DAT_00260c74;
  puVar3[7] = iVar6 + (uint)*(byte *)((int)puVar3 + 6) * 8;
  iVar8 = 2;
  puVar4 = (undefined4 *)(iVar6 + -8);
  do {
    uVar16 = puVar5[0xb];
    iVar8 = iVar8 + -1;
    puVar4[2] = puVar5[10];
    puVar4[3] = uVar16;
    uVar16 = puVar5[0xb];
    puVar4[4] = puVar5[10];
    puVar4[5] = uVar16;
    puVar4 = puVar4 + 4;
  } while (iVar8 != 0);
  bVar1 = *(byte *)((int)puVar3 + 6);
  uVar13 = (uint)bVar1;
  puVar4 = (undefined4 *)func_0010BA78(uVar13 << 3);
  puVar3[8] = puVar4;
  if (uVar13 != 0) {
    puVar7 = puVar4 + -2;
    if ((bVar1 & 1) != 0) {
      uVar16 = puVar5[5];
      *puVar4 = puVar5[4];
      puVar4[1] = uVar16;
      puVar7 = puVar4;
    }
    for (iVar6 = (int)uVar13 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      uVar16 = puVar5[5];
      puVar7[2] = puVar5[4];
      puVar7[3] = uVar16;
      uVar16 = puVar5[5];
      puVar7[4] = puVar5[4];
      puVar7[5] = uVar16;
      puVar7 = puVar7 + 4;
    }
  }
  puVar4 = (undefined4 *)func_0010CEE0(0x50,(int *)0x0,4);
  iVar6 = 0;
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0x24;
    puVar4[1] = 2;
    iVar6 = func_00100118((int)(puVar4 + 2),DAT_00260c78,0x24,2);
  }
  if (iVar6 != 0) {
    puVar3[3] = iVar6;
    puVar3[2] = 2;
  }
  iVar6 = DAT_00260c8c;
  local_2c = (uint *)s_cState_Counting_00260c7c;
  local_30 = DAT_00260c8c;
  iVar8 = puVar3[3];
  puVar15 = *(uint **)(iVar8 + 4);
  (**(code **)(DAT_00260c8c + 8))(&local_30);
  uVar13 = 0;
  do {
    if (*(char *)((int)local_2c + uVar13) == '\0') {
      if ((int)uVar13 < 0x40001) goto LAB_00260afc;
      break;
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0x40001);
  uVar13 = 0;
LAB_00260afc:
  iVar8 = *(int *)(iVar8 + 8);
  if (iVar8 <= (int)uVar13) {
    uVar13 = iVar8 - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar15,local_2c,uVar13);
  *(undefined1 *)((int)puVar15 + uVar13) = 0;
  puVar4 = (undefined4 *)puVar3[6];
  uVar9 = puVar5[2];
  uVar17 = puVar5[3];
  uVar16 = *puVar5;
  uVar10 = puVar5[4];
  uVar14 = puVar5[5];
  puVar4[1] = puVar5[1];
  *puVar4 = uVar16;
  puVar4 = (undefined4 *)puVar3[7];
  *puVar4 = uVar9;
  puVar4[1] = uVar17;
  puVar4 = (undefined4 *)puVar3[8];
  *puVar4 = uVar10;
  puVar4[1] = uVar14;
  local_2c = (uint *)s_cState_Hold_00260c90;
  local_30 = iVar6;
  if ((uint)puVar3[2] < 2) {
    iVar8 = puVar3[3];
  }
  else {
    iVar8 = puVar3[3] + 0x24;
  }
  puVar15 = *(uint **)(iVar8 + 4);
  (**(code **)(iVar6 + 8))(&local_30);
  uVar13 = 0;
  do {
    if (*(char *)((int)local_2c + uVar13) == '\0') {
      if ((int)uVar13 < 0x40001) goto LAB_00260bc0;
      break;
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0x40001);
  uVar13 = 0;
LAB_00260bc0:
  if (*(int *)(iVar8 + 8) <= (int)uVar13) {
    uVar13 = *(int *)(iVar8 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar15,local_2c,uVar13);
  *(undefined1 *)((int)puVar15 + uVar13) = 0;
  uVar10 = puVar5[4];
  iVar8 = puVar3[6];
  uVar9 = puVar5[5];
  uVar17 = puVar5[7];
  uVar16 = puVar5[8];
  uVar14 = puVar5[9];
  *(undefined4 *)(iVar8 + 8) = puVar5[6];
  *(undefined4 *)(iVar8 + 0xc) = uVar17;
  iVar11 = puVar3[7];
  *(undefined4 *)(iVar11 + 8) = uVar16;
  *(undefined4 *)(iVar11 + 0xc) = uVar14;
  iVar8 = puVar3[8];
  *(undefined4 *)(iVar8 + 8) = uVar10;
  uVar16 = 4;
  *(undefined4 *)(iVar8 + 0xc) = uVar9;
  iVar8 = func_0010CEE0(0x10,(int *)0x0,4);
  if (iVar8 != 0) {
    puVar3[0xd] = iVar8;
    puVar3[0xc] = 4;
  }
  local_2c = (uint *)&DAT_00260c9c;
  local_30 = iVar6;
  func_00260520((int)puVar12,&local_30,uVar16,iVar11);
  return (int)puVar12;
}

