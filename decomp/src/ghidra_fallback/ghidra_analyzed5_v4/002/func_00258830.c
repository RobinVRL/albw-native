#include "ghidra_types.h"

extern int func_0010CF7C(undefined4 *param_1,undefined1 param_2);
extern int *DAT_002588ac;
extern int *DAT_002588b0;
extern int *DAT_002588b4;

// USA 00258830 <- EU 00258858 (Ghidra, non-matching)
// GLOBAL DAT_002588ac int *
// GLOBAL DAT_002588b0 int *
// GLOBAL DAT_002588b4 int *

undefined4 func_00258830(int param_1)

{
  if ((*DAT_002588ac == 0) && (*(char *)(*DAT_002588b0 + 0x25) != '\x03')) {
    return func_0010CF7C((undefined4 *)(param_1 + 0x14),0);
  }
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(*DAT_002588b4 + 0x68);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  return 0;
}

