#include "ghidra_types.h"

extern void func_001B6DE0(int param_1);
extern int func_0031C064(int param_1,uint param_2);
extern int func_004B9528(int param_1,int param_2);

// USA 00440388 <- EU 00440368 (Ghidra, non-matching)

void func_00440388(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x54);
  for (piVar1 = (int *)(*(int *)(param_1 + 0x4c) - iVar2);
      piVar1 != (int *)((param_1 + 0x48) - *(int *)(param_1 + 0x54));
      piVar1 = (int *)(*(int *)((int)piVar1 + iVar2 + 4) - iVar2)) {
    (**(code **)(*piVar1 + 0x34))(piVar1);
    *(undefined1 *)((int)piVar1 + 0xe) = 0;
    *(undefined1 *)((int)piVar1 + 0xd) = 0;
  }
  func_004B9528(param_1,*(int *)(param_1 + 0x16c));
  func_0031C064(*(int *)(param_1 + 0x16c),0);
  *(undefined4 *)(param_1 + 0x16c) = 0;
  func_001B6DE0(param_1);
  return;
}

