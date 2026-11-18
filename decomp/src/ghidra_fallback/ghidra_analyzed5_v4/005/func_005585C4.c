#include "ghidra_types.h"

extern int func_0051BB3C(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern int *DAT_005585d4;

// USA 005585C4 <- EU 0055859C (Ghidra, non-matching)
// GLOBAL DAT_005585d4 int *

void func_005585C4(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  func_0051BB3C(*DAT_005585d4,param_2,param_3,param_4);
  *(undefined1 *)(param_2 + 0x2400) = 1;
  *(undefined4 *)(param_2 + 0x23f4) = 0xffffffff;
  *(undefined1 *)(param_2 + 0x2401) = 1;
  return;
}

