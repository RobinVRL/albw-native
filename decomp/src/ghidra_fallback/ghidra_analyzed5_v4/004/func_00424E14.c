#include "ghidra_types.h"

extern int func_002313DC(int param_1);
extern int func_003FFE6C(int param_1,undefined4 *param_2);
extern int *DAT_00424e74;

// USA 00424E14 <- EU 00424DF4 (Ghidra, non-matching)
// GLOBAL DAT_00424e74 int *

void func_00424E14(int param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  func_002313DC(param_1 + 0x48);
  *(undefined1 *)(param_1 + 0x78) = *(undefined1 *)(*DAT_00424e74 + 0x23a);
  iVar1 = *(int *)(**(int **)(param_1 + 0x1c) + 0x10);
  local_10 = *(undefined4 *)(iVar1 + 0x24);
  uStack_14 = *(undefined4 *)(iVar1 + 0x20);
  local_18 = *(undefined4 *)(param_1 + (uint)*(byte *)(param_1 + 0x78) * 4 + 0x54);
  func_003FFE6C(*(int *)(**(int **)(param_1 + 0x1c) + 0x10),&local_18);
  *(byte *)(*(int *)(param_1 + 0x1c) + 0x70) = *(byte *)(*(int *)(param_1 + 0x1c) + 0x70) | 2;
  return;
}

