#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_002ADFE4(int param_1,int param_2,undefined1 param_3,undefined4 param_4,int param_5);
extern int func_002AE780(int param_1);
extern float func_004F8184(uint param_1,float fparam_0,float fparam_1,float fparam_2);
extern int func_004FA890(int param_1);
extern float func_004FB2F0(int param_1,float fparam_0);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern float DAT_002afa18;
extern float DAT_002afa1c;
extern float DAT_002afa20;
extern float DAT_002afa24;
extern undefined DAT_002afa28;
extern int DAT_002afa40;
extern int DAT_002afa44;
extern undefined4 DAT_002afa48;
extern char s__SE_EN_HM_DRIVE_UP_002afa2b[];
extern char s_cf_002afa2b[];
extern undefined4 _DAT_002afa28;

// USA 002AF894 <- EU 002AF870 (Ghidra, non-matching)
// GLOBAL DAT_002afa18 float
// GLOBAL DAT_002afa1c float
// GLOBAL DAT_002afa20 float
// GLOBAL DAT_002afa24 float
// GLOBAL DAT_002afa28 undefined
// GLOBAL DAT_002afa40 int
// GLOBAL DAT_002afa44 int
// GLOBAL DAT_002afa48 undefined4
// GLOBAL s_cf_002afa2b string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void func_002AF894(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint in_fpscr;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fparam_1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  func_002AE780(param_1);
  fparam_1 = DAT_002afa18;
  *(ushort *)(param_1 + 0x38) = *(ushort *)(param_1 + 0x38) & 0xfff7 | 1;
  *(uint *)(*(int *)(param_1 + 0x34) + 0x5a0) =
       *(uint *)(*(int *)(param_1 + 0x34) + 0x5a0) & 0xfffffffe;
  fVar6 = *(float *)(param_1 + 400);
  uVar5 = in_fpscr & 0xfffffff | (uint)(fVar6 == fparam_1) << 0x1e |
          (uint)(fparam_1 <= fVar6) << 0x1d;
  bVar1 = (byte)(uVar5 >> 0x18);
  if (!(bool)(bVar1 >> 5 & 1) || (bool)(bVar1 >> 6)) {
    fVar6 = DAT_002afa1c;
  }
  fVar6 = func_004F8184(0x24,fVar6,fparam_1,fparam_1);
  *(float *)(param_1 + 0x40) = fVar6;
  iVar3 = *(int *)(param_1 + 0x34);
  if (*(char *)(iVar3 + 0x7fc) == '\x05') {
    if (*(short *)(iVar3 + 0x784) == 0) {
      *(undefined2 *)(iVar3 + 0x784) = *(undefined2 *)(iVar3 + 0x782);
    }
    uVar4 = (uint)*(ushort *)(*(int *)(param_1 + 0x34) + 0x784);
  }
  else {
    uVar4 = 0x4b;
  }
  fVar6 = DAT_002afa20;
  *(uint *)(param_1 + 0x2c) = uVar4;
  if (uVar4 == 0) {
    *(float *)(param_1 + 0x30) = fparam_1;
  }
  else {
    fVar7 = (float)VectorUnsignedToFloat(uVar4,(byte)(uVar5 >> 0x15) & 3);
    *(float *)(param_1 + 0x30) = fVar6 / fVar7;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  fVar6 = DAT_002afa24;
  *(ushort *)(param_1 + 0x38) = *(ushort *)(param_1 + 0x38) | 8;
  *(undefined4 *)(param_1 + 0x80) = 0xc;
  *(float *)(param_1 + 0x84) = fVar6;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  func_002ADFE4(param_1,5,*(undefined1 *)(param_1 + 0x110),(int)*(char *)(param_1 + 0x111),0);
  func_004FB2F0(*(int *)(param_1 + 0x34),fVar6);
  *(float *)(param_1 + 0x1e4) = fparam_1;
  *(undefined1 *)(param_1 + 0x1e8) = 0;
  *(float *)(param_1 + 0x1e4) = *(float *)(*(int *)(param_1 + 0x34) + 0x3d4) + ALBW_AS_F32(_DAT_002afa28);
  func_004FA890(*(int *)(param_1 + 0x34));
  local_20 = DAT_002afa40;
  *(uint *)(*(int *)(param_1 + 0x34) + 0x5a0) =
       *(uint *)(*(int *)(param_1 + 0x34) + 0x5a0) | 0xc0000000;
  local_1c = s__SE_EN_HM_DRIVE_UP_002afa2b + 1;
  func_00150A84(*(int **)(param_1 + 0x34),&local_20,0);
  iVar3 = (int)*(char *)(DAT_002afa44 + *(int *)(param_1 + 0x34));
  if (-1 < iVar3) {
    func_004FC07C(*(int *)(param_1 + 0x34),iVar3,0xffffffff,1);
  }
  uVar2 = DAT_002afa48;
  iVar3 = *(int *)(param_1 + 0x34);
  *(undefined4 *)(iVar3 + 0x6ec) = 0x32;
  *(undefined4 *)(iVar3 + 0x6f0) = uVar2;
  *(undefined4 *)(iVar3 + 0x6e8) = 0;
  return;
}

