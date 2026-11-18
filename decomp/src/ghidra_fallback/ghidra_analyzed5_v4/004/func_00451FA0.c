#include "ghidra_types.h"

extern void func_001B6DE0(int param_1);

// USA 00451FA0 <- EU 00451F78 (Ghidra, non-matching)

void func_00451FA0(int param_1)

{
  char cVar1;
  int *piVar2;
  bool bVar3;
  
  func_001B6DE0(param_1);
  piVar2 = *(int **)(param_1 + 0x44);
  if (piVar2 != (int *)0x0) {
    cVar1 = *(char *)((int)piVar2 + 0xd);
    bVar3 = cVar1 == '\0';
    if (bVar3) {
      cVar1 = *(char *)((int)piVar2 + 0xe);
    }
    if (!bVar3 || cVar1 != '\0') {
      (**(code **)(*piVar2 + 0x34))(piVar2);
      *(undefined1 *)((int)piVar2 + 0xe) = 0;
      *(undefined1 *)((int)piVar2 + 0xd) = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x44) = 0;
  return;
}

