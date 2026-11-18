#include "ghidra_types.h"

extern int func_001788DC(int param_1,undefined4 *param_2);
extern int func_005568D4(int param_1);
extern int *DAT_00443a14;

// USA 0044399C <- EU 0044397C (Ghidra, non-matching)
// GLOBAL DAT_00443a14 int *

void func_0044399C(int param_1,undefined4 param_2,undefined1 param_3)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  
  *(undefined4 *)(param_1 + 0xd4) = param_2;
  uVar1 = func_005568D4(*DAT_00443a14);
  *(uint *)(param_1 + 0xd0) = (uint)uVar1;
  if (*(int *)(param_1 + 0xa4) != 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x9c) + 0x30) - (uint)uVar1;
    if (*(int *)(param_1 + 0xd4) < iVar2) {
      iVar2 = *(int *)(param_1 + 0xd4);
    }
    *(short *)(*(int *)(param_1 + 0xa0) + 0x60) = (short)iVar2;
    func_001788DC(*(int *)(param_1 + 0xa0),*(undefined4 **)(param_1 + 0xa8));
    iVar2 = *(int *)(param_1 + 0xa0);
    piVar3 = *(int **)(param_1 + 0xa4);
    *(undefined2 *)(iVar2 + 0x32) = 0;
    *(undefined1 *)(iVar2 + 0x3d) = 0;
    (**(code **)(*piVar3 + 0x60))
              (piVar3,*(undefined4 *)(*(int *)(param_1 + 0xa0) + 8),0,
               *(ushort *)(*(int *)(param_1 + 0xa0) + 0x20) >> 1);
  }
  *(undefined1 *)(param_1 + 0xd8) = param_3;
  *(undefined1 *)(param_1 + 0xe) = 1;
  return;
}

