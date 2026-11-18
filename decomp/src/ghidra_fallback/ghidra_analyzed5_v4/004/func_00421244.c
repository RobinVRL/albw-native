#include "ghidra_types.h"

extern int func_00420308(undefined4 *param_1);
extern int DAT_00421238;

// USA 00421244 <- EU 00421224 (Ghidra, non-matching)
// GLOBAL DAT_00421238 int

int * func_00421244(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = func_00420308(param_1);
  *piVar1 = DAT_00421238;
  return piVar1;
}

