#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_003389CC(undefined4 *param_1);
extern uint *DAT_00560238;
extern undefined4 *DAT_0056023c;
extern undefined4 DAT_00560240;

// USA 0056020C <- EU 005601E4 (Ghidra, non-matching)
// GLOBAL DAT_00560238 uint *
// GLOBAL DAT_0056023c undefined4 *
// GLOBAL DAT_00560240 undefined4

void func_0056020C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00560238 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00560238), iVar1 != 0)) {
    *DAT_0056023c = DAT_00560240;
  }
  if (DAT_0056023c != param_2) {
    func_003389CC(param_2);
  }
  return;
}

