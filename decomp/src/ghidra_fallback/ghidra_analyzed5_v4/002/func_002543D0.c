#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00100174(int *param_1);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00133870(int param_1,uint param_2,int param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_0014E904(int param_1,int param_2,int param_3);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00169688(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_002539C8(int param_1);
extern int func_002BE9D4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4, undefined1 param_5);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_004356B4(int *param_1);
extern undefined4 func_004A7F00(int param_1,int param_2,uint param_3);
extern int func_004ECF6C(int param_1);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_0054D89C(int param_1,uint param_2);
extern int func_0054D964(int param_1,uint param_2);
extern int func_00588BF0(int param_1,int param_2);
extern int func_0065FE3C(undefined4 *param_1,undefined1 param_2);
extern int iRam0025484c;
extern int iRam00254854;
extern int iRam00254df0;
extern undefined4 uRam00254cec;
extern undefined4 uRam00254df8;
extern undefined4 uRam00254dfc;
extern undefined4 uRam00254e00;
extern int *piRam00254df4;
extern undefined4 *puRam00254850;
extern undefined4 *puRam00254ce4;
extern undefined4 *puRam00254ce8;
extern int *DAT_00254804;
extern int DAT_00254808;
extern int DAT_0025480c;
extern undefined4 DAT_00254810;
extern undefined4 DAT_00254814;
extern uint DAT_00254818;
extern undefined4 DAT_0025481c;
extern undefined4 *DAT_00254820;
extern undefined DAT_00254824;
extern int DAT_00254840;
extern undefined4 DAT_00254844;
extern undefined4 DAT_00254848;
extern char s_cState_BrokeOut_00254c54[];
extern char s_cState_Erase_00254cac[];
extern char s_cState_FallWater_00254c70[];
extern char s_cState_Fall_00254858[];
extern char s_cState_GoDownWater_00254cd0[];
extern char s_cState_GoUpWater_00254cbc[];
extern char s_cState_ParentChase_00254c84[];
extern char s_cState_StartEvent_00254c98[];
extern char s_cState_Stop_00254c48[];
extern char s_cState_Wait_00254c64[];

// USA 002543D0 <- EU 002543F8 (Ghidra, non-matching)
// GLOBAL DAT_00254804 int *
// GLOBAL DAT_00254808 int
// GLOBAL DAT_0025480c int
// GLOBAL DAT_00254810 undefined4
// GLOBAL DAT_00254814 undefined4
// GLOBAL DAT_00254818 uint
// GLOBAL DAT_0025481c undefined4
// GLOBAL DAT_00254820 undefined4 *
// GLOBAL DAT_00254824 undefined
// GLOBAL DAT_00254840 int
// GLOBAL DAT_00254844 undefined4
// GLOBAL DAT_00254848 undefined4
// GLOBAL UNK_0025484c int
// GLOBAL UNK_00254850 undefined *
// GLOBAL UNK_00254854 int
// GLOBAL UNK_00254ce4 uint *
// GLOBAL UNK_00254ce8 undefined4 *
// GLOBAL UNK_00254cec undefined4
// GLOBAL UNK_00254df0 int
// GLOBAL UNK_00254df4 int *
// GLOBAL UNK_00254df8 undefined4
// GLOBAL UNK_00254dfc undefined4
// GLOBAL UNK_00254e00 undefined4
// GLOBAL s_cState_BrokeOut_00254c54 string
// GLOBAL s_cState_Erase_00254cac string
// GLOBAL s_cState_FallWater_00254c70 string
// GLOBAL s_cState_Fall_00254858 string
// GLOBAL s_cState_GoDownWater_00254cd0 string
// GLOBAL s_cState_GoUpWater_00254cbc string
// GLOBAL s_cState_ParentChase_00254c84 string
// GLOBAL s_cState_StartEvent_00254c98 string
// GLOBAL s_cState_Stop_00254c48 string
// GLOBAL s_cState_Wait_00254c64 string

/* WARNING: Variable defined which should be unmapped: objStack_b0 */

undefined4 * func_002543D0(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  bool bVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  undefined4 uVar13;
  uint uVar14;
  int *piVar15;
  int iVar16;
  undefined4 uVar17;
  int iVar18;
  int iVar19;
  ulonglong uVar20;
  int iVar21;
  int iVar22;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define objStack_b0 ((uint *)(albw_frame + 0x0))
  #define local_a0 (*(int *)(albw_frame + 0x10))
  #define local_9c (*(char * *)(albw_frame + 0x14))
  #define aiStack_98 ((int *)(albw_frame + 0x18))
  #define local_3c (*(undefined4 * *)(albw_frame + 0x74))
  piVar4 = func_00150E40(param_1,param_2);
  piVar15 = DAT_00254804;
  piVar4[0x104] = DAT_00254808;
  iVar11 = *piVar15;
  iVar16 = piVar15[1];
  piVar4[0x105] = (int)(piVar4 + 0x103);
  piVar4[0x106] = iVar11;
  piVar4[0x107] = iVar16;
  iVar11 = DAT_0025480c;
  *piVar4 = DAT_0025480c;
  piVar4[200] = iVar11 + 0x54;
  piVar4[0x103] = iVar11 + 0xb8;
  puVar5 = func_0010A794(piVar4 + 0x108);
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  uVar13 = DAT_00254810;
  puVar5[10] = 0;
  uVar17 = DAT_00254814;
  puVar5[0xc] = uVar13;
  puVar5[0xd] = uVar17;
  puVar5[0xb] = 0;
  puVar5[0xe] = param_2[7];
  uVar14 = DAT_00254818;
  uVar20 = (ulonglong)DAT_00254818;
  puVar5[0xf] = 0;
  puVar5[0x11] = 0;
  iVar11 = piVar15[0x37];
  puVar5[0x12] = piVar15[0x36];
  puVar5[0x13] = iVar11;
  uVar13 = DAT_0025481c;
  puVar5[0x10] = DAT_0025481c;
  iVar11 = piVar15[2];
  iVar16 = piVar15[3];
  puVar5[0x14] = uVar13;
  puVar5[0x15] = puVar5 + -0x108;
  puVar5[0x16] = iVar11;
  puVar5[0x17] = iVar16;
  puVar6 = DAT_00254820;
  *(undefined1 *)(puVar5 + 0x18) = 0;
  puVar5[0x19] = 0;
  puVar5[0x1a] = 0;
  puVar5[0x1b] = 0;
  uVar13 = puVar6[1];
  uVar17 = puVar6[2];
  puVar5[0x1c] = *puVar6;
  puVar5[0x1d] = uVar13;
  puVar5[0x1e] = uVar17;
  uVar13 = puVar6[1];
  uVar17 = puVar6[2];
  puVar5[0x1f] = *puVar6;
  puVar5[0x20] = uVar13;
  puVar5[0x21] = uVar17;
  uVar13 = puVar6[1];
  uVar17 = puVar6[2];
  puVar5[0x22] = *puVar6;
  puVar5[0x23] = uVar13;
  puVar5[0x24] = uVar17;
  puVar5[0x25] = uVar14;
  iVar11 = DAT_00254840;
  puVar5[0x26] = puVar5[-0x13];
  puVar5[0x27] = 0;
  uVar13 = *puVar6;
  uVar17 = puVar6[1];
  puVar5[0x2a] = puVar6[2];
  puVar5[0x28] = uVar13;
  puVar5[0x29] = uVar17;
  puVar5[0x2b] = 0;
  local_9c = &DAT_00254824;
  local_a0 = iVar11;
  objStack_b0[0] = 1;
  iVar16 = func_002BE9D4(puVar5 + 0x2c,&local_a0,0,0,1);
  puVar6 = func_004EDC9C((undefined4 *)(iVar16 + 0x2cc));
  piVar4 = puVar6 + 0x12;
  puVar6[0x12] = 0;
  puVar5 = puVar6 + -0x1e7;
  puVar6[0x13] = puVar6[-0xf3];
  puVar6[0x14] = puVar6[-0xf2];
  puVar6[0x15] = puVar6[-0xf1];
  *(undefined1 *)(puVar6 + 0x16) = 0;
  puVar6[0x18] = 0;
  iVar16 = piVar15[0x39];
  puVar6[0x19] = piVar15[0x38];
  puVar6[0x1a] = iVar16;
  puVar6[0x17] = DAT_00254844;
  iVar16 = piVar15[4];
  local_3c = puVar6 + 0x1b;
  puVar6[0x1e] = piVar15[5];
  uVar13 = DAT_00254848;
  puVar6[0x1d] = iVar16;
  *local_3c = uVar13;
  puVar6[0x1c] = puVar5;
  *(undefined1 *)(puVar6 + 0x1f) = 0;
  iVar16 = func_0054D89C((int)puVar5,0);
  puVar6[-0xc4] = iVar16;
  func_00151148(iVar16,0);
  puVar6[-0xec] = puVar6 + -0xcb;
  objStack_b0[0] = 1;
  objStack_b0[1] = 0;
  objStack_b0[2] = 0;
  uVar13 = func_0014E428((int)puVar5,0,0,0,1,0,0);
  puVar6[-0xc5] = uVar13;
  uVar13 = func_0014E904((int)puVar5,7,1);
  iVar16 = iRam0025484c;
  piVar15 = puVar6 + -0xd6;
  uVar14 = 0;
  puVar6[-0xd6] = uVar13;
  do {
    func_00169688((uint *)puVar6[-0xd6],uVar14,(int *)(iVar16 + uVar14 * 8),
                  *(int *)(puVar6[-0x133] + 0x1c8));
    func_00133870(*piVar15,uVar14,puVar6[-0xc5]);
    uVar13 = (undefined4)uVar20;
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 7);
  func_0016A02C(puVar6[-0xd6],-1,(int *)0xffffffff,0);
  piVar12 = (int *)0x0;
  puVar7 = (uint *)func_002C11E8(aiStack_98,0,10,0);
  iVar16 = *piVar15;
  func_0016898C(iVar16,puVar7);
  uVar17 = *(undefined4 *)(*piVar15 + 0xc);
  *(undefined4 *)(*(int *)(*piVar15 + 0x14) + 0x10) = uVar13;
  func_00169A80((int *)puVar6[-0xd6],uVar17,iVar16,piVar12);
  *(undefined1 *)((int)puVar6 + -0x376) = 0xb;
  puVar6[-0xda] = puVar5;
  iVar16 = func_0010BA78(0xb0);
  puVar6[-0xd9] = iVar16;
  piVar15 = DAT_00254804;
  puVar6[-0xd8] = iVar16 + (uint)*(byte *)((int)puVar6 + -0x376) * 8;
  iVar10 = 0xb;
  piVar12 = (int *)(iVar16 + -8);
  do {
    iVar16 = piVar15[0x35];
    iVar10 = iVar10 + -1;
    piVar12[2] = piVar15[0x34];
    piVar12[3] = iVar16;
    iVar16 = piVar15[0x35];
    piVar12[4] = piVar15[0x34];
    piVar12[5] = iVar16;
    piVar12 = piVar12 + 4;
  } while (iVar10 != 0);
  bVar1 = *(byte *)((int)puVar6 + -0x376);
  uVar14 = (uint)bVar1;
  piVar12 = (int *)func_0010BA78(uVar14 << 3);
  puVar6[-0xd7] = piVar12;
  if (uVar14 != 0) {
    piVar8 = piVar12 + -2;
    if ((bVar1 & 1) != 0) {
      iVar16 = piVar15[0xb];
      *piVar12 = piVar15[10];
      piVar12[1] = iVar16;
      piVar8 = piVar12;
    }
    for (iVar16 = (int)uVar14 >> 1; iVar16 != 0; iVar16 = iVar16 + -1) {
      iVar10 = piVar15[0xb];
      piVar8[2] = piVar15[10];
      piVar8[3] = iVar10;
      iVar10 = piVar15[0xb];
      piVar8[4] = piVar15[10];
      piVar8[5] = iVar10;
      piVar8 = piVar8 + 4;
    }
  }
  puVar9 = (undefined4 *)func_0010CEE0(0x194,(int *)0x0,4);
  iVar16 = 0;
  if (puVar9 != (undefined4 *)0x0) {
    *puVar9 = 0x24;
    puVar9[1] = 0xb;
    iVar16 = func_00100118((int)(puVar9 + 2),puRam00254850,0x24,0xb);
  }
  if (iVar16 != 0) {
    puVar6[-0xdd] = 0xb;
    puVar6[-0xdc] = iVar16;
  }
  iVar16 = iRam00254854;
  puVar6[-0x112] = puVar6 + -0xdf;
  *(undefined2 *)(iVar16 + (int)puVar5) = 0xb;
  local_9c = s_cState_Fall_00254858;
  local_a0 = iVar11;
  func_0010BEC4((int)(puVar6 + -0xdf),0,&local_a0);
  piVar12 = (int *)puVar6[-0xd9];
  iVar16 = piVar15[8];
  iVar10 = piVar15[7];
  iVar18 = piVar15[9];
  iVar21 = piVar15[10];
  iVar22 = piVar15[0xb];
  *piVar12 = piVar15[6];
  piVar12[1] = iVar10;
  piVar12 = (int *)puVar6[-0xd8];
  *piVar12 = iVar16;
  piVar12[1] = iVar18;
  piVar12 = (int *)puVar6[-0xd7];
  *piVar12 = iVar21;
  piVar12[1] = iVar22;
  local_9c = s_cState_Stop_00254c48;
  local_a0 = iVar11;
  func_0010BEC4((int)(puVar6 + -0xdf),1,&local_a0);
  iVar16 = puVar6[-0xd9];
  iVar10 = piVar15[0xd];
  iVar18 = piVar15[0xe];
  iVar19 = piVar15[0xf];
  *(int *)(iVar16 + 8) = piVar15[0xc];
  *(int *)(iVar16 + 0xc) = iVar10;
  iVar16 = puVar6[-0xd8];
  *(int *)(iVar16 + 8) = iVar18;
  *(int *)(iVar16 + 0xc) = iVar19;
  iVar16 = puVar6[-0xd7];
  *(int *)(iVar16 + 8) = iVar21;
  *(int *)(iVar16 + 0xc) = iVar22;
  local_9c = s_cState_BrokeOut_00254c54;
  local_a0 = iVar11;
  func_0010BEC4((int)(puVar6 + -0xdf),2,&local_a0);
  iVar16 = puVar6[-0xd9];
  iVar10 = piVar15[0x11];
  iVar18 = piVar15[0x12];
  iVar19 = piVar15[0x13];
  *(int *)(iVar16 + 0x10) = piVar15[0x10];
  *(int *)(iVar16 + 0x14) = iVar10;
  iVar16 = puVar6[-0xd8];
  *(int *)(iVar16 + 0x10) = iVar18;
  *(int *)(iVar16 + 0x14) = iVar19;
  iVar16 = puVar6[-0xd7];
  *(int *)(iVar16 + 0x10) = iVar21;
  *(int *)(iVar16 + 0x14) = iVar22;
  local_9c = s_cState_Wait_00254c64;
  local_a0 = iVar11;
  func_0010BEC4((int)(puVar6 + -0xdf),4,&local_a0);
  iVar16 = puVar6[-0xd9];
  iVar10 = piVar15[0x15];
  iVar18 = piVar15[0x16];
  iVar19 = piVar15[0x17];
  *(int *)(iVar16 + 0x20) = piVar15[0x14];
  *(int *)(iVar16 + 0x24) = iVar10;
  iVar16 = puVar6[-0xd8];
  *(int *)(iVar16 + 0x20) = iVar18;
  *(int *)(iVar16 + 0x24) = iVar19;
  iVar16 = puVar6[-0xd7];
  *(int *)(iVar16 + 0x20) = iVar21;
  *(int *)(iVar16 + 0x24) = iVar22;
  local_9c = s_cState_FallWater_00254c70;
  local_a0 = iVar11;
  func_0010BEC4((int)(puVar6 + -0xdf),5,&local_a0);
  iVar16 = puVar6[-0xd9];
  iVar10 = piVar15[0x19];
  iVar18 = piVar15[0x1a];
  iVar19 = piVar15[0x1b];
  *(int *)(iVar16 + 0x28) = piVar15[0x18];
  *(int *)(iVar16 + 0x2c) = iVar10;
  iVar16 = puVar6[-0xd8];
  *(int *)(iVar16 + 0x28) = iVar18;
  *(int *)(iVar16 + 0x2c) = iVar19;
  iVar16 = puVar6[-0xd7];
  *(int *)(iVar16 + 0x28) = iVar21;
  *(int *)(iVar16 + 0x2c) = iVar22;
  local_9c = s_cState_ParentChase_00254c84;
  local_a0 = iVar11;
  func_0010BEC4((int)(puVar6 + -0xdf),6,&local_a0);
  iVar16 = puVar6[-0xd9];
  iVar10 = piVar15[0x1d];
  iVar18 = piVar15[0x1e];
  iVar19 = piVar15[0x1f];
  *(int *)(iVar16 + 0x30) = piVar15[0x1c];
  *(int *)(iVar16 + 0x34) = iVar10;
  iVar16 = puVar6[-0xd8];
  *(int *)(iVar16 + 0x30) = iVar18;
  *(int *)(iVar16 + 0x34) = iVar19;
  iVar16 = puVar6[-0xd7];
  *(int *)(iVar16 + 0x30) = iVar21;
  *(int *)(iVar16 + 0x34) = iVar22;
  local_9c = s_cState_StartEvent_00254c98;
  local_a0 = iVar11;
  func_0010BEC4((int)(puVar6 + -0xdf),7,&local_a0);
  iVar16 = puVar6[-0xd9];
  iVar10 = piVar15[0x21];
  iVar18 = piVar15[0x22];
  iVar19 = piVar15[0x23];
  *(int *)(iVar16 + 0x38) = piVar15[0x20];
  *(int *)(iVar16 + 0x3c) = iVar10;
  iVar16 = puVar6[-0xd8];
  *(int *)(iVar16 + 0x38) = iVar18;
  *(int *)(iVar16 + 0x3c) = iVar19;
  iVar16 = puVar6[-0xd7];
  *(int *)(iVar16 + 0x38) = iVar21;
  *(int *)(iVar16 + 0x3c) = iVar22;
  local_9c = s_cState_Erase_00254cac;
  local_a0 = iVar11;
  func_0010BEC4((int)(puVar6 + -0xdf),8,&local_a0);
  iVar16 = puVar6[-0xd9];
  iVar10 = piVar15[0x25];
  iVar18 = piVar15[0x26];
  iVar19 = piVar15[0x27];
  *(int *)(iVar16 + 0x40) = piVar15[0x24];
  *(int *)(iVar16 + 0x44) = iVar10;
  iVar16 = puVar6[-0xd8];
  *(int *)(iVar16 + 0x40) = iVar18;
  *(int *)(iVar16 + 0x44) = iVar19;
  iVar16 = puVar6[-0xd7];
  *(int *)(iVar16 + 0x40) = iVar21;
  *(int *)(iVar16 + 0x44) = iVar22;
  local_9c = s_cState_GoUpWater_00254cbc;
  local_a0 = iVar11;
  func_0010BEC4((int)(puVar6 + -0xdf),9,&local_a0);
  iVar10 = puVar6[-0xd9];
  iVar16 = piVar15[0x29];
  iVar18 = piVar15[0x2a];
  iVar19 = piVar15[0x2b];
  *(int *)(iVar10 + 0x48) = piVar15[0x28];
  *(int *)(iVar10 + 0x4c) = iVar16;
  iVar16 = puVar6[-0xd8];
  *(int *)(iVar16 + 0x48) = iVar18;
  *(int *)(iVar16 + 0x4c) = iVar19;
  iVar16 = puVar6[-0xd7];
  *(int *)(iVar16 + 0x48) = iVar21;
  *(int *)(iVar16 + 0x4c) = iVar22;
  local_9c = s_cState_GoDownWater_00254cd0;
  local_a0 = iVar11;
  func_0010BEC4((int)(puVar6 + -0xdf),10,&local_a0);
  iVar11 = puVar6[-0xd9];
  iVar10 = piVar15[0x2d];
  iVar16 = piVar15[0x2e];
  iVar18 = piVar15[0x2f];
  *(int *)(iVar11 + 0x50) = piVar15[0x2c];
  *(int *)(iVar11 + 0x54) = iVar10;
  iVar11 = puVar6[-0xd8];
  *(int *)(iVar11 + 0x50) = iVar16;
  *(int *)(iVar11 + 0x54) = iVar18;
  iVar11 = puVar6[-0xd7];
  *(int *)(iVar11 + 0x50) = iVar21;
  *(int *)(iVar11 + 0x54) = iVar22;
  func_0065FE3C(puVar6 + -0xdf,1);
  puVar9 = (undefined4 *)func_0054D964((int)puVar5,0);
  if (((*puRam00254ce4 & 1) == 0) && (iVar11 = func_00100174((int *)puRam00254ce4), iVar11 != 0)) {
    *puRam00254ce8 = uRam00254cec;
  }
  if ((puVar9 == (undefined4 *)0x0) ||
     (iVar11 = (**(code **)*puVar9)(puVar9,puRam00254ce8), iVar11 == 0)) {
    puVar9 = (undefined4 *)0x0;
  }
  puVar6[-0xd0] = puVar9;
  objStack_b0[0] = 0x244;
  *(undefined2 *)(puVar9 + 10) = 0x244;
  iVar11 = puVar6[-0xd0];
  *(undefined4 *)(iVar11 + 4) = puVar6[-0xf3];
  *(undefined4 *)(iVar11 + 8) = puVar6[-0xf2];
  *(undefined4 *)(iVar11 + 0xc) = puVar6[-0xf1];
  func_004356B4((int *)puVar6[-0xd0]);
  iVar11 = piVar15[0x30];
  iVar16 = piVar15[0x31];
  puVar6[-0xce] = puVar5;
  puVar6[-0xcd] = iVar11;
  puVar6[-0xcc] = iVar16;
  iVar11 = func_0054D964((int)puVar5,0);
  puVar6[0x12] = iVar11;
  objStack_b0[1] = CONCAT22((*(undefined2 *)((char *)&objStack_b0[1] + 2)),0xe4);
  *(undefined2 *)(*piVar4 + 0x28) = 0xe4;
  func_004356B4((int *)*piVar4);
  puVar6[6] = *piVar4;
  objStack_b0[0] = puVar6[-0x134];
  func_004EDAD0((int)puVar6,objStack_b0);
  *(undefined2 *)(iRam00254df0 + (int)puVar5) = *(undefined2 *)(puVar6 + -0x1d2);
  piVar4 = piRam00254df4;
  *(undefined1 *)(puVar6 + 0x11) = 0;
  func_004A7F00(*piVar4,(int)puVar6,0);
  puVar9 = (undefined4 *)func_0010BAB4(0x1c);
  uVar2 = uRam00254dfc;
  uVar17 = uRam00254df8;
  if (puVar9 != (undefined4 *)0x0) {
    *puVar9 = uRam00254df8;
    puVar9[1] = uVar13;
    puVar9[2] = uVar2;
    puVar9[3] = uVar17;
    puVar9[4] = uVar17;
    puVar9[5] = 0;
    puVar9[6] = 0;
  }
  puVar6[-0xc6] = puVar9;
  if ((*(short *)((int)puVar6 + -0x766) != 0) && (bVar3 = func_00588BF0((int)puVar5,0), bVar3)) {
    func_0065FE3C(puVar6 + -0xdf,6);
  }
  iVar11 = piVar15[0x32];
  iVar16 = piVar15[0x33];
  puVar6[0x18] = puVar5;
  uVar13 = uRam00254e00;
  puVar6[0x19] = iVar11;
  puVar6[0x1a] = iVar16;
  puVar6[-5] = puVar6 + 0x17;
  puVar6[-0xae] = local_3c;
  puVar6[-0x12f] = puVar6[-0x12f] | 2;
  puVar6[-0xfc] = uVar13;
  func_004ECF6C((int)puVar5);
  func_002539C8((int)puVar5);
  return puVar5;
}

