#include "ghidra_types.h"

extern int func_001512B4(int param_1,float *param_2);
extern int func_0058A8F0(int param_1);
extern int func_00661FE4(undefined4 *param_1,undefined1 param_2);

// USA 002A0714 <- EU 002A06F0 (Ghidra, non-matching)

void func_002A0714(int param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  *(undefined4 *)(param_1 + 0x960) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(param_1 + 0x964) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(param_1 + 0x968) = *(undefined4 *)(param_1 + 0x3d8);
  if (*(int *)(param_1 + 0x95c) != 0) {
    local_18 = *(float *)(param_1 + 0x960);
    uStack_14 = *(undefined4 *)(param_1 + 0x964);
    local_10 = *(undefined4 *)(param_1 + 0x968);
    func_001512B4(*(int *)(param_1 + 0x95c),&local_18);
  }
  iVar1 = func_0058A8F0(param_1);
  if (iVar1 != 0) {
    func_00661FE4((undefined4 *)(param_1 + 0x938),7);
  }
  return;
}

