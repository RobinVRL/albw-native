#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern float func_0011F468(undefined4 param_1,undefined4 param_2);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_00520FC0(void);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0068A3EC(float *param_1,float fparam_0);
extern int func_0068C690(float *param_1);
extern float DAT_003601b0;
extern int *DAT_003601b4;
extern undefined4 DAT_003601b8;
extern int DAT_003601bc;
extern int DAT_003601c0;
extern float DAT_003601c4;
extern int *DAT_003601c8;
extern float DAT_003601cc;
extern float DAT_003601d0;
extern undefined4 DAT_003601d4;

// USA 0035FF54 <- EU 0035FF30 (Ghidra, non-matching)
// GLOBAL DAT_003601b0 float
// GLOBAL DAT_003601b4 int *
// GLOBAL DAT_003601b8 undefined4
// GLOBAL DAT_003601bc int
// GLOBAL DAT_003601c0 int
// GLOBAL DAT_003601c4 float
// GLOBAL DAT_003601c8 int *
// GLOBAL DAT_003601cc float
// GLOBAL DAT_003601d0 float
// GLOBAL DAT_003601d4 undefined4

void func_0035FF54(int param_1)

{
  uint uVar1;
  byte bVar2;
  int *piVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  int iVar12;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 (*(float *)(albw_frame + 0x8))
  #define local_54 (*(int *)(albw_frame + 0xc))
  #define uStack_50 (*(undefined4 *)(albw_frame + 0x10))
  #define fStack_4c (*(float *)(albw_frame + 0x14))
  #define local_48 ((int *)(albw_frame + 0x18))
  #define local_40 ((float *)(albw_frame + 0x20))
  fVar9 = DAT_003601b0;
  pfVar4 = (float *)(param_1 + 0x4d8);
  *pfVar4 = *(float *)(param_1 + 0x3dc);
  *(undefined4 *)(param_1 + 0x4dc) = *(undefined4 *)(param_1 + 0x3e0);
  *(undefined4 *)(param_1 + 0x4e0) = *(undefined4 *)(param_1 + 0x3e4);
  func_00115D70(pfVar4,pfVar4,fVar9);
  piVar3 = DAT_003601b4;
  uVar7 = *(undefined4 *)(param_1 + 0x500);
  iVar5 = func_0052FBA0(*DAT_003601b4 + 0x3dbbc,*(uint *)(param_1 + 0x50));
  iVar6 = DAT_003601bc;
  uVar11 = CONCAT44(fVar9,DAT_003601b8);
  iVar12 = DAT_003601c0;
  if (iVar5 != 0) {
    fVar8 = func_0011F468(uVar7,*(undefined4 *)(param_1 + 0x504));
    fVar9 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x504),(byte)(in_fpscr >> 0x15) & 3
                                      );
    local_40[0] = *(float *)(iVar6 + 0xe4);
    local_40[1] = ALBW_AS_F32(*(undefined4 *)(iVar6 + 0xe8));
    local_40[2] = ALBW_AS_F32(*(undefined4 *)(iVar6 + 0xec));
    local_40[3] = ALBW_AS_F32(*(undefined4 *)(iVar6 + 0xf0));
    fVar10 = ALBW_AS_F32(uVar11);
    uVar1 = in_fpscr & 0xfffffff | (uint)(fVar9 < fVar10) << 0x1f | (uint)(fVar9 == fVar10) << 0x1e;
    in_fpscr = uVar1 | (uint)(NAN(fVar9) || NAN(fVar10)) << 0x1c;
    bVar2 = (byte)(uVar1 >> 0x18);
    if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
      fVar9 = fVar10;
    }
    *(float *)(param_1 + 0x514) = fVar8 * local_40[(int)fVar9];
    pfVar4 = (float *)func_00520FC0();
    func_00115C70(&local_58,(float *)(param_1 + 0x3d0),pfVar4);
    local_54 = iVar12;
    func_0068A3EC(&local_58,DAT_003601c4);
    if (*DAT_003601c8 != 0) {
      func_004D80A4(&fStack_4c,**(uint **)(*DAT_003601c8 + 0x24),DAT_003601cc);
      local_48[0] = iVar12;
      func_00115C54(&local_58,&local_58,&fStack_4c);
    }
    iVar5 = func_0052FBA0(*piVar3 + 0x3dbbc,*(uint *)(param_1 + 0x50));
    if (iVar5 != 0) {
      iVar5 = *(int *)(*(int *)(*(int *)(iVar5 + 0x40c) + 0x24) + 0x14) +
              *(int *)(iVar5 + 0xb88) * 0x30;
      local_40[0] = *(float *)(iVar5 + 0xc);
      local_40[1] = *(float *)(iVar5 + 0x1c);
      local_40[2] = *(float *)(iVar5 + 0x2c);
    }
    func_00115C70(&fStack_4c,local_40,(float *)(param_1 + 0x3d0));
    local_48[0] = iVar12;
    func_0068A3EC(&fStack_4c,ALBW_AS_F32(((ulonglong)uVar11 >> 0x20)));
    func_00115C54(&local_58,&local_58,&local_58);
    func_00115DC8(&local_58);
    func_00115D70(&local_58,&local_58,*(float *)(param_1 + 0x514));
    iVar5 = func_0068C690(&local_58);
    *(int *)(param_1 + 1000) = iVar5;
    *(float *)(param_1 + 0x3dc) = local_58;
    *(int *)(param_1 + 0x3e0) = local_54;
    *(undefined4 *)(param_1 + 0x3e4) = uStack_50;
  }
  *(undefined4 *)(param_1 + 0x520) = *(undefined4 *)(param_1 + 0x3d4);
  fVar9 = DAT_003601d0;
  local_48[0] = *(int *)(iVar6 + 0xd4);
  local_48[1] = *(undefined4 *)(iVar6 + 0xd8);
  local_40[0] = *(float *)(iVar6 + 0xdc);
  local_40[1] = ALBW_AS_F32(*(undefined4 *)(iVar6 + 0xe0));
  fVar8 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x504),(byte)(in_fpscr >> 0x15) & 3);
  fVar10 = ALBW_AS_F32(uVar11);
  uVar1 = in_fpscr & 0xfffffff | (uint)(fVar8 < fVar10) << 0x1f | (uint)(fVar8 == fVar10) << 0x1e;
  bVar2 = (byte)(uVar1 >> 0x18);
  if (!(bool)(bVar2 >> 6 & 1) && (bool)(bVar2 >> 7) == (NAN(fVar8) || NAN(fVar10))) {
    fVar8 = fVar10;
  }
  iVar6 = local_48[(int)fVar8];
  *(int *)(param_1 + 0x488) = iVar6;
  if (iVar6 == 0) {
    *(int *)(param_1 + 0x48c) = iVar12;
  }
  else {
    fVar8 = (float)VectorUnsignedToFloat(iVar6,(byte)(uVar1 >> 0x15) & 3);
    *(float *)(param_1 + 0x48c) = fVar9 / fVar8;
  }
  *(undefined4 *)(param_1 + 0x484) = 0;
  uVar7 = DAT_003601d4;
  *(undefined4 *)(param_1 + 0x4b8) = 0x3c;
  *(undefined4 *)(param_1 + 0x4bc) = uVar7;
  *(undefined4 *)(param_1 + 0x4b4) = 0;
  return;
}

