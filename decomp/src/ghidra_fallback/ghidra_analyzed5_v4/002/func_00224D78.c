#include "ghidra_types.h"

extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_00115B68(float *param_1,float *param_2,float *param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_00491404(float *param_1,float *param_2);
extern int func_004CEAF0(int param_1);
extern float *DAT_00224fa8;
extern float DAT_00224fac;
extern float DAT_00224fb0;
extern int DAT_00224fb4;

// USA 00224D78 <- EU 00224D78 (Ghidra, non-matching)
// GLOBAL DAT_00224fa8 float *
// GLOBAL DAT_00224fac float
// GLOBAL DAT_00224fb0 float
// GLOBAL DAT_00224fb4 int

undefined4 func_00224D78(int param_1)

{
  float *pfVar1;
  int iVar2;
  int *piVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  _Alignas(8) unsigned char albw_frame[0xd0];
  #define local_c8 (*(float *)(albw_frame + 0x8))
  #define uStack_c4 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_c0 (*(undefined4 *)(albw_frame + 0x10))
  #define afStack_b8 ((float *)(albw_frame + 0x18))
  #define local_b0 (*(float *)(albw_frame + 0x20))
  #define uStack_ac (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_a8 (*(undefined4 *)(albw_frame + 0x28))
  #define local_8c (*(float *)(albw_frame + 0x44))
  #define local_88 (*(float *)(albw_frame + 0x48))
  #define local_84 (*(float *)(albw_frame + 0x4c))
  #define local_80 (*(float *)(albw_frame + 0x50))
  #define local_7c (*(float *)(albw_frame + 0x54))
  #define local_78 (*(float *)(albw_frame + 0x58))
  #define local_74 (*(float *)(albw_frame + 0x5c))
  #define local_70 (*(float *)(albw_frame + 0x60))
  #define local_6c (*(float *)(albw_frame + 0x64))
  #define local_68 (*(float *)(albw_frame + 0x68))
  #define local_64 (*(float *)(albw_frame + 0x6c))
  #define local_60 (*(float *)(albw_frame + 0x70))
  #define local_58 (*(float *)(albw_frame + 0x78))
  #define local_54 (*(float *)(albw_frame + 0x7c))
  #define local_50 (*(float *)(albw_frame + 0x80))
  #define local_48 (*(float *)(albw_frame + 0x88))
  #define local_44 (*(float *)(albw_frame + 0x8c))
  #define local_40 (*(float *)(albw_frame + 0x90))
  #define local_38 (*(float *)(albw_frame + 0x98))
  #define local_34 (*(float *)(albw_frame + 0x9c))
  #define local_30 (*(float *)(albw_frame + 0xa0))
  func_001119F4(&local_68,
                (undefined4 *)(*(int *)(*(int *)(*(int *)(param_1 + 0x594) + 0x24) + 0x14) + 0x90));
  local_38 = local_64;
  local_34 = local_54;
  local_30 = local_44;
  func_00115DC8(&local_38);
  iVar2 = func_00115B68(afStack_b8,&local_38,DAT_00224fa8);
  fVar14 = DAT_00224fac;
  if (iVar2 == 0) {
    local_8c = DAT_00224fb0;
    local_88 = DAT_00224fac;
    local_84 = DAT_00224fac;
    local_80 = DAT_00224fac;
    local_7c = DAT_00224fb0;
    local_78 = DAT_00224fac;
    local_74 = DAT_00224fac;
    local_70 = DAT_00224fac;
    local_6c = DAT_00224fb0;
  }
  else {
    func_00491404(&local_8c,afStack_b8);
  }
  fVar7 = local_80 * local_68;
  fVar11 = local_74 * local_68;
  fVar9 = local_80 * local_64;
  fVar10 = local_80 * local_60;
  fVar12 = local_74 * local_64;
  fVar13 = local_74 * local_60;
  fVar4 = local_70 * local_58;
  fVar6 = local_70 * local_54;
  fVar8 = local_70 * local_50;
  local_60 = local_8c * local_60 + local_88 * local_50 + local_84 * local_40;
  local_68 = local_8c * local_68 + local_88 * local_58 + local_84 * local_48;
  local_64 = local_8c * local_64 + local_88 * local_54 + local_84 * local_44;
  local_50 = fVar10 + local_7c * local_50 + local_78 * local_40;
  local_58 = fVar7 + local_7c * local_58 + local_78 * local_48;
  local_54 = fVar9 + local_7c * local_54 + local_78 * local_44;
  piVar3 = (int *)(param_1 + 0x69c);
  iVar2 = *(int *)(param_1 + 0x69c);
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  local_48 = fVar11 + fVar4 + local_6c * local_48;
  local_44 = fVar12 + fVar6 + local_6c * local_44;
  local_40 = fVar13 + fVar8 + local_6c * local_40;
  func_001151EC((undefined4 *)(iVar2 + 0x80),&local_68);
  fVar6 = *(float *)(param_1 + 0x6a0);
  fVar4 = *(float *)(DAT_00224fb4 + 0x268);
  fVar8 = *(float *)(DAT_00224fb4 + 0x270);
  uVar5 = *(undefined4 *)(DAT_00224fb4 + 0x26c);
  iVar2 = *piVar3;
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  pfVar1 = DAT_00224fa8;
  *(float *)(iVar2 + 0x74) = fVar4 * fVar6;
  *(undefined4 *)(iVar2 + 0x78) = uVar5;
  *(float *)(iVar2 + 0x7c) = fVar8 * fVar6;
  iVar2 = *piVar3;
  func_00115D70(&local_b0,pfVar1,fVar14);
  local_c8 = local_b0;
  uStack_c4 = uStack_ac;
  uStack_c0 = uStack_a8;
  func_00115C54(&local_b0,(float *)(param_1 + 0x3d0),&local_c8);
  *(float *)(iVar2 + 0x8c) = local_b0;
  *(undefined4 *)(iVar2 + 0x9c) = uStack_ac;
  *(undefined4 *)(iVar2 + 0xac) = uStack_a8;
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  return func_004CEAF0(*piVar3);
}

