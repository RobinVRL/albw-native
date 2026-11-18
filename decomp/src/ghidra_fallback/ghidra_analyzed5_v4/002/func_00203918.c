#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00111A64(uint *param_1);
extern int func_002AF5FC(int param_1,undefined2 param_2,int param_3);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F87F8(int param_1,int param_2);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FACA4(int param_1,uint param_2,int *param_3);
extern int func_004FB344(int param_1,int param_2);
extern int func_004FB468(int param_1);
extern int func_004FC218(int param_1,char param_2,int param_3,ushort param_4);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern undefined8 func_0058A474(undefined4 param_1,uint param_2);
extern int func_0058A7D4(void);
extern int func_0065D264(undefined4 *param_1,undefined1 param_2);
extern float fRam00203f08;
extern float fRam00203f0c;
extern float fRam00203f10;
extern float fRam00203f14;
extern undefined4 uRam00203f18;
extern undefined4 *puRam00203f04;
extern uint *DAT_00203d1c;
extern int DAT_00203d20;
extern int DAT_00203d24;
extern undefined4 DAT_00203d28;
extern undefined4 DAT_00203d2c;
extern undefined4 DAT_00203d30;
extern int DAT_00203d34;
extern undefined *DAT_00203d38;
extern int DAT_00203d3c;
extern int DAT_00203d4c;
extern char s_cState_Die_00203d80[];
extern char s_cState_Move_00203d50[];
extern char s_cState_Reaction_00203d70[];
extern char s_cState_SearchMove_00203d5c[];
extern char s_cState_Wait_00203d40[];

// USA 00203918 <- EU 00203918 (Ghidra, non-matching)
// GLOBAL DAT_00203d1c uint *
// GLOBAL DAT_00203d20 int
// GLOBAL DAT_00203d24 int
// GLOBAL DAT_00203d28 undefined4
// GLOBAL DAT_00203d2c undefined4
// GLOBAL DAT_00203d30 undefined4
// GLOBAL DAT_00203d34 int
// GLOBAL DAT_00203d38 undefined *
// GLOBAL DAT_00203d3c int
// GLOBAL DAT_00203d4c int
// GLOBAL UNK_00203f04 undefined4 *
// GLOBAL UNK_00203f08 float
// GLOBAL UNK_00203f0c float
// GLOBAL UNK_00203f10 float
// GLOBAL UNK_00203f14 float
// GLOBAL UNK_00203f18 undefined4
// GLOBAL s_cState_Die_00203d80 string
// GLOBAL s_cState_Move_00203d50 string
// GLOBAL s_cState_Reaction_00203d70 string
// GLOBAL s_cState_SearchMove_00203d5c string
// GLOBAL s_cState_Wait_00203d40 string

undefined4 * func_00203918(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  undefined4 uVar10;
  float *in_r3;
  undefined4 *puVar11;
  uint uVar12;
  undefined4 uVar13;
  uint in_fpscr;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined8 uVar22;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(int *)(albw_frame + 0x0))
  #define local_3c (*(char * *)(albw_frame + 0x4))
  piVar2 = func_004FD464(param_1,param_2,DAT_00203d1c);
  iVar7 = DAT_00203d20;
  *piVar2 = DAT_00203d20;
  piVar2[200] = iVar7 + 0x84;
  puVar3 = func_0010A794(piVar2 + 0x22f);
  iVar7 = DAT_00203d24;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  uVar10 = *(undefined4 *)(iVar7 + 4);
  puVar3[0xc] = *(undefined4 *)(iVar7 + 8);
  uVar18 = DAT_00203d30;
  uVar13 = DAT_00203d2c;
  uVar22 = CONCAT44(DAT_00203d30,DAT_00203d2c);
  puVar3[9] = DAT_00203d28;
  puVar3[10] = puVar3 + -0x22f;
  puVar3[0xb] = uVar10;
  puVar11 = puVar3 + -0x22f;
  puVar3[0xd] = uVar13;
  puVar3[0xe] = uVar13;
  puVar3[0xf] = uVar13;
  puVar3[0x11] = 0;
  puVar3[0x12] = 0;
  puVar3[0x13] = 0;
  puVar3[0x14] = 0;
  puVar3[0x15] = 0;
  puVar3[0x16] = uVar18;
  puVar3[0x17] = 0;
  puVar3[0x18] = 0;
  puVar3[0x19] = uVar18;
  *(undefined1 *)(puVar3 + 0x1a) = 0;
  *(undefined1 *)((int)puVar3 + 0x69) = 0;
  func_004FB344((int)puVar11,4);
  iVar4 = DAT_00203d34;
  uVar12 = 0;
  do {
    func_004FACA4((int)puVar11,uVar12,(int *)(iVar4 + uVar12 * 8));
    uVar12 = uVar12 + 1;
  } while ((int)uVar12 < 4);
  func_004FB468((int)puVar11);
  func_004F5BD8((int)puVar11,(uint *)0x0,(int **)0x0,in_r3);
  puVar3[-0x134] = puVar3 + 9;
  *(undefined1 *)((int)puVar3 + 6) = 5;
  puVar3[5] = puVar11;
  iVar4 = func_0010BA78(0x50);
  puVar3[6] = iVar4;
  puVar3[7] = iVar4 + (uint)*(byte *)((int)puVar3 + 6) * 8;
  iVar9 = 5;
  puVar5 = (undefined4 *)(iVar4 + -8);
  do {
    uVar13 = *(undefined4 *)(iVar7 + 0x68);
    iVar9 = iVar9 + -1;
    puVar5[2] = *(undefined4 *)(iVar7 + 100);
    puVar5[3] = uVar13;
    uVar13 = *(undefined4 *)(iVar7 + 0x68);
    puVar5[4] = *(undefined4 *)(iVar7 + 100);
    puVar5[5] = uVar13;
    puVar5 = puVar5 + 4;
  } while (iVar9 != 0);
  bVar1 = *(byte *)((int)puVar3 + 6);
  uVar12 = (uint)bVar1;
  puVar5 = (undefined4 *)func_0010BA78(uVar12 << 3);
  puVar3[8] = puVar5;
  if (uVar12 != 0) {
    puVar6 = puVar5 + -2;
    if ((bVar1 & 1) != 0) {
      uVar13 = *(undefined4 *)(iVar7 + 0x20);
      *puVar5 = *(undefined4 *)(iVar7 + 0x1c);
      puVar5[1] = uVar13;
      puVar6 = puVar5;
    }
    for (iVar4 = (int)uVar12 >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
      uVar13 = *(undefined4 *)(iVar7 + 0x20);
      puVar6[2] = *(undefined4 *)(iVar7 + 0x1c);
      puVar6[3] = uVar13;
      uVar13 = *(undefined4 *)(iVar7 + 0x20);
      puVar6[4] = *(undefined4 *)(iVar7 + 0x1c);
      puVar6[5] = uVar13;
      puVar6 = puVar6 + 4;
    }
  }
  puVar5 = (undefined4 *)func_0010CEE0(0xbc,(int *)0x0,4);
  iVar4 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0x24;
    puVar5[1] = 5;
    iVar4 = func_00100118((int)(puVar5 + 2),DAT_00203d38,0x24,5);
  }
  if (iVar4 != 0) {
    puVar3[3] = iVar4;
    puVar3[2] = 5;
  }
  iVar4 = DAT_00203d3c;
  puVar3[-0x15a] = puVar3;
  iVar9 = DAT_00203d4c;
  *(undefined2 *)(iVar4 + (int)puVar11) = 5;
  local_3c = s_cState_Wait_00203d40;
  local_40 = iVar9;
  func_0010BEC4((int)puVar3,0,&local_40);
  puVar5 = (undefined4 *)puVar3[6];
  uVar13 = *(undefined4 *)(iVar7 + 0x14);
  uVar18 = *(undefined4 *)(iVar7 + 0x10);
  uVar21 = *(undefined4 *)(iVar7 + 0x1c);
  uVar10 = *(undefined4 *)(iVar7 + 0x18);
  uVar20 = *(undefined4 *)(iVar7 + 0x20);
  *puVar5 = *(undefined4 *)(iVar7 + 0xc);
  puVar5[1] = uVar18;
  puVar5 = (undefined4 *)puVar3[7];
  *puVar5 = uVar13;
  puVar5[1] = uVar10;
  puVar5 = (undefined4 *)puVar3[8];
  *puVar5 = uVar21;
  puVar5[1] = uVar20;
  local_3c = s_cState_Move_00203d50;
  local_40 = iVar9;
  func_0010BEC4((int)puVar3,1,&local_40);
  iVar4 = puVar3[6];
  uVar13 = *(undefined4 *)(iVar7 + 0x28);
  uVar18 = *(undefined4 *)(iVar7 + 0x2c);
  uVar10 = *(undefined4 *)(iVar7 + 0x30);
  *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(iVar7 + 0x24);
  *(undefined4 *)(iVar4 + 0xc) = uVar13;
  iVar4 = puVar3[7];
  *(undefined4 *)(iVar4 + 8) = uVar18;
  *(undefined4 *)(iVar4 + 0xc) = uVar10;
  iVar4 = puVar3[8];
  *(undefined4 *)(iVar4 + 8) = uVar21;
  *(undefined4 *)(iVar4 + 0xc) = uVar20;
  local_3c = s_cState_SearchMove_00203d5c;
  local_40 = iVar9;
  func_0010BEC4((int)puVar3,2,&local_40);
  iVar4 = puVar3[6];
  uVar10 = *(undefined4 *)(iVar7 + 0x38);
  uVar13 = *(undefined4 *)(iVar7 + 0x3c);
  uVar18 = *(undefined4 *)(iVar7 + 0x40);
  *(undefined4 *)(iVar4 + 0x10) = *(undefined4 *)(iVar7 + 0x34);
  *(undefined4 *)(iVar4 + 0x14) = uVar10;
  iVar4 = puVar3[7];
  *(undefined4 *)(iVar4 + 0x10) = uVar13;
  *(undefined4 *)(iVar4 + 0x14) = uVar18;
  iVar4 = puVar3[8];
  *(undefined4 *)(iVar4 + 0x10) = uVar21;
  *(undefined4 *)(iVar4 + 0x14) = uVar20;
  local_3c = s_cState_Reaction_00203d70;
  local_40 = iVar9;
  func_0010BEC4((int)puVar3,3,&local_40);
  iVar4 = puVar3[6];
  uVar13 = *(undefined4 *)(iVar7 + 0x48);
  uVar18 = *(undefined4 *)(iVar7 + 0x4c);
  uVar10 = *(undefined4 *)(iVar7 + 0x50);
  *(undefined4 *)(iVar4 + 0x18) = *(undefined4 *)(iVar7 + 0x44);
  *(undefined4 *)(iVar4 + 0x1c) = uVar13;
  iVar4 = puVar3[7];
  *(undefined4 *)(iVar4 + 0x18) = uVar18;
  *(undefined4 *)(iVar4 + 0x1c) = uVar10;
  iVar4 = puVar3[8];
  *(undefined4 *)(iVar4 + 0x18) = uVar21;
  *(undefined4 *)(iVar4 + 0x1c) = uVar20;
  local_3c = s_cState_Die_00203d80;
  local_40 = iVar9;
  func_0010BEC4((int)puVar3,4,&local_40);
  iVar4 = puVar3[6];
  uVar13 = *(undefined4 *)(iVar7 + 0x58);
  uVar18 = *(undefined4 *)(iVar7 + 0x5c);
  uVar10 = *(undefined4 *)(iVar7 + 0x60);
  *(undefined4 *)(iVar4 + 0x20) = *(undefined4 *)(iVar7 + 0x54);
  *(undefined4 *)(iVar4 + 0x24) = uVar13;
  iVar7 = puVar3[7];
  *(undefined4 *)(iVar7 + 0x20) = uVar18;
  *(undefined4 *)(iVar7 + 0x24) = uVar10;
  iVar7 = puVar3[8];
  *(undefined4 *)(iVar7 + 0x20) = uVar21;
  *(undefined4 *)(iVar7 + 0x24) = uVar20;
  func_004FABDC((int)puVar11,0,0xffffffff,0);
  puVar8 = (uint *)func_0058A7D4();
  uVar12 = func_00111A64(puVar8);
  iVar7 = (int)((ulonglong)uVar12 * 4 >> 0x20) * 0x40000000;
  puVar3[0x11] = iVar7;
  puVar3[0x13] = iVar7;
  fVar15 = (float)VectorSignedToFloat((int)*(short *)((int)param_2 + 0x2a),
                                      (byte)(in_fpscr >> 0x15) & 3);
  fVar17 = ALBW_AS_F32(uVar22);
  uVar12 = in_fpscr & 0xfffffff | (uint)(fVar17 <= fVar15) << 0x1d;
  fVar19 = ALBW_AS_F32(((ulonglong)uVar22 >> 0x20));
  fVar16 = fVar17;
  if ((SUB41(uVar12 >> 0x1d,0)) &&
     (uVar12 = in_fpscr & 0xfffffff | (uint)(fVar15 < fVar19) << 0x1f |
               (uint)(fVar15 == fVar19) << 0x1e, bVar1 = (byte)(uVar12 >> 0x18), fVar16 = fVar15,
     !(bool)(bVar1 >> 6 & 1) && (bool)(bVar1 >> 7) == (NAN(fVar15) || NAN(fVar19)))) {
    fVar16 = fVar19;
  }
  *(short *)(puVar3 + 0x10) = (short)(int)fVar16;
  fVar16 = (float)VectorSignedToFloat((int)(short)param_2[0xb],(byte)(uVar12 >> 0x15) & 3);
  uVar14 = uVar12 & 0xfffffff | (uint)(fVar17 <= fVar16) << 0x1d;
  if ((SUB41(uVar14 >> 0x1d,0)) &&
     (uVar12 = uVar12 & 0xfffffff | (uint)(fVar16 < fVar19) << 0x1f |
               (uint)(fVar16 == fVar19) << 0x1e,
     uVar14 = uVar12 | (uint)(NAN(fVar16) || NAN(fVar19)) << 0x1c, bVar1 = (byte)(uVar12 >> 0x18),
     fVar17 = fVar16, !(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(uVar14 >> 0x1c) & 1))) {
    fVar17 = fVar19;
  }
  *(short *)((int)puVar3 + 0x42) = (short)(int)fVar17;
  func_004F87F8((int)puVar11,1);
  uVar22 = func_0058A474(puVar11,0x32);
  if ((int)uVar22 == 0) {
    if (*(short *)((int)puVar3 + 0x42) == 0) {
      func_0065D264(puVar3,1);
    }
    else {
      func_0065D264(puVar3,2);
    }
  }
  else {
    func_0065D264(puVar3,0);
  }
  fVar17 = fRam00203f08;
  uVar12 = func_00111A64((uint *)*puRam00203f04);
  uVar13 = uRam00203f18;
  fVar16 = (float)VectorUnsignedToFloat(uVar12,(byte)(uVar14 >> 0x15) & 3);
  puVar3[0x12] = (int)((fVar16 * fRam00203f0c * fVar17 + fRam00203f10) * fRam00203f14);
  func_004FC218((int)puVar11,'\x01',0,(ushort)uVar13);
  *(undefined1 *)((int)puVar3 + -0x13f) = 1;
  *(undefined1 *)((int)puVar3 + -0x13e) = 0xff;
  *(undefined1 *)((int)puVar3 + -0x13d) = 0;
  puVar3[-200] = puVar3[-200] & 0xffff7fff;
  func_002AF5FC((int)puVar11,2,-1);
  puVar3[-0x135] = 0;
  return puVar11;
}

