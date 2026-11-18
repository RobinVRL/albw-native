#include "ghidra_types.h"

extern int func_004FC570();
extern int func_004FCDF4(int param_1,int param_2);
extern int func_004FD038(int param_1,undefined1 param_2);

// USA 002FC1A8 <- EU 002FC184 (Ghidra, non-matching)

undefined4 func_002FC1A8(int *param_1)

{
  param_1[0x167] = param_1[0x167] | 0x27;
  func_004FD038((int)(param_1 + 0x16a),1);
  func_004FC570(param_1);
  param_1[0x167] = param_1[0x167] | 0x82;
  return func_004FCDF4((int)(param_1 + 0x16a),1);
}

