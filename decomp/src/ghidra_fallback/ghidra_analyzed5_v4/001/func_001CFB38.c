#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0014EEC8(int param_1,uint param_2,undefined4 *param_3,undefined4 param_4,float fparam_0);
extern float *DAT_001cfbb8;
extern undefined4 DAT_001cfbbc;
extern float DAT_001cfbc0;

// USA 001CFB38 <- EU 001CFB38 (Ghidra, non-matching)
// GLOBAL DAT_001cfbb8 float *
// GLOBAL DAT_001cfbbc undefined4
// GLOBAL DAT_001cfbc0 float

bool func_001CFB38(int param_1,undefined4 param_2)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_2c (*(undefined4 *)(albw_frame + 0x4))
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0xc))
  #define local_20 (*(float *)(albw_frame + 0x10))
  #define fStack_1c (*(float *)(albw_frame + 0x14))
  #define fStack_18 (*(float *)(albw_frame + 0x18))
  local_20 = *DAT_001cfbb8;
  fStack_1c = DAT_001cfbb8[1];
  fStack_18 = DAT_001cfbb8[2];
  local_2c = DAT_001cfbbc;
  local_28 = DAT_001cfbc0;
  uStack_24 = DAT_001cfbbc;
  iVar1 = func_0014EEC8(param_1,(uint)&local_20,&local_2c,param_2,DAT_001cfbc0);
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x5dd) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x5dd) = 1;
    func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),&local_20);
    *(undefined1 *)(param_1 + 0x4c9) = 1;
    *(undefined1 *)(param_1 + 0x4c8) = 0;
  }
  return iVar1 != 0;
}

