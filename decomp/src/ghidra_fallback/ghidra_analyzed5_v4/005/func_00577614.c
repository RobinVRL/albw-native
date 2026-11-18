#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00577710;
extern undefined4 *DAT_00577714;
extern undefined4 DAT_00577718;
extern uint *DAT_0057771c;
extern undefined4 *DAT_00577720;
extern undefined4 DAT_00577724;
extern uint *DAT_00577728;
extern undefined4 *DAT_0057772c;
extern undefined4 DAT_00577730;
extern uint *DAT_00577734;
extern undefined4 *DAT_00577738;
extern undefined4 DAT_0057773c;

// USA 00577614 <- EU 005775EC (Ghidra, non-matching)
// GLOBAL DAT_00577710 uint *
// GLOBAL DAT_00577714 undefined4 *
// GLOBAL DAT_00577718 undefined4
// GLOBAL DAT_0057771c uint *
// GLOBAL DAT_00577720 undefined4 *
// GLOBAL DAT_00577724 undefined4
// GLOBAL DAT_00577728 uint *
// GLOBAL DAT_0057772c undefined4 *
// GLOBAL DAT_00577730 undefined4
// GLOBAL DAT_00577734 uint *
// GLOBAL DAT_00577738 undefined4 *
// GLOBAL DAT_0057773c undefined4

undefined4 func_00577614(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00577710 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00577710), iVar1 != 0)) {
    *DAT_00577714 = DAT_00577718;
  }
  if (DAT_00577714 != param_2) {
    if (((*DAT_0057771c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057771c), iVar1 != 0)) {
      *DAT_00577720 = DAT_00577724;
    }
    if (DAT_00577720 != param_2) {
      if (((*DAT_00577728 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00577728), iVar1 != 0)) {
        *DAT_0057772c = DAT_00577730;
      }
      if (DAT_0057772c != param_2) {
        if (((*DAT_00577734 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00577734), iVar1 != 0))
        {
          *DAT_00577738 = DAT_0057773c;
        }
        if (DAT_00577738 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

