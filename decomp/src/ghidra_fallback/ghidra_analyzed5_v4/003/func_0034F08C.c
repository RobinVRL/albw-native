#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115CA8(float *param_1,float *param_2,float *param_3);
extern float func_00115DC8(float *param_1);
extern int func_00115E10(float *param_1,float *param_2,float *param_3);
extern int func_004323A0(undefined4 *param_1,undefined4 *param_2);
extern int func_004356B4(int *param_1);
extern int func_0048B5D4(float *param_1,float *param_2,uint param_3);
extern int func_004904CC(float fparam_0,float fparam_1);
extern int func_00491B3C(float *param_1,float *param_2);
extern int func_00553EC4(undefined4 param_1,float *param_2,float *param_3,float *param_4,float *param_5, float *param_6,int ****param_7,int param_8);
extern int func_00554A2C(undefined4 param_1,float *param_2,uint param_3);
extern int *DAT_0034f4bc;
extern float DAT_0034f4c0;
extern float DAT_0034f4c4;
extern float DAT_0034f4c8;
extern float DAT_0034f4cc;
extern int DAT_0034f4d0;
extern float DAT_0034f4d4;
extern float DAT_0034f4d8;
extern float *DAT_0034f4dc;
extern int *DAT_0034f4e0;

// USA 0034F08C <- EU 0034F068 (Ghidra, non-matching)
// GLOBAL DAT_0034f4bc int *
// GLOBAL DAT_0034f4c0 float
// GLOBAL DAT_0034f4c4 float
// GLOBAL DAT_0034f4c8 float
// GLOBAL DAT_0034f4cc float
// GLOBAL DAT_0034f4d0 int
// GLOBAL DAT_0034f4d4 float
// GLOBAL DAT_0034f4d8 float
// GLOBAL DAT_0034f4dc float *
// GLOBAL DAT_0034f4e0 int *

void func_0034F08C(int param_1,float *param_2,int *param_3)

{
  _Alignas(8) unsigned char albw_frame[0x1b0]; /* entry_sp - 0x1b0 .. entry_sp + 0x0 */
#define stack0xfffffe58 (*(undefined4 *)(albw_frame + 0x8))
  undefined4 *puVar1;
  int iVar2;
  float *pfVar3;
  uint uVar4;
  uint in_fpscr;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  #define local_198 (*(float *)(albw_frame + 0x18))
  #define local_194 (*(float *)(albw_frame + 0x1c))
  #define local_190 (*(float *)(albw_frame + 0x20))
  #define local_18c (*(float *)(albw_frame + 0x24))
  #define local_188 (*(undefined4 *)(albw_frame + 0x28))
  #define local_184 (*(float *)(albw_frame + 0x2c))
  #define local_180 (*(int *** *)(albw_frame + 0x30))
  #define uStack_17c (*(undefined4 *)(albw_frame + 0x34))
  #define uStack_178 (*(undefined4 *)(albw_frame + 0x38))
  #define local_118 (*(float *)(albw_frame + 0x98))
  #define local_114 (*(float *)(albw_frame + 0x9c))
  #define local_110 (*(float *)(albw_frame + 0xa0))
  #define local_10c (*(float *)(albw_frame + 0xa4))
  #define local_108 (*(int *** *)(albw_frame + 0xa8))
  #define uStack_104 (*(undefined4 *)(albw_frame + 0xac))
  #define uStack_100 (*(undefined4 *)(albw_frame + 0xb0))
  #define local_f8 (*(float *)(albw_frame + 0xb8))
  #define uStack_f4 (*(undefined4 *)(albw_frame + 0xbc))
  #define uStack_f0 (*(undefined4 *)(albw_frame + 0xc0))
  #define uStack_ec (*(undefined4 *)(albw_frame + 0xc4))
  #define uStack_e8 (*(undefined4 *)(albw_frame + 0xc8))
  #define uStack_e4 (*(undefined4 *)(albw_frame + 0xcc))
  #define afStack_e0 ((float *)(albw_frame + 0xd0))
  #define afStack_d0 ((float *)(albw_frame + 0xe0))
  #define afStack_a0 ((float *)(albw_frame + 0x110))
  #define local_70 (*(float *)(albw_frame + 0x140))
  #define local_6c (*(undefined4 *)(albw_frame + 0x144))
  #define local_68 (*(float *)(albw_frame + 0x148))
  #define afStack_64 ((float *)(albw_frame + 0x14c))
  #define afStack_58 ((float *)(albw_frame + 0x158))
  #define afStack_4c ((float *)(albw_frame + 0x164))
  #define afStack_40 ((float *)(albw_frame + 0x170))
  #define afStack_30 ((float *)(albw_frame + 0x180))
  local_18c = *(float *)(param_1 + 0x26c);
  local_188 = *(undefined4 *)(param_1 + 0x270);
  local_184 = *(float *)(param_1 + 0x274);
  local_198 = *(float *)(param_1 + 0x278);
  local_194 = *(float *)(param_1 + 0x27c);
  local_190 = *(float *)(param_1 + 0x280);
  *param_3 = 0;
  puVar1 = func_00554A2C(param_1,&local_18c,1);
  if (puVar1 == (undefined4 *)0x0) goto LAB_0034f49c;
  iVar2 = *(int *)(puVar1[0x103] + 0x18);
  local_f8 = *(float *)(iVar2 + 0x34);
  uStack_f4 = *(undefined4 *)(iVar2 + 0x38);
  uStack_f0 = *(undefined4 *)(iVar2 + 0x3c);
  uStack_ec = *(undefined4 *)(iVar2 + 0x40);
  uStack_e8 = *(undefined4 *)(iVar2 + 0x44);
  uStack_e4 = *(undefined4 *)(iVar2 + 0x48);
  local_70 = local_18c;
  local_6c = local_188;
  local_68 = local_184;
  uVar4 = **(int **)(*DAT_0034f4bc + 0x24) + 0x20000000;
  uVar5 = uVar4 >> 0x1e;
  if (uVar5 == 0) {
    local_68 = *(float *)(iVar2 + 0x48);
  }
  else if (uVar5 == 1) {
    local_70 = *(float *)(iVar2 + 0x40);
  }
  else if (uVar5 == 2) {
    local_68 = *(float *)(iVar2 + 0x3c);
  }
  else if (uVar5 == 3) {
    local_70 = *(float *)(iVar2 + 0x34);
  }
  func_00115C70((float *)&local_180,&local_70,&local_18c);
  local_108 = local_180;
  uStack_104 = uStack_17c;
  uStack_100 = uStack_178;
  func_00115C54(&local_198,&local_198,(float *)&local_108);
  fVar7 = local_190;
  fVar6 = local_198;
  local_18c = local_70;
  local_188 = local_6c;
  uVar4 = uVar4 >> 0x1e;
  local_184 = local_68;
  if (uVar4 == 0) {
LAB_0034f1a8:
    uVar5 = in_fpscr & 0xfffffff;
    in_fpscr = uVar5 | (uint)(local_190 == local_68) << 0x1e;
    if (!SUB41(in_fpscr >> 0x1e,0)) {
      local_190 = local_68;
      local_18c = SQRT((local_70 - local_198) * (local_70 - local_198) +
                       (local_68 - fVar7) * (local_68 - fVar7));
      fVar8 = local_198 - local_18c;
      local_18c = local_198 + local_18c;
      fVar7 = local_18c - local_70;
      fVar6 = fVar8 - local_70;
      if (fVar7 <= DAT_0034f4c0) {
        fVar7 = -fVar7;
      }
      if (fVar6 <= DAT_0034f4c0) {
        fVar6 = -fVar6;
      }
      in_fpscr = uVar5 | (uint)(fVar6 <= fVar7) << 0x1d;
      if (SUB41(in_fpscr >> 0x1d,0)) {
        local_18c = fVar8;
      }
    }
  }
  else if (uVar4 == 1) {
LAB_0034f218:
    uVar5 = in_fpscr & 0xfffffff;
    in_fpscr = uVar5 | (uint)(local_198 == local_70) << 0x1e;
    if (!SUB41(in_fpscr >> 0x1e,0)) {
      local_198 = local_70;
      fVar7 = SQRT((local_70 - fVar6) * (local_70 - fVar6) +
                   (local_68 - local_190) * (local_68 - local_190));
      local_184 = local_190 + fVar7;
      fVar7 = local_190 - fVar7;
      fVar8 = local_184 - local_68;
      fVar6 = fVar7 - local_68;
      if (fVar8 <= DAT_0034f4c0) {
        fVar8 = -fVar8;
      }
      if (fVar6 <= DAT_0034f4c0) {
        fVar6 = -fVar6;
      }
      in_fpscr = uVar5 | (uint)(fVar6 <= fVar8) << 0x1d;
      if (SUB41(in_fpscr >> 0x1d,0)) {
        local_184 = fVar7;
      }
    }
  }
  else {
    if (uVar4 == 2) goto LAB_0034f1a8;
    if (uVar4 == 3) goto LAB_0034f218;
  }
  uVar5 = (uint)(*(float *)(param_1 + 0x1c8) * DAT_0034f4c4 * DAT_0034f4c8);
  pfVar3 = (float *)(DAT_0034f4d0 + (uVar5 >> 0x18) * 0x10);
  fVar6 = (float)VectorUnsignedToFloat(uVar5 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  fVar7 = (float)VectorUnsignedToFloat(uVar5 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  uVar5 = func_004904CC(((*pfVar3 + pfVar3[1] * fVar6 * DAT_0034f4cc) /
                        (pfVar3[2] + pfVar3[3] * fVar7 * DAT_0034f4cc)) * DAT_0034f4d4,DAT_0034f4d8)
  ;
  func_00115C70(afStack_e0,&local_198,&local_18c);
  func_00115E10((float *)&stack0xfffffe58,afStack_e0,DAT_0034f4dc);
  func_00115DC8((float *)&stack0xfffffe58);
  func_00115E10(afStack_40,(float *)&stack0xfffffe58,afStack_e0);
  func_00115DC8(afStack_40);
  func_0048B5D4(afStack_30,afStack_40,uVar5);
  func_00491B3C(afStack_d0,afStack_30);
  func_0048B5D4(afStack_30,afStack_40,-uVar5);
  func_00491B3C(afStack_a0,afStack_30);
  func_00115CA8(afStack_58,afStack_d0,afStack_e0);
  func_00115CA8(afStack_4c,afStack_a0,afStack_e0);
  local_118 = *(float *)(param_1 + 0x284);
  local_114 = *(float *)(param_1 + 0x288);
  local_110 = *(float *)(param_1 + 0x28c);
  local_10c = local_118 * local_198 + local_114 * local_194 + local_110 * local_190;
  func_004323A0(&local_180,&local_118);
  func_004356B4((int *)&local_180);
  if (*(char *)(param_1 + 0x26a) == '\x01') {
    func_00553EC4(param_1,afStack_64,&local_f8,&local_18c,afStack_58,afStack_e0,&local_180,0);
  }
  else {
    func_00553EC4(param_1,afStack_64,&local_f8,&local_18c,afStack_4c,afStack_e0,&local_180,1);
  }
  func_00115C54(&local_198,&local_198,afStack_64);
  iVar2 = func_004904CC(*(float *)(param_1 + 0x284),*(float *)(param_1 + 0x28c));
  *param_3 = iVar2 - *(int *)(*(int *)(*DAT_0034f4e0 + 0x18) + 0x1a8);
  *(int *)(param_1 + 0x38) = iVar2;
  *(undefined1 *)(param_1 + 0x167) = 1;
LAB_0034f49c:
  *param_2 = local_198;
  param_2[1] = local_194;
  param_2[2] = local_190;
  return;
}

