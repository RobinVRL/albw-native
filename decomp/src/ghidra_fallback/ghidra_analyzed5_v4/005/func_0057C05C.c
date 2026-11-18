#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057c19c;
extern undefined4 *DAT_0057c1a0;
extern undefined4 DAT_0057c1a4;
extern uint *DAT_0057c1a8;
extern undefined4 *DAT_0057c1ac;
extern undefined4 DAT_0057c1b0;
extern uint *DAT_0057c1b4;
extern undefined4 *DAT_0057c1b8;
extern undefined4 DAT_0057c1bc;
extern uint *DAT_0057c1c0;
extern undefined4 *DAT_0057c1c4;
extern undefined4 DAT_0057c1c8;
extern uint *DAT_0057c1cc;
extern undefined4 *DAT_0057c1d0;
extern undefined4 DAT_0057c1d4;

// USA 0057C05C <- EU 0057C034 (Ghidra, non-matching)
// GLOBAL DAT_0057c19c uint *
// GLOBAL DAT_0057c1a0 undefined4 *
// GLOBAL DAT_0057c1a4 undefined4
// GLOBAL DAT_0057c1a8 uint *
// GLOBAL DAT_0057c1ac undefined4 *
// GLOBAL DAT_0057c1b0 undefined4
// GLOBAL DAT_0057c1b4 uint *
// GLOBAL DAT_0057c1b8 undefined4 *
// GLOBAL DAT_0057c1bc undefined4
// GLOBAL DAT_0057c1c0 uint *
// GLOBAL DAT_0057c1c4 undefined4 *
// GLOBAL DAT_0057c1c8 undefined4
// GLOBAL DAT_0057c1cc uint *
// GLOBAL DAT_0057c1d0 undefined4 *
// GLOBAL DAT_0057c1d4 undefined4

undefined4 func_0057C05C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057c19c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057c19c), iVar1 != 0)) {
    *DAT_0057c1a0 = DAT_0057c1a4;
  }
  if (DAT_0057c1a0 != param_2) {
    if (((*DAT_0057c1a8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057c1a8), iVar1 != 0)) {
      *DAT_0057c1ac = DAT_0057c1b0;
    }
    if (DAT_0057c1ac != param_2) {
      if (((*DAT_0057c1b4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057c1b4), iVar1 != 0)) {
        *DAT_0057c1b8 = DAT_0057c1bc;
      }
      if (DAT_0057c1b8 != param_2) {
        if (((*DAT_0057c1c0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057c1c0), iVar1 != 0))
        {
          *DAT_0057c1c4 = DAT_0057c1c8;
        }
        if (DAT_0057c1c4 != param_2) {
          if (((*DAT_0057c1cc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057c1cc), iVar1 != 0)
             ) {
            *DAT_0057c1d0 = DAT_0057c1d4;
          }
          if (DAT_0057c1d0 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

