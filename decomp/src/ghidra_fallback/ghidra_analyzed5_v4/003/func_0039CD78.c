#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_0039CAF0(int param_1);
extern int func_004356B4(int *param_1);
extern int func_004EE484(undefined4 *param_1);
extern int func_0054D89C(int param_1,uint param_2);
extern int func_0054D964(int param_1,uint param_2);
extern int func_006687F0(undefined4 *param_1,undefined1 param_2);
extern int DAT_0039d110;
extern int DAT_0039d114;
extern undefined4 DAT_0039d118;
extern undefined4 DAT_0039d11c;
extern undefined4 DAT_0039d120;
extern undefined4 DAT_0039d124;
extern undefined4 *DAT_0039d128;
extern undefined4 *DAT_0039d12c;
extern undefined4 DAT_0039d130;
extern undefined *DAT_0039d134;
extern int DAT_0039d138;
extern int DAT_0039d14c;
extern char s_cState_Appear_0039d13c[];
extern char s_cState_Attack_0039d150[];

// USA 0039CD78 <- EU 0039CD54 (Ghidra, non-matching)
// GLOBAL DAT_0039d110 int
// GLOBAL DAT_0039d114 int
// GLOBAL DAT_0039d118 undefined4
// GLOBAL DAT_0039d11c undefined4
// GLOBAL DAT_0039d120 undefined4
// GLOBAL DAT_0039d124 undefined4
// GLOBAL DAT_0039d128 undefined4 *
// GLOBAL DAT_0039d12c undefined4 *
// GLOBAL DAT_0039d130 undefined4
// GLOBAL DAT_0039d134 undefined *
// GLOBAL DAT_0039d138 int
// GLOBAL DAT_0039d14c int
// GLOBAL s_cState_Appear_0039d13c string
// GLOBAL s_cState_Attack_0039d150 string

undefined4 * func_0039CD78(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  uint *puVar15;
  undefined4 uVar16;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_34 (*(uint *)(albw_frame + 0xc))
  #define local_30 (*(int *)(albw_frame + 0x10))
  #define local_2c (*(uint * *)(albw_frame + 0x14))
  piVar2 = func_00150E40(param_1,param_2);
  iVar12 = DAT_0039d110;
  *piVar2 = DAT_0039d110;
  piVar2[200] = iVar12 + 0x58;
  puVar3 = func_0010A794(piVar2 + 0x103);
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  iVar4 = func_0054D89C((int)(puVar3 + -0x103),0);
  iVar12 = DAT_0039d114;
  puVar3[0xc] = iVar4;
  puVar5 = DAT_0039d128;
  uVar10 = DAT_0039d124;
  uVar6 = DAT_0039d11c;
  uVar9 = *(undefined4 *)(iVar12 + 8);
  puVar3[0xf] = *(undefined4 *)(iVar12 + 4);
  puVar3[0x10] = uVar9;
  puVar3[0xd] = DAT_0039d118;
  puVar3[0xe] = puVar3 + -0x103;
  puVar13 = puVar3 + -0x103;
  puVar3[0x11] = 0;
  puVar3[0x12] = 0;
  puVar3[0x13] = uVar6;
  puVar3[0x14] = 0;
  puVar3[0x15] = 0;
  puVar3[0x16] = uVar6;
  uVar6 = DAT_0039d120;
  puVar3[0x17] = DAT_0039d120;
  puVar3[0x18] = uVar10;
  puVar3[0x19] = uVar6;
  uVar10 = *puVar5;
  uVar9 = puVar5[1];
  puVar3[0x1c] = puVar5[2];
  puVar3[0x1a] = uVar10;
  puVar3[0x1b] = uVar9;
  uVar10 = DAT_0039d12c[1];
  uVar9 = DAT_0039d12c[2];
  puVar3[0x1d] = *DAT_0039d12c;
  puVar3[0x1e] = uVar10;
  puVar3[0x1f] = uVar9;
  puVar3[0x2c] = uVar6;
  func_0039CAF0((int)puVar13);
  iVar4 = func_0054D964((int)puVar13,0);
  puVar3[0xb] = iVar4;
  uVar11 = *(uint *)(iVar4 + 0x2c);
  *(uint *)(iVar4 + 0x2c) = uVar11 | 8;
  *(uint *)(puVar3[0xb] + 0x2c) = uVar11 | 0x10008;
  puVar5 = (undefined4 *)func_0010BAB4(100);
  uVar6 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    uVar6 = func_004EE484(puVar5);
  }
  puVar3[10] = uVar6;
  iVar4 = puVar3[0xb];
  *(undefined4 *)(iVar4 + 4) = puVar3[-0xf];
  *(undefined4 *)(iVar4 + 8) = puVar3[-0xe];
  *(undefined4 *)(iVar4 + 0xc) = puVar3[-0xd];
  func_004356B4((int *)puVar3[0xb]);
  local_34 = puVar3[-0x50];
  func_0014EB8C(puVar3[10],puVar3[0xb],(undefined2 *)puVar3[-0x1b],&local_34,
                *(undefined2 *)(puVar3 + -0xee),puVar3 + 0xd,(short)DAT_0039d130);
  *(undefined1 *)((int)puVar3 + 6) = 2;
  puVar3[5] = puVar13;
  iVar4 = func_0010BA78(0x20);
  puVar3[6] = iVar4;
  puVar3[7] = iVar4 + (uint)*(byte *)((int)puVar3 + 6) * 8;
  iVar7 = 2;
  puVar5 = (undefined4 *)(iVar4 + -8);
  do {
    uVar6 = *(undefined4 *)(iVar12 + 0x40);
    iVar7 = iVar7 + -1;
    puVar5[2] = *(undefined4 *)(iVar12 + 0x3c);
    puVar5[3] = uVar6;
    uVar6 = *(undefined4 *)(iVar12 + 0x40);
    puVar5[4] = *(undefined4 *)(iVar12 + 0x3c);
    puVar5[5] = uVar6;
    puVar5 = puVar5 + 4;
  } while (iVar7 != 0);
  bVar1 = *(byte *)((int)puVar3 + 6);
  uVar11 = (uint)bVar1;
  puVar5 = (undefined4 *)func_0010BA78(uVar11 << 3);
  puVar3[8] = puVar5;
  if (uVar11 != 0) {
    puVar8 = puVar5 + -2;
    if ((bVar1 & 1) != 0) {
      uVar6 = *(undefined4 *)(iVar12 + 0x48);
      *puVar5 = *(undefined4 *)(iVar12 + 0x44);
      puVar5[1] = uVar6;
      puVar8 = puVar5;
    }
    for (iVar4 = (int)uVar11 >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
      uVar6 = *(undefined4 *)(iVar12 + 0x48);
      puVar8[2] = *(undefined4 *)(iVar12 + 0x44);
      puVar8[3] = uVar6;
      uVar6 = *(undefined4 *)(iVar12 + 0x48);
      puVar8[4] = *(undefined4 *)(iVar12 + 0x44);
      puVar8[5] = uVar6;
      puVar8 = puVar8 + 4;
    }
  }
  puVar5 = (undefined4 *)func_0010CEE0(0x50,(int *)0x0,4);
  iVar4 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0x24;
    puVar5[1] = 2;
    iVar4 = func_00100118((int)(puVar5 + 2),DAT_0039d134,0x24,2);
  }
  if (iVar4 != 0) {
    puVar3[3] = iVar4;
    puVar3[2] = 2;
  }
  iVar4 = DAT_0039d138;
  puVar3[-0x2e] = puVar3;
  iVar7 = DAT_0039d14c;
  *(undefined2 *)(iVar4 + (int)puVar13) = 2;
  local_2c = (uint *)s_cState_Appear_0039d13c;
  local_30 = iVar7;
  iVar4 = puVar3[3];
  puVar15 = *(uint **)(iVar4 + 4);
  (**(code **)(iVar7 + 8))(&local_30);
  uVar11 = 0;
  do {
    if (*(char *)((int)local_2c + uVar11) == '\0') {
      if ((int)uVar11 < 0x40001) goto LAB_0039d064;
      break;
    }
    uVar11 = uVar11 + 1;
  } while ((int)uVar11 < 0x40001);
  uVar11 = 0;
LAB_0039d064:
  iVar4 = *(int *)(iVar4 + 8);
  if (iVar4 <= (int)uVar11) {
    uVar11 = iVar4 - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar15,local_2c,uVar11);
  *(undefined1 *)((int)puVar15 + uVar11) = 0;
  puVar5 = (undefined4 *)puVar3[6];
  uVar6 = *(undefined4 *)(iVar12 + 0x10);
  uVar10 = *(undefined4 *)(iVar12 + 0x14);
  uVar9 = *(undefined4 *)(iVar12 + 0x18);
  uVar14 = *(undefined4 *)(iVar12 + 0x1c);
  uVar16 = *(undefined4 *)(iVar12 + 0x20);
  *puVar5 = *(undefined4 *)(iVar12 + 0xc);
  puVar5[1] = uVar6;
  puVar5 = (undefined4 *)puVar3[7];
  *puVar5 = uVar10;
  puVar5[1] = uVar9;
  puVar5 = (undefined4 *)puVar3[8];
  *puVar5 = uVar14;
  puVar5[1] = uVar16;
  local_2c = (uint *)s_cState_Attack_0039d150;
  local_30 = iVar7;
  if ((uint)puVar3[2] < 2) {
    iVar4 = puVar3[3];
  }
  else {
    iVar4 = puVar3[3] + 0x24;
  }
  puVar15 = *(uint **)(iVar4 + 4);
  (**(code **)(iVar7 + 8))(&local_30);
  uVar11 = 0;
  do {
    if (*(char *)((int)local_2c + uVar11) == '\0') {
      if ((int)uVar11 < 0x40001) goto LAB_0039d16c;
      break;
    }
    uVar11 = uVar11 + 1;
  } while ((int)uVar11 < 0x40001);
  uVar11 = 0;
LAB_0039d16c:
  if (*(int *)(iVar4 + 8) <= (int)uVar11) {
    uVar11 = *(int *)(iVar4 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar15,local_2c,uVar11);
  *(undefined1 *)((int)puVar15 + uVar11) = 0;
  uVar10 = *(undefined4 *)(iVar12 + 0x38);
  iVar4 = puVar3[6];
  uVar14 = *(undefined4 *)(iVar12 + 0x28);
  uVar16 = *(undefined4 *)(iVar12 + 0x2c);
  uVar6 = *(undefined4 *)(iVar12 + 0x30);
  uVar9 = *(undefined4 *)(iVar12 + 0x34);
  *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(iVar12 + 0x24);
  *(undefined4 *)(iVar4 + 0xc) = uVar14;
  iVar12 = puVar3[7];
  *(undefined4 *)(iVar12 + 8) = uVar16;
  *(undefined4 *)(iVar12 + 0xc) = uVar6;
  iVar12 = puVar3[8];
  *(undefined4 *)(iVar12 + 8) = uVar9;
  *(undefined4 *)(iVar12 + 0xc) = uVar10;
  func_006687F0(puVar3,0);
  func_0039CAF0((int)puVar13);
  return puVar13;
}

