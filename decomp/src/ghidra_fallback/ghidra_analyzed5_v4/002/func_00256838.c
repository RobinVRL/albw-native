#include "ghidra_types.h"

extern int func_0028C740(int param_1,int param_2);
extern int func_002D5D3C(void *param_1);
extern undefined4 DAT_00256834;

// GLOBAL DAT_00256834 undefined4
// USA 00256838 <- EU 0025680C (Ghidra, function missing from the decomp table)

undefined4 * func_00256838(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = DAT_00256834;
  func_0028C740(param_1[0x13],0);
  puVar1 = func_002D5D3C(param_1);
  return puVar1;
}

