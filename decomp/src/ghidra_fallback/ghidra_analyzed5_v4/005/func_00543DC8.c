#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00543e3c;
extern undefined4 *DAT_00543e40;
extern undefined4 DAT_00543e44;
extern uint *DAT_00543e48;
extern undefined4 *DAT_00543e4c;
extern undefined4 DAT_00543e50;

// USA 00543DC8 <- EU 00543DA0 (Ghidra, non-matching)
// GLOBAL DAT_00543e3c uint *
// GLOBAL DAT_00543e40 undefined4 *
// GLOBAL DAT_00543e44 undefined4
// GLOBAL DAT_00543e48 uint *
// GLOBAL DAT_00543e4c undefined4 *
// GLOBAL DAT_00543e50 undefined4

undefined4 func_00543DC8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00543e3c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00543e3c), iVar1 != 0)) {
    *DAT_00543e40 = DAT_00543e44;
  }
  if (DAT_00543e40 != param_2) {
    if (((*DAT_00543e48 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00543e48), iVar1 != 0)) {
      *DAT_00543e4c = DAT_00543e50;
    }
    if (DAT_00543e4c != param_2) {
      return 0;
    }
  }
  return 1;
}

