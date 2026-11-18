// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0025B788(int param_1,int param_2);
extern int func_0025B860(int param_1,int param_2,float fparam_0,float fparam_1);
extern int func_004EC988(int param_1,int *param_2,int param_3);
extern int func_00539200(int param_1);
extern int DAT_00259550;
extern int *DAT_00259554;
extern int *DAT_00259558;
extern int DAT_0025955c;
extern float DAT_00259560;
extern float DAT_00259564;
extern float DAT_00259568;
extern float DAT_0025956c;
extern float DAT_00259570;
extern char s_SE_ENV_MOUNTAIN_WIND_00259538[];

// USA 00259460 <- EU 00259488 (Ghidra, non-matching)
// GLOBAL DAT_00259550 int
// GLOBAL DAT_00259554 int *
// GLOBAL DAT_00259558 int *
// GLOBAL DAT_0025955c int
// GLOBAL DAT_00259560 float
// GLOBAL DAT_00259564 float
// GLOBAL DAT_00259568 float
// GLOBAL DAT_0025956c float
// GLOBAL DAT_00259570 float
// GLOBAL s_SE_ENV_MOUNTAIN_WIND_00259538 string

void func_00259460(int param_1)

{
  bool bVar1;
  float fparam_0;
  float fparam_1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  local_c = s_SE_ENV_MOUNTAIN_WIND_00259538;
  local_10 = DAT_00259550;
  func_004EC988(*DAT_00259554,&local_10,param_1 + 0x78);
  bVar1 = func_00539200(param_1 + 0x78);
  if (bVar1) {
    func_0025B788(param_1 + 0x78,5);
    fparam_1 = *(float *)(*(int *)(*DAT_00259558 + 0x1c) + 4);
    fparam_0 = DAT_00259560;
    if (((int)ALBW_AS_U32(fparam_1) <= DAT_0025955c) && (fparam_0 = DAT_00259568, DAT_00259564 < fparam_1)) {
      fparam_1 = (DAT_0025956c - fparam_1) * DAT_00259568;
      fparam_0 = DAT_00259560 - fparam_1 * DAT_00259570;
    }
    func_0025B860(param_1 + 0x78,0,fparam_0,fparam_1);
  }
  return;
}

