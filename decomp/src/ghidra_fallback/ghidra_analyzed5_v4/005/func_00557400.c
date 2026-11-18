#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00557474;
extern undefined4 *DAT_00557478;
extern undefined4 DAT_0055747c;
extern uint *DAT_00557480;
extern undefined4 *DAT_00557484;
extern undefined4 DAT_00557488;

// USA 00557400 <- EU 005573D8 (Ghidra, non-matching)
// GLOBAL DAT_00557474 uint *
// GLOBAL DAT_00557478 undefined4 *
// GLOBAL DAT_0055747c undefined4
// GLOBAL DAT_00557480 uint *
// GLOBAL DAT_00557484 undefined4 *
// GLOBAL DAT_00557488 undefined4

undefined4 func_00557400(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00557474 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00557474), iVar1 != 0)) {
    *DAT_00557478 = DAT_0055747c;
  }
  if (DAT_00557478 != param_2) {
    if (((*DAT_00557480 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00557480), iVar1 != 0)) {
      *DAT_00557484 = DAT_00557488;
    }
    if (DAT_00557484 != param_2) {
      return 0;
    }
  }
  return 1;
}

