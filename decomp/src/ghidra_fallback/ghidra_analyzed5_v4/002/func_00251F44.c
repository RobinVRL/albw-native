#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0014EEB8(int param_1,undefined4 *param_2,undefined4 param_3,float fparam_0);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_00520ED8(int param_1);
extern int func_00520FF8(int param_1);
extern int func_0052107C(int param_1);
extern int func_0065FCF8(undefined4 *param_1,undefined1 param_2);
extern float DAT_002520b4;
extern float DAT_002520b8;
extern float DAT_002520bc;
extern char *DAT_002520c0;
extern float DAT_002520c4;
extern float DAT_002520c8;
extern float DAT_002520cc;
extern undefined4 DAT_002520d0;
extern char *DAT_002520ec;
extern char s_SE_OBJ_FALL_WATER_FLAT_002520d4[];

// USA 00251F44 <- EU 00251F6C (Ghidra, non-matching)
// GLOBAL DAT_002520b4 float
// GLOBAL DAT_002520b8 float
// GLOBAL DAT_002520bc float
// GLOBAL DAT_002520c0 char *
// GLOBAL DAT_002520c4 float
// GLOBAL DAT_002520c8 float
// GLOBAL DAT_002520cc float
// GLOBAL DAT_002520d0 undefined4
// GLOBAL DAT_002520ec char *
// GLOBAL s_SE_OBJ_FALL_WATER_FLAT_002520d4 string

void func_00251F44(int *param_1)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(char * *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(char * *)(albw_frame + 0x10))
  fVar3 = DAT_002520b8;
  if (DAT_002520b8 < ALBW_AS_F32(param_1[0xf8]) - DAT_002520b4) {
    fVar3 = ALBW_AS_F32(param_1[0xf8]) - DAT_002520b4;
  }
  param_1[0xf8] = (int)ALBW_AS_U32(fVar3);
  fVar3 = DAT_002520bc;
  param_1[0xf7] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0xf7]) * DAT_002520bc));
  param_1[0xf9] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0xf9]) * fVar3));
  func_00115C54((float *)(param_1 + 0xf4),(float *)(param_1 + 0xf4),(float *)(param_1 + 0xf7));
  local_18 = DAT_002520c0;
  fVar4 = (DAT_002520cc * ((ALBW_AS_F32(param_1[0xf5]) - ALBW_AS_F32(param_1[0x153])) - ALBW_AS_F32(DAT_002520c0))) /
          DAT_002520c8 + DAT_002520c4;
  fVar3 = DAT_002520c4;
  if (0x3f800000 < (int)ALBW_AS_U32(fVar4)) {
    fVar3 = fVar4;
  }
  param_1[0x154] = (int)ALBW_AS_U32(fVar4);
  param_1[0x154] = (int)ALBW_AS_U32(fVar3);
  if (0xe < param_1[0x13f]) {
    local_14 = local_18;
    local_10 = local_18;
    func_0014EEB8((int)param_1,&local_18,DAT_002520d0,*(float *)(param_1[0x155] + 0x58));
    iVar2 = func_00520ED8((int)param_1);
    if (iVar2 == 0) {
      bVar1 = func_0052107C((int)param_1);
      if (!bVar1) {
        return;
      }
    }
    else {
      iVar2 = func_00520FF8((int)param_1);
      if (iVar2 == 0) {
        local_14 = s_SE_OBJ_FALL_WATER_FLAT_002520d4;
        local_18 = DAT_002520ec;
        func_00150A84(param_1,(int *)&local_18,0);
      }
    }
    func_0065FCF8(param_1 + 0x13f,4);
  }
  return;
}

