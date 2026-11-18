#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_0034CAA0(undefined4 *param_1);
extern int func_004356B4(int *param_1);
extern int func_004EE484(undefined4 *param_1);
extern int func_0054D964(int param_1,uint param_2);
extern int func_00666090(undefined4 *param_1,undefined1 param_2);
extern int DAT_0033eabc;
extern undefined4 *DAT_0033eac0;
extern undefined4 DAT_0033eac4;
extern undefined4 DAT_0033eac8;
extern undefined4 DAT_0033eacc;
extern float DAT_0033ead0;
extern float DAT_0033ead4;
extern undefined4 DAT_0033ead8;
extern undefined *DAT_0033eadc;
extern int DAT_0033eae0;
extern int DAT_0033eaf0;
extern char s_cState_Erase_0033eaf4[];
extern char s_cState_Fire_0033eae4[];

// USA 0033E710 <- EU 0033E6EC (Ghidra, non-matching)
// GLOBAL DAT_0033eabc int
// GLOBAL DAT_0033eac0 undefined4 *
// GLOBAL DAT_0033eac4 undefined4
// GLOBAL DAT_0033eac8 undefined4
// GLOBAL DAT_0033eacc undefined4
// GLOBAL DAT_0033ead0 float
// GLOBAL DAT_0033ead4 float
// GLOBAL DAT_0033ead8 undefined4
// GLOBAL DAT_0033eadc undefined *
// GLOBAL DAT_0033eae0 int
// GLOBAL DAT_0033eaf0 int
// GLOBAL s_cState_Erase_0033eaf4 string
// GLOBAL s_cState_Fire_0033eae4 string

undefined4 * func_0033E710(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint *puVar12;
  undefined4 uVar13;
  uint in_fpscr;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_3c (*(uint *)(albw_frame + 0x4))
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(uint * *)(albw_frame + 0xc))
  piVar2 = func_00150E40(param_1,param_2);
  iVar9 = DAT_0033eabc;
  *piVar2 = DAT_0033eabc;
  piVar2[200] = iVar9 + 0x54;
  puVar3 = func_0010A794(piVar2 + 0x103);
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar10 = puVar3 + -0x103;
  puVar4 = (undefined4 *)func_0010BAB4(0x48);
  puVar5 = (undefined4 *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = func_0034CAA0(puVar4);
  }
  puVar4 = DAT_0033eac0;
  puVar3[0xc] = puVar5;
  uVar13 = DAT_0033eac8;
  uVar8 = puVar4[1];
  puVar3[0xf] = *puVar4;
  puVar3[0x10] = uVar8;
  fVar16 = DAT_0033ead0;
  uVar8 = DAT_0033eacc;
  puVar3[0xd] = DAT_0033eac4;
  puVar3[0xe] = puVar10;
  puVar3[0x12] = uVar13;
  puVar3[0x13] = uVar8;
  puVar3[0x11] = 0;
  piVar2 = (int *)func_0054D964((int)puVar10,0);
  fVar15 = DAT_0033ead4;
  fVar14 = ALBW_AS_F32(puVar3[-0xe]) + DAT_0033ead4;
  iVar9 = puVar3[-0xd];
  piVar2[1] = puVar3[-0xf];
  piVar2[2] = (int)ALBW_AS_U32(fVar14);
  piVar2[3] = iVar9;
  func_004356B4(piVar2);
  piVar2[0xb] = piVar2[0xb] | 0x2000;
  puVar3[10] = piVar2;
  *(undefined2 *)(piVar2 + 10) = 0x160;
  piVar2 = (int *)func_0054D964((int)puVar10,1);
  fVar14 = ALBW_AS_F32(puVar3[-0xe]);
  iVar9 = puVar3[-0xd];
  piVar2[1] = puVar3[-0xf];
  piVar2[2] = (int)ALBW_AS_U32((fVar14 + fVar15));
  piVar2[3] = iVar9;
  func_004356B4(piVar2);
  puVar3[0xb] = piVar2;
  puVar5 = (undefined4 *)func_0010BAB4(100);
  iVar9 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    iVar9 = func_004EE484(puVar5);
  }
  puVar3[9] = iVar9;
  local_3c = puVar3[-0x50];
  func_0014EB8C(iVar9,puVar3[0xb],(undefined2 *)puVar3[-0x1b],&local_3c,
                *(undefined2 *)(puVar3 + -0xee),0,(short)uVar13);
  uVar13 = DAT_0033ead8;
  iVar9 = (int)*(short *)(puVar3 + -0xf8);
  uVar20 = CONCAT44(fVar16,DAT_0033ead8);
  puVar3[0x12] = iVar9;
  if (iVar9 == 0) {
    puVar3[0x13] = uVar13;
  }
  else {
    fVar15 = (float)VectorUnsignedToFloat(iVar9,(byte)(in_fpscr >> 0x15) & 3);
    puVar3[0x13] = ALBW_AS_U32(fVar16 / fVar15);
  }
  puVar3[0x11] = 0;
  *(undefined1 *)((int)puVar3 + 6) = 2;
  puVar3[5] = puVar10;
  iVar9 = func_0010BA78(0x20);
  puVar3[6] = iVar9;
  puVar3[7] = iVar9 + (uint)*(byte *)((int)puVar3 + 6) * 8;
  iVar7 = 2;
  puVar5 = (undefined4 *)(iVar9 + -8);
  do {
    uVar13 = puVar4[0xd];
    iVar7 = iVar7 + -1;
    puVar5[2] = puVar4[0xc];
    puVar5[3] = uVar13;
    uVar13 = puVar4[0xd];
    puVar5[4] = puVar4[0xc];
    puVar5[5] = uVar13;
    puVar5 = puVar5 + 4;
  } while (iVar7 != 0);
  bVar1 = *(byte *)((int)puVar3 + 6);
  uVar11 = (uint)bVar1;
  puVar5 = (undefined4 *)func_0010BA78(uVar11 << 3);
  puVar3[8] = puVar5;
  if (uVar11 != 0) {
    puVar6 = puVar5 + -2;
    if ((bVar1 & 1) != 0) {
      uVar13 = puVar4[7];
      *puVar5 = puVar4[6];
      puVar5[1] = uVar13;
      puVar6 = puVar5;
    }
    for (iVar9 = (int)uVar11 >> 1; iVar9 != 0; iVar9 = iVar9 + -1) {
      uVar13 = puVar4[7];
      puVar6[2] = puVar4[6];
      puVar6[3] = uVar13;
      uVar13 = puVar4[7];
      puVar6[4] = puVar4[6];
      puVar6[5] = uVar13;
      puVar6 = puVar6 + 4;
    }
  }
  puVar5 = (undefined4 *)func_0010CEE0(0x50,(int *)0x0,4);
  iVar9 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0x24;
    puVar5[1] = 2;
    iVar9 = func_00100118((int)(puVar5 + 2),DAT_0033eadc,0x24,2);
  }
  if (iVar9 != 0) {
    puVar3[2] = 2;
    puVar3[3] = iVar9;
  }
  iVar9 = DAT_0033eae0;
  puVar3[-0x2e] = puVar3;
  iVar7 = DAT_0033eaf0;
  *(undefined2 *)(iVar9 + (int)puVar10) = 2;
  local_34 = (uint *)s_cState_Fire_0033eae4;
  local_38 = iVar7;
  iVar9 = puVar3[3];
  puVar12 = *(uint **)(iVar9 + 4);
  puVar5 = puVar3;
  (**(code **)(iVar7 + 8))(&local_38);
  uVar11 = 0;
  do {
    if (*(char *)((int)local_34 + uVar11) == '\0') {
      if ((int)uVar11 < 0x40001) goto LAB_0033ea14;
      break;
    }
    uVar11 = uVar11 + 1;
  } while ((int)uVar11 < 0x40001);
  uVar11 = 0;
LAB_0033ea14:
  iVar9 = *(int *)(iVar9 + 8);
  if (iVar9 <= (int)uVar11) {
    uVar11 = iVar9 - 1;
  }
  (**(code **)(local_38 + 8))(&local_38);
  func_0010E3C4(puVar12,local_34,uVar11);
  *(undefined1 *)((int)puVar12 + uVar11) = 0;
  puVar6 = (undefined4 *)puVar3[6];
  uVar13 = puVar4[3];
  uVar8 = puVar4[4];
  uVar17 = puVar4[5];
  uVar18 = puVar4[6];
  uVar19 = puVar4[7];
  *puVar6 = puVar4[2];
  puVar6[1] = uVar13;
  puVar6 = (undefined4 *)puVar3[7];
  *puVar6 = uVar8;
  puVar6[1] = uVar17;
  puVar6 = (undefined4 *)puVar3[8];
  *puVar6 = uVar18;
  puVar6[1] = uVar19;
  local_34 = (uint *)s_cState_Erase_0033eaf4;
  local_38 = iVar7;
  if ((uint)puVar3[2] < 2) {
    iVar9 = puVar3[3];
  }
  else {
    iVar9 = puVar3[3] + 0x24;
  }
  puVar12 = *(uint **)(iVar9 + 4);
  (**(code **)(iVar7 + 8))(&local_38);
  uVar11 = 0;
  do {
    if (*(char *)((int)local_34 + uVar11) == '\0') {
      if ((int)uVar11 < 0x40001) goto LAB_0033eb10;
      break;
    }
    uVar11 = uVar11 + 1;
  } while ((int)uVar11 < 0x40001);
  uVar11 = 0;
LAB_0033eb10:
  if (*(int *)(iVar9 + 8) <= (int)uVar11) {
    uVar11 = *(int *)(iVar9 + 8) - 1;
  }
  (**(code **)(local_38 + 8))(&local_38);
  func_0010E3C4(puVar12,local_34,uVar11);
  *(undefined1 *)((int)puVar12 + uVar11) = 0;
  iVar9 = puVar3[6];
  uVar13 = puVar4[9];
  uVar8 = puVar4[10];
  uVar19 = puVar4[0xb];
  uVar17 = puVar4[6];
  uVar18 = puVar4[7];
  *(undefined4 *)(iVar9 + 8) = puVar4[8];
  *(undefined4 *)(iVar9 + 0xc) = uVar13;
  iVar9 = puVar3[7];
  *(undefined4 *)(iVar9 + 8) = uVar8;
  *(undefined4 *)(iVar9 + 0xc) = uVar19;
  iVar9 = puVar3[8];
  *(undefined4 *)(iVar9 + 8) = uVar17;
  *(undefined4 *)(iVar9 + 0xc) = uVar18;
  func_00666090(puVar5,0);
  iVar9 = (int)*(short *)(puVar3 + -0xf8);
  puVar3[0x12] = iVar9;
  if (iVar9 == 0) {
    puVar3[0x13] = (int)uVar20;
  }
  else {
    fVar16 = (float)VectorUnsignedToFloat(iVar9,(byte)(in_fpscr >> 0x15) & 3);
    puVar3[0x13] = ALBW_AS_U32(ALBW_AS_F32(((ulonglong)uVar20 >> 0x20)) / fVar16);
  }
  puVar3[0x11] = 0;
  return puVar10;
}

