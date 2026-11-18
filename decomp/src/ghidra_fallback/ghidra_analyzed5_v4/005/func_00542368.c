#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0021DD80(undefined4 *param_1);
extern uint *DAT_00542394;
extern undefined4 *DAT_00542398;
extern undefined4 DAT_0054239c;

// USA 00542368 <- EU 00542340 (Ghidra, non-matching)
// GLOBAL DAT_00542394 uint *
// GLOBAL DAT_00542398 undefined4 *
// GLOBAL DAT_0054239c undefined4

void func_00542368(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00542394 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00542394), iVar1 != 0)) {
    *DAT_00542398 = DAT_0054239c;
  }
  if (DAT_00542398 != param_2) {
    func_0021DD80(param_2);
  }
  return;
}

