#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0049F090(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5, float *param_6,float fparam_0,float fparam_1);
extern float DAT_0049eeac;
extern float DAT_0049eeb0;

// USA 0049EE84 <- EU 0049EE5C (Ghidra, non-matching)
// GLOBAL DAT_0049eeac float
// GLOBAL DAT_0049eeb0 float

undefined4 func_0049EE84(float *param_1,float *param_2,float *param_3,float *param_4)

{
  undefined4 uVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define afStack_20 ((float *)(albw_frame + 0x0))
  func_00115C70(afStack_20,param_1 + 3,param_1);
  uVar1 = func_0049F090(param_1,afStack_20,param_2,param_2 + 3,param_3,param_4,DAT_0049eeb0,
                        DAT_0049eeac);
  return uVar1;
}

