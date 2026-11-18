#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057fc4c;
extern undefined4 *DAT_0057fc50;
extern undefined4 DAT_0057fc54;
extern uint *DAT_0057fc58;
extern undefined4 *DAT_0057fc5c;
extern undefined4 DAT_0057fc60;

// USA 0057FBD8 <- EU 0057FBB0 (Ghidra, non-matching)
// GLOBAL DAT_0057fc4c uint *
// GLOBAL DAT_0057fc50 undefined4 *
// GLOBAL DAT_0057fc54 undefined4
// GLOBAL DAT_0057fc58 uint *
// GLOBAL DAT_0057fc5c undefined4 *
// GLOBAL DAT_0057fc60 undefined4

undefined4 func_0057FBD8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057fc4c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057fc4c), iVar1 != 0)) {
    *DAT_0057fc50 = DAT_0057fc54;
  }
  if (DAT_0057fc50 != param_2) {
    if (((*DAT_0057fc58 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057fc58), iVar1 != 0)) {
      *DAT_0057fc5c = DAT_0057fc60;
    }
    if (DAT_0057fc5c != param_2) {
      return 0;
    }
  }
  return 1;
}

