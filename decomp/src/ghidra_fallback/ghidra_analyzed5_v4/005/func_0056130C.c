#include "ghidra_types.h"

extern int func_0010AC24(undefined4 param_1,undefined4 param_2);
extern undefined4 DAT_00561308;

// USA 0056130C <- EU 005612E4 (Ghidra, non-matching)
// GLOBAL DAT_00561308 undefined4

undefined4 func_0056130C(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    func_0010AC24(DAT_00561308,0x561300);
  }
  return *(undefined4 *)(param_1 + 4);
}

