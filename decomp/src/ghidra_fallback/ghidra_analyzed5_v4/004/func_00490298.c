#include "ghidra_types.h"

extern int func_00490C38(int param_1);
extern int func_0049FAD8(undefined4 *param_1);
extern int func_004A1520();
extern undefined4 DAT_004902d4;
extern undefined4 DAT_004902d8;

// USA 00490298 <- EU 00490270 (Ghidra, non-matching)
// GLOBAL DAT_004902d4 undefined4
// GLOBAL DAT_004902d8 undefined4

undefined4 func_00490298(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = DAT_004902d8;
  *param_1 = DAT_004902d4;
  param_1[0x43] = uVar1;
  func_00490C38((int)(param_1 + 0x43));
  puVar2 = func_004A1520(param_1 + 0x43);
  puVar2[-0x14] = uVar1;
  func_00490C38((int)(puVar2 + -0x14));
  puVar2 = func_004A1520(puVar2 + -0x14);
  puVar2[-0x14] = uVar1;
  func_00490C38((int)(puVar2 + -0x14));
  puVar2 = func_004A1520(puVar2 + -0x14);
  return func_0049FAD8(puVar2 + -0x1b);
}

