#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0054c700;
extern undefined4 *DAT_0054c704;
extern undefined4 DAT_0054c708;
extern uint *DAT_0054c70c;
extern undefined4 *DAT_0054c710;
extern undefined4 DAT_0054c714;
extern uint *DAT_0054c718;
extern undefined4 *DAT_0054c71c;
extern undefined4 DAT_0054c720;

// USA 0054C648 <- EU 0054C620 (Ghidra, non-matching)
// GLOBAL DAT_0054c700 uint *
// GLOBAL DAT_0054c704 undefined4 *
// GLOBAL DAT_0054c708 undefined4
// GLOBAL DAT_0054c70c uint *
// GLOBAL DAT_0054c710 undefined4 *
// GLOBAL DAT_0054c714 undefined4
// GLOBAL DAT_0054c718 uint *
// GLOBAL DAT_0054c71c undefined4 *
// GLOBAL DAT_0054c720 undefined4

undefined4 func_0054C648(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0054c700 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054c700), iVar1 != 0)) {
    *DAT_0054c704 = DAT_0054c708;
  }
  if (DAT_0054c704 != param_2) {
    if (((*DAT_0054c70c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054c70c), iVar1 != 0)) {
      *DAT_0054c710 = DAT_0054c714;
    }
    if (DAT_0054c710 != param_2) {
      if (((*DAT_0054c718 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054c718), iVar1 != 0)) {
        *DAT_0054c71c = DAT_0054c720;
      }
      if (DAT_0054c71c != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

