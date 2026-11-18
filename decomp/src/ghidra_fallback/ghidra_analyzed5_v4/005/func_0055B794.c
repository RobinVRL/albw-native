#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0055b808;
extern undefined4 *DAT_0055b80c;
extern undefined4 DAT_0055b810;
extern uint *DAT_0055b814;
extern undefined4 *DAT_0055b818;
extern undefined4 DAT_0055b81c;

// USA 0055B794 <- EU 0055B76C (Ghidra, non-matching)
// GLOBAL DAT_0055b808 uint *
// GLOBAL DAT_0055b80c undefined4 *
// GLOBAL DAT_0055b810 undefined4
// GLOBAL DAT_0055b814 uint *
// GLOBAL DAT_0055b818 undefined4 *
// GLOBAL DAT_0055b81c undefined4

undefined4 func_0055B794(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055b808 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055b808), iVar1 != 0)) {
    *DAT_0055b80c = DAT_0055b810;
  }
  if (DAT_0055b80c != param_2) {
    if (((*DAT_0055b814 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055b814), iVar1 != 0)) {
      *DAT_0055b818 = DAT_0055b81c;
    }
    if (DAT_0055b818 != param_2) {
      return 0;
    }
  }
  return 1;
}

