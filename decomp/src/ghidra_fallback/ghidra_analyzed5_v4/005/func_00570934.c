#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005709a8;
extern undefined4 *DAT_005709ac;
extern undefined4 DAT_005709b0;
extern uint *DAT_005709b4;
extern undefined4 *DAT_005709b8;
extern undefined4 DAT_005709bc;

// USA 00570934 <- EU 0057090C (Ghidra, non-matching)
// GLOBAL DAT_005709a8 uint *
// GLOBAL DAT_005709ac undefined4 *
// GLOBAL DAT_005709b0 undefined4
// GLOBAL DAT_005709b4 uint *
// GLOBAL DAT_005709b8 undefined4 *
// GLOBAL DAT_005709bc undefined4

undefined4 func_00570934(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005709a8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005709a8), iVar1 != 0)) {
    *DAT_005709ac = DAT_005709b0;
  }
  if (DAT_005709ac != param_2) {
    if (((*DAT_005709b4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005709b4), iVar1 != 0)) {
      *DAT_005709b8 = DAT_005709bc;
    }
    if (DAT_005709b8 != param_2) {
      return 0;
    }
  }
  return 1;
}

