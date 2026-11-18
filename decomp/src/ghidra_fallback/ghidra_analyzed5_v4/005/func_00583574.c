#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0058362c;
extern undefined4 *DAT_00583630;
extern undefined4 DAT_00583634;
extern uint *DAT_00583638;
extern undefined4 *DAT_0058363c;
extern undefined4 DAT_00583640;
extern uint *DAT_00583644;
extern undefined4 *DAT_00583648;
extern undefined4 DAT_0058364c;

// USA 00583574 <- EU 0058354C (Ghidra, non-matching)
// GLOBAL DAT_0058362c uint *
// GLOBAL DAT_00583630 undefined4 *
// GLOBAL DAT_00583634 undefined4
// GLOBAL DAT_00583638 uint *
// GLOBAL DAT_0058363c undefined4 *
// GLOBAL DAT_00583640 undefined4
// GLOBAL DAT_00583644 uint *
// GLOBAL DAT_00583648 undefined4 *
// GLOBAL DAT_0058364c undefined4

undefined4 func_00583574(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0058362c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058362c), iVar1 != 0)) {
    *DAT_00583630 = DAT_00583634;
  }
  if (DAT_00583630 != param_2) {
    if (((*DAT_00583638 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00583638), iVar1 != 0)) {
      *DAT_0058363c = DAT_00583640;
    }
    if (DAT_0058363c != param_2) {
      if (((*DAT_00583644 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00583644), iVar1 != 0)) {
        *DAT_00583648 = DAT_0058364c;
      }
      if (DAT_00583648 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

