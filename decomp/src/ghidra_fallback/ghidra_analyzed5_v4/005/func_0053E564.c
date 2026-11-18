#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0053e61c;
extern undefined4 *DAT_0053e620;
extern undefined4 DAT_0053e624;
extern uint *DAT_0053e628;
extern undefined4 *DAT_0053e62c;
extern undefined4 DAT_0053e630;
extern uint *DAT_0053e634;
extern undefined4 *DAT_0053e638;
extern undefined4 DAT_0053e63c;

// USA 0053E564 <- EU 0053E53C (Ghidra, non-matching)
// GLOBAL DAT_0053e61c uint *
// GLOBAL DAT_0053e620 undefined4 *
// GLOBAL DAT_0053e624 undefined4
// GLOBAL DAT_0053e628 uint *
// GLOBAL DAT_0053e62c undefined4 *
// GLOBAL DAT_0053e630 undefined4
// GLOBAL DAT_0053e634 uint *
// GLOBAL DAT_0053e638 undefined4 *
// GLOBAL DAT_0053e63c undefined4

undefined4 func_0053E564(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0053e61c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053e61c), iVar1 != 0)) {
    *DAT_0053e620 = DAT_0053e624;
  }
  if (DAT_0053e620 != param_2) {
    if (((*DAT_0053e628 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053e628), iVar1 != 0)) {
      *DAT_0053e62c = DAT_0053e630;
    }
    if (DAT_0053e62c != param_2) {
      if (((*DAT_0053e634 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053e634), iVar1 != 0)) {
        *DAT_0053e638 = DAT_0053e63c;
      }
      if (DAT_0053e638 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

