#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern float func_00115DC8(float *param_1);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_00187C38(int param_1);
extern int func_00188F3C(int param_1);
extern int func_001891A0(int *param_1);
extern int func_00520ED8(int param_1);
extern int func_00520EE4(int param_1);
extern int func_00520FF8(int param_1);
extern int func_00521018(int param_1);
extern int func_0052107C(int param_1);
extern int func_00659544(undefined4 *param_1,undefined1 param_2);
extern float DAT_00188b60;
extern float DAT_00188b64;
extern float DAT_00188b68;
extern float DAT_00188b6c;
extern char *DAT_00188b70;
extern float DAT_00188b74;
extern float DAT_00188b90;
extern float DAT_00188b94;
extern float DAT_00188b98;
extern undefined4 DAT_00188b9c;
extern undefined DAT_00188ba0;
extern float DAT_00188bb0;
extern int DAT_00188bb4;
extern char s_SE_OBJ_FALL_WATER_FLAT_00188b78[];
extern char s__SE_OBJ_LAND_00188ba3[];
extern char s_cf_00188ba3[];
extern undefined4 _DAT_00188ba0;

// USA 00188824 <- EU 00188824 (Ghidra, non-matching)
// GLOBAL DAT_00188b60 float
// GLOBAL DAT_00188b64 float
// GLOBAL DAT_00188b68 float
// GLOBAL DAT_00188b6c float
// GLOBAL DAT_00188b70 char *
// GLOBAL DAT_00188b74 float
// GLOBAL DAT_00188b90 float
// GLOBAL DAT_00188b94 float
// GLOBAL DAT_00188b98 float
// GLOBAL DAT_00188b9c undefined4
// GLOBAL DAT_00188ba0 undefined
// GLOBAL DAT_00188bb0 float
// GLOBAL DAT_00188bb4 int
// GLOBAL s_cf_00188ba3 string
// GLOBAL s_SE_OBJ_FALL_WATER_FLAT_00188b78 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_00188824(int *param_1)

{
  undefined4 uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  char *pcVar10;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  #define local_20 (*(float *)(albw_frame + 0x10))
  fVar7 = DAT_00188b60;
  uVar3 = param_1[0x148];
  uVar5 = param_1[0x149];
  if (uVar3 < uVar5) {
    param_1[0x148] = uVar3 + 1;
  }
  fVar8 = DAT_00188b68;
  if ((char)param_1[0x1b8] != '\x02') {
    fVar8 = DAT_00188b64;
  }
  if (fVar7 < ALBW_AS_F32(param_1[0xf8]) - fVar8) {
    fVar7 = ALBW_AS_F32(param_1[0xf8]) - fVar8;
  }
  param_1[0xf8] = (int)ALBW_AS_U32(fVar7);
  func_00115C54((float *)(param_1 + 0xf4),(float *)(param_1 + 0xf4),(float *)(param_1 + 0xf7));
  func_00188F3C((int)param_1);
  if (0xf < param_1[0x13f]) {
    *(undefined1 *)((int)param_1 + 0x5d5) = 1;
    *(undefined1 *)((int)param_1 + 0x639) = 0;
  }
  pcVar10 = DAT_00188b70;
  fVar7 = DAT_00188b6c;
  piVar6 = param_1 + 0x13f;
  param_1[0xf7] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0xf7]) + -ALBW_AS_F32(param_1[0xf7]) * DAT_00188b6c));
  param_1[0xf9] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0xf9]) + -ALBW_AS_F32(param_1[0xf9]) * fVar7));
  if ((uVar3 >= uVar5) && (iVar4 = func_00187C38((int)param_1), iVar4 != 0)) {
    iVar4 = func_00520EE4((int)param_1);
    if (iVar4 != 0) {
      return func_00659544(piVar6,8);
    }
    iVar4 = func_00520ED8((int)param_1);
    fVar7 = DAT_00188b74;
    if (iVar4 != 0) {
      iVar4 = func_00520FF8((int)param_1);
      if (iVar4 == 0) {
        local_24 = s_SE_OBJ_FALL_WATER_FLAT_00188b78;
        local_28 = fVar7;
        func_00150A84(param_1,(int *)&local_28,0);
      }
      return func_001891A0(param_1);
    }
    bVar2 = func_00521018((int)param_1);
    if (bVar2) {
      bVar2 = func_0052107C((int)param_1);
      fVar7 = DAT_00188b90;
      if (bVar2) {
        param_1[0xf8] = (int)ALBW_AS_U32(DAT_00188b90);
      }
      else {
        fVar7 = ALBW_AS_F32(param_1[0xf8]);
      }
      if (ALBW_AS_F32(pcVar10) < fVar7) {
        param_1[0xf8] = (int)ALBW_AS_U32((fVar7 * DAT_00188b94));
      }
      local_28 = ALBW_AS_F32(param_1[0x1a0]);
      local_20 = ALBW_AS_F32(param_1[0x1a2]);
      local_24 = pcVar10;
      func_00115DC8(&local_28);
      fVar7 = local_20 * DAT_00188b98;
      param_1[0xf7] = (int)ALBW_AS_U32((local_28 * DAT_00188b98));
      param_1[0xf9] = (int)ALBW_AS_U32(fVar7);
      uVar1 = DAT_00188b9c;
      iVar4 = param_1[0x1aa];
      *(undefined4 *)(iVar4 + 0x10) = *(undefined4 *)(iVar4 + 4);
      *(undefined4 *)(iVar4 + 0xc) = uVar1;
    }
    else {
      bVar2 = func_0052107C((int)param_1);
      if ((bVar2) && (fVar8 = ALBW_AS_F32(param_1[0xf8]), fVar8 <= ALBW_AS_F32(pcVar10))) {
        fVar9 = fVar8;
        if (fVar8 <= ALBW_AS_F32(pcVar10)) {
          fVar9 = -fVar8;
        }
        if ((int)ALBW_AS_U32(fVar9) < _DAT_00188ba0) {
          param_1[0xf7] = (int)pcVar10;
          param_1[0xf8] = (int)pcVar10;
          param_1[0xf9] = (int)pcVar10;
          func_00659544(piVar6,0);
          if (*(char *)((int)param_1 + 0x67d) == '\0') {
            local_24 = s__SE_OBJ_LAND_00188ba3 + 1;
            local_28 = fVar7;
            func_00150A84(param_1,(int *)&local_28,0);
            *(undefined1 *)((int)param_1 + 0x67d) = 1;
          }
        }
        else {
          if (fVar8 <= ALBW_AS_F32(pcVar10)) {
            fVar8 = -fVar8;
          }
          fVar8 = fVar8 * DAT_00188bb0;
          fVar9 = ALBW_AS_F32(param_1[0xf9]) * DAT_00188bb0;
          param_1[0xf7] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0xf7]) * DAT_00188bb0));
          param_1[0xf8] = (int)ALBW_AS_U32(fVar8);
          param_1[0xf9] = (int)ALBW_AS_U32(fVar9);
          local_24 = s__SE_OBJ_LAND_00188ba3 + 1;
          local_28 = fVar7;
          func_00150A84(param_1,(int *)&local_28,0);
          *(undefined1 *)((int)param_1 + 0x67d) = 1;
        }
      }
    }
  }
  if (DAT_00188bb4 <=
      (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0xf7]) * ALBW_AS_F32(param_1[0xf7]) +
            ALBW_AS_F32(param_1[0xf8]) * ALBW_AS_F32(param_1[0xf8]) +
           ALBW_AS_F32(param_1[0xf9]) * ALBW_AS_F32(param_1[0xf9])))) {
    return 0;
  }
  param_1[0xf7] = (int)pcVar10;
  param_1[0xf8] = (int)pcVar10;
  param_1[0xf9] = (int)pcVar10;
  return func_00659544(piVar6,0);
}

