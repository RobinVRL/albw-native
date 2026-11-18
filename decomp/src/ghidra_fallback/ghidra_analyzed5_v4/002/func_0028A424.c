#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0014EEC8(int param_1,uint param_2,undefined4 *param_3,undefined4 param_4,float fparam_0);
extern int func_00289F70(int param_1);
extern int func_00520EE4(int param_1);
extern int func_00520FF8(int param_1);
extern int func_00661708(undefined4 *param_1,undefined1 param_2);
extern float DAT_0028a528;
extern float *DAT_0028a52c;
extern undefined4 DAT_0028a530;
extern float DAT_0028a534;

// USA 0028A424 <- EU 0028A44C (Ghidra, non-matching)
// GLOBAL DAT_0028a528 float
// GLOBAL DAT_0028a52c float *
// GLOBAL DAT_0028a530 undefined4
// GLOBAL DAT_0028a534 float

undefined4 func_0028A424(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define fStack_14 (*(float *)(albw_frame + 0xc))
  #define fStack_10 (*(float *)(albw_frame + 0x10))
  *(float *)(param_1 + 0x3e0) = *(float *)(param_1 + 0x3e0) - DAT_0028a528;
  func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3dc));
  local_18 = *DAT_0028a52c;
  fStack_14 = DAT_0028a52c[1];
  fStack_10 = DAT_0028a52c[2];
  iVar1 = func_0014EEC8(param_1,(uint)&local_18,DAT_0028a52c,DAT_0028a530,DAT_0028a534);
  puVar2 = (undefined4 *)(param_1 + 0x4f4);
  if (iVar1 != 0) {
    func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),&local_18);
    func_00661708(puVar2,5);
  }
  iVar1 = func_00520EE4(param_1);
  if (iVar1 != 0) {
    return func_00661708(puVar2,8);
  }
  iVar1 = func_00520FF8(param_1);
  if (iVar1 != 0) {
    return func_00661708(puVar2,9);
  }
  return func_00289F70(param_1);
}

