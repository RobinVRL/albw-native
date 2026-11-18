#include "ghidra_types.h"

extern int func_00115CA8(float *param_1,float *param_2,float *param_3);
extern int func_0048C028(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4);
extern int func_0051E5D8(int param_1);
extern int func_0057D2C4(int *param_1,float *param_2,float *param_3);
extern undefined4 *DAT_00588ea8;
extern int *DAT_00588eac;
extern float DAT_00588eb0;
extern float DAT_00588eb4;
extern int DAT_00588eb8;
extern float DAT_00588ebc;
extern float *DAT_00588ec0;

// USA 00588CFC <- EU 00588CD4 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 float *
// PARAM param_6 Stack[0x4]:4 int
// GLOBAL DAT_00588ea8 undefined4 *
// GLOBAL DAT_00588eac int *
// GLOBAL DAT_00588eb0 float
// GLOBAL DAT_00588eb4 float
// GLOBAL DAT_00588eb8 int
// GLOBAL DAT_00588ebc float
// GLOBAL DAT_00588ec0 float *

undefined4
func_00588CFC(undefined4 param_1,float *param_2,undefined4 *param_3,undefined4 *param_4,
             float *param_5,int param_6,float fparam_0,float fparam_1,float fparam_2)

{
  float fVar1;
  float *pfVar2;
  int *piVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define local_98 (*(int *)(albw_frame + 0x8))
  #define afStack_94 ((float *)(albw_frame + 0xc))
  #define local_40 (*(float *)(albw_frame + 0x60))
  #define local_3c (*(float *)(albw_frame + 0x64))
  #define afStack_34 ((float *)(albw_frame + 0x6c))
  func_0048C028(&local_98,param_4,param_3,DAT_00588ea8);
  (**(code **)(local_98 + 0x10))(&local_98,afStack_94);
  func_00115CA8(afStack_34,afStack_94,param_5);
  piVar3 = (int *)func_0051E5D8(*DAT_00588eac);
  func_0057D2C4(piVar3,&local_40,afStack_34);
  pfVar2 = DAT_00588ec0;
  fVar1 = DAT_00588eb0;
  if ((param_6 != 0 && fparam_2 != DAT_00588eb0) &&
     (((DAT_00588eb0 < local_3c && (*(float *)(param_6 + 8) < DAT_00588eb0)) ||
      ((local_3c < DAT_00588eb0 && (DAT_00588eb0 < *(float *)(param_6 + 8))))))) {
    fVar4 = *(float *)(param_6 + 8);
    if (fVar4 <= DAT_00588eb0) {
      fVar4 = -fVar4;
    }
    fparam_1 = fparam_1 - fVar4 * DAT_00588eb4 * fparam_2;
    if ((int)ALBW_AS_U32(fparam_1) < DAT_00588eb8) {
      fparam_1 = DAT_00588ebc;
    }
  }
  *param_2 = *DAT_00588ec0;
  param_2[1] = pfVar2[1];
  if ((((-fparam_0 <= local_40) && (local_40 <= fparam_0)) && (-fparam_1 <= local_3c)) &&
     (local_3c <= fparam_1)) {
    return 1;
  }
  if ((local_40 < -fparam_0) || (fparam_0 < local_40)) {
    local_40 = fparam_0 / local_40;
    if (local_40 <= fVar1) {
      local_40 = -local_40;
    }
    *param_2 = local_40;
  }
  if ((local_3c < -fparam_1) || (fparam_1 < local_3c)) {
    local_3c = fparam_1 / local_3c;
    if (local_3c <= fVar1) {
      local_3c = -local_3c;
    }
    param_2[1] = local_3c;
  }
  return 0;
}

