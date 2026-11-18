#include "ghidra_types.h"

extern int func_004A1520();
extern int DAT_0058e924;

// USA 0058E918 <- EU 0058E8F0 (Ghidra, non-matching)
// GLOBAL DAT_0058e924 int

undefined4 * func_0058E918(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = DAT_0058e924 + 0x34;
  param_1[-1] = DAT_0058e924;
  *param_1 = iVar2;
  (**(code **)(*(int *)param_1[4] + 0x14))((int *)param_1[4]);
  puVar1 = func_004A1520(param_1);
  return puVar1 + -1;
}

