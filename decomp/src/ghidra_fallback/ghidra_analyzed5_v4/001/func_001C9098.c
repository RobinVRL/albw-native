#include "ghidra_types.h"

extern int func_001151CC(undefined4 *param_1,undefined4 *param_2);
extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_001151F8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115CE4(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_00115D88(float *param_1,float *param_2,float fparam_0);
extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_002915B8(int param_1,undefined4 *param_2);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004356B4(int *param_1);
extern float func_0049EF80(float *param_1,float *param_2,float *param_3);
extern int func_004CEAF0(int param_1);
extern float DAT_001c9510;
extern float DAT_001c9514;
extern undefined4 DAT_001c9518;
extern int *DAT_001c951c;
extern float DAT_001c9594;
extern float DAT_001c9598;

// USA 001C9098 <- EU 001C9098 (Ghidra, non-matching)
// GLOBAL DAT_001c9510 float
// GLOBAL DAT_001c9514 float
// GLOBAL DAT_001c9518 undefined4
// GLOBAL DAT_001c951c int *
// GLOBAL DAT_001c9594 float
// GLOBAL DAT_001c9598 float

/* WARNING: Variable defined which should be unmapped: objStack_c0 */

void func_001C9098(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  code *pcVar6;
  int iVar7;
  int *piVar8;
  float *pfVar9;
  uint in_fpscr;
  float fVar10;
  float fparam_0;
  float fVar11;
  float fVar12;
  float fVar13;
  _Alignas(8) unsigned char albw_frame[0xc0];
  #define objStack_c0 ((uint *)(albw_frame + 0x0))
  #define local_b8 (*(float *)(albw_frame + 0x8))
  #define fStack_b4 (*(float *)(albw_frame + 0xc))
  #define fStack_b0 (*(float *)(albw_frame + 0x10))
  #define local_ac (*(float *)(albw_frame + 0x14))
  #define local_a8 (*(float *)(albw_frame + 0x18))
  #define local_a4 (*(float *)(albw_frame + 0x1c))
  #define local_a0 (*(float *)(albw_frame + 0x20))
  #define local_9c (*(float *)(albw_frame + 0x24))
  #define local_98 (*(float *)(albw_frame + 0x28))
  #define local_94 (*(float *)(albw_frame + 0x2c))
  #define local_90 (*(float *)(albw_frame + 0x30))
  #define fStack_8c (*(float *)(albw_frame + 0x34))
  #define fStack_88 (*(float *)(albw_frame + 0x38))
  #define local_84 (*(float *)(albw_frame + 0x3c))
  #define fStack_80 (*(float *)(albw_frame + 0x40))
  #define fStack_7c (*(float *)(albw_frame + 0x44))
  #define local_74 (*(float *)(albw_frame + 0x4c))
  #define local_70 (*(float *)(albw_frame + 0x50))
  #define local_6c (*(float *)(albw_frame + 0x54))
  #define local_68 (*(float *)(albw_frame + 0x58))
  #define local_64 (*(float *)(albw_frame + 0x5c))
  #define local_60 (*(float *)(albw_frame + 0x60))
  #define local_5c (*(float *)(albw_frame + 0x64))
  #define fStack_58 (*(float *)(albw_frame + 0x68))
  #define local_54 (*(float *)(albw_frame + 0x6c))
  #define local_50 (*(float *)(albw_frame + 0x70))
  #define local_4c (*(float *)(albw_frame + 0x74))
  #define local_48 (*(float *)(albw_frame + 0x78))
  #define local_44 (*(float *)(albw_frame + 0x7c))
  #define fStack_40 (*(float *)(albw_frame + 0x80))
  #define fStack_3c (*(float *)(albw_frame + 0x84))
  uVar3 = *(uint *)(*(int *)(param_1 + 0x428) + *(char *)(param_1 + 0x410) * 8 + 4);
  pcVar6 = *(code **)(*(int *)(param_1 + 0x428) + *(char *)(param_1 + 0x410) * 8);
  if ((uVar3 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(int *)(*(int *)(param_1 + 0x420) + ((int)uVar3 >> 1)));
  }
  (*pcVar6)((int)(*(int *)(param_1 + 0x420)) + ((int)uVar3 >> 1));
  iVar4 = *(int *)(param_1 + 0x40c) + 1;
  *(int *)(param_1 + 0x40c) = iVar4;
  if (*(int *)(param_1 + 0x41c) != 0) {
    fVar10 = (float)VectorUnsignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0x41c),1,fVar10);
  }
  fVar12 = *(float *)(param_1 + 0x4b8);
  piVar8 = *(int **)(param_1 + 0x43c);
  local_68 = fVar12 * DAT_001c9510;
  fVar11 = ALBW_AS_F32(piVar8[0x16]);
  fparam_0 = ALBW_AS_F32(piVar8[0x17]);
  local_70 = DAT_001c9514;
  pfVar9 = (float *)(param_1 + 0x4c8);
  local_6c = DAT_001c9514;
  func_00115CE4(&local_70,pfVar9,&local_70);
  func_00115C54(&local_a4,(float *)(param_1 + 0x3d0),&local_70);
  fVar10 = DAT_001c9510;
  objStack_c0[0] = (uint)ALBW_AS_U32(local_a4);
  objStack_c0[1] = (uint)ALBW_AS_U32(local_a0);
  local_b8 = local_9c;
  switch((short)piVar8[0x15]) {
  case 1:
    piVar8[1] = (int)ALBW_AS_U32(local_a4);
    piVar8[2] = (int)ALBW_AS_U32(local_a0);
    piVar8[3] = (int)ALBW_AS_U32(local_9c);
    break;
  case 5:
    iVar4 = *(int *)(param_1 + 0x4d8);
    iVar7 = *(int *)(param_1 + 0x4e4);
    piVar8[0x16] = *(int *)(param_1 + 0x4cc);
    piVar8[0x17] = iVar4;
    piVar8[0x18] = iVar7;
    break;
  case 6:
    piVar8[1] = (int)ALBW_AS_U32(local_a4);
    piVar8[2] = (int)ALBW_AS_U32(local_a0);
    piVar8[3] = (int)ALBW_AS_U32(local_9c);
    piVar8[0x16] = (int)ALBW_AS_U32((fVar11 * fVar10));
    break;
  case 7:
    piVar8[1] = (int)ALBW_AS_U32(local_a4);
    piVar8[2] = (int)ALBW_AS_U32(local_a0);
    piVar8[3] = (int)ALBW_AS_U32(local_9c);
    piVar8[0x16] = (int)ALBW_AS_U32(fVar11);
    piVar8[0x17] = (int)ALBW_AS_U32(fparam_0);
    piVar8[0x18] = (int)ALBW_AS_U32(fVar12);
    break;
  case 8:
    piVar8[1] = (int)ALBW_AS_U32(local_a4);
    piVar8[2] = (int)ALBW_AS_U32(local_a0);
    piVar8[3] = (int)ALBW_AS_U32(local_9c);
    func_001151CC(piVar8 + 0x19,pfVar9);
    piVar8[0x16] = (int)ALBW_AS_U32(fVar11);
    piVar8[0x17] = (int)ALBW_AS_U32(fparam_0);
    piVar8[0x18] = (int)ALBW_AS_U32(fVar12);
    break;
  case 9:
    local_64 = *(float *)(param_1 + 0x4cc);
    local_60 = *(float *)(param_1 + 0x4d8);
    local_5c = *(float *)(param_1 + 0x4e4);
    func_00115D70(&local_54,&local_64,fparam_0);
    local_98 = local_54;
    local_94 = local_50;
    local_90 = local_4c;
    func_00115C54(&local_54,(float *)objStack_c0,&local_98);
    fVar10 = local_4c;
    fVar12 = local_54;
    fVar13 = local_50;
    func_00115D70(&local_54,&local_64,fparam_0);
    local_a8 = local_54;
    local_a4 = local_50;
    local_a0 = local_4c;
    func_00115C70(&local_54,(float *)objStack_c0,&local_a8);
    piVar8[0x16] = (int)ALBW_AS_U32(fVar12);
    piVar8[0x17] = (int)ALBW_AS_U32(fVar13);
    piVar8[0x18] = (int)ALBW_AS_U32(fVar10);
    piVar8[0x19] = (int)ALBW_AS_U32(local_54);
    piVar8[0x1a] = (int)ALBW_AS_U32(local_50);
    piVar8[0x1b] = (int)ALBW_AS_U32(local_4c);
    piVar8[0x1c] = (int)ALBW_AS_U32((fVar11 * DAT_001c9510));
  }
  func_004356B4(piVar8);
  uVar2 = DAT_001c9518;
  iVar4 = *(int *)(param_1 + 0x430);
  cVar1 = '\0';
  if (iVar4 != 0) {
    cVar1 = *(char *)(iVar4 + 0x30);
  }
  if (iVar4 != 0 && cVar1 != '\0') {
    iVar4 = *(int *)(param_1 + 0x430);
    uVar5 = *(undefined4 *)(param_1 + 0x1c);
    *(uint *)(iVar4 + 0x164) = *(uint *)(iVar4 + 0x164) | 0x40000000;
    *(undefined4 *)(iVar4 + 0x74) = uVar2;
    *(undefined4 *)(iVar4 + 0x78) = uVar2;
    *(undefined4 *)(iVar4 + 0x7c) = uVar5;
    func_001151F8(&fStack_b0,pfVar9,(undefined4 *)(param_1 + 0x3d0));
    iVar4 = *(int *)(param_1 + 0x430);
    *(uint *)(iVar4 + 0x164) = *(uint *)(iVar4 + 0x164) | 0x40000000;
    func_001151EC((undefined4 *)(iVar4 + 0x80),&fStack_b0);
    func_004CEAF0(*(int *)(param_1 + 0x430));
  }
  if (1 < *(byte *)(param_1 + 0x410)) {
    objStack_c0[0] = 0;
    objStack_c0[1] = 0;
    iVar4 = func_0014E2A0(param_1,*(undefined4 *)(param_1 + 0x43c),param_1 + 0x4fc,0x100,0,0);
    piVar8 = DAT_001c951c;
    if ((iVar4 != 0) && (*DAT_001c951c != 0)) {
      local_a0 = *(float *)(param_1 + 0x4bc);
      local_9c = *(float *)(param_1 + 0x4c0);
      local_98 = *(float *)(param_1 + 0x4c4);
      local_6c = *(float *)(param_1 + 0x4b8);
      local_74 = DAT_001c9514;
      iVar4 = *(int *)(param_1 + 0x43c);
      local_70 = DAT_001c9514 + *(float *)(iVar4 + 0x5c);
      fVar10 = DAT_001c9514;
      func_00115CE4(&local_74,(float *)(iVar4 + 100),&local_74);
      func_00115C54(&local_74,&local_74,(float *)(param_1 + 0x3d0));
      pfVar9 = *(float **)(*piVar8 + 0x1c);
      local_5c = *pfVar9;
      fStack_58 = pfVar9[1];
      local_54 = pfVar9[2];
      local_64 = fVar10 + *(float *)(iVar4 + 0x5c);
      local_94 = fVar10;
      local_68 = fVar10;
      local_60 = fVar10;
      func_00115CE4(&local_68,(float *)(iVar4 + 100),&local_68);
      func_00115C54(&local_68,&local_68,(float *)(param_1 + 0x3d0));
      local_90 = local_68;
      fStack_8c = local_64;
      fStack_88 = local_60;
      local_84 = local_74;
      fStack_80 = local_70;
      fStack_7c = local_6c;
      func_0049EF80(&local_5c,&local_90,&local_94);
      local_50 = *(float *)(param_1 + 0x3d0) + (local_74 - *(float *)(param_1 + 0x3d0)) * local_94;
      local_4c = *(float *)(param_1 + 0x3d4) + (local_70 - *(float *)(param_1 + 0x3d4)) * local_94;
      local_48 = *(float *)(param_1 + 0x3d8) + (local_6c - *(float *)(param_1 + 0x3d8)) * local_94;
      func_00115C70(&local_44,&local_50,&local_5c);
      local_ac = local_44;
      local_a8 = fStack_40;
      local_a4 = fStack_3c;
      func_00115D88(&local_44,&local_ac,DAT_001c9594);
      local_b8 = local_44;
      fStack_b4 = fStack_40;
      fStack_b0 = fStack_3c;
      func_00115C54(&local_a0,&local_a0,&local_b8);
      local_9c = local_9c + DAT_001c9598;
      func_00115C70(&local_a0,&local_a0,*(float **)(*piVar8 + 0x20));
      func_002915B8(*piVar8,&local_a0);
    }
  }
  return;
}

