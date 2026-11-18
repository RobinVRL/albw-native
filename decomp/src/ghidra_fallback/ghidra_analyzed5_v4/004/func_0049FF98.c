#include "ghidra_types.h"

extern int func_00490C38(int param_1);
extern int func_0049FAD8(undefined4 *param_1);
extern int func_004A1520();
extern undefined4 DAT_0049fff4;
extern undefined4 DAT_0049fff8;
extern undefined4 DAT_0049fffc;

// USA 0049FF98 <- EU 0049FF70 (Ghidra, non-matching)
// GLOBAL DAT_0049fff4 undefined4
// GLOBAL DAT_0049fff8 undefined4
// GLOBAL DAT_0049fffc undefined4

undefined4 func_0049FF98(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = DAT_0049fff8;
  *param_1 = DAT_0049fff4;
  param_1[0x57] = uVar1;
  func_00490C38((int)(param_1 + 0x57));
  puVar2 = func_004A1520(param_1 + 0x57);
  puVar2[-0x57] = DAT_0049fffc;
  puVar2 = puVar2 + -0x14;
  *puVar2 = uVar1;
  func_00490C38((int)puVar2);
  puVar2 = func_004A1520(puVar2);
  puVar2[-0x14] = uVar1;
  func_00490C38((int)(puVar2 + -0x14));
  puVar2 = func_004A1520(puVar2 + -0x14);
  puVar2[-0x14] = uVar1;
  func_00490C38((int)(puVar2 + -0x14));
  puVar2 = func_004A1520(puVar2 + -0x14);
  return func_0049FAD8(puVar2 + -0x1b);
}

