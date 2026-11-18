#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_003931EC(undefined4 *param_1,uint param_2);
extern int func_004904CC(float fparam_0,float fparam_1);
extern float func_004F944C(void);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0058A8F0(int param_1);
extern int func_0065DF0C(int param_1,undefined4 param_2);
extern int func_0065DF78(int param_1);
extern int DAT_0065528c;
extern int DAT_00655290;
extern float DAT_00655294;

// USA 0065522C <- EU 00655204 (Ghidra, non-matching)
// GLOBAL DAT_0065528c int
// GLOBAL DAT_00655290 int
// GLOBAL DAT_00655294 float

void func_0065522C(int param_1)

{
  int iVar1;
  float fVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 ((float *)(albw_frame + 0x8))
  #define local_10 (*(float *)(albw_frame + 0x10))
  func_00115C70(local_18,(float *)(param_1 + 0x8bc),(float *)(param_1 + 0x3d0));
  iVar1 = func_004904CC(local_18[0],local_10);
  *(int *)(param_1 + 0x8d8) = iVar1;
  func_0051D2F4((int *)(param_1 + 1000),iVar1,DAT_00655290,DAT_0065528c,DAT_00655294);
  iVar1 = func_0058A8F0(param_1);
  if (iVar1 != 0) {
    fVar2 = func_004F944C();
    *(float *)(param_1 + 0x3e0) = fVar2;
    func_0065DF0C(param_1 + 0x8f0,7);
    func_003931EC((undefined4 *)(param_1 + 0x8f0),7);
    func_0065DF78(param_1 + 0x8f0);
  }
  return;
}

