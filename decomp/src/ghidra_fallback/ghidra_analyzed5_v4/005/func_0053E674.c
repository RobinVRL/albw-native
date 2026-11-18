#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0053e7b4;
extern undefined4 *DAT_0053e7b8;
extern undefined4 DAT_0053e7bc;
extern uint *DAT_0053e7c0;
extern undefined4 *DAT_0053e7c4;
extern undefined4 DAT_0053e7c8;
extern uint *DAT_0053e7cc;
extern undefined4 *DAT_0053e7d0;
extern undefined4 DAT_0053e7d4;
extern uint *DAT_0053e7d8;
extern undefined4 *DAT_0053e7dc;
extern undefined4 DAT_0053e7e0;
extern uint *DAT_0053e7e4;
extern undefined4 *DAT_0053e7e8;
extern undefined4 DAT_0053e7ec;

// USA 0053E674 <- EU 0053E64C (Ghidra, non-matching)
// GLOBAL DAT_0053e7b4 uint *
// GLOBAL DAT_0053e7b8 undefined4 *
// GLOBAL DAT_0053e7bc undefined4
// GLOBAL DAT_0053e7c0 uint *
// GLOBAL DAT_0053e7c4 undefined4 *
// GLOBAL DAT_0053e7c8 undefined4
// GLOBAL DAT_0053e7cc uint *
// GLOBAL DAT_0053e7d0 undefined4 *
// GLOBAL DAT_0053e7d4 undefined4
// GLOBAL DAT_0053e7d8 uint *
// GLOBAL DAT_0053e7dc undefined4 *
// GLOBAL DAT_0053e7e0 undefined4
// GLOBAL DAT_0053e7e4 uint *
// GLOBAL DAT_0053e7e8 undefined4 *
// GLOBAL DAT_0053e7ec undefined4

undefined4 func_0053E674(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0053e7b4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053e7b4), iVar1 != 0)) {
    *DAT_0053e7b8 = DAT_0053e7bc;
  }
  if (DAT_0053e7b8 != param_2) {
    if (((*DAT_0053e7c0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053e7c0), iVar1 != 0)) {
      *DAT_0053e7c4 = DAT_0053e7c8;
    }
    if (DAT_0053e7c4 != param_2) {
      if (((*DAT_0053e7cc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053e7cc), iVar1 != 0)) {
        *DAT_0053e7d0 = DAT_0053e7d4;
      }
      if (DAT_0053e7d0 != param_2) {
        if (((*DAT_0053e7d8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053e7d8), iVar1 != 0))
        {
          *DAT_0053e7dc = DAT_0053e7e0;
        }
        if (DAT_0053e7dc != param_2) {
          if (((*DAT_0053e7e4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053e7e4), iVar1 != 0)
             ) {
            *DAT_0053e7e8 = DAT_0053e7ec;
          }
          if (DAT_0053e7e8 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

