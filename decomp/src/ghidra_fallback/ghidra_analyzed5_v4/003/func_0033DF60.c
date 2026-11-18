#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_0019B04C(uint param_1);
extern int func_002C2D00(int *param_1);
extern int func_004D7F70(float *param_1,uint param_2);
extern int func_00533400(int param_1,int *param_2);
extern int func_00665F4C(undefined4 *param_1,undefined1 param_2);
extern int DAT_0033e2fc;
extern undefined4 *DAT_0033e300;
extern int DAT_0033e304;
extern uint *DAT_0033e308;
extern uint *DAT_0033e320;
extern uint *DAT_0033e324;
extern uint *DAT_0033e338;
extern undefined4 *DAT_0033e33c;
extern undefined *DAT_0033e340;
extern undefined4 DAT_0033e510;
extern undefined4 DAT_0033e514;
extern undefined4 DAT_0033e518;
extern int *DAT_0033e51c;
extern char s_Heishi_great_shield_0033e30c[];
extern char s_Moriblin_shield_0033e328[];
extern char s_cState_Drop_0033e504[];
extern char s_cState_Hook_0033e344[];

// USA 0033DF60 <- EU 0033DF3C (Ghidra, non-matching)
// GLOBAL DAT_0033e2fc int
// GLOBAL DAT_0033e300 undefined4 *
// GLOBAL DAT_0033e304 int
// GLOBAL DAT_0033e308 uint *
// GLOBAL DAT_0033e320 uint *
// GLOBAL DAT_0033e324 uint *
// GLOBAL DAT_0033e338 uint *
// GLOBAL DAT_0033e33c undefined4 *
// GLOBAL DAT_0033e340 undefined *
// GLOBAL DAT_0033e510 undefined4
// GLOBAL DAT_0033e514 undefined4
// GLOBAL DAT_0033e518 undefined4
// GLOBAL DAT_0033e51c int *
// GLOBAL s_Heishi_great_shield_0033e30c string
// GLOBAL s_Moriblin_shield_0033e328 string
// GLOBAL s_cState_Drop_0033e504 string
// GLOBAL s_cState_Hook_0033e344 string

undefined4 * func_0033DF60(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define local_94 (*(int *)(albw_frame + 0xc))
  #define local_90 (*(uint * *)(albw_frame + 0x10))
  #define local_8c (*(int *)(albw_frame + 0x14))
  #define local_88 ((undefined1 *)(albw_frame + 0x18))
  #define uStack_71 (*(undefined1 *)(albw_frame + 0x2f))
  #define local_70 (*(undefined4 * *)(albw_frame + 0x30))
  #define puStack_6c (*(uint * *)(albw_frame + 0x34))
  #define local_68 (*(undefined4 * *)(albw_frame + 0x38))
  #define local_64 (*(uint * *)(albw_frame + 0x3c))
  #define local_60 (*(int *)(albw_frame + 0x40))
  #define uStack_5c (*(undefined4 *)(albw_frame + 0x44))
  #define local_58 (*(undefined4 *)(albw_frame + 0x48))
  #define local_54 (*(undefined1 *)(albw_frame + 0x4c))
  #define local_53 (*(undefined1 *)(albw_frame + 0x4d))
  #define local_50 (*(undefined4 *)(albw_frame + 0x50))
  #define local_4c (*(undefined4 *)(albw_frame + 0x54))
  #define local_48 (*(undefined4 *)(albw_frame + 0x58))
  #define local_44 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x60))
  #define local_3c (*(undefined4 *)(albw_frame + 0x64))
  #define local_38 (*(undefined1 *)(albw_frame + 0x68))
  #define local_37 (*(undefined1 *)(albw_frame + 0x69))
  #define local_30 (*(undefined4 * *)(albw_frame + 0x70))
  #define local_2c (*(uint * *)(albw_frame + 0x74))
  piVar4 = func_00150E40(param_1,param_2);
  iVar10 = DAT_0033e2fc;
  *piVar4 = DAT_0033e2fc;
  piVar4[200] = iVar10 + 0x54;
  puVar5 = func_0010A794(piVar4 + 0x103);
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[10] = param_2[0x13];
  puVar5[0x17] = 0;
  puVar5[0x18] = 0;
  puVar5[0x19] = 0;
  puVar5[0x1a] = 0;
  local_90 = (uint *)local_88;
  puVar5[0x1b] = 0;
  puVar2 = DAT_0033e300;
  local_8c = 0x18;
  uStack_71 = 0;
  local_88[0] = 0;
  iVar10 = 0;
  local_94 = DAT_0033e304;
  if ((short)param_2[0xb] == 0) {
    iVar6 = func_0019B04C(*DAT_0033e320);
    if (iVar6 != 0) {
      iVar10 = *(int *)(iVar6 + 0x1c8);
    }
    if ((iVar6 == 0 || iVar10 == 0) && (iVar6 = func_0019B04C(*DAT_0033e324), iVar6 != 0)) {
      iVar10 = *(int *)(iVar6 + 0x1c8);
    }
    puVar11 = local_90;
    local_64 = (uint *)s_Moriblin_shield_0033e328;
    local_68 = puVar2;
    (*(code *)puVar2[2])(&local_68);
    uVar12 = 0;
    do {
      if (*(char *)((int)local_64 + uVar12) == '\0') {
        if ((int)uVar12 < 0x40001) goto LAB_0033e0ac;
        break;
      }
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < 0x40001);
    uVar12 = 0;
LAB_0033e0ac:
    if ((int)uVar12 < local_8c) goto LAB_0033e0d8;
  }
  else {
    iVar6 = func_0019B04C(*DAT_0033e308);
    puVar11 = local_90;
    if (iVar6 != 0) {
      iVar10 = *(int *)(iVar6 + 0x1c8);
    }
    local_64 = (uint *)s_Heishi_great_shield_0033e30c;
    local_68 = puVar2;
    (*(code *)puVar2[2])(&local_68);
    uVar12 = 0;
    do {
      if (*(char *)((int)local_64 + uVar12) == '\0') {
        if ((int)uVar12 < 0x40001) goto LAB_0033e0cc;
        break;
      }
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < 0x40001);
    uVar12 = 0;
LAB_0033e0cc:
    if ((int)uVar12 < local_8c) goto LAB_0033e0d8;
  }
  uVar12 = local_8c - 1;
LAB_0033e0d8:
  (*(code *)local_68[2])(&local_68);
  func_0010E3C4(puVar11,local_64,uVar12);
  *(undefined1 *)((int)puVar11 + uVar12) = 0;
  if (iVar10 == 0) {
    piVar4 = (int *)puVar5[9];
  }
  else {
    local_60 = func_00533400(iVar10,&local_94);
    local_70 = puVar2;
    puStack_6c = DAT_0033e338;
    local_68 = puVar2;
    local_64 = DAT_0033e338;
    uStack_5c = 0;
    local_38 = 1;
    local_54 = 0;
    local_4c = 0;
    local_58 = 0;
    local_53 = 0;
    local_3c = 0;
    local_37 = 0xc4;
    local_40 = 0;
    local_50 = 0;
    local_44 = 0;
    local_48 = 0;
    piVar4 = func_002C2D00((int *)&local_70);
    puVar5[9] = piVar4;
  }
  if (piVar4 == (int *)0x0) {
    *(undefined1 *)((int)puVar5 + -0x135) = 1;
  }
  else {
    puVar5[5] = puVar5 + -0x103;
    *(undefined1 *)((int)puVar5 + 6) = 2;
    local_68 = puVar5;
    iVar10 = func_0010BA78(0x20);
    puVar3 = DAT_0033e33c;
    puVar5[6] = iVar10;
    puVar5[7] = iVar10 + (uint)*(byte *)((int)puVar5 + 6) * 8;
    iVar6 = 2;
    puVar7 = (undefined4 *)(iVar10 + -8);
    do {
      uVar13 = puVar3[0xb];
      iVar6 = iVar6 + -1;
      puVar7[2] = puVar3[10];
      puVar7[3] = uVar13;
      uVar13 = puVar3[0xb];
      puVar7[4] = puVar3[10];
      puVar7[5] = uVar13;
      puVar7 = puVar7 + 4;
    } while (iVar6 != 0);
    bVar1 = *(byte *)((int)puVar5 + 6);
    uVar12 = (uint)bVar1;
    puVar7 = (undefined4 *)func_0010BA78(uVar12 << 3);
    puVar5[8] = puVar7;
    if (uVar12 != 0) {
      puVar8 = puVar7 + -2;
      if ((bVar1 & 1) != 0) {
        uVar13 = puVar3[5];
        *puVar7 = puVar3[4];
        puVar7[1] = uVar13;
        puVar8 = puVar7;
      }
      for (iVar10 = (int)uVar12 >> 1; iVar10 != 0; iVar10 = iVar10 + -1) {
        uVar13 = puVar3[5];
        puVar8[2] = puVar3[4];
        puVar8[3] = uVar13;
        uVar13 = puVar3[5];
        puVar8[4] = puVar3[4];
        puVar8[5] = uVar13;
        puVar8 = puVar8 + 4;
      }
    }
    puVar7 = (undefined4 *)func_0010CEE0(0x50,(int *)0x0,4);
    iVar10 = 0;
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = 0x24;
      puVar7[1] = 2;
      iVar10 = func_00100118((int)(puVar7 + 2),DAT_0033e340,0x24,2);
    }
    if (iVar10 != 0) {
      puVar5[2] = 2;
      puVar5[3] = iVar10;
    }
    puVar5[-0x2e] = local_68;
    *(undefined2 *)((int)puVar5 + -0xb2) = 2;
    local_2c = (uint *)s_cState_Hook_0033e344;
    local_30 = puVar2;
    iVar10 = puVar5[3];
    puVar11 = *(uint **)(iVar10 + 4);
    (*(code *)puVar2[2])(&local_30);
    uVar12 = 0;
    do {
      if (*(char *)((int)local_2c + uVar12) == '\0') {
        if ((int)uVar12 < 0x40001) goto LAB_0033e35c;
        break;
      }
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < 0x40001);
    uVar12 = 0;
LAB_0033e35c:
    iVar10 = *(int *)(iVar10 + 8);
    if (iVar10 <= (int)uVar12) {
      uVar12 = iVar10 - 1;
    }
    (*(code *)local_30[2])(&local_30);
    func_0010E3C4(puVar11,local_2c,uVar12);
    *(undefined1 *)((int)puVar11 + uVar12) = 0;
    puVar7 = (undefined4 *)puVar5[6];
    uVar9 = puVar3[2];
    uVar13 = puVar3[5];
    uVar14 = puVar3[3];
    uVar15 = puVar3[4];
    uVar16 = puVar3[1];
    *puVar7 = *puVar3;
    puVar7[1] = uVar16;
    puVar7 = (undefined4 *)puVar5[7];
    *puVar7 = uVar9;
    puVar7[1] = uVar14;
    puVar7 = (undefined4 *)puVar5[8];
    *puVar7 = uVar15;
    puVar7[1] = uVar13;
    local_2c = (uint *)s_cState_Drop_0033e504;
    local_30 = puVar2;
    if ((uint)puVar5[2] < 2) {
      iVar10 = puVar5[3];
    }
    else {
      iVar10 = puVar5[3] + 0x24;
    }
    puVar11 = *(uint **)(iVar10 + 4);
    (*(code *)puVar2[2])(&local_30);
    uVar12 = 0;
    do {
      if (*(char *)((int)local_2c + uVar12) == '\0') {
        if ((int)uVar12 < 0x40001) goto LAB_0033e42c;
        break;
      }
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < 0x40001);
    uVar12 = 0;
LAB_0033e42c:
    if (*(int *)(iVar10 + 8) <= (int)uVar12) {
      uVar12 = *(int *)(iVar10 + 8) - 1;
    }
    (*(code *)local_30[2])(&local_30);
    func_0010E3C4(puVar11,local_2c,uVar12);
    *(undefined1 *)((int)puVar11 + uVar12) = 0;
    iVar10 = puVar5[6];
    uVar13 = puVar3[5];
    uVar14 = puVar3[7];
    uVar9 = puVar3[8];
    uVar15 = puVar3[9];
    uVar16 = puVar3[4];
    *(undefined4 *)(iVar10 + 8) = puVar3[6];
    *(undefined4 *)(iVar10 + 0xc) = uVar14;
    iVar10 = puVar5[7];
    *(undefined4 *)(iVar10 + 8) = uVar9;
    *(undefined4 *)(iVar10 + 0xc) = uVar15;
    iVar10 = puVar5[8];
    *(undefined4 *)(iVar10 + 8) = uVar16;
    *(undefined4 *)(iVar10 + 0xc) = uVar13;
    if (*(short *)((int)param_2 + 0x2a) == 1) {
      func_00665F4C(local_68,0);
    }
    else {
      func_00665F4C(local_68,1);
      piVar4 = DAT_0033e51c;
      uVar9 = DAT_0033e518;
      uVar13 = DAT_0033e514;
      puVar5[-0xc] = DAT_0033e510;
      puVar5[-0xb] = uVar13;
      puVar5[-10] = uVar9;
      func_004D7F70((float *)(puVar5 + -0xc),*piVar4 + param_2[8]);
    }
  }
  return puVar5 + -0x103;
}

