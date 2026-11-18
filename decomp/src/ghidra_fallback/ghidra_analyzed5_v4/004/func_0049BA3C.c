#include "ghidra_types.h"

extern int func_00490C38(int param_1);
extern int func_0049FAD8(undefined4 *param_1);
extern int func_004A1520();
extern undefined4 DAT_0049ba60;
extern undefined4 DAT_0049ba64;

// USA 0049BA3C <- EU 0049BA14 (Ghidra, non-matching)
// GLOBAL DAT_0049ba60 undefined4
// GLOBAL DAT_0049ba64 undefined4

undefined4 func_0049BA3C(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = DAT_0049ba64;
  *param_1 = DAT_0049ba60;
  param_1[0x2f] = uVar1;
  func_00490C38((int)(param_1 + 0x2f));
  puVar2 = func_004A1520(param_1 + 0x2f);
  puVar2[-0x14] = uVar1;
  func_00490C38((int)(puVar2 + -0x14));
  puVar2 = func_004A1520(puVar2 + -0x14);
  return func_0049FAD8(puVar2 + -0x1b);
}

