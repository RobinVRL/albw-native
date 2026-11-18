#include "ghidra_types.h"

extern int func_0011593C(undefined4 *param_1);
extern int func_0048B2A8(undefined4 *param_1);
extern int func_00491AFC(float *param_1,float fparam_0);
extern int func_004928E8(undefined4 *param_1);
extern int func_00494F50(int param_1,undefined4 param_2);
extern int func_00494FFC(int param_1,undefined4 param_2,undefined4 param_3);
extern int func_00495028(int param_1,undefined4 *param_2);
extern int func_00495080(int param_1);
extern int func_00495090(int param_1);
extern int func_004950C4(int param_1,undefined4 *param_2,undefined4 *param_3);
extern int func_00495130(int param_1,float *param_2);
extern int func_004952C0(int param_1,undefined4 param_2);
extern int func_00539418(undefined4 param_1,int param_2,undefined4 *param_3);
extern float DAT_0037acd0;
extern float DAT_0037acd4;
extern float DAT_0037acd8;
extern undefined4 *DAT_0037acdc;
extern int *DAT_0037ace0;
extern int *DAT_0037ace4;
extern float DAT_0037ace8;
extern int *DAT_0037acec;
extern undefined4 *DAT_0037acf0;
extern undefined4 DAT_0037acf4;
extern undefined4 *DAT_0037acf8;

// USA 0037A9E8 <- EU 0037A9C4 (Ghidra, non-matching)
// GLOBAL DAT_0037acd0 float
// GLOBAL DAT_0037acd4 float
// GLOBAL DAT_0037acd8 float
// GLOBAL DAT_0037acdc undefined4 *
// GLOBAL DAT_0037ace0 int *
// GLOBAL DAT_0037ace4 int *
// GLOBAL DAT_0037ace8 float
// GLOBAL DAT_0037acec int *
// GLOBAL DAT_0037acf0 undefined4 *
// GLOBAL DAT_0037acf4 undefined4
// GLOBAL DAT_0037acf8 undefined4 *

undefined4 func_0037A9E8(int param_1,byte *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  float *pfVar4;
  float fVar5;
  int *piVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  _Alignas(8) unsigned char albw_frame[0x190];
  #define local_188 (*(float *)(albw_frame + 0x8))
  #define local_184 (*(float *)(albw_frame + 0xc))
  #define local_180 (*(float *)(albw_frame + 0x10))
  #define local_17c (*(float *)(albw_frame + 0x14))
  #define local_178 (*(float *)(albw_frame + 0x18))
  #define local_174 (*(float *)(albw_frame + 0x1c))
  #define local_170 (*(float *)(albw_frame + 0x20))
  #define local_16c (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_168 (*(undefined4 *)(albw_frame + 0x28))
  #define local_164 (*(undefined4 *)(albw_frame + 0x2c))
  #define uStack_160 (*(undefined4 *)(albw_frame + 0x30))
  #define local_15c (*(undefined4 *)(albw_frame + 0x34))
  #define uStack_158 (*(undefined4 *)(albw_frame + 0x38))
  #define local_154 (*(float *)(albw_frame + 0x3c))
  #define local_150 (*(undefined4 *)(albw_frame + 0x40))
  #define local_14c (*(undefined1 *)(albw_frame + 0x44))
  #define uStack_148 (*(undefined4 *)(albw_frame + 0x48))
  #define local_144 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_98 (*(float *)(albw_frame + 0xf8))
  #define local_94 (*(float *)(albw_frame + 0xfc))
  #define local_90 (*(float *)(albw_frame + 0x100))
  #define fStack_8c (*(float *)(albw_frame + 0x104))
  #define auStack_88 ((undefined4 *)(albw_frame + 0x108))
  puVar1 = DAT_0037acdc;
  local_17c = *(float *)(param_1 + 0x1e4);
  fVar5 = local_17c;
  if (local_17c != 1.0) {
    fVar5 = ALBW_AS_F32((uint)*param_2);
  }
  if (local_17c == 1.0 || fVar5 == 2.8026e-45) {
    local_188 = DAT_0037acd0;
    local_184 = DAT_0037acd0;
    local_180 = DAT_0037acd0;
    return func_00539418(param_1,*(int *)(param_2 + 4),&local_188);
  }
  piVar6 = (int *)*DAT_0037acdc;
  iVar7 = *DAT_0037ace0;
  fVar5 = DAT_0037acd8;
  if (local_17c * DAT_0037acd4 < DAT_0037acd8) {
    fVar5 = local_17c * DAT_0037acd4;
  }
  fVar8 = DAT_0037acd0;
  fVar9 = DAT_0037acd8;
  (**(code **)(*piVar6 + 0x60))(piVar6,1);
  (**(code **)(*piVar6 + 0x14))(piVar6,0);
  (**(code **)(*piVar6 + 0x18))(piVar6,0);
  (**(code **)(*piVar6 + 0x50))(piVar6,0,0,0,0);
  puVar2 = *(undefined4 **)(*DAT_0037ace4 + 0x1c);
  uVar11 = *puVar2;
  uVar12 = puVar2[2];
  fVar10 = ALBW_AS_F32(puVar2[1]) + fVar9;
  local_180 = fVar9;
  local_17c = fVar9;
  local_178 = fVar9;
  local_174 = fVar9;
  (**(code **)(*piVar6 + 100))(piVar6,1,0x80);
  (**(code **)(*piVar6 + 0x68))(piVar6,0,2);
  func_0011593C(&local_170);
  func_00491AFC(&local_170,(fVar9 - fVar5) * DAT_0037ace8);
  local_164 = uVar11;
  local_154 = fVar10;
  local_144 = uVar12;
  func_00495028(iVar7,&local_170);
  piVar3 = DAT_0037acec;
  func_00494F50(iVar7,*(undefined4 *)(*DAT_0037acec + 0x29fc));
  func_004952C0(iVar7,*(undefined4 *)(*piVar3 + 0x29f8));
  func_00495090(iVar7);
  func_00494FFC(iVar7,&local_180,&local_180);
  func_00495080(iVar7);
  (**(code **)(*piVar6 + 0x50))(piVar6,1,1,1,1);
  func_004928E8(&uStack_148);
  func_0048B2A8(auStack_88);
  func_00494F50(iVar7,&uStack_148);
  func_004952C0(iVar7,auStack_88);
  func_00495028(iVar7,DAT_0037acf0);
  piVar3 = (int *)*puVar1;
  local_98 = fVar8;
  local_94 = fVar8;
  local_90 = fVar8;
  fStack_8c = fVar9;
  (**(code **)(*piVar3 + 100))(piVar3,3,0x80);
  piVar3 = (int *)*puVar1;
  (**(code **)(*piVar3 + 0x68))(piVar3,0,0);
  func_00495090(iVar7);
  local_16c = *DAT_0037acf8;
  uStack_168 = DAT_0037acf8[1];
  local_164 = DAT_0037acf8[2];
  uStack_160 = DAT_0037acf8[3];
  local_15c = *DAT_0037acf8;
  uStack_158 = DAT_0037acf8[1];
  local_154 = ALBW_AS_F32(DAT_0037acf8[2]);
  local_150 = DAT_0037acf8[3];
  local_14c = 0;
  local_180 = fVar8;
  local_17c = fVar8;
  local_178 = fVar8;
  local_174 = fVar9;
  local_170 = fVar9;
  pfVar4 = (float *)func_004950C4((int)&local_180,&local_98,&local_98);
  func_00495130(iVar7,pfVar4);
  func_00495080(iVar7);
  (**(code **)(*piVar6 + 0x14))(piVar6,1);
  (**(code **)(*piVar6 + 0x18))(piVar6,1);
                    /* WARNING: Could not recover jumptable at 0x0037accc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return (**(code **)(*piVar6 + 0x60))(piVar6,0);
}

