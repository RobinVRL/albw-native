#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115DAC(float *param_1,float *param_2,float *param_3,float fparam_0);
extern int func_004904CC(float fparam_0,float fparam_1);
extern int func_004C1088(int param_1,uint param_2,float fparam_0,float fparam_1);
extern int func_004D8054(float *param_1,uint param_2,float fparam_0);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00520FC0(void);
extern int func_0058E2B8(int *param_1);
extern int func_006260FC(int param_1,int param_2,undefined1 param_3);
extern int DAT_003123d4;
extern float DAT_003123d8;
extern int DAT_003123dc;
extern float DAT_003123e0;
extern float DAT_003123e4;
extern float DAT_003123e8;
extern float DAT_003123ec;
extern float DAT_003123f0;
extern float DAT_003123f4;
extern int DAT_003123f8;

// USA 003121B0 <- EU 0031218C (Ghidra, non-matching)
// GLOBAL DAT_003123d4 int
// GLOBAL DAT_003123d8 float
// GLOBAL DAT_003123dc int
// GLOBAL DAT_003123e0 float
// GLOBAL DAT_003123e4 float
// GLOBAL DAT_003123e8 float
// GLOBAL DAT_003123ec float
// GLOBAL DAT_003123f0 float
// GLOBAL DAT_003123f4 float
// GLOBAL DAT_003123f8 int

undefined4 func_003121B0(int param_1)

{
  byte bVar1;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(float *)(albw_frame + 0x8))
  #define local_44 (*(float *)(albw_frame + 0xc))
  #define local_40 (*(float *)(albw_frame + 0x10))
  #define local_3c (*(float *)(albw_frame + 0x14))
  #define local_38 (*(float *)(albw_frame + 0x18))
  #define local_34 (*(float *)(albw_frame + 0x1c))
  pfVar2 = (float *)func_00520FC0();
  iVar5 = DAT_003123d4;
  local_48 = *pfVar2;
  local_44 = pfVar2[1];
  local_40 = pfVar2[2];
  if (*(char *)(param_1 + 0xa3c) == '\0') {
    fVar7 = *(float *)(param_1 + 0x3d0) - *(float *)(param_1 + 0xa20);
    fVar9 = *(float *)(param_1 + 0x3d8) - *(float *)(param_1 + 0xa28);
    if (DAT_003123d4 < (int)ALBW_AS_U32((fVar7 * fVar7 + fVar9 * fVar9))) {
      local_48 = *(float *)(param_1 + 0xa20);
      local_44 = *(float *)(param_1 + 0xa24);
      local_40 = *(float *)(param_1 + 0xa28);
    }
    else {
      *(undefined1 *)(param_1 + 0xa3c) = 1;
    }
  }
  func_00115C70(&local_3c,(float *)(param_1 + 0x3d0),&local_48);
  uVar3 = func_004904CC(local_3c,local_34);
  func_004D8054(&local_48,uVar3,DAT_003123d8);
  iVar6 = uVar3 + 0x80000000;
  func_0051D2F4((int *)(param_1 + 1000),iVar6,DAT_003123dc >> 2,DAT_003123dc,DAT_003123e0);
  local_3c = ALBW_AS_F32((*(int *)(param_1 + 1000) - iVar6));
  iVar4 = func_0058E2B8((int *)&local_3c);
  local_44 = *(float *)(param_1 + 0x3d4);
  pfVar2 = (float *)(param_1 + 0x3d0);
  fVar7 = (float)VectorUnsignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
  fVar7 = DAT_003123e8 - fVar7 * DAT_003123e4;
  uVar10 = CONCAT44(DAT_003123e4,fVar7 * DAT_003123ec * fVar7);
  fVar7 = DAT_003123e8;
  func_00115C70(&local_3c,&local_48,pfVar2);
  fVar9 = SQRT(local_3c * local_3c + local_38 * local_38 + local_34 * local_34);
  fVar8 = ALBW_AS_F32(uVar10);
  uVar3 = in_fpscr & 0xfffffff | (uint)(fVar9 == fVar8) << 0x1e | (uint)(fVar8 <= fVar9) << 0x1d;
  bVar1 = (byte)(uVar3 >> 0x18);
  if ((bool)(bVar1 >> 5 & 1) && !(bool)(bVar1 >> 6)) {
    fVar7 = fVar7 / fVar9;
    local_3c = local_3c * fVar7;
    local_34 = local_34 * fVar7;
    local_38 = local_38 * fVar7;
    func_00115DAC(pfVar2,&local_3c,pfVar2,fVar8);
    if (*(char *)(param_1 + 0xa3c) == '\0') {
      return 0;
    }
  }
  else {
    *pfVar2 = local_48;
    *(float *)(param_1 + 0x3d4) = local_44;
    *(float *)(param_1 + 0x3d8) = local_40;
    *(undefined1 *)(param_1 + 0xa3c) = 1;
  }
  fVar7 = ALBW_AS_F32(((ulonglong)uVar10 >> 0x20));
  iVar4 = func_004C1088(param_1,0x80000000,DAT_003123f4,DAT_003123f0);
  if (iVar4 == 0) {
    fVar9 = *(float *)(param_1 + 0x3d0) - *(float *)(param_1 + 0xa20);
    fVar8 = *(float *)(param_1 + 0x3d8) - *(float *)(param_1 + 0xa28);
    if ((int)ALBW_AS_U32((fVar9 * fVar9 + fVar8 * fVar8)) <= iVar5) {
      return 0;
    }
    func_00115C70(&local_3c,(float *)(param_1 + 0xa20),(float *)(param_1 + 0x3d0));
    iVar5 = func_004904CC(local_3c,local_34);
    local_3c = ALBW_AS_F32((iVar5 - iVar6));
    iVar5 = func_0058E2B8((int *)&local_3c);
    fVar9 = (float)VectorUnsignedToFloat(iVar5,(byte)(uVar3 >> 0x15) & 3);
    if ((int)ALBW_AS_U32((fVar9 * fVar7)) <= DAT_003123f8) {
      return 0;
    }
  }
  return func_006260FC(param_1,0xb,0);
}

