#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057e830;
extern undefined4 *DAT_0057e834;
extern undefined4 DAT_0057e838;
extern uint *DAT_0057e83c;
extern undefined4 *DAT_0057e840;
extern undefined4 DAT_0057e844;

// USA 0057E7BC <- EU 0057E794 (Ghidra, non-matching)
// GLOBAL DAT_0057e830 uint *
// GLOBAL DAT_0057e834 undefined4 *
// GLOBAL DAT_0057e838 undefined4
// GLOBAL DAT_0057e83c uint *
// GLOBAL DAT_0057e840 undefined4 *
// GLOBAL DAT_0057e844 undefined4

undefined4 func_0057E7BC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057e830 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057e830), iVar1 != 0)) {
    *DAT_0057e834 = DAT_0057e838;
  }
  if (DAT_0057e834 != param_2) {
    if (((*DAT_0057e83c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057e83c), iVar1 != 0)) {
      *DAT_0057e840 = DAT_0057e844;
    }
    if (DAT_0057e840 != param_2) {
      return 0;
    }
  }
  return 1;
}

