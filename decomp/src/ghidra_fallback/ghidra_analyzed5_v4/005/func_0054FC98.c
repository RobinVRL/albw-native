#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_0032EF74(float *param_1,float *param_2,float *param_3);
extern float func_005500C0(float *param_1,int param_2);
extern float DAT_0054ff44;
extern float DAT_0054ff48;
extern uint *DAT_0054ff4c;
extern float *DAT_0054ff50;
extern float DAT_0054ff54;
extern int *DAT_0054ff58;
extern float *DAT_0054ff5c;
extern int DAT_0054ff60;

// USA 0054FC98 <- EU 0054FC70 (Ghidra, non-matching)
// GLOBAL DAT_0054ff44 float
// GLOBAL DAT_0054ff48 float
// GLOBAL DAT_0054ff4c uint *
// GLOBAL DAT_0054ff50 float *
// GLOBAL DAT_0054ff54 float
// GLOBAL DAT_0054ff58 int *
// GLOBAL DAT_0054ff5c float *
// GLOBAL DAT_0054ff60 int

undefined4 func_0054FC98(float *param_1,float *param_2,undefined1 *param_3,float fparam_0)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_90 (*(float *)(albw_frame + 0x0))
  #define local_8c (*(float *)(albw_frame + 0x4))
  #define local_88 (*(float *)(albw_frame + 0x8))
  #define local_84 (*(float *)(albw_frame + 0xc))
  #define fStack_80 (*(float *)(albw_frame + 0x10))
  #define fStack_7c (*(float *)(albw_frame + 0x14))
  #define afStack_78 ((float *)(albw_frame + 0x18))
  #define afStack_50 ((float *)(albw_frame + 0x40))
  fVar6 = ALBW_NAN_NEG;
  fVar5 = param_1[3];
  fVar1 = 0.0;
  if (0 < (int)ALBW_AS_U32(fVar5)) {
    fVar8 = DAT_0054ff44;
    do {
      pfVar2 = param_1 + 4;
      if ((uint)ALBW_AS_U32(fVar1) < 0x14) {
        pfVar2 = pfVar2 + (int)ALBW_AS_U32(fVar1) * 0xd;
      }
      fVar7 = SQRT((pfVar2[6] - *param_2) * (pfVar2[6] - *param_2) +
                   (pfVar2[8] - param_2[2]) * (pfVar2[8] - param_2[2]));
      if (fVar7 < fVar8) {
        fVar6 = fVar1;
        fVar8 = fVar7;
      }
      fVar1 = ALBW_AS_F32(((int)ALBW_AS_U32(fVar1) + 1));
    } while ((int)ALBW_AS_U32(fVar1) < (int)ALBW_AS_U32(fVar5));
  }
  if ((uint)ALBW_AS_U32(fVar5) <= (uint)ALBW_AS_U32(fVar6)) {
    fVar6 = 0.0;
  }
  pfVar2 = param_1;
  if ((uint)ALBW_AS_U32(fVar6) < (uint)ALBW_AS_U32(fVar5)) {
    pfVar2 = param_1 + 4;
    if ((uint)ALBW_AS_U32(fVar6) < 0x14) {
      pfVar2 = pfVar2 + (int)ALBW_AS_U32(fVar6) * 0xd;
    }
    pfVar2 = pfVar2 + 6;
  }
  local_90 = *pfVar2;
  local_8c = pfVar2[1];
  local_88 = pfVar2[2];
  fVar1 = DAT_0054ff48;
  if ((uint)ALBW_AS_U32(fVar6) < (uint)ALBW_AS_U32(param_1[3])) {
    pfVar2 = param_1 + 4;
    if ((uint)ALBW_AS_U32(fVar6) < 0x14) {
      pfVar2 = pfVar2 + (int)ALBW_AS_U32(fVar6) * 0xd;
    }
    pfVar2 = pfVar2 + 9;
  }
  else {
    pfVar2 = DAT_0054ff50;
    if (((*DAT_0054ff4c & 1) == 0) &&
       (iVar3 = func_00100174((int *)DAT_0054ff4c), fVar5 = DAT_0054ff54, pfVar2 = DAT_0054ff50,
       iVar3 != 0)) {
      *DAT_0054ff50 = fVar1;
      pfVar2[1] = fVar1;
      pfVar2[2] = fVar5;
      pfVar2 = DAT_0054ff50;
    }
  }
  local_84 = *pfVar2;
  fStack_80 = pfVar2[1];
  fStack_7c = pfVar2[2];
  func_00115D70(&local_84,&local_84,fparam_0);
  func_00115C54(&local_90,&local_90,&local_84);
  iVar3 = DAT_0054ff60;
  fVar5 = param_2[2];
  pfVar2 = DAT_0054ff5c;
  if (*DAT_0054ff58 != 0) {
    pfVar2 = *(float **)(*DAT_0054ff58 + 0x1c);
  }
  fVar12 = *pfVar2;
  fVar9 = pfVar2[1];
  fVar11 = pfVar2[2];
  fVar10 = local_90 - fVar12;
  fVar8 = local_8c - fVar9;
  fVar7 = local_88 - fVar11;
  fVar10 = fVar10 * fVar10 + fVar8 * fVar8 + fVar7 * fVar7;
  fVar8 = *param_2;
  fVar7 = param_2[1];
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
  }
  fVar8 = fVar8 - fVar12;
  fVar7 = fVar7 - fVar9;
  fVar5 = fVar5 - fVar11;
  fVar5 = fVar8 * fVar8 + fVar7 * fVar7 + fVar5 * fVar5;
  fVar8 = fVar10 - fVar5;
  if (fVar8 <= fVar1) {
    fVar8 = -fVar8;
  }
  if ((iVar3 <= (int)ALBW_AS_U32(fVar8)) && (fVar10 < fVar5)) {
    pfVar4 = param_1;
    if ((uint)ALBW_AS_U32(fVar6) < (uint)ALBW_AS_U32(param_1[3])) {
      pfVar4 = param_1 + 4;
      if ((uint)ALBW_AS_U32(fVar6) < 0x14) {
        pfVar4 = pfVar4 + (int)ALBW_AS_U32(fVar6) * 0xd;
      }
      pfVar4 = pfVar4 + 6;
    }
    func_0032EF74(afStack_78,pfVar4,&local_90);
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 1;
    }
    func_0032EF74(afStack_50,afStack_78,pfVar2);
    fVar8 = func_005500C0(afStack_78,afStack_50);
    fVar5 = param_1[3];
    if (fVar1 < fVar8) {
      fVar6 = ALBW_AS_F32(((int)ALBW_AS_U32(fVar6) + 1));
      if ((uint)ALBW_AS_U32(fVar5) <= (uint)ALBW_AS_U32(fVar6)) {
        fVar6 = 0.0;
      }
      return ALBW_AS_U32(fVar6);
    }
    fVar6 = ALBW_AS_F32(((int)ALBW_AS_U32(fVar6) + -1));
    if ((uint)ALBW_AS_U32(fVar5) <= (uint)ALBW_AS_U32(fVar6)) {
      fVar6 = ALBW_AS_F32(((int)ALBW_AS_U32(fVar5) + -1));
    }
    return ALBW_AS_U32(fVar6);
  }
  return ALBW_AS_U32(fVar6);
}

