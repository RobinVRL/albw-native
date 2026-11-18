#include "ghidra_types.h"

extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern int func_002084C4(int param_1);
extern int func_0020BC84(int param_1);
extern int func_002AFEC4(int param_1,int param_2,int param_3);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004D838C(float *param_1,float *param_2,float fparam_0,float fparam_1,float fparam_2);
extern void func_004F48F0(int param_1);
extern void func_004F5588(int param_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F70A8(int *param_1);
extern int func_004F8864(int param_1,undefined4 *param_2,uint param_3,float fparam_0);
extern int func_004F8998(int *param_1,int param_2,char *param_3);
extern void func_004FAB0C(int param_1,float fparam_0);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0065D630(undefined4 *param_1,undefined1 param_2);
extern int DAT_0020e794;
extern int DAT_0020e798;
extern int DAT_0020e79c;
extern float DAT_0020e7a0;
extern float DAT_0020e7a4;
extern float DAT_0020e7a8;
extern float DAT_0020e7ac;
extern float DAT_0020e7b0;
extern float DAT_0020e7b4;
extern int DAT_0020e7b8;
extern float DAT_0020e7bc;
extern float DAT_0020e7c0;
extern int DAT_0020e7c4;
extern float DAT_0020e7c8;
extern float DAT_0020e7cc;

// USA 0020E3E8 <- EU 0020E3E8 (Ghidra, non-matching)
// GLOBAL DAT_0020e794 int
// GLOBAL DAT_0020e798 int
// GLOBAL DAT_0020e79c int
// GLOBAL DAT_0020e7a0 float
// GLOBAL DAT_0020e7a4 float
// GLOBAL DAT_0020e7a8 float
// GLOBAL DAT_0020e7ac float
// GLOBAL DAT_0020e7b0 float
// GLOBAL DAT_0020e7b4 float
// GLOBAL DAT_0020e7b8 int
// GLOBAL DAT_0020e7bc float
// GLOBAL DAT_0020e7c0 float
// GLOBAL DAT_0020e7c4 int
// GLOBAL DAT_0020e7c8 float
// GLOBAL DAT_0020e7cc float

void func_0020E3E8(int *param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  float *pfVar5;
  undefined1 uVar6;
  uint uVar7;
  int *piVar8;
  float *pfVar9;
  int *piVar10;
  bool bVar11;
  uint in_fpscr;
  float fVar12;
  float fVar13;
  float fVar14;
  int iVar15;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define auStack_88 ((undefined4 *)(albw_frame + 0x8))
  #define local_7c (*(float *)(albw_frame + 0x14))
  #define local_78 (*(int *)(albw_frame + 0x18))
  #define local_5c (*(int *)(albw_frame + 0x34))
  #define auStack_58 ((undefined4 *)(albw_frame + 0x38))
  #define local_4c (*(int *)(albw_frame + 0x44))
  #define local_3c (*(float *)(albw_frame + 0x54))
  #define local_2c (*(int *)(albw_frame + 0x64))
  if ((uint)param_1[0x29c] < (uint)param_1[0x29d]) {
    param_1[0x29c] = param_1[0x29c] + 1;
  }
  if ((uint)param_1[0x2ec] < (uint)param_1[0x2ed]) {
    param_1[0x2ec] = param_1[0x2ec] + 1;
  }
  if ((char)param_1[0x2e9] != '\0') {
    *(undefined1 *)((int)param_1 + 0x895) = 4;
    func_002AFEC4((int)param_1,-1,-1);
    sVar1 = (short)param_1[0x142];
    if (sVar1 < 0x21) {
      uVar6 = 2;
      if (sVar1 < 1) {
        uVar6 = 0;
      }
      *(undefined1 *)((int)param_1 + 0x859) = uVar6;
    }
    else if (sVar1 < 0x41) {
      *(undefined1 *)((int)param_1 + 0x859) = 1;
    }
  }
  param_1[0x15a] = DAT_0020e794;
  iVar3 = func_004F70A8(param_1);
  if (iVar3 == 0) {
    return;
  }
  if (((0x50 < (short)param_1[0x143]) && ((short)param_1[0x142] < 0x51)) ||
     ((0x18 < (short)param_1[0x143] && ((short)param_1[0x142] < 0x19)))) {
    *(undefined1 *)((int)param_1 + 0xd19) = 1;
  }
  piVar10 = param_1 + 0x22f;
  if (((char)param_1[0x230] != '+' && (char)param_1[0x230] != ',') &&
     (iVar3 = func_004F8998(param_1,0,(char *)0x0), iVar3 != 0)) {
    func_0065D630(piVar10,0x2b);
  }
  pfVar9 = (float *)param_1[0x234];
  piVar4 = (int *)(param_1[0x236] + (char)param_1[0x230] * 8);
  uVar7 = *(uint *)(param_1[0x236] + (char)param_1[0x230] * 8 + 4);
  piVar8 = (int *)((int)pfVar9 + ((int)uVar7 >> 1));
  if ((uVar7 & 1) != 0) {
    piVar4 = (int *)(*piVar4 + *piVar8);
  }
  (*(code *)*piVar4)(piVar8);
  iVar3 = *piVar10;
  *piVar10 = iVar3 + 1;
  if (param_1[0x233] != 0) {
    fVar12 = (float)VectorUnsignedToFloat(iVar3 + 1,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(param_1[0x233],1,fVar12);
  }
  iVar15 = DAT_0020e79c;
  iVar2 = DAT_0020e798;
  bVar11 = (char)param_1[0x2e9] == '\0';
  iVar3 = 0;
  if (!bVar11) {
    iVar3 = param_1[0x326];
  }
  if (bVar11 || iVar3 == -0x41000000) {
    *(byte *)(param_1 + 0x1da) = *(byte *)(param_1 + 0x1da) & 0xfe;
    param_1[0x334] = iVar15;
    param_1[0x336] = iVar15;
    param_1[0x335] = iVar2;
  }
  else {
    iVar3 = DAT_0020e798;
    func_004D80A4(&local_7c,param_1[0xfa],DAT_0020e7a0);
    local_78 = iVar3;
    func_004D838C((float *)(param_1 + 0x334),&local_7c,DAT_0020e7ac,DAT_0020e7a8,DAT_0020e7a4);
    func_004F8864((int)param_1,param_1 + 0x334,0,DAT_0020e7b0);
  }
  fVar12 = DAT_0020e7b4;
  if ((char)param_1[0x230] != '\x19' && (char)param_1[0x230] != '+') {
    pfVar9 = (float *)0x7fffffff;
    func_0051D2F4(param_1 + 0x278,0,DAT_0020e7b8,0x7fffffff,DAT_0020e7b4);
  }
  func_004F48F0((int)param_1);
  fVar14 = DAT_0020e7bc;
  if ((char)param_1[0x2e9] == '\0') {
    fVar14 = DAT_0020e7c0;
  }
  func_004FAB0C((int)param_1,fVar14);
  param_1[0x261] = iVar15;
  param_1[0x262] = iVar15;
  param_1[0x263] = iVar15;
  *(undefined1 *)(param_1 + 0x264) = 0;
  if (*(char *)((int)param_1 + 0xba5) != '\0') {
    param_1[0xf5] = DAT_0020e7c4;
  }
  func_004F5588((int)param_1);
  pfVar5 = (float *)(param_1 + 0x325);
  fVar14 = *pfVar5;
  fVar13 = ALBW_AS_F32(param_1[0x326]) - fVar14;
  if (DAT_0020e7c8 < fVar13) {
    fVar14 = fVar14 + DAT_0020e7c8;
  }
  else {
    if (DAT_0020e7cc <= fVar13) {
      *pfVar5 = ALBW_AS_F32(param_1[0x326]);
      goto LAB_0020e6cc;
    }
    fVar14 = fVar14 - DAT_0020e7c8;
  }
  *pfVar5 = fVar14;
LAB_0020e6cc:
  param_1[0x285] = param_1[0x325];
  *(bool *)((int)param_1 + 0x9f1) = *(char *)(param_1[0x144] + 4) == '\x12';
  func_0020BC84((int)param_1);
  func_004F5BD8((int)param_1,(uint *)0x0,(int **)0x0,pfVar9);
  func_002084C4((int)param_1);
  func_001119F4(auStack_58,
                (undefined4 *)
                (*(int *)(*(int *)(param_1[0x103] + 0x24) + 0x14) + param_1[0x277] * 0x30));
  fVar12 = local_3c + fVar12;
  param_1[0x26d] = local_4c;
  param_1[0x26e] = (int)ALBW_AS_U32(fVar12);
  param_1[0x26f] = local_2c;
  func_001119F4(auStack_88,
                (undefined4 *)
                (*(int *)(*(int *)(param_1[0x103] + 0x24) + 0x14) + param_1[0x273] * 0x30));
  param_1[0x270] = (int)ALBW_AS_U32(local_7c);
  param_1[0x271] = (int)ALBW_AS_U32(fVar12);
  param_1[0x272] = local_5c;
  return;
}

