#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010BEB4(int param_1,int *param_2);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_0032493C(undefined4 *param_1);
extern int func_0034CAA0(undefined4 *param_1);
extern int func_004356B4(int *param_1);
extern int func_004EE484(undefined4 *param_1);
extern int func_0054D964(int param_1,uint param_2);
extern int DAT_001d4750;
extern int *DAT_001d4754;
extern int DAT_001d4758;
extern undefined4 DAT_001d475c;
extern undefined4 DAT_001d4760;
extern uint DAT_001d4764;
extern undefined *DAT_001d4768;
extern int DAT_001d476c;
extern uint DAT_001d477c;
extern char s_cState_Move_001d4770[];

// USA 001D42A8 <- EU 001D42A8 (Ghidra, non-matching)
// GLOBAL DAT_001d4750 int
// GLOBAL DAT_001d4754 int *
// GLOBAL DAT_001d4758 int
// GLOBAL DAT_001d475c undefined4
// GLOBAL DAT_001d4760 undefined4
// GLOBAL DAT_001d4764 uint
// GLOBAL DAT_001d4768 undefined *
// GLOBAL DAT_001d476c int
// GLOBAL DAT_001d477c uint
// GLOBAL s_cState_Move_001d4770 string

/* WARNING: Variable defined which should be unmapped: objStack_40 */

undefined4 * func_001D42A8(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  int *piVar3;
  undefined2 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  code *pcVar14;
  undefined4 uVar15;
  uint uVar16;
  uint *puVar17;
  int iVar18;
  int iVar19;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define objStack_40 ((uint *)(albw_frame + 0x0))
  #define local_30 (*(uint *)(albw_frame + 0x10))
  #define local_2c (*(uint * *)(albw_frame + 0x14))
  piVar5 = func_00150E40(param_1,param_2);
  iVar6 = DAT_001d4750 + 0x54;
  *piVar5 = DAT_001d4750;
  piVar5[200] = iVar6;
  puVar7 = (undefined4 *)func_0010BAB4(0x48);
  puVar8 = (undefined4 *)0x0;
  if (puVar7 != (undefined4 *)0x0) {
    puVar8 = func_0034CAA0(puVar7);
  }
  piVar3 = DAT_001d4754;
  piVar5[0x103] = (int)puVar8;
  piVar5[0x104] = 0;
  piVar5[0x107] = 0;
  iVar6 = DAT_001d4758;
  iVar11 = piVar3[0xf];
  piVar5[0x108] = piVar3[0xe];
  piVar5[0x109] = iVar11;
  piVar5[0x106] = iVar6;
  iVar11 = *piVar3;
  iVar12 = piVar3[1];
  piVar5[0x10b] = (int)piVar5;
  piVar5[0x10a] = iVar6;
  piVar5[0x10c] = iVar11;
  piVar5[0x10d] = iVar12;
  iVar11 = func_0054D964((int)piVar5,0);
  piVar5[0x10e] = iVar11;
  piVar5[0x110] = 0;
  iVar11 = piVar3[0xe];
  iVar12 = piVar3[0xf];
  piVar5[0x10f] = iVar6;
  piVar5[0x111] = iVar11;
  piVar5[0x112] = iVar12;
  puVar8 = (undefined4 *)func_0010BAB4(100);
  iVar6 = 0;
  if (puVar8 != (undefined4 *)0x0) {
    iVar6 = func_004EE484(puVar8);
  }
  piVar5[0x113] = iVar6;
  puVar8 = (undefined4 *)func_0010BAB4(0xc);
  iVar6 = 0;
  if (puVar8 != (undefined4 *)0x0) {
    iVar6 = func_0032493C(puVar8);
  }
  piVar5[0x114] = iVar6;
  puVar8 = func_0010A794(piVar5 + 0x115);
  puVar8[5] = 0;
  puVar8[6] = 0;
  uVar13 = DAT_001d475c;
  puVar8[7] = 0;
  puVar8[8] = 0;
  puVar8[9] = uVar13;
  puVar8[10] = 0;
  uVar13 = DAT_001d4760;
  puVar8[0xb] = 0;
  puVar8[0xc] = uVar13;
  puVar8[0xd] = 0;
  *(undefined1 *)(puVar8 + 0xe) = 0;
  puVar7 = puVar8 + -0x115;
  *(bool *)((int)puVar8 + 0x39) = *(short *)((int)param_2 + 0x2a) != 0;
  iVar6 = puVar8[-7];
  uVar13 = puVar8[-0x20];
  uVar15 = puVar8[-0x1f];
  piVar5 = puVar8 + -7;
  *(undefined4 *)(iVar6 + 4) = puVar8[-0x21];
  *(undefined4 *)(iVar6 + 8) = uVar13;
  *(undefined4 *)(iVar6 + 0xc) = uVar15;
  func_004356B4((int *)puVar8[-7]);
  puVar8[0xd] = param_2[7];
  iVar6 = piVar3[2];
  iVar11 = piVar3[3];
  puVar8[-0xe] = puVar7;
  objStack_40[1] = (uint)(puVar8 + -0xf);
  puVar8[-0xd] = iVar6;
  puVar8[-0xc] = iVar11;
  *(undefined2 *)(*piVar5 + 0x28) = 0x1a0;
  objStack_40[0] = (uint)*(short *)(puVar8 + -0x100);
  objStack_40[2] = DAT_001d4764;
  uVar16 = objStack_40[2];
  (*(undefined2 *)((char *)&objStack_40[2] + 0)) = (undefined2)DAT_001d4764;
  uVar4 = (undefined2)objStack_40[2];
  objStack_40[2] = uVar16;
  func_0014EB8C(puVar8[-2],*piVar5,(undefined2 *)puVar8[-0x2d],puVar8 + -0x101,
                *(short *)(puVar8 + -0x100),objStack_40[1],uVar4);
  *(uint *)(*piVar5 + 0x2c) = *(uint *)(*piVar5 + 0x2c) | 0x60000;
  iVar6 = piVar3[4];
  iVar11 = piVar3[5];
  puVar8[-5] = puVar7;
  puVar8[-4] = iVar6;
  puVar8[-3] = iVar11;
  *(undefined1 *)((int)puVar8 + 6) = 1;
  puVar8[5] = puVar7;
  iVar6 = func_0010BA78(0x10);
  puVar8[6] = iVar6;
  puVar8[7] = iVar6 + (uint)*(byte *)((int)puVar8 + 6) * 8;
  iVar11 = 1;
  piVar5 = (int *)(iVar6 + -8);
  do {
    iVar6 = piVar3[0xd];
    iVar11 = iVar11 + -1;
    piVar5[2] = piVar3[0xc];
    piVar5[3] = iVar6;
    iVar6 = piVar3[0xd];
    piVar5[4] = piVar3[0xc];
    piVar5[5] = iVar6;
    piVar5 = piVar5 + 4;
  } while (iVar11 != 0);
  bVar1 = *(byte *)((int)puVar8 + 6);
  uVar16 = (uint)bVar1;
  piVar5 = (int *)func_0010BA78(uVar16 << 3);
  puVar8[8] = piVar5;
  if (uVar16 != 0) {
    piVar9 = piVar5 + -2;
    if ((bVar1 & 1) != 0) {
      iVar6 = piVar3[0xb];
      *piVar5 = piVar3[10];
      piVar5[1] = iVar6;
      piVar9 = piVar5;
    }
    for (iVar6 = (int)uVar16 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      iVar11 = piVar3[0xb];
      piVar9[2] = piVar3[10];
      piVar9[3] = iVar11;
      iVar11 = piVar3[0xb];
      piVar9[4] = piVar3[10];
      piVar9[5] = iVar11;
      piVar9 = piVar9 + 4;
    }
  }
  puVar10 = (undefined4 *)func_0010CEE0(0x2c,(int *)0x0,4);
  iVar6 = 0;
  if (puVar10 != (undefined4 *)0x0) {
    *puVar10 = 0x24;
    puVar10[1] = 1;
    iVar6 = func_00100118((int)(puVar10 + 2),DAT_001d4768,0x24,1);
  }
  if (iVar6 != 0) {
    puVar8[3] = iVar6;
    puVar8[2] = 1;
  }
  iVar6 = DAT_001d476c;
  puVar8[-0x40] = puVar8;
  objStack_40[3] = DAT_001d477c;
  *(undefined2 *)(iVar6 + (int)puVar7) = 1;
  local_2c = (uint *)s_cState_Move_001d4770;
  local_30 = objStack_40[3];
  iVar6 = puVar8[3];
  puVar17 = *(uint **)(iVar6 + 4);
  (**(code **)(objStack_40[3] + 8))(&local_30);
  uVar16 = 0;
  do {
    if (*(char *)((int)local_2c + uVar16) == '\0') {
      if ((int)uVar16 < 0x40001) goto LAB_001d45f8;
      break;
    }
    uVar16 = uVar16 + 1;
  } while ((int)uVar16 < 0x40001);
  uVar16 = 0;
LAB_001d45f8:
  iVar6 = *(int *)(iVar6 + 8);
  if (iVar6 <= (int)uVar16) {
    uVar16 = iVar6 - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar17,local_2c,uVar16);
  *(undefined1 *)((int)puVar17 + uVar16) = 0;
  piVar5 = (int *)puVar8[6];
  iVar6 = piVar3[7];
  iVar11 = piVar3[8];
  iVar12 = piVar3[9];
  iVar18 = piVar3[10];
  iVar19 = piVar3[0xb];
  *piVar5 = piVar3[6];
  piVar5[1] = iVar6;
  piVar5 = (int *)puVar8[7];
  *piVar5 = iVar11;
  piVar5[1] = iVar12;
  piVar5 = (int *)puVar8[8];
  *piVar5 = iVar18;
  piVar5[1] = iVar19;
  if ((short)param_2[10] != 0) {
    *(short *)(puVar8[-2] + 0x30) = (short)param_2[10];
  }
  iVar6 = (int)*(char *)(puVar8 + 1);
  if (iVar6 != -1) {
    iVar11 = puVar8[8];
    pcVar14 = *(code **)(iVar11 + iVar6 * 8);
    if ((pcVar14 != (code *)0x0) ||
       ((uVar16 = *(uint *)(iVar11 + iVar6 * 8 + 4), (uVar16 & 1) != 0 && (uVar16 != 0)))) {
      uVar16 = *(uint *)(iVar11 + iVar6 * 8 + 4);
      piVar5 = (int *)(puVar8[5] + ((int)uVar16 >> 1));
      if ((uVar16 & 1) != 0) {
        pcVar14 = *(code **)(pcVar14 + *piVar5);
      }
      (*pcVar14)(piVar5,0);
    }
  }
  uVar2 = *(undefined1 *)(puVar8 + 1);
  *(undefined1 *)(puVar8 + 1) = 0;
  *puVar8 = 0;
  *(undefined1 *)((int)puVar8 + 5) = uVar2;
  if (puVar8[4] != 0) {
    piVar5 = (int *)puVar8[3];
    (**(code **)(*piVar5 + 8))(piVar5);
    objStack_40[1] = piVar5[1];
    objStack_40[0] = objStack_40[3];
    func_0010BEB4(puVar8[4],(int *)objStack_40);
  }
  iVar11 = (int)*(char *)(puVar8 + 1);
  iVar6 = puVar8[6];
  pcVar14 = *(code **)(iVar6 + iVar11 * 8);
  if ((pcVar14 != (code *)0x0) ||
     ((uVar16 = *(uint *)(iVar6 + iVar11 * 8 + 4), (uVar16 & 1) != 0 && (uVar16 != 0)))) {
    uVar16 = *(uint *)(iVar6 + iVar11 * 8 + 4);
    if ((uVar16 & 1) != 0) {
      pcVar14 = *(code **)(pcVar14 + *(int *)(puVar8[5] + ((int)uVar16 >> 1)));
    }
    (*pcVar14)((int)(puVar8[5]) + ((int)uVar16 >> 1));
  }
  return puVar7;
}

