#include "ghidra_types.h"

extern int func_003FFE6C(int param_1,undefined4 *param_2);
extern int func_0066C0CC(undefined4 *param_1,char param_2);
extern int func_0068C794(float *param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3);
extern float DAT_00424d34;
extern float DAT_00424d38;
extern float DAT_00424d3c;

// USA 00424CC4 <- EU 00424CA4 (Ghidra, non-matching)
// GLOBAL DAT_00424d34 float
// GLOBAL DAT_00424d38 float
// GLOBAL DAT_00424d3c float

void func_00424CC4(int param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  iVar1 = *(int *)(**(int **)(param_1 + 0x1c) + 0x10);
  local_10 = *(undefined4 *)(iVar1 + 0x24);
  local_18 = *(float *)(iVar1 + 0x1c);
  uStack_14 = *(undefined4 *)(iVar1 + 0x20);
  iVar1 = func_0068C794(&local_18,*(float *)(param_1 + (uint)*(byte *)(param_1 + 0x78) * 4 + 0x54),
                        DAT_00424d3c,DAT_00424d38,DAT_00424d34);
  func_003FFE6C(*(int *)(**(int **)(param_1 + 0x1c) + 0x10),&local_18);
  *(byte *)(*(int *)(param_1 + 0x1c) + 0x70) = *(byte *)(*(int *)(param_1 + 0x1c) + 0x70) | 2;
  if (iVar1 != 0) {
    func_0066C0CC((undefined4 *)(param_1 + 0x20),'\x02');
  }
  return;
}

