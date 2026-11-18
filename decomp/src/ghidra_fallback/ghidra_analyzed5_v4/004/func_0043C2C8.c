#include "ghidra_types.h"

extern int func_0012C790(int param_1);
extern int func_001788DC(int param_1,undefined4 *param_2);
extern int func_001B6C04(int param_1);
extern int func_004B948C(int param_1,int param_2);
extern int *DAT_0043c3d0;

// USA 0043C2C8 <- EU 0043C2A8 (Ghidra, non-matching)
// GLOBAL DAT_0043c3d0 int *

void func_0043C2C8(int param_1)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  
  func_001B6C04(param_1);
  iVar1 = *(int *)(param_1 + 0x148);
  if (((iVar1 != 0) && (*(char *)(iVar1 + 0xd) == '\0')) && (*(char *)(iVar1 + 0xe) == '\0')) {
    *(undefined1 *)(iVar1 + 0xe) = 1;
    func_004B948C(param_1,*(int *)(param_1 + 0x148));
  }
  func_004B948C(param_1,*(int *)(param_1 + 0x158));
  *(undefined1 *)(*(int *)(param_1 + 0x158) + 0xe) = 1;
  func_004B948C(param_1,*(int *)(param_1 + 0x120));
  *(undefined1 *)(*(int *)(param_1 + 0x120) + 0xe) = 1;
  func_004B948C(param_1,*(int *)(param_1 + 0x130));
  *(undefined1 *)(*(int *)(param_1 + 0x130) + 0xe) = 1;
  func_004B948C(param_1,*(int *)(param_1 + 0x140));
  *(undefined1 *)(*(int *)(param_1 + 0x140) + 0xe) = 1;
  func_0012C790(*(int *)(param_1 + 0x144));
  *(undefined4 *)(param_1 + 0x170) = 0xffffffff;
  bVar3 = *(int *)(param_1 + 0xe4) != 0;
  iVar1 = 0;
  if (bVar3) {
    iVar1 = *(int *)(param_1 + 0xe8);
  }
  if ((bVar3 && iVar1 != 0) && (iVar1 = *(int *)(*DAT_0043c3d0 + 0x338), iVar1 != -1)) {
    *(int *)(param_1 + 0x170) = iVar1;
    *(short *)(*(int *)(param_1 + 0xe4) + 0x60) = (short)iVar1;
    func_001788DC(*(int *)(param_1 + 0xe4),(undefined4 *)(param_1 + 0xd4));
    iVar1 = *(int *)(param_1 + 0xe4);
    piVar2 = *(int **)(param_1 + 0xe8);
    *(undefined2 *)(iVar1 + 0x32) = 0;
    *(undefined1 *)(iVar1 + 0x3d) = 0;
    (**(code **)(*piVar2 + 0x60))
              (piVar2,*(undefined4 *)(*(int *)(param_1 + 0xe4) + 8),0,
               *(ushort *)(*(int *)(param_1 + 0xe4) + 0x20) >> 1);
    *(byte *)(*(int *)(param_1 + 0x1c) + 0x70) = *(byte *)(*(int *)(param_1 + 0x1c) + 0x70) | 2;
  }
  return;
}

