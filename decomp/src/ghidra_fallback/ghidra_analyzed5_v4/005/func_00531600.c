#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00201234(undefined4 *param_1);
extern uint *DAT_0053162c;
extern undefined4 *DAT_00531630;
extern undefined4 DAT_00531634;

// USA 00531600 <- EU 005315D8 (Ghidra, non-matching)
// GLOBAL DAT_0053162c uint *
// GLOBAL DAT_00531630 undefined4 *
// GLOBAL DAT_00531634 undefined4

void func_00531600(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0053162c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053162c), iVar1 != 0)) {
    *DAT_00531630 = DAT_00531634;
  }
  if (DAT_00531630 != param_2) {
    func_00201234(param_2);
  }
  return;
}

