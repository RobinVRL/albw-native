#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0052d77c;
extern undefined4 *DAT_0052d780;
extern undefined4 DAT_0052d784;
extern uint *DAT_0052d788;
extern undefined4 *DAT_0052d78c;
extern undefined4 DAT_0052d790;
extern uint *DAT_0052d794;
extern undefined4 *DAT_0052d798;
extern undefined4 DAT_0052d79c;
extern uint *DAT_0052d7a0;
extern undefined4 *DAT_0052d7a4;
extern undefined4 DAT_0052d7a8;
extern uint *DAT_0052d7ac;
extern undefined4 *DAT_0052d7b0;
extern undefined4 DAT_0052d7b4;

// USA 0052D63C <- EU 0052D614 (Ghidra, non-matching)
// GLOBAL DAT_0052d77c uint *
// GLOBAL DAT_0052d780 undefined4 *
// GLOBAL DAT_0052d784 undefined4
// GLOBAL DAT_0052d788 uint *
// GLOBAL DAT_0052d78c undefined4 *
// GLOBAL DAT_0052d790 undefined4
// GLOBAL DAT_0052d794 uint *
// GLOBAL DAT_0052d798 undefined4 *
// GLOBAL DAT_0052d79c undefined4
// GLOBAL DAT_0052d7a0 uint *
// GLOBAL DAT_0052d7a4 undefined4 *
// GLOBAL DAT_0052d7a8 undefined4
// GLOBAL DAT_0052d7ac uint *
// GLOBAL DAT_0052d7b0 undefined4 *
// GLOBAL DAT_0052d7b4 undefined4

undefined4 func_0052D63C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0052d77c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052d77c), iVar1 != 0)) {
    *DAT_0052d780 = DAT_0052d784;
  }
  if (DAT_0052d780 != param_2) {
    if (((*DAT_0052d788 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052d788), iVar1 != 0)) {
      *DAT_0052d78c = DAT_0052d790;
    }
    if (DAT_0052d78c != param_2) {
      if (((*DAT_0052d794 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052d794), iVar1 != 0)) {
        *DAT_0052d798 = DAT_0052d79c;
      }
      if (DAT_0052d798 != param_2) {
        if (((*DAT_0052d7a0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052d7a0), iVar1 != 0))
        {
          *DAT_0052d7a4 = DAT_0052d7a8;
        }
        if (DAT_0052d7a4 != param_2) {
          if (((*DAT_0052d7ac & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052d7ac), iVar1 != 0)
             ) {
            *DAT_0052d7b0 = DAT_0052d7b4;
          }
          if (DAT_0052d7b0 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

