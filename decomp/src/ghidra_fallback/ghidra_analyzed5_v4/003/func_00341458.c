#include "ghidra_types.h"

extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_003405D8(int param_1,float *param_2,float *param_3,undefined4 param_4);
extern float DAT_00341760;
extern float DAT_00341764;
extern float DAT_00341768;
extern float DAT_0034176c;
extern float DAT_00341770;
extern float DAT_00341774;
extern float DAT_00341778;

// USA 00341458 <- EU 00341434 (Ghidra, non-matching)
// GLOBAL DAT_00341760 float
// GLOBAL DAT_00341764 float
// GLOBAL DAT_00341768 float
// GLOBAL DAT_0034176c float
// GLOBAL DAT_00341770 float
// GLOBAL DAT_00341774 float
// GLOBAL DAT_00341778 float

void func_00341458(int param_1)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_68 (*(float *)(albw_frame + 0x8))
  #define local_64 (*(float *)(albw_frame + 0xc))
  #define local_60 (*(float *)(albw_frame + 0x10))
  #define uStack_5c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_58 (*(undefined4 *)(albw_frame + 0x18))
  #define local_54 (*(float *)(albw_frame + 0x1c))
  #define local_50 (*(float *)(albw_frame + 0x20))
  #define local_4c (*(float *)(albw_frame + 0x24))
  #define local_40 (*(float *)(albw_frame + 0x30))
  #define local_3c (*(float *)(albw_frame + 0x34))
  #define local_38 (*(float *)(albw_frame + 0x38))
  #define local_34 (*(float *)(albw_frame + 0x3c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x40))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x44))
  #define local_28 (*(float *)(albw_frame + 0x48))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x4c))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x50))
  if (*(int *)(param_1 + 0x3cc) == 0) {
    return;
  }
  pfVar1 = *(float **)(param_1 + 0x60);
  if (*pfVar1 == DAT_00341760) {
    bVar5 = false;
    if (pfVar1[1] == DAT_00341760) {
      bVar5 = pfVar1[2] == DAT_00341760;
    }
    if (bVar5) {
      return;
    }
  }
  if ((*(byte *)(param_1 + 0x324) & 1) != 0) {
    return;
  }
  local_54 = *pfVar1;
  local_50 = pfVar1[1];
  local_4c = pfVar1[2];
  fVar10 = DAT_00341760;
  func_00115DC8(&local_54);
  iVar4 = *(int *)(param_1 + 0x3cc);
  bVar5 = false;
  iVar2 = 0;
  if (iVar4 < 1) {
    return;
  }
  do {
    if ((*(char *)(param_1 + iVar2 + 0x3c0) != '\0') &&
       (iVar3 = param_1 + iVar2 * 0xc,
       (uint)ALBW_AS_U32(DAT_00341764) <
       (uint)ALBW_AS_U32((*(float *)(iVar3 + 0x348) * local_54 + *(float *)(iVar3 + 0x34c) * local_50 +
             *(float *)(iVar3 + 0x350) * local_4c)))) {
      bVar5 = true;
      iVar2 = iVar4;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < iVar4);
  if (!bVar5) {
    return;
  }
  local_68 = fVar10;
  local_64 = fVar10;
  func_00115154(&local_68,&local_64,**(uint **)(param_1 + 0x48));
  fVar10 = DAT_00341768;
  if (((*(uint *)(param_1 + 0x328) & 0x80) != 0) && (*(char *)(param_1 + 0x33c) == '\f')) {
    fVar10 = DAT_0034176c;
  }
  if (((*(uint *)(param_1 + 0x328) & 2) != 0) && (*(char *)(param_1 + 0x33c) == '\t')) {
    fVar10 = DAT_0034176c;
  }
  pfVar1 = *(float **)(param_1 + 0x3c);
  local_40 = *pfVar1 - local_64 * DAT_00341770;
  local_3c = pfVar1[1] + DAT_00341774;
  local_38 = pfVar1[2] + local_68 * DAT_00341770;
  fVar7 = DAT_00341770;
  fVar8 = DAT_00341778;
  fVar6 = DAT_00341774;
  func_00115D70(&local_28,&local_54,DAT_00341778);
  local_60 = local_28;
  uStack_5c = uStack_24;
  uStack_58 = uStack_20;
  func_00115C54(&local_28,&local_40,&local_60);
  local_34 = local_28;
  uStack_30 = uStack_24;
  uStack_2c = uStack_20;
  iVar2 = func_003405D8(param_1,&local_40,&local_34,0);
  if (iVar2 == 0) {
    pfVar1 = *(float **)(param_1 + 0x44);
    fVar6 = *pfVar1;
    fVar9 = SQRT(fVar6 * fVar6 + pfVar1[2] * pfVar1[2]);
    fVar6 = fVar6 - local_64 * fVar9;
    fVar8 = -fVar10;
    fVar7 = fVar8;
    if ((fVar8 <= fVar6) && (fVar7 = fVar6, fVar10 < fVar6)) {
      fVar7 = fVar10;
    }
    *pfVar1 = fVar7;
    iVar2 = *(int *)(param_1 + 0x44);
    fVar7 = *(float *)(iVar2 + 8) + local_68 * fVar9;
    if ((fVar7 < fVar8) || (fVar8 = fVar7, fVar7 <= fVar10)) goto LAB_0034179c;
  }
  else {
    pfVar1 = *(float **)(param_1 + 0x3c);
    local_38 = pfVar1[2] - local_68 * fVar7;
    local_40 = *pfVar1 + local_64 * fVar7;
    local_3c = pfVar1[1] + fVar6;
    func_00115D70(&local_28,&local_54,fVar8);
    local_60 = local_28;
    uStack_5c = uStack_24;
    uStack_58 = uStack_20;
    func_00115C54(&local_28,&local_40,&local_60);
    local_34 = local_28;
    uStack_30 = uStack_24;
    uStack_2c = uStack_20;
    iVar2 = func_003405D8(param_1,&local_40,&local_34,0);
    if (iVar2 != 0) {
      return;
    }
    pfVar1 = *(float **)(param_1 + 0x44);
    fVar6 = *pfVar1;
    fVar9 = SQRT(fVar6 * fVar6 + pfVar1[2] * pfVar1[2]);
    fVar6 = fVar6 + local_64 * fVar9;
    fVar8 = -fVar10;
    fVar7 = fVar8;
    if ((fVar8 <= fVar6) && (fVar7 = fVar6, fVar10 < fVar6)) {
      fVar7 = fVar10;
    }
    *pfVar1 = fVar7;
    iVar2 = *(int *)(param_1 + 0x44);
    fVar7 = *(float *)(iVar2 + 8) - local_68 * fVar9;
    if ((fVar7 < fVar8) || (fVar8 = fVar7, fVar7 <= fVar10)) goto LAB_0034179c;
  }
  fVar8 = fVar10;
LAB_0034179c:
  *(float *)(iVar2 + 8) = fVar8;
  return;
}

