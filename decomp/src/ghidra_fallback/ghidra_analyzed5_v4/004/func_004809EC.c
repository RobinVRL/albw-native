#include "ghidra_types.h"

extern int func_0012E708(int param_1,int param_2);
extern int func_0012EA38(int param_1);
extern int func_001B6C04(int param_1);
extern int *DAT_00480a34;

// USA 004809EC <- EU 004809C4 (Ghidra, non-matching)
// GLOBAL DAT_00480a34 int *

undefined4 func_004809EC(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  *(undefined1 *)(param_1 + 0xa6) = 1;
  iVar3 = *(int *)(param_1 + 0x54);
  for (iVar2 = *(int *)(param_1 + 0x4c); iVar2 = iVar2 - iVar3,
      iVar2 != (param_1 + 0x48) - *(int *)(param_1 + 0x54); iVar2 = *(int *)(iVar2 + iVar3 + 4)) {
    *(undefined1 *)(iVar2 + 0xe) = 1;
  }
  func_001B6C04(param_1);
  piVar1 = DAT_00480a34;
  *(undefined4 *)(param_1 + 0x11c) = 0xffffffff;
  *(undefined1 *)(param_1 + 0xa7) = 1;
  func_0012EA38(*piVar1);
  return func_0012E708(*piVar1,1);
}

