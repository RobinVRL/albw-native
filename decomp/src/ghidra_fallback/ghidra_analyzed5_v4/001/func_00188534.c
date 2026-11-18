#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_001881C0(int param_1,undefined4 param_2,uint param_3);
extern int func_004CF478(int param_1,int param_2);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004EB418(int param_1,int *param_2,int param_3);
extern int func_0052FBA0(int param_1,uint param_2);
extern float fRam001887bc;
extern float fRam001887c0;
extern float fRam001887c4;
extern float fRam001887dc;
extern float fRam001887e0;
extern float fRam001887e4;
extern float fRam001887e8;
extern float fRam001887ec;
extern float fRam001887f0;
extern float fRam001887f4;
extern int iRam001887f8;
extern undefined4 uRam001887b8;
extern int *piRam00188810;
extern int *DAT_001887c8;
extern uint *DAT_001887cc;
extern undefined4 *DAT_001887d0;
extern undefined4 DAT_001887d4;
extern undefined4 DAT_001887d8;
extern char s_SE_Bomb_EN_THROW_001887fc[];
extern char s_SE_OBJ_PL_THROW_00188814[];

// USA 00188534 <- EU 00188534 (Ghidra, non-matching)
// GLOBAL DAT_001887c8 int *
// GLOBAL DAT_001887cc uint *
// GLOBAL DAT_001887d0 undefined4 *
// GLOBAL DAT_001887d4 undefined4
// GLOBAL DAT_001887d8 undefined4
// GLOBAL UNK_001887b8 undefined4
// GLOBAL UNK_001887bc float
// GLOBAL UNK_001887c0 float
// GLOBAL UNK_001887c4 float
// GLOBAL UNK_001887dc float
// GLOBAL UNK_001887e0 float
// GLOBAL UNK_001887e4 float
// GLOBAL UNK_001887e8 float
// GLOBAL UNK_001887ec float
// GLOBAL UNK_001887f0 float
// GLOBAL UNK_001887f4 float
// GLOBAL UNK_001887f8 int
// GLOBAL UNK_00188810 int *
// GLOBAL s_SE_Bomb_EN_THROW_001887fc string
// GLOBAL s_SE_OBJ_PL_THROW_00188814 string

void func_00188534(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 extraout_r1;
  undefined4 uVar4;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar10;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define iStack_30 (*(int *)(albw_frame + 0x0))
  #define pcStack_2c (*(char * *)(albw_frame + 0x4))
  longlong lVar9;
  
  *(undefined1 *)(param_1 + 0x6b5) = *(undefined1 *)(param_1 + 0x6b4);
  if (*(char *)(param_1 + 0x501) == '\x01') {
    puVar2 = (undefined4 *)func_0052FBA0(*DAT_001887c8 + 0x3dbbc,*(uint *)(param_1 + 0x4dc));
    if (((*DAT_001887cc & 1) == 0) && (iVar3 = func_00100174((int *)DAT_001887cc), iVar3 != 0)) {
      *DAT_001887d0 = DAT_001887d4;
    }
    if ((puVar2 == (undefined4 *)0x0) ||
       (iVar3 = (**(code **)*puVar2)(puVar2,DAT_001887d0), iVar3 == 0)) {
      puVar2 = (undefined4 *)0x0;
    }
    *(undefined4 *)(param_1 + 0x6d8) = DAT_001887d8;
    if (puVar2 == (undefined4 *)0x0) {
      *(undefined1 *)(param_1 + 0x6b5) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x6b5) = 1;
    }
  }
  func_004CF478(*(int *)(param_1 + 0x4f4),1);
  func_00151148(*(int *)(param_1 + 0x52c),1);
  uVar4 = uRam001887b8;
  *(undefined4 *)(param_1 + 0x524) = 0xd;
  *(undefined4 *)(param_1 + 0x528) = uVar4;
  *(undefined4 *)(param_1 + 0x520) = 0;
  fVar10 = fRam001887c0;
  fVar7 = fRam001887bc;
  puVar2 = *(undefined4 **)(param_1 + 0x6a8);
  lVar9 = (ulonglong)(uint)ALBW_AS_U32(fRam001887bc) << 0x20;
  puVar2[4] = *puVar2;
  puVar2[3] = ALBW_AS_U32(fVar7);
  *(undefined4 *)(param_1 + 0x6ac) = *(undefined4 *)(param_1 + 0x3d4);
  if (fVar7 <= *(float *)(param_1 + 0x6d8)) {
    fVar8 = fRam001887e0 + *(float *)(param_1 + 0x6d8) * fRam001887dc;
    fVar6 = fVar8;
    if (fRam001887e4 > fVar8) {
      fVar6 = fRam001887e4;
    }
    lVar9 = CONCAT44(fVar7,fVar6);
    if ((fRam001887e4 <= fVar8) && (fRam001887e8 < fVar6)) {
      lVar9 = CONCAT44(fVar7,fRam001887e8);
    }
    func_004D80A4((float *)(param_1 + 0x3dc),*(uint *)(param_1 + 1000),ALBW_AS_F32(lVar9) * fRam001887ec);
    fVar7 = fRam001887f4;
    fVar6 = ALBW_AS_F32(lVar9) * fRam001887f0;
    *(float *)(param_1 + 0x3e0) = fVar6;
    if ((fVar7 <= fVar6) && (fVar7 = fVar6, fVar10 < fVar6)) {
      fVar7 = fVar10;
    }
    *(float *)(param_1 + 0x3e0) = fVar7;
  }
  else {
    func_004D80A4((float *)(param_1 + 0x3dc),*(uint *)(param_1 + 1000),fRam001887c4);
    *(float *)(param_1 + 0x3e0) = fVar10;
  }
  *(undefined4 *)(param_1 + 0x68c) = *(undefined4 *)(param_1 + 0x3dc);
  *(int *)(param_1 + 0x690) = (int)((ulonglong)lVar9 >> 0x20);
  *(undefined4 *)(param_1 + 0x694) = *(undefined4 *)(param_1 + 0x3e4);
  *(undefined1 *)(param_1 + 0x5d5) = 0;
  *(undefined1 *)(param_1 + 0x639) = 0;
  if (*(char *)(param_1 + 0x6b5) == '\0') {
    uVar5 = 1;
    func_004EB418(*piRam00188810,(int *)param_1,1);
    uVar4 = extraout_r1_00;
  }
  else {
    iStack_30 = iRam001887f8;
    if (*(char *)(param_1 + 0x6b5) == '\x01') {
      pcStack_2c = s_SE_OBJ_PL_THROW_00188814;
      uVar5 = 0;
      func_00150A84((int *)param_1,&iStack_30,0);
      uVar4 = extraout_r1_01;
    }
    else {
      pcStack_2c = s_SE_Bomb_EN_THROW_001887fc;
      uVar5 = 0;
      func_00150A84((int *)param_1,&iStack_30,0);
      uVar4 = extraout_r1;
    }
  }
  *(undefined1 *)(param_1 + 0x700) = 0;
  if ((*(char *)(param_1 + 0x6b5) == '\0') && (bVar1 = func_001881C0(param_1,uVar4,uVar5), bVar1)) {
    *(undefined1 *)(param_1 + 0x700) = 1;
  }
  return;
}

