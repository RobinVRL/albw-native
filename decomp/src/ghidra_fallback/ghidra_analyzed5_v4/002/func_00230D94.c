#include "ghidra_types.h"

extern int func_002E1B68(int param_1);
extern int *DAT_00230dcc;

// USA 00230D94 <- EU 00230D94 (Ghidra, non-matching)
// GLOBAL DAT_00230dcc int *

void func_00230D94(int param_1)

{
  func_002E1B68(param_1);
  *(ushort *)(*DAT_00230dcc + 0x33e) = *(ushort *)(*DAT_00230dcc + 0x33e) & 0xfff6;
  return;
}

