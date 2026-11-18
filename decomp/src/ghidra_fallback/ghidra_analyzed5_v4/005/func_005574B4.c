#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00557528;
extern undefined4 *DAT_0055752c;
extern undefined4 DAT_00557530;
extern uint *DAT_00557534;
extern undefined4 *DAT_00557538;
extern undefined4 DAT_0055753c;

// USA 005574B4 <- EU 0055748C (Ghidra, non-matching)
// GLOBAL DAT_00557528 uint *
// GLOBAL DAT_0055752c undefined4 *
// GLOBAL DAT_00557530 undefined4
// GLOBAL DAT_00557534 uint *
// GLOBAL DAT_00557538 undefined4 *
// GLOBAL DAT_0055753c undefined4

undefined4 func_005574B4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00557528 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00557528), iVar1 != 0)) {
    *DAT_0055752c = DAT_00557530;
  }
  if (DAT_0055752c != param_2) {
    if (((*DAT_00557534 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00557534), iVar1 != 0)) {
      *DAT_00557538 = DAT_0055753c;
    }
    if (DAT_00557538 != param_2) {
      return 0;
    }
  }
  return 1;
}

