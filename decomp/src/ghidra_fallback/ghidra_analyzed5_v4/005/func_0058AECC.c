#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00201234(undefined4 *param_1);
extern uint *DAT_0058aef8;
extern undefined4 *DAT_0058aefc;
extern undefined4 DAT_0058af00;

// USA 0058AECC <- EU 0058AEA4 (Ghidra, non-matching)
// GLOBAL DAT_0058aef8 uint *
// GLOBAL DAT_0058aefc undefined4 *
// GLOBAL DAT_0058af00 undefined4

void func_0058AECC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0058aef8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058aef8), iVar1 != 0)) {
    *DAT_0058aefc = DAT_0058af00;
  }
  if (DAT_0058aefc != param_2) {
    func_00201234(param_2);
  }
  return;
}

