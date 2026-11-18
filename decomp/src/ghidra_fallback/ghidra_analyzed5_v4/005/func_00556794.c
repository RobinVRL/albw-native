#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0055684c;
extern undefined4 *DAT_00556850;
extern undefined4 DAT_00556854;
extern uint *DAT_00556858;
extern undefined4 *DAT_0055685c;
extern undefined4 DAT_00556860;
extern uint *DAT_00556864;
extern undefined4 *DAT_00556868;
extern undefined4 DAT_0055686c;

// USA 00556794 <- EU 0055676C (Ghidra, non-matching)
// GLOBAL DAT_0055684c uint *
// GLOBAL DAT_00556850 undefined4 *
// GLOBAL DAT_00556854 undefined4
// GLOBAL DAT_00556858 uint *
// GLOBAL DAT_0055685c undefined4 *
// GLOBAL DAT_00556860 undefined4
// GLOBAL DAT_00556864 uint *
// GLOBAL DAT_00556868 undefined4 *
// GLOBAL DAT_0055686c undefined4

undefined4 func_00556794(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055684c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055684c), iVar1 != 0)) {
    *DAT_00556850 = DAT_00556854;
  }
  if (DAT_00556850 != param_2) {
    if (((*DAT_00556858 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00556858), iVar1 != 0)) {
      *DAT_0055685c = DAT_00556860;
    }
    if (DAT_0055685c != param_2) {
      if (((*DAT_00556864 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00556864), iVar1 != 0)) {
        *DAT_00556868 = DAT_0055686c;
      }
      if (DAT_00556868 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

