#include "ghidra_types.h"

extern int func_004202DC(int param_1);
extern int func_004203E0(undefined4 *param_1);
extern undefined4 DAT_00421268;

// USA 0042125C <- EU 0042123C (Ghidra, non-matching)
// GLOBAL DAT_00421268 undefined4

undefined4 * func_0042125C(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = DAT_00421268;
  if (param_1[2] != 0) {
    func_004202DC((int)param_1);
  }
  puVar1 = func_004203E0(param_1);
  return puVar1;
}

