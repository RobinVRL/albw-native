#include "ghidra_types.h"

extern int func_00660490(undefined4 *param_1,undefined1 param_2);
extern int DAT_002631a4;

// USA 00263124 <- EU 0026314C (Ghidra, non-matching)
// GLOBAL DAT_002631a4 int

undefined4 func_00263124(int param_1)

{
  if (*(char *)(*(int *)(param_1 + 0x510) + 4) == '\0') {
    if (0 < *(short *)(DAT_002631a4 + param_1)) {
      *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0x80;
      return func_00660490((undefined4 *)(param_1 + 0x8bc),10);
    }
    func_00660490((undefined4 *)(param_1 + 0x8bc),8);
  }
  return 0;
}

