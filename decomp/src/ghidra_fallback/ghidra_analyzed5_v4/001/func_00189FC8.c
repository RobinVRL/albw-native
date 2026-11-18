#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_00188CCC(int param_1,float fparam_0);
extern int func_00189040(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_001E4B08(undefined4 *param_1,uint *param_2,int param_3);
extern int func_002C41BC(int *param_1,undefined4 *param_2,int param_3);
extern int func_00324964(int param_1);
extern int func_003249B4(int param_1);
extern int func_003249E0(int param_1,uint param_2);
extern int func_0034CAA0(undefined4 *param_1);
extern int func_003529A0(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
extern int func_004356B4(int *param_1);
extern int func_004EE484(undefined4 *param_1);
extern int func_00521028(int param_1);
extern int func_0054D89C(int param_1,uint param_2);
extern int func_0054DDF4(int param_1,uint param_2);
extern int func_00581D60(int param_1);
extern int func_00588BE4(int param_1);
extern int func_00659544(undefined4 *param_1,undefined1 param_2);
extern float fRam0018af30;
extern int iRam0018a718;
extern int iRam0018a72c;
extern int iRam0018af50;
extern undefined4 uRam0018a71c;
extern undefined4 uRam0018af20;
extern undefined4 uRam0018af24;
extern undefined4 uRam0018af28;
extern undefined4 uRam0018af2c;
extern undefined4 uRam0018af34;
extern undefined4 uRam0018af4c;
extern undefined4 uRam0018af54;
extern undefined4 uRam0018af58;
extern int *piRam0018af38;
extern undefined4 *puRam0018a728;
extern undefined4 *puRam0018abcc;
extern undefined DAT_0000000a;
extern int DAT_0018a300;
extern undefined4 DAT_0018a304;
extern undefined4 *DAT_0018a308;
extern undefined4 *DAT_0018a30c;
extern undefined4 DAT_0018a310;
extern undefined4 DAT_0018a314;
extern uint DAT_0018a318;
extern int *DAT_0018a31c;
extern int *DAT_0018a320;
extern float DAT_0018a714;
extern char s_cState_DeepWaterErase_0018aba0[];
extern char s_cState_Erase_0018ab6c[];
extern char s_cState_Explose_0018ab5c[];
extern char s_cState_FallValley_0018ab7c[];
extern char s_cState_JumpThrown_0018ab24[];
extern char s_cState_Lifted_0018a73c[];
extern char s_cState_OnGround_0018ab38[];
extern char s_cState_SandValley_0018abb8[];
extern char s_cState_ScaleUp_0018ab90[];
extern char s_cState_Thrown_0018ab14[];
extern char s_cState_Wait_0018a730[];
extern char s_cState_WaterFloor_0018ab48[];

// USA 00189FC8 <- EU 00189FC8 (Ghidra, non-matching)
// GLOBAL DAT_0000000a undefined
// GLOBAL DAT_0018a300 int
// GLOBAL DAT_0018a304 undefined4
// GLOBAL DAT_0018a308 undefined4 *
// GLOBAL DAT_0018a30c undefined4 *
// GLOBAL DAT_0018a310 undefined4
// GLOBAL DAT_0018a314 undefined4
// GLOBAL DAT_0018a318 uint
// GLOBAL DAT_0018a31c int *
// GLOBAL DAT_0018a320 int *
// GLOBAL DAT_0018a714 float
// GLOBAL UNK_0018a718 int
// GLOBAL UNK_0018a71c undefined4
// GLOBAL UNK_0018a728 undefined *
// GLOBAL UNK_0018a72c int
// GLOBAL UNK_0018abcc undefined4 *
// GLOBAL UNK_0018af20 undefined4
// GLOBAL UNK_0018af24 undefined4
// GLOBAL UNK_0018af28 undefined4
// GLOBAL UNK_0018af2c undefined4
// GLOBAL UNK_0018af30 float
// GLOBAL UNK_0018af34 uint
// GLOBAL UNK_0018af38 int *
// GLOBAL UNK_0018af4c undefined4
// GLOBAL UNK_0018af50 int
// GLOBAL UNK_0018af54 undefined4
// GLOBAL UNK_0018af58 undefined4
// GLOBAL s_cState_DeepWaterErase_0018aba0 string
// GLOBAL s_cState_Erase_0018ab6c string
// GLOBAL s_cState_Explose_0018ab5c string
// GLOBAL s_cState_FallValley_0018ab7c string
// GLOBAL s_cState_JumpThrown_0018ab24 string
// GLOBAL s_cState_Lifted_0018a73c string
// GLOBAL s_cState_OnGround_0018ab38 string
// GLOBAL s_cState_SandValley_0018abb8 string
// GLOBAL s_cState_ScaleUp_0018ab90 string
// GLOBAL s_cState_Thrown_0018ab14 string
// GLOBAL s_cState_Wait_0018a730 string
// GLOBAL s_cState_WaterFloor_0018ab48 string

/* WARNING: Variable defined which should be unmapped: objStack_fc */

int func_00189FC8(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  float fVar4;
  undefined2 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  undefined2 *puVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  int *piVar21;
  int iVar22;
  undefined4 *puVar23;
  undefined8 uVar24;
  undefined4 uVar25;
  _Alignas(8) unsigned char albw_frame[0x100];
  #define objStack_fc ((uint *)(albw_frame + 0x4))
  #define uStack_ec (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_e8 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_e4 (*(uint *)(albw_frame + 0x1c))
  #define uStack_e0 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_dc (*(uint *)(albw_frame + 0x24))
  #define uStack_a8 (*(undefined4 *)(albw_frame + 0x58))
  #define uStack_a4 (*(undefined1 *)(albw_frame + 0x5c))
  #define local_9c (*(int *)(albw_frame + 0x64))
  #define iStack_98 (*(int *)(albw_frame + 0x68))
  #define pcStack_94 (*(char * *)(albw_frame + 0x6c))
  #define local_90 (*(uint *)(albw_frame + 0x70))
  #define local_8c (*(uint *)(albw_frame + 0x74))
  #define local_88 (*(undefined4 * *)(albw_frame + 0x78))
  #define auStack_74 ((undefined4 *)(albw_frame + 0x8c))
  #define uStack_5c (*(uint *)(albw_frame + 0xa4))
  #define aiStack_40 ((int *)(albw_frame + 0xc0))
  piVar6 = (int *)func_001E4B08(param_1,param_2,0);
  iVar14 = DAT_0018a300 + 0x78;
  *piVar6 = DAT_0018a300;
  piVar6[200] = iVar14;
  piVar6[0x13d] = 0;
  piVar6[0x13e] = 0;
  puVar7 = func_0010A794(piVar6 + 0x13f);
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  puVar7[8] = 0;
  puVar7[9] = 0;
  uVar20 = DAT_0018a304;
  puVar7[10] = 0;
  puVar7[0xb] = uVar20;
  iVar14 = func_0054D89C((int)(puVar7 + -0x13f),0);
  puVar7[0xc] = iVar14;
  puVar7[0xd] = 0;
  puVar8 = DAT_0018a308;
  uVar15 = param_2[2];
  uVar18 = param_2[3];
  puVar7[0xe] = param_2[1];
  puVar7[0xf] = uVar15;
  puVar7[0x10] = uVar18;
  uVar15 = param_2[5];
  uVar18 = param_2[6];
  puVar7[0x11] = param_2[4];
  puVar7[0x12] = uVar15;
  puVar7[0x13] = uVar18;
  uVar16 = puVar8[1];
  uVar19 = puVar8[2];
  puVar7[0x14] = *puVar8;
  puVar7[0x15] = uVar16;
  puVar7[0x16] = uVar19;
  uVar16 = puVar8[1];
  uVar19 = puVar8[2];
  puVar7[0x17] = *puVar8;
  puVar7[0x18] = uVar16;
  puVar7[0x19] = uVar19;
  puVar7[0x1a] = param_2[2];
  puVar7[0x1b] = uVar20;
  puVar7[0x1c] = 0;
  puVar7[0x1d] = 0;
  iVar14 = func_004EE484(puVar7 + 0x1e);
  iVar14 = func_004EE484((undefined4 *)(iVar14 + 100));
  puVar23 = (undefined4 *)(iVar14 + 100);
  iVar22 = iVar14 + -0x5d8;
  uVar19 = *DAT_0018a30c;
  uVar12 = DAT_0018a30c[1];
  *(int *)(iVar14 + 0x68) = iVar22;
  uVar16 = DAT_0018a310;
  *(undefined4 *)(iVar14 + 0x6c) = uVar19;
  *(undefined4 *)(iVar14 + 0x70) = uVar12;
  puVar7 = DAT_0018a30c;
  local_8c = iVar14 + 0x74;
  *puVar23 = uVar16;
  *(undefined4 *)(iVar14 + 0x78) = 0;
  uVar19 = puVar7[0x3f];
  local_90 = iVar14 + 0x84;
  *(undefined4 *)(iVar14 + 0x7c) = puVar7[0x3e];
  *(undefined4 *)(iVar14 + 0x80) = uVar19;
  *(undefined4 *)(iVar14 + 0x74) = uVar16;
  *(undefined4 *)(iVar14 + 0x88) = 0;
  uVar19 = puVar7[0x3e];
  uVar12 = puVar7[0x3f];
  *(undefined4 *)(iVar14 + 0x84) = uVar16;
  *(undefined4 *)(iVar14 + 0x8c) = uVar19;
  *(undefined4 *)(iVar14 + 0x90) = uVar12;
  local_9c = iVar14 + 0x94;
  *(undefined4 *)(iVar14 + 0x98) = 0;
  uVar19 = DAT_0018a314;
  uVar12 = puVar7[0x3f];
  uVar24 = CONCAT44(uVar20,DAT_0018a314);
  *(undefined4 *)(iVar14 + 0x9c) = puVar7[0x3e];
  *(undefined4 *)(iVar14 + 0xa0) = uVar12;
  *(undefined4 *)(iVar14 + 0x94) = uVar16;
  *(undefined1 *)(iVar14 + 0xa4) = 0;
  *(undefined1 *)(iVar14 + 0xa5) = 0;
  uVar12 = puVar8[1];
  uVar17 = puVar8[2];
  *(undefined4 *)(iVar14 + 0xa8) = *puVar8;
  *(undefined4 *)(iVar14 + 0xac) = uVar12;
  *(undefined4 *)(iVar14 + 0xb0) = uVar17;
  uVar12 = puVar8[1];
  uVar17 = puVar8[2];
  *(undefined4 *)(iVar14 + 0xb4) = *puVar8;
  *(undefined4 *)(iVar14 + 0xb8) = uVar12;
  *(undefined4 *)(iVar14 + 0xbc) = uVar17;
  local_88 = (undefined4 *)(iVar14 + 0xc0);
  *(undefined4 *)(iVar14 + 0xc4) = 0xb4;
  *(undefined4 *)(iVar14 + 0xc0) = 0;
  *(undefined4 *)(iVar14 + 200) = uVar20;
  *(undefined4 *)(iVar14 + 0xcc) = 0;
  *(undefined4 *)(iVar14 + 0xd0) = 0;
  *(undefined4 *)(iVar14 + 0xd4) = *(undefined4 *)(iVar14 + -0x204);
  *(undefined4 *)(iVar14 + 0xd8) = uVar19;
  *(char *)(iVar14 + 0xdc) = (char)(short)param_2[0xb];
  *(char *)(iVar14 + 0xdd) = (char)(short)param_2[0xb];
  *(undefined1 *)(iVar14 + 0xde) = 0;
  puVar7 = (undefined4 *)func_0010BAB4(0x48);
  puVar8 = (undefined4 *)0x0;
  if (puVar7 != (undefined4 *)0x0) {
    puVar8 = func_0034CAA0(puVar7);
  }
  *(undefined4 **)(iVar14 + 0xe0) = puVar8;
  uVar15 = DAT_0018a318;
  *(uint *)(iVar14 + 0x100) = DAT_0018a318;
  *(int *)(iVar14 + 0x104) = (int)uVar24;
  *(undefined1 *)(iVar14 + 0x108) = 0;
  puVar8 = DAT_0018a30c;
  *(int *)(iVar14 + 0x10c) = (int)((ulonglong)uVar24 >> 0x20);
  *(undefined4 *)(iVar14 + 0x110) = 2;
  *(undefined4 *)(iVar14 + 0x114) = 1;
  *(undefined4 *)(iVar14 + 0x11c) = 0;
  piVar6 = DAT_0018a31c;
  uVar20 = puVar8[0x3f];
  *(undefined4 *)(iVar14 + 0x120) = puVar8[0x3e];
  *(undefined4 *)(iVar14 + 0x124) = uVar20;
  *(undefined4 *)(iVar14 + 0x118) = uVar16;
  *(undefined1 *)(iVar14 + 0x128) = 0;
  *(undefined1 *)(iVar14 + 0x129) = 0;
  *(undefined1 *)(iVar14 + 0x12a) = 0;
  *(int *)(iVar14 + 0x110) = (int)*(short *)((int)param_2 + 0x2a);
  uVar20 = func_00581D60(*piVar6);
  uVar16 = (undefined4)uVar24;
  *(undefined4 *)(iVar14 + 0xe4) = uVar16;
  *(undefined4 *)(iVar14 + 0xe8) = uVar16;
  *(undefined4 *)(iVar14 + 0xec) = uVar16;
  *(undefined4 *)(iVar14 + 0xf0) = uVar20;
  *(undefined4 *)(iVar14 + 0xf4) = 10;
  puVar8 = DAT_0018a30c;
  *(undefined1 *)(iVar14 + 0xf8) = 0;
  *(undefined4 *)(iVar14 + 0xfc) = 0;
  *(undefined4 **)(iVar14 + -0x1ec) = puVar23;
  uVar16 = puVar8[2];
  uVar20 = puVar8[3];
  *(int *)(iVar14 + 0x11c) = iVar22;
  piVar6 = DAT_0018a320;
  *(undefined4 *)(iVar14 + 0x124) = uVar20;
  *(undefined4 *)(iVar14 + 0x120) = uVar16;
  if (*(byte *)(iVar14 + 0xdc) < 2) {
    if (*(int *)(iVar14 + 0x110) == 1) {
      piVar21 = (int *)0x0;
      objStack_fc[0] = 0;
      objStack_fc[1] = 0;
      uVar20 = func_0014E428(iVar22,1,1,0,1,0,0);
      *(undefined4 *)(iVar14 + -0xe4) = uVar20;
    }
    else {
      piVar21 = (int *)0x0;
      objStack_fc[0] = 0;
      objStack_fc[1] = 0;
      if (*(int *)(iVar14 + 0x110) == 3) {
        uVar20 = func_0014E428(iVar22,1,3,0,1,0,0);
        *(undefined4 *)(iVar14 + -0xe4) = uVar20;
      }
      else {
        uVar20 = func_0014E428(iVar22,1,0,0,1,0,0);
        *(undefined4 *)(iVar14 + -0xe4) = uVar20;
      }
    }
    if (*(int *)(iVar14 + 0x110) == 3) {
      *(float *)(iVar14 + 0x10c) = *(float *)(iVar14 + 0x10c) * DAT_0018a714;
    }
  }
  else {
    iVar9 = func_00588BE4(iVar22);
    piVar21 = (int *)0x0;
    objStack_fc[0] = 0;
    objStack_fc[1] = 0;
    if (iVar9 == *piVar6) {
      uVar20 = func_0014E428(iVar22,1,0,0,1,0,0);
      *(undefined4 *)(iVar14 + -0xe4) = uVar20;
    }
    else {
      uVar20 = func_0014E428(iVar22,1,2,0,1,0,0);
      *(undefined4 *)(iVar14 + -0xe4) = uVar20;
    }
  }
  iVar9 = *(int *)(iVar14 + -0xe4);
  *(int *)(iVar14 + -0x160) = iVar9;
  puVar8 = *(undefined4 **)(iVar14 + -0x94);
  *(uint *)(iVar9 + 0x164) = *(uint *)(iVar9 + 0x164) | 0x40000000;
  *(undefined4 **)(iVar9 + 0x74) = puVar8;
  *(undefined4 **)(iVar9 + 0x78) = puVar8;
  *(undefined4 **)(iVar9 + 0x7c) = puVar8;
  func_00151148(*(int *)(iVar14 + -0xac),1);
  iVar10 = func_00588BE4(iVar22);
  iVar9 = iRam0018a718;
  iVar13 = *DAT_0018a320;
  if (iVar10 != iVar13) {
    puVar7 = (undefined4 *)func_0010BAB4(0xa8);
    puVar8 = (undefined4 *)0x0;
    if (puVar7 != (undefined4 *)0x0) {
      puVar8 = func_0016A2FC(puVar7,1,uRam0018a71c,1);
    }
    *(undefined4 **)(iVar14 + -0xe0) = puVar8;
    if (*(int *)(iVar14 + 0x110) == 1) {
      aiStack_40[1] = (int)"BombR"; /* EU 0018AF3C */
      aiStack_40[0] = iVar9;
      func_00169608(*(uint **)(iVar14 + -0xe0),0,aiStack_40,
                    *(int *)(*(int *)(iVar14 + -0x308) + 0x1cc));
    }
    else if (*(int *)(iVar14 + 0x110) == 3) {
      aiStack_40[1] = (int)"BombM"; /* EU 0018AF44 */
      aiStack_40[0] = iVar9;
      func_00169608(*(uint **)(iVar14 + -0xe0),0,aiStack_40,
                    *(int *)(*(int *)(iVar14 + -0x308) + 0x1d4));
    }
    else {
      aiStack_40[1] = (int)"BombS"; /* EU 0018A720 */
      aiStack_40[0] = iVar9;
      func_00169608(*(uint **)(iVar14 + -0xe0),0,aiStack_40,
                    *(int *)(*(int *)(iVar14 + -0x308) + 0x1c8));
    }
    func_0016A02C(*(int *)(iVar14 + -0xe0),-1,(int *)0xffffffff,0);
    objStack_fc[2] = (uint)(objStack_fc + 3);
    objStack_fc[1] = 3;
    piVar21 = (int *)&DAT_0000000a;
    uStack_a8 = 10;
    uStack_a4 = 0;
    objStack_fc[3] = 0;
    objStack_fc[0] = 1;
    uStack_e8 = (undefined4)((ulonglong)uVar24 >> 0x20);
    puVar8 = &uStack_ec;
    uStack_dc = (uint)puVar23 | 0xff;
    uStack_ec = (undefined4)uVar24;
    uStack_e4 = uVar15;
    uStack_e0 = uStack_e8;
    func_0016898C(*(int *)(iVar14 + -0xe0),objStack_fc);
    iVar13 = *(int *)(*(int *)(iVar14 + -0xe0) + 0xc);
    *(int *)(*(int *)(*(int *)(iVar14 + -0xe0) + 0x14) + 0x10) = (int)uVar24;
  }
  uVar20 = (undefined4)uVar24;
  func_00189040(iVar22,iVar13,puVar8,piVar21);
  func_003249E0(iVar22,0);
  *(int *)(iVar14 + -0x6c) = *(int *)(iVar14 + -0x1cc);
  objStack_fc[1] = CONCAT22((*(undefined2 *)((char *)&objStack_fc[1] + 2)),0x240);
  *(undefined2 *)(*(int *)(iVar14 + -0x1cc) + 0x28) = 0x240;
  *(uint *)(*(int *)(iVar14 + -0x6c) + 0x2c) =
       *(uint *)(*(int *)(iVar14 + -0x6c) + 0x2c) & 0xfffff8ff | 0x500;
  iVar10 = *(int *)(iVar14 + -0x6c);
  *(undefined4 *)(iVar10 + 4) = *(undefined4 *)(iVar14 + -0x208);
  *(undefined4 *)(iVar10 + 8) = *(undefined4 *)(iVar14 + -0x204);
  *(undefined4 *)(iVar10 + 0xc) = *(undefined4 *)(iVar14 + -0x200);
  func_004356B4(*(int **)(iVar14 + -0x6c));
  func_00324964(iVar22);
  iVar10 = func_00588BE4(iVar22);
  if (iVar10 == *DAT_0018a320) {
    func_003249B4(iVar22);
  }
  objStack_fc[2] = iVar14 - 0xdc;
  objStack_fc[1] = 0xc;
  *(int *)(iVar14 + -200) = iVar22;
  *(undefined1 *)(iVar14 + -0xd6) = 0xc;
  iVar10 = func_0010BA78(0xc0);
  puVar8 = DAT_0018a30c;
  *(int *)(iVar14 + -0xc4) = iVar10;
  *(uint *)(iVar14 + -0xc0) = iVar10 + (uint)*(byte *)(iVar14 + -0xd6) * 8;
  iVar13 = 0xc;
  puVar7 = (undefined4 *)(iVar10 + -8);
  do {
    uVar16 = puVar8[0x3d];
    iVar13 = iVar13 + -1;
    puVar7[2] = puVar8[0x3c];
    puVar7[3] = uVar16;
    uVar16 = puVar8[0x3d];
    puVar7[4] = puVar8[0x3c];
    puVar7[5] = uVar16;
    puVar7 = puVar7 + 4;
  } while (iVar13 != 0);
  bVar1 = *(byte *)(iVar14 + -0xd6);
  uVar18 = (uint)bVar1;
  puVar7 = (undefined4 *)func_0010BA78(uVar18 << 3);
  uVar15 = objStack_fc[1];
  *(undefined4 **)(iVar14 + -0xbc) = puVar7;
  if (uVar18 != 0) {
    puVar23 = puVar7 + -2;
    if ((bVar1 & 1) != 0) {
      uVar16 = puVar8[9];
      *puVar7 = puVar8[8];
      puVar7[1] = uVar16;
      puVar23 = puVar7;
    }
    for (iVar10 = (int)uVar18 >> 1; iVar10 != 0; iVar10 = iVar10 + -1) {
      uVar16 = puVar8[9];
      puVar23[2] = puVar8[8];
      puVar23[3] = uVar16;
      uVar16 = puVar8[9];
      puVar23[4] = puVar8[8];
      puVar23[5] = uVar16;
      puVar23 = puVar23 + 4;
    }
  }
  if (0 < (int)objStack_fc[1]) {
    puVar7 = (undefined4 *)func_0010CEE0(objStack_fc[1] * 0x24 + 8,(int *)0x0,4);
    iVar10 = 0;
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = 0x24;
      puVar7[1] = uVar15;
      iVar10 = func_00100118((int)(puVar7 + 2),puRam0018a728,0x24,uVar15);
    }
    if (iVar10 != 0) {
      *(uint *)(iVar14 + -0xd4) = uVar15;
      *(int *)(iVar14 + -0xd0) = iVar10;
    }
  }
  iVar10 = iRam0018a72c;
  *(uint *)(iVar14 + -0x284) = objStack_fc[2];
  *(undefined2 *)(iVar10 + iVar22) = 0xc;
  pcStack_94 = s_cState_Wait_0018a730;
  iStack_98 = iVar9;
  func_0010BEC4(objStack_fc[2],0,&iStack_98);
  puVar7 = *(undefined4 **)(iVar14 + -0xc4);
  uVar16 = puVar8[5];
  uVar12 = puVar8[6];
  uVar19 = puVar8[7];
  uVar17 = puVar8[8];
  uVar25 = puVar8[9];
  *puVar7 = puVar8[4];
  puVar7[1] = uVar16;
  puVar7 = *(undefined4 **)(iVar14 + -0xc0);
  puVar7[1] = uVar19;
  *puVar7 = uVar12;
  puVar7 = *(undefined4 **)(iVar14 + -0xbc);
  *puVar7 = uVar17;
  puVar7[1] = uVar25;
  pcStack_94 = s_cState_Lifted_0018a73c;
  iStack_98 = iVar9;
  func_0010BEC4(objStack_fc[2],1,&iStack_98);
  iVar10 = *(int *)(iVar14 + -0xc4);
  uVar16 = puVar8[0xc];
  uVar19 = puVar8[0xd];
  uVar12 = puVar8[0xb];
  *(undefined4 *)(iVar10 + 8) = puVar8[10];
  *(undefined4 *)(iVar10 + 0xc) = uVar12;
  iVar10 = *(int *)(iVar14 + -0xc0);
  *(undefined4 *)(iVar10 + 8) = uVar16;
  *(undefined4 *)(iVar10 + 0xc) = uVar19;
  iVar10 = *(int *)(iVar14 + -0xbc);
  *(undefined4 *)(iVar10 + 8) = uVar17;
  *(undefined4 *)(iVar10 + 0xc) = uVar25;
  pcStack_94 = s_cState_Thrown_0018ab14;
  iStack_98 = iVar9;
  func_0010BEC4(objStack_fc[2],2,&iStack_98);
  iVar10 = *(int *)(iVar14 + -0xc4);
  uVar16 = puVar8[0xf];
  uVar19 = puVar8[0x10];
  uVar12 = puVar8[0x11];
  uVar17 = puVar8[0x12];
  uVar25 = puVar8[0x13];
  *(undefined4 *)(iVar10 + 0x10) = puVar8[0xe];
  *(undefined4 *)(iVar10 + 0x14) = uVar16;
  iVar10 = *(int *)(iVar14 + -0xc0);
  *(undefined4 *)(iVar10 + 0x10) = uVar19;
  *(undefined4 *)(iVar10 + 0x14) = uVar12;
  iVar10 = *(int *)(iVar14 + -0xbc);
  *(undefined4 *)(iVar10 + 0x10) = uVar17;
  *(undefined4 *)(iVar10 + 0x14) = uVar25;
  pcStack_94 = s_cState_JumpThrown_0018ab24;
  iStack_98 = iVar9;
  func_0010BEC4(objStack_fc[2],3,&iStack_98);
  iVar10 = *(int *)(iVar14 + -0xc4);
  uVar16 = puVar8[0x15];
  uVar12 = puVar8[0x16];
  uVar19 = puVar8[0x17];
  uVar17 = puVar8[8];
  uVar25 = puVar8[9];
  *(undefined4 *)(iVar10 + 0x18) = puVar8[0x14];
  *(undefined4 *)(iVar10 + 0x1c) = uVar16;
  iVar10 = *(int *)(iVar14 + -0xc0);
  *(undefined4 *)(iVar10 + 0x18) = uVar12;
  *(undefined4 *)(iVar10 + 0x1c) = uVar19;
  iVar10 = *(int *)(iVar14 + -0xbc);
  *(undefined4 *)(iVar10 + 0x18) = uVar17;
  *(undefined4 *)(iVar10 + 0x1c) = uVar25;
  pcStack_94 = s_cState_OnGround_0018ab38;
  iStack_98 = iVar9;
  func_0010BEC4(objStack_fc[2],4,&iStack_98);
  iVar10 = *(int *)(iVar14 + -0xc4);
  uVar16 = puVar8[0x19];
  uVar24 = *(undefined8 *)(puVar8 + 0x1a);
  *(undefined4 *)(iVar10 + 0x20) = puVar8[0x18];
  *(undefined4 *)(iVar10 + 0x24) = uVar16;
  iVar10 = *(int *)(iVar14 + -0xc0);
  *(int *)(iVar10 + 0x20) = (int)uVar24;
  *(int *)(iVar10 + 0x24) = (int)((ulonglong)uVar24 >> 0x20);
  iVar10 = *(int *)(iVar14 + -0xbc);
  *(undefined4 *)(iVar10 + 0x20) = uVar17;
  *(undefined4 *)(iVar10 + 0x24) = uVar25;
  pcStack_94 = s_cState_WaterFloor_0018ab48;
  iStack_98 = iVar9;
  func_0010BEC4(objStack_fc[2],5,&iStack_98);
  iVar10 = *(int *)(iVar14 + -0xc4);
  uVar16 = puVar8[0x1d];
  uVar24 = *(undefined8 *)(puVar8 + 0x1e);
  *(undefined4 *)(iVar10 + 0x28) = puVar8[0x1c];
  *(undefined4 *)(iVar10 + 0x2c) = uVar16;
  iVar10 = *(int *)(iVar14 + -0xc0);
  *(int *)(iVar10 + 0x28) = (int)uVar24;
  *(int *)(iVar10 + 0x2c) = (int)((ulonglong)uVar24 >> 0x20);
  iVar10 = *(int *)(iVar14 + -0xbc);
  *(undefined4 *)(iVar10 + 0x28) = uVar17;
  *(undefined4 *)(iVar10 + 0x2c) = uVar25;
  pcStack_94 = s_cState_Explose_0018ab5c;
  iStack_98 = iVar9;
  func_0010BEC4(objStack_fc[2],6,&iStack_98);
  iVar10 = *(int *)(iVar14 + -0xc4);
  uVar16 = puVar8[0x21];
  uVar19 = puVar8[0x22];
  uVar12 = puVar8[0x23];
  *(undefined4 *)(iVar10 + 0x30) = puVar8[0x20];
  *(undefined4 *)(iVar10 + 0x34) = uVar16;
  iVar10 = *(int *)(iVar14 + -0xc0);
  *(undefined4 *)(iVar10 + 0x30) = uVar19;
  *(undefined4 *)(iVar10 + 0x34) = uVar12;
  iVar10 = *(int *)(iVar14 + -0xbc);
  *(undefined4 *)(iVar10 + 0x30) = uVar17;
  *(undefined4 *)(iVar10 + 0x34) = uVar25;
  pcStack_94 = s_cState_Erase_0018ab6c;
  iStack_98 = iVar9;
  func_0010BEC4(objStack_fc[2],7,&iStack_98);
  iVar10 = *(int *)(iVar14 + -0xc4);
  uVar16 = puVar8[0x25];
  uVar19 = puVar8[0x26];
  uVar12 = puVar8[0x27];
  *(undefined4 *)(iVar10 + 0x38) = puVar8[0x24];
  *(undefined4 *)(iVar10 + 0x3c) = uVar16;
  iVar10 = *(int *)(iVar14 + -0xc0);
  *(undefined4 *)(iVar10 + 0x38) = uVar19;
  *(undefined4 *)(iVar10 + 0x3c) = uVar12;
  iVar10 = *(int *)(iVar14 + -0xbc);
  *(undefined4 *)(iVar10 + 0x38) = uVar17;
  *(undefined4 *)(iVar10 + 0x3c) = uVar25;
  pcStack_94 = s_cState_FallValley_0018ab7c;
  iStack_98 = iVar9;
  func_0010BEC4(objStack_fc[2],8,&iStack_98);
  iVar10 = *(int *)(iVar14 + -0xc4);
  uVar24 = *(undefined8 *)(puVar8 + 0x28);
  uVar16 = puVar8[0x2a];
  uVar19 = puVar8[0x2b];
  *(int *)(iVar10 + 0x40) = (int)uVar24;
  *(int *)(iVar10 + 0x44) = (int)((ulonglong)uVar24 >> 0x20);
  iVar10 = *(int *)(iVar14 + -0xc0);
  *(undefined4 *)(iVar10 + 0x40) = uVar16;
  *(undefined4 *)(iVar10 + 0x44) = uVar19;
  iVar10 = *(int *)(iVar14 + -0xbc);
  *(undefined4 *)(iVar10 + 0x40) = uVar17;
  *(undefined4 *)(iVar10 + 0x44) = uVar25;
  pcStack_94 = s_cState_ScaleUp_0018ab90;
  iStack_98 = iVar9;
  func_0010BEC4(objStack_fc[2],9,&iStack_98);
  iVar10 = *(int *)(iVar14 + -0xc4);
  uVar16 = puVar8[0x2d];
  uVar19 = puVar8[0x2e];
  uVar12 = puVar8[0x2f];
  *(undefined4 *)(iVar10 + 0x48) = puVar8[0x2c];
  *(undefined4 *)(iVar10 + 0x4c) = uVar16;
  iVar10 = *(int *)(iVar14 + -0xc0);
  *(undefined4 *)(iVar10 + 0x48) = uVar19;
  *(undefined4 *)(iVar10 + 0x4c) = uVar12;
  iVar10 = *(int *)(iVar14 + -0xbc);
  *(undefined4 *)(iVar10 + 0x48) = uVar17;
  *(undefined4 *)(iVar10 + 0x4c) = uVar25;
  pcStack_94 = s_cState_DeepWaterErase_0018aba0;
  iStack_98 = iVar9;
  func_0010BEC4(objStack_fc[2],10,&iStack_98);
  iVar10 = *(int *)(iVar14 + -0xc4);
  uVar16 = puVar8[0x31];
  uVar19 = puVar8[0x32];
  uVar12 = puVar8[0x33];
  *(undefined4 *)(iVar10 + 0x50) = puVar8[0x30];
  *(undefined4 *)(iVar10 + 0x54) = uVar16;
  iVar10 = *(int *)(iVar14 + -0xc0);
  *(undefined4 *)(iVar10 + 0x50) = uVar19;
  *(undefined4 *)(iVar10 + 0x54) = uVar12;
  iVar10 = *(int *)(iVar14 + -0xbc);
  *(undefined4 *)(iVar10 + 0x50) = uVar17;
  *(undefined4 *)(iVar10 + 0x54) = uVar25;
  pcStack_94 = s_cState_SandValley_0018abb8;
  iStack_98 = iVar9;
  func_0010BEC4(objStack_fc[2],0xb,&iStack_98);
  iVar9 = *(int *)(iVar14 + -0xc4);
  uVar16 = puVar8[0x35];
  uVar19 = puVar8[0x36];
  uVar12 = puVar8[0x37];
  *(undefined4 *)(iVar9 + 0x58) = puVar8[0x34];
  *(undefined4 *)(iVar9 + 0x5c) = uVar16;
  iVar9 = *(int *)(iVar14 + -0xc0);
  *(undefined4 *)(iVar9 + 0x58) = uVar19;
  *(undefined4 *)(iVar9 + 0x5c) = uVar12;
  iVar9 = *(int *)(iVar14 + -0xbc);
  *(undefined4 *)(iVar9 + 0x58) = uVar17;
  *(undefined4 *)(iVar9 + 0x5c) = uVar25;
  piVar6 = (int *)func_00521028(iVar22);
  (**(code **)(*piVar6 + 8))(piVar6);
  func_003529A0(auStack_74,piVar6[1],iVar14 + -0x2b8);
  uStack_5c = (uint)(*(int *)(iVar14 + 0x110) != 2 && *(int *)(iVar14 + 0x110) != 1);
  func_002C41BC((int *)(iVar14 + -0x2b8),auStack_74,0);
  uVar16 = uRam0018af4c;
  if (*(char *)(iVar14 + 0xdc) == '\x02') {
    local_88[1] = 0x28;
    local_88[2] = uVar16;
    *local_88 = 0;
  }
  puVar11 = (undefined2 *)func_0054DDF4(iVar22,0);
  objStack_fc[3] = func_0054DDF4(iVar22,1);
  *(undefined2 **)(iVar14 + -0x238) = puVar11;
  *(undefined2 **)(iVar14 + -0x234) = puVar11;
  puVar7 = (undefined4 *)func_0010BAB4(0x74);
  if (puVar7 != (undefined4 *)0x0) {
    uVar16 = *DAT_0018a308;
    uVar19 = DAT_0018a308[1];
    puVar7[0x18] = DAT_0018a308[2];
    puVar23 = puRam0018abcc;
    puVar7[0x16] = uVar16;
    puVar7[0x17] = uVar19;
    uVar19 = uRam0018af24;
    uVar16 = *puVar23;
    uVar12 = puVar23[1];
    puVar7[0x1b] = puVar23[2];
    puVar7[0x19] = uVar16;
    puVar7[0x1a] = uVar12;
    uVar16 = uRam0018af20;
    puVar7[0x1c] = uVar20;
    *puVar7 = uVar16;
    puVar7[1] = uVar20;
    puVar7[2] = uVar20;
    puVar7[3] = uVar20;
    puVar7[4] = uVar20;
    puVar7[5] = uVar20;
    puVar7[6] = uVar20;
    puVar7[7] = uVar20;
    puVar7[8] = uVar20;
    puVar7[9] = uVar20;
    *(undefined2 *)(puVar7 + 10) = 0;
    puVar7[0xb] = 0;
    *(undefined1 *)(puVar7 + 0xc) = 0;
    puVar7[0xd] = uVar19;
    puVar7[0xe] = uVar19;
    puVar7[0xf] = uVar19;
    uVar16 = uRam0018af28;
    puVar7[0x10] = uRam0018af28;
    puVar7[0x11] = uVar16;
    puVar7[0x12] = uVar16;
    puVar7[0x13] = 0;
    puVar7[0x14] = 0;
    *(undefined2 *)(puVar7 + 0x15) = 9;
    *puVar7 = uRam0018af2c;
  }
  *(undefined4 **)(iVar14 + -0x68) = puVar7;
  objStack_fc[0] = CONCAT22((*(undefined2 *)((char *)&objStack_fc[0] + 2)),0xe0);
  *(undefined2 *)(puVar7 + 10) = 0xe0;
  fVar4 = fRam0018af30;
  puVar7 = (undefined4 *)(iVar14 + -0x68);
  *(uint *)(*(int *)(iVar14 + -0x68) + 0x2c) = *(uint *)(*(int *)(iVar14 + -0x68) + 0x2c) | 0x8000;
  func_00188CCC(iVar22,*(float *)(iVar14 + 0x10c) * fVar4);
  func_004356B4((int *)*puVar7);
  uVar16 = puVar8[0x38];
  uVar19 = puVar8[0x39];
  *(int *)(local_8c + 4) = iVar22;
  *(undefined4 *)(local_8c + 8) = uVar16;
  *(undefined4 *)(local_8c + 0xc) = uVar19;
  uStack_e4 = *(uint *)(iVar14 + -0x30c);
  objStack_fc[0] = local_8c;
  objStack_fc[1] = uRam0018af34;
  uVar15 = objStack_fc[1];
  (*(undefined2 *)((char *)&objStack_fc[1] + 0)) = (undefined2)uRam0018af34;
  uVar5 = (undefined2)objStack_fc[1];
  objStack_fc[1] = uVar15;
  func_0014EB8C(iVar14 + -100,*puVar7,puVar11,&uStack_e4,*(undefined2 *)(iVar14 + -0x584),local_8c,
                uVar5);
  *(undefined1 *)(iVar14 + -3) = 0;
  uVar16 = puVar8[0x38];
  uVar19 = puVar8[0x39];
  *(int *)(local_90 + 4) = iVar22;
  *(undefined4 *)(local_90 + 8) = uVar16;
  *(undefined4 *)(local_90 + 0xc) = uVar19;
  uStack_e4 = *(uint *)(iVar14 + -0x30c);
  objStack_fc[1] = uRam0018af34;
  uVar15 = objStack_fc[1];
  objStack_fc[0] = local_90;
  (*(undefined2 *)((char *)&objStack_fc[1] + 0)) = (undefined2)uRam0018af34;
  uVar5 = (undefined2)objStack_fc[1];
  objStack_fc[1] = uVar15;
  func_0014EB8C(iVar14,*puVar7,(undefined2 *)objStack_fc[3],&uStack_e4,
                *(undefined2 *)(iVar14 + -0x584),local_90,uVar5);
  *(undefined1 *)(iVar14 + 0x61) = 0;
  cVar2 = *(char *)(iVar14 + 0xdc);
  if (cVar2 != '\0') {
    *(short *)(iVar14 + 0x30) = *(short *)(iVar14 + 0x30) << 1;
  }
  iVar9 = (int)*(char *)(*piRam0018af38 + 0x18);
  if (iVar9 == 7 || iVar9 == 0x25) {
    if (*(int *)(iVar14 + 0x110) == 3) {
      *(undefined2 *)(iRam0018af50 + iVar22) = 8;
      *(undefined2 *)(iVar14 + 0x30) = 8;
    }
    else {
      *(undefined2 *)(iVar14 + -0x34) = 4;
      *(undefined2 *)(iVar14 + 0x30) = 4;
    }
  }
  else {
    if (cVar2 == '\0') {
      iVar9 = *(int *)(iVar14 + 0x110);
    }
    if (cVar2 == '\0' && iVar9 == 3) {
      *(undefined2 *)(iRam0018af50 + iVar22) = 0x18;
    }
  }
  uVar16 = puVar8[0x3a];
  uVar19 = puVar8[0x3b];
  *(int *)(local_9c + 4) = iVar22;
  *(undefined4 *)(local_9c + 8) = uVar16;
  *(undefined4 *)(local_9c + 0xc) = uVar19;
  puVar8 = (undefined4 *)func_0010BAB4(0x1c);
  uVar19 = uRam0018af58;
  uVar16 = uRam0018af54;
  if (puVar8 != (undefined4 *)0x0) {
    *puVar8 = uRam0018af58;
    puVar8[1] = uVar20;
    puVar8[2] = uVar16;
    puVar8[3] = uVar20;
    puVar8[4] = uVar19;
    puVar8[5] = 0;
    puVar8[6] = 0;
  }
  *(undefined4 **)(iVar14 + 0xd0) = puVar8;
  sVar3 = (short)param_2[10];
  if (sVar3 == 1) {
    *(uint *)(iVar14 + 0x100) = param_2[0x11];
    func_00659544((undefined4 *)objStack_fc[2],2);
  }
  else if ((sVar3 == 2) || (sVar3 != 3)) {
    func_00659544((undefined4 *)objStack_fc[2],0);
  }
  else {
    iVar9 = (int)*(short *)((int)param_2 + 0x2e);
    if (iVar9 < 1) {
      iVar9 = 1;
    }
    *(int *)(iVar14 + 0x114) = iVar9;
    func_00659544((undefined4 *)objStack_fc[2],9);
  }
  return iVar22;
}

