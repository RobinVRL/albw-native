#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00115CE4(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern undefined *DAT_004366d0;
extern float DAT_004366d4;
extern undefined4 DAT_004366d8;
extern undefined4 DAT_004366dc;

// USA 004364B0 <- EU 00436490 (Ghidra, non-matching)
// GLOBAL DAT_004366d0 undefined *
// GLOBAL DAT_004366d4 float
// GLOBAL DAT_004366d8 undefined4
// GLOBAL DAT_004366dc undefined4

void func_004364B0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define local_a8 ((float *)(albw_frame + 0x8))
  #define uStack_98 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_94 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_90 (*(float *)(albw_frame + 0x20))
  #define uStack_8c (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_88 (*(undefined4 *)(albw_frame + 0x28))
  #define local_84 (*(undefined4 *)(albw_frame + 0x2c))
  #define uStack_80 (*(undefined4 *)(albw_frame + 0x30))
  #define uStack_7c (*(undefined4 *)(albw_frame + 0x34))
  #define local_78 (*(undefined4 *)(albw_frame + 0x38))
  #define uStack_74 (*(undefined4 *)(albw_frame + 0x3c))
  #define uStack_70 (*(undefined4 *)(albw_frame + 0x40))
  #define local_6c (*(float *)(albw_frame + 0x44))
  #define uStack_68 (*(undefined4 *)(albw_frame + 0x48))
  #define local_64 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_60 (*(float *)(albw_frame + 0x50))
  #define uStack_5c (*(undefined4 *)(albw_frame + 0x54))
  #define uStack_58 (*(undefined4 *)(albw_frame + 0x58))
  #define local_54 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_50 (*(undefined4 *)(albw_frame + 0x60))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x64))
  #define local_48 (*(float *)(albw_frame + 0x68))
  #define local_44 (*(float *)(albw_frame + 0x6c))
  #define local_40 (*(float *)(albw_frame + 0x70))
  #define local_3c (*(float *)(albw_frame + 0x74))
  #define local_38 (*(undefined4 *)(albw_frame + 0x78))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x7c))
  #define local_2c (*(float *)(albw_frame + 0x84))
  #define fStack_28 (*(float *)(albw_frame + 0x88))
  #define fStack_24 (*(float *)(albw_frame + 0x8c))
  func_00100118((int)local_a8,DAT_004366d0,0xc,8);
  fVar5 = DAT_004366d4;
  func_00115D70(&local_3c,(float *)(param_1 + 0x58),DAT_004366d4);
  pfVar3 = (float *)(param_1 + 0x40);
  *pfVar3 = local_3c;
  *(undefined4 *)(param_1 + 0x44) = local_38;
  *(undefined4 *)(param_1 + 0x48) = uStack_34;
  local_2c = -*(float *)(param_1 + 0x58);
  fStack_24 = -*(float *)(param_1 + 0x60);
  fStack_28 = -*(float *)(param_1 + 0x5c);
  func_00115D70(&local_3c,&local_2c,fVar5);
  *(float *)(param_1 + 0x34) = local_3c;
  puVar2 = (undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x38) = local_38;
  *(undefined4 *)(param_1 + 0x3c) = uStack_34;
  uVar1 = DAT_004366d8;
  local_a8[0] = *(float *)(param_1 + 0x34);
  local_a8[1] = ALBW_AS_F32(local_38);
  local_a8[2] = ALBW_AS_F32(uStack_34);
  local_a8[3] = *pfVar3;
  uStack_98 = *(undefined4 *)(param_1 + 0x38);
  uStack_94 = *(undefined4 *)(param_1 + 0x3c);
  local_90 = *pfVar3;
  uStack_8c = *(undefined4 *)(param_1 + 0x38);
  uStack_88 = *(undefined4 *)(param_1 + 0x48);
  local_84 = *puVar2;
  uStack_80 = *(undefined4 *)(param_1 + 0x38);
  uStack_7c = *(undefined4 *)(param_1 + 0x48);
  local_78 = *puVar2;
  uStack_74 = *(undefined4 *)(param_1 + 0x44);
  uStack_70 = *(undefined4 *)(param_1 + 0x3c);
  local_6c = *pfVar3;
  uStack_68 = *(undefined4 *)(param_1 + 0x44);
  local_64 = *(undefined4 *)(param_1 + 0x3c);
  local_60 = *pfVar3;
  uStack_5c = *(undefined4 *)(param_1 + 0x44);
  uStack_58 = *(undefined4 *)(param_1 + 0x48);
  local_54 = *puVar2;
  local_50 = *(undefined4 *)(param_1 + 0x44);
  uStack_4c = *(undefined4 *)(param_1 + 0x48);
  iVar4 = 0;
  *(undefined4 *)(param_1 + 0x34) = DAT_004366d8;
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  uVar1 = DAT_004366dc;
  *(undefined4 *)(param_1 + 0x40) = DAT_004366dc;
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  do {
    func_00115CE4(&local_48,(float *)(param_1 + 100),local_a8 + iVar4 * 3);
    iVar4 = iVar4 + 1;
    fVar5 = *(float *)(param_1 + 0x34);
    if (local_48 < *(float *)(param_1 + 0x34)) {
      fVar5 = local_48;
    }
    *(float *)(param_1 + 0x34) = fVar5;
    fVar5 = *(float *)(param_1 + 0x38);
    if (local_44 < *(float *)(param_1 + 0x38)) {
      fVar5 = local_44;
    }
    *(float *)(param_1 + 0x38) = fVar5;
    fVar5 = *(float *)(param_1 + 0x3c);
    if (local_40 < *(float *)(param_1 + 0x3c)) {
      fVar5 = local_40;
    }
    *(float *)(param_1 + 0x3c) = fVar5;
    fVar5 = local_48;
    if (local_48 < *(float *)(param_1 + 0x40)) {
      fVar5 = *(float *)(param_1 + 0x40);
    }
    *(float *)(param_1 + 0x40) = fVar5;
    fVar5 = local_44;
    if (local_44 < *(float *)(param_1 + 0x44)) {
      fVar5 = *(float *)(param_1 + 0x44);
    }
    *(float *)(param_1 + 0x44) = fVar5;
    fVar5 = *(float *)(param_1 + 0x48);
    if (*(float *)(param_1 + 0x48) <= local_40) {
      fVar5 = local_40;
    }
    *(float *)(param_1 + 0x48) = fVar5;
  } while (iVar4 < 8);
  *(float *)(param_1 + 0x3c) = *(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0xc);
  *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x40) + *(float *)(param_1 + 4);
  *(float *)(param_1 + 0x44) = *(float *)(param_1 + 0x44) + *(float *)(param_1 + 8);
  *(float *)(param_1 + 0x48) = *(float *)(param_1 + 0x48) + *(float *)(param_1 + 0xc);
  *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + *(float *)(param_1 + 4);
  *(float *)(param_1 + 0x38) = *(float *)(param_1 + 0x38) + *(float *)(param_1 + 8);
  return;
}

