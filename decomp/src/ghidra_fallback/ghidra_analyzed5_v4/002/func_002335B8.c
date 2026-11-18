#include "ghidra_types.h"

extern int func_00100950(int param_1,undefined *param_2,int param_3,int param_4);
extern undefined *DAT_002335dc;

// USA 002335B8 <- EU 002335B8 (Ghidra, non-matching)
// GLOBAL DAT_002335dc undefined *

int func_002335B8(int param_1)

{
  func_00100950(param_1 + 0x8c,DAT_002335dc,0x70,0x30);
  return param_1;
}

