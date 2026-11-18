#include "ghidra_types.h"

extern int func_0014ABEC(int param_1);
extern int *DAT_001c7228;

// USA 001C71BC <- EU 001C71BC (Ghidra, non-matching)
// GLOBAL DAT_001c7228 int *

undefined4 func_001C71BC(int param_1)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = param_1 + 0x400;
  bVar2 = *(char *)(param_1 + 0x446) == '\0';
  if (bVar2) {
    uVar1 = (uint)*(byte *)(param_1 + 0x418);
  }
  if (bVar2 && uVar1 == 3) {
    if (*(short *)(param_1 + 0x44) == -1) {
      func_0014ABEC(*DAT_001c7228);
      return 1;
    }
    *(undefined1 *)(param_1 + 0x445) = 1;
    *(char *)(param_1 + 0x450) = (char)*(undefined2 *)(param_1 + 0x42);
    *(int *)(param_1 + 0x454) = (int)*(short *)(param_1 + 0x44);
    *(short *)(param_1 + 0x458) = *(short *)(param_1 + 0x2c);
    *(char *)(param_1 + 0x45a) = (char)(*(short *)(param_1 + 0x2c) >> 7) + '\x01';
  }
  return 0;
}

