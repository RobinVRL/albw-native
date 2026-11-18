#include "ghidra_types.h"

extern int func_002A6B54(int param_1);
extern undefined4 DAT_002a4d80;
extern undefined4 DAT_002a4d84;

// USA 002A4D64 <- EU 002A4D40 (Ghidra, non-matching)
// GLOBAL DAT_002a4d80 undefined4
// GLOBAL DAT_002a4d84 undefined4

void func_002A4D64(int param_1)

{
  undefined4 uVar1;
  
  func_002A6B54(param_1);
  uVar1 = DAT_002a4d80;
  *(undefined1 *)(param_1 + 0xb98) = 0;
  *(undefined4 *)(param_1 + 0xb28) = uVar1;
  if (*(char *)(param_1 + 0xb96) == '\0') {
    *(short *)(*(int *)(param_1 + 0xa28) + 0x28) = (short)DAT_002a4d84;
  }
  return;
}

