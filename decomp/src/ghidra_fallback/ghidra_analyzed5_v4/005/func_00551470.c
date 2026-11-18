#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0055156c;
extern undefined4 *DAT_00551570;
extern undefined4 DAT_00551574;
extern uint *DAT_00551578;
extern undefined4 *DAT_0055157c;
extern undefined4 DAT_00551580;
extern uint *DAT_00551584;
extern undefined4 *DAT_00551588;
extern undefined4 DAT_0055158c;
extern uint *DAT_00551590;
extern undefined4 *DAT_00551594;
extern undefined4 DAT_00551598;

// USA 00551470 <- EU 00551448 (Ghidra, non-matching)
// GLOBAL DAT_0055156c uint *
// GLOBAL DAT_00551570 undefined4 *
// GLOBAL DAT_00551574 undefined4
// GLOBAL DAT_00551578 uint *
// GLOBAL DAT_0055157c undefined4 *
// GLOBAL DAT_00551580 undefined4
// GLOBAL DAT_00551584 uint *
// GLOBAL DAT_00551588 undefined4 *
// GLOBAL DAT_0055158c undefined4
// GLOBAL DAT_00551590 uint *
// GLOBAL DAT_00551594 undefined4 *
// GLOBAL DAT_00551598 undefined4

undefined4 func_00551470(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055156c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055156c), iVar1 != 0)) {
    *DAT_00551570 = DAT_00551574;
  }
  if (DAT_00551570 != param_2) {
    if (((*DAT_00551578 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00551578), iVar1 != 0)) {
      *DAT_0055157c = DAT_00551580;
    }
    if (DAT_0055157c != param_2) {
      if (((*DAT_00551584 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00551584), iVar1 != 0)) {
        *DAT_00551588 = DAT_0055158c;
      }
      if (DAT_00551588 != param_2) {
        if (((*DAT_00551590 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00551590), iVar1 != 0))
        {
          *DAT_00551594 = DAT_00551598;
        }
        if (DAT_00551594 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

