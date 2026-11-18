#include "ghidra_types.h"

extern int func_004A1520();
extern undefined4 DAT_002937d0;

// USA 00293774 <- EU 0029379C (Ghidra, non-matching)
// GLOBAL DAT_002937d0 undefined4

undefined4 func_00293774(undefined4 *param_1)

{
  *param_1 = DAT_002937d0;
  *(undefined1 *)(param_1 + 0x32) = 1;
  (**(code **)(*(int *)param_1[0x12] + 8))((int *)param_1[0x12]);
  func_004A1520(param_1);
  return (undefined4)param_1;
}

