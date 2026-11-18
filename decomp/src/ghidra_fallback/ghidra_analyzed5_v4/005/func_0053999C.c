#include "ghidra_types.h"

extern int func_0010A464(undefined4 *param_1);
extern int func_0025B66C(int param_1,float fparam_0);
extern int func_0025B874(undefined4 *param_1);
extern int func_00587FA0(int param_1,int param_2,int param_3);
extern int *DAT_005399c0;
extern float DAT_005399c4;

// USA 0053999C <- EU 00539974 (Ghidra, non-matching)
// GLOBAL DAT_005399c0 int *
// GLOBAL DAT_005399c4 float

undefined4 func_0053999C(undefined4 param_1,int param_2)

{
  _Alignas(8) unsigned char albw_frame[0x70];
  #define auStack_68 ((undefined4 *)(albw_frame + 0x8))
  if (param_2 == -1) {
    return 0;
  }
  func_0010A464(auStack_68);
  func_00587FA0(*DAT_005399c0,param_2,(int)auStack_68);
  func_0025B66C((int)auStack_68,DAT_005399c4);
  return func_0025B874(auStack_68);
}

