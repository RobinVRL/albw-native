#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0014DF18(int param_1,undefined4 param_2,int param_3,uint param_4,undefined1 param_5, undefined1 param_6);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_0014E904(int param_1,int param_2,int param_3);
extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_00169688(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_004356B4(int *param_1);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_004EE484(undefined4 *param_1);
extern int func_00508758(int param_1);
extern int func_0054D964(int param_1,uint param_2);
extern int func_00564A78(int param_1,int *param_2);
extern int func_0066B43C(undefined4 *param_1,undefined1 param_2);
extern int DAT_005098c8;
extern int DAT_005098cc;
extern int DAT_005098d0;
extern int *DAT_005098d4;
extern int DAT_005098d8;
extern int DAT_005098dc;
extern int *DAT_005098e0;
extern int DAT_005098e4;
extern int DAT_005098f0;
extern int *DAT_005098fc;
extern undefined4 DAT_00509900;
extern int *DAT_00509904;
extern int DAT_00509d44;
extern undefined4 DAT_00509d48;
extern undefined *DAT_00509d4c;
extern int DAT_00509d50;
extern char s_Beamos_005098e8[];
extern char s_Effect_005098f4[];
extern char s_cState_Freeze_00509d94[];
extern char s_cState_Ready_00509d60[];
extern char s_cState_ShiftStay_00509d80[];
extern char s_cState_Shoot_00509d70[];
extern char s_cState_Stay_00509d54[];
extern char s_cState_Turn_00509da4[];

// USA 005094E0 <- EU 005094B8 (Ghidra, non-matching)
// GLOBAL DAT_005098c8 int
// GLOBAL DAT_005098cc int
// GLOBAL DAT_005098d0 int
// GLOBAL DAT_005098d4 int *
// GLOBAL DAT_005098d8 int
// GLOBAL DAT_005098dc int
// GLOBAL DAT_005098e0 int *
// GLOBAL DAT_005098e4 int
// GLOBAL DAT_005098f0 int
// GLOBAL DAT_005098fc int *
// GLOBAL DAT_00509900 undefined4
// GLOBAL DAT_00509904 int *
// GLOBAL DAT_00509d44 int
// GLOBAL DAT_00509d48 undefined4
// GLOBAL DAT_00509d4c undefined *
// GLOBAL DAT_00509d50 int
// GLOBAL s_Beamos_005098e8 string
// GLOBAL s_Effect_005098f4 string
// GLOBAL s_cState_Freeze_00509d94 string
// GLOBAL s_cState_Ready_00509d60 string
// GLOBAL s_cState_ShiftStay_00509d80 string
// GLOBAL s_cState_Shoot_00509d70 string
// GLOBAL s_cState_Stay_00509d54 string
// GLOBAL s_cState_Turn_00509da4 string

undefined4 * func_005094E0(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  int *piVar2;
  undefined *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  uint uVar9;
  uint *puVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define local_9c (*(uint *)(albw_frame + 0x4))
  #define local_98 (*(int *)(albw_frame + 0x8))
  #define local_94 (*(char * *)(albw_frame + 0xc))
  #define local_90 ((uint *)(albw_frame + 0x10))
  #define local_88 (*(undefined4 * *)(albw_frame + 0x18))
  #define local_84 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_80 (*(int *)(albw_frame + 0x20))
  #define local_7c (*(int *)(albw_frame + 0x24))
  #define local_78 (*(undefined4 *)(albw_frame + 0x28))
  #define local_74 (*(int *)(albw_frame + 0x2c))
  #define local_70 (*(uint *)(albw_frame + 0x30))
  #define local_3c (*(undefined4 *)(albw_frame + 0x64))
  #define local_38 (*(undefined1 *)(albw_frame + 0x68))
  piVar4 = func_00150E40(param_1,param_2);
  iVar5 = DAT_005098c8;
  piVar4[200] = DAT_005098c8 + 0x54;
  *piVar4 = iVar5;
  piVar4[0x103] = 0;
  piVar4[0x104] = 0;
  piVar4[0x105] = 0;
  piVar4[0x106] = 0;
  iVar5 = func_0054D964((int)piVar4,0);
  piVar4[0x107] = iVar5;
  piVar4[0x108] = 0;
  piVar4[0x109] = 0;
  puVar6 = (undefined4 *)func_0010BAB4(0x48);
  puVar7 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar7 = func_004EDC9C(puVar6);
  }
  piVar4[0x10a] = (int)puVar7;
  iVar12 = DAT_005098d0;
  iVar5 = DAT_005098cc;
  piVar4[0x10b] = DAT_005098cc;
  piVar4[0x10c] = iVar12;
  piVar4[0x10d] = iVar5;
  piVar4[0x10e] = 0;
  piVar4[0x10f] = piVar4[0xfa];
  piVar4[0x110] = 0;
  piVar11 = DAT_005098d4;
  piVar4[0x111] = piVar4[0xf4];
  piVar4[0x112] = piVar4[0xf5];
  piVar4[0x113] = piVar4[0xf6];
  piVar2 = DAT_005098e0;
  iVar12 = DAT_005098d8;
  iVar13 = piVar11[1];
  iVar17 = piVar11[2];
  piVar4[0x114] = *piVar11;
  piVar4[0x115] = iVar13;
  piVar4[0x116] = iVar17;
  iVar13 = *piVar11;
  iVar17 = piVar11[1];
  piVar4[0x119] = piVar11[2];
  piVar4[0x117] = iVar13;
  piVar4[0x118] = iVar17;
  piVar4[0x11a] = iVar12;
  piVar4[0x11b] = iVar5;
  piVar4[0x11c] = iVar5;
  piVar4[0x11d] = 0;
  piVar4[0x11e] = 0;
  piVar4[0x120] = 10;
  piVar4[0x11f] = 0;
  piVar4[0x121] = iVar12;
  piVar4[0x123] = 0x3c;
  piVar4[0x122] = 0;
  piVar4[0x124] = iVar12;
  piVar4[0x125] = 0;
  piVar4[0x126] = 0;
  piVar4[0x127] = iVar12;
  piVar4[0x128] = 0;
  piVar4[0x129] = 0;
  piVar4[0x12a] = iVar12;
  piVar4[299] = 0;
  piVar4[300] = 0;
  piVar4[0x12d] = iVar12;
  iVar13 = DAT_005098dc;
  piVar4[0x130] = -1;
  piVar4[0x131] = 0;
  piVar4[0x12e] = iVar13;
  piVar4[0x12f] = (int)piVar4;
  iVar13 = piVar2[1];
  piVar4[0x134] = *piVar2;
  piVar4[0x135] = iVar13;
  iVar13 = DAT_005098e4;
  piVar4[0x132] = DAT_005098e4;
  piVar4[0x133] = (int)piVar4;
  iVar17 = piVar2[3];
  piVar4[0x138] = piVar2[2];
  piVar4[0x139] = iVar17;
  piVar4[0x136] = iVar13;
  piVar4[0x137] = (int)piVar4;
  iVar17 = piVar2[5];
  piVar4[0x13c] = piVar2[4];
  piVar4[0x13d] = iVar17;
  piVar4[0x13a] = iVar13;
  piVar4[0x13b] = (int)piVar4;
  piVar4[0x13e] = 0;
  piVar4[0x140] = 0;
  piVar4[0x142] = 0;
  puVar7 = func_0010A794(piVar4 + 0x144);
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  puVar7[8] = 0;
  *(undefined1 *)(puVar7 + 9) = 0;
  *(undefined1 *)((int)puVar7 + 0x25) = 0;
  puVar14 = puVar7 + -0x144;
  *(undefined1 *)((int)puVar7 + 0x26) = 0;
  func_00508758((int)puVar14);
  uVar8 = func_0014E428((int)puVar14,1,0,0,1,0,0);
  puVar7[-0x41] = uVar8;
  piVar4 = func_0014DF18(puVar7[-0x90],1,1,0,0,0);
  puVar7[-0x40] = piVar4;
  piVar4[0x56] = iVar5;
  piVar4 = puVar7 + -0x41;
  *(int *)(puVar7[-0x40] + 0x134) = iVar5;
  iVar13 = puVar7[-0x41];
  *(uint *)(iVar13 + 0x164) = *(uint *)(iVar13 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar13 + 0x80),puVar7[-0x4a],(float *)(puVar7 + -0x50));
  func_004CEAF0(puVar7[-0x41]);
  iVar13 = DAT_005098f0;
  local_94 = s_Beamos_005098e8;
  local_98 = DAT_005098f0;
  uVar9 = func_00564A78(*piVar4,&local_98);
  puVar7[-0x27] = uVar9;
  puVar7[-0x14] = uVar9;
  puVar10 = (uint *)(*(int *)(*(int *)(*piVar4 + 0x24) + 0xc) + uVar9 * 0x40);
  *puVar10 = *puVar10 | 0x10;
  *(undefined4 **)(*piVar4 + 0x16c) = puVar7 + -0x16;
  local_94 = s_Effect_005098f4;
  local_98 = iVar13;
  uVar9 = func_00564A78(*piVar4,&local_98);
  puVar7[-0x26] = uVar9;
  iVar17 = *(int *)(*(int *)(*piVar4 + 0x24) + 0x14) + uVar9 * 0x30;
  puVar7[-0x33] = *(undefined4 *)(iVar17 + 0xc);
  puVar7[-0x32] = *(undefined4 *)(iVar17 + 0x1c);
  puVar7[-0x31] = *(undefined4 *)(iVar17 + 0x2c);
  puVar10 = (uint *)func_0014E904((int)puVar14,1,1);
  puVar7[-0x3f] = puVar10;
  func_00169688(puVar10,0,DAT_005098fc,*(int *)(puVar7[-0x90] + 0x1cc));
  func_0016A02C(puVar7[-0x3f],-1,(int *)0xffffffff,0);
  local_88 = &local_84;
  local_90[1] = 3;
  local_3c = 10;
  local_38 = 0;
  local_84 = 0;
  local_90[0] = 1;
  local_70 = (uint)piVar4 | 0xff;
  local_78 = DAT_00509900;
  uVar8 = DAT_00509900;
  local_80 = iVar5;
  local_7c = iVar12;
  local_74 = iVar12;
  func_0016898C(puVar7[-0x3f],local_90);
  puVar10 = (uint *)func_0014E904((int)puVar14,1,1);
  puVar7[-0x3e] = puVar10;
  func_00169608(puVar10,0,DAT_00509904,*(int *)(puVar7[-0x90] + 0x1cc));
  func_0016A02C(puVar7[-0x3e],-1,(int *)0xffffffff,0);
  local_88 = &local_84;
  local_90[1] = 3;
  local_3c = 10;
  local_38 = 0;
  local_84 = 0;
  local_90[0] = 1;
  local_70 = (uint)piVar4 | 0xff;
  local_80 = iVar5;
  local_7c = iVar12;
  local_78 = uVar8;
  local_74 = iVar12;
  func_0016898C(puVar7[-0x3e],local_90);
  piVar4 = (int *)func_0054D964((int)puVar14,1);
  piVar4[7] = piVar4[1];
  piVar4[8] = piVar4[2];
  piVar4[9] = piVar4[3];
  iVar5 = DAT_00509d44;
  piVar4[4] = piVar4[1];
  piVar4[5] = piVar4[2];
  piVar4[6] = piVar4[3];
  iVar12 = puVar7[-0x32];
  iVar17 = puVar7[-0x31];
  piVar4[1] = puVar7[-0x33];
  piVar4[2] = iVar12;
  piVar4[3] = iVar17;
  iVar12 = puVar7[-0x32];
  iVar17 = puVar7[-0x31];
  iVar18 = puVar7[-0x30];
  iVar15 = puVar7[-0x2f];
  iVar16 = puVar7[-0x2e];
  piVar4[0x16] = puVar7[-0x33];
  piVar4[0x17] = iVar12;
  piVar4[0x18] = iVar17;
  piVar4[0x19] = iVar18;
  piVar4[0x1a] = iVar15;
  piVar4[0x1b] = iVar16;
  piVar4[0x1c] = iVar5;
  func_004356B4(piVar4);
  puVar7[-0x3c] = piVar4;
  uVar9 = piVar4[0xb];
  piVar4[0xb] = uVar9 | 0x20000;
  *(uint *)(puVar7[-0x3c] + 0x2c) = uVar9 | 0x60000;
  *(uint *)(puVar7[-0x3c] + 0x2c) = uVar9 | 0xe0000;
  *(uint *)(puVar7[-0x3c] + 0x2c) = uVar9 & 0xfffffff7 | 0xe0000;
  puVar6 = (undefined4 *)func_0010BAB4(100);
  iVar5 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    iVar5 = func_004EE484(puVar6);
  }
  puVar7[-0x3b] = iVar5;
  local_9c = puVar7[-0x91];
  func_0014EB8C(iVar5,puVar7[-0x3c],(undefined2 *)puVar7[-0x5c],&local_9c,
                *(undefined2 *)(puVar7 + -0x12f),puVar7 + -0x12,(short)DAT_00509d48);
  *(undefined1 *)((int)puVar7 + 6) = 6;
  puVar7[5] = puVar14;
  iVar5 = func_0010BA78(0x60);
  puVar7[6] = iVar5;
  iVar12 = 6;
  puVar7[7] = iVar5 + (uint)*(byte *)((int)puVar7 + 6) * 8;
  piVar4 = (int *)(iVar5 + -8);
  do {
    iVar5 = piVar2[0x21];
    iVar12 = iVar12 + -1;
    piVar4[2] = piVar2[0x20];
    piVar4[3] = iVar5;
    iVar5 = piVar2[0x21];
    piVar4[4] = piVar2[0x20];
    piVar4[5] = iVar5;
    piVar4 = piVar4 + 4;
  } while (iVar12 != 0);
  bVar1 = *(byte *)((int)puVar7 + 6);
  uVar9 = (uint)bVar1;
  piVar4 = (int *)func_0010BA78(uVar9 << 3);
  puVar7[8] = piVar4;
  if (uVar9 != 0) {
    piVar11 = piVar4 + -2;
    if ((bVar1 & 1) != 0) {
      iVar5 = piVar2[0xb];
      *piVar4 = piVar2[10];
      piVar4[1] = iVar5;
      piVar11 = piVar4;
    }
    for (iVar5 = (int)uVar9 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      iVar12 = piVar2[0xb];
      piVar11[2] = piVar2[10];
      piVar11[3] = iVar12;
      iVar12 = piVar2[0xb];
      piVar11[4] = piVar2[10];
      piVar11[5] = iVar12;
      piVar11 = piVar11 + 4;
    }
  }
  puVar6 = (undefined4 *)func_0010CEE0(0xe0,(int *)0x0,4);
  puVar3 = DAT_00509d4c;
  iVar5 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar6[1] = 6;
    *puVar6 = 0x24;
    iVar5 = func_00100118((int)(puVar6 + 2),puVar3,0x24,6);
  }
  if (iVar5 != 0) {
    puVar7[2] = 6;
    puVar7[3] = iVar5;
  }
  iVar5 = DAT_00509d50;
  puVar7[-0x6f] = puVar7;
  *(undefined2 *)(iVar5 + (int)puVar14) = 6;
  local_94 = s_cState_Stay_00509d54;
  local_98 = iVar13;
  func_0010BEC4((int)puVar7,0,&local_98);
  piVar4 = (int *)puVar7[6];
  iVar12 = piVar2[7];
  iVar15 = piVar2[10];
  iVar5 = piVar2[8];
  iVar17 = piVar2[9];
  iVar18 = piVar2[0xb];
  *piVar4 = piVar2[6];
  piVar4[1] = iVar12;
  piVar4 = (int *)puVar7[7];
  *piVar4 = iVar5;
  piVar4[1] = iVar17;
  piVar4 = (int *)puVar7[8];
  *piVar4 = iVar15;
  piVar4[1] = iVar18;
  local_94 = s_cState_Ready_00509d60;
  local_98 = iVar13;
  func_0010BEC4((int)puVar7,1,&local_98);
  iVar16 = puVar7[6];
  iVar5 = piVar2[0xd];
  iVar12 = piVar2[0xe];
  iVar17 = piVar2[0xf];
  *(int *)(iVar16 + 8) = piVar2[0xc];
  *(int *)(iVar16 + 0xc) = iVar5;
  iVar5 = puVar7[7];
  *(int *)(iVar5 + 8) = iVar12;
  *(int *)(iVar5 + 0xc) = iVar17;
  iVar5 = puVar7[8];
  *(int *)(iVar5 + 8) = iVar15;
  *(int *)(iVar5 + 0xc) = iVar18;
  local_94 = s_cState_Shoot_00509d70;
  local_98 = iVar13;
  func_0010BEC4((int)puVar7,2,&local_98);
  iVar16 = puVar7[6];
  iVar5 = piVar2[0x11];
  iVar17 = piVar2[0x12];
  iVar12 = piVar2[0x13];
  *(int *)(iVar16 + 0x10) = piVar2[0x10];
  *(int *)(iVar16 + 0x14) = iVar5;
  iVar5 = puVar7[7];
  *(int *)(iVar5 + 0x10) = iVar17;
  *(int *)(iVar5 + 0x14) = iVar12;
  iVar5 = puVar7[8];
  *(int *)(iVar5 + 0x10) = iVar15;
  *(int *)(iVar5 + 0x14) = iVar18;
  local_94 = s_cState_ShiftStay_00509d80;
  local_98 = iVar13;
  func_0010BEC4((int)puVar7,3,&local_98);
  iVar16 = puVar7[6];
  iVar5 = piVar2[0x15];
  iVar17 = piVar2[0x16];
  iVar12 = piVar2[0x17];
  *(int *)(iVar16 + 0x18) = piVar2[0x14];
  *(int *)(iVar16 + 0x1c) = iVar5;
  iVar5 = puVar7[7];
  *(int *)(iVar5 + 0x18) = iVar17;
  *(int *)(iVar5 + 0x1c) = iVar12;
  iVar5 = puVar7[8];
  *(int *)(iVar5 + 0x18) = iVar15;
  *(int *)(iVar5 + 0x1c) = iVar18;
  local_94 = s_cState_Freeze_00509d94;
  local_98 = iVar13;
  func_0010BEC4((int)puVar7,4,&local_98);
  iVar16 = puVar7[6];
  iVar5 = piVar2[0x19];
  iVar17 = piVar2[0x1a];
  iVar12 = piVar2[0x1b];
  *(int *)(iVar16 + 0x20) = piVar2[0x18];
  *(int *)(iVar16 + 0x24) = iVar5;
  iVar5 = puVar7[7];
  *(int *)(iVar5 + 0x20) = iVar17;
  *(int *)(iVar5 + 0x24) = iVar12;
  iVar5 = puVar7[8];
  *(int *)(iVar5 + 0x20) = iVar15;
  *(int *)(iVar5 + 0x24) = iVar18;
  local_94 = s_cState_Turn_00509da4;
  local_98 = iVar13;
  func_0010BEC4((int)puVar7,5,&local_98);
  iVar5 = piVar2[0x1e];
  iVar13 = piVar2[0x1f];
  iVar12 = piVar2[0x1d];
  iVar17 = puVar7[6];
  *(int *)(iVar17 + 0x28) = piVar2[0x1c];
  *(int *)(iVar17 + 0x2c) = iVar12;
  iVar12 = puVar7[7];
  *(int *)(iVar12 + 0x28) = iVar5;
  *(int *)(iVar12 + 0x2c) = iVar13;
  iVar5 = puVar7[8];
  *(int *)(iVar5 + 0x28) = iVar15;
  *(int *)(iVar5 + 0x2c) = iVar18;
  func_0066B43C(puVar7,0);
  puVar7[-0x8c] = puVar7[-0x8c] | 2;
  return puVar14;
}

