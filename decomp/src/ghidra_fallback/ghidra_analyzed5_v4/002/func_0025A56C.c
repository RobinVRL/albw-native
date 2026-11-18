// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0025B788(int param_1,int param_2);
extern int func_0025B860(int param_1,int param_2,float fparam_0,float fparam_1);
extern int func_004EC988(int param_1,int *param_2,int param_3);
extern int func_00539200(int param_1);
extern int DAT_0025a654;
extern int *DAT_0025a658;
extern int *DAT_0025a65c;
extern float DAT_0025a660;
extern float DAT_0025a664;
extern float DAT_0025a668;
extern float DAT_0025a66c;
extern float DAT_0025a670;
extern char s_SE_ENV_WATER_FALL_0025a640[];

// USA 0025A56C <- EU 0025A594 (Ghidra, non-matching)
// GLOBAL DAT_0025a654 int
// GLOBAL DAT_0025a658 int *
// GLOBAL DAT_0025a65c int *
// GLOBAL DAT_0025a660 float
// GLOBAL DAT_0025a664 float
// GLOBAL DAT_0025a668 float
// GLOBAL DAT_0025a66c float
// GLOBAL DAT_0025a670 float
// GLOBAL s_SE_ENV_WATER_FALL_0025a640 string

void func_0025A56C(int param_1)

{
  bool bVar1;
  float fparam_0;
  float fparam_1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  local_c = s_SE_ENV_WATER_FALL_0025a640;
  local_10 = DAT_0025a654;
  func_004EC988(*DAT_0025a658,&local_10,param_1 + 0x78);
  bVar1 = func_00539200(param_1 + 0x78);
  if (bVar1) {
    func_0025B788(param_1 + 0x78,5);
    fparam_1 = *(float *)(*(int *)(*DAT_0025a65c + 0x1c) + 8);
    fparam_0 = DAT_0025a660;
    if (((uint)ALBW_AS_U32(fparam_1) <= (uint)ALBW_AS_U32(DAT_0025a664)) &&
       (fparam_0 = DAT_0025a668, (int)ALBW_AS_U32(DAT_0025a664) - 0x3c0000U < (uint)ALBW_AS_U32(fparam_1))) {
      fparam_1 = (fparam_1 - DAT_0025a66c) * DAT_0025a660;
      fparam_0 = DAT_0025a660 - fparam_1 * DAT_0025a670;
    }
    func_0025B860(param_1 + 0x78,0,fparam_0,fparam_1);
  }
  return;
}

