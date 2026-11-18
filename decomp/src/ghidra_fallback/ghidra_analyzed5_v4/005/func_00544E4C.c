#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00544f8c;
extern undefined4 *DAT_00544f90;
extern undefined4 DAT_00544f94;
extern uint *DAT_00544f98;
extern undefined4 *DAT_00544f9c;
extern undefined4 DAT_00544fa0;
extern uint *DAT_00544fa4;
extern undefined4 *DAT_00544fa8;
extern undefined4 DAT_00544fac;
extern uint *DAT_00544fb0;
extern undefined4 *DAT_00544fb4;
extern undefined4 DAT_00544fb8;
extern uint *DAT_00544fbc;
extern undefined4 *DAT_00544fc0;
extern undefined4 DAT_00544fc4;

// USA 00544E4C <- EU 00544E24 (Ghidra, non-matching)
// GLOBAL DAT_00544f8c uint *
// GLOBAL DAT_00544f90 undefined4 *
// GLOBAL DAT_00544f94 undefined4
// GLOBAL DAT_00544f98 uint *
// GLOBAL DAT_00544f9c undefined4 *
// GLOBAL DAT_00544fa0 undefined4
// GLOBAL DAT_00544fa4 uint *
// GLOBAL DAT_00544fa8 undefined4 *
// GLOBAL DAT_00544fac undefined4
// GLOBAL DAT_00544fb0 uint *
// GLOBAL DAT_00544fb4 undefined4 *
// GLOBAL DAT_00544fb8 undefined4
// GLOBAL DAT_00544fbc uint *
// GLOBAL DAT_00544fc0 undefined4 *
// GLOBAL DAT_00544fc4 undefined4

undefined4 func_00544E4C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00544f8c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00544f8c), iVar1 != 0)) {
    *DAT_00544f90 = DAT_00544f94;
  }
  if (DAT_00544f90 != param_2) {
    if (((*DAT_00544f98 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00544f98), iVar1 != 0)) {
      *DAT_00544f9c = DAT_00544fa0;
    }
    if (DAT_00544f9c != param_2) {
      if (((*DAT_00544fa4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00544fa4), iVar1 != 0)) {
        *DAT_00544fa8 = DAT_00544fac;
      }
      if (DAT_00544fa8 != param_2) {
        if (((*DAT_00544fb0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00544fb0), iVar1 != 0))
        {
          *DAT_00544fb4 = DAT_00544fb8;
        }
        if (DAT_00544fb4 != param_2) {
          if (((*DAT_00544fbc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00544fbc), iVar1 != 0)
             ) {
            *DAT_00544fc0 = DAT_00544fc4;
          }
          if (DAT_00544fc0 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

