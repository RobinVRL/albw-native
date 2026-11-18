#include "ghidra_types.h"

extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);

// USA 003E1544 <- EU 003E1524 (Ghidra, non-matching)

void func_003E1544(int param_1)

{
  int iVar1;
  
  func_0010C0C0((int *)(param_1 + 0x70));
  iVar1 = *(int *)(param_1 + 0x30);
  while (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 0x11) = 3;
    iVar1 = *(int *)(iVar1 + 0x14);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined2 *)(param_1 + 0x34) = 0;
  *(undefined2 *)(param_1 + 0x36) = 0;
  func_0010C160((int *)(param_1 + 0x70));
  *(ushort *)(param_1 + 0x6c) = *(ushort *)(param_1 + 0x6c) | 0x8000;
  *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + 1;
  return;
}

