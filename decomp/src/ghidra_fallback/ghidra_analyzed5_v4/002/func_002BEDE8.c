#include "ghidra_types.h"

extern int func_002BF3EC(int param_1);
extern int func_002C00A8(int param_1);

// USA 002BEDE8 <- EU 002BEDC4 (Ghidra, non-matching)

void func_002BEDE8(int param_1)

{
  ushort *puVar1;
  
  func_002BF3EC(param_1);
  if (*(char *)(param_1 + 0x3c) != '\x03') {
    func_002C00A8(*(int *)(param_1 + 0x14));
    puVar1 = (ushort *)(*(int *)(param_1 + 0x14) + 0x16);
    *puVar1 = *puVar1 & 0xffbf;
    *(undefined1 *)(param_1 + 0x5c) = 0;
  }
  return;
}

