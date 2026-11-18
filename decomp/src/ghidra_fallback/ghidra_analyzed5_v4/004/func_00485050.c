#include "ghidra_types.h"

extern int func_0016656C(int param_1,int param_2);
extern int *DAT_004b9608;

// USA 00485050 <- EU 00485028 (Ghidra, non-matching)
// GLOBAL DAT_004b9608 int *

void func_004B9620(int param_1)

{
  func_0016656C(*DAT_004b9608,param_1);
  return;
}

