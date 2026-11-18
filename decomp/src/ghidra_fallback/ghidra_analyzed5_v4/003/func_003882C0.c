#include "ghidra_types.h"

extern int func_003E2E68(int param_1);
extern int func_004940D0(undefined4 param_1);
extern int func_004A1520();
extern undefined4 DAT_003882ec;
extern undefined4 DAT_003882f0;

// USA 003882C0 <- EU 0038829C (Ghidra, non-matching)
// GLOBAL DAT_003882ec undefined4
// GLOBAL DAT_003882f0 undefined4

undefined4 func_003882C0(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = DAT_003882ec;
  func_003E2E68((int)(param_1 + 0x14a));
  iVar1 = func_004940D0(param_1 + 0x14a);
  *(undefined4 *)(iVar1 + -0x528) = DAT_003882f0;
  return func_004A1520((undefined4 *)(iVar1 + -0x528));
}

