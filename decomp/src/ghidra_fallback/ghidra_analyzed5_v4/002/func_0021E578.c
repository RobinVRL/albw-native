#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00111A64(uint *param_1);
extern float func_002760A4(int param_1,undefined4 *param_2);
extern int func_002AF5FC(int param_1,undefined2 param_2,int param_3);
extern int func_0032427C(int param_1,float fparam_0,float fparam_1);
extern int func_0036CF6C(undefined4 *param_1,int param_2);
extern float func_004F898C(void);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FACA4(int param_1,uint param_2,int *param_3);
extern int func_004FB148(int param_1,undefined1 param_2,undefined1 param_3);
extern int func_004FB344(int param_1,int param_2);
extern int func_004FB468(int param_1);
extern int func_004FB4E0(int param_1,float fparam_0);
extern int func_004FBA18(int param_1,undefined1 param_2,undefined1 param_3,int param_4,int param_5, undefined1 param_6,ushort param_7,float fparam_0,float fparam_1);
extern int func_004FC218(int param_1,char param_2,int param_3,ushort param_4);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern int func_00588BF0(int param_1,int param_2);
extern int func_0065E254(undefined4 *param_1,undefined1 param_2);
extern float fRam0021ed04;
extern float fRam0021ed08;
extern float fRam0021ed10;
extern int iRam0021e984;
extern int iRam0021e98c;
extern int iRam0021e99c;
extern int *piRam0021ed0c;
extern undefined4 *puRam0021e980;
extern undefined4 *puRam0021e988;
extern uint *DAT_0021e960;
extern int DAT_0021e964;
extern float DAT_0021e968;
extern undefined *DAT_0021e96c;
extern float DAT_0021e970;
extern undefined4 *DAT_0021e974;
extern float DAT_0021e978;
extern int DAT_0021e97c;
extern char s_cState_Die_0021ecf8[];
extern char s_cState_FallAnimWait_0021e9a0[];
extern char s_cState_Fall_0021e990[];
extern char s_cState_Reaction_0021ece8[];
extern char s_cState_RotateWait_0021ecd4[];
extern char s_cState_SwitchWait_0021ecc0[];
extern char s_cState_Wait_0021e9c0[];
extern char s_cState_Walk_0021e9b4[];

// USA 0021E578 <- EU 0021E578 (Ghidra, non-matching)
// GLOBAL DAT_0021e960 uint *
// GLOBAL DAT_0021e964 int
// GLOBAL DAT_0021e968 float
// GLOBAL DAT_0021e96c undefined *
// GLOBAL DAT_0021e970 float
// GLOBAL DAT_0021e974 undefined4 *
// GLOBAL DAT_0021e978 float
// GLOBAL DAT_0021e97c int
// GLOBAL UNK_0021e980 undefined4 *
// GLOBAL UNK_0021e984 int
// GLOBAL UNK_0021e988 undefined *
// GLOBAL UNK_0021e98c int
// GLOBAL UNK_0021e99c int
// GLOBAL UNK_0021ed04 float
// GLOBAL UNK_0021ed08 float
// GLOBAL UNK_0021ed0c int *
// GLOBAL UNK_0021ed10 float
// GLOBAL s_cState_Die_0021ecf8 string
// GLOBAL s_cState_FallAnimWait_0021e9a0 string
// GLOBAL s_cState_Fall_0021e990 string
// GLOBAL s_cState_Reaction_0021ece8 string
// GLOBAL s_cState_RotateWait_0021ecd4 string
// GLOBAL s_cState_SwitchWait_0021ecc0 string
// GLOBAL s_cState_Wait_0021e9c0 string
// GLOBAL s_cState_Walk_0021e9b4 string

int func_0021E578(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined *puVar2;
  bool bVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint in_fpscr;
  uint uVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fparam_1;
  undefined4 uVar21;
  undefined4 uVar22;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define iStack_48 (*(int *)(albw_frame + 0x8))
  #define pcStack_44 (*(char * *)(albw_frame + 0xc))
  #define puStack_2c (*(undefined4 * *)(albw_frame + 0x24))
  #define local_28 (*(uint * *)(albw_frame + 0x28))
  puStack_2c = param_1;
  local_28 = param_2;
  piVar4 = func_004FD464(param_1,param_2,DAT_0021e960);
  iVar6 = DAT_0021e964;
  *piVar4 = DAT_0021e964;
  piVar4[200] = iVar6 + 0x84;
  puVar5 = func_0010A794(piVar4 + 0x22f);
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  *(undefined1 *)(puVar5 + 9) = 0;
  puVar5[10] = 0;
  fVar18 = DAT_0021e968;
  puVar5[0xb] = 0;
  puVar5[0xc] = ALBW_AS_U32(fVar18);
  iVar6 = func_00100118((int)(puVar5 + 0xd),DAT_0021e96c,0x10,8);
  *(undefined4 *)(iVar6 + 0x80) = 0;
  *(undefined4 *)(iVar6 + 0x84) = 0;
  *(undefined4 *)(iVar6 + 0x88) = 0;
  *(undefined4 *)(iVar6 + 0x8c) = 0;
  if (iVar6 + 0x90 != 0) {
    *(int *)(iVar6 + 0x80) = iVar6 + 0x90;
    *(undefined4 *)(iVar6 + 0x84) = 10;
  }
  puVar5 = DAT_0021e974;
  fparam_1 = DAT_0021e970;
  *(float *)(iVar6 + 0x108) = DAT_0021e970;
  *(float *)(iVar6 + 0x10c) = fparam_1;
  *(undefined1 *)(iVar6 + 0x110) = 0;
  *(undefined4 *)(iVar6 + 0x114) = 0;
  *(undefined4 *)(iVar6 + 0x118) = 0;
  *(undefined4 *)(iVar6 + 0x11c) = 0;
  *(undefined4 *)(iVar6 + 0x120) = 0;
  iVar14 = iVar6 + -0x8f0;
  *(undefined4 *)(iVar6 + 0x124) = 0;
  uVar13 = puVar5[1];
  uVar12 = puVar5[2];
  *(undefined4 *)(iVar6 + 0x128) = *puVar5;
  *(undefined4 *)(iVar6 + 300) = uVar13;
  *(undefined4 *)(iVar6 + 0x130) = uVar12;
  *(undefined4 *)(iVar6 + 0x134) = 0;
  *(float *)(iVar6 + 0x138) = fparam_1;
  *(undefined1 *)(iVar6 + 0x13c) = 0;
  *(float *)(iVar6 + -0x514) = fparam_1;
  *(float *)(iVar6 + -0x510) = fparam_1;
  *(float *)(iVar6 + -0x50c) = fparam_1;
  pfVar7 = (float *)func_0010BAB4(0x1c);
  if (pfVar7 != (float *)0x0) {
    pfVar7[2] = DAT_0021e978;
    *pfVar7 = fparam_1;
    pfVar7[1] = fVar18;
    pfVar7[3] = fparam_1;
    pfVar7[4] = fparam_1;
    pfVar7[5] = 0.0;
    pfVar7[6] = 0.0;
  }
  *(float **)(iVar6 + 0x124) = pfVar7;
  func_004FB344(iVar14,8);
  iVar16 = DAT_0021e97c;
  uVar15 = 0;
  do {
    func_004FACA4(iVar14,uVar15,(int *)(iVar16 + uVar15 * 8));
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 8);
  func_004FB468(iVar14);
  func_004FABDC(iVar14,3,0xffffffff,0);
  func_004FB4E0(iVar14,fVar18);
  iVar16 = *(int *)(iVar6 + -0x4e0);
  uVar17 = VectorFloatToUnsigned(ALBW_AS_F32(*(undefined4 *)(*(int *)(iVar16 + 0x14) + 0x14)),3);
  uVar15 = func_00111A64((uint *)*puRam0021e980);
  iVar16 = *(int *)(iVar16 + 0x14);
  puVar5 = (undefined4 *)(iVar6 + -0x34);
  fVar18 = (float)VectorUnsignedToFloat
                            ((int)((ulonglong)uVar17 * (ulonglong)uVar15 >> 0x20),
                             (byte)(in_fpscr >> 0x15) & 3);
  if (*(float *)(iVar16 + 8) != fVar18) {
    *(float *)(iVar16 + 8) = fVar18;
    *(undefined1 *)(iVar16 + 0x26) = 1;
  }
  *(int *)(iVar6 + -0x20) = iVar14;
  *(undefined1 *)(iVar6 + -0x2e) = 8;
  iVar8 = func_0010BA78(0x80);
  iVar16 = iRam0021e984;
  *(int *)(iVar6 + -0x1c) = iVar8;
  *(uint *)(iVar6 + -0x18) = iVar8 + (uint)*(byte *)(iVar6 + -0x2e) * 8;
  iVar11 = 8;
  puVar9 = (undefined4 *)(iVar8 + -8);
  do {
    uVar12 = *(undefined4 *)(iVar16 + 0x94);
    iVar11 = iVar11 + -1;
    puVar9[2] = *(undefined4 *)(iVar16 + 0x90);
    puVar9[3] = uVar12;
    uVar12 = *(undefined4 *)(iVar16 + 0x94);
    puVar9[4] = *(undefined4 *)(iVar16 + 0x90);
    puVar9[5] = uVar12;
    puVar9 = puVar9 + 4;
  } while (iVar11 != 0);
  bVar1 = *(byte *)(iVar6 + -0x2e);
  uVar15 = (uint)bVar1;
  puVar9 = (undefined4 *)func_0010BA78(uVar15 << 3);
  *(undefined4 **)(iVar6 + -0x14) = puVar9;
  if (uVar15 != 0) {
    puVar10 = puVar9 + -2;
    if ((bVar1 & 1) != 0) {
      uVar12 = *(undefined4 *)(iVar16 + 0x1c);
      *puVar9 = *(undefined4 *)(iVar16 + 0x18);
      puVar9[1] = uVar12;
      puVar10 = puVar9;
    }
    for (iVar8 = (int)uVar15 >> 1; iVar8 != 0; iVar8 = iVar8 + -1) {
      uVar12 = *(undefined4 *)(iVar16 + 0x1c);
      puVar10[2] = *(undefined4 *)(iVar16 + 0x18);
      puVar10[3] = uVar12;
      uVar12 = *(undefined4 *)(iVar16 + 0x1c);
      puVar10[4] = *(undefined4 *)(iVar16 + 0x18);
      puVar10[5] = uVar12;
      puVar10 = puVar10 + 4;
    }
  }
  puVar9 = (undefined4 *)func_0010CEE0(0x128,(int *)0x0,4);
  puVar2 = puRam0021e988;
  iVar8 = 0;
  if (puVar9 != (undefined4 *)0x0) {
    puVar9[1] = 8;
    *puVar9 = 0x24;
    iVar8 = func_00100118((int)(puVar9 + 2),puVar2,0x24,8);
  }
  if (iVar8 != 0) {
    *(int *)(iVar6 + -0x28) = iVar8;
    *(undefined4 *)(iVar6 + -0x2c) = 8;
  }
  iVar8 = iRam0021e98c;
  *(undefined4 **)(iVar6 + -0x59c) = puVar5;
  iVar11 = iRam0021e99c;
  *(undefined2 *)(iVar8 + iVar14) = 8;
  pcStack_44 = s_cState_Fall_0021e990;
  iStack_48 = iVar11;
  func_0010BEC4((int)puVar5,0,&iStack_48);
  puVar9 = *(undefined4 **)(iVar6 + -0x1c);
  uVar12 = *(undefined4 *)(iVar16 + 0x10);
  uVar13 = *(undefined4 *)(iVar16 + 0xc);
  uVar22 = *(undefined4 *)(iVar16 + 0x18);
  uVar20 = *(undefined4 *)(iVar16 + 0x14);
  uVar21 = *(undefined4 *)(iVar16 + 0x1c);
  *puVar9 = *(undefined4 *)(iVar16 + 8);
  puVar9[1] = uVar13;
  puVar9 = *(undefined4 **)(iVar6 + -0x18);
  *puVar9 = uVar12;
  puVar9[1] = uVar20;
  puVar9 = *(undefined4 **)(iVar6 + -0x14);
  *puVar9 = uVar22;
  puVar9[1] = uVar21;
  pcStack_44 = s_cState_FallAnimWait_0021e9a0;
  iStack_48 = iVar11;
  func_0010BEC4((int)puVar5,1,&iStack_48);
  iVar8 = *(int *)(iVar6 + -0x1c);
  uVar12 = *(undefined4 *)(iVar16 + 0x24);
  uVar13 = *(undefined4 *)(iVar16 + 0x28);
  uVar20 = *(undefined4 *)(iVar16 + 0x2c);
  *(undefined4 *)(iVar8 + 8) = *(undefined4 *)(iVar16 + 0x20);
  *(undefined4 *)(iVar8 + 0xc) = uVar12;
  iVar8 = *(int *)(iVar6 + -0x18);
  *(undefined4 *)(iVar8 + 8) = uVar13;
  *(undefined4 *)(iVar8 + 0xc) = uVar20;
  iVar8 = *(int *)(iVar6 + -0x14);
  *(undefined4 *)(iVar8 + 8) = uVar22;
  *(undefined4 *)(iVar8 + 0xc) = uVar21;
  pcStack_44 = s_cState_Walk_0021e9b4;
  iStack_48 = iVar11;
  func_0010BEC4((int)puVar5,2,&iStack_48);
  iVar8 = *(int *)(iVar6 + -0x1c);
  uVar20 = *(undefined4 *)(iVar16 + 0x3c);
  uVar13 = *(undefined4 *)(iVar16 + 0x34);
  uVar12 = *(undefined4 *)(iVar16 + 0x38);
  *(undefined4 *)(iVar8 + 0x10) = *(undefined4 *)(iVar16 + 0x30);
  *(undefined4 *)(iVar8 + 0x14) = uVar13;
  iVar8 = *(int *)(iVar6 + -0x18);
  *(undefined4 *)(iVar8 + 0x10) = uVar12;
  *(undefined4 *)(iVar8 + 0x14) = uVar20;
  iVar8 = *(int *)(iVar6 + -0x14);
  *(undefined4 *)(iVar8 + 0x10) = uVar22;
  *(undefined4 *)(iVar8 + 0x14) = uVar21;
  pcStack_44 = s_cState_Wait_0021e9c0;
  iStack_48 = iVar11;
  func_0010BEC4((int)puVar5,3,&iStack_48);
  iVar8 = *(int *)(iVar6 + -0x1c);
  uVar12 = *(undefined4 *)(iVar16 + 0x44);
  uVar13 = *(undefined4 *)(iVar16 + 0x48);
  uVar20 = *(undefined4 *)(iVar16 + 0x4c);
  *(undefined4 *)(iVar8 + 0x18) = *(undefined4 *)(iVar16 + 0x40);
  *(undefined4 *)(iVar8 + 0x1c) = uVar12;
  iVar8 = *(int *)(iVar6 + -0x18);
  *(undefined4 *)(iVar8 + 0x18) = uVar13;
  *(undefined4 *)(iVar8 + 0x1c) = uVar20;
  iVar8 = *(int *)(iVar6 + -0x14);
  *(undefined4 *)(iVar8 + 0x18) = uVar22;
  *(undefined4 *)(iVar8 + 0x1c) = uVar21;
  pcStack_44 = s_cState_SwitchWait_0021ecc0;
  iStack_48 = iVar11;
  func_0010BEC4((int)puVar5,4,&iStack_48);
  iVar8 = *(int *)(iVar6 + -0x1c);
  uVar12 = *(undefined4 *)(iVar16 + 0x54);
  uVar13 = *(undefined4 *)(iVar16 + 0x58);
  uVar20 = *(undefined4 *)(iVar16 + 0x5c);
  *(undefined4 *)(iVar8 + 0x20) = *(undefined4 *)(iVar16 + 0x50);
  *(undefined4 *)(iVar8 + 0x24) = uVar12;
  iVar8 = *(int *)(iVar6 + -0x18);
  *(undefined4 *)(iVar8 + 0x20) = uVar13;
  *(undefined4 *)(iVar8 + 0x24) = uVar20;
  iVar8 = *(int *)(iVar6 + -0x14);
  *(undefined4 *)(iVar8 + 0x20) = uVar22;
  *(undefined4 *)(iVar8 + 0x24) = uVar21;
  pcStack_44 = s_cState_RotateWait_0021ecd4;
  iStack_48 = iVar11;
  func_0010BEC4((int)puVar5,5,&iStack_48);
  iVar8 = *(int *)(iVar6 + -0x1c);
  uVar12 = *(undefined4 *)(iVar16 + 100);
  uVar13 = *(undefined4 *)(iVar16 + 0x68);
  uVar20 = *(undefined4 *)(iVar16 + 0x6c);
  *(undefined4 *)(iVar8 + 0x28) = *(undefined4 *)(iVar16 + 0x60);
  *(undefined4 *)(iVar8 + 0x2c) = uVar12;
  iVar8 = *(int *)(iVar6 + -0x18);
  *(undefined4 *)(iVar8 + 0x28) = uVar13;
  *(undefined4 *)(iVar8 + 0x2c) = uVar20;
  iVar8 = *(int *)(iVar6 + -0x14);
  *(undefined4 *)(iVar8 + 0x28) = uVar22;
  *(undefined4 *)(iVar8 + 0x2c) = uVar21;
  pcStack_44 = s_cState_Reaction_0021ece8;
  iStack_48 = iVar11;
  func_0010BEC4((int)puVar5,6,&iStack_48);
  iVar8 = *(int *)(iVar6 + -0x1c);
  uVar12 = *(undefined4 *)(iVar16 + 0x74);
  uVar13 = *(undefined4 *)(iVar16 + 0x78);
  uVar20 = *(undefined4 *)(iVar16 + 0x7c);
  *(undefined4 *)(iVar8 + 0x30) = *(undefined4 *)(iVar16 + 0x70);
  *(undefined4 *)(iVar8 + 0x34) = uVar12;
  iVar8 = *(int *)(iVar6 + -0x18);
  *(undefined4 *)(iVar8 + 0x30) = uVar13;
  *(undefined4 *)(iVar8 + 0x34) = uVar20;
  iVar8 = *(int *)(iVar6 + -0x14);
  *(undefined4 *)(iVar8 + 0x30) = uVar22;
  *(undefined4 *)(iVar8 + 0x34) = uVar21;
  pcStack_44 = s_cState_Die_0021ecf8;
  iStack_48 = iVar11;
  func_0010BEC4((int)puVar5,7,&iStack_48);
  iVar8 = *(int *)(iVar6 + -0x1c);
  uVar20 = *(undefined4 *)(iVar16 + 0x84);
  uVar12 = *(undefined4 *)(iVar16 + 0x88);
  uVar13 = *(undefined4 *)(iVar16 + 0x8c);
  *(undefined4 *)(iVar8 + 0x38) = *(undefined4 *)(iVar16 + 0x80);
  *(undefined4 *)(iVar8 + 0x3c) = uVar20;
  fVar19 = fRam0021ed08;
  fVar18 = fRam0021ed04;
  iVar16 = *(int *)(iVar6 + -0x18);
  *(undefined4 *)(iVar16 + 0x38) = uVar12;
  *(undefined4 *)(iVar16 + 0x3c) = uVar13;
  iVar16 = *(int *)(iVar6 + -0x14);
  *(undefined4 *)(iVar16 + 0x38) = uVar22;
  *(undefined4 *)(iVar16 + 0x3c) = uVar21;
  func_0032427C(iVar6,fVar19,fVar18);
  puVar10 = (undefined4 *)func_0010BAB4(0x18);
  puVar9 = (undefined4 *)0x0;
  if (puVar10 != (undefined4 *)0x0) {
    puVar9 = func_0036CF6C(puVar10,4);
  }
  *(undefined4 **)(iVar6 + 0x114) = puVar9;
  piVar4 = piRam0021ed0c;
  if (*(short *)((int)local_28 + 0x32) == 0) {
    fVar18 = func_002760A4(*piRam0021ed0c,(undefined4 *)(iVar6 + -0x520));
    fVar19 = func_004F898C();
    if (fVar19 <= *(float *)(iVar6 + -0x51c) - fVar18) {
LAB_0021ec20:
      func_0065E254(puVar5,0);
      goto LAB_0021ec2c;
    }
  }
  else {
    bVar3 = func_00588BF0(iVar14,0);
    if (!bVar3) {
      func_0065E254(puVar5,4);
      goto LAB_0021ec2c;
    }
    fVar18 = func_002760A4(*piVar4,(undefined4 *)(iVar6 + -0x520));
    fVar19 = func_004F898C();
    if (fVar19 <= *(float *)(iVar6 + -0x51c) - fVar18) goto LAB_0021ec20;
  }
  func_0065E254(puVar5,3);
LAB_0021ec2c:
  func_002AF5FC(iVar14,6,-1);
  *(undefined1 *)(iVar6 + -0x173) = 5;
  *(undefined1 *)(iVar6 + -0x172) = 0xff;
  *(undefined1 *)(iVar6 + -0x171) = 0;
  func_004FC218(iVar14,'\x04',-1,0x7fff);
  func_004FBA18(iVar14,7,0xff,-1,0xc,0,0x7fff,fRam0021ed10,fparam_1);
  func_004FB148(iVar14,6,6);
  *(uint *)(iVar6 + -0x354) = *(uint *)(iVar6 + -0x354) | 0x8000;
  return iVar14;
}

