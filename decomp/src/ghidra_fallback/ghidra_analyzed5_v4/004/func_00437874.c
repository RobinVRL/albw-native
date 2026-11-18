#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0068A3EC(float *param_1,float fparam_0);
extern undefined4 DAT_004378d4;

// USA 00437874 <- EU 00437854 (Ghidra, non-matching)
// GLOBAL DAT_004378d4 undefined4

bool func_00437874(float *param_1,float *param_2,float fparam_0)

{
  float fVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define local_1c (*(undefined4 *)(albw_frame + 0x4))
  #define local_18 (*(float *)(albw_frame + 0x8))
  func_00115C70(&local_20,param_1,param_2);
  local_1c = DAT_004378d4;
  fVar1 = SQRT(local_20 * local_20 + local_18 * local_18);
  if (fparam_0 < fVar1) {
    func_0068A3EC(&local_20,fparam_0);
    func_00115C54(param_1,&local_20,param_2);
  }
  return fparam_0 < fVar1;
}

