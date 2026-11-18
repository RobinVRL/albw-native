#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0014EEC8(int param_1,uint param_2,undefined4 *param_3,undefined4 param_4,float fparam_0);
extern int func_00289F70(int param_1);
extern int func_00661708(undefined4 *param_1,undefined1 param_2);
extern float DAT_0028a3d0;
extern float *DAT_0028a3d4;
extern undefined4 DAT_0028a3d8;
extern float DAT_0028a3dc;

// USA 0028A2E8 <- EU 0028A310 (Ghidra, non-matching)
// GLOBAL DAT_0028a3d0 float
// GLOBAL DAT_0028a3d4 float *
// GLOBAL DAT_0028a3d8 undefined4
// GLOBAL DAT_0028a3dc float

undefined4 func_0028A2E8(int param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define fStack_14 (*(float *)(albw_frame + 0xc))
  #define fStack_10 (*(float *)(albw_frame + 0x10))
  iVar1 = *(int *)(*(int *)(param_1 + 0x580) + 0x14);
  if (*(char *)(iVar1 + 0x1c) == '\0') {
    if (*(float *)(iVar1 + 0x10) < DAT_0028a3d0) {
      if (DAT_0028a3d0 < *(float *)(iVar1 + 8)) goto LAB_0028a380;
    }
    else if (*(float *)(iVar1 + 8) != *(float *)(iVar1 + 0x14)) goto LAB_0028a380;
    func_00661708((undefined4 *)(param_1 + 0x4f4),2);
  }
LAB_0028a380:
  local_18 = *DAT_0028a3d4;
  fStack_14 = DAT_0028a3d4[1];
  fStack_10 = DAT_0028a3d4[2];
  iVar1 = func_0014EEC8(param_1,(uint)&local_18,DAT_0028a3d4,DAT_0028a3d8,DAT_0028a3dc);
  if (iVar1 != 0) {
    func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),&local_18);
  }
  return func_00289F70(param_1);
}

