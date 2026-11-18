#include "ghidra_types.h"

extern int func_004E9CD4(int param_1);
extern int *DAT_0036b72c;
extern int *DAT_0036b730;

// USA 0036B708 <- EU 0036B6E4 (Ghidra, non-matching)
// GLOBAL DAT_0036b72c int *
// GLOBAL DAT_0036b730 int *

undefined4 func_0036B708(int param_1)

{
  *(ushort *)(*DAT_0036b72c + 0x33e) = *(ushort *)(*DAT_0036b72c + 0x33e) & 0xfff6;
  if (*(int *)(param_1 + 0xf0) == 2) {
    *(undefined4 *)(param_1 + 0xf0) = 3;
  }
  return func_004E9CD4(*DAT_0036b730);
}

