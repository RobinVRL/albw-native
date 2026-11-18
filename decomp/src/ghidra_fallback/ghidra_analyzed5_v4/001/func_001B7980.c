#include "ghidra_types.h"

extern int func_0058FA5C();
extern undefined4 DAT_001b79e4;

// USA 001B7980 <- EU 001B7980 (Ghidra, non-matching)
// GLOBAL DAT_001b79e4 undefined4

undefined4 * func_001B7980(undefined4 *param_1)

{
  *param_1 = DAT_001b79e4;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined2 *)((int)param_1 + 6) = 0xffff;
  *(undefined2 *)(param_1 + 1) = 0xffff;
  if (param_1[8] != 0) {
    func_0058FA5C(param_1[8]);
  }
  if (param_1[9] != 0) {
    func_0058FA5C(param_1[9]);
  }
  param_1[8] = 0;
  param_1[9] = 0;
  return param_1;
}

