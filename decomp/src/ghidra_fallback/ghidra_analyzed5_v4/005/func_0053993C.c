// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0010A464(undefined4 *param_1);
extern int func_0025B66C(int param_1,float fparam_0);
extern int func_0025B788(int param_1,int param_2);
extern int func_0025B874(undefined4 *param_1);
extern int func_00587B7C(int param_1,int param_2,int param_3);
extern int *DAT_0053996c;
extern float DAT_00539970;

// USA 0053993C <- EU 00539914 (Ghidra, non-matching)
// GLOBAL DAT_0053996c int *
// GLOBAL DAT_00539970 float

undefined4 func_0053993C(undefined4 param_1,int param_2)

{
  _Alignas(8) unsigned char albw_frame[0x70];
  #define auStack_68 ((undefined4 *)(albw_frame + 0x8))
  if (param_2 == -1) {
    return 0;
  }
  func_0010A464(auStack_68);
  func_00587B7C(*DAT_0053996c,param_2,(int)auStack_68);
  func_0025B66C((int)auStack_68,DAT_00539970);
  func_0025B788((int)auStack_68,3);
  return func_0025B874(auStack_68);
}

