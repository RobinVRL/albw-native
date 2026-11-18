#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_001512E8(int *param_1);
extern int func_0034CAA0(undefined4 *param_1);
extern int func_004356B4(int *param_1);
extern undefined4 func_004A7F00(int param_1,int param_2,uint param_3);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_004ED9C8(int param_1);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_004EE484(undefined4 *param_1);
extern int func_0054D89C(int param_1,uint param_2);
extern int func_0054D964(int param_1,uint param_2);
extern int func_0054DDF4(int param_1,uint param_2);
extern float func_0054DE3C(int param_1,uint param_2,int param_3);
extern int func_00588BF0(int param_1,int param_2);
extern int func_006661D4(undefined4 *param_1,undefined1 param_2);
extern int DAT_0033fe1c;
extern int DAT_0033fe20;
extern int *DAT_0033fe24;
extern int DAT_0033fe28;
extern undefined4 DAT_0033fe2c;
extern undefined4 DAT_0033fe30;
extern int *DAT_0033fe34;
extern undefined4 *DAT_0033fe38;
extern undefined *DAT_00340240;
extern int DAT_00340244;
extern int DAT_00340254;
extern undefined4 *DAT_00340264;
extern char s_cState_Fall_00340268[];
extern char s_cState_Lava_00340274[];
extern char s_cState_Move_00340258[];
extern char s_cState_Stop_00340248[];

// USA 0033FA2C <- EU 0033FA08 (Ghidra, non-matching)
// GLOBAL DAT_0033fe1c int
// GLOBAL DAT_0033fe20 int
// GLOBAL DAT_0033fe24 int *
// GLOBAL DAT_0033fe28 int
// GLOBAL DAT_0033fe2c undefined4
// GLOBAL DAT_0033fe30 undefined4
// GLOBAL DAT_0033fe34 int *
// GLOBAL DAT_0033fe38 undefined4 *
// GLOBAL DAT_00340240 undefined *
// GLOBAL DAT_00340244 int
// GLOBAL DAT_00340254 int
// GLOBAL DAT_00340264 undefined4 *
// GLOBAL s_cState_Fall_00340268 string
// GLOBAL s_cState_Lava_00340274 string
// GLOBAL s_cState_Move_00340258 string
// GLOBAL s_cState_Stop_00340248 string

undefined4 * func_0033FA2C(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  uint uVar17;
  int *piVar18;
  uint *puVar19;
  undefined4 uVar20;
  int iVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  int iVar25;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_3c (*(uint *)(albw_frame + 0x4))
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(uint * *)(albw_frame + 0xc))
  piVar4 = func_00150E40(param_1,param_2);
  iVar6 = DAT_0033fe1c;
  piVar4[200] = DAT_0033fe1c + 0x54;
  *piVar4 = iVar6;
  piVar4[0x103] = 0;
  piVar4[0x104] = 0;
  puVar5 = (undefined4 *)func_0010BAB4(100);
  iVar6 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    iVar6 = func_004EE484(puVar5);
  }
  piVar4[0x105] = iVar6;
  iVar6 = func_0054D964((int)piVar4,0);
  piVar4[0x106] = iVar6;
  puVar7 = (undefined4 *)func_0010BAB4(0x48);
  puVar5 = (undefined4 *)0x0;
  if (puVar7 != (undefined4 *)0x0) {
    puVar5 = func_0034CAA0(puVar7);
  }
  iVar6 = DAT_0033fe20;
  piVar4[0x107] = (int)puVar5;
  piVar4[0x108] = 0;
  piVar4[0x109] = 0;
  piVar4[0x10a] = iVar6;
  piVar4[0x10b] = iVar6;
  piVar4[0x10c] = iVar6;
  piVar18 = DAT_0033fe24;
  piVar4[0x10d] = iVar6;
  iVar12 = piVar18[1];
  piVar4[0x110] = *piVar18;
  piVar4[0x111] = iVar12;
  iVar12 = DAT_0033fe28;
  piVar4[0x10e] = DAT_0033fe28;
  piVar4[0x10f] = (int)piVar4;
  piVar4[0x113] = 0;
  iVar13 = piVar18[0x18];
  iVar14 = piVar18[0x19];
  piVar4[0x112] = iVar12;
  piVar4[0x114] = iVar13;
  piVar4[0x115] = iVar14;
  puVar5 = func_0010A794(piVar4 + 0x116);
  puVar5[5] = 0;
  puVar5[6] = 0;
  uVar11 = DAT_0033fe2c;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[9] = uVar11;
  puVar7 = puVar5 + -0x116;
  puVar5[10] = iVar6;
  puVar5[0xb] = iVar6;
  puVar5[0xc] = iVar6;
  puVar5[0xd] = iVar6;
  puVar5[0xe] = uVar11;
  puVar5[0xf] = iVar6;
  puVar5[0x10] = iVar6;
  puVar5[0x11] = iVar6;
  puVar5[0x12] = uVar11;
  puVar5[0x13] = iVar6;
  puVar5[0x14] = iVar6;
  puVar5[0x15] = uVar11;
  puVar5[0x1a] = 0;
  puVar5[0x1b] = 0;
  puVar5[0x1c] = iVar6;
  bVar3 = func_00588BF0((int)puVar7,0);
  if (bVar3) {
    *(undefined1 *)((int)puVar5 + -0x181) = 1;
  }
  else {
    piVar4 = (int *)func_0014E428((int)puVar7,0,0,0,1,0,0);
    puVar5[-0x13] = piVar4;
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0x10))(piVar4,0x74);
      iVar6 = puVar5[-0x13];
      *(uint *)(iVar6 + 0x164) = *(uint *)(iVar6 + 0x164) | 0x40000000;
      func_004D8AEC((float *)(iVar6 + 0x80),puVar5[-0x1c],(float *)(puVar5 + -0x22));
    }
    iVar6 = piVar18[2];
    iVar12 = piVar18[3];
    puVar5[-3] = puVar7;
    puVar5[-2] = iVar6;
    puVar5[-1] = iVar12;
    puVar5[-0x1b] = puVar5 + -4;
    iVar6 = func_0054DDF4((int)puVar7,0);
    puVar5[-0x2e] = iVar6;
    puVar5[-0x2d] = iVar6;
    local_3c = puVar5[-99];
    piVar4 = puVar5 + -0x10;
    func_0014EB8C(puVar5[-0x11],puVar5[-0x10],(undefined2 *)puVar5[-0x2e],&local_3c,
                  *(undefined2 *)(puVar5 + -0x101),0,(short)DAT_0033fe30);
    fVar22 = func_0054DE3C(puVar7,0,1);
    puVar5[-9] = ALBW_AS_U32(fVar22);
    puVar5[-0x3c] = puVar5[-0x22];
    puVar5[-0x3b] = ALBW_AS_U32(ALBW_AS_F32(puVar5[-0x21]) + fVar22);
    puVar5[-0x3a] = puVar5[-0x20];
    puVar5[-0x21] = ALBW_AS_U32(ALBW_AS_F32(puVar5[-0x21]) + fVar22);
    iVar6 = *piVar4;
    *(undefined2 *)(iVar6 + 0x28) = 0xe0;
    *(uint *)(iVar6 + 0x2c) = *(uint *)(iVar6 + 0x2c) & 0xffffe0ff;
    *(uint *)(puVar5[-0x10] + 0x2c) = *(uint *)(puVar5[-0x10] + 0x2c) | 0x2000;
    iVar6 = *piVar4;
    *(undefined4 *)(iVar6 + 4) = puVar5[-0x22];
    *(undefined4 *)(iVar6 + 8) = puVar5[-0x21];
    *(undefined4 *)(iVar6 + 0xc) = puVar5[-0x20];
    func_004356B4((int *)*piVar4);
    iVar6 = func_0054D964((int)puVar7,1);
    puVar5[-0xe] = iVar6;
    puVar8 = (undefined4 *)func_0010BAB4(0x48);
    puVar9 = (undefined4 *)0x0;
    if (puVar8 != (undefined4 *)0x0) {
      puVar9 = func_004EDC9C(puVar8);
    }
    puVar5[-0xd] = puVar9;
    piVar4 = puVar5 + -0xd;
    if (puVar5[-0xe] == 0 || puVar9 == (undefined4 *)0x0) {
      *(undefined1 *)((int)puVar5 + -0x181) = 1;
    }
    else {
      *(undefined2 *)(puVar5[-0xe] + 0x28) = 0xe4;
      *(undefined4 *)(puVar5[-0xd] + 0x18) = puVar5[-0xe];
      func_004ED9C8(*piVar4);
      local_3c = puVar5[-99];
      func_004EDAD0(*piVar4,&local_3c);
      *(undefined2 *)(*piVar4 + 0x2c) = *(undefined2 *)(puVar5 + -0x101);
      func_004A7F00(*DAT_0033fe34,*piVar4,2);
      piVar4 = (int *)func_0054D89C((int)puVar7,0);
      puVar5[-0x12] = piVar4;
      if (piVar4 != (int *)0x0) {
        func_001512E8(piVar4);
      }
      uVar11 = *DAT_0033fe38;
      uVar15 = DAT_0033fe38[1];
      uVar20 = DAT_0033fe38[2];
      puVar5[0x19] = DAT_0033fe38[3];
      puVar5[0x16] = uVar11;
      puVar5[0x17] = uVar15;
      puVar5[0x18] = uVar20;
      *(undefined1 *)((int)puVar5 + 6) = 4;
      puVar5[5] = puVar7;
      iVar6 = func_0010BA78(0x40);
      puVar5[6] = iVar6;
      puVar5[7] = iVar6 + (uint)*(byte *)((int)puVar5 + 6) * 8;
      iVar12 = 4;
      piVar4 = (int *)(iVar6 + -8);
      do {
        iVar6 = piVar18[0x17];
        iVar12 = iVar12 + -1;
        piVar4[2] = piVar18[0x16];
        piVar4[3] = iVar6;
        iVar6 = piVar18[0x17];
        piVar4[4] = piVar18[0x16];
        piVar4[5] = iVar6;
        piVar4 = piVar4 + 4;
      } while (iVar12 != 0);
      bVar1 = *(byte *)((int)puVar5 + 6);
      uVar17 = (uint)bVar1;
      piVar4 = (int *)func_0010BA78(uVar17 << 3);
      puVar5[8] = piVar4;
      if (uVar17 != 0) {
        piVar10 = piVar4 + -2;
        if ((bVar1 & 1) != 0) {
          iVar6 = piVar18[9];
          *piVar4 = piVar18[8];
          piVar4[1] = iVar6;
          piVar10 = piVar4;
        }
        for (iVar6 = (int)uVar17 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
          iVar12 = piVar18[9];
          piVar10[2] = piVar18[8];
          piVar10[3] = iVar12;
          iVar12 = piVar18[9];
          piVar10[4] = piVar18[8];
          piVar10[5] = iVar12;
          piVar10 = piVar10 + 4;
        }
      }
      puVar9 = (undefined4 *)func_0010CEE0(0x98,(int *)0x0,4);
      iVar6 = 0;
      if (puVar9 != (undefined4 *)0x0) {
        *puVar9 = 0x24;
        puVar9[1] = 4;
        iVar6 = func_00100118((int)(puVar9 + 2),DAT_00340240,0x24,4);
      }
      if (iVar6 != 0) {
        puVar5[3] = iVar6;
        puVar5[2] = 4;
      }
      iVar6 = DAT_00340244;
      puVar5[-0x41] = puVar5;
      iVar12 = DAT_00340254;
      *(undefined2 *)(iVar6 + (int)puVar7) = 4;
      local_34 = (uint *)s_cState_Stop_00340248;
      local_38 = iVar12;
      iVar6 = puVar5[3];
      puVar19 = *(uint **)(iVar6 + 4);
      (**(code **)(iVar12 + 8))(&local_38);
      uVar17 = 0;
      do {
        if (*(char *)((int)local_34 + uVar17) == '\0') {
          if ((int)uVar17 < 0x40001) goto LAB_0033ff50;
          break;
        }
        uVar17 = uVar17 + 1;
      } while ((int)uVar17 < 0x40001);
      uVar17 = 0;
LAB_0033ff50:
      iVar6 = *(int *)(iVar6 + 8);
      if (iVar6 <= (int)uVar17) {
        uVar17 = iVar6 - 1;
      }
      (**(code **)(local_38 + 8))(&local_38);
      func_0010E3C4(puVar19,local_34,uVar17);
      piVar4 = DAT_0033fe24;
      *(undefined1 *)((int)puVar19 + uVar17) = 0;
      piVar18 = (int *)puVar5[6];
      iVar21 = piVar4[5];
      iVar13 = piVar4[6];
      iVar16 = piVar4[7];
      iVar6 = piVar4[8];
      iVar14 = piVar4[9];
      *piVar18 = piVar4[4];
      piVar18[1] = iVar21;
      piVar4 = (int *)puVar5[7];
      *piVar4 = iVar13;
      piVar4[1] = iVar16;
      piVar4 = (int *)puVar5[8];
      *piVar4 = iVar6;
      piVar4[1] = iVar14;
      local_34 = (uint *)s_cState_Move_00340258;
      local_38 = iVar12;
      if ((uint)puVar5[2] < 2) {
        iVar6 = puVar5[3];
      }
      else {
        iVar6 = puVar5[3] + 0x24;
      }
      puVar19 = *(uint **)(iVar6 + 4);
      (**(code **)(iVar12 + 8))(&local_38);
      uVar17 = 0;
      do {
        if (*(char *)((int)local_34 + uVar17) == '\0') {
          if ((int)uVar17 < 0x40001) goto LAB_0034001c;
          break;
        }
        uVar17 = uVar17 + 1;
      } while ((int)uVar17 < 0x40001);
      uVar17 = 0;
LAB_0034001c:
      if (*(int *)(iVar6 + 8) <= (int)uVar17) {
        uVar17 = *(int *)(iVar6 + 8) - 1;
      }
      (**(code **)(local_38 + 8))(&local_38);
      func_0010E3C4(puVar19,local_34,uVar17);
      *(undefined1 *)((int)puVar19 + uVar17) = 0;
      iVar6 = puVar5[6];
      uVar11 = *DAT_00340264;
      uVar15 = DAT_00340264[1];
      uVar20 = DAT_00340264[3];
      uVar23 = DAT_00340264[4];
      uVar24 = DAT_00340264[5];
      *(undefined4 *)(iVar6 + 8) = DAT_00340264[2];
      *(undefined4 *)(iVar6 + 0xc) = uVar20;
      iVar6 = puVar5[7];
      *(undefined4 *)(iVar6 + 8) = uVar23;
      *(undefined4 *)(iVar6 + 0xc) = uVar24;
      iVar6 = puVar5[8];
      *(undefined4 *)(iVar6 + 8) = uVar11;
      *(undefined4 *)(iVar6 + 0xc) = uVar15;
      local_34 = (uint *)s_cState_Fall_00340268;
      local_38 = iVar12;
      if ((uint)puVar5[2] < 3) {
        iVar6 = puVar5[3];
      }
      else {
        iVar6 = puVar5[3] + 0x48;
      }
      puVar19 = *(uint **)(iVar6 + 4);
      (**(code **)(iVar12 + 8))(&local_38);
      uVar17 = 0;
      do {
        if (*(char *)((int)local_34 + uVar17) == '\0') {
          if ((int)uVar17 < 0x40001) goto LAB_003400e0;
          break;
        }
        uVar17 = uVar17 + 1;
      } while ((int)uVar17 < 0x40001);
      uVar17 = 0;
LAB_003400e0:
      if (*(int *)(iVar6 + 8) <= (int)uVar17) {
        uVar17 = *(int *)(iVar6 + 8) - 1;
      }
      (**(code **)(local_38 + 8))(&local_38);
      func_0010E3C4(puVar19,local_34,uVar17);
      *(undefined1 *)((int)puVar19 + uVar17) = 0;
      piVar4 = DAT_0033fe24;
      iVar6 = puVar5[6];
      iVar14 = DAT_0033fe24[0x10];
      iVar13 = DAT_0033fe24[8];
      iVar16 = DAT_0033fe24[0xf];
      iVar21 = DAT_0033fe24[0x11];
      iVar25 = DAT_0033fe24[9];
      *(int *)(iVar6 + 0x10) = DAT_0033fe24[0xe];
      *(int *)(iVar6 + 0x14) = iVar16;
      iVar6 = puVar5[7];
      *(int *)(iVar6 + 0x10) = iVar14;
      *(int *)(iVar6 + 0x14) = iVar21;
      iVar6 = puVar5[8];
      *(int *)(iVar6 + 0x10) = iVar13;
      *(int *)(iVar6 + 0x14) = iVar25;
      local_34 = (uint *)s_cState_Lava_00340274;
      local_38 = iVar12;
      uVar17 = puVar5[2];
      if (uVar17 < 4) {
        iVar6 = puVar5[3];
        uVar2 = uVar17;
      }
      else {
        iVar6 = iVar12;
        uVar2 = puVar5[3];
      }
      if (3 < uVar17) {
        iVar6 = uVar2 + 0x6c;
      }
      puVar19 = *(uint **)(iVar6 + 4);
      (**(code **)(iVar12 + 8))(&local_38);
      uVar17 = 0;
      do {
        if (*(char *)((int)local_34 + uVar17) == '\0') {
          if ((int)uVar17 < 0x40001) goto LAB_003401b8;
          break;
        }
        uVar17 = uVar17 + 1;
      } while ((int)uVar17 < 0x40001);
      uVar17 = 0;
LAB_003401b8:
      if (*(int *)(iVar6 + 8) <= (int)uVar17) {
        uVar17 = *(int *)(iVar6 + 8) - 1;
      }
      (**(code **)(local_38 + 8))(&local_38);
      func_0010E3C4(puVar19,local_34,uVar17);
      *(undefined1 *)((int)puVar19 + uVar17) = 0;
      iVar12 = piVar4[8];
      iVar13 = piVar4[0x13];
      iVar21 = piVar4[9];
      iVar6 = puVar5[6];
      iVar14 = piVar4[0x14];
      iVar16 = piVar4[0x15];
      *(int *)(iVar6 + 0x18) = piVar4[0x12];
      *(int *)(iVar6 + 0x1c) = iVar13;
      iVar6 = puVar5[7];
      *(int *)(iVar6 + 0x18) = iVar14;
      *(int *)(iVar6 + 0x1c) = iVar16;
      iVar6 = puVar5[8];
      *(int *)(iVar6 + 0x18) = iVar12;
      *(int *)(iVar6 + 0x1c) = iVar21;
      func_006661D4(puVar5,0);
    }
  }
  return puVar7;
}

