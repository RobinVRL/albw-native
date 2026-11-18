#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E6B34(undefined4 *param_1);
extern uint *DAT_0068d924;
extern undefined4 *DAT_0068d928;
extern undefined4 DAT_0068d92c;
extern uint *DAT_0068d930;
extern undefined4 *DAT_0068d934;
extern undefined4 DAT_0068d938;

// USA 0068D8AC <- EU 0068D884 (Ghidra, non-matching)
// GLOBAL DAT_0068d924 uint *
// GLOBAL DAT_0068d928 undefined4 *
// GLOBAL DAT_0068d92c undefined4
// GLOBAL DAT_0068d930 uint *
// GLOBAL DAT_0068d934 undefined4 *
// GLOBAL DAT_0068d938 undefined4

undefined4 func_0068D8AC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0068d924 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068d924), iVar1 != 0)) {
    *DAT_0068d928 = DAT_0068d92c;
  }
  if (DAT_0068d928 != param_2) {
    if (((*DAT_0068d930 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068d930), iVar1 != 0)) {
      *DAT_0068d934 = DAT_0068d938;
    }
    if (DAT_0068d934 != param_2) {
      uVar2 = func_001E6B34(param_2);
      return uVar2;
    }
  }
  return 1;
}

