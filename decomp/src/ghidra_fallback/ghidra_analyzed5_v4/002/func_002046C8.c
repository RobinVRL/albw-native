#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_0014EB3C(int param_1);
extern int func_004905E0(float fparam_0);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern float DAT_00204890;
extern float DAT_00204894;
extern float DAT_00204898;
extern float DAT_0020489c;

// USA 002046C8 <- EU 002046C8 (Ghidra, non-matching)
// GLOBAL DAT_00204890 float
// GLOBAL DAT_00204894 float
// GLOBAL DAT_00204898 float
// GLOBAL DAT_0020489c float

undefined4 func_002046C8(int param_1,float *param_2,int param_3,float fparam_0)

{
  int iVar1;
  float fVar2;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define local_20 (*(float *)(albw_frame + 0x10))
  func_0014EB3C(param_1);
  func_00115C70(&local_28,param_2,(float *)(param_1 + 0x3d0));
  local_24 = DAT_00204890;
  if (local_20 == DAT_00204890 && local_28 == DAT_00204890) {
    iVar1 = 0;
  }
  else if (local_20 < DAT_00204890) {
    if (local_28 < DAT_00204890) {
      if (local_28 < local_20) {
        iVar1 = func_004905E0(local_20 / local_28);
        iVar1 = -0x40000000 - iVar1;
      }
      else {
        iVar1 = func_004905E0(local_28 / local_20);
        iVar1 = iVar1 + -0x80000000;
      }
    }
    else {
      fVar2 = -local_20;
      if (fVar2 < local_28) {
        iVar1 = func_004905E0(fVar2 / local_28);
        iVar1 = iVar1 + 0x40000000;
      }
      else {
        iVar1 = func_004905E0(local_28 / fVar2);
        iVar1 = -0x80000000 - iVar1;
      }
    }
  }
  else if (local_28 < DAT_00204890) {
    fVar2 = -local_28;
    if (local_20 < fVar2) {
      iVar1 = func_004905E0(local_20 / fVar2);
      iVar1 = iVar1 + -0x40000000;
    }
    else {
      iVar1 = func_004905E0(fVar2 / local_20);
      iVar1 = -iVar1;
    }
  }
  else if (local_20 < local_28) {
    iVar1 = func_004905E0(local_20 / local_28);
    iVar1 = 0x40000000 - iVar1;
  }
  else {
    iVar1 = func_004905E0(local_28 / local_20);
  }
  func_0051D2F4((int *)(param_1 + 1000),iVar1,0,param_3,DAT_00204894);
  func_00115DC8(&local_28);
  return func_00115D70((float *)(param_1 + 0x3dc),(float *)(param_1 + 0x374),
                fparam_0 *
                (local_28 * *(float *)(param_1 + 0x374) + local_24 * *(float *)(param_1 + 0x378) +
                 local_20 * *(float *)(param_1 + 0x37c) + DAT_00204898) * DAT_0020489c);
}

