#include "ghidra_types.h"

extern int func_001788DC(int param_1,undefined4 *param_2);
extern int func_001B6C04(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_004644D4(int param_1);
extern int *DAT_0046445c;
extern float DAT_00464460;

// USA 00464398 <- EU 00464370 (Ghidra, non-matching)
// GLOBAL DAT_0046445c int *
// GLOBAL DAT_00464460 float

void func_00464398(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *(int *)(param_1 + 0x54);
  for (iVar1 = *(int *)(param_1 + 0x4c) - iVar2;
      iVar1 != (param_1 + 0x48) - *(int *)(param_1 + 0x54);
      iVar1 = *(int *)(iVar1 + iVar2 + 4) - iVar2) {
    *(undefined1 *)(iVar1 + 0xe) = 1;
  }
  func_001B6C04(param_1);
  func_004644D4(param_1);
  *(undefined4 *)(param_1 + 0xb4) = 0xffffffff;
  if (((*(int *)(param_1 + 0x78) != 0) && (*(int *)(param_1 + 0x80) != 0)) &&
     (iVar1 = *(int *)(*DAT_0046445c + 0x338), iVar1 != -1)) {
    *(int *)(param_1 + 0xb4) = iVar1;
    *(short *)(*(int *)(param_1 + 0x78) + 0x60) = (short)iVar1;
    func_001788DC(*(int *)(param_1 + 0x78),*(undefined4 **)(param_1 + 0x7c));
    iVar1 = *(int *)(param_1 + 0x78);
    piVar3 = *(int **)(param_1 + 0x80);
    *(undefined2 *)(iVar1 + 0x32) = 0;
    *(undefined1 *)(iVar1 + 0x3d) = 0;
    (**(code **)(*piVar3 + 0x60))
              (piVar3,*(undefined4 *)(*(int *)(param_1 + 0x78) + 8),0,
               *(ushort *)(*(int *)(param_1 + 0x78) + 0x20) >> 1);
    *(byte *)(*(int *)(param_1 + 0x1c) + 0x70) = *(byte *)(*(int *)(param_1 + 0x1c) + 0x70) | 2;
  }
  func_002317C0((undefined2 *)(param_1 + 0x88),DAT_00464460);
  return;
}

