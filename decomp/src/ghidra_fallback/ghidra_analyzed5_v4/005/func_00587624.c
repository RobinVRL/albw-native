#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00587720;
extern undefined4 *DAT_00587724;
extern undefined4 DAT_00587728;
extern uint *DAT_0058772c;
extern undefined4 *DAT_00587730;
extern undefined4 DAT_00587734;
extern uint *DAT_00587738;
extern undefined4 *DAT_0058773c;
extern undefined4 DAT_00587740;
extern uint *DAT_00587744;
extern undefined4 *DAT_00587748;
extern undefined4 DAT_0058774c;

// USA 00587624 <- EU 005875FC (Ghidra, non-matching)
// GLOBAL DAT_00587720 uint *
// GLOBAL DAT_00587724 undefined4 *
// GLOBAL DAT_00587728 undefined4
// GLOBAL DAT_0058772c uint *
// GLOBAL DAT_00587730 undefined4 *
// GLOBAL DAT_00587734 undefined4
// GLOBAL DAT_00587738 uint *
// GLOBAL DAT_0058773c undefined4 *
// GLOBAL DAT_00587740 undefined4
// GLOBAL DAT_00587744 uint *
// GLOBAL DAT_00587748 undefined4 *
// GLOBAL DAT_0058774c undefined4

undefined4 func_00587624(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00587720 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00587720), iVar1 != 0)) {
    *DAT_00587724 = DAT_00587728;
  }
  if (DAT_00587724 != param_2) {
    if (((*DAT_0058772c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058772c), iVar1 != 0)) {
      *DAT_00587730 = DAT_00587734;
    }
    if (DAT_00587730 != param_2) {
      if (((*DAT_00587738 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00587738), iVar1 != 0)) {
        *DAT_0058773c = DAT_00587740;
      }
      if (DAT_0058773c != param_2) {
        if (((*DAT_00587744 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00587744), iVar1 != 0))
        {
          *DAT_00587748 = DAT_0058774c;
        }
        if (DAT_00587748 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

