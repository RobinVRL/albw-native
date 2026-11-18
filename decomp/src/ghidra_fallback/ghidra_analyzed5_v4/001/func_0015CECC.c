#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_0015AD54(int param_1,undefined4 param_2,uint param_3,float fparam_0);
extern void func_0015D0E0(int param_1);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004FB4E0(int param_1,float fparam_0);
extern int func_0054FA10(int param_1,uint param_2);
extern int func_0054FAC0(int param_1,uint param_2);
extern int func_0054FBC4(int param_1,float *param_2,float *param_3);
extern float func_0058AC38(int param_1);
extern float DAT_0015d0c0;
extern float DAT_0015d0c4;
extern float DAT_0015d0c8;
extern float DAT_0015d0cc;
extern float DAT_0015d0d0;
extern undefined4 DAT_0015d0d4;

// USA 0015CECC <- EU 0015CED0 (Ghidra, non-matching)
// GLOBAL DAT_0015d0c0 float
// GLOBAL DAT_0015d0c4 float
// GLOBAL DAT_0015d0c8 float
// GLOBAL DAT_0015d0cc float
// GLOBAL DAT_0015d0d0 float
// GLOBAL DAT_0015d0d4 undefined4

void func_0015CECC(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  float *pfVar4;
  uint uVar5;
  float fVar6;
  float fparam_0;
  float fVar7;
  float fparam_0_00;
  float fVar8;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_88 (*(float *)(albw_frame + 0x8))
  #define fStack_84 (*(float *)(albw_frame + 0xc))
  #define uStack_80 (*(undefined4 *)(albw_frame + 0x10))
  #define local_70 (*(float *)(albw_frame + 0x20))
  #define fStack_6c (*(float *)(albw_frame + 0x24))
  #define local_68 (*(float *)(albw_frame + 0x28))
  #define local_64 (*(float *)(albw_frame + 0x2c))
  #define fStack_60 (*(float *)(albw_frame + 0x30))
  #define local_5c (*(float *)(albw_frame + 0x34))
  #define local_54 (*(float *)(albw_frame + 0x3c))
  #define local_50 (*(float *)(albw_frame + 0x40))
  #define fStack_4c (*(float *)(albw_frame + 0x44))
  #define local_48 (*(float *)(albw_frame + 0x48))
  #define local_44 (*(float *)(albw_frame + 0x4c))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x50))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x54))
  fparam_0_00 = DAT_0015d0c0;
  *(undefined1 *)(param_1 + 0x9ae) = 1;
  *(undefined1 *)(param_1 + 0xf9d) = 0;
  func_0015AD54(param_1,7,0xffffffff,fparam_0_00);
  fVar6 = func_0058AC38(param_1);
  fVar7 = DAT_0015d0c4;
  func_004FB4E0(param_1,fVar6 * DAT_0015d0c4);
  func_0015D0E0(param_1);
  local_54 = *(float *)(param_1 + 0x994);
  fStack_4c = *(float *)(param_1 + 0x99c);
  local_50 = DAT_0015d0c8;
  if ((*(ushort *)(param_1 + 0x2e) & 0xff) != 0) {
    local_50 = DAT_0015d0cc;
  }
  iVar2 = param_1 + 0x9b4;
  local_50 = local_50 + *(float *)(param_1 + 0xc);
  fVar6 = DAT_0015d0c8;
  fVar8 = DAT_0015d0cc;
  uVar3 = func_0054FBC4(iVar2,&local_54,(float *)0x0);
  pfVar4 = (float *)func_0054FA10(iVar2,uVar3);
  local_70 = local_54;
  fStack_6c = local_50;
  local_68 = fStack_4c;
  uVar5 = func_0054FAC0(iVar2,uVar3);
  fparam_0 = DAT_0015d0d0;
  func_00115D70(&local_44,pfVar4,DAT_0015d0d0);
  local_88 = local_44;
  fStack_84 = ALBW_AS_F32(uStack_40);
  uStack_80 = uStack_3c;
  func_00115C70(&local_70,&local_70,&local_88);
  local_64 = local_54;
  fStack_60 = local_50;
  local_5c = fStack_4c;
  func_00115D70(&local_48,pfVar4,fparam_0);
  local_88 = local_48;
  fStack_84 = local_44;
  uStack_80 = uStack_40;
  func_00115C54(&local_64,&local_64,&local_88);
  *(float *)(param_1 + 0x3d0) = local_70;
  if ((*(ushort *)(param_1 + 0x2e) & 0xff) != 0) {
    fVar6 = fVar8;
  }
  *(float *)(param_1 + 0x3d4) = fVar6 + *(float *)(param_1 + 0xc);
  *(float *)(param_1 + 0x3d8) = local_68;
  func_004D80A4((float *)(param_1 + 0x3dc),uVar5,
                SQRT((local_70 - local_64) * (local_70 - local_64) +
                     (local_68 - local_5c) * (local_68 - local_5c)) * fVar7);
  *(float *)(param_1 + 0x3e0) = fparam_0_00;
  *(uint *)(param_1 + 1000) = uVar5;
  *(undefined4 *)(param_1 + 0x8e4) = 0xe;
  *(float *)(param_1 + 0x8e8) = fVar7;
  *(undefined4 *)(param_1 + 0x8e0) = 0;
  uVar1 = DAT_0015d0d4;
  *(uint *)(param_1 + 0xe08) = uVar3;
  *(undefined4 *)(param_1 + 0xe0c) = 0;
  *(undefined4 *)(param_1 + 0x4f0) = uVar1;
  *(undefined4 *)(param_1 + 0xf98) = 0xffffffff;
  return;
}

