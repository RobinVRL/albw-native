#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057dfa8;
extern undefined4 *DAT_0057dfac;
extern undefined4 DAT_0057dfb0;
extern uint *DAT_0057dfb4;
extern undefined4 *DAT_0057dfb8;
extern undefined4 DAT_0057dfbc;
extern uint *DAT_0057dfc0;
extern undefined4 *DAT_0057dfc4;
extern undefined4 DAT_0057dfc8;

// USA 0057DEF0 <- EU 0057DEC8 (Ghidra, non-matching)
// GLOBAL DAT_0057dfa8 uint *
// GLOBAL DAT_0057dfac undefined4 *
// GLOBAL DAT_0057dfb0 undefined4
// GLOBAL DAT_0057dfb4 uint *
// GLOBAL DAT_0057dfb8 undefined4 *
// GLOBAL DAT_0057dfbc undefined4
// GLOBAL DAT_0057dfc0 uint *
// GLOBAL DAT_0057dfc4 undefined4 *
// GLOBAL DAT_0057dfc8 undefined4

undefined4 func_0057DEF0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057dfa8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057dfa8), iVar1 != 0)) {
    *DAT_0057dfac = DAT_0057dfb0;
  }
  if (DAT_0057dfac != param_2) {
    if (((*DAT_0057dfb4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057dfb4), iVar1 != 0)) {
      *DAT_0057dfb8 = DAT_0057dfbc;
    }
    if (DAT_0057dfb8 != param_2) {
      if (((*DAT_0057dfc0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057dfc0), iVar1 != 0)) {
        *DAT_0057dfc4 = DAT_0057dfc8;
      }
      if (DAT_0057dfc4 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

