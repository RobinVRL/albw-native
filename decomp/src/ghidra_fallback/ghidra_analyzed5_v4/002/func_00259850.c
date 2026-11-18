// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0025B788(int param_1,int param_2);
extern int func_0025B860(int param_1,int param_2,float fparam_0,float fparam_1);
extern int func_004EC988(int param_1,int *param_2,int param_3);
extern int func_00539200(int param_1);
extern int DAT_0025993c;
extern int *DAT_00259940;
extern int *DAT_00259944;
extern float DAT_00259948;
extern float DAT_0025994c;
extern float DAT_00259950;
extern float DAT_00259954;
extern float DAT_00259958;
extern float DAT_0025995c;
extern char s_SE_ENV_WATER_FALL_00259928[];

// USA 00259850 <- EU 00259878 (Ghidra, non-matching)
// GLOBAL DAT_0025993c int
// GLOBAL DAT_00259940 int *
// GLOBAL DAT_00259944 int *
// GLOBAL DAT_00259948 float
// GLOBAL DAT_0025994c float
// GLOBAL DAT_00259950 float
// GLOBAL DAT_00259954 float
// GLOBAL DAT_00259958 float
// GLOBAL DAT_0025995c float
// GLOBAL s_SE_ENV_WATER_FALL_00259928 string

void func_00259850(int param_1)

{
  bool bVar1;
  float fparam_0;
  float fparam_1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  local_c = s_SE_ENV_WATER_FALL_00259928;
  local_10 = DAT_0025993c;
  func_004EC988(*DAT_00259940,&local_10,param_1 + 0x78);
  bVar1 = func_00539200(param_1 + 0x78);
  if (bVar1) {
    func_0025B788(param_1 + 0x78,5);
    fparam_1 = *(float *)(*(int *)(*DAT_00259944 + 0x1c) + 8);
    fparam_0 = DAT_0025994c;
    if (((uint)ALBW_AS_U32(fparam_1) <= (uint)ALBW_AS_U32(DAT_00259948)) &&
       (fparam_0 = DAT_00259950, (int)ALBW_AS_U32(DAT_00259948) - 0x140000U < (uint)ALBW_AS_U32(fparam_1))) {
      fparam_1 = (fparam_1 - DAT_00259954) * DAT_00259958;
      fparam_0 = DAT_0025994c - fparam_1 * DAT_0025995c;
    }
    func_0025B860(param_1 + 0x78,0,fparam_0,fparam_1);
  }
  return;
}

