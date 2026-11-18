#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0062B7FC(undefined4 *param_1);
extern uint *DAT_0055618c;
extern undefined4 *DAT_00556190;
extern undefined4 DAT_00556194;
extern uint *DAT_00556198;
extern undefined4 *DAT_0055619c;
extern undefined4 DAT_005561a0;

// USA 00556114 <- EU 005560EC (Ghidra, non-matching)
// GLOBAL DAT_0055618c uint *
// GLOBAL DAT_00556190 undefined4 *
// GLOBAL DAT_00556194 undefined4
// GLOBAL DAT_00556198 uint *
// GLOBAL DAT_0055619c undefined4 *
// GLOBAL DAT_005561a0 undefined4

undefined4 func_00556114(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0055618c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055618c), iVar1 != 0)) {
    *DAT_00556190 = DAT_00556194;
  }
  if (DAT_00556190 != param_2) {
    if (((*DAT_00556198 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00556198), iVar1 != 0)) {
      *DAT_0055619c = DAT_005561a0;
    }
    if (DAT_0055619c != param_2) {
      uVar2 = func_0062B7FC(param_2);
      return uVar2;
    }
  }
  return 1;
}

