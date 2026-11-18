#include "ghidra_types.h"

extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_002ABEC8(int *param_1,int param_2);
extern int func_002ADFE4(int param_1,int param_2,undefined1 param_3,undefined4 param_4,int param_5);
extern int func_002AE780(int param_1);
extern float func_002B0D7C(int param_1,int param_2,uint param_3,int param_4,float fparam_0);
extern int func_002B193C(int param_1,int param_2,float fparam_0);
extern float func_004F8184(uint param_1,float fparam_0,float fparam_1,float fparam_2);
extern int func_004FA890(int param_1);
extern float func_004FB2F0(int param_1,float fparam_0);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_00520FC0(void);
extern int func_0058A43C(int param_1);
extern float DAT_002af46c;
extern float DAT_002af470;
extern float DAT_002af474;
extern float DAT_002af478;
extern undefined4 DAT_002af47c;
extern float DAT_002af480;
extern undefined4 DAT_002af484;
extern int DAT_002af488;
extern undefined DAT_002af48c;
extern int DAT_002af4a4;
extern float DAT_002af4a8;
extern float DAT_002af4ac;
extern float DAT_002af4b0;
extern float DAT_002af4b4;
extern char s__SE_EN_TR_BLOW_UP_002af48f[];
extern char s_cf_002af48f[];
extern undefined4 _DAT_002af48c;

// USA 002AF168 <- EU 002AF144 (Ghidra, non-matching)
// GLOBAL DAT_002af46c float
// GLOBAL DAT_002af470 float
// GLOBAL DAT_002af474 float
// GLOBAL DAT_002af478 float
// GLOBAL DAT_002af47c undefined4
// GLOBAL DAT_002af480 float
// GLOBAL DAT_002af484 undefined4
// GLOBAL DAT_002af488 int
// GLOBAL DAT_002af48c undefined
// GLOBAL DAT_002af4a4 int
// GLOBAL DAT_002af4a8 float
// GLOBAL DAT_002af4ac float
// GLOBAL DAT_002af4b0 float
// GLOBAL DAT_002af4b4 float
// GLOBAL s_cf_002af48f string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_002AF168(int param_1)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  float *pfVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;
  float fVar12;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  cVar1 = *(char *)(*(int *)(param_1 + 0x34) + 0x7fc);
  if ((cVar1 != '\0' && cVar1 != '\x04') && cVar1 != '\x05') {
    if (*(short *)(*(int *)(param_1 + 0x34) + 0x508) < 1) {
      func_002B193C(param_1,6,DAT_002af46c);
    }
    else {
      func_002B0D7C(param_1,6,0x14,0,DAT_002af46c);
      uVar7 = func_0058A43C(*(int *)(param_1 + 0x34));
      if ((uVar7 == 0) && ((*(uint *)(*(int *)(param_1 + 0x34) + 0x59c) & 0x80000) != 0)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      *(bool *)(param_1 + 0x1a4) = bVar3;
      if (((bVar3) && (iVar8 = *(int *)(param_1 + 0x34), *(char *)(iVar8 + 0x7fc) != '\x02')) &&
         (-1 < *(char *)(DAT_002af488 + iVar8))) {
        func_004FC07C(iVar8,(int)*(char *)(DAT_002af488 + iVar8),0xffffffff,1);
      }
    }
    pfVar9 = (float *)func_00520FC0();
    fVar11 = *pfVar9 - *(float *)(*(int *)(param_1 + 0x34) + 0x3d0);
    fVar12 = pfVar9[2] - *(float *)(*(int *)(param_1 + 0x34) + 0x3d8);
    fVar11 = SQRT(fVar11 * fVar11 + fVar12 * fVar12);
    if (DAT_002af4a8 < fVar11) {
      fVar11 = DAT_002af4a8;
    }
    return func_00115D70((float *)(param_1 + 0x3c),(float *)(param_1 + 0x3c),
                  DAT_002af4b4 + (DAT_002af4a8 - fVar11) * DAT_002af4ac * DAT_002af4b0);
  }
  func_002AE780(param_1);
  fVar11 = DAT_002af470;
  *(ushort *)(param_1 + 0x38) = *(ushort *)(param_1 + 0x38) & 0xfff7 | 1;
  *(uint *)(*(int *)(param_1 + 0x34) + 0x5a0) = *(uint *)(*(int *)(param_1 + 0x34) + 0x5a0) | 1;
  fVar12 = *(float *)(param_1 + 0x1a8);
  uVar7 = in_fpscr & 0xfffffff | (uint)(fVar12 == fVar11) << 0x1e | (uint)(fVar11 <= fVar12) << 0x1d
  ;
  bVar2 = (byte)(uVar7 >> 0x18);
  if (!(bool)(bVar2 >> 5 & 1) || (bool)(bVar2 >> 6)) {
    fVar12 = DAT_002af474;
  }
  fVar12 = func_004F8184(0x31,fVar12,fVar11,fVar11);
  *(float *)(param_1 + 0x40) = fVar12;
  iVar8 = *(int *)(param_1 + 0x34);
  if (*(char *)(iVar8 + 0x7fc) == '\x05') {
    if (*(short *)(iVar8 + 0x784) == 0) {
      *(undefined2 *)(iVar8 + 0x784) = *(undefined2 *)(iVar8 + 0x782);
    }
    uVar6 = (uint)*(ushort *)(*(int *)(param_1 + 0x34) + 0x784);
  }
  else {
    uVar6 = 0x96;
  }
  fVar12 = DAT_002af478;
  *(uint *)(param_1 + 0x2c) = uVar6;
  if (uVar6 == 0) {
    *(float *)(param_1 + 0x30) = fVar11;
  }
  else {
    fVar10 = (float)VectorUnsignedToFloat(uVar6,(byte)(uVar7 >> 0x15) & 3);
    *(float *)(param_1 + 0x30) = fVar12 / fVar10;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar4 = DAT_002af47c;
  *(undefined2 *)(param_1 + 0x1a0) = 0x31;
  *(undefined2 *)(param_1 + 0x1a2) = 0;
  *(undefined4 *)(param_1 + 0x6c) = uVar4;
  fVar12 = DAT_002af480;
  *(ushort *)(param_1 + 0x38) = *(ushort *)(param_1 + 0x38) | 8;
  *(undefined4 *)(param_1 + 0x80) = 0xc;
  *(float *)(param_1 + 0x84) = fVar12;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  uVar7 = func_0058A43C(*(int *)(param_1 + 0x34));
  if ((uVar7 == 0) && ((*(uint *)(*(int *)(param_1 + 0x34) + 0x59c) & 0x80000) != 0)) {
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  *(undefined1 *)(param_1 + 0x1a4) = uVar5;
  func_002ADFE4(param_1,6,*(undefined1 *)(param_1 + 0x110),(int)*(char *)(param_1 + 0x111),0);
  func_004FB2F0(*(int *)(param_1 + 0x34),fVar12);
  uVar4 = DAT_002af484;
  *(undefined4 *)(param_1 + 0x198) = 0x11;
  *(undefined4 *)(param_1 + 0x19c) = uVar4;
  *(undefined4 *)(param_1 + 0x194) = 0;
  if (*(char *)(param_1 + 0x113) != '\0') {
    func_002ABEC8(*(int **)(param_1 + 0x34),param_1 + 0xec);
  }
  iVar8 = (int)*(char *)(DAT_002af488 + *(int *)(param_1 + 0x34));
  if (-1 < iVar8) {
    func_004FC07C(*(int *)(param_1 + 0x34),iVar8,0xffffffff,1);
  }
  *(float *)(param_1 + 0x1e4) = fVar11;
  *(undefined1 *)(param_1 + 0x1e8) = 0;
  *(float *)(param_1 + 0x1e4) = *(float *)(*(int *)(param_1 + 0x34) + 0x3d4) + ALBW_AS_F32(_DAT_002af48c);
  func_004FA890(*(int *)(param_1 + 0x34));
  local_20 = DAT_002af4a4;
  *(uint *)(*(int *)(param_1 + 0x34) + 0x5a0) =
       *(uint *)(*(int *)(param_1 + 0x34) + 0x5a0) | 0xc0000000;
  local_1c = s__SE_EN_TR_BLOW_UP_002af48f + 1;
  return func_00150A84(*(int **)(param_1 + 0x34),&local_20,0);
}

