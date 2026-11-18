#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_001AB87C(int param_1);
extern int func_0058791C(int param_1,int *param_2);
extern int func_00588BE4(int param_1);
extern int func_0058A7D4(void);
extern int func_0065AC0C(undefined4 *param_1,undefined1 param_2);
extern float DAT_001ac064;
extern float DAT_001ac068;
extern float DAT_001ac06c;
extern float DAT_001ac070;
extern float DAT_001ac074;
extern int *DAT_001ac078;
extern int DAT_001ac090;
extern int *DAT_001ac094;
extern char s_SE_Poe_LAUGH_ATTACK_001ac098[];
extern char s_SE_Poe_LAUGH_FLY_001ac07c[];

// USA 001ABE78 <- EU 001ABE78 (Ghidra, non-matching)
// GLOBAL DAT_001ac064 float
// GLOBAL DAT_001ac068 float
// GLOBAL DAT_001ac06c float
// GLOBAL DAT_001ac070 float
// GLOBAL DAT_001ac074 float
// GLOBAL DAT_001ac078 int *
// GLOBAL DAT_001ac090 int
// GLOBAL DAT_001ac094 int *
// GLOBAL s_SE_Poe_LAUGH_ATTACK_001ac098 string
// GLOBAL s_SE_Poe_LAUGH_FLY_001ac07c string

void func_001ABE78(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(int *)(albw_frame + 0x0))
  #define local_3c (*(char * *)(albw_frame + 0x4))
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(char * *)(albw_frame + 0xc))
  #define local_30 (*(int *)(albw_frame + 0x10))
  #define local_2c (*(char * *)(albw_frame + 0x14))
  fVar11 = DAT_001ac06c;
  fVar8 = DAT_001ac068;
  fVar7 = ALBW_AS_F32(param_1[0x247]) + DAT_001ac064;
  param_1[0x247] = (int)ALBW_AS_U32(fVar7);
  if ((int)ALBW_AS_U32(fVar7) < 0x3f800000) {
    fVar9 = fVar8 - fVar7;
    fVar10 = fVar9 * DAT_001ac070;
    param_1[0xf7] =
         (int)ALBW_AS_U32(((ALBW_AS_F32(param_1[0x244]) * fVar9 * fVar9 + ALBW_AS_F32(param_1[0x241]) * fVar7 * fVar10 +
               ALBW_AS_F32(param_1[0x23e]) * fVar7 * fVar7) - ALBW_AS_F32(param_1[0xf4])));
    param_1[0xf8] = (int)ALBW_AS_U32(fVar11);
    param_1[0xf9] =
         (int)ALBW_AS_U32(((ALBW_AS_F32(param_1[0x246]) * fVar9 * fVar9 + ALBW_AS_F32(param_1[0x243]) * fVar7 * fVar10 +
               ALBW_AS_F32(param_1[0x240]) * fVar7 * fVar7) - ALBW_AS_F32(param_1[0xf6])));
  }
  else {
    param_1[0x247] = (int)ALBW_AS_U32(fVar8);
    param_1[0xf7] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0x23e]) - ALBW_AS_F32(param_1[0xf4])));
    param_1[0xf8] = (int)ALBW_AS_U32(fVar11);
    param_1[0xf9] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0x240]) - ALBW_AS_F32(param_1[0xf6])));
    func_0065AC0C(param_1 + 0x22f,3);
  }
  iVar3 = func_001AB87C((int)param_1);
  if (iVar3 == 0) {
    fVar11 = ALBW_AS_F32(param_1[0x26e]) + DAT_001ac074;
    param_1[0x26e] = (int)ALBW_AS_U32(fVar11);
    if ((int)ALBW_AS_U32(fVar11) < 0x3f800001) {
      fVar8 = fVar11;
    }
    param_1[0x26e] = (int)ALBW_AS_U32(fVar8);
  }
  else {
    fVar8 = ALBW_AS_F32(param_1[0x26e]) - DAT_001ac074;
    param_1[0x26e] = (int)ALBW_AS_U32(fVar8);
    if (fVar11 < fVar8) {
      fVar11 = fVar8;
    }
    param_1[0x26e] = (int)ALBW_AS_U32(fVar11);
  }
  if (param_1[0x103] != 0) {
    *(int *)(param_1[0x103] + 0x158) = param_1[0x26e];
  }
  iVar4 = func_00588BE4((int)param_1);
  piVar2 = DAT_001ac094;
  iVar3 = DAT_001ac090;
  if (iVar4 != *DAT_001ac078) {
    return;
  }
  local_3c = s_SE_Poe_LAUGH_FLY_001ac07c;
  local_40 = DAT_001ac090;
  iVar4 = func_0058791C(*DAT_001ac094,&local_40);
  if (iVar4 == 0) {
    local_34 = s_SE_Poe_LAUGH_ATTACK_001ac098;
    local_38 = iVar3;
    iVar4 = func_0058791C(*piVar2,&local_38);
    if (iVar4 == 0) {
      bVar1 = true;
      goto LAB_001ac014;
    }
  }
  bVar1 = false;
LAB_001ac014:
  if (bVar1) {
    puVar5 = (uint *)func_0058A7D4();
    uVar6 = func_00111A64(puVar5);
    if ((int)((ulonglong)uVar6 * 100 >> 0x20) == 0) {
      local_2c = s_SE_Poe_LAUGH_FLY_001ac07c;
      local_30 = iVar3;
      func_00150A84(param_1,&local_30,0);
    }
  }
  return;
}

