#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00572564;
extern undefined4 *DAT_00572568;
extern undefined4 DAT_0057256c;
extern uint *DAT_00572570;
extern undefined4 *DAT_00572574;
extern undefined4 DAT_00572578;
extern uint *DAT_0057257c;
extern undefined4 *DAT_00572580;
extern undefined4 DAT_00572584;
extern uint *DAT_00572588;
extern undefined4 *DAT_0057258c;
extern undefined4 DAT_00572590;
extern uint *DAT_00572594;
extern undefined4 *DAT_00572598;
extern undefined4 DAT_0057259c;

// USA 00572424 <- EU 005723FC (Ghidra, non-matching)
// GLOBAL DAT_00572564 uint *
// GLOBAL DAT_00572568 undefined4 *
// GLOBAL DAT_0057256c undefined4
// GLOBAL DAT_00572570 uint *
// GLOBAL DAT_00572574 undefined4 *
// GLOBAL DAT_00572578 undefined4
// GLOBAL DAT_0057257c uint *
// GLOBAL DAT_00572580 undefined4 *
// GLOBAL DAT_00572584 undefined4
// GLOBAL DAT_00572588 uint *
// GLOBAL DAT_0057258c undefined4 *
// GLOBAL DAT_00572590 undefined4
// GLOBAL DAT_00572594 uint *
// GLOBAL DAT_00572598 undefined4 *
// GLOBAL DAT_0057259c undefined4

undefined4 func_00572424(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00572564 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00572564), iVar1 != 0)) {
    *DAT_00572568 = DAT_0057256c;
  }
  if (DAT_00572568 != param_2) {
    if (((*DAT_00572570 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00572570), iVar1 != 0)) {
      *DAT_00572574 = DAT_00572578;
    }
    if (DAT_00572574 != param_2) {
      if (((*DAT_0057257c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057257c), iVar1 != 0)) {
        *DAT_00572580 = DAT_00572584;
      }
      if (DAT_00572580 != param_2) {
        if (((*DAT_00572588 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00572588), iVar1 != 0))
        {
          *DAT_0057258c = DAT_00572590;
        }
        if (DAT_0057258c != param_2) {
          if (((*DAT_00572594 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00572594), iVar1 != 0)
             ) {
            *DAT_00572598 = DAT_0057259c;
          }
          if (DAT_00572598 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

