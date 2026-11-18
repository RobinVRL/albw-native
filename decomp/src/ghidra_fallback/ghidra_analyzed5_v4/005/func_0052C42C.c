#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0052c5f4;
extern undefined4 *DAT_0052c5f8;
extern undefined4 DAT_0052c5fc;
extern uint *DAT_0052c600;
extern undefined4 *DAT_0052c604;
extern undefined4 DAT_0052c608;
extern uint *DAT_0052c60c;
extern undefined4 *DAT_0052c610;
extern undefined4 DAT_0052c614;
extern uint *DAT_0052c618;
extern undefined4 *DAT_0052c61c;
extern undefined4 DAT_0052c620;
extern uint *DAT_0052c624;
extern undefined4 *DAT_0052c628;
extern undefined4 DAT_0052c62c;
extern uint *DAT_0052c630;
extern undefined4 *DAT_0052c634;
extern undefined4 DAT_0052c638;
extern uint *DAT_0052c63c;
extern undefined4 *DAT_0052c640;
extern undefined4 DAT_0052c644;

// USA 0052C42C <- EU 0052C404 (Ghidra, non-matching)
// GLOBAL DAT_0052c5f4 uint *
// GLOBAL DAT_0052c5f8 undefined4 *
// GLOBAL DAT_0052c5fc undefined4
// GLOBAL DAT_0052c600 uint *
// GLOBAL DAT_0052c604 undefined4 *
// GLOBAL DAT_0052c608 undefined4
// GLOBAL DAT_0052c60c uint *
// GLOBAL DAT_0052c610 undefined4 *
// GLOBAL DAT_0052c614 undefined4
// GLOBAL DAT_0052c618 uint *
// GLOBAL DAT_0052c61c undefined4 *
// GLOBAL DAT_0052c620 undefined4
// GLOBAL DAT_0052c624 uint *
// GLOBAL DAT_0052c628 undefined4 *
// GLOBAL DAT_0052c62c undefined4
// GLOBAL DAT_0052c630 uint *
// GLOBAL DAT_0052c634 undefined4 *
// GLOBAL DAT_0052c638 undefined4
// GLOBAL DAT_0052c63c uint *
// GLOBAL DAT_0052c640 undefined4 *
// GLOBAL DAT_0052c644 undefined4

undefined4 func_0052C42C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0052c5f4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052c5f4), iVar1 != 0)) {
    *DAT_0052c5f8 = DAT_0052c5fc;
  }
  if (DAT_0052c5f8 != param_2) {
    if (((*DAT_0052c600 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052c600), iVar1 != 0)) {
      *DAT_0052c604 = DAT_0052c608;
    }
    if (DAT_0052c604 != param_2) {
      if (((*DAT_0052c60c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052c60c), iVar1 != 0)) {
        *DAT_0052c610 = DAT_0052c614;
      }
      if (DAT_0052c610 != param_2) {
        if (((*DAT_0052c618 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052c618), iVar1 != 0))
        {
          *DAT_0052c61c = DAT_0052c620;
        }
        if (DAT_0052c61c != param_2) {
          if (((*DAT_0052c624 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052c624), iVar1 != 0)
             ) {
            *DAT_0052c628 = DAT_0052c62c;
          }
          if (DAT_0052c628 != param_2) {
            if (((*DAT_0052c630 & 1) == 0) &&
               (iVar1 = func_00100174((int *)DAT_0052c630), iVar1 != 0)) {
              *DAT_0052c634 = DAT_0052c638;
            }
            if (DAT_0052c634 != param_2) {
              if (((*DAT_0052c63c & 1) == 0) &&
                 (iVar1 = func_00100174((int *)DAT_0052c63c), iVar1 != 0)) {
                *DAT_0052c640 = DAT_0052c644;
              }
              if (DAT_0052c640 != param_2) {
                return 0;
              }
            }
          }
        }
      }
    }
  }
  return 1;
}

