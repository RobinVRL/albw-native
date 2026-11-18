#include "ghidra_types.h"

extern int func_0048BAB8(int param_1,int param_2);
extern int func_004A1520();
extern undefined4 DAT_00493394;
extern int *DAT_00493398;

// USA 0049338C <- EU 00493364 (Ghidra, non-matching)
// GLOBAL DAT_00493394 undefined4
// GLOBAL DAT_00493398 int *

undefined4 * func_0049338C(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = DAT_00493394;
  if (*DAT_00493398 != 0) {
    func_0048BAB8(*DAT_00493398,(int)param_1);
  }
  puVar1 = func_004A1520(param_1);
  return puVar1;
}

