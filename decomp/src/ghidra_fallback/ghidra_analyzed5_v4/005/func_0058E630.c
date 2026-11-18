#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0058e770;
extern undefined4 *DAT_0058e774;
extern undefined4 DAT_0058e778;
extern uint *DAT_0058e77c;
extern undefined4 *DAT_0058e780;
extern undefined4 DAT_0058e784;
extern uint *DAT_0058e788;
extern undefined4 *DAT_0058e78c;
extern undefined4 DAT_0058e790;
extern uint *DAT_0058e794;
extern undefined4 *DAT_0058e798;
extern undefined4 DAT_0058e79c;
extern uint *DAT_0058e7a0;
extern undefined4 *DAT_0058e7a4;
extern undefined4 DAT_0058e7a8;

// USA 0058E630 <- EU 0058E608 (Ghidra, non-matching)
// GLOBAL DAT_0058e770 uint *
// GLOBAL DAT_0058e774 undefined4 *
// GLOBAL DAT_0058e778 undefined4
// GLOBAL DAT_0058e77c uint *
// GLOBAL DAT_0058e780 undefined4 *
// GLOBAL DAT_0058e784 undefined4
// GLOBAL DAT_0058e788 uint *
// GLOBAL DAT_0058e78c undefined4 *
// GLOBAL DAT_0058e790 undefined4
// GLOBAL DAT_0058e794 uint *
// GLOBAL DAT_0058e798 undefined4 *
// GLOBAL DAT_0058e79c undefined4
// GLOBAL DAT_0058e7a0 uint *
// GLOBAL DAT_0058e7a4 undefined4 *
// GLOBAL DAT_0058e7a8 undefined4

undefined4 func_0058E630(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0058e770 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058e770), iVar1 != 0)) {
    *DAT_0058e774 = DAT_0058e778;
  }
  if (DAT_0058e774 != param_2) {
    if (((*DAT_0058e77c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058e77c), iVar1 != 0)) {
      *DAT_0058e780 = DAT_0058e784;
    }
    if (DAT_0058e780 != param_2) {
      if (((*DAT_0058e788 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058e788), iVar1 != 0)) {
        *DAT_0058e78c = DAT_0058e790;
      }
      if (DAT_0058e78c != param_2) {
        if (((*DAT_0058e794 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058e794), iVar1 != 0))
        {
          *DAT_0058e798 = DAT_0058e79c;
        }
        if (DAT_0058e798 != param_2) {
          if (((*DAT_0058e7a0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058e7a0), iVar1 != 0)
             ) {
            *DAT_0058e7a4 = DAT_0058e7a8;
          }
          if (DAT_0058e7a4 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

