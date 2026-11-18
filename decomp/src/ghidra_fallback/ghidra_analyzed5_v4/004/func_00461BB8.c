#include "ghidra_types.h"

extern int func_00231448(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_0051B698(int param_1);
extern float DAT_00461bec;
extern int *DAT_00461bf0;

// USA 00461BB8 <- EU 00461B90 (Ghidra, non-matching)
// GLOBAL DAT_00461bec float
// GLOBAL DAT_00461bf0 int *

undefined4 func_00461BB8(int param_1)

{
  float fparam_0;
  
  func_00231448(param_1 + 0x38);
  fparam_0 = DAT_00461bec;
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0x3a) = 6;
  *(undefined2 *)(param_1 + 0x38) = 0;
  func_002317C0((undefined2 *)(param_1 + 0x38),fparam_0);
  func_002317C0((undefined2 *)(param_1 + 0x44),fparam_0);
  return func_0051B698(*DAT_00461bf0);
}

