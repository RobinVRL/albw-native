#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0053c584;
extern undefined4 *DAT_0053c588;
extern undefined4 DAT_0053c58c;
extern uint *DAT_0053c590;
extern undefined4 *DAT_0053c594;
extern undefined4 DAT_0053c598;
extern uint *DAT_0053c59c;
extern undefined4 *DAT_0053c5a0;
extern undefined4 DAT_0053c5a4;
extern uint *DAT_0053c5a8;
extern undefined4 *DAT_0053c5ac;
extern undefined4 DAT_0053c5b0;

// USA 0053C488 <- EU 0053C460 (Ghidra, non-matching)
// GLOBAL DAT_0053c584 uint *
// GLOBAL DAT_0053c588 undefined4 *
// GLOBAL DAT_0053c58c undefined4
// GLOBAL DAT_0053c590 uint *
// GLOBAL DAT_0053c594 undefined4 *
// GLOBAL DAT_0053c598 undefined4
// GLOBAL DAT_0053c59c uint *
// GLOBAL DAT_0053c5a0 undefined4 *
// GLOBAL DAT_0053c5a4 undefined4
// GLOBAL DAT_0053c5a8 uint *
// GLOBAL DAT_0053c5ac undefined4 *
// GLOBAL DAT_0053c5b0 undefined4

undefined4 func_0053C488(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0053c584 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053c584), iVar1 != 0)) {
    *DAT_0053c588 = DAT_0053c58c;
  }
  if (DAT_0053c588 != param_2) {
    if (((*DAT_0053c590 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053c590), iVar1 != 0)) {
      *DAT_0053c594 = DAT_0053c598;
    }
    if (DAT_0053c594 != param_2) {
      if (((*DAT_0053c59c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053c59c), iVar1 != 0)) {
        *DAT_0053c5a0 = DAT_0053c5a4;
      }
      if (DAT_0053c5a0 != param_2) {
        if (((*DAT_0053c5a8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053c5a8), iVar1 != 0))
        {
          *DAT_0053c5ac = DAT_0053c5b0;
        }
        if (DAT_0053c5ac != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

