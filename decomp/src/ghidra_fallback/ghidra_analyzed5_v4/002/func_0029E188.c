#include "ghidra_types.h"

extern int func_00490C38(int param_1);
extern int func_0049FAD8(undefined4 *param_1);
extern int func_004A1520();
extern undefined4 DAT_0048d1bc;
extern undefined4 DAT_0048d1c0;

// USA 0029E188 <- EU 0029E164 (Ghidra, non-matching)
// GLOBAL DAT_0048d1bc undefined4
// GLOBAL DAT_0048d1c0 undefined4

void func_0048D1B0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = DAT_0048d1bc;
  param_1[0x1b] = DAT_0048d1c0;
  func_00490C38((int)(param_1 + 0x1b));
  puVar1 = func_004A1520(param_1 + 0x1b);
  func_0049FAD8(puVar1 + -0x1b);
  return;
}

