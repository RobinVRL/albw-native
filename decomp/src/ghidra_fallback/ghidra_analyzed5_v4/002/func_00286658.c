#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_0019B04C(uint param_1);
extern int func_002C2D00(int *param_1);
extern int func_004356B4(int *param_1);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004EE484(undefined4 *param_1);
extern int func_00533400(int param_1,int *param_2);
extern int func_0054D89C(int param_1,uint param_2);
extern int func_0054D964(int param_1,uint param_2);
extern int func_0054DDF4(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern int func_006611F8(undefined4 *param_1,undefined1 param_2);
extern int DAT_00286a34;
extern undefined4 *DAT_00286a38;
extern undefined4 DAT_00286a3c;
extern int *DAT_00286a40;
extern uint *DAT_00286a44;
extern uint *DAT_00286a48;
extern int DAT_00286a5c;
extern undefined4 DAT_00286a60;
extern float DAT_00286a64;
extern undefined4 DAT_00286a68;
extern float DAT_00286a6c;
extern undefined4 DAT_00286a70;
extern undefined *DAT_00286a74;
extern int DAT_00286a78;
extern char s_Creepee_bomb_00286a4c[];
extern char s_cState_Explosion_00286bec[];
extern char s_cState_Move_00286a7c[];

// USA 00286658 <- EU 00286680 (Ghidra, non-matching)
// GLOBAL DAT_00286a34 int
// GLOBAL DAT_00286a38 undefined4 *
// GLOBAL DAT_00286a3c undefined4
// GLOBAL DAT_00286a40 int *
// GLOBAL DAT_00286a44 uint *
// GLOBAL DAT_00286a48 uint *
// GLOBAL DAT_00286a5c int
// GLOBAL DAT_00286a60 undefined4
// GLOBAL DAT_00286a64 float
// GLOBAL DAT_00286a68 undefined4
// GLOBAL DAT_00286a6c float
// GLOBAL DAT_00286a70 undefined4
// GLOBAL DAT_00286a74 undefined *
// GLOBAL DAT_00286a78 int
// GLOBAL s_Creepee_bomb_00286a4c string
// GLOBAL s_cState_Explosion_00286bec string
// GLOBAL s_cState_Move_00286a7c string

undefined4 * func_00286658(undefined4 *param_1,uint *param_2)

{
  float fVar1;
  byte bVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 uVar15;
  uint uVar16;
  uint *puVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_80 (*(int *)(albw_frame + 0x0))
  #define local_7c (*(uint * *)(albw_frame + 0x4))
  #define local_74 (*(int *)(albw_frame + 0xc))
  #define uStack_70 (*(undefined4 *)(albw_frame + 0x10))
  #define iStack_6c (*(int *)(albw_frame + 0x14))
  #define uStack_68 (*(undefined4 *)(albw_frame + 0x18))
  #define iStack_64 (*(int *)(albw_frame + 0x1c))
  #define uStack_60 (*(undefined4 *)(albw_frame + 0x20))
  #define local_5c (*(undefined4 *)(albw_frame + 0x24))
  #define local_58 (*(undefined1 *)(albw_frame + 0x28))
  #define local_57 (*(undefined1 *)(albw_frame + 0x29))
  #define local_54 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_50 (*(undefined4 *)(albw_frame + 0x30))
  #define local_4c (*(undefined4 *)(albw_frame + 0x34))
  #define local_48 (*(undefined4 *)(albw_frame + 0x38))
  #define local_44 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x40))
  #define local_3c (*(undefined1 *)(albw_frame + 0x44))
  #define local_3b (*(undefined1 *)(albw_frame + 0x45))
  #define local_2c ((uint *)(albw_frame + 0x54))
  piVar6 = func_00150E40(param_1,param_2);
  iVar9 = DAT_00286a34;
  *piVar6 = DAT_00286a34;
  piVar6[200] = iVar9 + 0x54;
  puVar7 = func_0010A794(piVar6 + 0x103);
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  puVar4 = DAT_00286a38;
  puVar7[8] = 0;
  puVar7[9] = 0;
  puVar7[10] = 0;
  uVar13 = *puVar4;
  uVar15 = puVar4[1];
  puVar7[0xc] = puVar7 + -0x103;
  uVar11 = DAT_00286a3c;
  puVar7[0xd] = uVar13;
  puVar7[0xe] = uVar15;
  puVar8 = puVar7 + -0x103;
  puVar7[0xb] = uVar11;
  uVar13 = puVar4[2];
  uVar15 = puVar4[3];
  puVar7[0xf] = uVar11;
  puVar7[0x10] = puVar8;
  puVar7[0x11] = uVar13;
  puVar7[0x12] = uVar15;
  puVar7[0x13] = 0;
  puVar7[0x14] = 0;
  *(undefined1 *)(puVar7 + 0x15) = 0;
  iVar9 = func_00588BE4((int)puVar8);
  if (iVar9 == *DAT_00286a40) {
    iVar9 = func_0019B04C(*DAT_00286a44);
  }
  else {
    iVar9 = func_0019B04C(*DAT_00286a48);
  }
  iVar5 = DAT_00286a5c;
  if (iVar9 == 0) {
    *(undefined1 *)((int)puVar7 + -0x135) = 1;
  }
  else if (*(int *)(iVar9 + 0x1c8) == 0) {
    *(undefined1 *)((int)puVar7 + -0x135) = 1;
  }
  else {
    local_7c = (uint *)s_Creepee_bomb_00286a4c;
    local_80 = DAT_00286a5c;
    iStack_64 = func_00533400(*(int *)(iVar9 + 0x1c8),&local_80);
    local_74 = iVar5;
    uStack_70 = DAT_00286a60;
    iStack_6c = iVar5;
    uStack_68 = DAT_00286a60;
    uStack_60 = 0;
    local_3c = 1;
    local_58 = 0;
    local_50 = 0;
    local_5c = 0;
    local_57 = 0;
    local_40 = 0;
    local_3b = 0xc4;
    local_44 = 0;
    local_54 = 0;
    local_48 = 0;
    local_4c = 0;
    piVar6 = func_002C2D00(&local_74);
    puVar7[0x13] = piVar6;
    puVar7[-0x30] = piVar6;
    iVar9 = func_0054D89C((int)puVar8,0);
    puVar7[0x14] = iVar9;
    piVar6 = (int *)func_0054D964((int)puVar8,0);
    fVar18 = ALBW_AS_F32(puVar7[-0xe]);
    iVar9 = puVar7[-0xd];
    fVar1 = ALBW_AS_F32(piVar6[0x17]) * DAT_00286a64;
    piVar6[1] = puVar7[-0xf];
    piVar6[2] = (int)ALBW_AS_U32((fVar18 - fVar1));
    piVar6[3] = iVar9;
    func_004356B4(piVar6);
    puVar7[10] = piVar6;
    puVar10 = (undefined4 *)func_0010BAB4(100);
    uVar11 = 0;
    if (puVar10 != (undefined4 *)0x0) {
      uVar11 = func_004EE484(puVar10);
    }
    puVar7[9] = uVar11;
    iVar9 = func_0054DDF4((int)puVar8,0);
    puVar7[-0x1b] = iVar9;
    puVar7[-0x1a] = iVar9;
    local_2c[0] = puVar7[-0x50];
    func_0014EB8C(puVar7[9],puVar7[10],(undefined2 *)puVar7[-0x1b],local_2c,
                  *(undefined2 *)(puVar7 + -0xee),puVar7 + 0xb,(short)DAT_00286a68);
    iVar9 = puVar7[9];
    func_004D80A4((float *)(iVar9 + 0x24),param_2[8],DAT_00286a6c);
    *(undefined4 *)(iVar9 + 0x28) = DAT_00286a70;
    puVar7[-8] = puVar7 + 0xf;
    *(undefined1 *)((int)puVar7 + 6) = 2;
    puVar7[5] = puVar8;
    iVar9 = func_0010BA78(0x20);
    puVar7[6] = iVar9;
    puVar7[7] = iVar9 + (uint)*(byte *)((int)puVar7 + 6) * 8;
    iVar14 = 2;
    puVar10 = (undefined4 *)(iVar9 + -8);
    do {
      uVar11 = puVar4[0xf];
      iVar14 = iVar14 + -1;
      puVar10[2] = puVar4[0xe];
      puVar10[3] = uVar11;
      uVar11 = puVar4[0xf];
      puVar10[4] = puVar4[0xe];
      puVar10[5] = uVar11;
      puVar10 = puVar10 + 4;
    } while (iVar14 != 0);
    bVar2 = *(byte *)((int)puVar7 + 6);
    uVar16 = (uint)bVar2;
    puVar10 = (undefined4 *)func_0010BA78(uVar16 << 3);
    puVar7[8] = puVar10;
    if (uVar16 != 0) {
      puVar12 = puVar10 + -2;
      if ((bVar2 & 1) != 0) {
        uVar11 = puVar4[9];
        *puVar10 = puVar4[8];
        puVar10[1] = uVar11;
        puVar12 = puVar10;
      }
      for (iVar9 = (int)uVar16 >> 1; iVar9 != 0; iVar9 = iVar9 + -1) {
        uVar11 = puVar4[9];
        puVar12[2] = puVar4[8];
        puVar12[3] = uVar11;
        uVar11 = puVar4[9];
        puVar12[4] = puVar4[8];
        puVar12[5] = uVar11;
        puVar12 = puVar12 + 4;
      }
    }
    puVar10 = (undefined4 *)func_0010CEE0(0x50,(int *)0x0,4);
    iVar9 = 0;
    if (puVar10 != (undefined4 *)0x0) {
      *puVar10 = 0x24;
      puVar10[1] = 2;
      iVar9 = func_00100118((int)(puVar10 + 2),DAT_00286a74,0x24,2);
    }
    if (iVar9 != 0) {
      puVar7[3] = iVar9;
      puVar7[2] = 2;
    }
    iVar9 = DAT_00286a78;
    puVar7[-0x2e] = puVar7;
    *(undefined2 *)(iVar9 + (int)puVar8) = 2;
    local_7c = (uint *)s_cState_Move_00286a7c;
    local_80 = iVar5;
    iVar9 = puVar7[3];
    puVar17 = *(uint **)(iVar9 + 4);
    (**(code **)(iVar5 + 8))(&local_80);
    uVar16 = 0;
    do {
      if (*(char *)((int)local_7c + uVar16) == '\0') {
        if ((int)uVar16 < 0x40001) goto LAB_00286a94;
        break;
      }
      uVar16 = uVar16 + 1;
    } while ((int)uVar16 < 0x40001);
    uVar16 = 0;
LAB_00286a94:
    iVar9 = *(int *)(iVar9 + 8);
    if (iVar9 <= (int)uVar16) {
      uVar16 = iVar9 - 1;
    }
    (**(code **)(local_80 + 8))(&local_80);
    func_0010E3C4(puVar17,local_7c,uVar16);
    *(undefined1 *)((int)puVar17 + uVar16) = 0;
    puVar10 = (undefined4 *)puVar7[6];
    uVar13 = puVar4[5];
    uVar11 = puVar4[9];
    uVar19 = puVar4[6];
    uVar15 = puVar4[8];
    uVar20 = puVar4[7];
    *puVar10 = puVar4[4];
    puVar10[1] = uVar13;
    puVar10 = (undefined4 *)puVar7[7];
    *puVar10 = uVar19;
    puVar10[1] = uVar20;
    puVar10 = (undefined4 *)puVar7[8];
    *puVar10 = uVar15;
    puVar10[1] = uVar11;
    local_7c = (uint *)s_cState_Explosion_00286bec;
    local_80 = iVar5;
    uVar16 = puVar7[2];
    if (uVar16 < 2) {
      iVar9 = puVar7[3];
      uVar3 = uVar16;
    }
    else {
      iVar9 = iVar5;
      uVar3 = puVar7[3];
    }
    if (1 < uVar16) {
      iVar9 = uVar3 + 0x24;
    }
    puVar17 = *(uint **)(iVar9 + 4);
    (**(code **)(iVar5 + 8))(&local_80);
    uVar16 = 0;
    do {
      if (*(char *)((int)local_7c + uVar16) == '\0') {
        if ((int)uVar16 < 0x40001) goto LAB_00286b68;
        break;
      }
      uVar16 = uVar16 + 1;
    } while ((int)uVar16 < 0x40001);
    uVar16 = 0;
LAB_00286b68:
    if (*(int *)(iVar9 + 8) <= (int)uVar16) {
      uVar16 = *(int *)(iVar9 + 8) - 1;
    }
    (**(code **)(local_80 + 8))(&local_80);
    func_0010E3C4(puVar17,local_7c,uVar16);
    *(undefined1 *)((int)puVar17 + uVar16) = 0;
    uVar11 = puVar4[0xd];
    iVar9 = puVar7[6];
    uVar15 = puVar4[8];
    uVar20 = puVar4[9];
    uVar13 = puVar4[0xb];
    uVar19 = puVar4[0xc];
    *(undefined4 *)(iVar9 + 8) = puVar4[10];
    *(undefined4 *)(iVar9 + 0xc) = uVar13;
    iVar9 = puVar7[7];
    *(undefined4 *)(iVar9 + 8) = uVar19;
    *(undefined4 *)(iVar9 + 0xc) = uVar11;
    iVar9 = puVar7[8];
    *(undefined4 *)(iVar9 + 8) = uVar15;
    *(undefined4 *)(iVar9 + 0xc) = uVar20;
    func_006611F8(puVar7,0);
  }
  return puVar8;
}

