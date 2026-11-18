#include "ghidra_types.h"

extern int func_003FD0C8(int param_1);
extern int func_0048FBB4(undefined4 *param_1);
extern int func_004A1520();
extern int DAT_0058e8ec;

// USA 0058E8D8 <- EU 0058E8B0 (Ghidra, non-matching)
// GLOBAL DAT_0058e8ec int

undefined4 func_0058E8D8(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = DAT_0058e8ec + 0x2c;
  param_1[-0x2d] = DAT_0058e8ec;
  *param_1 = iVar2;
  if (*(char *)((int)param_1 + 0x69) != '\0') {
    func_003FD0C8(param_1[4]);
  }
  puVar1 = func_004A1520(param_1);
  return func_0048FBB4(puVar1 + -0x2d);
}

