#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_002F8DE4(int *param_1,int param_2,uint param_3,int param_4);
extern int func_004904CC(float fparam_0,float fparam_1);
extern float func_004FAD90(int param_1);
extern int func_0051D37C(int *param_1,int param_2,int param_3);
extern int func_00520FC0(void);
extern int DAT_00673cd0;

// USA 00673C3C <- EU 00673C14 (Ghidra, non-matching)
// GLOBAL DAT_00673cd0 int

void func_00673C3C(int *param_1)

{
  int iVar1;
  float *pfVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 ((float *)(albw_frame + 0xc))
  #define local_c (*(float *)(albw_frame + 0x14))
  if (*(char *)((int)param_1 + 0x911) == '\x06' || *(char *)((int)param_1 + 0x911) == '\b') {
    param_1[0x167] = param_1[0x167] & 0xfffffeff;
  }
  else {
    func_002F8DE4(param_1,3,5,0);
  }
  iVar1 = DAT_00673cd0;
  param_1[0xf7] = DAT_00673cd0;
  param_1[0xf9] = iVar1;
  param_1[0x25f] = 0x1e;
  pfVar2 = (float *)func_00520FC0();
  func_00115C70(local_14,pfVar2,(float *)(param_1 + 0xf4));
  local_18 = func_004904CC(local_14[0],local_c);
  local_18 = local_18 - param_1[0xfa];
  func_0051D37C(&local_18,-0x20000000,0x20000000);
  param_1[0x237] = local_18;
  if (param_1[0x260] != 0) {
    func_004FAD90((int)param_1);
  }
  return;
}

