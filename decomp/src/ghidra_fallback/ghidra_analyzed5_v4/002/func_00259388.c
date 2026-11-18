#include "ghidra_types.h"

extern int func_0025B860(int param_1,int param_2,float fparam_0,float fparam_1);
extern int func_004EC988(int param_1,int *param_2,int param_3);
extern int func_00539200(int param_1);
extern int DAT_00259464;
extern int *DAT_00259468;
extern int DAT_0025946c;
extern int *DAT_00259470;
extern float DAT_00259474;
extern float DAT_00259478;
extern float DAT_0025947c;
extern float DAT_00259480;
extern float DAT_00259484;
extern char s_SE_ENV_VOLCANO_00259454[];

// USA 00259388 <- EU 002593B0 (Ghidra, non-matching)
// GLOBAL DAT_00259464 int
// GLOBAL DAT_00259468 int *
// GLOBAL DAT_0025946c int
// GLOBAL DAT_00259470 int *
// GLOBAL DAT_00259474 float
// GLOBAL DAT_00259478 float
// GLOBAL DAT_0025947c float
// GLOBAL DAT_00259480 float
// GLOBAL DAT_00259484 float
// GLOBAL s_SE_ENV_VOLCANO_00259454 string

void func_00259388(int param_1)

{
  bool bVar1;
  float fparam_0;
  float fparam_1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  local_c = s_SE_ENV_VOLCANO_00259454;
  local_10 = DAT_00259464;
  func_004EC988(*DAT_00259468,&local_10,param_1 + 0x78);
  bVar1 = func_00539200(param_1 + 0x78);
  if (bVar1) {
    fparam_1 = *(float *)(*(int *)(*DAT_00259470 + 0x1c) + 4);
    fparam_0 = DAT_00259474;
    if (((int)ALBW_AS_U32(fparam_1) <= DAT_0025946c) && (fparam_0 = DAT_0025947c, DAT_00259478 < fparam_1)) {
      fparam_1 = (DAT_00259480 - fparam_1) * DAT_0025947c;
      fparam_0 = DAT_00259474 - fparam_1 * DAT_00259484;
    }
    func_0025B860(param_1 + 0x78,0,fparam_0,fparam_1);
  }
  return;
}

