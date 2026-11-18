#include "ghidra_types.h"

extern int func_00352128(int param_1,int *param_2,uint *param_3);
extern int func_004904CC(float fparam_0,float fparam_1);
extern float func_0049216C(float *param_1,uint *param_2,float *param_3);
extern int func_004A2D1C(int param_1,float *param_2);
extern int func_0058A378(undefined4 *param_1);
extern uint *DAT_002ae5f8;

// USA 002AE594 <- EU 002AE570 (Ghidra, non-matching)
// GLOBAL DAT_002ae5f8 uint *

void func_002AE594(int param_1,undefined4 *param_2)

{
  float *pfVar1;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_5c (*(uint *)(albw_frame + 0x4))
  #define local_58 (*(int *)(albw_frame + 0x8))
  #define uStack_54 (*(undefined4 *)(albw_frame + 0xc))
  #define local_50 (*(int *)(albw_frame + 0x10))
  #define local_4c (*(int *)(albw_frame + 0x14))
  #define afStack_48 ((float *)(albw_frame + 0x18))
  local_50 = 0;
  func_00352128(param_1 + 0x324,&local_50,DAT_002ae5f8);
  local_58 = func_004904CC(ALBW_AS_F32(param_2[6]),ALBW_AS_F32(param_2[8]));
  local_5c = 0;
  uStack_54 = 0;
  pfVar1 = (float *)func_0058A378(param_2);
  func_0049216C(afStack_48,&local_5c,pfVar1);
  if ((local_50 != 0) && (*(int *)(local_50 + 0x1c) == local_4c)) {
    func_004A2D1C(local_50,afStack_48);
  }
  return;
}

