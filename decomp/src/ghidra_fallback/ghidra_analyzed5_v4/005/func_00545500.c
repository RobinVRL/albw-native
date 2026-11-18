#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00628810(undefined4 *param_1);
extern uint *DAT_00545578;
extern undefined4 *DAT_0054557c;
extern undefined4 DAT_00545580;
extern uint *DAT_00545584;
extern undefined4 *DAT_00545588;
extern undefined4 DAT_0054558c;

// USA 00545500 <- EU 005454D8 (Ghidra, non-matching)
// GLOBAL DAT_00545578 uint *
// GLOBAL DAT_0054557c undefined4 *
// GLOBAL DAT_00545580 undefined4
// GLOBAL DAT_00545584 uint *
// GLOBAL DAT_00545588 undefined4 *
// GLOBAL DAT_0054558c undefined4

undefined4 func_00545500(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_00545578 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00545578), iVar1 != 0)) {
    *DAT_0054557c = DAT_00545580;
  }
  if (DAT_0054557c != param_2) {
    if (((*DAT_00545584 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00545584), iVar1 != 0)) {
      *DAT_00545588 = DAT_0054558c;
    }
    if (DAT_00545588 != param_2) {
      uVar2 = func_00628810(param_2);
      return uVar2;
    }
  }
  return 1;
}

