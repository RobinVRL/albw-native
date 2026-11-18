#include "ghidra_types.h"

extern int func_001660D0(int param_1);
extern int *DAT_002309c0;

// USA 00230958 <- EU 00230958 (Ghidra, non-matching)
// GLOBAL DAT_002309c0 int *

void func_00230958(int *param_1)

{
  int *piVar1;
  
  func_001660D0((int)param_1);
  *(undefined1 *)(param_1 + 0x3e) = 0;
  *(undefined1 *)((int)param_1 + 0xf9) = 0;
  *(undefined1 *)((int)param_1 + 0xfa) = 0;
  piVar1 = (int *)(**(code **)(*param_1 + 0x40))(param_1);
  (**(code **)(*piVar1 + 0x14))(piVar1);
  *(ushort *)(*DAT_002309c0 + 0x33e) = *(ushort *)(*DAT_002309c0 + 0x33e) & 0xfff6;
  return;
}

