#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0055bb08;
extern undefined4 *DAT_0055bb0c;
extern undefined4 DAT_0055bb10;
extern uint *DAT_0055bb14;
extern undefined4 *DAT_0055bb18;
extern undefined4 DAT_0055bb1c;
extern uint *DAT_0055bb20;
extern undefined4 *DAT_0055bb24;
extern undefined4 DAT_0055bb28;

// USA 0055BA50 <- EU 0055BA28 (Ghidra, non-matching)
// GLOBAL DAT_0055bb08 uint *
// GLOBAL DAT_0055bb0c undefined4 *
// GLOBAL DAT_0055bb10 undefined4
// GLOBAL DAT_0055bb14 uint *
// GLOBAL DAT_0055bb18 undefined4 *
// GLOBAL DAT_0055bb1c undefined4
// GLOBAL DAT_0055bb20 uint *
// GLOBAL DAT_0055bb24 undefined4 *
// GLOBAL DAT_0055bb28 undefined4

undefined4 func_0055BA50(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055bb08 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055bb08), iVar1 != 0)) {
    *DAT_0055bb0c = DAT_0055bb10;
  }
  if (DAT_0055bb0c != param_2) {
    if (((*DAT_0055bb14 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055bb14), iVar1 != 0)) {
      *DAT_0055bb18 = DAT_0055bb1c;
    }
    if (DAT_0055bb18 != param_2) {
      if (((*DAT_0055bb20 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055bb20), iVar1 != 0)) {
        *DAT_0055bb24 = DAT_0055bb28;
      }
      if (DAT_0055bb24 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

