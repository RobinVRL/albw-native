#include "ghidra_types.h"

extern int func_004A1520();
extern int func_00680970(void *param_1);
extern int DAT_0058e95c;

// USA 0058E960 <- EU 0058E938 (Ghidra, non-matching)
// GLOBAL DAT_0058e95c int

undefined4 func_0058E960(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = DAT_0058e95c + 0x24;
  param_1[-1] = DAT_0058e95c;
  *param_1 = iVar2;
  puVar1 = func_004A1520(param_1);
  return func_00680970(puVar1 + -1);
}

