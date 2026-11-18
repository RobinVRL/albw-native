#include "ghidra_types.h"

extern int func_004A1520();
extern undefined4 DAT_004c6910;
extern undefined4 *DAT_004c6914;

// USA 004C68F0 <- EU 004C68C8 (Ghidra, non-matching)
// GLOBAL DAT_004c6910 undefined4
// GLOBAL DAT_004c6914 undefined4 *

undefined4 func_004C68F0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_004c6914;
  *param_1 = DAT_004c6910;
  if (param_1 == (undefined4 *)puVar1[1]) {
    puVar1[1] = 0;
    (**(code **)(*(int *)*puVar1 + 4))((int *)*puVar1);
    *puVar1 = 0;
  }
  func_004A1520(param_1);
  return (undefined4)param_1;
}

