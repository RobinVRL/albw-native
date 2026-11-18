#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0055d208;
extern undefined4 *DAT_0055d20c;
extern undefined4 DAT_0055d210;
extern uint *DAT_0055d214;
extern undefined4 *DAT_0055d218;
extern undefined4 DAT_0055d21c;

// USA 0055D194 <- EU 0055D16C (Ghidra, non-matching)
// GLOBAL DAT_0055d208 uint *
// GLOBAL DAT_0055d20c undefined4 *
// GLOBAL DAT_0055d210 undefined4
// GLOBAL DAT_0055d214 uint *
// GLOBAL DAT_0055d218 undefined4 *
// GLOBAL DAT_0055d21c undefined4

undefined4 func_0055D194(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055d208 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055d208), iVar1 != 0)) {
    *DAT_0055d20c = DAT_0055d210;
  }
  if (DAT_0055d20c != param_2) {
    if (((*DAT_0055d214 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055d214), iVar1 != 0)) {
      *DAT_0055d218 = DAT_0055d21c;
    }
    if (DAT_0055d218 != param_2) {
      return 0;
    }
  }
  return 1;
}

