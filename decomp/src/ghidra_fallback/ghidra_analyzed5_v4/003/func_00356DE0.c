// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0035394C(int param_1,float *param_2,int param_3,float fparam_0);
extern int func_003541E4(int param_1,float *param_2);
extern int func_00556E64(int param_1);
extern int func_00666318(undefined4 *param_1,undefined1 param_2);
extern float DAT_00356e60;
extern int *DAT_00356e64;

// USA 00356DE0 <- EU 00356DBC (Ghidra, non-matching)
// GLOBAL DAT_00356e60 float
// GLOBAL DAT_00356e64 int *

void func_00356DE0(int param_1)

{
  bool bVar1;
  undefined1 uVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define fStack_18 (*(float *)(albw_frame + 0x8))
  #define local_14 (*(undefined4 *)(albw_frame + 0xc))
  func_003541E4(param_1,&fStack_18);
  local_14 = *(undefined4 *)(param_1 + 0xc);
  func_0035394C(param_1,&fStack_18,1,DAT_00356e60);
  if (*(uint *)(param_1 + 0x9f8) < *(uint *)(param_1 + 0x9fc)) {
    *(uint *)(param_1 + 0x9f8) = *(uint *)(param_1 + 0x9f8) + 1;
  }
  else if ((*DAT_00356e64 != 0) && (bVar1 = func_00556E64(*DAT_00356e64), !bVar1)) {
    if ((*(char *)(param_1 + 0x9f0) == '\x01') && (*(byte *)(param_1 + 0x9ef) < 2)) {
      uVar2 = 6;
    }
    else {
      *(undefined1 *)(param_1 + 0x9ef) = 0;
      uVar2 = 7;
    }
    func_00666318((undefined4 *)(param_1 + 0xa5c),uVar2);
  }
  return;
}

