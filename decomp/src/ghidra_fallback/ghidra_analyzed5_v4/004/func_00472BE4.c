#include "ghidra_types.h"

extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_003FFE6C(int param_1,undefined4 *param_2);
extern undefined4 DAT_00472c3c;
extern float DAT_00472c40;

// USA 00472BE4 <- EU 00472BBC (Ghidra, non-matching)
// GLOBAL DAT_00472c3c undefined4
// GLOBAL DAT_00472c40 float

void func_00472BE4(int param_1,undefined4 *param_2,int param_3)

{
  float fparam_0;
  undefined2 uVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = DAT_00472c3c;
  func_003FFE6C(*(int *)(**(int **)(param_1 + 0x1c) + 0x10),&local_18);
  fparam_0 = DAT_00472c40;
  *(byte *)(*(int *)(param_1 + 0x1c) + 0x70) = *(byte *)(*(int *)(param_1 + 0x1c) + 0x70) | 2;
  if (param_3 == 0) {
    uVar1 = 2;
  }
  else {
    uVar1 = 3;
  }
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0xc6) = uVar1;
  *(undefined2 *)(param_1 + 0xc4) = 0;
  func_002317C0((undefined2 *)(param_1 + 0xc4),fparam_0);
  return;
}

