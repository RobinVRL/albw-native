#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0055b938;
extern undefined4 *DAT_0055b93c;
extern undefined4 DAT_0055b940;
extern uint *DAT_0055b944;
extern undefined4 *DAT_0055b948;
extern undefined4 DAT_0055b94c;

// USA 0055B8C4 <- EU 0055B89C (Ghidra, non-matching)
// GLOBAL DAT_0055b938 uint *
// GLOBAL DAT_0055b93c undefined4 *
// GLOBAL DAT_0055b940 undefined4
// GLOBAL DAT_0055b944 uint *
// GLOBAL DAT_0055b948 undefined4 *
// GLOBAL DAT_0055b94c undefined4

undefined4 func_0055B8C4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055b938 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055b938), iVar1 != 0)) {
    *DAT_0055b93c = DAT_0055b940;
  }
  if (DAT_0055b93c != param_2) {
    if (((*DAT_0055b944 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055b944), iVar1 != 0)) {
      *DAT_0055b948 = DAT_0055b94c;
    }
    if (DAT_0055b948 != param_2) {
      return 0;
    }
  }
  return 1;
}

