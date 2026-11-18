#include "ghidra_types.h"

extern int func_0066CB14(undefined4 *param_1,undefined1 param_2);

// USA 00445248 <- EU 00445228 (Ghidra, function missing from the decomp table)

/* WARNING: Unknown calling convention */

undefined4 func_00445248(int param_1)

{
  ushort uVar1;
  
  uVar1 = *(short *)(param_1 + 0x4b8) + 1;
  *(ushort *)(param_1 + 0x4b8) = uVar1;
  if (uVar1 < 0x3c) {
    return 0;
  }
  return func_0066CB14((undefined4 *)(param_1 + 0x74),1);
}

