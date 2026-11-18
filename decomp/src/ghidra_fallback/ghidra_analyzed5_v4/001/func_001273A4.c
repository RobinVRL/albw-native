#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00127004(int param_1,uint param_2);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F87F8(int param_1,int param_2);
extern int func_004FACA4(int param_1,uint param_2,int *param_3);
extern int func_004FB344(int param_1,int param_2);
extern int func_004FB468(int param_1);
extern int func_004FC218(int param_1,char param_2,int param_3,ushort param_4);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern int func_00588BF0(int param_1,int param_2);
extern int func_00656794(undefined4 *param_1,undefined1 param_2);
extern uint *DAT_001276c0;
extern int DAT_001276c4;
extern undefined4 DAT_001276c8;
extern int DAT_001276cc;
extern int DAT_001276d0;
extern undefined *DAT_001276d4;
extern int DAT_001276d8;
extern int DAT_001276e8;
extern undefined4 DAT_00127980;
extern char s_cState_Die_00127974[];
extern char s_cState_Reaction_00127964[];
extern char s_cState_Wait_001276dc[];
extern char s_cState_Walk_001276ec[];

// USA 001273A4 <- EU 001273A4 (Ghidra, non-matching)
// GLOBAL DAT_001276c0 uint *
// GLOBAL DAT_001276c4 int
// GLOBAL DAT_001276c8 undefined4
// GLOBAL DAT_001276cc int
// GLOBAL DAT_001276d0 int
// GLOBAL DAT_001276d4 undefined *
// GLOBAL DAT_001276d8 int
// GLOBAL DAT_001276e8 int
// GLOBAL DAT_00127980 undefined4
// GLOBAL s_cState_Die_00127974 string
// GLOBAL s_cState_Reaction_00127964 string
// GLOBAL s_cState_Wait_001276dc string
// GLOBAL s_cState_Walk_001276ec string

undefined4 * func_001273A4(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  bool bVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  uint extraout_r1;
  undefined4 uVar10;
  float *in_r3;
  undefined4 uVar11;
  undefined4 *puVar12;
  uint uVar13;
  undefined4 uVar14;
  uint *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(uint * *)(albw_frame + 0x4))
  piVar3 = func_004FD464(param_1,param_2,DAT_001276c0);
  iVar9 = DAT_001276c4;
  *piVar3 = DAT_001276c4;
  piVar3[200] = iVar9 + 0x84;
  puVar4 = func_0010A794(piVar3 + 0x22f);
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  uVar16 = DAT_001276c8;
  puVar4[9] = 0;
  puVar12 = puVar4 + -0x22f;
  puVar4[10] = uVar16;
  puVar4[0xb] = 0;
  *(undefined1 *)(puVar4 + 0xc) = 0;
  *(undefined1 *)((int)puVar4 + 0x31) = 0;
  if ((*(short *)((int)puVar4 + -0x886) == 0) || (bVar2 = func_00588BF0((int)puVar12,0), bVar2)) {
    func_004FB344((int)puVar12,5);
    iVar9 = DAT_001276cc;
    uVar13 = 0;
    do {
      func_004FACA4((int)puVar12,uVar13,(int *)(iVar9 + uVar13 * 8));
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < 5);
    func_004FB468((int)puVar12);
    func_00127004((int)puVar12,extraout_r1);
    func_004F5BD8((int)puVar12,(uint *)0x0,(int **)0x0,in_r3);
    puVar4[5] = puVar12;
    *(undefined1 *)((int)puVar4 + 6) = 4;
    iVar5 = func_0010BA78(0x40);
    iVar9 = DAT_001276d0;
    puVar4[6] = iVar5;
    puVar4[7] = iVar5 + (uint)*(byte *)((int)puVar4 + 6) * 8;
    iVar6 = 4;
    puVar7 = (undefined4 *)(iVar5 + -8);
    do {
      uVar16 = *(undefined4 *)(iVar9 + 0x68);
      iVar6 = iVar6 + -1;
      puVar7[2] = *(undefined4 *)(iVar9 + 100);
      puVar7[3] = uVar16;
      uVar16 = *(undefined4 *)(iVar9 + 0x68);
      puVar7[4] = *(undefined4 *)(iVar9 + 100);
      puVar7[5] = uVar16;
      puVar7 = puVar7 + 4;
    } while (iVar6 != 0);
    bVar1 = *(byte *)((int)puVar4 + 6);
    uVar13 = (uint)bVar1;
    puVar7 = (undefined4 *)func_0010BA78(uVar13 << 3);
    puVar4[8] = puVar7;
    if (uVar13 != 0) {
      puVar8 = puVar7 + -2;
      if ((bVar1 & 1) != 0) {
        uVar16 = *(undefined4 *)(iVar9 + 0x30);
        *puVar7 = *(undefined4 *)(iVar9 + 0x2c);
        puVar7[1] = uVar16;
        puVar8 = puVar7;
      }
      for (iVar5 = (int)uVar13 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
        uVar16 = *(undefined4 *)(iVar9 + 0x30);
        puVar8[2] = *(undefined4 *)(iVar9 + 0x2c);
        puVar8[3] = uVar16;
        uVar16 = *(undefined4 *)(iVar9 + 0x30);
        puVar8[4] = *(undefined4 *)(iVar9 + 0x2c);
        puVar8[5] = uVar16;
        puVar8 = puVar8 + 4;
      }
    }
    puVar7 = (undefined4 *)func_0010CEE0(0x98,(int *)0x0,4);
    iVar9 = 0;
    if (puVar7 != (undefined4 *)0x0) {
      puVar7[1] = 4;
      *puVar7 = 0x24;
      iVar9 = func_00100118((int)(puVar7 + 2),DAT_001276d4,0x24,4);
    }
    if (iVar9 != 0) {
      puVar4[3] = iVar9;
      puVar4[2] = 4;
    }
    iVar9 = DAT_001276d8;
    puVar4[-0x15a] = puVar4;
    iVar5 = DAT_001276e8;
    *(undefined2 *)(iVar9 + (int)puVar12) = 4;
    local_2c = (uint *)s_cState_Wait_001276dc;
    local_30 = iVar5;
    iVar9 = puVar4[3];
    puVar15 = *(uint **)(iVar9 + 4);
    (**(code **)(iVar5 + 8))(&local_30);
    uVar13 = 0;
    do {
      if (*(char *)((int)local_2c + uVar13) == '\0') {
        if ((int)uVar13 < 0x40001) goto LAB_001275fc;
        break;
      }
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < 0x40001);
    uVar13 = 0;
LAB_001275fc:
    iVar9 = *(int *)(iVar9 + 8);
    if (iVar9 <= (int)uVar13) {
      uVar13 = iVar9 - 1;
    }
    (**(code **)(local_30 + 8))(&local_30);
    func_0010E3C4(puVar15,local_2c,uVar13);
    *(undefined1 *)((int)puVar15 + uVar13) = 0;
    puVar7 = (undefined4 *)puVar4[6];
    uVar11 = *(undefined4 *)(DAT_001276d0 + 0x20);
    uVar14 = *(undefined4 *)(DAT_001276d0 + 0x24);
    uVar10 = *(undefined4 *)(DAT_001276d0 + 0x28);
    uVar17 = *(undefined4 *)(DAT_001276d0 + 0x2c);
    uVar16 = *(undefined4 *)(DAT_001276d0 + 0x30);
    *puVar7 = *(undefined4 *)(DAT_001276d0 + 0x1c);
    puVar7[1] = uVar11;
    puVar7 = (undefined4 *)puVar4[7];
    puVar7[1] = uVar10;
    *puVar7 = uVar14;
    puVar7 = (undefined4 *)puVar4[8];
    puVar7[1] = uVar16;
    *puVar7 = uVar17;
    local_2c = (uint *)s_cState_Walk_001276ec;
    local_30 = iVar5;
    if ((uint)puVar4[2] < 2) {
      iVar9 = puVar4[3];
    }
    else {
      iVar9 = puVar4[3] + 0x24;
    }
    puVar15 = *(uint **)(iVar9 + 4);
    (**(code **)(iVar5 + 8))(&local_30);
    uVar13 = 0;
    do {
      if (*(char *)((int)local_2c + uVar13) == '\0') {
        if ((int)uVar13 < 0x40001) goto LAB_00127704;
        break;
      }
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < 0x40001);
    uVar13 = 0;
LAB_00127704:
    if (*(int *)(iVar9 + 8) <= (int)uVar13) {
      uVar13 = *(int *)(iVar9 + 8) - 1;
    }
    (**(code **)(local_30 + 8))(&local_30);
    func_0010E3C4(puVar15,local_2c,uVar13);
    iVar9 = DAT_001276d0;
    *(undefined1 *)((int)puVar15 + uVar13) = 0;
    iVar6 = puVar4[6];
    uVar10 = *(undefined4 *)(iVar9 + 0x38);
    uVar11 = *(undefined4 *)(iVar9 + 0x3c);
    uVar14 = *(undefined4 *)(iVar9 + 0x40);
    uVar16 = *(undefined4 *)(iVar9 + 0x2c);
    uVar17 = *(undefined4 *)(iVar9 + 0x30);
    *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(iVar9 + 0x34);
    *(undefined4 *)(iVar6 + 0xc) = uVar10;
    iVar9 = puVar4[7];
    *(undefined4 *)(iVar9 + 8) = uVar11;
    *(undefined4 *)(iVar9 + 0xc) = uVar14;
    iVar9 = puVar4[8];
    *(undefined4 *)(iVar9 + 8) = uVar16;
    *(undefined4 *)(iVar9 + 0xc) = uVar17;
    local_2c = (uint *)s_cState_Reaction_00127964;
    local_30 = iVar5;
    if ((uint)puVar4[2] < 3) {
      iVar9 = puVar4[3];
    }
    else {
      iVar9 = puVar4[3] + 0x48;
    }
    puVar15 = *(uint **)(iVar9 + 4);
    (**(code **)(iVar5 + 8))(&local_30);
    uVar13 = 0;
    do {
      if (*(char *)((int)local_2c + uVar13) == '\0') {
        if ((int)uVar13 < 0x40001) goto LAB_001277d4;
        break;
      }
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < 0x40001);
    uVar13 = 0;
LAB_001277d4:
    if (*(int *)(iVar9 + 8) <= (int)uVar13) {
      uVar13 = *(int *)(iVar9 + 8) - 1;
    }
    (**(code **)(local_30 + 8))(&local_30);
    func_0010E3C4(puVar15,local_2c,uVar13);
    *(undefined1 *)((int)puVar15 + uVar13) = 0;
    iVar9 = DAT_001276d0;
    iVar6 = puVar4[6];
    uVar11 = *(undefined4 *)(DAT_001276d0 + 0x4c);
    uVar17 = *(undefined4 *)(DAT_001276d0 + 0x50);
    uVar16 = *(undefined4 *)(DAT_001276d0 + 0x2c);
    uVar10 = *(undefined4 *)(DAT_001276d0 + 0x30);
    uVar14 = *(undefined4 *)(DAT_001276d0 + 0x48);
    *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(DAT_001276d0 + 0x44);
    *(undefined4 *)(iVar6 + 0x14) = uVar14;
    iVar6 = puVar4[7];
    *(undefined4 *)(iVar6 + 0x10) = uVar11;
    *(undefined4 *)(iVar6 + 0x14) = uVar17;
    iVar6 = puVar4[8];
    *(undefined4 *)(iVar6 + 0x10) = uVar16;
    *(undefined4 *)(iVar6 + 0x14) = uVar10;
    local_2c = (uint *)s_cState_Die_00127974;
    local_30 = iVar5;
    if ((uint)puVar4[2] < 4) {
      iVar6 = puVar4[3];
    }
    else {
      iVar6 = puVar4[3] + 0x6c;
    }
    puVar15 = *(uint **)(iVar6 + 4);
    (**(code **)(iVar5 + 8))(&local_30);
    uVar13 = 0;
    do {
      if (*(char *)((int)local_2c + uVar13) == '\0') {
        if ((int)uVar13 < 0x40001) goto LAB_001278ac;
        break;
      }
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < 0x40001);
    uVar13 = 0;
LAB_001278ac:
    if (*(int *)(iVar6 + 8) <= (int)uVar13) {
      uVar13 = *(int *)(iVar6 + 8) - 1;
    }
    (**(code **)(local_30 + 8))(&local_30);
    func_0010E3C4(puVar15,local_2c,uVar13);
    *(undefined1 *)((int)puVar15 + uVar13) = 0;
    iVar5 = puVar4[6];
    uVar10 = *(undefined4 *)(iVar9 + 0x5c);
    uVar11 = *(undefined4 *)(iVar9 + 0x2c);
    uVar14 = *(undefined4 *)(iVar9 + 0x58);
    uVar16 = *(undefined4 *)(iVar9 + 0x60);
    uVar17 = *(undefined4 *)(iVar9 + 0x30);
    *(undefined4 *)(iVar5 + 0x18) = *(undefined4 *)(iVar9 + 0x54);
    *(undefined4 *)(iVar5 + 0x1c) = uVar14;
    iVar9 = puVar4[7];
    *(undefined4 *)(iVar9 + 0x18) = uVar10;
    *(undefined4 *)(iVar9 + 0x1c) = uVar16;
    iVar9 = puVar4[8];
    *(undefined4 *)(iVar9 + 0x18) = uVar11;
    *(undefined4 *)(iVar9 + 0x1c) = uVar17;
    func_00656794(puVar4,0);
    func_004F87F8((int)puVar12,3);
    func_004FC218((int)puVar12,'\x02',-1,(ushort)DAT_00127980);
    *(undefined1 *)((int)puVar4 + -0x13f) = 4;
    *(undefined1 *)((int)puVar4 + -0x13e) = 0xff;
    *(undefined1 *)((int)puVar4 + -0x13d) = 0;
  }
  else {
    *(undefined1 *)((int)puVar4 + -0x5e5) = 1;
  }
  return puVar12;
}

