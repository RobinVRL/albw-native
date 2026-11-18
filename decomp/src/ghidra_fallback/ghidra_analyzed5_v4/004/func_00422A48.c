#include "ghidra_types.h"

extern int func_003FFE6C(int param_1,undefined4 *param_2);
extern int func_00522958(int param_1);
extern int *DAT_00422a8c;
extern undefined4 DAT_00422a90;

// USA 00422A48 <- EU 00422A28 (Ghidra, non-matching)
// GLOBAL DAT_00422a8c int *
// GLOBAL DAT_00422a90 undefined4

void func_00422A48(int param_1)

{
  int *piVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  piVar1 = DAT_00422a8c;
  iVar2 = func_00522958(*DAT_00422a8c);
  if (iVar2 != 0) {
    local_18 = *(undefined4 *)(*piVar1 + 0x10);
    uStack_14 = *(undefined4 *)(*piVar1 + 0x14);
    uStack_10 = DAT_00422a90;
    func_003FFE6C(*(int *)(**(int **)(param_1 + 0x1c) + 0x10),&local_18);
    *(byte *)(*(int *)(param_1 + 0x1c) + 0x70) = *(byte *)(*(int *)(param_1 + 0x1c) + 0x70) | 2;
  }
  return;
}

