#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern float DAT_0042da70;
extern float DAT_0042da74;

// USA 0042D8F4 <- EU 0042D8D4 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 float *
// GLOBAL DAT_0042da70 float
// GLOBAL DAT_0042da74 float

float func_0042D8F4(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 (*(float *)(albw_frame + 0x8))
  #define local_54 (*(float *)(albw_frame + 0xc))
  #define local_50 (*(float *)(albw_frame + 0x10))
  #define local_4c (*(float *)(albw_frame + 0x14))
  #define local_48 (*(float *)(albw_frame + 0x18))
  #define fStack_44 (*(float *)(albw_frame + 0x1c))
  #define local_40 (*(float *)(albw_frame + 0x20))
  #define fStack_3c (*(float *)(albw_frame + 0x24))
  #define fStack_38 (*(float *)(albw_frame + 0x28))
  #define local_34 (*(float *)(albw_frame + 0x2c))
  #define local_30 (*(float *)(albw_frame + 0x30))
  #define fStack_2c (*(float *)(albw_frame + 0x34))
  func_00115C70(&local_4c,param_3,param_2);
  local_58 = local_4c;
  local_54 = local_48;
  local_50 = fStack_44;
  fVar1 = func_00115DC8(&local_58);
  func_00115C70(&local_34,param_1,param_2);
  local_4c = local_34;
  local_48 = local_30;
  fStack_44 = fStack_2c;
  fparam_0 = local_58 * local_34 + local_54 * local_30 + local_50 * fStack_2c;
  func_00115D70(&local_34,&local_58,fparam_0);
  local_40 = local_34;
  fStack_3c = local_30;
  fStack_38 = fStack_2c;
  func_00115C54(&local_34,param_2,&local_40);
  local_4c = local_34;
  local_48 = local_30;
  fStack_44 = fStack_2c;
  func_00115C70(&local_34,param_1,&local_4c);
  fVar2 = local_34 * local_34 + local_30 * local_30 + fStack_2c * fStack_2c;
  if (DAT_0042da70 <= fparam_0) {
    if (fparam_0 <= fVar1) {
      if (param_4 != (float *)0x0) {
        *param_4 = fparam_0 / fVar1;
      }
    }
    else {
      if (param_4 != (float *)0x0) {
        *param_4 = DAT_0042da74;
      }
      func_00115C70(&local_4c,param_1,param_3);
      fVar2 = local_4c * local_4c + local_48 * local_48 + fStack_44 * fStack_44;
    }
  }
  else {
    if (param_4 != (float *)0x0) {
      *param_4 = DAT_0042da70;
    }
    func_00115C70(&local_4c,param_1,param_2);
    fVar2 = local_4c * local_4c + local_48 * local_48 + fStack_44 * fStack_44;
  }
  if (param_5 != (float *)0x0) {
    *param_5 = local_58;
    param_5[1] = local_54;
    param_5[2] = local_50;
  }
  return fVar2;
}

