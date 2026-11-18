#include "ghidra_types.h"

extern int func_0010CF7C(undefined4 *param_1,undefined1 param_2);
extern int *DAT_00258a14;
extern int *DAT_00258a18;
extern int *DAT_00258a1c;

// USA 00258998 <- EU 002589C0 (Ghidra, non-matching)
// GLOBAL DAT_00258a14 int *
// GLOBAL DAT_00258a18 int *
// GLOBAL DAT_00258a1c int *

undefined4 func_00258998(int param_1)

{
  if ((*DAT_00258a14 == 0) && (*(char *)(*DAT_00258a18 + 0x25) != '\x03')) {
    return func_0010CF7C((undefined4 *)(param_1 + 0x14),0);
  }
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(*DAT_00258a1c + 0x68);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  return 0;
}

