#include "ghidra_types.h"

extern int func_0030D010(int *param_1);
extern int func_0030DF20(int param_1);
extern int DAT_0058e464;

// USA 0058E460 <- EU 0058E438 (Ghidra, non-matching)
// GLOBAL DAT_0058e464 int

undefined4 func_0058E460(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = param_1 + -3;
  iVar2 = DAT_0058e464 + 0x58;
  *piVar1 = DAT_0058e464;
  *param_1 = iVar2;
  func_0030DF20((int)piVar1);
  return func_0030D010(piVar1);
}

