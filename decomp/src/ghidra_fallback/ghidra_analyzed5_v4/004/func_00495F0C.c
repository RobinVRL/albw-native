#include "ghidra_types.h"

extern int func_004950A0(int param_1,undefined4 *param_2,undefined4 *param_3);
extern int func_004950C4(int param_1,undefined4 *param_2,undefined4 *param_3);
extern int func_00495130(int param_1,float *param_2);
extern undefined4 DAT_00495fac;
extern undefined4 DAT_00495fb0;
extern undefined4 *DAT_00495fb4;
extern float DAT_00495fb8;
extern int *DAT_00495fbc;

// USA 00495F0C <- EU 00495EE4 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4 *
// PARAM param_6 Stack[0x4]:4 int
// GLOBAL DAT_00495fac undefined4
// GLOBAL DAT_00495fb0 undefined4
// GLOBAL DAT_00495fb4 undefined4 *
// GLOBAL DAT_00495fb8 float
// GLOBAL DAT_00495fbc int *

undefined4 func_00495F0C(undefined4 param_1,float *param_2,float *param_3,undefined4 *param_4,
                  undefined4 *param_5,int param_6)

{
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(float *)(albw_frame + 0x8))
  #define fStack_44 (*(float *)(albw_frame + 0xc))
  #define local_40 (*(float *)(albw_frame + 0x10))
  #define local_3c (*(float *)(albw_frame + 0x14))
  #define local_38 (*(float *)(albw_frame + 0x18))
  #define local_34 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x28))
  #define local_24 (*(undefined4 *)(albw_frame + 0x2c))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x30))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x34))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x38))
  #define local_14 (*(undefined1 *)(albw_frame + 0x3c))
  local_34 = *DAT_00495fb4;
  uStack_30 = DAT_00495fb4[1];
  uStack_2c = DAT_00495fb4[2];
  uStack_28 = DAT_00495fb4[3];
  local_24 = *DAT_00495fb4;
  uStack_20 = DAT_00495fb4[1];
  uStack_1c = DAT_00495fb4[2];
  uStack_18 = DAT_00495fb4[3];
  local_14 = 0;
  fStack_44 = param_2[1] - param_3[1] * DAT_00495fb8;
  local_40 = param_2[2];
  local_48 = *param_2 + *param_3 * DAT_00495fb8;
  local_3c = *param_3;
  local_38 = param_3[1];
  if (param_6 == 0) {
    func_004950C4((int)&local_48,param_4,param_5);
  }
  else {
    func_004950A0((int)&local_48,param_4,param_5);
  }
  return func_00495130(*DAT_00495fbc,&local_48);
}

