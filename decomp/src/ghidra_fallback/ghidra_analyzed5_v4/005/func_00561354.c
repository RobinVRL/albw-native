#include "ghidra_types.h"

extern int func_0010AC24(undefined4 param_1,undefined4 param_2);
extern undefined4 DAT_00561350;

// USA 00561354 <- EU 0056132C (Ghidra, non-matching)
// GLOBAL DAT_00561350 undefined4

undefined4 func_00561354(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    func_0010AC24(DAT_00561350,0x561348);
  }
  return *(undefined4 *)(param_1 + 4);
}

