#include "ghidra_types.h"

extern undefined4 DAT_0036ea28;
extern undefined4 DAT_0036ea2c;
extern undefined4 DAT_0036ea30;

// USA 0036EA04 <- EU 0036E9E0 (Ghidra, non-matching)
// GLOBAL DAT_0036ea28 undefined4
// GLOBAL DAT_0036ea2c undefined4
// GLOBAL DAT_0036ea30 undefined4

void func_0036EA04(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x5c) = DAT_0036ea28;
  uVar1 = *(undefined4 *)(param_2 + 0x3d4);
  uVar2 = *(undefined4 *)(param_2 + 0x3d8);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x3d0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined1 *)(param_1 + 0x6b) = 1;
  *(undefined4 *)(param_1 + 0x40) = 0;
  uVar1 = DAT_0036ea2c;
  if (*(char *)(param_1 + 0x6a) == '\0') {
    uVar1 = DAT_0036ea30;
  }
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  *(undefined4 *)(param_1 + 100) = 0x3c;
  return;
}

