#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0053457c;
extern undefined4 *DAT_00534580;
extern undefined4 DAT_00534584;
extern uint *DAT_00534588;
extern undefined4 *DAT_0053458c;
extern undefined4 DAT_00534590;
extern uint *DAT_00534594;
extern undefined4 *DAT_00534598;
extern undefined4 DAT_0053459c;
extern uint *DAT_005345a0;
extern undefined4 *DAT_005345a4;
extern undefined4 DAT_005345a8;

// USA 00534480 <- EU 00534458 (Ghidra, non-matching)
// GLOBAL DAT_0053457c uint *
// GLOBAL DAT_00534580 undefined4 *
// GLOBAL DAT_00534584 undefined4
// GLOBAL DAT_00534588 uint *
// GLOBAL DAT_0053458c undefined4 *
// GLOBAL DAT_00534590 undefined4
// GLOBAL DAT_00534594 uint *
// GLOBAL DAT_00534598 undefined4 *
// GLOBAL DAT_0053459c undefined4
// GLOBAL DAT_005345a0 uint *
// GLOBAL DAT_005345a4 undefined4 *
// GLOBAL DAT_005345a8 undefined4

undefined4 func_00534480(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0053457c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053457c), iVar1 != 0)) {
    *DAT_00534580 = DAT_00534584;
  }
  if (DAT_00534580 != param_2) {
    if (((*DAT_00534588 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00534588), iVar1 != 0)) {
      *DAT_0053458c = DAT_00534590;
    }
    if (DAT_0053458c != param_2) {
      if (((*DAT_00534594 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00534594), iVar1 != 0)) {
        *DAT_00534598 = DAT_0053459c;
      }
      if (DAT_00534598 != param_2) {
        if (((*DAT_005345a0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005345a0), iVar1 != 0))
        {
          *DAT_005345a4 = DAT_005345a8;
        }
        if (DAT_005345a4 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

