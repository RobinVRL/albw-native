#include "ghidra_types.h"

extern undefined4 DAT_001d6910;
extern undefined4 DAT_001d6914;
extern int DAT_001d6918;
extern undefined4 DAT_001d691c;

// USA 001D68D0 <- EU 001D68D0 (Ghidra, non-matching)
// GLOBAL DAT_001d6910 undefined4
// GLOBAL DAT_001d6914 undefined4
// GLOBAL DAT_001d6918 int
// GLOBAL DAT_001d691c undefined4

void func_001D68D0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = DAT_001d6918;
  uVar1 = DAT_001d6910;
  *(undefined4 *)(param_1 + 0x3dc) = DAT_001d6910;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  *(undefined4 *)(param_1 + 0x3e0) = DAT_001d6914;
  *(undefined2 *)(iVar2 + param_1) = 0;
  uVar1 = DAT_001d691c;
  *(undefined4 *)(param_1 + 0x54c) = 3;
  *(undefined4 *)(param_1 + 0x550) = uVar1;
  *(undefined4 *)(param_1 + 0x548) = 0;
  return;
}

