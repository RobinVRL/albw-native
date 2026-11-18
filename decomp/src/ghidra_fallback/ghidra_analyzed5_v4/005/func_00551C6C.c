#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00551d24;
extern undefined4 *DAT_00551d28;
extern undefined4 DAT_00551d2c;
extern uint *DAT_00551d30;
extern undefined4 *DAT_00551d34;
extern undefined4 DAT_00551d38;
extern uint *DAT_00551d3c;
extern undefined4 *DAT_00551d40;
extern undefined4 DAT_00551d44;

// USA 00551C6C <- EU 00551C44 (Ghidra, non-matching)
// GLOBAL DAT_00551d24 uint *
// GLOBAL DAT_00551d28 undefined4 *
// GLOBAL DAT_00551d2c undefined4
// GLOBAL DAT_00551d30 uint *
// GLOBAL DAT_00551d34 undefined4 *
// GLOBAL DAT_00551d38 undefined4
// GLOBAL DAT_00551d3c uint *
// GLOBAL DAT_00551d40 undefined4 *
// GLOBAL DAT_00551d44 undefined4

undefined4 func_00551C6C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00551d24 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00551d24), iVar1 != 0)) {
    *DAT_00551d28 = DAT_00551d2c;
  }
  if (DAT_00551d28 != param_2) {
    if (((*DAT_00551d30 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00551d30), iVar1 != 0)) {
      *DAT_00551d34 = DAT_00551d38;
    }
    if (DAT_00551d34 != param_2) {
      if (((*DAT_00551d3c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00551d3c), iVar1 != 0)) {
        *DAT_00551d40 = DAT_00551d44;
      }
      if (DAT_00551d40 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

