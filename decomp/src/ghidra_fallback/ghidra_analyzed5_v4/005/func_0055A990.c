#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0055aa8c;
extern undefined4 *DAT_0055aa90;
extern undefined4 DAT_0055aa94;
extern uint *DAT_0055aa98;
extern undefined4 *DAT_0055aa9c;
extern undefined4 DAT_0055aaa0;
extern uint *DAT_0055aaa4;
extern undefined4 *DAT_0055aaa8;
extern undefined4 DAT_0055aaac;
extern uint *DAT_0055aab0;
extern undefined4 *DAT_0055aab4;
extern undefined4 DAT_0055aab8;

// USA 0055A990 <- EU 0055A968 (Ghidra, non-matching)
// GLOBAL DAT_0055aa8c uint *
// GLOBAL DAT_0055aa90 undefined4 *
// GLOBAL DAT_0055aa94 undefined4
// GLOBAL DAT_0055aa98 uint *
// GLOBAL DAT_0055aa9c undefined4 *
// GLOBAL DAT_0055aaa0 undefined4
// GLOBAL DAT_0055aaa4 uint *
// GLOBAL DAT_0055aaa8 undefined4 *
// GLOBAL DAT_0055aaac undefined4
// GLOBAL DAT_0055aab0 uint *
// GLOBAL DAT_0055aab4 undefined4 *
// GLOBAL DAT_0055aab8 undefined4

undefined4 func_0055A990(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055aa8c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055aa8c), iVar1 != 0)) {
    *DAT_0055aa90 = DAT_0055aa94;
  }
  if (DAT_0055aa90 != param_2) {
    if (((*DAT_0055aa98 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055aa98), iVar1 != 0)) {
      *DAT_0055aa9c = DAT_0055aaa0;
    }
    if (DAT_0055aa9c != param_2) {
      if (((*DAT_0055aaa4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055aaa4), iVar1 != 0)) {
        *DAT_0055aaa8 = DAT_0055aaac;
      }
      if (DAT_0055aaa8 != param_2) {
        if (((*DAT_0055aab0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055aab0), iVar1 != 0))
        {
          *DAT_0055aab4 = DAT_0055aab8;
        }
        if (DAT_0055aab4 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

