#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0014FAFC(int param_1,uint param_2,float fparam_0);
extern int func_002A22CC(int param_1);
extern int func_004D7F70(float *param_1,uint param_2);
extern undefined4 DAT_002a3698;
extern float DAT_002a369c;
extern undefined4 DAT_002a36a0;

// USA 002A363C <- EU 002A3618 (Ghidra, non-matching)
// GLOBAL DAT_002a3698 undefined4
// GLOBAL DAT_002a369c float
// GLOBAL DAT_002a36a0 undefined4

bool func_002A363C(int param_1,uint param_2)

{
  bool bVar1;
  undefined4 uVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define local_1c (*(float *)(albw_frame + 0x4))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x8))
  uVar2 = *(undefined4 *)(param_1 + 0x3e0);
  func_0014FAFC(param_1,param_2,*(float *)(param_1 + 0xb24));
  *(undefined4 *)(param_1 + 0x3e0) = uVar2;
  local_20 = DAT_002a369c;
  local_1c = DAT_002a369c;
  uStack_18 = DAT_002a36a0;
  func_004D7F70(&local_20,param_2);
  func_00115C54((float *)(param_1 + 0xa78),&local_20,(float *)(param_1 + 0x3d0));
  bVar1 = func_002A22CC(param_1);
  return bVar1;
}

